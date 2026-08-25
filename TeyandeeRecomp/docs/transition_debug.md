# Object-walker corruption: post-mortem and regression debugger

The primary TAS corruption chain is fixed. This harness remains as a regression
and investigation tool: it catches the first malformed pass of the bank-2
object walker instead of waiting for bad object bytes to alter collision or PPU
state.

## Root cause

The primary defect was a fixed-bank ROM loop split across generated C tail
dispatches. `$DE8A` jumps forward to `$E1AB`; after calling `$E587` and testing
the end cursor, `$E1D5` jumps back to `$DE81`. Nested object-handler tails could
leave a stale deferred lap, which resumed after the `$05A0` exit test and walked
past the object pool.

The game config now merges the non-contiguous `$DE74/$E1AB` entries. NESRecomp
emits the forward jump to the merge partner as an in-body `goto` and retains a
public wrapper for direct `$E1AB` dispatch. The game also retains a narrow
invalid-object-dispatch guard as a diagnostic safety net.

The ROM path is:

1. `$DE74` or the `$D901/$D905` path in `$D8E6` initializes the object cursor
   at `$0420`.
2. `$E587` advances it by `$20`; `$E594` is the first block after both
   cursor bytes `$50/$51` have been written.
3. Valid cursor values are `$0440, $0460, ... $05A0`.
4. Any `$E594` value outside that aligned range (normally `$05C0` and then
   progressively higher) proves that control flow escaped the object pool.

The `game_dispatch_override()` safety net may prevent final room damage, but
this monitor stops earlier: at the first impossible cursor step. The repaired
frame-1377 chain no longer triggers either mechanism.

A later, independent TAS sequence used to reach `$0640` with `$5091`, `$3620`,
and `$04A9`. It exposed a second runtime defect: one global logical-JSR unwind
token was overwritten when nested `PLA; PLA; JMP` paths marked more than one
context before their callers returned. The runtime now retains a bounded set of
exact unwind tokens, and a fresh 2,000-frame run no longer triggers the guard.

The subsequent frame-1980 camera mismatch was not another tail failure. It was
caused by the batched renderer delivering MMC3 IRQ `$FC22` about 14,256 CPU
cycles late. Teyandee now uses the cycle-driven per-scanline PPU by default;
the corresponding IRQ is within 203 cycles of FCEUX and the camera state
recovers to exact agreement.

## Build

From PowerShell:

```powershell
cd TeyandeeRecomp
.\tools\build_transition_debug.ps1
```

The helper generates reverse-debug C under `build_transition_debug/generated`
and builds it in an isolated `build_transition_debug/native*` directory. It
does not overwrite the normal `generated/` directory.

Launch the executable printed by the helper. In a second terminal:

```powershell
.\tools\run_transition_debug.ps1 `
  -Output .\build_transition_debug\transition-report.json
```

Then reproduce the desired route. For the original transition regression, leave
the location, enter the adjacent one, and return; neither the frame-1377 chain
nor the later `$5091/$3620/$04A9` sequence may recur.

## Evidence captured

On the first violated invariant, the tool leaves the game parked and writes:

- every WRAM store in the offending walk, including exact 6502 PC and block;
- block and call traces for that walk;
- the current 2 KB RAM image plus the preceding 120 `$0440` walk-start snapshots;
- registers, recompiled call stack, mapper and PPU state;
- the recent JSR/JMP/deferred-lap dispatch ring and live tail-trampoline slots;
- nametables, palette, frame-event ring, and dispatch-miss diagnostics.

Look at the final entries of `writes.entries` for addresses `$0050/$0051` and
the matching `blocks.entries`. This identifies the instruction that performed
the first extra increment and the branch path that led to it.

To release a game left parked by a caught report:

```powershell
.\tools\run_transition_debug.ps1 -Resume
```
