#!/usr/bin/env python3
from pathlib import Path

t = Path("generated/teyandee_full_bank03.c").read_text(errors="replace")
for lab in [
    "label_A0F4:",
    "label_A0F7:",
    "label_A0F8:",
    "label_A11A:",
    "label_A111:",
    "label_A114:",
    "/* $A0F4",
    "/* $A11A",
    "/* $A0F7",
    "nes_write(0x0422",
    "0x9C09",
    "0x907A",
]:
    idx = 0
    hits = []
    while len(hits) < 4:
        j = t.find(lab, idx)
        if j < 0:
            break
        snip = t[j : j + 150].replace("\n", " | ")
        hits.append(snip[:140])
        idx = j + 1
    print(f"=== {lab!r} hits={len(hits)} ===")
    for h in hits:
        print(" ", h)
