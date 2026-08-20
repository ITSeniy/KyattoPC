#!/usr/bin/env python3
import argparse
from pathlib import Path

parser = argparse.ArgumentParser(description="Inspect cutscene pointer tables")
parser.add_argument(
    "rom",
    nargs="?",
    type=Path,
    default=Path(__file__).resolve().parents[2] / "Cat Ninden Teyandee (Japan).nes",
)
args = parser.parse_args()

rom = args.rom.read_bytes()
prg = rom[16 : 16 + 128 * 1024]
b7 = prg[7 * 0x2000 : 8 * 0x2000]
b8 = prg[8 * 0x2000 : 9 * 0x2000]

print("Validating 9C09 script ptrs A=0..0x28:")
for a in range(0x29):
    off = 0x1C09 + a * 2
    v = b7[off] | (b7[off + 1] << 8)
    if 0x8000 <= v < 0xA000:
        data = b7[v - 0x8000]
        region = "R6"
        sample = b7[v - 0x8000 : v - 0x8000 + 8].hex()
    elif 0xA000 <= v <= 0xBFFF:
        data = b8[v - 0xA000]
        region = "R7"
        sample = b8[v - 0xA000 : v - 0xA000 + 8].hex()
    else:
        data = -1
        region = "?"
        sample = ""
    status = "OK" if data not in (-1, 0xFF) else "BAD"
    print(f"  A={a:02X} ptr={v:04X} {region} first={data:02X} {status} {sample}")

print("\n99B6 meta ptrs A=0..0x28:")
for a in range(0x29):
    off = 0x19B6 + a * 2
    v = b7[off] | (b7[off + 1] << 8)
    if 0x8000 <= v < 0xA000:
        data = b7[v - 0x8000]
        region = "R6"
        sample = b7[v - 0x8000 : v - 0x8000 + 8].hex()
    elif 0xA000 <= v <= 0xBFFF:
        data = b8[v - 0xA000]
        region = "R7"
        sample = b8[v - 0xA000 : v - 0xA000 + 8].hex()
    else:
        data = -1
        region = "?"
        sample = ""
    status = "OK" if data not in (-1, 0xFF) else "BAD"
    print(f"  A={a:02X} ptr={v:04X} {region} first={data:02X} {status} {sample}")

# C0 boot after title: if 5D==1, scene 24
print("\nScene 24 is NEW GAME intro path (C102 LDA #24 / C4B4)")
print("If BF8A is FF-filled, intro ends immediately even on real hardware — unless R7 is remapped.")

# Search which 8KB banks contain BD1A-like non-FF if we mis-map
target_lo = 0x1D1A
print("\nByte at offset $" + f"{target_lo:04X} in each 8KB PRG bank:")
for i in range(16):
    bank = prg[i * 0x2000 : (i + 1) * 0x2000]
    byte = bank[target_lo]
    nn = sum(1 for x in bank[target_lo : target_lo + 16] if x != 0xFF)
    print(
        f"  8KB#{i:02d}: first={byte:02X} nonFF_in_16={nn} "
        f"sample={bank[target_lo:target_lo+8].hex()}"
    )
