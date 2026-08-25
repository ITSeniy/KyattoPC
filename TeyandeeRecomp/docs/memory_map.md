# Kyatto Ninden Teyandee RAM/ROM map

This is the canonical, evidence-tracked memory map for the native port. Keep
uncertain names explicit: promote a field from **candidate** to **confirmed**
only after a controlled capture is reproduced and its ROM writers/readers are
identified.

Status vocabulary:

- **confirmed** — instruction-level reads/writes and gameplay behavior agree;
- **inferred** — code flow strongly suggests the role, but controlled captures
  have not yet isolated it;
- **candidate** — correlation from one or more marked captures; do not build a
  gameplay feature on it yet;
- **external** — published for the matching ROM payload, but not yet isolated
  in our captures or attributed to meaningful ROM code.

## CPU work RAM (`$0000-$07FF`)

| Address | Size | Status | Working name | Evidence / notes |
|---|---:|---|---|---|
| `$0009` | 1 | confirmed | shared scratch index/counter | Not persistent character selection state. Bank-3 `$AB83` walks object offsets `$00,$10,...,$70` through it; `$A678/$A6D3/$A73C` also use it as a short loop counter. |
| `$0014-$0015` | 2 | confirmed | indirect dispatch pointer | Collision dispatch at `$9CD4` builds a target here before `JMP ($0014)`. |
| `$001C` | 1 | confirmed | PPUCTRL shadow | Fixed NMI `$FD2D-$FD2F` writes it to `$2000`. Bit 0 selects the horizontal nametable: the camera-page capture changes `$88->$89` exactly when camera X crosses `$00:FF->$01:00`; fixed `$D2DE-$D2E4` performs the same toggle. |
| `$001D` | 1 | inferred | PPUMASK shadow | Restored during NMI/boot rendering setup. |
| `$001E` | 1 | inferred | vblank-done flag | NMI sets it; fixed-bank `$FC00` waits on it. |
| `$001F` | 1 | inferred | NMI upload length/state | Used by the PPU upload path. |
| `$0020` | 1 | inferred | MMC3 IRQ latch/enable shadow | Feeds the scanline IRQ setup. |
| `$0021` | 1 | inferred | PPU queue write index | Associated with the `$03A0` upload queue. |
| `$0022` | 1 | inferred | sprite base/index | Used by sprite/OAM setup. |
| `$0023-$0028` | 6 | inferred | MMC3 CHR R0-R5 shadows | Written to mapper CHR bank registers. |
| `$0029-$002A` | 2 | inferred | MMC3 PRG R6/R7 shadows | Written by the bank-switch helpers. |
| `$002F` + `$0054` | 2 | confirmed | camera X within page, 8.8 fixed point | Non-contiguous pair: `$002F` is the fractional byte and `$0054` the integer pixel byte. Fixed `$D2BF-$D2DA` adds the player's horizontal speed to this pair while the player is pinned at screen X `$80`; reverse movement subtracts at `$D385-$D394`. |
| `$0030` | 1 | confirmed | rendered PPU scroll X shadow | Fixed NMI `$FD35-$FD37` writes it to the first `$2005` scroll port. In the camera capture it exactly follows the integer camera movement and the recorded live PPU scroll: `$00->$06->$08`. |
| `$0031` | 1 | confirmed | horizontal camera page counter | Fixed `$D2DE-$D2E4` toggles PPUCTRL nametable bit 0 and increments this byte when `$0054` wraps. Together, `$0031:$0054.$002F` forms the extended horizontal camera position. |
| `$0034` | 1 | inferred | PPU scroll Y shadow | Restored by the NMI path. |
| `$0036` | 1 | inferred | last MMC3 bank-select | Tracks the mapper `$8000` selection. |
| `$0037` | 1 | confirmed | IRQ mode flags | Bit 7 dispatches the bank-3 scene IRQ at CPU `$8006`. |
| `$003A` | 1 | confirmed | selected/target character ID | Encoding is `0 = Speedy`, `1 = Guido`, `2 = Polly`. Fixed-bank `$CEA8-$CEB3` increments it and wraps at 3; `$CF64/$CF7A` copy it to `$003B` when the requested character becomes active. |
| `$003B` | 1 | confirmed | active character ID | Same encoding as `$003A`. Initialized together with `$003A` at `$C14C-$C14E`, written by `$CF96`, and read by player/HUD code including bank-4 `$9ADA` and `$9A52`. Bank-4 `$9A63-$9A67` compares the selected and active IDs. |
| `$003F` | 1 | confirmed | player health | Half-heart units: `$0A` is five full hearts and each ordinary hit subtracts 1. Fixed-bank `$C426-$C428` initializes it to `$0A`; damage paths at model `$B3FD` and fixed `$D9A6/$D9AD` decrement it; fixed `$C324-$C328` tests zero for death. |
| `$0040` | 1 | external | ninpo power | Published for the matching Japanese ROM by the NNNesterJ cheat table. Needs an isolated pickup/use capture and reader/writer attribution. |
| `$0041` | 1 | external | HELP gauge | Published for the matching Japanese ROM. Exact units and helper mechanics are still untested. |
| `$0043-$0044` | 2 | external | lives | Published as a two-address lives cheat. Byte order/encoding and whether one byte is a display shadow remain unknown. |
| `$0045-$0048` | 4 | external | score digits | Published as one decimal digit per byte. Needs score-gain and continue/reset captures. |
| `$0050-$0051` | 2 | confirmed | object-walker cursor | Starts at `$0420`, advances by `$20`, and ends at `$05A0`. |
| `$005D` | 1 | external | round ID | Published range is `$01-$0B`, matching the game's 11 rounds. This is the highest-priority next mode/stage capture. |
| `$007E` bits 0-1 | 2 bits | confirmed | damage/invulnerability phase | `00` normally, `11` during the initial hit/knockback phase, then `10` during post-hit blinking. Damage code at model `$B3F7-$B3FB` rejects another hit while bit 1 is set; fixed `$D9AF-$DA27` starts and advances the two phases. Other bits of `$007E` have separate meanings. |
| `$0083` | 1 | confirmed | vertical-movement mode | `0` while grounded and `1` during an ordinary short or long jump in the Polly capture. ROM code also assigns additional values in ceiling/alternate-gravity paths, so this is a mode byte rather than a Boolean airborne flag. |
| `$0084` | 1 | confirmed | horizontal movement mode/direction | `$00` is idle; `$01/$81` walk right/left; `$02/$82` run right/left. Thus bit 7 is left direction and the low bits select walking or running. Fixed `$D293`, `$D34E-$D350`, and `$D4DC-$D4E9` construct these values; fixed `$D1C0-$D206` selects and applies the corresponding speed profile. |
| `$0089` | 1 | confirmed | double-tap/run detector | Bit 4 remembers left versus right, bit 7 marks the wait for a second press, and the low nibble is the timing counter. Fixed `$D488-$D4E9` starts the detector on the first press, arms it on release, expires the window, validates the second press and changes `$0084` to run mode. |
| `$008A` | 1 | confirmed | damage/invulnerability countdown | Initialized to `$40` on damage. When it reaches zero, fixed `$DA0A-$DA1B` ends knockback, clears `$008B`, and reloads `$38` for the second blinking/invulnerability phase; the next zero ends the protection. Its low three bits drive player visibility blinking around fixed `$D9F1-$DA06`. |
| `$008B` bit 7 | 1 bit | confirmed | horizontal knockback direction | The damage handler at model `$B409-$B413` writes `$00` or `$80`; fixed `$D9D4-$D9EE` and player movement code use the sign bit to select the knockback side. In the controlled contact from Polly's right, `$80` produces leftward knockback. This is not the invulnerability timer. |
| `$0087` | 1 | external | jump/effect control | A public cheat writes `$00` for a super-jump effect, but that description does not establish the normal field semantics. |
| `$008F` | 1 | external | collision/invulnerability control | A public cheat writes `$0F` to pass through enemies. Individual bit meanings and normal ownership are unknown. |
| `$00E4` | 1 | confirmed | collision tile class/index | Doubled and used to index the `$918C` collision handler table. |
| `$00EA` bit 7 | 1 bit | confirmed | pause/gameplay-freeze flag | Controlled capture shows `$00->$80->$00` before/during/after pause. Fixed-bank `$CDF8` sets bit 7, `$CF32` clears it, and `$D15A` returns early while the byte is nonzero. |
| `$03A0+` | variable | inferred | PPU upload queue | Consumed during NMI; exact entry grammar remains to be documented. |
| `$0400-$041F` | `$20` | inferred | player object slot | Fixed-bank initialization and bank-1 player/collision code access the same `$20`-byte layout immediately before the 12 walked object slots. Offset names still need isolated captures. |
| `$0401-$0402` | 2 | confirmed | player screen X, 8.8 fixed point | Fractional byte first, integer pixel byte second: `X = $0402 + $0401 / 256`. `$0402` is `$30` idle, `$28` after moving left, and `$6A` after moving right. Fixed `$D2EF-$D30F` propagates carry from `$0401` into `$0402`; player movement code around model `$B464-$B488` reads and modifies `$0402`. |
| `$0403-$0404` | 2 | confirmed | player screen Y, 8.8 fixed point | Fractional byte first, integer pixel byte second: `Y = $0404 + $0403 / 256`. `$0404` is `$80` on the ground, `$6F` at `SHORT_JUMP`, and `$59` at `LONG_JUMP`. Vertical physics around model `$B7BA-$B7DC` propagates carry into `$0404`, which is also used by collision paths. |
| `$0405-$0406` | 2 | confirmed | horizontal speed magnitude, 8.8 fixed point | Fractional byte first, integer byte second. The walking marker has `$0100` (1.0 pixel per gameplay frame), while `RUNNING` has `$0180` (1.5 pixels). Fixed `$D4EB-$D4F2` explicitly installs `$0180` when the double-tap detector activates running; `$0084` carries the direction and gates application of the magnitude. |
| `$0409` | 1 | candidate | player character/animation state | At the three level-idle markers it is `$01/$10/$20` for Speedy/Guido/Polly, but later advances to `$11/$21` in the latter sessions. It correlates with character graphics/state, not a stable character ID. |
| `$0420-$059F` | 12 × `$20` | confirmed | object slots | Fixed-bank `$DE74` walker. The first isolated enemy capture maps the common position, velocity, animation, type, and state fields documented below. |
| `$060A+` | variable | inferred | palette/upload staging | Used by boot/NMI rendering setup. Exact range and record structure are open. |
| `$06F6` bit 7 | 1 bit | external | secret hard-mode flag | Public cheat value `$80`; RetroAchievements also contains hard-mode challenges. Needs a normal-mode/hard-mode paired capture. |

## Object slot layout (`$20` bytes each)

Base addresses are `$0420 + index * $20`, for indices 0-11. The table below is
the common object header/layout. Type-specific handlers can assign additional
meanings to the remaining bytes.

| Offset | Size | Status | Working name | Notes |
|---|---:|---|---|---|
| `+$00` | 1 | confirmed | object flags | Bit 0 marks an active slot in the fixed `$DE74-$DE8C` walker. Bit 2 is the horizontal sprite-facing/flip flag: it is set while the isolated enemy faces left (`$65`) and clears only at the actual reversal (`$61`), after the head-turn animation has already begun. Other bits remain type/context dependent. |
| `+$01-$02` | 2 | confirmed | object screen X, 8.8 fixed point | Fractional byte first, integer pixel byte second. Slot `$04A0` follows the isolated enemy from `$D6.00` to `$9B.40`, `$5A.40`, then `$5C.40`, matching its screenshot position. |
| `+$03-$04` | 2 | confirmed | object screen Y, 8.8 fixed point | Fractional byte first, integer pixel byte second. The captured ground enemy remains at `$80.00`; common fixed-bank code at `$DF59-$DF70` adds `+$07-$08` to this pair. |
| `+$05-$06` | 2 | confirmed | signed horizontal velocity, 8.8 fixed point | Fractional byte first, signed integer byte second. The patrol values are `$FE.C0 = -1.25` px/frame left, `$FF.60 = -0.625` during the pre-turn slowdown, and `$01.40 = +1.25` after reversal. |
| `+$07-$08` | 2 | confirmed | signed vertical velocity, 8.8 fixed point | Fractional byte first, signed integer byte second. Common integration is visible at fixed `$DF59-$DF70`; the ground-patrol capture keeps it at `$00.00`. |
| `+$09` | 1 | confirmed | current metasprite/frame ID | Written by the common animation sequencer at fixed `$DF16-$DF57`. The isolated enemy cycles `$19/$1A` while walking left, uses `$1B/$1C` during the turn, and settles on `$18` after facing right. IDs are type-specific. |
| `+$0A` | 1 | confirmed | animation sequence ID | Fixed `$DEEB+` uses it to select the animation sequence/table. The enemy uses sequence 1 for ordinary patrol, 2 for the head-turn phase, and briefly 3 around the completed reversal. |
| `+$0B` | 1 | confirmed | animation frame countdown | Decremented and reloaded by the common animation sequencer around fixed `$DF08-$DF57`. |
| `+$0C` | 1 | confirmed | animation frame index | Advances within the sequence selected by `+$0A` and selects the data that supplies `+$09`. |
| `+$0D` | 1 | inferred | object/render flags | Changes from `$83` to `$80` during the turn and returns to `$83` when normal patrol resumes. Exact bit meanings remain open. |
| `+$0E` | 1 | confirmed | object type ID | Fixed `$DE8D-$DE9D` doubles this byte and indexes the bank-2 type-to-state-table table at model `$AD20`. The isolated blue enemy is type `$42`. |
| `+$0F` | 1 | confirmed | behavior/state handler index | Fixed `$DEAA-$DEC5` dispatches through the type-specific state table using this byte. The enemy is in patrol state 2 and progresses through states 4-9 during its turn before returning to 2. |
| `+$10` | 1 | inferred | behavior-state timer | Counts down through the isolated enemy's pre-turn/turn states, but its precise convention may be type-specific. |
| `+$12` | 1 | candidate | turn-sequence flag | Changes `0 -> 1` during this enemy's turn and clears when ordinary patrol resumes; needs another enemy/type capture before assigning a general meaning. |
| `+$1C` bit 7 | 1 bit | candidate | requested/target horizontal direction | Sets before the head-turn animation while `+$00` bit 2 and horizontal velocity still indicate left. It remains set after the actual rightward reversal, so it is not the current facing flag. Likely an AI direction request/latch; needs another controlled capture. |
| other | variable | candidate | type-specific object data | Offsets `+$11`, `+$13-$1B`, and `+$1D-$1F` are not mapped yet. |

## PRG ROM overview

NESRecomp's generated functions use a 16 KB bank model. For odd MMC3 8 KB
windows, a CPU `$8000-$9FFF` address can appear at model `$A000-$BFFF`; always
record both CPU address and generated model address in detailed notes.

| 16 KB bank | Known role | Important regions / entry points |
|---:|---|---|
| fixed | boot, main loop, mapper helpers, NMI/IRQ | `$C0B1` boot continue; `$C1C8-$C2C3` gameplay loop; `$C4FA/$C513` bank switching; `$DE74` object walker; `$FCCD` NMI; `$FC22` IRQ |
| 1 | mode dispatch and player physics/collision | model `$A000` mode dispatch; `$B170-$B179` physics vectors; `$B18C` collision target table |
| 2 | enemies, objects, effects | type table `$AD20-$ADC9`; state handlers `$ADD0+`; breakable props `$B8C8+` |
| 3 | scenes and cutscenes | model `$A000` scene entry; `$A006` scene IRQ; `$A093` scene init; `$A339` script tick; `$AFCA` opcode table |
| 4 | HUD and sprite helpers | CPU/model `$9800+` helper jump table |
| 5 | music and sound effects | model `$A000` audio frame; `$A4BD` music opcode table; `$A981` note/instrument table |

Detailed control-flow notes remain in [`gameplay_loop.md`](gameplay_loop.md),
[`bank_calls.md`](bank_calls.md), and [`audio.md`](audio.md). Capture procedure
and generated candidate reports are described in
[`ram_map_capture.md`](ram_map_capture.md).

## Controlled capture evidence

Session `ram-20260821-122719` contains 22 markers and 1,606 sampled frames.
Labels ending in `_SELECTED` denote the currently highlighted menu variant.

- `GUIDO_SELECTED`, `POLLY_SELECTED`, and `SPEEDY_SELECTED` produce distinct,
  repeatable portrait payloads around `$03A5-$03AE`, inside the PPU upload
  queue. These bytes describe rendered output and are not yet evidence of a
  persistent character-selection field.
- `$0009` happens to read `1`, `2`, and `0` at those three marked frame
  boundaries, but ROM tracing rejects it as the selection variable: scene and
  object helpers overwrite it repeatedly as a general scratch counter.
- `$00EA` bit 7 cleanly follows `PAUSE_ON`/`PAUSE_OFF` and is corroborated by
  fixed-bank set/clear sites and gameplay early-out code, so it is promoted
  to confirmed.

Sessions `ram-20260821-124547`, `ram-20260821-124609`, and
`ram-20260821-124645` start the same level as Speedy, Guido, and Polly,
respectively. Their screenshots confirm the portrait and in-level character at
every named marker.

- At `LEVEL_IDLE_SPEEDY`, `LEVEL_IDLE_GUIDO`, and `LEVEL_IDLE_POLLY`, both
  `$003A` and `$003B` are stable at `0`, `1`, and `2`, respectively. In the
  Guido and Polly recordings the pair changes from `0` to the chosen value
  around 49 frames after the `*_CONFIRMED` marker, during the screen transition.
- The fixed-bank writers distinguish the roles: `$003A` is the requested
  selection, while `$003B` is the character currently active in gameplay. They
  are normally equal outside a character-change transition.
- `$0025/$0026` settle at `$04/$05`, `$08/$09`, and `$0C/$0D`. Bank-4 `$9ADA`
  derives these mapper shadow values by indexing a CHR table with `$003B`, so
  they are character graphics banks rather than additional character IDs.
- `$0409` differs at the same idle markers, but continues changing afterward;
  it remains only a candidate player-slot animation/graphics field.

Session `ram-20260821-131941` follows Polly through idle movement, two jump
heights, and repeated contact damage. Its ten F9 markers all have matching
screenshots, so the state labels refer to the exact paused frame rather than a
later frame reached while switching windows.

- The integer coordinate bytes directly match the screenshots: `$0402` moves
  from `$30` at `LEVEL_IDLE` to `$28` at `MOVE-LEFT` and `$6A` at
  `MOVE_RIGHT`; `$0404` moves from ground level `$80` to `$6F` at
  `SHORT_JUMP` and `$59` at `LONG_JUMP`. Fractional-byte carry in the ROM
  routines confirms the adjacent 8.8 layouts.
- `$003F` is `$0A` through movement, then becomes `$09`, `$08`, and `$07` at
  `FIRST_HIT-TAKEN`, `SECOND_HIT_TAKEN`, and `THIRD_HIT_TAKEN`. Two additional
  unmarked contacts before `SESSION_END` reduce it to `$05`; these are visible
  in the frame history and are not delayed marker captures.
- `$0083` is `1` in both ordinary jump markers and `0` at every grounded
  movement marker. This disproves the earlier narrow ceiling-only name and
  establishes it as a broader vertical-movement mode.
- `$0409` is `$20` at idle and `$22` during both jumps, then reaches `$27`
  during damage. This further supports animation/action state, but its full
  encoding is not yet isolated.

Session `ram-20260821-133054` isolates Polly at `IDLE`, `WALKING`, `RUNNING`,
before and after enemy contact, and during recovery.

- `$0084` is `$00`, `$01`, and `$02` at the three movement markers. At the same
  markers `$0405-$0406` holds `$0100` while idle/walking and `$0180` while
  running; the retained `$0100` while idle is not applied until a direction is
  active. Fixed ROM writers supply the corresponding left-facing `$81/$82`
  variants even though this session demonstrates the right-facing values.
- `$0089` progresses through ordinary low-nibble counts, then values such as
  `$80-$88` or `$90-$98` while the second-tap window is armed. The run begins
  with `$0084 = $02`; fixed `$D488-$D4E9` proves that these correlations are
  the double-tap state machine rather than animation timing.
- The first health change occurs at frame 1641. At that point `$003F` becomes
  `$09`, `$007E & 3` becomes `3`, and `$008A` starts at `$40`. When the first
  countdown expires near frame 1830, `$007E & 3` becomes `2`, `$008B` clears,
  and `$008A` reloads near `$38` for the blinking recovery phase.
- `DAMAGE_RECOVERY` at frame 1874 was captured correctly, but `$008A` was still
  `$09`: nine active gameplay ticks of protection remained. The F9 dialog then
  kept the game frozen with `$008A = $07`; after resuming, Polly was still in
  contact with the enemy and took another hit at frame 2030. This behavior also
  confirms that marker entry pauses gameplay without advancing its timers.

Session `ram-20260821-213626` compares `IDLE` with
`CAMERA_SCROLL_LEFT`. The latter label describes the scenery moving left; the
camera coordinate itself increases to the right.

- At `IDLE` frame 1428, player screen X is `$79`, camera X is
  `$0031:$0054.$002F = $00:$00.$80`, and both `$0030` and the recorded live PPU
  X scroll are `$00`.
- The second marker is after the direction was released, but the continuous
  history retains active scrolling at frame 1790: Right is held, player screen
  X is pinned at `$80`, camera X is `$00:$06.$80`, and both rendered scroll
  values are `$06`.
- At `CAMERA_SCROLL_LEFT` frame 1850, movement has stopped at camera X
  `$00:$08.$80`; `$0030` and the live PPU scroll remain `$08`, and the player
  remains at screen X `$80`. Thus the two markers are a valid before/after
  comparison even though the named endpoint is not itself an active-scroll
  frame.

Session `ram-20260821-214554` crosses a complete 256-pixel camera page and
confirms the high part of the extended coordinate.

- At `IDLE` frame 355 the camera is `$00:$00.$00`, rendered/live PPU scroll X
  is `$00`, and the PPUCTRL shadow is `$88`.
- Stored frame 1430 is immediately before the boundary at camera
  `$00:$FE.$80`. By stored frame 1440 it has crossed to `$01:$02.$80`:
  `$0031` increments, `$0054` wraps, `$0030` and live PPU scroll wrap to `$02`,
  and `$001C` changes from `$88` to `$89` to select the other horizontal
  nametable.
- `SCROLL_RIGHT_SCREEN_WIDTH` frame 1494 remains at `$01:$02.$80`, proving the
  endpoint marker is on the far side of the page boundary. Together with the
  fixed `$D2BF-$D2E4` arithmetic, this confirms the camera-coordinate formula
  `$0031:$0054.$002F`.

Session `ram-20260821-215458` isolates the movement and reversal of one blue
ground enemy. Exactly one of the 12 object slots is active at all four enemy
markers: index 4, base `$04A0`.

- At `ENEMY_START` frame 1158 the slot X is `$D6.00`; at `ENEMY_MOVED` frame
  1253 it is `$9B.40`. The camera is unchanged and the screenshots show the
  same enemy moving left by the corresponding amount. Its horizontal velocity
  is `$FE.C0`, or `-1.25` pixels per gameplay frame.
- `ENEMY_ABOUT_TO_TURN` frame 1484 is a distinct and useful state, not an
  ambiguous duplicate of `ENEMY_TURNED`: the head-turn metasprite `$1B` is
  visible, but slot flags still contain the left-facing bit (`+$00 = $65`) and
  velocity is still negative (`$FF.60`, or `-0.625`). The behavior handler is
  state 6 and the animation sequence is 2.
- The continuous frame history places the actual reversal at frame 1619:
  `+$00` changes `$65->$61`, velocity changes `$FF.60->$01.40`, and behavior
  state advances `7->8`. Thus animation anticipation and physical reversal are
  independently observable.
- At `ENEMY_TURNED` frame 1640 the enemy is moving right at `+1.25` pixels per
  frame, displays metasprite `$18`, and has returned to patrol handler 2. The
  full turn-state progression is `2 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 2`.
- Bit 7 of `+$1C` sets at frame 1440, before either the slower pre-turn velocity
  or the actual facing change. It is retained as a direction-request candidate,
  deliberately separate from the confirmed current-facing flag at `+$00` bit 2.

## Promotion checklist

For every new RAM field:

1. reproduce the correlation in at least two short marked sessions;
2. identify all meaningful writers with `rdb_range`/`rdb_dump` or a targeted
   `NESRECOMP_WRITE_WATCH` run;
3. identify gameplay readers in generated C and the original bank disassembly;
4. document byte order, units, valid range, and reset/transition behavior;
5. add the field to `game_fill_frame_record()` only after its address is stable.
