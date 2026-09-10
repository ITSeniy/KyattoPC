# KyattoPC

Native PC static recompilation of **Kyatto Ninden Teyandee**
(`キャッ党忍伝てやんでえ`, Famicom, 1991), built on a locally patched version
of [NESRecomp](https://github.com/mstan/nesrecomp).

The current Windows build is playable. Room transitions can be crossed and
re-entered without corrupting the level, and the MMC3 playfield/HUD boundary
renders without the previously broken horizontal pixel row.

> This repository does not contain the game ROM. You must provide your own
> legally obtained copy of the supported Japanese release.

## Repository layout

| Path | Purpose |
|------|---------|
| [`TeyandeeRecomp/`](TeyandeeRecomp/) | Game configuration, generated C, game hooks, documentation, and build files |
| [`nesrecomp-master/`](nesrecomp-master/) | NESRecomp fork with the runtime and recompiler fixes required by Teyandee |
| [`FaxanaduRecomp-master/`](FaxanaduRecomp-master/) | Reference project retained for runner/game integration work |

Start with the [TeyandeeRecomp README](TeyandeeRecomp/README.md) for the full
build, launch, controls, and debugging instructions.

## Quick start on Windows

Requirements:

- CMake 3.20 or newer;
- Visual Studio 2022 or newer with **Desktop development with C++**;
- Git;
- the supported ROM, named `Cat Ninden Teyandee (Japan).nes` in the repository
  root, or supplied by an explicit path when launching.

From a Developer PowerShell:

```powershell
cd TeyandeeRecomp
./setup.bat
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build
./build/TeyandeeRecomp.exe "../Cat Ninden Teyandee (Japan).nes"
```

The generated C sources are committed, so a normal game build does not need to
run the recompiler. See the project README if you need to regenerate them.

## Notable fixes in this tree

- logical 6502 JSR contexts preserve `PLA; PLA; JMP` non-local-return semantics
  in generated C;
- the dynamic JMP-tail dispatcher no longer resumes an obsolete object-walker
  call after that non-local return;
- a game-side object-pool guard stops malformed RAM dispatches before they can
  reach the PPU upload queue;
- Teyandee's MMC3 status-bar IRQ defers visible CHR/scroll changes by one
  scanline, matching the handler's real CPU-cycle latency;
- the TCP/reverse-debug harness can capture object-walker, dispatch, mapper,
  PPU, and frame history state for transition regressions.

## Verification

The source tree can be checked with:

```powershell
cmake --build TeyandeeRecomp/build --config Release
TeyandeeRecomp/build/TeyandeeRecomp.exe `
  "Cat Ninden Teyandee (Japan).nes" --smoke 120
```

Recompiler regression tests use Node.js and pnpm:

```powershell
cmake -S nesrecomp-master/recompiler -B nesrecomp-master/build/recompiler `
  -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build nesrecomp-master/build/recompiler
cd nesrecomp-master/tests
pnpm install --frozen-lockfile
pnpm test
```

The command above uses the Ninja layout from Quick start; a Visual Studio
generator normally places the executable under `build/Release/`. Interactive
playtesting is still required for room-transition and split-screen rendering
changes; the reverse-debug workflow is documented in
[`TeyandeeRecomp/docs/transition_debug.md`](TeyandeeRecomp/docs/transition_debug.md).

## Publishing notes

- ROMs, saves, build trees, logs, crash dumps, local debugger captures, Ghidra
  databases, and extracted PRG/CHR banks are ignored by Git.
- `TeyandeeRecomp/generated/` is intentionally tracked and should be updated
  whenever `game.toml` or the recompiler changes.
- Third-party components retain their own licenses. NESRecomp's license is at
  [`nesrecomp-master/LICENSE`](nesrecomp-master/LICENSE). A repository-wide
  license for the new project-specific code has not been selected yet; choose
  one before accepting outside contributions. No license is implied for the
  original game or its assets.

## Русский

Нативная статическая рекомпиляция Kyatto Ninden Teyandee для ПК на базе доработанного NESRecomp.

MIT относится только к авторскому коду; лицензии сторонних компонентов сохраняются.
