"""Disassemble a CPU address range from bank03 high half (model Axxx)."""
import sys
from pathlib import Path

OP = {
    0x00: ("BRK", 1), 0x08: ("PHP", 1), 0x18: ("CLC", 1), 0x28: ("PLP", 1),
    0x38: ("SEC", 1), 0x40: ("RTI", 1), 0x48: ("PHA", 1), 0x58: ("CLI", 1),
    0x60: ("RTS", 1), 0x68: ("PLA", 1), 0x78: ("SEI", 1), 0x88: ("DEY", 1),
    0x8A: ("TXA", 1), 0x98: ("TYA", 1), 0xA8: ("TAY", 1), 0xAA: ("TAX", 1),
    0xB8: ("CLV", 1), 0xC8: ("INY", 1), 0xCA: ("DEX", 1), 0xD8: ("CLD", 1),
    0xE8: ("INX", 1), 0xEA: ("NOP", 1), 0xF8: ("SED", 1),
    0x0A: ("ASL A", 1), 0x2A: ("ROL A", 1), 0x4A: ("LSR A", 1), 0x6A: ("ROR A", 1),
    0x09: ("ORA #", 2), 0x29: ("AND #", 2), 0x49: ("EOR #", 2), 0x69: ("ADC #", 2),
    0xA9: ("LDA #", 2), 0xA2: ("LDX #", 2), 0xA0: ("LDY #", 2), 0xC9: ("CMP #", 2),
    0xE0: ("CPX #", 2), 0xC0: ("CPY #", 2), 0xE9: ("SBC #", 2),
    0x05: ("ORA zp", 2), 0x06: ("ASL zp", 2), 0x24: ("BIT zp", 2), 0x25: ("AND zp", 2),
    0x26: ("ROL zp", 2), 0x45: ("EOR zp", 2), 0x46: ("LSR zp", 2), 0x65: ("ADC zp", 2),
    0x66: ("ROR zp", 2), 0x84: ("STY zp", 2), 0x85: ("STA zp", 2), 0x86: ("STX zp", 2),
    0xA4: ("LDY zp", 2), 0xA5: ("LDA zp", 2), 0xA6: ("LDX zp", 2), 0xC4: ("CPY zp", 2),
    0xC5: ("CMP zp", 2), 0xC6: ("DEC zp", 2), 0xE4: ("CPX zp", 2), 0xE5: ("SBC zp", 2),
    0xE6: ("INC zp", 2),
    0x15: ("ORA zpx", 2), 0x16: ("ASL zpx", 2), 0x35: ("AND zpx", 2), 0x36: ("ROL zpx", 2),
    0x55: ("EOR zpx", 2), 0x56: ("LSR zpx", 2), 0x75: ("ADC zpx", 2), 0x76: ("ROR zpx", 2),
    0x94: ("STY zpx", 2), 0x95: ("STA zpx", 2), 0xB4: ("LDY zpx", 2), 0xB5: ("LDA zpx", 2),
    0xB6: ("LDX zpy", 2), 0xD5: ("CMP zpx", 2), 0xD6: ("DEC zpx", 2), 0xF5: ("SBC zpx", 2),
    0xF6: ("INC zpx", 2), 0x96: ("STX zpy", 2),
    0x10: ("BPL", 2), 0x30: ("BMI", 2), 0x50: ("BVC", 2), 0x70: ("BVS", 2),
    0x90: ("BCC", 2), 0xB0: ("BCS", 2), 0xD0: ("BNE", 2), 0xF0: ("BEQ", 2),
    0x0D: ("ORA", 3), 0x0E: ("ASL", 3), 0x2C: ("BIT", 3), 0x2D: ("AND", 3),
    0x2E: ("ROL", 3), 0x4C: ("JMP", 3), 0x4D: ("EOR", 3), 0x4E: ("LSR", 3),
    0x6C: ("JMP ()", 3), 0x6D: ("ADC", 3), 0x6E: ("ROR", 3), 0x8C: ("STY", 3),
    0x8D: ("STA", 3), 0x8E: ("STX", 3), 0xAC: ("LDY", 3), 0xAD: ("LDA", 3),
    0xAE: ("LDX", 3), 0xCC: ("CPY", 3), 0xCD: ("CMP", 3), 0xCE: ("DEC", 3),
    0xEC: ("CPX", 3), 0xED: ("SBC", 3), 0xEE: ("INC", 3), 0x20: ("JSR", 3),
    0x1D: ("ORA abs,X", 3), 0x1E: ("ASL abs,X", 3), 0x3D: ("AND abs,X", 3),
    0x3E: ("ROL abs,X", 3), 0x5D: ("EOR abs,X", 3), 0x5E: ("LSR abs,X", 3),
    0x7D: ("ADC abs,X", 3), 0x7E: ("ROR abs,X", 3), 0x9D: ("STA abs,X", 3),
    0xBC: ("LDY abs,X", 3), 0xBD: ("LDA abs,X", 3), 0xDD: ("CMP abs,X", 3),
    0xDE: ("DEC abs,X", 3), 0xFD: ("SBC abs,X", 3), 0xFE: ("INC abs,X", 3),
    0x19: ("ORA abs,Y", 3), 0x39: ("AND abs,Y", 3), 0x59: ("EOR abs,Y", 3),
    0x79: ("ADC abs,Y", 3), 0x99: ("STA abs,Y", 3), 0xB9: ("LDA abs,Y", 3),
    0xBE: ("LDX abs,Y", 3), 0xD9: ("CMP abs,Y", 3), 0xF9: ("SBC abs,Y", 3),
    0x11: ("ORA (zp),Y", 2), 0x31: ("AND (zp),Y", 2), 0x51: ("EOR (zp),Y", 2),
    0x71: ("ADC (zp),Y", 2), 0x91: ("STA (zp),Y", 2), 0xB1: ("LDA (zp),Y", 2),
    0xD1: ("CMP (zp),Y", 2), 0xF1: ("SBC (zp),Y", 2),
    0x01: ("ORA (zp,X)", 2), 0x21: ("AND (zp,X)", 2), 0x41: ("EOR (zp,X)", 2),
    0x61: ("ADC (zp,X)", 2), 0x81: ("STA (zp,X)", 2), 0xA1: ("LDA (zp,X)", 2),
    0xC1: ("CMP (zp,X)", 2), 0xE1: ("SBC (zp,X)", 2),
}


def dis(data: bytes, start: int, nbytes: int) -> None:
    i = 0
    pc = start
    end = min(len(data), nbytes)
    while i < end:
        op = data[i]
        name, size = OP.get(op, (f"?{op:02X}", 1))
        if i + size > end:
            break
        if size == 1:
            print(f"{pc:04X}  {op:02X}           {name}")
        elif size == 2:
            b1 = data[i + 1]
            extra = ""
            if name in ("BPL", "BMI", "BVC", "BVS", "BCC", "BCS", "BNE", "BEQ"):
                rel = b1 if b1 < 0x80 else b1 - 256
                extra = f" -> ${pc + 2 + rel:04X}"
            print(f"{pc:04X}  {op:02X} {b1:02X}        {name} ${b1:02X}{extra}")
        else:
            b1, b2 = data[i + 1], data[i + 2]
            addr = b1 | (b2 << 8)
            print(f"{pc:04X}  {op:02X} {b1:02X} {b2:02X}     {name} ${addr:04X}")
        i += size
        pc += size


def main():
    start = int(sys.argv[1], 16)
    n = int(sys.argv[2], 16) if len(sys.argv) > 2 else 0x80
    root = Path(__file__).resolve().parents[1]
    b = (root / "banks" / "bank03.bin").read_bytes()
    # high half: A000 -> offset 0x2000
    if start >= 0xA000:
        off = 0x2000 + (start - 0xA000)
    elif start >= 0x8000:
        off = start - 0x8000
    else:
        raise SystemExit("addr")
    print(f"=== ${start:04X} len=${n:X} ===")
    dis(b[off:], start, n)


if __name__ == "__main__":
    main()
