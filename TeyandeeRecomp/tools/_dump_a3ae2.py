#!/usr/bin/env python3
from pathlib import Path

t = Path("generated/teyandee_full_bank03.c").read_text(errors="replace")
# Find body function
i = t.find("func_A339_b3_body")
print("body decl", i)
print(t[i : i + 200])
# Find all A3AE with call_by_address nearby
idx = 0
n = 0
while n < 10:
    j = t.find("label_A3AE:", idx)
    if j < 0:
        break
    snip = t[j : j + 250]
    print(f"\n=== hit {n} at {j} ===")
    print(snip)
    idx = j + 1
    n += 1

# Search for S+2 pattern (our fix)
print("\nS+2 count", t.count("g_cpu.S = (uint8_t)(g_cpu.S + 2)"))
print("goto label_A37A after call count")
import re
hits = list(re.finditer(r"call_by_address\(_jt\); \} goto label_A37A", t))
print(len(hits))
if hits:
    print(t[hits[0].start() - 100 : hits[0].end() + 20])
