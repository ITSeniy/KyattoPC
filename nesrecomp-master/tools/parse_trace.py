#!/usr/bin/env python3
import argparse
import json
from pathlib import Path

parser = argparse.ArgumentParser(description="Summarize a JSON-wrapped Mesen frame trace")
parser.add_argument("trace", type=Path, help="path to the captured trace JSON")
args = parser.parse_args()

raw = args.trace.read_text(encoding="utf-8")

outer = json.loads(raw)
text = ''.join(item.get('text','') for item in outer if isinstance(item, dict))
frames = json.loads(text)

prev_sub = None; prev_slot = None; prev_074E = None
for fr in frames:
    sub   = fr.get('submode', 0)
    slot  = fr.get('ppu_slot', 0)
    r074E = fr.get('r074E', 0)
    fn    = fr.get('frame', 0)
    if sub != prev_sub or (slot != 0 and slot != prev_slot) or r074E != prev_074E:
        print('frame=%4d submode=%d ppu_slot=%d r074E=%d r0756=%d nodisplay=%d ppumask=0x%02x upload_hi=%s upload_lo=%s' % (
            fn, sub, slot, r074E,
            fr.get('r0756',0), fr.get('nodisplay',0), fr.get('ppumask',0),
            hex(fr.get('upload_hi',0)), hex(fr.get('upload_lo',0))))
        prev_sub = sub; prev_slot = slot; prev_074E = r074E
