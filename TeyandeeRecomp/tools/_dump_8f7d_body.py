#!/usr/bin/env python3
from pathlib import Path
import re

t = Path("generated/teyandee_full_bank03.c").read_text(errors="replace")
i = t.find("func_8F7D_b3_body(int _entry)")
print("body at", i)
# Find end of this function - next "void func_" at same or less indent after body
# Extract full body
j = t.find("\nvoid func_", i + 50)
# Might hit nested - find matching by looking for body end after last label in A0xx
chunk = t[i : i + 15000]
# Find all label_A0 addresses in first 15k
labels = re.findall(r"label_([0-9A-F]{4}):", chunk)
print("labels sample", labels[:30], "...", labels[-10:] if len(labels) > 30 else "")
print("total labels in 15k", len(labels))
# Show end of chunk around A0F1
k = chunk.find("label_A0F1:")
print("A0F1 in chunk at", k)
print(chunk[k : k + 400])
# Is A0F4 in this body at all?
print("A0F4 in body chunk?", "label_A0F4:" in chunk)
print("A11A in body chunk?", "label_A11A:" in chunk)
print("A0F7 in body chunk?", "label_A0F7:" in chunk)

# Where does real complete scene_init live - search for PLA then STA 0422 after A093
m = re.search(
    r"label_A093:.*?label_A0F7:.*?nes_write\(0x0422",
    t,
    re.S,
)
print("contiguous A093..A0F7..0422?", bool(m))
if m:
    print("match len", len(m.group(0)))
    print(m.group(0)[:200], "...", m.group(0)[-200:])
