#!/usr/bin/env python3
from pathlib import Path

t = Path("generated/teyandee_full_bank03.c").read_text(errors="replace")
# Find real A0F4 with 8BAB
marker = "/* $A0F4: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x8BAB, 3);"
j = t.find(marker)
print("real A0F4 at", j)
# Walk backward to function start
start = t.rfind("void func_", 0, j)
print("enclosing func:")
print(t[start : start + 200])
# Also print from A0F1 area in THIS function - does A0F1 fall through to A0F4?
print("\n=== context before A0F4 ===")
print(t[j - 800 : j + 200])
# Check if A093 in THIS function connects
k = t.rfind("label_A093:", 0, j)
print("\n=== prior A093 in same region ===", k)
if k > start:
    print(t[k : k + 100])
else:
    print("A093 not in this function before A0F4")

# Find all functions that contain A11A real code
marker2 = "/* $A11A: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x82C1, 3);"
idx = 0
while True:
    j2 = t.find(marker2, idx)
    if j2 < 0:
        break
    st = t.rfind("void func_", 0, j2)
    name = t[st : st + 80].split("(")[0]
    print(f"A11A owned by {name} at {j2}")
    idx = j2 + 1
