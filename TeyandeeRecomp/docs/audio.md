# Audio engine (bank5)

## Hook from NMI

Every frame after controller read:

```
FDD9  JSR $FC9E
```

### `$FC9E` — audio bank trampoline (fixed)

```
LDY #$06 / STY $8000 / LDA #$0B / STA $8001   ; R6 = 11 (8KB#11)
INY          / STY $8000 / LDA #$0C / STA $8001   ; R7 = 12 (8KB#12)
JSR $8000                                         ; audio_frame
; restore R6/R7 from $29/$2A, restore bank-select shadow $36
RTS
```

| | |
|--|--|
| 8KB R6 | **11** |
| 16KB bank | **5** high half |
| CPU `$8000` | Ghidra/recomp **`$A000`** |

## Layout (model addresses in bank5)

| Addr | Role |
|------|------|
| `$A000` | `audio_frame` — process SFX queue `$0700+`, channel tick |
| `$A0AB` / `$A0FC` | per-channel update |
| `$A186` | write APU regs `$4000–$4003` (CPU `$8186` under R6=11) |
| `$A4BD–$A4FD` | **opcode jump table** (32 × LE16 CPU ptrs) |
| `$A500+` | music script opcodes |
| `$A981` | note/instrument pointer table |

## game.toml

- `fixed` includes `$FC9E`
- `bank5` seeds entry + opcode handlers
- `[[known_table]]` for `$A4BD` and `$A981`

Smoke after seeds: **`dispatch_miss_count: 0`** on 120 frames.
