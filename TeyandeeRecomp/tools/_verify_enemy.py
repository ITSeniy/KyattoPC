#!/usr/bin/env python3
from pathlib import Path

d = Path("generated/teyandee_dispatch.c").read_text(errors="replace")
t = Path("generated/teyandee_full_bank02.c").read_text(errors="replace")

for a in [0xADD0, 0xADDB, 0xADE1, 0xB9E6, 0xBA0C, 0xAFA6, 0xBE5A, 0xB320, 0xBA13]:
    print(
        f"{a:04X} case={f'case 0x{a:04X}:' in d} fn={f'func_{a:04X}_b2' in t}"
    )

i = t.find("void func_ADD0_b2")
print("ADD0 wrapper:", t[i : i + 450] if i >= 0 else "NO ADD0")

# count bank2 funcs
import re

fns = set(re.findall(r"func_([0-9A-F]{4})_b2", d))
print("bank2 dispatch count", len(fns))
