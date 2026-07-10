"""Find STA to scene split RAM tables in bank03 high half."""
from pathlib import Path

b = Path(__file__).resolve().parents[1].joinpath("banks/bank03.bin").read_bytes()
high = b[0x2000:]
targets = {
    0x0449: "0449_x",
    0x045F: "045F_ctrl",
    0x0463: "0463_2006idx",
    0x044E: "044E_latch",
    0x0452: "0452_cur",
    0x0444: "0444_idx",
    0x0442: "0442_maskoff",
    0x0443: "0443_chr",
    0x0441: "0441",
}
for i in range(len(high) - 2):
    op = high[i]
    addr = high[i + 1] | (high[i + 2] << 8)
    pc = 0xA000 + i
    if op == 0x8D and addr in targets:
        print(f"${pc:04X}  STA ${addr:04X}     ({targets[addr]})")
    elif op == 0x9D and addr in targets:
        print(f"${pc:04X}  STA ${addr:04X},X   ({targets[addr]})")
    elif op == 0x99 and addr in targets:
        print(f"${pc:04X}  STA ${addr:04X},Y   ({targets[addr]})")
