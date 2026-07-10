#!/usr/bin/env python3
"""Diagnose reverse-gravity jump table and missing entries."""
from pathlib import Path
import sys
sys.path.insert(0, str(Path(__file__).resolve().parent.parent))
from tools.dis6502 import disasm

b = Path("banks/bank01.bin").read_bytes()

print("=== BCD0 jump table dispatch ===")
disasm(b, 0x8000, 0xBCD0, 40)
print("=== BCEC ===")
disasm(b, 0x8000, 0xBCEC, 40)
print("=== B9AD cont from B9A3 ===")
disasm(b, 0x8000, 0xB9AD, 100)

print("=== Jump table B18C (CPU addr -> model when R6=3) ===")
seeded = {
    0xB170, 0xB173, 0xB176, 0xB179, 0xB1CC, 0xB20C, 0xB259, 0xB7CE,
    0xB97F, 0xB9A3, 0xBA0E, 0xBA5F, 0xBA9D, 0xBAF8, 0xBBE5, 0xBCE5,
    0xB934, 0xB9A5, 0xBB0E, 0xBC0C, 0xBC0F, 0xB34D, 0xB373, 0xB41B,
    0xBDC8, 0xBC69, 0xBC0C,
}
missing = []
for i in range(0xB18C, 0xB1CC, 2):
    off = i - 0x8000
    v = b[off] | (b[off + 1] << 8)
    if 0x8000 <= v < 0xA000:
        model = v + 0x2000
    else:
        model = v
    ok = model in seeded
    if not ok:
        missing.append(model)
    mark = "OK" if ok else "MISS"
    print(f"  idx {(i - 0xB18C) // 2:2d} CPU ${v:04X} -> model ${model:04X} [{mark}]")

print("\nUnique missing models from table:")
for m in sorted(set(missing)):
    print(f"  0x{m:04X}")

# Also check recent miss log targets
print("\n=== Miss log targets ===")
for addr in [0xB2AC, 0xB496, 0xB4A0, 0xB436]:
    print(f"--- {addr:04X} ---")
    disasm(b, 0x8000, addr, 30)
