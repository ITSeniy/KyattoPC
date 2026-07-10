#!/usr/bin/env python3
from pathlib import Path

t = Path("generated/teyandee_full_bank03.c").read_text(errors="replace")
d = Path("generated/teyandee_dispatch.c").read_text(errors="replace")

for a in [0xA093, 0xA0F4, 0xA11A, 0xA339, 0xA565, 0xA000, 0xA870, 0xAB9E, 0xA37A, 0xA1C9]:
    has_fn = f"func_{a:04X}_b3" in t
    has_case = f"case 0x{a:04X}:" in d
    print(f"{a:04X}: fn={has_fn} case={has_case}")

j = t.find("label_A093:")
while j >= 0:
    region = t[j : j + 400]
    if "g_cpu.I = 1" in region or "/* $A093: 78 */" in region:
        print("real A093 at", j)
        end = t.find("\n}\n\nvoid func_", j)
        body = t[j:end]
        print("body len", len(body))
        print("A0F4", "label_A0F4:" in body)
        print("A0F7", "label_A0F7:" in body)
        print("A11A", "label_A11A:" in body)
        print("A193", "label_A193:" in body)
        print("0422 write", "0x0422" in body)
        # who owns it
        owner = t.rfind("void func_", 0, j)
        print("owner", t[owner : owner + 60])
        # last labels
        import re

        labs = re.findall(r"label_([0-9A-F]{4}):", body)
        print("last labels", labs[-10:])
        break
    j = t.find("label_A093:", j + 1)
else:
    print("NO real A093 found")

# wrappers
for name in ["func_A093_b3", "func_A11A_b3"]:
    i = t.find("void " + name + "(")
    print(name, "at", i)
    if i >= 0:
        print(t[i : i + 250])
