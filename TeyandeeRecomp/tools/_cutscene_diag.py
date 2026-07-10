#!/usr/bin/env python3
"""Cutscene / title / scene-path diagnostics."""
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parent.parent))
from tools.dis6502 import disasm

b1 = Path("banks/bank01.bin").read_bytes()
b3 = Path("banks/bank03.bin").read_bytes()
b7 = Path("banks/bank07.bin").read_bytes()

print("=== mode table A011 ===")
for i in range(5):
    off = 0xA011 - 0x8000 + i * 2
    v = b1[off] | (b1[off + 1] << 8)
    model = v + 0x2000 if v < 0xA000 else v
    print(f"  mode {i}: CPU ${v:04X} model ${model:04X}")

print("\n=== C44A scene ids by $5D ===")
for i in range(8):
    off = 0xC44A - 0xC000 + i
    print(f"  5D={i}: scene_A=${b7[off]:02X}")

print("\n=== scene param table CPU $9C09 = model $BC09 (LE16) ===")
for i in range(0x40):
    off = 0xBC09 - 0x8000 + i * 2
    if off + 1 >= len(b3):
        break
    v = b3[off] | (b3[off + 1] << 8)
    print(f"  A={i:02X}: ${v:04X}")

print("\n=== A2AF / A2C4 title Start path ===")
disasm(b1, 0x8000, 0xA2AF, 50)
print("=== A2C4 ===")
disasm(b1, 0x8000, 0xA2C4, 40)

print("\n=== A093 scene_init continued (A14D+) ===")
disasm(b3, 0x8000, 0xA14D, 80)

print("\n=== AF7D alt entry ===")
disasm(b3, 0x8000, 0xAF7D, 40)

# Find LDA #$5D / CMP #$5D / JSR related intro
print("\n=== bank03 CMP/LDA #\$24 (C0 path intro?) ===")
for i in range(len(b3) - 1):
    if b3[i] == 0xA9 and b3[i + 1] == 0x24:
        print(f"  LDA #\$24 at ${0x8000+i:04X}")
    if b3[i] == 0xC9 and b3[i + 1] == 0x24:
        print(f"  CMP #\$24 at ${0x8000+i:04X}")

print("\n=== bank01 Start-related returns (LDA #imm near RTS in title) ===")
# dump A523 return path
disasm(b1, 0x8000, 0xA583, 40)

# table 99B6 and 907A referenced by scene_init
print("\n=== scene_init tables (CPU when R6=7) ===")
print("907A first 16 bytes (model B07A):", b3[0xB07A - 0x8000 : 0xB07A - 0x8000 + 16].hex())
print("99B6 first 32 LE16 (model B9B6):")
for i in range(16):
    off = 0xB9B6 - 0x8000 + i * 2
    v = b3[off] | (b3[off + 1] << 8)
    print(f"  {i:02X}: ${v:04X}")
