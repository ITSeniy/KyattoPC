#!/usr/bin/env python3
"""Extract memory operands from a locally exported RetroAchievements patch."""

from __future__ import annotations

import argparse
import json
import re
from collections import defaultdict
from pathlib import Path
from typing import Any, Iterator


OPERAND_RE = re.compile(
    r"(?P<modifier>[dDpPbB~]?)0x(?P<size>[MNOPQRSTLUHWXIJKG ]?)(?P<address>[0-9A-Fa-f]{4,8})"
)
SIZE_NAMES = {
    "M": "bit0", "N": "bit1", "O": "bit2", "P": "bit3",
    "Q": "bit4", "R": "bit5", "S": "bit6", "T": "bit7",
    "L": "lower4", "U": "upper4", "H": "8bit", " ": "16bit",
    "W": "24bit", "X": "32bit", "I": "16bit_be", "J": "24bit_be",
    "G": "32bit_be", "K": "bitcount", "": "16bit",
}


def strings(value: Any, path: str = "$") -> Iterator[tuple[str, str]]:
    if isinstance(value, dict):
        for key, child in value.items():
            yield from strings(child, f"{path}.{key}")
    elif isinstance(value, list):
        for index, child in enumerate(value):
            yield from strings(child, f"{path}[{index}]")
    elif isinstance(value, str):
        yield path, value


def extract(document: Any, wram_limit: int = 0x800) -> dict[str, Any]:
    found: dict[int, dict[str, Any]] = defaultdict(
        lambda: {"sizes": set(), "modifiers": set(), "contexts": [], "occurrences": 0}
    )
    for path, value in strings(document):
        for match in OPERAND_RE.finditer(value):
            address = int(match.group("address"), 16)
            if address >= wram_limit:
                continue
            item = found[address]
            size = SIZE_NAMES.get(match.group("size").upper(), match.group("size"))
            modifier = match.group("modifier").lower() or "current"
            item["sizes"].add(size)
            item["modifiers"].add(modifier)
            item["occurrences"] += 1
            if len(item["contexts"]) < 12:
                item["contexts"].append({"path": path, "operand": match.group(0)})
    addresses = []
    for address, item in sorted(found.items()):
        addresses.append(
            {
                "address": f"0x{address:04X}",
                "sizes": sorted(item["sizes"]),
                "modifiers": sorted(item["modifiers"]),
                "occurrences": item["occurrences"],
                "contexts": item["contexts"],
            }
        )
    return {"format_version": 1, "address_count": len(addresses), "addresses": addresses}


def render_markdown(result: dict[str, Any], source: Path) -> str:
    lines = [
        "# RetroAchievements memory operands",
        "",
        f"Source: `{source.name}`  ",
        f"Unique NES WRAM addresses: **{result['address_count']}**",
        "",
        "These are references used by achievement logic, not automatically proven field names.",
        "",
        "| Address | Sizes | Delta/prior modes | Occurrences |",
        "|---|---|---|---:|",
    ]
    for item in result["addresses"]:
        lines.append(
            f"| `{item['address']}` | {', '.join(item['sizes'])} | "
            f"{', '.join(item['modifiers'])} | {item['occurrences']} |"
        )
    lines.append("")
    return "\n".join(lines)


def self_test() -> None:
    document = {
        "Achievements": [
            {"Title": "Damage", "MemAddr": "d0xH003f>0_0xH003f=9"},
            {"Title": "Round", "MemAddr": "0xH005d=1"},
        ]
    }
    result = extract(document)
    assert [item["address"] for item in result["addresses"]] == ["0x003F", "0x005D"]
    assert result["addresses"][0]["occurrences"] == 2
    print("ra_memory_import self-test: PASS")


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description="Extract NES WRAM operands from RA patch JSON")
    parser.add_argument("source", nargs="?", type=Path)
    parser.add_argument("--output", type=Path)
    parser.add_argument("--self-test", action="store_true")
    args = parser.parse_args()
    if not args.self_test and args.source is None:
        parser.error("a locally exported RA JSON file is required")
    return args


def main() -> int:
    args = parse_args()
    if args.self_test:
        self_test()
        return 0
    document = json.loads(args.source.read_text(encoding="utf-8-sig"))
    result = extract(document)
    output = args.output or args.source.with_name(args.source.stem + "-memory.json")
    output.write_text(json.dumps(result, ensure_ascii=False, indent=2), encoding="utf-8")
    output.with_suffix(".md").write_text(render_markdown(result, args.source), encoding="utf-8")
    print(f"Extracted {result['address_count']} WRAM addresses")
    print(f"Output: {output.resolve()}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
