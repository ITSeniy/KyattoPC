#!/usr/bin/env python3
import argparse
from pathlib import Path

parser = argparse.ArgumentParser(description="List physics-code call targets")
parser.add_argument(
    "bank",
    nargs="?",
    type=Path,
    default=Path(__file__).resolve().parents[1] / "banks" / "bank01.bin",
)
args = parser.parse_args()

b = args.bank.read_bytes()
targets = set()
fixed_tgts = set()
for a in range(0xB900, 0xBE80):
    off = a - 0x8000
    op = b[off]
    if op in (0x20, 0x4C):
        target = b[off + 1] | (b[off + 2] << 8)
        if 0x8000 <= target <= 0x9FFF:
            targets.add(target)
        elif target >= 0xC000:
            fixed_tgts.add((a, target))

print("fixed bank calls from physics:")
for a, target in sorted(fixed_tgts):
    print("  $" + f"{a:04X} -> $" + f"{target:04X}")

print("switchable targets model addresses:")
models = sorted(target + 0x2000 for target in targets)
for model in models:
    print(f"  0x{model:04X},  # CPU $" + f"{model-0x2000:04X}")
print(f"count={len(models)}")
