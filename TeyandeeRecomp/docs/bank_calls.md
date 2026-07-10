# Bank-call paths (boot → switchable code)

## Address models

| Model | Meaning |
|-------|---------|
| **CPU** | Address while running (after MMC3 map) |
| **Ghidra / recomp 16KB bank** | `bankNN.bin` loaded at `$8000`; high 8KB is `$A000–$BFFF` |

MMC3 R6 selects an **8KB** bank into `$8000–$9FFF`.  
When R6 is **odd**, that 8KB is the **high half** of a 16KB recomp bank →  
**CPU `$8000` ≡ Ghidra/recomp `$A000`** in that bank.

```
8KB index i  →  16KB bank = i/2,  half = (i even ? low@$8000 : high@$A000)
```

## Path A — title / mode dispatch (`bank_call_C46F`)

Fixed bank:

```
C46F  STA $CE
      …
      LDX #$03
      JSR mmc3_map_r6     ; R6 = 3  → 8KB#3 at CPU $8000
      LDA $CE
      JSR $8000           ; mode_dispatch
```

| | Value |
|--|--------|
| 8KB index | **3** |
| 16KB bank | **1** (high half) |
| Ghidra program | `bank01.bin` |
| CPU entry | `$8000` |
| Ghidra entry | **`$A000`** `mode_dispatch` |

### `mode_dispatch` (CPU `$8000` / Ghidra `$A000`)

```
STX $08
ASL A
TAX
LDA $8011,X / STA $00     ; lo
LDA $8012,X / STA $01     ; hi
JMP ($0000)
```

Also entered at CPU `$8003` (skip `STX $08`) from `bank_call_C4E0` style paths.

### Mode pointer table (CPU `$8011` / Ghidra `$A011`)

| A (mode) | CPU target | Ghidra (bank01) | Label |
|----------|------------|-----------------|-------|
| 0 | `$8264` | `$A264` | `mode_handler_0` |
| 1 | `$8523` | `$A523` | `mode_handler_1` |
| 2 | `$8362` | `$A362` | `mode_handler_2` |
| 3 | `$8127` | `$A127` | `mode_handler_3` |
| 4 | `$801B` | `$A01B` | `mode_handler_4` |

Handlers set CHR shadows `$23+`, queue PPU uploads, call helpers in the same 8KB (`$86xx`…).

## Path B — scene / gameplay (`bank_call_C4B4`)

```
C4B4  …
      LDX #$07
      JSR mmc3_map_r6_r7  ; R6=7, R7=8
      JSR $8000
```

| | Value |
|--|--------|
| R6 | **7** → 8KB#7 at `$8000` |
| R7 | **8** → 8KB#8 at `$A000` (mostly data at start) |
| 16KB bank for code at `$8000` | **3** high half |
| Ghidra program | `bank03.bin` |
| CPU `$8000` | **`$A000`** `scene_entry_jmp` → `JMP $8093` |
| CPU `$8003` | **`$A003`** → `JMP $8F7D` |
| CPU `$8006` | **`$A006`** `scene_irq` (status bar / split) |
| CPU `$8093` | **`$A093`** `scene_init` (SEI, clear $400–$5FF, setup) |

`bank_call_C4E0` uses the same map then **`JSR $8003`** (alt entry).

## IRQ (fixed → switchable)

```
FC22  BIT $37
      BPL local_irq
      JMP $8006          ; requires R6 already pointing at scene bank (7)
```

When `$37` bit7 set, IRQ body is `scene_irq` in 8KB#7.

## Ghidra project contents

| Program | Base | Role |
|---------|------|------|
| `bank07.bin` | `$C000` | Fixed: RESET/NMI/IRQ, bank-call trampolines |
| `bank01.bin` | `$8000` | 8k#2+#3; boot mode dispatch in **high** half |
| `bank03.bin` | `$8000` | 8k#6+#7; scene + IRQ in **high** half |

Open project: `ghidra/teyandee_nesrecomp.gpr`

## recomp seeds (see `game.toml`)

```toml
bank1 = [ 0xA000, 0xA003, 0xA01B, 0xA127, 0xA264, 0xA362, 0xA523 ]
bank3 = [ 0xA000, 0xA003, 0xA006, 0xA093, 0xAF7D ]
```

Runtime still calls **CPU** `$8000` / `$8006`; MMC3 R6-odd remap in nesrecomp must bind those to the `$Axxx` variants.
