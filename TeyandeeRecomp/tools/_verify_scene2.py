#!/usr/bin/env python3
from pathlib import Path
import re

t = Path("generated/teyandee_full_bank03.c").read_text(errors="replace")
d = Path("generated/teyandee_dispatch.c").read_text(errors="replace")

for a in [0xA093, 0xA1AD, 0xA1BE, 0xA1EC, 0xA2C1, 0xAB9E, 0xA870, 0xA339, 0xA565, 0xA11A]:
    print(
        f"{a:04X} case={f'case 0x{a:04X}:' in d} fn={f'func_{a:04X}_b3' in t}"
    )

j = t.find("label_A093:;")
while j >= 0 and "g_cpu.I = 1" not in t[j : j + 250]:
    j = t.find("label_A093:;", j + 1)

if j < 0:
    print("NO SEI A093")
else:
    end = t.find("\n}\n\nvoid func_", j)
    body = t[j:end]
    labs = re.findall(r"label_([0-9A-F]{4}):", body)
    print("A093 body len", len(body))
    print("has A0F4", "label_A0F4:" in body)
    print("has A11A", "label_A11A:" in body)
    print("has A1AD", "label_A1AD:" in body)
    print("first", labs[:6], "last", labs[-8:])
    # A1AD as separate function content
    i = t.find("void func_A1AD_b3")
    print("A1AD wrapper:", t[i : i + 280] if i >= 0 else "MISSING")

# Check A093 calls 81AD will remap
print("nes_dispatch 81AD in A093?", "0x81AD" in body if j >= 0 else "n/a")
