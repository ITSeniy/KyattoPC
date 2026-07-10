# Main gameplay loop & collision path

## Fixed bank loop (`$C1C8`…`$C2C3`)

After title returns non-zero, the game settles into a per-frame loop that:

1. Maps **R6=3, R7=4** (`LDX #$03` / `JSR $C4FA`)
2. Calls physics/state vectors in bank1 high half:
   - `JSR $9173` → model `$B173` → `JMP $9CE5` (`$BCE5`)
   - `JSR $9176` → `$B176` → `$99A3` (`$B9A3`)
   - `JSR $9179` → `$B179` → `$9AF8` (`$BAF8`)
   - `JSR $9170` → `$B170` → `$9BE5` (`$BBE5`) — includes solid-tile checks on `$0404`
3. Maps **R6=8** (`LDX #$08` / `JSR $C513`) and runs bank4 helpers `$9803/$9806/$9809`
4. Sometimes maps R6=3 again and `LDA #$04 / JSR $8000` (mode_handler_4)

## Why collision was dead

Playtest logged:

```
MISS $B170/$B173/$B176/$B179 bank=1 (cpu=$917x)
```

Those addresses are the **only** entry points into the player physics package.  
Without them, `call_by_address` returned immediately → no tile tests, no gravity/state updates that depend on them.

## Reverse gravity / roof-attach (`$83`)

Ceiling walk sets `$83 = 1` (see `$BA25`, `$BB0A`) and uses:

```
JSR $91CC / … / PLA PLA / JMP $C00F
```

`PLA PLA` discards the **6502 return address** of the physics JSR and re-enters the
game loop at `$C22F` via `$C00F`. That only works if every JSR pushes a real
return address onto `$0100+S`.

**Do not** enable global `push_all_jsr` — it nests NMI/audio until C-stack
overflow (crash before character select).

Instead the recompiler special-cases `PLA PLA JMP abs` (see
`code_generator.c`): without a real JSR push it skips the PLAs (no underflow)
and tail-dispatches the JMP target (`$C00F`). That is the roof-attach path.

### Collision-type jump table (why roof “bonked”)

Solid tiles are classified via LUT CPU `$917C` → `$E4`, then:

```
$9CD4:  ASL $E4 → TAX → LDA $918C,X / $918D,X → STA $14/$15 → JMP ($0014)
```

Table lives at model `$B18C` (R6=3). Important entries:

| tile class | `$E4` | CPU target | model   | role |
|-----------:|------:|------------|---------|------|
| `$02`     | `$0C` | `$92AC`    | `$B2AC` | Y-subpixel / attach vs land |
| `$0D` roof| `$08` | `$93EA`    | `$B3EA` | roof-class handler |
| `$0F`     | `$07` | `$9752`    | `$B752` | also CMP `#$0D` snap |

If those model addresses are not recomp function entries, dispatch MISSes and the
player only gets a solid stop (bonk) instead of reverse attach. Seed the full
table in `game.toml` `bank1`.

## Cutscene / scene engine

### Boot path

```
C0B1 → C46F mode0 (title)
  title returns 0  → C4B4 A=0   (attract / demo scene)
  title returns 1  → C4B4 A=$24 (new-game intro)
  then C44A[$5D]   → stage open scenes
```

`C4B4` maps R6=7,R7=8, `JSR $8000` → bank3 `$A000` → `scene_init` `$A093`.

### Script runner

- Script pointer from table CPU `$9C09` (model `$BC09`), indexed by scene id.
- Per-frame R7 comes from `$907A[scene]` via `$8B9E` (not always 8!).
  Intro `$24` uses **R7=$0A** — data lives in 8KB#10, not bank4.
- Tick: `$8339` / model `$A339`. Opcodes dispatched via table CPU `$8FCA`
  (model `$AFCA`), using:

```
LDA #>$8379 / PHA / LDA #<$8379 / PHA / …build $00… / JMP ($00)
; handler RTS → $837A opcode loop
```

### Why it skipped (fixed)

1. **Missing opcode seeds** — handlers `$A3B1`…`$A541` were not recomp
   entries → `call_by_address` no-op.
2. **2-PHA + JMP ($00) codegen** — intervening table-build meant the
   recompiler emitted `call_by_address; return` instead of continuing at
   `$A37A`. Fixed in `code_generator.c` (scan-back + CPU→model `$+2000`
   for high-half banks; drop fake 6502 frame when `push_all_jsr` is off).
3. **`scene_init` truncated** — false standalone at bank3 `$8F7D` (data)
   linear-scanned into `$A0xx`, hit `MAX_INSNS_PER_FUNC` (2048) at `$A0F1`,
   so `func_A093` never ran PLA / script load / main loop `$A11A` and
   returned straight to character select. Fix: `[[data_region]]` bank3
   `$8000–$A000`, filter those entries in `main_nes.c`, promote orphan
   secondaries.
4. **Black screen after “no skip”** — `[[merge_range]]` on `$A093–$A1C9`
   folded `$A1AD` (nametable/PPU setup + CLI) into the mega-body **without**
   a dispatch case, so `JSR $81AD` no-op’d → blank PPU / stuck scene. Keep
   `$A1AD` / `$A1EC` as separate seeds (no merge_range for scene_init).

## Enemies / objects

Per-frame AI: fixed `$DE74` maps **R6=4/R7=5** (bank2), walks object slots
at `$0420+`, indexes type table `$AD20` → state table → `JMP ($02)`.

Type table is **types 0–84** at `$AD20–$ADC9` (not just 0–31).  
Type 0 state 0 is **`$ADD0`** (death FX / despawn).  
Breakable rocks/props use **type 40** (`$B8C8` → `$B8CE`) and **type 41**
(`$B8E9` → `$B8EF`); death variant **type 71** (`$ADE1` → `$ADE7`).

Playtest MISS on those entries (or on trampolines `$C02D`/`$C01E`/`$C060` they
call) left the shared object walk incomplete → **no break FX** and **all
enemies/powerups on screen froze**. Seed full type-table handlers + the whole
`$C00F–$C0AE` trampoline table and destinations.

## Audio pitch / latency note

Runner APU is **NTSC** (`CPU_FREQ 1789773`, 735 samples @ **60.0 Hz**).  
Video pacing targets exactly `1000/60` ms/frame (not integer `Delay(16)` ≈ 62.5 fps) so the producer does not overfeed the audio ring.

SDL bridge (`recomp_audio_drc.h`):
- **target fill ~40 ms**, preroll ~80 ms (servo drains preroll → target)
- **±0.5%** rate correction (`max_correction`) tracks host crystal vs video clock
- **stretch** conceals brief underruns instead of silence clicks

If pitch is very wrong, check console line `[APU] Audio device opened: N Hz` (host rate ≠ 44100 → DRC resamples).
