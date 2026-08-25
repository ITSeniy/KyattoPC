#!/usr/bin/env python3
"""Convert a text FCEUX FM2 movie to the runner's deterministic input script."""

from __future__ import annotations

import argparse
import base64
from pathlib import Path
from typing import Any


FM2_ORDER = ("RIGHT", "LEFT", "DOWN", "UP", "START", "SELECT", "B", "A")
RUNNER_ORDER = ("A", "B", "SELECT", "START", "UP", "DOWN", "LEFT", "RIGHT")


def parse_fm2(path: Path) -> tuple[dict[str, Any], list[set[str]]]:
    header: dict[str, Any] = {"comments": []}
    frames: list[set[str]] = []
    for line_number, raw in enumerate(path.read_text(encoding="utf-8-sig").splitlines(), 1):
        if raw.startswith("|"):
            parts = raw.split("|")
            if len(parts) < 5:
                raise ValueError(f"line {line_number}: malformed FM2 input record")
            try:
                commands = int(parts[1])
            except ValueError as exc:
                raise ValueError(f"line {line_number}: invalid command field") from exc
            if commands:
                raise ValueError(
                    f"frame {len(frames)}: console/FDS command {commands} is not supported"
                )
            controller = parts[2]
            if len(controller) != 8:
                raise ValueError(f"frame {len(frames)}: controller field must have 8 columns")
            frames.append(
                {
                    button
                    for button, character in zip(FM2_ORDER, controller)
                    if character not in {".", " "}
                }
            )
            continue
        if not raw.strip():
            continue
        key, separator, value = raw.partition(" ")
        if key == "comment":
            header["comments"].append(value)
        elif separator:
            header[key] = value

    if header.get("version") != "3":
        raise ValueError(f"unsupported FM2 version: {header.get('version')!r}")
    if header.get("binary", "0") != "0":
        raise ValueError("binary FM2 input logs are not supported")
    if header.get("fourscore", "0") != "0" or header.get("port0") != "1":
        raise ValueError("FM2 must use a standard gamepad on port 0 without Four Score")
    if "savestate" in header:
        raise ValueError("movies beginning from a savestate are not reproducible from power-on")
    if not frames:
        raise ValueError("FM2 contains no input frames")
    return header, frames


def render_script(
    source: Path,
    header: dict[str, Any],
    frames: list[set[str]],
    frame_offset: int = 0,
) -> str:
    lines = [
        "# Converted from FCEUX FM2",
        f"# Source: {source.name}",
        f"# FM2 frames: {len(frames)}",
        f"# Runner frame offset: {frame_offset}",
        f"# ROM: {header.get('romFilename', '')}",
        f"# ROM MD5 (base64): {header.get('romChecksum', '')}",
    ]
    for comment in header.get("comments", []):
        lines.append(f"# FM2 comment: {comment}")
    held: set[str] = set()
    last_change_frame = -frame_offset
    transition_count = 0
    for frame_number, wanted in enumerate(frames):
        if wanted == held:
            continue
        lines.append(f"WAIT {frame_number - last_change_frame}")
        for button in RUNNER_ORDER:
            if button in held and button not in wanted:
                lines.append(f"RELEASE {button}")
        for button in RUNNER_ORDER:
            if button in wanted and button not in held:
                lines.append(f"HOLD {button}")
        held = set(wanted)
        last_change_frame = frame_number
        transition_count += 1

    # A positive WAIT following an input transition starts on the next tick.
    # Exit after the final FM2 frame has reached the game.
    lines.append(f"WAIT {len(frames) - last_change_frame}")
    lines.append("EXIT 0")
    lines.insert(3, f"# Input transitions: {transition_count}")
    return "\n".join(lines) + "\n"


def checksum_hex(header: dict[str, Any]) -> str:
    value = str(header.get("romChecksum", ""))
    if not value.startswith("base64:"):
        return ""
    try:
        return base64.b64decode(value.removeprefix("base64:")).hex().upper()
    except ValueError:
        return ""


def convert(
    source: Path,
    output: Path,
    frame_offset: int = 0,
) -> tuple[dict[str, Any], int, int]:
    header, frames = parse_fm2(source)
    script = render_script(source, header, frames, frame_offset)
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(script, encoding="utf-8", newline="\n")
    commands = sum(1 for line in script.splitlines() if line and not line.startswith("#"))
    return header, len(frames), commands


def self_test() -> None:
    header = {"romFilename": "test.nes", "romChecksum": "base64:AA==", "comments": []}
    frames = [set(), {"A"}, {"A"}, {"RIGHT"}, set()]
    script = render_script(Path("test.fm2"), header, frames)
    expected = [
        "WAIT 1", "HOLD A", "WAIT 2", "RELEASE A", "HOLD RIGHT",
        "WAIT 1", "RELEASE RIGHT", "WAIT 1", "EXIT 0",
    ]
    actual = [line for line in script.splitlines() if line and not line.startswith("#")]
    assert actual == expected, (actual, expected)
    print("fm2_to_input self-test: PASS")


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description="Convert text FCEUX FM2 to Teyandee input.txt")
    parser.add_argument("source", nargs="?", type=Path)
    parser.add_argument("output", nargs="?", type=Path)
    parser.add_argument(
        "--frame-offset",
        type=int,
        default=0,
        help="delay every FM2 input transition by this many runner frames",
    )
    parser.add_argument("--self-test", action="store_true")
    args = parser.parse_args()
    if not args.self_test and (args.source is None or args.output is None):
        parser.error("source.fm2 and output.txt are required")
    return args


def main() -> int:
    args = parse_args()
    if args.self_test:
        self_test()
        return 0
    header, frame_count, command_count = convert(
        args.source, args.output, args.frame_offset
    )
    print(f"Converted {frame_count} FM2 frames to {command_count} runner commands")
    print(f"FM2 ROM MD5: {checksum_hex(header) or 'unknown'}")
    print(f"Output: {args.output.resolve()}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
