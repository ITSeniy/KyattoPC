#!/usr/bin/env python3
from pathlib import Path

t = Path("generated/teyandee_full_bank03.c").read_text(errors="replace")

# Find ALL func_*_body that contain real A093 SEI
marker = "/* $A093: 78 */"
idx = 0
while True:
    j = t.find(marker, idx)
    if j < 0:
        break
    # find enclosing body or function
    body = t.rfind("_body(int _entry)", 0, j)
    func = t.rfind("void func_", 0, j)
    print("=== hit at", j, "===")
    print("nearest body decl:", t[body - 40 : body + 40] if body > 0 else None)
    print("nearest void func:", t[func : func + 60] if func > 0 else None)
    # How far to A0F1 and A0F4 from this A093?
    a0f1 = t.find("label_A0F1:", j)
    a0f4 = t.find("label_A0F4:", j)
    a11a = t.find("label_A11A:", j)
    endbrace = t.find("\n}\n\nvoid func_", j)
    print(f"  A0F1 delta={a0f1-j if a0f1>0 else None}")
    print(f"  A0F4 delta={a0f4-j if a0f4>0 else None}")
    print(f"  A11A delta={a11a-j if a11a>0 else None}")
    print(f"  end brace delta={endbrace-j if endbrace>0 else None}")
    # Show if A0F1 is before end
    if a0f1 > 0 and endbrace > 0:
        print(f"  A0F1 before end? {a0f1 < endbrace}")
        print(f"  A0F4 before end? {0 < a0f4 < endbrace}")
        print(f"  A11A before end? {0 < a11a < endbrace}")
        print(t[a0f1 : a0f1 + 250])
    idx = j + 1
