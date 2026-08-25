# TAS desynchronisation analysis

This workflow compares the published TAS in its recorded emulator, FCEUX
2.2.2, against the native port without relying on screenshots or manual
Alt-Tab timing. It records all 2 KiB of internal WRAM after every frame and
then aligns and compares the two traces.

## Tools

- `tools/fceux_tas_trace.lua` writes an `FRT1` binary WRAM trace from FCEUX.
- `--smoke-ram-trace` writes a compatible `NRT1` trace from the native runner.
- `NESRECOMP_WRAM_TRACE` writes a JSONL delta trace indexed by physical video
  frames, including frames during which NMI is disabled.
- `tools/compare_tas_traces.py` finds frame alignment, transient differences,
  recovery runs, and the first difference after the final exact recovery. Its
  native input may be either trace format.
- `tools/fceux_write_trace.lua` attributes selected reference writes to the
  FM2 frame, CPU-cycle counter, and 6502 program counter.
- `NESRECOMP_WRITE_WATCH` attributes matching native writes to generated
  functions and records both callback and physical-frame clocks.

Both binary formats have a 16-byte little-endian header followed by records
containing a 32-bit frame number and the complete `$0000-$07FF` RAM image.
A 31,223-frame trace is about 64 MB and belongs in a temporary/capture
directory, not in Git.

The Lua APIs used here are documented by FCEUX: `emu.frameadvance()` advances
one frame, `memory.readbyterange()` returns a RAM byte string,
`memory.registerwrite()` installs write callbacks, and
`memory.getregister("pc")` reads the current 6502 PC:
<https://fceux.com/web/help/LuaFunctionsList.html>.

## Reproduction

Run the reference movie with the exact emulator version named by TASVideos:

```powershell
$env:TEYANDEE_FCEUX_TRACE = "$env:TEMP/teyandee-fceux.trace"
./fceux-2.2.2/fceux.exe `
  -playmovie ./movie.fm2 -readonly 1 `
  -lua ./tools/fceux_tas_trace.lua -nothrottle 1 `
  "../Cat Ninden Teyandee (Japan).nes"
```

Convert and run the same 31,223 input frames in the port:

```powershell
python ./tools/fm2_to_input.py ./movie.fm2 ./tas-input.txt
./build_release_ninja/TeyandeeRecomp.exe `
  "../Cat Ninden Teyandee (Japan).nes" `
  --script ./tas-input.txt --smoke 31224 `
  --smoke-output "$env:TEMP/teyandee-native.json" `
  --smoke-ram-trace "$env:TEMP/teyandee-native.trace"
```

Compare them:

```powershell
python ./tools/compare_tas_traces.py `
  "$env:TEMP/teyandee-fceux.trace" `
  "$env:TEMP/teyandee-native.trace" `
  --output "$env:TEMP/teyandee-compare.json"
```

`--offset N` forces a known alignment. `--frame-offset N` on
`fm2_to_input.py` is available for controlled timing experiments; it should
not be used for the canonical baseline without evidence.

For timing work, capture the native side against the physical video-frame
clock instead of the NMI callback counter:

```powershell
$env:NESRECOMP_WRAM_TRACE = "$env:TEMP/teyandee-native-vframe.jsonl"
./build_release_ninja/TeyandeeRecomp.exe `
  "../Cat Ninden Teyandee (Japan).nes" `
  --script ./tas-input.txt --smoke 400
python ./tools/compare_tas_traces.py `
  "$env:TEMP/teyandee-fceux.trace" `
  "$env:TEMP/teyandee-native-vframe.jsonl"
```

## Historical callback-clock result (2026-08-25)

This result predates the physical video-frame input clock. The exact ROM
payload matches the FM2 checksum and the native run reports zero dispatch
misses, but automatic alignment selects native index = reference index + 4
because the old native trace was indexed by NMI callbacks. The traces have
several short reset/transition differences and recover again; therefore the
first byte mismatch is not itself the TAS failure.

The last exact recovery of the known gameplay fields ends at reference index
347. The first **unrecovered** difference is:

| Trace | Record index | Recorded frame |
|---|---:|---:|
| FCEUX | 348 | 349 |
| Native | 352 | 352 |

At that point:

| Address | Meaning | FCEUX | Native |
|---|---|---:|---:|
| `$003F` | health | `$0A` | `$09` |
| `$007E` | player action/state | `$00` | `$03` |
| `$008A` | player animation timer | `$00` | `$40` |

The native port has taken damage that does not happen in the reference. This
is the first state difference from which the selected gameplay signature never
recovers during the movie.

## Root cause and fix: movie input used the NMI clock

The player/stage introduction initially appeared to begin five frames too
early in the callback-indexed trace:

- FCEUX performs the initial writes on movie frame 41. Write callbacks identify
  `$C1A8/$C1AD/$C1BC/$C1C0` (callbacks observe the following PCs
  `$C1AB/$C1B0/$C1BE/$C1C2`).
- The native trace exposes the same initialization on runner frame 36, under
  the generated call chain containing `func_A30E_b5` / `func_A302_b5` and the
  fixed-bank `$C1A8-$C1C0` code.

The frame-boundary ring resolves that apparent lead. In the first 400 NMI
callbacks, 413 physical video frames elapse. NMI is disabled on physical frames
`1-4, 12, 17, 19, 25, 30, 34-37`; all thirteen are part of FCEUX's FM2 clock,
but the old runner advanced `script_tick()` only from the NMI callback. Movie
input therefore became progressively late whenever the game disabled NMI.

The runner now advances deterministic script/movie input from a physical
video-frame boundary hook, before the optional NMI callback. The cached input
for that boundary is used by both headless and interactive playback, preserving
the existing one-frame prepare/apply ordering.

A constant `--frame-offset -4` experiment did not fix the run because only the
first four missing frames were compensated; the later nine NMI-off frames are
non-uniform. With the physical-clock fix and the canonical zero-offset FM2,
all known gameplay fields agree through the old scroll and damage windows.

Before the fix, the accumulated input delay appeared as late camera scrolling
(FCEUX frame 139 at `$D2C4/$D2D9`, native callback frame 142 in `func_D1B0`)
and later changed the collision outcome. That causal chain is eliminated by
the physical-clock playback.

The FCEUX power-on RAM pattern (`00 00 00 00 FF FF FF FF`, repeated) was also
tested through `NESRECOMP_POWER_RAM=fceux`. It did not move this divergence or
change the final TAS state, so initial WRAM contents are ruled out as the cause
of this case.

## Intermediate result after the physical-clock fix

The 400-callback regression window is exact for every known gameplay field:
reference frames 4 through 412 have no difference in player position/state,
camera, health, lives, round, character, score, or RNG.

Before the object-walker control-flow fix, the complete TAS advanced the first
persistent known-field divergence by more than 1,200 frames:

- known fields are exact through reference frame 1521;
- a camera/scroll difference on frames 1522-1551 recovers completely;
- the first unrecovered known-field difference appeared at reference frame
  1567 versus native physical frame 1568: `$0083` is `$01/$00` and `$0084` is
  `$00/$02`;
- the newly reached route later exposes one missing dispatch target, `$A9C0`,
  at native callback frame 1644.

`$0083/$0084` are movement-mode bytes, not signed X/Y velocities. They were a
late symptom rather than the first causal difference.

Write attribution initially narrowed that window further. On FCEUX frame 1567, the
reference writes `$0083=$01` after PC `$922C`, then `$0084=$00` after PC
`$CCCB` (CPU cycles 46,641,936 and 46,642,086). In the corresponding native
interval, `func_B232_b1` instead clears `$0083`; `$0084` remains `$02` in the
physical-frame snapshot.

## Object-walker root cause and current result

Full-WRAM comparison moved the first causal difference back to reference frame
1377. The actor table itself was still correct, but the native object walker
performed one stale extra lap after its `$05A0` terminator:

1. Cursor `$50/$51` advanced through `$05C0`, `$0600`, and `$0640`, outside the
   valid `$0440-$05A0` object pool.
2. Bogus handlers changed `$0669/$066A` from `$8DD5` to `$5265`.
3. Their result reached the `$0637+Y` work buffer and then collision-map bytes
   `$037A/$037B`.
4. The changed collision result eventually selected different movement modes
   at `$0083/$0084` on frame 1567.

The relevant fixed-bank loop had been split into two generated C tail calls:
`$DE8A` jumps forward to `$E1AB`, `$E1AB` calls the cursor increment at `$E587`,
and `$E1D5` jumps back to `$DE81`. Nested object handlers could leave a deferred
tail lap alive, so C resumed the walker after the ROM exit test had succeeded.

`game.toml` now merges the non-contiguous `$DE74` and `$E1AB` entries. A forward
JMP to the configured merge partner is emitted as an in-body `goto`, while a
public `$E1AB` wrapper remains available to the address dispatcher. This keeps
the whole ROM loop in one generated C invocation and removes the stale lap.

With canonical zero-offset FM2 input and the physical video-frame trace:

- alignment is exactly zero;
- every known gameplay field agrees from reference index 3 through 1624;
- at frame 1377 the entire collision-map range `$0300-$039F` agrees;
- `$0669/$066A` are `$8DD5` in both traces and `$0637-$063F` are all zero.

There was a second malformed-walk sequence beginning at native physical frame
1610. The guard caught cursor `$0640` with target `$5091` on frames 1610-1634
and `$3620` on frames 1760-1780, followed by `$04A9` on frames 1781, 1783, and
1784. This was independent of the merged `$DE74/$E1AB` body.

The runtime originally remembered only one logical JSR unwind token. Nested
`PLA; PLA; JMP` paths could mark contexts `122099` and `122103` before their
respective generated callers consumed them, so the later mark overwrote the
earlier one. The skipped exact match left a stale tail chain alive and allowed
the object walker to resume outside its pool. The unwind state is now a bounded
set of exact context tokens; `leave()` removes only its own token. A fresh
2,000-frame run has zero malformed-walk guard hits and zero dispatch misses.

Write attribution had shown the first `$05A0 -> $05C0` increment under the
public `func_E1AB` wrapper. Adding `$E18A` to the merged body did not change the
sequence, which correctly ruled out that wrapper boundary before the nested
unwind-token overwrite was identified.

## MMC3 IRQ timing and the frame-1980 camera difference

After the malformed walks were removed, the per-frame renderer still produced
one persistent difference at reference frame 1980: `$0030` was `$00` in FCEUX
and `$04` natively. The return from banked `$8093` to fixed-bank `$C4C8` was
intact. The real difference occurred earlier inside the transition:

- both runs wrote `$0037=$80` within 51 CPU cycles of each other;
- FCEUX entered IRQ `$FC22` and created `$0502=1` at cycle `58,928,405`;
- the batched native renderer did so at cycle `58,942,661`, 14,256 cycles late;
- after that late IRQ, the resumed `$8093` loop observed `$0502=1` at `$A11D`
  and called camera updater `$A22C`, producing the extra `$0030 += 4`.

With the cycle-driven per-scanline PPU, the native object write moves to cycle
`58,928,348`, within 203 cycles of the FCEUX write, and the persistent camera
difference disappears. Teyandee now selects this renderer by default;
`NESRECOMP_DOT_PPU=0` keeps the old per-frame path available for diagnostics.

The canonical 4,000-frame regression has zero dispatch misses and no
unrecovered known-field difference. Four isolated transition snapshots differ
at frames 703, 1572, 3121, and 3552 (camera bytes only), and each returns to an
exact known-field match on the immediately following frame.

Separately, generated ordinary indirect `JMP` instructions now use the flat
tail trampoline. This prevents indirect JMP chains from growing the native C
stack and keeps their behavior consistent with statically resolved JMP tails.
