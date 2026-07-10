#!/usr/bin/env python3
from pathlib import Path

t = Path("generated/teyandee_full_bank03.c").read_text(errors="replace")
# Real A093 with SEI
j = t.find("/* $A093: 78 */")
print("A093 at", j)
print(t[j : j + 6000])
