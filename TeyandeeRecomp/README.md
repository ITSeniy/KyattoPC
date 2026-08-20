# TeyandeeRecomp

Static recompilation of **Kyatto Ninden Teyandee**
(`キャッ党忍伝てやんでえ`, Famicom / Japan) for native PC, built with the
included [NESRecomp](https://github.com/mstan/nesrecomp) fork.

> **Status: playable on Windows.** The title screen, character selection,
> gameplay, room transitions, return transitions, audio, and MMC3 HUD split
> are working. English/Russian text overrides remain an experimental framework
> while the game's text encodings are reverse-engineered.

The ROM is not distributed with this project.

## Supported ROM

| Field | Value |
|-------|-------|
| Title | Cat Ninden Teyandee (Japan) / キャッ党忍伝てやんでえ |
| Mapper | 4 (MMC3) |
| PRG | 128 KB (8 × 16 KB) |
| CHR | 128 KB (16 × 8 KB ROM) |
| CRC32 | `45878D7F` (ROM data only, iNES header excluded) |
| MD5 | `d909ecf9d6deb7a35263e6aa6b2f0cfe` |
| SHA-1 | `7d47cd172b886ece5b98ccb8feacbacefa465c3a` |

Place the ROM at `../Cat Ninden Teyandee (Japan).nes`, or pass its path as the
first argument to the executable.

## Requirements

The actively tested target is 64-bit Windows:

- CMake 3.20+;
- Visual Studio 2022+ with **Desktop development with C++**;
- Git;
- Ninja is recommended, and is bundled with current Visual Studio installs;
- Python 3 is needed only for the reverse-debug monitor and RE tools.

`setup.sh` is provided for Linux/macOS dependency setup, but those native
targets are not part of the current playtest matrix.

## Build and run

From a Visual Studio Developer PowerShell:

```powershell
cd TeyandeeRecomp
./setup.bat

cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build

./build/TeyandeeRecomp.exe "../Cat Ninden Teyandee (Japan).nes"
```

For a Visual Studio multi-configuration generator, omit `-G Ninja` and build
with `--config Release`; the executable will normally be under
`build/Release/`.

The post-build step places SDL2, launcher resources, and locale files beside
the executable.

### Headless smoke test

```powershell
./build/TeyandeeRecomp.exe `
  "../Cat Ninden Teyandee (Japan).nes" `
  --smoke 120 --smoke-interval 30
```

Smoke mode runs without SDL presentation and prints deterministic framebuffer
hash samples. It verifies startup and basic execution, not interactive room
transitions.

## Regenerate the translated C

Normal builds use the committed files in `generated/`; regeneration is only
needed after changing `game.toml` or the recompiler.

```powershell
cmake -S nesrecomp/recompiler -B build_recomp -G Ninja `
  -DCMAKE_BUILD_TYPE=Release
cmake --build build_recomp

./build_recomp/NESRecomp.exe `
  "../Cat Ninden Teyandee (Japan).nes" `
  --game game.toml
```

Run `NESRecomp.exe` from the `TeyandeeRecomp` directory: its output paths are
relative to the working directory. Generated files are build products, but
they are intentionally versioned and must not be edited by hand.

## Controls

| NES control | Keyboard |
|-------------|----------|
| D-Pad | Arrow keys |
| A | Z |
| B | X |
| Start | Enter |
| Select | Right Shift |

| Key | Action |
|-----|--------|
| F5 | Turbo |
| F6 / F7 | Save / load state |
| F11 / Alt+Enter | Fullscreen |

## What was fixed

The two most visible corruption bugs came from approximating timing and 6502
call semantics at a higher level than the original machine:

1. Teyandee uses `PLA; PLA; JMP` as a non-local return from a nested JSR. The
   generated C used direct function calls and resumed the discarded caller,
   allowing its object cursor to walk beyond `$0420-$0580` and eventually feed
   object bytes into the PPU upload queue. The recompiler/runtime now track
   logical JSR contexts and propagate that unwind through generated callers.
2. The MMC3 status-bar IRQ is raised near the end of scanline 174, but its
   handler does not reach the CHR/scroll writes soon enough to affect scanline
   175 on real hardware. The scanline renderer now supports a game-selectable
   one-line delivery delay; Teyandee enables it so the HUD begins cleanly on
   scanline 176.

`game_dispatch_override()` retains a narrow object-pool guard as defense in
depth. It does not replace the logical-JSR fix.

## Transition regression debugger

The original room-corruption investigation is preserved as an isolated
reverse-debug build and invariant monitor:

```powershell
./tools/build_transition_debug.ps1
./tools/run_transition_debug.ps1 `
  -Output ./build_transition_debug/transition-report.json
```

Launch the executable printed by the build helper, attach the monitor in a
second terminal, then leave a location and return. A fixed run should remain
uninterrupted; any impossible object cursor parks the game and writes a full
report. See [`docs/transition_debug.md`](docs/transition_debug.md).

## Text overrides

Locales live under `locales/`:

| Flag | Effect |
|------|--------|
| `--lang en` | Load `locales/en.json` |
| `--lang ru` | Load `locales/ru.json` |
| `--text-overrides PATH` | Load an explicit JSON table |

Encodings such as `TEYANDEE_MENU` and `TEYANDEE_DIALOGUE` are currently stubs.
Empty `"replacement": ""` entries are skipped and may be used as translation
templates. See [`locales/README.md`](locales/README.md) and
[`docs/text_encoding.md`](docs/text_encoding.md).

## Project layout

| Path | Purpose |
|------|---------|
| `game.toml` | Recompiler configuration, dynamic tables, and entry points |
| `extras.c` | Game hooks, runtime policies, debug server, and CLI extensions |
| `override_text.*` | Runtime text patching and hot reload |
| `generated/` | Committed NESRecomp output; do not hand-edit |
| `locales/` | Experimental EN/RU override tables |
| `tools/` | Recompiler, reverse-debug, disassembly, and Ghidra helpers |
| `docs/` | Reverse-engineering and diagnostic notes |

## Architecture

This is not a traditional CPU emulator. NESRecomp translates reachable 6502
code from the ROM into C, which is then compiled to native code. The runner
models the PPU, APU, controllers, save states, and the MMC3 mapper. The game ROM
is still required at runtime for original data and validation.
