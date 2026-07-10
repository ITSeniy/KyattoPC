#!/usr/bin/env python3
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parent.parent))
from tools.dis6502 import disasm

b2 = Path("banks/bank02.bin").read_bytes()
b7 = Path("banks/bank07.bin").read_bytes()
d = Path("generated/teyandee_dispatch.c").read_text(errors="replace")
t2 = Path("generated/teyandee_full_bank02.c").read_text(errors="replace")

# Jump table at AD80-ADCE looks like LE16 handlers
print("=== Object/AI jump table AD80–ADD0 ===")
table_start = 0xAD80
ptrs = []
for i in range(0xAD80, 0xADE0, 2):
    off = i - 0x8000
    v = b2[off] | (b2[off + 1] << 8)
    if 0x8000 <= v < 0xC000:
        ptrs.append(v)
        in_d = f"case 0x{v:04X}:" in d
        in_fn = f"func_{v:04X}_b2" in t2
        mark = "OK" if in_d and in_fn else ("CASE" if in_d else ("FN" if in_fn else "MISS"))
        print(f"  {i:04X}: {v:04X} [{mark}]")

print("\nUnique targets:", len(set(ptrs)))
miss = sorted({p for p in ptrs if f"case 0x{p:04X}:" not in d})
print("Missing from dispatch:", [f"{p:04X}" for p in miss])

# Find dispatcher referencing AD80
print("\n=== refs to AD80/ADCA ===")
for target, name in [(0xAD80, "AD80"), (0xADCA, "ADCA"), (0xADF5, "ADF5")]:
    lo, hi = target & 0xFF, target >> 8
    for i in range(len(b2) - 1):
        if b2[i] == lo and b2[i + 1] == hi:
            # likely absolute addr operand
            print(f"  {name} at {0x8000+i:04X} context {b2[max(0,i-2):i+4].hex()}")

# Disassemble likely table load sites
print("\n=== D644 enemy? ===")
disasm(b7, 0xC000, 0xD644, 40)
print("=== D458 ===")
disasm(b7, 0xC000, 0xD458, 30)
print("=== CA48 ===")
disasm(b7, 0xC000, 0xCA48, 30)
print("=== CB48 ===")
disasm(b7, 0xC000, 0xCB48, 30)

# How is bank2 mapped? C4FA X=?
print("\n=== bank2 high = 8KB#5 at R6=5? 16KB bank2 = 8KB 4+5 ===")
print("When R6=5 (odd): CPU 8000 = bank2 high A000")
print("ADD0 at model ADD0 is high half of bank2")
