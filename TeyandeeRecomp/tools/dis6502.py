#!/usr/bin/env python3
"""Minimal 6502 linear disassembler for PRG bank bins (offline RE)."""
from __future__ import annotations
import argparse
from pathlib import Path

OP = {
0x00:("BRK",1),0x01:("ORA (zp,X)",2),0x05:("ORA zp",2),0x06:("ASL zp",2),0x08:("PHP",1),
0x09:("ORA #imm",2),0x0A:("ASL A",1),0x0D:("ORA abs",3),0x0E:("ASL abs",3),0x10:("BPL rel",2),
0x11:("ORA (zp),Y",2),0x15:("ORA zp,X",2),0x16:("ASL zp,X",2),0x18:("CLC",1),0x19:("ORA abs,Y",3),
0x1D:("ORA abs,X",3),0x1E:("ASL abs,X",3),0x20:("JSR abs",3),0x21:("AND (zp,X)",2),0x24:("BIT zp",2),
0x25:("AND zp",2),0x26:("ROL zp",2),0x28:("PLP",1),0x29:("AND #imm",2),0x2A:("ROL A",1),
0x2C:("BIT abs",3),0x2D:("AND abs",3),0x2E:("ROL abs",3),0x30:("BMI rel",2),0x31:("AND (zp),Y",2),
0x35:("AND zp,X",2),0x36:("ROL zp,X",2),0x38:("SEC",1),0x39:("AND abs,Y",3),0x3D:("AND abs,X",3),
0x3E:("ROL abs,X",3),0x40:("RTI",1),0x41:("EOR (zp,X)",2),0x45:("EOR zp",2),0x46:("LSR zp",2),
0x48:("PHA",1),0x49:("EOR #imm",2),0x4A:("LSR A",1),0x4C:("JMP abs",3),0x4D:("EOR abs",3),
0x4E:("LSR abs",3),0x50:("BVC rel",2),0x51:("EOR (zp),Y",2),0x55:("EOR zp,X",2),0x56:("LSR zp,X",2),
0x58:("CLI",1),0x59:("EOR abs,Y",3),0x5D:("EOR abs,X",3),0x5E:("LSR abs,X",3),0x60:("RTS",1),
0x61:("ADC (zp,X)",2),0x65:("ADC zp",2),0x66:("ROR zp",2),0x68:("PLA",1),0x69:("ADC #imm",2),
0x6A:("ROR A",1),0x6C:("JMP (abs)",3),0x6D:("ADC abs",3),0x6E:("ROR abs",3),0x70:("BVS rel",2),
0x71:("ADC (zp),Y",2),0x75:("ADC zp,X",2),0x76:("ROR zp,X",2),0x78:("SEI",1),0x79:("ADC abs,Y",3),
0x7D:("ADC abs,X",3),0x7E:("ROR abs,X",3),0x81:("STA (zp,X)",2),0x84:("STY zp",2),0x85:("STA zp",2),
0x86:("STX zp",2),0x88:("DEY",1),0x8A:("TXA",1),0x8C:("STY abs",3),0x8D:("STA abs",3),
0x8E:("STX abs",3),0x90:("BCC rel",2),0x91:("STA (zp),Y",2),0x94:("STY zp,X",2),0x95:("STA zp,X",2),
0x96:("STX zp,Y",2),0x98:("TYA",1),0x99:("STA abs,Y",3),0x9A:("TXS",1),0x9D:("STA abs,X",3),
0xA0:("LDY #imm",2),0xA1:("LDA (zp,X)",2),0xA2:("LDX #imm",2),0xA4:("LDY zp",2),0xA5:("LDA zp",2),
0xA6:("LDX zp",2),0xA8:("TAY",1),0xA9:("LDA #imm",2),0xAA:("TAX",1),0xAC:("LDY abs",3),
0xAD:("LDA abs",3),0xAE:("LDX abs",3),0xB0:("BCS rel",2),0xB1:("LDA (zp),Y",2),0xB4:("LDY zp,X",2),
0xB5:("LDA zp,X",2),0xB6:("LDX zp,Y",2),0xB8:("CLV",1),0xB9:("LDA abs,Y",3),0xBA:("TSX",1),
0xBC:("LDY abs,X",3),0xBD:("LDA abs,X",3),0xBE:("LDX abs,Y",3),0xC0:("CPY #imm",2),0xC1:("CMP (zp,X)",2),
0xC4:("CPY zp",2),0xC5:("CMP zp",2),0xC6:("DEC zp",2),0xC8:("INY",1),0xC9:("CMP #imm",2),
0xCA:("DEX",1),0xCC:("CPY abs",3),0xCD:("CMP abs",3),0xCE:("DEC abs",3),0xD0:("BNE rel",2),
0xD1:("CMP (zp),Y",2),0xD5:("CMP zp,X",2),0xD6:("DEC zp,X",2),0xD8:("CLD",1),0xD9:("CMP abs,Y",3),
0xDD:("CMP abs,X",3),0xDE:("DEC abs,X",3),0xE0:("CPX #imm",2),0xE1:("SBC (zp,X)",2),0xE4:("CPX zp",2),
0xE5:("SBC zp",2),0xE6:("INC zp",2),0xE8:("INX",1),0xE9:("SBC #imm",2),0xEA:("NOP",1),
0xEC:("CPX abs",3),0xED:("SBC abs",3),0xEE:("INC abs",3),0xF0:("BEQ rel",2),0xF1:("SBC (zp),Y",2),
0xF5:("SBC zp,X",2),0xF6:("INC zp,X",2),0xF8:("SED",1),0xF9:("SBC abs,Y",3),0xFD:("SBC abs,X",3),
0xFE:("INC abs,X",3),
}

def fmt_op(op, b, pc):
    name, size = OP.get(op, (f"??? ${op:02X}", 1))
    if size == 1: return name, size
    if size == 2:
        v = b[0]
        if "imm" in name: return name.replace("#imm", f"#${v:02X}"), size
        if "rel" in name:
            tgt = (pc + 2 + (v if v < 128 else v - 256)) & 0xFFFF
            return f"{name.split()[0]} ${tgt:04X}", size
        for tok, rep in (("(zp,X)", f"(${v:02X},X)"), ("(zp),Y", f"(${v:02X}),Y"),
                         ("zp,X", f"${v:02X},X"), ("zp,Y", f"${v:02X},Y"), ("zp", f"${v:02X}")):
            if tok in name: return name.replace(tok, rep), size
        return f"{name} ${v:02X}", size
    addr = b[0] | (b[1] << 8)
    for tok, rep in (("abs,X", f"${addr:04X},X"), ("abs,Y", f"${addr:04X},Y"),
                     ("(abs)", f"(${addr:04X})"), ("abs", f"${addr:04X}")):
        if tok in name: return name.replace(tok, rep), size
    return f"{name} ${addr:04X}", size

def disasm(bank: bytes, base: int, start: int, count: int = 64):
    pc = start
    for _ in range(count):
        off = pc - base
        if off < 0 or off >= len(bank): break
        op = bank[off]
        size = OP.get(op, ("?", 1))[1]
        raw = bank[off:off + size]
        text, size = fmt_op(op, raw[1:], pc)
        hexb = " ".join(f"{x:02X}" for x in bank[off:off + size])
        print(f"{pc:04X}: {hexb:<8}  {text}")
        if text.startswith(("RTS", "RTI")): break
        pc = (pc + size) & 0xFFFF

def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("bank", type=Path)
    ap.add_argument("addr", help="start address hex, e.g. FF90 or 0xFF90")
    ap.add_argument("-b", "--base", default=None, help="bank base (default: C000 if bank07 else 8000)")
    ap.add_argument("-n", "--count", type=int, default=64)
    args = ap.parse_args()
    data = args.bank.read_bytes()
    name = args.bank.name.lower()
    base = int(args.base, 16) if args.base else (0xC000 if "07" in name or "fixed" in name else 0x8000)
    start = int(args.addr.replace("$", "").replace("0x", ""), 16)
    print(f"; file={args.bank} base=${base:04X} start=${start:04X}")
    disasm(data, base, start, args.count)

if __name__ == "__main__":
    main()
