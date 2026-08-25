#!/usr/bin/env python3
"""Locate the first meaningful WRAM divergence between FCEUX and the port.

Besides the full-RAM FRT1/NRT1 captures, the native input may be a JSONL
delta trace produced by ``NESRECOMP_WRAM_TRACE``.  That trace is indexed by
the cycle-derived video-frame clock, so it includes frames where NMI is off.
"""

from __future__ import annotations

import argparse
import json
import struct
from dataclasses import dataclass
from pathlib import Path
from typing import Iterable


HEADER = struct.Struct("<4sIII")
FRAME = struct.Struct("<I")

# Fields already supported by the capture/analyzer workflow. Keeping the
# comparison focused avoids treating stack and temporary bytes as gameplay
# desyncs while still catching state changes early.
KNOWN_FIELDS = {
    0x002F: "camera_subpixel",
    0x0030: "camera_low",
    0x0031: "camera_page",
    0x003A: "game_state",
    0x003B: "character",
    0x003F: "health",
    0x0040: "player_state",
    0x0041: "player_direction",
    0x0043: "lives_hundreds",
    0x0044: "lives_tens",
    0x0045: "score_3",
    0x0046: "score_2",
    0x0047: "score_1",
    0x0048: "score_0",
    0x0054: "camera_x",
    0x005D: "round",
    0x007E: "player_action",
    0x0083: "vertical_movement_mode",
    0x0084: "horizontal_movement_mode",
    0x0089: "player_anim",
    0x008A: "player_anim_timer",
    0x008B: "player_grounded",
    0x00EA: "rng",
    0x06F6: "hard_mode",
}


@dataclass(frozen=True)
class Trace:
    producer: str
    frames: tuple[int, ...]
    ram: tuple[bytes, ...]


def load_binary_trace(path: Path) -> Trace:
    data = path.read_bytes()
    if len(data) < HEADER.size:
        raise ValueError(f"{path}: truncated header")
    magic, version, ram_size, record_size = HEADER.unpack_from(data)
    if magic not in (b"FRT1", b"NRT1") or version != 1:
        raise ValueError(f"{path}: unsupported trace header {magic!r}, version {version}")
    if ram_size != 0x800 or record_size != FRAME.size + ram_size:
        raise ValueError(f"{path}: unexpected RAM/record size")
    payload = memoryview(data)[HEADER.size:]
    if len(payload) % record_size:
        raise ValueError(f"{path}: partial record at end of trace")

    frames: list[int] = []
    images: list[bytes] = []
    for offset in range(0, len(payload), record_size):
        frames.append(FRAME.unpack_from(payload, offset)[0])
        start = offset + FRAME.size
        images.append(bytes(payload[start:start + ram_size]))
    return Trace(magic.decode("ascii"), tuple(frames), tuple(images))


def load_delta_trace(path: Path) -> Trace:
    """Reconstruct continuous WRAM snapshots from a native JSONL delta trace."""
    changes: dict[int, list[tuple[int, int]]] = {}
    for line_number, raw in enumerate(path.read_text(encoding="utf-8").splitlines(), 1):
        if not raw.strip():
            continue
        try:
            row = json.loads(raw)
            frame = int(row["f"])
            address = int(str(row["adr"]), 0)
            value = int(str(row["val"]), 0)
        except (KeyError, TypeError, ValueError, json.JSONDecodeError) as exc:
            raise ValueError(f"{path}:{line_number}: invalid WRAM delta row") from exc
        if not 0 <= address < 0x800 or not 0 <= value <= 0xFF:
            raise ValueError(f"{path}:{line_number}: WRAM address/value out of range")
        changes.setdefault(frame, []).append((address, value))

    if not changes:
        raise ValueError(f"{path}: empty WRAM delta trace")

    first_frame = min(changes)
    last_frame = max(changes)
    ram = bytearray(0x800)
    frames: list[int] = []
    images: list[bytes] = []
    for frame in range(first_frame, last_frame + 1):
        for address, value in changes.get(frame, ()):
            ram[address] = value
        frames.append(frame)
        images.append(bytes(ram))
    return Trace("NVF1", tuple(frames), tuple(images))


def load_trace(path: Path) -> Trace:
    with path.open("rb") as file:
        prefix = file.read(1)
    return load_delta_trace(path) if prefix == b"{" else load_binary_trace(path)


def signature(ram: bytes, addresses: Iterable[int]) -> bytes:
    return bytes(ram[address] for address in addresses)


def alignment_score(reference: Trace, native: Trace, offset: int) -> tuple[int, int]:
    """Return matching known bytes and total compared bytes for an index offset."""
    addresses = tuple(KNOWN_FIELDS)
    matched = total = 0
    # Sample the whole run at a bounded cadence so long idle scenes do not
    # dominate and alignment remains cheap.
    last = min(len(reference.ram), len(native.ram) - max(offset, 0), 5000)
    for ref_index in range(0, max(last, 0), 7):
        native_index = ref_index + offset
        if not 0 <= native_index < len(native.ram):
            continue
        left = signature(reference.ram[ref_index], addresses)
        right = signature(native.ram[native_index], addresses)
        matched += sum(a == b for a, b in zip(left, right))
        total += len(addresses)
    return matched, total


def first_difference(
    reference: Trace,
    native: Trace,
    offset: int,
    addresses: Iterable[int],
    start: int,
) -> dict | None:
    addresses = tuple(addresses)
    for ref_index in range(max(start, 0), len(reference.ram)):
        native_index = ref_index + offset
        if not 0 <= native_index < len(native.ram):
            continue
        ref_ram = reference.ram[ref_index]
        native_ram = native.ram[native_index]
        differing = [address for address in addresses if ref_ram[address] != native_ram[address]]
        if differing:
            return {
                "reference_index": ref_index,
                "reference_frame": reference.frames[ref_index],
                "native_index": native_index,
                "native_frame": native.frames[native_index],
                "bytes": [
                    {
                        "address": f"${address:04X}",
                        "name": KNOWN_FIELDS.get(address),
                        "reference": f"${ref_ram[address]:02X}",
                        "native": f"${native_ram[address]:02X}",
                    }
                    for address in differing[:32]
                ],
                "difference_count": len(differing),
            }
    return None


def difference_at(
    reference: Trace,
    native: Trace,
    offset: int,
    addresses: Iterable[int],
    ref_index: int,
) -> dict | None:
    if not 0 <= ref_index < len(reference.ram):
        return None
    native_index = ref_index + offset
    if not 0 <= native_index < len(native.ram):
        return None
    ref_ram = reference.ram[ref_index]
    native_ram = native.ram[native_index]
    differing = [address for address in addresses if ref_ram[address] != native_ram[address]]
    if not differing:
        return None
    return {
        "reference_index": ref_index,
        "reference_frame": reference.frames[ref_index],
        "native_index": native_index,
        "native_frame": native.frames[native_index],
        "bytes": [
            {
                "address": f"${address:04X}",
                "name": KNOWN_FIELDS.get(address),
                "reference": f"${ref_ram[address]:02X}",
                "native": f"${native_ram[address]:02X}",
            }
            for address in differing[:32]
        ],
        "difference_count": len(differing),
    }


def known_match_runs(
    reference: Trace,
    native: Trace,
    offset: int,
    start: int,
) -> tuple[list[dict], int | None]:
    """Return equality runs and the first mismatch after the final recovery."""
    addresses = tuple(KNOWN_FIELDS)
    end = min(len(reference.ram), len(native.ram) - offset)
    start = max(start, -offset, 0)
    if start >= end:
        return [], None

    states = [
        signature(reference.ram[i], addresses)
        == signature(native.ram[i + offset], addresses)
        for i in range(start, end)
    ]
    runs: list[dict] = []
    run_start = start
    current = states[0]
    for ref_index, matches in enumerate(states[1:], start + 1):
        if matches == current:
            continue
        runs.append({"start": run_start, "end": ref_index - 1, "equal": current})
        run_start = ref_index
        current = matches
    runs.append({"start": run_start, "end": end - 1, "equal": current})

    last_equal = next(
        (i for i in range(end - 1, start - 1, -1) if states[i - start]),
        None,
    )
    first_unrecovered = start if last_equal is None else last_equal + 1
    if first_unrecovered is not None and first_unrecovered >= end:
        first_unrecovered = None
    return runs, first_unrecovered


def stable_start(reference: Trace, native: Trace, offset: int, requested: int) -> int:
    """Skip reset noise until known fields agree for eight consecutive frames."""
    addresses = tuple(KNOWN_FIELDS)
    run = 0
    for ref_index in range(max(requested, 0), min(len(reference.ram), 1200)):
        native_index = ref_index + offset
        if not 0 <= native_index < len(native.ram):
            continue
        if signature(reference.ram[ref_index], addresses) == signature(native.ram[native_index], addresses):
            run += 1
            if run >= 8:
                return ref_index - run + 1
        else:
            run = 0
    return requested


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("reference", type=Path, help="FCEUX .trace file")
    parser.add_argument(
        "native",
        type=Path,
        help="native runner .trace or NESRECOMP_WRAM_TRACE JSONL file",
    )
    parser.add_argument("--start-frame", type=int, default=0)
    parser.add_argument("--max-offset", type=int, default=5)
    parser.add_argument(
        "--offset",
        type=int,
        help="use an explicit native-index minus reference-index alignment",
    )
    parser.add_argument("--output", type=Path, help="also write JSON report")
    args = parser.parse_args()

    reference = load_trace(args.reference)
    native = load_trace(args.native)
    scores = {
        offset: alignment_score(reference, native, offset)
        for offset in range(-args.max_offset, args.max_offset + 1)
    }
    offset = (
        args.offset
        if args.offset is not None
        else max(scores, key=lambda value: (scores[value][0], -abs(value)))
    )
    if offset not in scores:
        scores[offset] = alignment_score(reference, native, offset)
    start = stable_start(reference, native, offset, args.start_frame)
    runs, first_unrecovered = known_match_runs(reference, native, offset, start)

    report = {
        "reference": {"producer": reference.producer, "frames": len(reference.frames)},
        "native": {"producer": native.producer, "frames": len(native.frames)},
        "alignment": {
            "native_index_minus_reference_index": offset,
            "source": "explicit" if args.offset is not None else "automatic",
            "matching_known_bytes": scores[offset][0],
            "compared_known_bytes": scores[offset][1],
            "stable_comparison_start": start,
        },
        "first_known_field_difference": first_difference(
            reference, native, offset, KNOWN_FIELDS, start
        ),
        "known_field_match_runs": runs[:40],
        "first_unrecovered_known_field_difference": (
            difference_at(reference, native, offset, KNOWN_FIELDS, first_unrecovered)
            if first_unrecovered is not None
            else None
        ),
        "first_actor_table_difference": first_difference(
            reference, native, offset, range(0x0400, 0x05A0), start
        ),
        "first_collision_map_difference": first_difference(
            reference, native, offset, range(0x0300, 0x03A0), start
        ),
        "first_full_wram_difference": first_difference(
            reference, native, offset, range(0x0800), start
        ),
    }
    rendered = json.dumps(report, indent=2, ensure_ascii=False)
    print(rendered)
    if args.output:
        args.output.write_text(rendered + "\n", encoding="utf-8")
    return 1 if report["first_known_field_difference"] else 0


if __name__ == "__main__":
    raise SystemExit(main())
