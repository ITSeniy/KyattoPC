#!/usr/bin/env python3
"""Offline analysis of marked Teyandee WRAM captures.

The analyser combines marker snapshots, object-slot change points, known RAM
seeds, static generated-code references and (when available) reverse-debug
write traces. It never treats a correlation or a static reference as proof.
"""

from __future__ import annotations

import argparse
import gzip
import json
import re
from collections import Counter, defaultdict
from pathlib import Path
from typing import Any, Iterable


WRAM_SIZE = 0x800
FORMAT_VERSION = 1
DEFAULT_SEEDS = Path(__file__).with_name("ram_seeds.json")
PC_RE = re.compile(r"/\* \$([0-9A-Fa-f]{4}):")
FUNC_RE = re.compile(r"^(?:static\s+)?void\s+([A-Za-z_][A-Za-z0-9_]*)\s*\(")
DIRECT_RE = re.compile(r"nes_(read|write)\(\s*(0x[0-9A-Fa-f]+)")
LOCAL_A_RE = re.compile(r"uint16_t\s+a\s*=\s*(0x[0-9A-Fa-f]+)")
INDEXED_RE = re.compile(
    r"nes_(read|write)\(\s*\(?\s*(0x[0-9A-Fa-f]+)\s*\+\s*g_cpu\.([XY])"
)


def parse_address(value: str | int) -> int:
    return value if isinstance(value, int) else int(value, 0)


def load_frames(session_dir: Path) -> list[dict[str, Any]]:
    path = session_dir / "frames.jsonl.gz"
    with gzip.open(path, "rt", encoding="utf-8") as stream:
        frames = [json.loads(line) for line in stream if line.strip()]
    frames.sort(key=lambda item: int(item["frame"]))
    for item in frames:
        item["_ram"] = bytes.fromhex(item["ram"])
        if len(item["_ram"]) != WRAM_SIZE:
            raise ValueError(f"frame {item['frame']}: expected {WRAM_SIZE} WRAM bytes")
    return frames


def load_seeds(path: Path) -> dict[str, Any]:
    return json.loads(path.read_text(encoding="utf-8"))


def decode_value(ram: bytes, field: dict[str, Any]) -> dict[str, Any]:
    address, size = parse_address(field["address"]), int(field.get("size", 1))
    raw = ram[address : address + size]
    integer = int.from_bytes(raw, "little")
    encoding = field.get("encoding", "")
    display = f"${integer:0{size * 2}X}"
    if encoding == "little_endian_8_8":
        display = f"{raw[1] + raw[0] / 256:.3f} (${raw[1]:02X}.${raw[0]:02X})"
    elif encoding == "signed_little_endian_8_8":
        signed_hi = raw[1] - 256 if raw[1] >= 128 else raw[1]
        display = f"{signed_hi + raw[0] / 256:.3f} (${raw[1]:02X}.${raw[0]:02X})"
    elif encoding == "one_decimal_digit_per_byte":
        display = "".join(str(value) for value in raw)
    elif encoding == "decimal_digits_times_100":
        display = "".join(str(value) for value in raw) + "00"
    elif encoding == "character_high_nibble_animation_low_nibble":
        display = f"character {raw[0] >> 4}, animation ${raw[0] & 0x0F:X} (${raw[0]:02X})"
    values = field.get("values", {})
    if str(integer) in values:
        display += f" ({values[str(integer)]})"
    return {"raw": raw.hex().upper(), "integer": integer, "display": display}


def scan_generated_xrefs(generated_dir: Path) -> dict[int, list[dict[str, Any]]]:
    """Find literal WRAM references; indexed and indirect accesses stay candidates."""
    by_address: dict[int, list[dict[str, Any]]] = defaultdict(list)
    seen: set[tuple[Any, ...]] = set()
    for path in sorted(generated_dir.glob("teyandee_full_bank*.c")):
        bank_match = re.search(r"bank([0-9A-Fa-f]{2})", path.name)
        bank = bank_match.group(1).upper() if bank_match else "??"
        pc = "????"
        function = ""
        with path.open("r", encoding="utf-8", errors="replace") as stream:
            for line_number, line in enumerate(stream, 1):
                function_match = FUNC_RE.match(line)
                if function_match:
                    function = function_match.group(1)
                pc_match = PC_RE.search(line)
                if pc_match:
                    pc = pc_match.group(1).upper()

                found: list[tuple[str, int, str]] = []
                for operation, literal in DIRECT_RE.findall(line):
                    found.append((operation, int(literal, 16), "direct"))
                local_match = LOCAL_A_RE.search(line)
                if local_match and "nes_" in line:
                    address = int(local_match.group(1), 16)
                    if "nes_read(a)" in line:
                        found.append(("read", address, "direct_local"))
                    if "nes_write(a" in line:
                        found.append(("write", address, "direct_local"))
                for operation, literal, index in INDEXED_RE.findall(line):
                    found.append((operation, int(literal, 16), f"indexed_{index}"))

                for operation, address, mode in found:
                    if not 0 <= address < WRAM_SIZE:
                        continue
                    # Specialised generated entry functions duplicate the same
                    # original instruction. Bank+PC is the ROM identity.
                    key = (bank, pc, operation, address, mode)
                    if key in seen:
                        continue
                    seen.add(key)
                    by_address[address].append(
                        {
                            "bank": bank,
                            "pc": f"0x{pc}",
                            "function": function,
                            "operation": operation,
                            "mode": mode,
                            "file": path.name,
                            "line": line_number,
                        }
                    )
    return dict(by_address)


def sign_8_8(lo: int, hi: int) -> float:
    return (hi - 256 if hi >= 128 else hi) + lo / 256


def slot_state(ram: bytes, base: int) -> dict[str, Any]:
    flags = ram[base]
    return {
        "active": bool(flags & 1),
        "flags": flags,
        "facing": "left" if flags & 4 else "right",
        "x": ram[base + 2] + ram[base + 1] / 256,
        "y": ram[base + 4] + ram[base + 3] / 256,
        "vx": sign_8_8(ram[base + 5], ram[base + 6]),
        "vy": sign_8_8(ram[base + 7], ram[base + 8]),
        "metasprite": ram[base + 9],
        "animation": ram[base + 0x0A],
        "type": ram[base + 0x0E],
        "behavior": ram[base + 0x0F],
        "timer": ram[base + 0x10],
        "target_direction": bool(ram[base + 0x1C] & 0x80),
    }


def object_analysis(
    frames: list[dict[str, Any]], table: dict[str, Any], start_frame: int | None = None
) -> tuple[list[dict[str, Any]], list[dict[str, Any]]]:
    base = parse_address(table["base"])
    stride = parse_address(table["stride"])
    slot_count = int(table["slots"])
    events: list[dict[str, Any]] = []
    summaries: list[dict[str, Any]] = []
    previous: list[dict[str, Any] | None] = [None] * slot_count
    previous_frame: list[int | None] = [None] * slot_count
    active_frames: list[list[int]] = [[] for _ in range(slot_count)]
    types: list[set[int]] = [set() for _ in range(slot_count)]

    for frame_item in frames:
        frame = int(frame_item["frame"])
        if start_frame is not None and frame < start_frame:
            continue
        ram = frame_item["_ram"]
        for slot in range(slot_count):
            state = slot_state(ram, base + slot * stride)
            before = previous[slot]
            if state["active"]:
                active_frames[slot].append(frame)
                types[slot].add(state["type"])
            if before is not None:
                changes: dict[str, Any] = {}
                for key in ("active", "type", "behavior", "facing", "target_direction"):
                    if before[key] != state[key] and (before["active"] or state["active"]):
                        changes[key] = {"before": before[key], "after": state[key]}
                before_sign = 0 if before["vx"] == 0 else (1 if before["vx"] > 0 else -1)
                after_sign = 0 if state["vx"] == 0 else (1 if state["vx"] > 0 else -1)
                if before_sign != after_sign and (before["active"] or state["active"]):
                    changes["vx"] = {"before": before["vx"], "after": state["vx"]}
                if changes:
                    prior = int(previous_frame[slot] or frame)
                    events.append(
                        {
                            "slot": slot,
                            "base": f"0x{base + slot * stride:04X}",
                            "observed_frame": frame,
                            "previous_sample_frame": prior,
                            "exact_frame": frame - prior == 1,
                            "changes": changes,
                            "state": state,
                        }
                    )
            previous[slot] = state
            previous_frame[slot] = frame

    for slot, active in enumerate(active_frames):
        if not active:
            continue
        summaries.append(
            {
                "slot": slot,
                "base": f"0x{base + slot * stride:04X}",
                "first_observed_active": min(active),
                "last_observed_active": max(active),
                "types": sorted(types[slot]),
                "sample_count": len(active),
            }
        )
    return summaries, events


def load_dynamic_writes(session_dir: Path) -> dict[str, Any]:
    path = session_dir / "writes.jsonl.gz"
    if not path.exists():
        return {"available": False, "by_address": {}}
    by_address: dict[str, Counter[tuple[str, str, str]]] = defaultdict(Counter)
    count = 0
    with gzip.open(path, "rt", encoding="utf-8") as stream:
        for line in stream:
            if not line.strip():
                continue
            entry = json.loads(line)
            address = entry["addr"].upper().replace("0X", "0x")
            by_address[address][(entry.get("pc", ""), entry.get("func", ""), entry.get("segment", ""))] += 1
            count += 1
    compact = {
        address: [
            {"pc": key[0], "function": key[1], "segment": key[2], "count": hits}
            for key, hits in counter.most_common()
        ]
        for address, counter in by_address.items()
    }
    return {"available": True, "entry_count": count, "by_address": compact}


def marker_values(
    frames: list[dict[str, Any]], markers: Iterable[dict[str, Any]], fields: list[dict[str, Any]]
) -> list[dict[str, Any]]:
    by_frame = {int(item["frame"]): item["_ram"] for item in frames}
    result = []
    for marker in markers:
        frame = int(marker["frame"])
        ram = by_frame.get(frame)
        if ram is None:
            result.append({"label": marker["label"], "frame": frame, "error": "frame not sampled"})
            continue
        result.append(
            {
                "label": marker["label"],
                "frame": frame,
                "fields": {field["name"]: decode_value(ram, field) for field in fields},
            }
        )
    return result


def candidate_rows(
    session_dir: Path, xrefs: dict[int, list[dict[str, Any]]], limit: int = 64
) -> list[dict[str, Any]]:
    summary_path = session_dir / "summary.json"
    if not summary_path.exists():
        return []
    summary = json.loads(summary_path.read_text(encoding="utf-8"))
    rows = []
    for row in summary.get("ranked_candidates", []):
        if int(row.get("stable_marker_changes", 0)) <= 0:
            continue
        if row.get("region") in {"cpu_stack", "oam_shadow"}:
            continue
        address = parse_address(row["address"])
        item = dict(row)
        refs = xrefs.get(address, [])
        item["static_read_sites"] = sum(ref["operation"] == "read" for ref in refs)
        item["static_write_sites"] = sum(ref["operation"] == "write" for ref in refs)
        item["gameplay_priority"] = address < 0x100 or 0x400 <= address < 0x600
        rows.append(item)
    rows.sort(
        key=lambda row: (
            -int(row["gameplay_priority"]),
            -int(row["stable_marker_changes"]),
            -int(row["static_write_sites"] > 0),
            int(row["sample_changes"]),
            parse_address(row["address"]),
        )
    )
    return rows[:limit]


def render_markdown(result: dict[str, Any]) -> str:
    lines = [
        "# Extended RAM analysis",
        "",
        f"Session: `{result['session']}`  ",
        f"Sampled frames: **{result['sampled_frames']}**  ",
        f"Static generated-code references: **{result['static_xref_count']}**  ",
        f"Dynamic write trace: **{'yes' if result['dynamic_writes']['available'] else 'no'}**",
        "",
        "Static references can include decoded-but-unreachable code. Dynamic writers and repeated controlled captures remain stronger evidence.",
        "",
        "## Known fields at markers",
        "",
    ]
    selected_names = [
        "requested_character", "active_character", "player_animation_code", "player_health",
        "ninpo_slot", "ninpo_power", "help_gauge", "lives", "score", "round",
        "movement_mode", "vertical_movement_mode", "player_x_8_8", "player_y_8_8",
    ]
    lines.append("| Frame | Marker | " + " | ".join(selected_names) + " |")
    lines.append("|---:|---|" + "---|" * len(selected_names))
    for marker in result["marker_values"]:
        if "error" in marker:
            values = [marker["error"]] + [""] * (len(selected_names) - 1)
        else:
            values = [marker["fields"].get(name, {}).get("display", "") for name in selected_names]
        lines.append(f"| {marker['frame']} | {marker['label']} | " + " | ".join(values) + " |")

    lines.extend(["", "## Object slots observed active", ""])
    if result["object_slots"]:
        lines.extend(["| Slot | Base | First | Last | Types | Samples |", "|---:|---|---:|---:|---|---:|"])
        for row in result["object_slots"]:
            types = ", ".join(f"${value:02X}" for value in row["types"])
            lines.append(f"| {row['slot']} | `{row['base']}` | {row['first_observed_active']} | {row['last_observed_active']} | {types} | {row['sample_count']} |")
    else:
        lines.append("No active object slot was sampled.")

    lines.extend(["", "## Significant object changes", ""])
    if result["object_events"]:
        lines.extend(["| Observed frame | Resolution | Slot | Changes |", "|---:|---:|---:|---|"])
        for event in result["object_events"][:160]:
            resolution = event["observed_frame"] - event["previous_sample_frame"]
            changes = "; ".join(
                f"{name}: {change['before']}→{change['after']}"
                for name, change in event["changes"].items()
            )
            lines.append(f"| {event['observed_frame']} | {resolution} frame(s) | {event['slot']} | {changes} |")
        if len(result["object_events"]) > 160:
            lines.append(f"\n_{len(result['object_events']) - 160} more events are in analysis.json._")
    else:
        lines.append("No significant object change was sampled.")

    if result["dynamic_writes"]["available"]:
        lines.extend(["", "## Dynamic WRAM writers", ""])
        lines.extend(["| Address | Writes | Writer PCs |", "|---|---:|---|"])
        ranked_writes = sorted(
            result["dynamic_writes"]["by_address"].items(),
            key=lambda item: -sum(writer["count"] for writer in item[1]),
        )
        for address, writers in ranked_writes[:96]:
            count = sum(writer["count"] for writer in writers)
            sites = ", ".join(
                f"{writer['pc']} ({writer['count']})" for writer in writers[:5]
            )
            lines.append(f"| `{address}` | {count} | {sites} |")

    lines.extend(["", "## Ranked stable RAM candidates", ""])
    if result["candidates"]:
        lines.extend(["| Address | Stable marker changes | Sample changes | Static R/W sites |", "|---|---:|---:|---:|"])
        for row in result["candidates"]:
            lines.append(
                f"| `{row['address']}` | {row['stable_marker_changes']} | {row['sample_changes']} | "
                f"{row['static_read_sites']}/{row['static_write_sites']} |"
            )
    else:
        lines.append("No stable marker candidate was found.")
    lines.append("")
    return "\n".join(lines)


def analyze_session(
    session_dir: Path,
    seeds_path: Path = DEFAULT_SEEDS,
    generated_dir: Path | None = None,
    scan_xrefs: bool = True,
) -> dict[str, Any]:
    session_dir = session_dir.resolve()
    session = json.loads((session_dir / "session.json").read_text(encoding="utf-8"))
    seeds = load_seeds(seeds_path)
    frames = load_frames(session_dir)
    if generated_dir is None:
        generated_dir = Path(__file__).resolve().parents[1] / "generated"
    xrefs = scan_generated_xrefs(generated_dir) if scan_xrefs else {}
    markers = session.get("markers", [])
    gameplay_markers = [
        int(marker["frame"])
        for marker in markers
        if marker.get("label") not in {"SESSION_START", "SESSION_END"}
    ]
    object_start = min(gameplay_markers) if gameplay_markers else None
    slots, events = object_analysis(frames, seeds["object_table"], start_frame=object_start)
    dynamic = load_dynamic_writes(session_dir)
    result = {
        "format_version": FORMAT_VERSION,
        "session": session_dir.name,
        "sampled_frames": len(frames),
        "markers": session.get("markers", []),
        "marker_values": marker_values(frames, session.get("markers", []), seeds["fields"]),
        "object_slots": slots,
        "object_events": events,
        "candidates": candidate_rows(session_dir, xrefs),
        "static_xref_count": sum(len(items) for items in xrefs.values()),
        "static_xrefs": {f"0x{address:04X}": items for address, items in sorted(xrefs.items())},
        "dynamic_writes": dynamic,
        "seed_rom": seeds.get("rom", {}),
    }
    (session_dir / "analysis.json").write_text(
        json.dumps(result, ensure_ascii=False, indent=2), encoding="utf-8"
    )
    (session_dir / "analysis.md").write_text(render_markdown(result), encoding="utf-8")
    return result


def self_test() -> None:
    ram0 = bytearray(WRAM_SIZE)
    ram1 = bytearray(WRAM_SIZE)
    ram1[0x420] = 1
    ram1[0x42E] = 0x42
    frames = [
        {"frame": 10, "_ram": bytes(ram0)},
        {"frame": 11, "_ram": bytes(ram1)},
    ]
    table = {"base": "0x0420", "slots": 12, "stride": "0x20"}
    slots, events = object_analysis(frames, table)
    assert slots[0]["types"] == [0x42]
    assert events[0]["changes"]["active"] == {"before": False, "after": True}
    assert decode_value(bytes(ram1), {"address": "0x042E", "size": 1})["integer"] == 0x42
    print("ram_analyzer self-test: PASS")


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description="Analyse a marked Teyandee RAM session")
    parser.add_argument("session", nargs="?", type=Path)
    parser.add_argument("--seeds", type=Path, default=DEFAULT_SEEDS)
    parser.add_argument("--generated-dir", type=Path)
    parser.add_argument("--no-rom-xrefs", action="store_true")
    parser.add_argument("--self-test", action="store_true")
    args = parser.parse_args()
    if not args.self_test and args.session is None:
        parser.error("session directory is required")
    return args


def main() -> int:
    args = parse_args()
    if args.self_test:
        self_test()
        return 0
    result = analyze_session(
        args.session,
        seeds_path=args.seeds,
        generated_dir=args.generated_dir,
        scan_xrefs=not args.no_rom_xrefs,
    )
    print(f"Analysed {result['session']}: {result['sampled_frames']} sampled frames")
    print(f"Object events: {len(result['object_events'])}; candidates: {len(result['candidates'])}")
    print(f"Report: {(args.session.resolve() / 'analysis.md')}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
