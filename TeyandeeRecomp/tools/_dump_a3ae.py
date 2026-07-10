#!/usr/bin/env python3
from pathlib import Path

t = Path("generated/teyandee_full_bank03.c").read_text(errors="replace")
# Real path containing 8FCA table load
j = t.find("0x8FCA + g_cpu.X")
print("8FCA at", j)
print(t[j : j + 1500])
print("====")
# Check if A475 exists as real function
for name in ["func_A475_b3", "func_A3B1_b3", "func_A565_b3", "func_A5E5_b3", "func_A37A_b3"]:
    i = t.find(f"void {name}")
    print(name, "decl" if i >= 0 else "MISSING")
    if i >= 0:
        # show if stub
        body = t[i : i + 400]
        print(body[:300])
        print("---")
