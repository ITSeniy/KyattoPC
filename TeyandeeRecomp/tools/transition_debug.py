#!/usr/bin/env python3
"""Catch the first malformed Teyandee object walk during a room transition.

Requires a NESRECOMP_REVERSE_DEBUG build and debug.ini next to the executable.
The game stays parked at the offending block after a report is written.
"""

from __future__ import annotations

import argparse
import json
import socket
import sys
import time
from collections import deque
from datetime import datetime, timezone
from pathlib import Path
from typing import Any


OBJECT_CURSOR_ADVANCED = 0xE594  # first block after E587 wrote both $50/$51
OBJECT_FIRST = 0x0420
OBJECT_STRIDE = 0x20
OBJECT_FIRST_ADVANCED = OBJECT_FIRST + OBJECT_STRIDE
OBJECT_SENTINEL = 0x05A0


class DebugClient:
    def __init__(self, host: str, port: int, timeout: float = 5.0) -> None:
        self.sock = socket.create_connection((host, port), timeout=timeout)
        self.sock.settimeout(timeout)
        self.pending = b""
        self.next_id = 1

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
            if response.get("id") == request_id:
                if not response.get("ok", False):
                    error = response.get("error", response.get("err", "unknown error"))
                    raise RuntimeError(f"{command}: {error}")
                return response


def hex_bytes(response: dict[str, Any]) -> bytes:
    return bytes.fromhex(response["hex"])


def read_ram(client: DebugClient, address: int, length: int) -> bytes:
    data = bytearray()
    while len(data) < length:
        chunk_len = min(256, length - len(data))
        response = client.cmd(
            "read_ram", addr=f"0x{address + len(data):04X}", len=chunk_len
        )
        data.extend(hex_bytes(response))
    return bytes(data)


def read_cursor(client: DebugClient) -> int:
    raw = read_ram(client, 0x50, 2)
    return raw[0] | (raw[1] << 8)


def wait_until_parked(client: DebugClient, poll_seconds: float) -> dict[str, Any]:
    while True:
        parked = client.cmd("rdb_parked")
        if parked.get("paused"):
            return parked
        time.sleep(poll_seconds)


def arm_capture(client: DebugClient) -> None:
    status = client.cmd("rdb_status")
    if "store_count" not in status:
        raise RuntimeError(
            "runner has no reverse-debug support; use build_transition_debug.ps1"
        )

    client.cmd("rdb_break_clear")
    client.cmd("rdb_watch_clear")
    client.cmd("rdb_range_clear")
    client.cmd("rdb_anchor_on", interval=64)
    client.cmd("rdb_break", pc=OBJECT_CURSOR_ADVANCED)
    reset_walk_trace(client)


def reset_walk_trace(client: DebugClient) -> None:
    # Anchors make Tier 1 retain every WRAM store, with exact generated PC.
    client.cmd("rdb_reset")
    client.cmd("trace_calls_reset")
    client.cmd("trace_calls")
    client.cmd("trace_blocks_reset")
    client.cmd("trace_blocks")


def collect_report(
    client: DebugClient,
    reason: str,
    parked: dict[str, Any],
    cursor_events: list[dict[str, Any]],
    frame_snapshots: deque[dict[str, Any]],
) -> dict[str, Any]:
    status = client.cmd("rdb_status")
    def safe(command: str, **params: Any) -> dict[str, Any]:
        try:
            return client.cmd(command, **params)
        except Exception as exc:  # keep the rest of the evidence if one probe fails
            return {"ok": False, "capture_error": str(exc)}

    def paged(command: str, count_field: str, limit: int = 4096) -> dict[str, Any]:
        count = int(status.get(count_field, 0))
        start = max(0, count - limit)
        entries: list[dict[str, Any]] = []
        try:
            while start < count:
                page_size = min(96, count - start)
                params: dict[str, Any] = {"start": start, "max": page_size}
                if command in ("get_block_trace", "get_call_trace"):
                    params.update({"from": 0, "to": 0xFFFF})
                page = client.cmd(command, **params)
                page_entries = page.get("entries", [])
                entries.extend(page_entries)
                if not page_entries:
                    break
                start += page_size
            return {
                "ok": True,
                "count": count,
                "returned": len(entries),
                "entries": entries,
            }
        except Exception as exc:
            return {
                "ok": False,
                "count": count,
                "returned": len(entries),
                "entries": entries,
                "capture_error": str(exc),
            }

    return {
        "schema": "teyandee-transition-debug-v1",
        "captured_at": datetime.now(timezone.utc).isoformat(),
        "reason": reason,
        "invariant": {
            "cursor_advanced_pc": f"0x{OBJECT_CURSOR_ADVANCED:04X}",
            "first_object": f"0x{OBJECT_FIRST:04X}",
            "first_advanced": f"0x{OBJECT_FIRST_ADVANCED:04X}",
            "stride": f"0x{OBJECT_STRIDE:02X}",
            "sentinel": f"0x{OBJECT_SENTINEL:04X}",
        },
        "parked": parked,
        "cursor_events": cursor_events,
        "registers": safe("get_registers"),
        "call_stack": safe("call_stack"),
        "mapper": safe("mapper_state"),
        "ppu_state": safe("ppu_state"),
        "palette": safe("read_palette"),
        "nametables": safe("dump_nametables"),
        "dispatch_misses": safe("dispatch_miss_info"),
        "dispatch_ring": safe("dispatch_ring", n=128),
        "frame_events": safe("fring"),
        "reverse_debug_status": status,
        "writes": paged("rdb_dump", "store_count"),
        "blocks": paged("get_block_trace", "block_count"),
        "calls": paged("get_call_trace", "call_count"),
        "current_ram_hex": read_ram(client, 0, 0x800).hex(),
        "recent_walk_entries": list(frame_snapshots),
    }


def write_report(path: Path, report: dict[str, Any]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(report, ensure_ascii=False, indent=2), encoding="utf-8")


def resume(client: DebugClient) -> None:
    client.cmd("rdb_break_clear")
    client.cmd("rdb_watch_clear")
    client.cmd("rdb_break_continue")


def monitor(args: argparse.Namespace) -> int:
    client = DebugClient(args.host, args.port, timeout=args.timeout)
    try:
        client.cmd("ping")
        if args.resume:
            resume(client)
            print("Transition debugger cleared; game resumed.")
            return 0

        arm_capture(client)
        print(
            "Attached. Waiting for object walks; reproduce the location exit/return. "
            "The game will pause briefly at $E594."
        )

        cursor_events: list[dict[str, Any]] = []
        frame_snapshots: deque[dict[str, Any]] = deque(maxlen=args.history)

        while True:
            parked = wait_until_parked(client, args.poll)
            pc = int(str(parked.get("pc", "0")), 0)
            registers = client.cmd("get_registers")
            frame = int(registers["frame"])

            if pc != OBJECT_CURSOR_ADVANCED:
                client.cmd("rdb_break_continue")
                continue

            cursor = read_cursor(client)
            valid_cursor = (
                OBJECT_FIRST_ADVANCED <= cursor <= OBJECT_SENTINEL
                and (cursor - OBJECT_FIRST) % OBJECT_STRIDE == 0
            )
            cursor_events.append(
                {
                    "frame": frame,
                    "pc": f"0x{pc:04X}",
                    "cursor": f"0x{cursor:04X}",
                    "valid": valid_cursor,
                }
            )
            if len(cursor_events) > 256:
                del cursor_events[:-256]

            # There are two legitimate walkers. DE74 initializes $50/$51, while
            # D8E6 initializes it at D901/D905. Both reach E594 after advancing.
            # Validate the value itself instead of assuming that $05A0 must be
            # followed by no further E594: D8E6 can legitimately restart at
            # $0420 and produce $0440 in the same frame.
            if valid_cursor:
                if cursor == OBJECT_FIRST_ADVANCED:
                    snapshot = read_ram(client, 0, 0x800)
                    frame_snapshots.append(
                        {"frame": frame, "cursor": f"0x{cursor:04X}", "ram_hex": snapshot.hex()}
                    )
                client.cmd("rdb_break_continue")
                continue

            reason = (
                "object cursor escaped valid post-increment range "
                f"0x{OBJECT_FIRST_ADVANCED:04X}-0x{OBJECT_SENTINEL:04X}: "
                f"got 0x{cursor:04X}"
            )

            report = collect_report(
                client, reason, parked, cursor_events, frame_snapshots
            )
            write_report(args.output, report)
            print(f"\nCAUGHT: {reason}")
            print(f"Report: {args.output.resolve()}")
            print(
                "The game is intentionally still parked. Inspect it live or run "
                "this script with --resume."
            )
            return 2
    except KeyboardInterrupt:
        print("\nDetached; existing breakpoints were left armed.")
        return 130
    finally:
        client.close()


def self_test() -> int:
    values = list(range(OBJECT_FIRST_ADVANCED, OBJECT_SENTINEL + 1, OBJECT_STRIDE))
    assert values[0] == 0x0440
    assert values[-1] == 0x05A0
    assert len(values) == 12
    assert OBJECT_SENTINEL + OBJECT_STRIDE == 0x05C0
    assert all(
        OBJECT_FIRST_ADVANCED <= value <= OBJECT_SENTINEL
        and (value - OBJECT_FIRST) % OBJECT_STRIDE == 0
        for value in values
    )
    print("transition_debug state-machine constants: OK")
    return 0


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--host", default="127.0.0.1")
    parser.add_argument("--port", type=int, default=4370)
    parser.add_argument("--timeout", type=float, default=10.0)
    parser.add_argument("--poll", type=float, default=0.02)
    parser.add_argument("--history", type=int, default=120)
    parser.add_argument(
        "--output", type=Path, default=Path("transition-report.json")
    )
    parser.add_argument("--resume", action="store_true")
    parser.add_argument("--self-test", action="store_true")
    return parser.parse_args()


if __name__ == "__main__":
    parsed = parse_args()
    sys.exit(self_test() if parsed.self_test else monitor(parsed))
