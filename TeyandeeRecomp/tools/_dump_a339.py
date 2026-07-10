#!/usr/bin/env python3
from pathlib import Path

t = Path("generated/teyandee_full_bank03.c").read_text(errors="replace")
marker = "nes_write(0x0504, g_cpu.A)"
j = t.find(marker)
print("write at", j)
start = t.rfind("label_A34A", 0, j)
print("start", start)
chunk = t[start : start + 4000]
print(chunk)

# Find JMP ind at A3AE in real code
for needle in ["label_A3AE:", "0x8FCA", "call_by_address(_jt)"]:
    idxs = []
    i = 0
    while len(idxs) < 5:
        k = t.find(needle, i)
        if k < 0:
            break
        idxs.append(k)
        i = k + 1
    print(needle, "hits", len(idxs), "first few", idxs[:3])
    if idxs:
        print(t[idxs[0] : idxs[0] + 300])
        print("---")
