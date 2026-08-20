#!/usr/bin/env python3
import argparse
from pathlib import Path

parser = argparse.ArgumentParser(description="Scan physics code for high-window references")
parser.add_argument(
    "bank",
    nargs="?",
    type=Path,
    default=Path(__file__).resolve().parents[1] / "banks" / "bank01.bin",
)
args = parser.parse_args()

b = args.bank.read_bytes()
print("abs refs to A000-BFFF in physics high half:")
ops = {
    0x0D, 0x0E, 0x1D, 0x1E, 0x2C, 0x2D, 0x2E, 0x3D, 0x3E,
    0x4C, 0x4D, 0x4E, 0x5D, 0x5E, 0x6C, 0x6D, 0x6E, 0x7D,
    0x7E, 0x8C, 0x8D, 0x8E, 0x9D, 0x9E, 0xAC, 0xAD, 0xAE,
    0xBC, 0xBD, 0xBE, 0xCC, 0xCD, 0xCE, 0xDC, 0xDD, 0xDE,
    0xEC, 0xED, 0xEE, 0x20,
}
for a in range(0xB1CC, 0xBE00):
    off = a - 0x8000
    op = b[off]
    if op in ops:
        lo, hi = b[off + 1], b[off + 2]
        if 0xA0 <= hi <= 0xBF:
            target = lo | (hi << 8)
            print("  $" + f"{a:04X}: op={op:02X} $" + f"{target:04X}")
