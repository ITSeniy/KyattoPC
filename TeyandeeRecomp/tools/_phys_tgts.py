from pathlib import Path
b = Path(r"C:\Users\ITSeniy\source\KyattoPC\TeyandeeRecomp\banks\bank01.bin").read_bytes()
targets = set()
fixed_tgts = set()
for a in range(0xB900, 0xBE80):
    off = a - 0x8000
    op = b[off]
    if op in (0x20, 0x4C):
        t = b[off+1] | (b[off+2] << 8)
        if 0x8000 <= t <= 0x9FFF:
            targets.add(t)
        elif t >= 0xC000:
            fixed_tgts.add((a, t))
print("fixed bank calls from physics:")
for a,t in sorted(fixed_tgts):
    print(f"  ${a:04X} -> ${t:04X}")
print("switchable targets model addresses:")
models = sorted(t + 0x2000 for t in targets)
for m in models:
    print(f"  0x{m:04X},  # CPU ${m-0x2000:04X}")
print(f"count={len(models)}")
