# RAM/ROM map capture workflow

`tools/run_ram_capture.ps1` launches the game with three synchronized outputs:

1. the runner's normal deterministic controller-input recording;
2. exact pause markers entered by the playtester;
3. selected full 2 KB WRAM snapshots from the TCP frame-history ring.

The result is intended for identifying game mode, stage, room, player state,
camera coordinates, object fields, timers, inventory, and other RAM variables.
Once those fields are known, ROM writers/readers can be attributed with the
existing reverse-debug tools and Ghidra project.

## Start a session

Build the normal game executable after pulling the capture-tool changes, then
run from the repository root or `TeyandeeRecomp` directory:

```powershell
./TeyandeeRecomp/tools/run_ram_capture.ps1
```

The script auto-detects these executables, in order:

1. `build_release_ninja/TeyandeeRecomp.exe`;
2. `build/Release/TeyandeeRecomp.exe`;
3. `build/TeyandeeRecomp.exe`.

Pass explicit paths when necessary:

```powershell
./TeyandeeRecomp/tools/run_ram_capture.ps1 `
  -Rom "C:/roms/Cat Ninden Teyandee (Japan).nes" `
  -Executable "C:/build/TeyandeeRecomp.exe"
```

The game opens visibly. The terminal waits for the local TCP server, pauses the
first recorded frame, creates the automatic `SESSION_START` marker, and then
starts the game. No Alt+Tab or terminal confirmation is needed.

## Entering markers

After one isolated action:

1. release all game buttons;
2. wait briefly for the state to settle;
3. press **F9** in the game window;
4. type a short marker such as `TAKE_DAMAGE` and press **Enter**.

F9 freezes the game immediately and opens an in-game text prompt. Enter submits
the marker; the capture client records the exact historical frame, preserves
the preceding 30 frames at full resolution, saves a clean screenshot, and then
resumes play automatically. Escape closes the prompt without creating a marker.

In-game prompt commands:

| Command | Effect |
|---|---|
| any label | create a marker with that label |
| `DONE` | add `SESSION_END`, export the session, and close the game |

Labels accept Latin letters, digits, `_`, and `-`; spaces become underscores.
The prompt normalizes letters to uppercase and keeps at most 48 characters.

Use short sessions under ten minutes. The runner retains 36,000 frames; marker
windows are preserved immediately, but an old unmarked part of a longer session
will eventually leave the ring.

## Recommended first sessions

Do not try to cover everything in one run. Keep actions separate so one RAM
change has a clear interpretation.

### Boot and mode flow

```text
TITLE_IDLE
NEW_GAME_SELECTED
CHARACTER_SELECT
CHARACTER_CONFIRMED
INTRO_START
STAGE_START
```

### Player controls

Start from a quiet part of the first stage:

```text
IDLE
MOVE_RIGHT
IDLE_AFTER_RIGHT
MOVE_LEFT
JUMP
ATTACK
CEILING_ATTACH
CEILING_DETACH
```

### Player state and transitions

```text
BEFORE_DAMAGE
TAKE_DAMAGE
PICKUP
ENTER_ROOM
RETURN_ROOM
PLAYER_DEATH
RESPAWN
```

Run death, boss, level-complete, and game-over experiments as separate sessions
when possible.

Avoid turbo and save/load state during diagnostic captures. Both are supported
by the input recorder, but they make early RAM-map comparisons harder to
interpret.

## Output

Sessions are written to `TeyandeeRecomp/captures/ram-YYYYMMDD-HHMMSS/`. This
directory is ignored by Git.

| File | Contents |
|---|---|
| `input.txt` | deterministic controller input recording |
| `session.json` | session settings and exact marker list |
| `frames.jsonl.gz` | compressed sampled frame metadata + full WRAM hex |
| `summary.json` | machine-readable transitions and ranked candidates |
| `ram_candidates.csv` | spreadsheet-ready address statistics and blank hypothesis columns |
| `report.md` | stable RAM changes grouped by marker transition |
| `analysis.json` / `analysis.md` | known-field values, object lifecycles, change points, and generated-code xrefs |
| `writes.jsonl.gz` | optional exact WRAM writer PC/function trace between markers |
| `screenshots/*.png` | visual state at every marker |

`ram_candidates.csv` ranks addresses that changed between markers while staying
constant during the short windows immediately before both markers. This filters
many animation counters and free-running timers, but it is evidence rather than
an automatic final label: repeat an experiment and trace writers before naming
an address in the canonical [`memory_map.md`](memory_map.md).

The extended analyser can also be rerun on any older session. It reads the
data-driven seeds in `tools/ram_seeds.json`, suppresses boot-time object-table
noise, finds object activation/type/state/direction transitions, and attaches
literal RAM readers/writers found in the generated bank C files:

```powershell
python ./TeyandeeRecomp/tools/ram_analyzer.py `
  ./TeyandeeRecomp/captures/ram-20260821-223845
```

Use `--no-rom-xrefs` for a quick snapshot-only pass. Static xrefs are leads,
not proof: specialised generated functions duplicate instructions and decoded
unreachable paths may still contain apparent references.

## Useful options

```powershell
# Sample the retained session every 30 frames instead of every 10.
./TeyandeeRecomp/tools/run_ram_capture.ps1 -SampleStep 30

# Do not save per-marker screenshots.
./TeyandeeRecomp/tools/run_ram_capture.ps1 -NoScreenshots

# Export without asking the debug server to close the game.
./TeyandeeRecomp/tools/run_ram_capture.ps1 -LeaveRunning

# Use the old terminal/Alt+Tab marker workflow if needed.
./TeyandeeRecomp/tools/run_ram_capture.ps1 -TerminalMarkers

# With a reverse-debug build, record the exact instruction and function that
# wrote each WRAM byte between consecutive markers.
./TeyandeeRecomp/tools/run_ram_capture.ps1 `
  -Executable ./TeyandeeRecomp/build_transition_debug/TeyandeeRecomp.exe `
  -TraceWrites
```

The Python analyser has a dependency-free self-test:

```powershell
python ./TeyandeeRecomp/tools/ram_capture.py --self-test
python ./TeyandeeRecomp/tools/ram_analyzer.py --self-test
python ./TeyandeeRecomp/tools/fm2_to_input.py --self-test
python ./TeyandeeRecomp/tools/ra_memory_import.py --self-test
```

External cheat, RetroAchievements, and TAS research is recorded in
[`external_research_sources.md`](external_research_sources.md).
