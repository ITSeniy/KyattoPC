#!/usr/bin/env python3
"""Extract 16KB PRG banks from Kyatto Ninden Teyandee for Ghidra."""
from __future__ import annotations

import argparse
import sys
from pathlib import Path


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("rom", type=Path, help="Path to .nes ROM")
    ap.add_argument(
        "-o",
        "--out",
        type=Path,
        default=Path("banks"),
        help="Output directory (default: banks/)",
    )
    args = ap.parse_args()

    data = args.rom.read_bytes()
    if data[:4] != b"NES\x1a":
        print("error: not an iNES ROM", file=sys.stderr)
        return 1

    prg_banks = data[4]
    trainer = bool(data[6] & 0x04)
    prg_off = 0x10 + (0x200 if trainer else 0)
    prg_size = prg_banks * 0x4000
    prg = data[prg_off : prg_off + prg_size]
    if len(prg) != prg_size:
        print("error: truncated PRG", file=sys.stderr)
        return 1

    args.out.mkdir(parents=True, exist_ok=True)
    for i in range(prg_banks):
        chunk = prg[i * 0x4000 : (i + 1) * 0x4000]
        path = args.out / f"bank{i:02d}.bin"
        path.write_bytes(chunk)
        print(f"wrote {path} ({len(chunk)} bytes)")

    # MMC3 8KB banks (R6/R7 indices)
    n8 = prg_banks * 2
    for i in range(n8):
        chunk = prg[i * 0x2000 : (i + 1) * 0x2000]
        path = args.out / f"prg8k_{i:02d}.bin"
        path.write_bytes(chunk)
    print(f"wrote prg8k_00..{n8-1:02d}.bin (8KB MMC3 windows)")

    fixed = prg_banks - 1
    nmi = int.from_bytes(prg[fixed * 0x4000 + 0x3FFA : fixed * 0x4000 + 0x3FFC], "little")
    reset = int.from_bytes(prg[fixed * 0x4000 + 0x3FFC : fixed * 0x4000 + 0x3FFE], "little")
    irq = int.from_bytes(prg[fixed * 0x4000 + 0x3FFE : fixed * 0x4000 + 0x4000], "little")
    print()
    print(f"PRG banks: {prg_banks} x 16KB  (= {n8} x 8KB)")
    print(f"Fixed bank: {fixed}  (load at $C000 in Ghidra)")
    print(f"Switchable 16KB banks 0..{fixed - 1}: load each at $8000")
    print(f"  odd R6=2k+1 → CPU $8000 is high half → Ghidra $A000 in bank k")
    print(f"Vectors: NMI=${nmi:04X}  RESET=${reset:04X}  IRQ=${irq:04X}")
    print(f"Boot: C46F R6=3 → bank1 $A000; C4B4 R6=7 → bank3 $A000 (see docs/bank_calls.md)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
