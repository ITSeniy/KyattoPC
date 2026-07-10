# Boot / interrupt RE — bank07 (fixed @ `$C000`)

Source: `banks/bank07.bin`, offline 6502 disasm (pre-Ghidra).  
Verify every address in Ghidra after import.

## Vectors

| Vector | Address |
|--------|---------|
| NMI | `$FCCD` |
| RESET | `$FF90` |
| IRQ | `$FC22` |

## RESET `$FF90`

```
FF90  SEI / CLD / LDX #$FF / TXS
FF97  STA $2001 = 0          ; PPUMASK off
FF9C  STA $2000 = $08        ; PPUCTRL
FFA1  wait 2× vblank ($2002 bit7)
FFAB  STX $8000 = 0          ; MMC3 bank select register = 0
FFB6  STA $E000              ; MMC3 IRQ disable
FFBB  STA $4015 = $0F        ; APU enable
FFC0  STA $4010 = 0          ; DMC off
FFC5  STA $4017 = $40        ; frame counter
FFCE  clear VRAM via $2006/$2007 loop
FFDB  STA $A000 = 0          ; MMC3 mirroring reg
FFE5  clear RAM $0000–$07FF
FFEF  JMP $C0B1
```

## Boot continue `$C0B1`

```
C0B1  LDA #$1E / STA $1D / STA $2001   ; show BG+sprites (PPUMASK shadow $1D)
C0B8  LDA #$88 / STA $1C               ; PPUCTRL shadow ($1C): NMI on, BG $1000?
C0BC  $060A/$060B = $20,$3F            ; palette upload header?
C0C6  JSR $FDF9   hide_sprites
C0C9  JSR $FE04   clear_nametables
C0CC  JSR $FE54   queue_palette
C0CF  JSR $FC00   wait_vblank_drain
C0D2  JSR $C46F   bank_call (entry via $8000)
      … title / menu state machine …
C0E2  on fail: JSR $C4B4, wait, JMP $C0B1   ; retry loop
```

`$C46F` / `$C4B4` are **fixed-bank trampolines** that map a PRG bank then `JSR $8000` (and `$C4E0` uses `JSR $8003`).

## MMC3 helpers (critical for game.toml)

### `$C4FA` — map R6 + R7 (16 KB pair)

```
C4FA  STX $29          ; save 8KB index
C4FC  LDY #$06         ; select R6
C4FE  STY $36          ; shadow bank-select
C500  STY $8000
C503  STX $8001        ; R6 = X
C506  INX
C507  STX $2A
C509  INY              ; Y = 7 → R7
C50A  STY $36
C50C  STY $8000
C50F  STX $8001        ; R7 = X+1
C512  RTS
```

Callers pass **8KB bank index in X**. Even X → recompiler bank `X/2`.

### `$C513` — map R6 only

```
C513  STX $29
C515  LDY #$06
C517  STY $36
C519  STY $8000
C51C  STX $8001
C51F  RTS
```

### Call sites

| Caller | Before call | Then |
|--------|-------------|------|
| `$C46F` | `LDX #$03` / `JSR $C513` | `JSR $8000` |
| `$C4B4` | `LDX #$07` / `JSR $C4FA` | `JSR $8000` |
| `$C4E0` | `LDX #$07` / `JSR $C4FA` | `JSR $8003` |

So early boot uses **8KB bank 3** at `$8000` (`$C513`) and **banks 7+8** as a pair via `$C4FA` (X=7 → R6=7, R7=8).

> Note: iNES has 16 × 8KB = 8 × 16KB. 8KB indices 0–15. X=7 is high half of 16KB bank 3; X=7,8 straddles banks — verify in Ghidra/runtime.

## NMI `$FCCD`

- Save A/X/Y  
- OAM DMA `$4014` ← page `$02`  
- Restore PPUMASK from `$1D`  
- Drain upload queue at `$03A0` (count/flags + PPU addr + tiles) when `$1F` ≠ 0  
- Restore scroll from `$30`/`$34`, PPUCTRL from `$1C`  
- Optional MMC3 IRQ latch from `$20` → `$C000/$C001/$E001`  
- Later: restore CHR banks from `$23+X` via `$8000/$8001` (around `$FD5B`)  
- Controller strobe/read `$4016`  
- RTI path continues past controller…

## IRQ `$FC22`

```
FC22  BIT $37
FC24  BPL $FC29
FC26  JMP $8006          ; game IRQ in switchable bank when $37 bit7 set
FC29  … ack MMC3 IRQ ($E000/$E001), status-bar split, CHR restore …
FC9C  PLA / RTI
```

**Seed target:** `func` at `$8006` under the bank that is mapped when `$37` has bit7.

## ZP / RAM shadows (partial)

| Addr | Role (inferred) |
|------|-----------------|
| `$1C` | PPUCTRL shadow |
| `$1D` | PPUMASK shadow |
| `$1E` | vblank-done flag (NMI sets; `$FC00` waits) |
| `$1F` | DMA/upload length for NMI |
| `$20` | IRQ latch value / enable |
| `$21` | write index into `$03A0` queue |
| `$22` | sprite base index |
| `$23–$28` | CHR bank shadows (written to MMC3 R0–R5) |
| `$29/$2A` | PRG R6/R7 shadows |
| `$30/$34` | scroll X/Y |
| `$36` | last MMC3 bank-select value |
| `$37` | IRQ mode flag (bit7 → `$8006`) |
| `$03A0` | PPU upload queue |
| `$060A+` | palette / upload staging |

## game.toml seeds (from this RE)

```toml
[mapper]
bank_switch = [ 0xC4FA, 0xC513 ]

[functions]
fixed = [ 0xC4FA, 0xC513, 0xC46F, 0xC4B4, 0xC4E0, 0xFC00, 0xFDF9, 0xFE04, 0xFE54 ]
# bank entry points reached only via mapped $8000/$8003/$8006 — need correct bank:
# bank? = [ 0x8000, 0x8003, 0x8006 ]
```

Next RE steps in Ghidra:

1. Xrefs to `$C4FA` / `$C513` — full caller list.  
2. Which 8KB is mapped when `JSR $8000` from `$C46F` (X=3).  
3. Disassemble that bank @ `$8000`.  
4. Label `$8006` IRQ body per bank.  
5. Find text/string tables for locales.
