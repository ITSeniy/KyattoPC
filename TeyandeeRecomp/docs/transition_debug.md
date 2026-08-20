# Location-transition corruption: post-mortem and regression debugger

The original bug is fixed. This harness remains as a regression test: it catches
the first malformed pass of the bank-2 object walker instead of waiting for bad
object bytes to reach the PPU upload queue.

## Root cause

Teyandee uses a 6502 `PLA; PLA; JMP` sequence to discard a nested JSR return and
continue at a different target. Directly generated C calls did not represent
that logical return address, so the C caller resumed after the nested function
had deliberately thrown its 6502 return away. The stale bank-2 object walker
then advanced beyond its pool and eventually exposed non-object data to the PPU
upload path.

NESRecomp now scopes generated JSR calls with logical context tokens. The
runtime marks the active token when a translated `PLA; PLA; JMP` discards it,
and generated callers propagate the unwind instead of continuing after the
obsolete JSR. The game retains a narrow invalid-object-dispatch guard as a
last-resort diagnostic safety net.

The ROM path is:

1. `$DE74` or the `$D901/$D905` path in `$D8E6` initializes the object cursor
   at `$0420`.
2. `$E587` advances it by `$20`; `$E594` is the first block after both
   cursor bytes `$50/$51` have been written.
3. Valid cursor values are `$0440, $0460, ... $05A0`.
4. Any `$E594` value outside that aligned range (normally `$05C0` and then
   progressively higher) proves that control flow escaped the object pool.

The `game_dispatch_override()` safety net may prevent final room damage, but
this monitor stops earlier: at the first impossible cursor step. A healthy run
does not trigger either mechanism.

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

Then reproduce: leave the location, enter the adjacent one, and return. The
monitor should continue running without parking the game or creating a failure
report.

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
