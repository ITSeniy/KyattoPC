#!/usr/bin/env python3
"""Interactive marked WRAM capture for building the Teyandee RAM/ROM map.

The game keeps a ten-minute frame-history ring in the TCP debug server.  This
client pauses on user markers, preserves a short full-rate window before every
marker, then exports a coarse session timeline plus candidate RAM addresses.
"""

from __future__ import annotations

import argparse
import csv
import gzip
import json
import re
import socket
import sys
import time
from datetime import datetime, timezone
from pathlib import Path
from typing import Any, Iterable


WRAM_SIZE = 0x0800
FORMAT_VERSION = 1
RDB_PAGE_SIZE = 4096
RDB_RING_SIZE = 1 << 20


class DebugClient:
    def __init__(self, host: str, port: int, timeout: float = 10.0) -> None:
        self.sock = socket.create_connection((host, port), timeout=timeout)
        self.sock.settimeout(timeout)
        self.pending = b""
        self.next_id = 1
        self.events: list[dict[str, Any]] = []

    def close(self) -> None:
        self.sock.close()

    def _read_line(self) -> dict[str, Any]:
        while b"\n" not in self.pending:
            chunk = self.sock.recv(65536)
            if not chunk:
                raise ConnectionError("debug server closed the connection")
            self.pending += chunk
        raw, self.pending = self.pending.split(b"\n", 1)
        return json.loads(raw.decode("utf-8"))

    def cmd(self, command: str, **params: Any) -> dict[str, Any]:
        request_id = self.next_id
        self.next_id += 1
        payload = {"cmd": command, "id": request_id, **params}
        self.sock.sendall((json.dumps(payload) + "\n").encode("utf-8"))
        while True:
            response = self._read_line()
            if "event" in response and "id" not in response:
                self.events.append(response)
                continue
            if response.get("id") != request_id:
                continue
            if not response.get("ok", False):
                error = response.get("error", response.get("err", "unknown error"))
                raise RuntimeError(f"{command}: {error}")
            return response

    def wait_event(self, event_name: str) -> dict[str, Any]:
        """Wait for one asynchronous runner event without timing out gameplay."""
        while True:
            for index, event in enumerate(self.events):
                if event.get("event") == event_name:
                    return self.events.pop(index)
            try:
                response = self._read_line()
            except socket.timeout:
                continue
            if response.get("event") == event_name:
                return response
            if "event" in response:
                self.events.append(response)


class WriteTraceCollector:
    """Optional reverse-debug WRAM writer capture between user markers."""

    def __init__(self, output_dir: Path, requested: bool) -> None:
        self.output_path = output_dir / "writes.jsonl.gz"
        self.requested = requested
        self.enabled = False
        self.warning = ""
        self.segments: list[dict[str, Any]] = []

    def arm(self, client: DebugClient) -> None:
        if not self.requested:
            return
        try:
            client.cmd("rdb_status")
            client.cmd("rdb_range_clear")
            client.cmd("rdb_range", lo="0x0000", hi="0x07FF")
            client.cmd("rdb_reset")
            self.enabled = True
            print("Reverse-debug WRAM write trace armed for marker-to-marker segments.")
        except RuntimeError as exc:
            self.warning = (
                "write tracing unavailable; use a build made with "
                f"NESRECOMP_REVERSE_DEBUG=ON ({exc})"
            )
            print(f"Warning: {self.warning}", file=sys.stderr)

    def capture_segment(
        self, client: DebugClient, previous: dict[str, Any], current: dict[str, Any]
    ) -> None:
        if not self.enabled:
            return
        count_info = client.cmd("rdb_count")
        count = int(count_info.get("count", 0))
        write_index = int(count_info.get("write_idx", count))
        segment_name = f"{previous['label']}->{current['label']}"
        emitted = 0
        with gzip.open(self.output_path, "at", encoding="utf-8") as stream:
            for start in range(0, count, RDB_PAGE_SIZE):
                response = client.cmd("rdb_dump", start=start, max=RDB_PAGE_SIZE)
                for entry in response.get("entries", []):
                    entry["segment"] = segment_name
                    entry["segment_frame_a"] = int(previous["frame"])
                    entry["segment_frame_b"] = int(current["frame"])
                    stream.write(json.dumps(entry, separators=(",", ":")))
                    stream.write("\n")
                    emitted += 1
        self.segments.append(
            {
                "from": previous["label"],
                "to": current["label"],
                "frame_a": int(previous["frame"]),
                "frame_b": int(current["frame"]),
                "entries": emitted,
                "write_index": write_index,
                "ring_wrapped": write_index > RDB_RING_SIZE,
            }
        )
        client.cmd("rdb_reset")
        print(f"  write trace {segment_name}: {emitted} entries")

    def metadata(self) -> dict[str, Any]:
        return {
            "requested": self.requested,
            "enabled": self.enabled,
            "warning": self.warning,
            "segments": self.segments,
        }


def connect_with_retry(host: str, port: int, seconds: float) -> DebugClient:
    deadline = time.monotonic() + seconds
    last_error: OSError | None = None
    while time.monotonic() < deadline:
        try:
            client = DebugClient(host, port)
            client.cmd("ping")
            return client
        except OSError as exc:
            last_error = exc
            time.sleep(0.25)
    raise ConnectionError(
        f"TCP debug server {host}:{port} did not appear within {seconds:g}s: {last_error}"
    )


def wait_for_first_frame(client: DebugClient, seconds: float = 30.0) -> dict[str, Any]:
    """Wait until game_post_nmi has committed at least one history record."""
    deadline = time.monotonic() + seconds
    history: dict[str, Any] = {}
    while time.monotonic() < deadline:
        history = client.cmd("history")
        if int(history.get("count", 0)) > 0:
            return history
        time.sleep(0.05)
    raise RuntimeError(f"game produced no frame-history records within {seconds:g}s: {history}")


def utc_now() -> str:
    return datetime.now(timezone.utc).isoformat()


def safe_label(label: str) -> str:
    text = re.sub(r"[^A-Za-z0-9А-Яа-я_-]+", "_", label.strip())
    return text.strip("_")[:48] or "MARK"


def memory_region(address: int) -> str:
    if address < 0x0100:
        return "zero_page"
    if address < 0x0200:
        return "cpu_stack"
    if address < 0x0300:
        return "oam_shadow"
    return "work_ram"


def signed_delta(before: int, after: int) -> int:
    return ((after - before + 128) & 0xFF) - 128


def fetch_frame(client: DebugClient, frame: int) -> dict[str, Any]:
    metadata = client.cmd("get_frame", frame=frame)
    response = client.cmd("read_frame_ram", frame=frame, addr="0x0000", len=WRAM_SIZE)
    ram_hex = response.get("hex", "")
    if len(ram_hex) != WRAM_SIZE * 2:
        raise RuntimeError(
            f"frame {frame}: expected {WRAM_SIZE * 2} RAM hex chars, got {len(ram_hex)}"
        )
    metadata.pop("id", None)
    metadata.pop("ok", None)
    metadata.pop("ram_zp", None)  # duplicated by the full snapshot below
    metadata["ram"] = ram_hex
    return metadata


def fetch_range(
    client: DebugClient,
    target_frames: Iterable[int],
    frames: dict[int, dict[str, Any]],
    progress_label: str,
) -> None:
    missing = sorted(set(target_frames) - frames.keys())
    total = len(missing)
    for index, frame in enumerate(missing, 1):
        frames[frame] = fetch_frame(client, frame)
        if total >= 100 and (index == total or index % 100 == 0):
            print(f"  {progress_label}: {index}/{total}", flush=True)


def marker_window_frames(marker: int, oldest: int, window: int) -> range:
    return range(max(oldest, marker - window + 1), marker + 1)


def stable_value(
    ram_by_frame: dict[int, bytes], frame_numbers: Iterable[int], address: int
) -> int | None:
    values = []
    for frame in frame_numbers:
        ram = ram_by_frame.get(frame)
        if ram is None:
            return None
        values.append(ram[address])
    if not values or any(value != values[0] for value in values[1:]):
        return None
    return values[0]


def analyse(
    frames: dict[int, dict[str, Any]], markers: list[dict[str, Any]], stable_window: int
) -> dict[str, Any]:
    ordered_frames = sorted(frames)
    ram_by_frame = {frame: bytes.fromhex(frames[frame]["ram"]) for frame in ordered_frames}

    marker_values: dict[int, bytes] = {}
    for marker in markers:
        frame = int(marker["frame"])
        if frame in ram_by_frame:
            marker_values[frame] = ram_by_frame[frame]

    transitions: list[dict[str, Any]] = []
    stable_change_counts = [0] * WRAM_SIZE
    marker_change_counts = [0] * WRAM_SIZE

    for previous, current in zip(markers, markers[1:]):
        frame_a, frame_b = int(previous["frame"]), int(current["frame"])
        ram_a, ram_b = marker_values.get(frame_a), marker_values.get(frame_b)
        if ram_a is None or ram_b is None:
            transitions.append(
                {
                    "from": previous["label"],
                    "to": current["label"],
                    "frame_a": frame_a,
                    "frame_b": frame_b,
                    "error": "marker frame was evicted before export",
                }
            )
            continue

        exact: list[dict[str, Any]] = []
        stable: list[dict[str, Any]] = []
        window_a = range(max(0, frame_a - stable_window + 1), frame_a + 1)
        window_b = range(max(0, frame_b - stable_window + 1), frame_b + 1)

        for address in range(WRAM_SIZE):
            before, after = ram_a[address], ram_b[address]
            if before == after:
                continue
            marker_change_counts[address] += 1
            change = {
                "address": f"0x{address:04X}",
                "region": memory_region(address),
                "before": before,
                "after": after,
                "delta": signed_delta(before, after),
            }
            exact.append(change)

            stable_before = stable_value(ram_by_frame, window_a, address)
            stable_after = stable_value(ram_by_frame, window_b, address)
            if stable_before is not None and stable_after is not None and stable_before != stable_after:
                stable_change_counts[address] += 1
                stable.append(change)

        transitions.append(
            {
                "from": previous["label"],
                "to": current["label"],
                "frame_a": frame_a,
                "frame_b": frame_b,
                "duration_frames": frame_b - frame_a,
                "exact_change_count": len(exact),
                "stable_change_count": len(stable),
                "stable_candidates": stable,
                "exact_changes": exact,
            }
        )

    address_stats: list[dict[str, Any]] = []
    for address in range(WRAM_SIZE):
        values = [ram_by_frame[frame][address] for frame in ordered_frames]
        changes = sum(a != b for a, b in zip(values, values[1:]))
        address_stats.append(
            {
                "address_int": address,
                "address": f"0x{address:04X}",
                "region": memory_region(address),
                "first": values[0] if values else 0,
                "last": values[-1] if values else 0,
                "min": min(values) if values else 0,
                "max": max(values) if values else 0,
                "distinct_values": len(set(values)),
                "sample_changes": changes,
                "marker_changes": marker_change_counts[address],
                "stable_marker_changes": stable_change_counts[address],
            }
        )

    ranked = sorted(
        address_stats,
        key=lambda row: (
            -row["stable_marker_changes"],
            -row["marker_changes"],
            row["sample_changes"],
            row["address_int"],
        ),
    )
    return {"transitions": transitions, "address_stats": address_stats, "ranked": ranked}


def write_outputs(
    output_dir: Path,
    frames: dict[int, dict[str, Any]],
    markers: list[dict[str, Any]],
    analysis: dict[str, Any],
    metadata: dict[str, Any],
) -> None:
    output_dir.mkdir(parents=True, exist_ok=True)

    with gzip.open(output_dir / "frames.jsonl.gz", "wt", encoding="utf-8") as stream:
        for frame in sorted(frames):
            stream.write(json.dumps(frames[frame], ensure_ascii=False, separators=(",", ":")))
            stream.write("\n")

    session = {**metadata, "markers": markers, "sampled_frame_count": len(frames)}
    (output_dir / "session.json").write_text(
        json.dumps(session, ensure_ascii=False, indent=2), encoding="utf-8"
    )

    summary = {
        "format_version": FORMAT_VERSION,
        "markers": markers,
        "transitions": analysis["transitions"],
        "ranked_candidates": analysis["ranked"][:256],
    }
    (output_dir / "summary.json").write_text(
        json.dumps(summary, ensure_ascii=False, indent=2), encoding="utf-8"
    )

    csv_fields = [
        "address",
        "region",
        "first",
        "last",
        "min",
        "max",
        "distinct_values",
        "sample_changes",
        "marker_changes",
        "stable_marker_changes",
        "hypothesis",
        "notes",
    ]
    with (output_dir / "ram_candidates.csv").open("w", encoding="utf-8-sig", newline="") as stream:
        writer = csv.DictWriter(stream, fieldnames=csv_fields)
        writer.writeheader()
        for row in analysis["ranked"]:
            item = {key: row.get(key, "") for key in csv_fields}
            item["hypothesis"] = ""
            item["notes"] = ""
            writer.writerow(item)

    report: list[str] = [
        "# Teyandee RAM capture report",
        "",
        f"Captured at: `{metadata['captured_at']}`  ",
        f"Sampled frames: **{len(frames)}**  ",
        f"Input recording: `{metadata.get('input_record', '')}`",
        "",
        "## Markers",
        "",
        "| # | Frame | Label | Screenshot |",
        "|---:|---:|---|---|",
    ]
    for index, marker in enumerate(markers, 1):
        report.append(
            f"| {index} | {marker['frame']} | {marker['label']} | {marker.get('screenshot', '')} |"
        )

    report.extend(["", "## Stable changes between markers", ""])
    for transition in analysis["transitions"]:
        report.append(
            f"### {transition['from']} → {transition['to']} "
            f"(frames {transition['frame_a']}–{transition['frame_b']})"
        )
        report.append("")
        if "error" in transition:
            report.append(f"Warning: {transition['error']}")
            report.append("")
            continue
        candidates = transition["stable_candidates"]
        report.append(
            f"Stable candidates: **{len(candidates)}**; all exact changes: "
            f"**{transition['exact_change_count']}**."
        )
        report.append("")
        if candidates:
            report.extend(["| Address | Region | Before | After | Δ |", "|---|---|---:|---:|---:|"])
            for change in candidates[:96]:
                report.append(
                    f"| `{change['address']}` | {change['region']} | "
                    f"{change['before']} | {change['after']} | {change['delta']:+d} |"
                )
            if len(candidates) > 96:
                report.append(f"\n_Another {len(candidates) - 96} candidates are in summary.json._")
        report.append("")

    (output_dir / "report.md").write_text("\n".join(report) + "\n", encoding="utf-8")


def take_marker(
    client: DebugClient,
    label: str,
    output_dir: Path,
    markers: list[dict[str, Any]],
    frames: dict[int, dict[str, Any]],
    marker_window: int,
    screenshots: bool,
) -> dict[str, Any]:
    client.cmd("pause")
    history = client.cmd("history")
    if int(history.get("count", 0)) <= 0:
        raise RuntimeError("debug history is empty; the game has not produced a frame yet")
    oldest, frame = int(history["oldest"]), int(history["newest"])
    marker: dict[str, Any] = {"label": label, "frame": frame, "created_at": utc_now()}

    if screenshots:
        screenshots_dir = output_dir / "screenshots"
        screenshots_dir.mkdir(parents=True, exist_ok=True)
        filename = f"{len(markers) + 1:02d}_{safe_label(label)}_f{frame}.png"
        screenshot = (screenshots_dir / filename).resolve()
        response = client.cmd("screenshot", path=screenshot.as_posix())
        marker["screenshot"] = str(Path(response.get("path", screenshot)).name)

    fetch_range(
        client,
        marker_window_frames(frame, oldest, marker_window),
        frames,
        f"marker {label}",
    )
    markers.append(marker)
    print(f"[MARK] frame={frame} label={label}")
    return marker


def export_session(
    client: DebugClient,
    args: argparse.Namespace,
    output_dir: Path,
    markers: list[dict[str, Any]],
    frames: dict[int, dict[str, Any]],
    write_trace: WriteTraceCollector,
) -> None:
    history = client.cmd("history")
    oldest, newest = int(history["oldest"]), int(history["newest"])
    coarse = range(oldest, newest + 1, args.sample_step)
    print(f"Exporting coarse timeline {oldest}..{newest} every {args.sample_step} frames...")
    fetch_range(client, coarse, frames, "timeline")

    analysis = analyse(frames, markers, args.stable_window)
    metadata = {
        "format_version": FORMAT_VERSION,
        "captured_at": utc_now(),
        "host": args.host,
        "port": args.port,
        "history_oldest": oldest,
        "history_newest": newest,
        "sample_step": args.sample_step,
        "marker_window": args.marker_window,
        "stable_window": args.stable_window,
        "input_record": str(Path(args.input_record).resolve()) if args.input_record else "",
        "write_trace": write_trace.metadata(),
    }
    write_outputs(output_dir, frames, markers, analysis, metadata)
    try:
        from ram_analyzer import analyze_session

        analyze_session(output_dir)
    except Exception as exc:
        print(f"Warning: extended RAM analysis failed: {exc}", file=sys.stderr)


def self_test() -> None:
    frames: dict[int, dict[str, Any]] = {}
    for frame in range(41):
        ram = bytearray(WRAM_SIZE)
        ram[0x10] = 5 if frame >= 20 else 0       # stable event field
        ram[0x20] = frame & 0xFF                  # high-churn timer
        frames[frame] = {"frame": frame, "ram": ram.hex()}
    markers = [{"label": "BEFORE", "frame": 9}, {"label": "AFTER", "frame": 30}]
    result = analyse(frames, markers, stable_window=5)
    stable = {item["address"] for item in result["transitions"][0]["stable_candidates"]}
    assert "0x0010" in stable
    assert "0x0020" not in stable
    print("ram_capture self-test: PASS")


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description="Interactive marked Teyandee WRAM capture")
    parser.add_argument("--host", default="127.0.0.1")
    parser.add_argument("--port", type=int, default=4370)
    parser.add_argument("--output", type=Path, default=Path("captures/latest"))
    parser.add_argument("--input-record", default="")
    parser.add_argument("--connect-timeout", type=float, default=90.0)
    parser.add_argument("--sample-step", type=int, default=10)
    parser.add_argument("--marker-window", type=int, default=30)
    parser.add_argument("--stable-window", type=int, default=10)
    parser.add_argument("--no-screenshots", action="store_true")
    parser.add_argument("--leave-running", action="store_true")
    parser.add_argument(
        "--trace-writes",
        action="store_true",
        help="capture exact WRAM writer PC/function data (requires reverse-debug build)",
    )
    parser.add_argument(
        "--terminal-markers",
        action="store_true",
        help="use the legacy Alt+Tab terminal marker workflow instead of the F9 prompt",
    )
    parser.add_argument("--self-test", action="store_true")
    args = parser.parse_args()
    if args.sample_step < 1 or args.marker_window < 1 or args.stable_window < 1:
        parser.error("sample-step, marker-window and stable-window must be positive")
    return args


def main() -> int:
    args = parse_args()
    if args.self_test:
        self_test()
        return 0

    output_dir = args.output.resolve()
    output_dir.mkdir(parents=True, exist_ok=True)
    print(f"Waiting for Teyandee debug server at {args.host}:{args.port}...")
    client = connect_with_retry(args.host, args.port, args.connect_timeout)
    markers: list[dict[str, Any]] = []
    frames: dict[int, dict[str, Any]] = {}
    write_trace = WriteTraceCollector(output_dir, args.trace_writes)
    exported = False

    try:
        print("Connected. The game will pause for an exact SESSION_START marker.")
        wait_for_first_frame(client)
        take_marker(
            client, "SESSION_START", output_dir, markers, frames,
            args.marker_window, not args.no_screenshots,
        )
        write_trace.arm(client)
        if args.terminal_markers:
            input("Press Enter to start playing...")
            client.cmd("continue")

            print(
                "\nAfter each isolated action, Alt+Tab here and enter a marker.\n"
                "Examples: IDLE, MOVE_RIGHT, JUMP, ATTACK, TAKE_DAMAGE, PICKUP, ENTER_ROOM.\n"
                "Commands: status, help, done. Each marker pauses the game exactly."
            )
            while True:
                try:
                    command = input("capture> ").strip()
                except EOFError:
                    command = "done"
                if not command:
                    continue
                lowered = command.lower()
                if lowered == "help":
                    print("Enter any label to create a marker; status shows the ring; done exports and exits.")
                    continue
                if lowered == "status":
                    print(client.cmd("history"))
                    continue
                if lowered == "done":
                    marker = take_marker(
                        client, "SESSION_END", output_dir, markers, frames,
                        args.marker_window, not args.no_screenshots,
                    )
                    write_trace.capture_segment(client, markers[-2], marker)
                    break

                marker = take_marker(
                    client, safe_label(command).upper(), output_dir, markers, frames,
                    args.marker_window, not args.no_screenshots,
                )
                write_trace.capture_segment(client, markers[-2], marker)
                input("Marker saved. Press Enter to resume...")
                client.cmd("continue")
        else:
            print(
                "In-game markers are ready. The game is starting automatically.\n"
                "Press F9 in the game, type a state label, and press Enter.\n"
                "The marker is saved and play resumes automatically. Type DONE to finish."
            )
            client.cmd("continue")
            while True:
                event = client.wait_event("capture_marker")
                label = safe_label(str(event.get("label", "MARK"))).upper()
                if label in {"DONE", "SESSION_END"}:
                    marker = take_marker(
                        client, "SESSION_END", output_dir, markers, frames,
                        args.marker_window, not args.no_screenshots,
                    )
                    write_trace.capture_segment(client, markers[-2], marker)
                    break
                marker = take_marker(
                    client, label, output_dir, markers, frames,
                    args.marker_window, not args.no_screenshots,
                )
                write_trace.capture_segment(client, markers[-2], marker)
                client.cmd("continue")

        export_session(client, args, output_dir, markers, frames, write_trace)
        exported = True
        print(f"Capture complete: {output_dir}")
        print("  report.md, analysis.md, ram_candidates.csv, summary.json, frames.jsonl.gz")

        if args.leave_running:
            client.cmd("continue")
        else:
            try:
                client.cmd("quit")
            except (ConnectionError, OSError):
                pass
        return 0
    except KeyboardInterrupt:
        print("\nInterrupted. Exporting the captured portion...", file=sys.stderr)
        try:
            client.cmd("pause")
            if markers and not exported:
                export_session(client, args, output_dir, markers, frames, write_trace)
                print(f"Partial capture written to {output_dir}", file=sys.stderr)
        except Exception as exc:  # best-effort emergency export
            print(f"Partial export failed: {exc}", file=sys.stderr)
        return 130
    finally:
        client.close()


if __name__ == "__main__":
    raise SystemExit(main())
