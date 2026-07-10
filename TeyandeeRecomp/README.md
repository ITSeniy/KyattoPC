# TeyandeeRecomp

Static recompilation of **Kyatto Ninden Teyandee** (Famicom / Japan) for native PC.  
Built with the [NESRecomp](https://github.com/mstan/nesrecomp) framework.

> **Status: Scaffold / bring-up.** Project layout, text-override locales (EN/RU), and build wiring are in place. Gameplay not yet recompiled/playable.

## ROM

| Field | Value |
|-------|-------|
| Title | Cat Ninden Teyandee (Japan) / キャッ党忍伝てやんでえ |
| Mapper | 4 (MMC3) |
| PRG | 128 KB (8 × 16 KB) |
| CHR | 128 KB (16 × 8 KB ROM) |
| CRC32 | `45878D7F` (ROM data only, iNES header excluded) |
| MD5 | `d909ecf9d6deb7a35263e6aa6b2f0cfe` |
| SHA-1 | `7d47cd172b886ece5b98ccb8feacbacefa465c3a` |

Place the ROM as `../Cat Ninden Teyandee (Japan).nes` or pass any path on the CLI.

## Quick setup (Windows)

```bat
cd TeyandeeRecomp
setup.bat
```

This junctions `../nesrecomp-master` into `./nesrecomp` when present, otherwise clones from GitHub.

### Build recompiler + generate C

```bat
:: VS 2026 (this machine) or "Visual Studio 17 2022" if that is installed
cmake -S nesrecomp\recompiler -B build_recomp -G "Visual Studio 18 2026" -A x64
cmake --build build_recomp --config Release

build_recomp\Release\NESRecomp.exe "..\Cat Ninden Teyandee (Japan).nes" --game game.toml
```

### Build the game

```bat
cmake -S . -B build -G "Visual Studio 18 2026" -A x64
cmake --build build --config Release
build\Release\TeyandeeRecomp.exe "..\Cat Ninden Teyandee (Japan).nes"
```

Headless smoke:

```bat
build\Release\TeyandeeRecomp.exe "..\Cat Ninden Teyandee (Japan).nes" --smoke 120
```

## Text overrides (EN / RU / custom)

Locales live under `locales/`:

| Flag | Effect |
|------|--------|
| `--lang en` | Load `locales/en.json` |
| `--lang ru` | Load `locales/ru.json` |
| `--text-overrides PATH` | Load an explicit JSON table |

Encodings (`TEYANDEE_MENU`, `TEYANDEE_DIALOGUE`, …) are registered in `extras.c` as **stubs** until the game’s tile maps are reverse-engineered. See `locales/README.md` and `docs/text_encoding.md`.

Empty `"replacement": ""` entries are skipped — use them as templates while RE proceeds.

## Controls

| NES | Keyboard |
|-----|----------|
| D-Pad | Arrows |
| A | Z |
| B | X |
| Start | Enter |
| Select | Right Shift |

| Key | Action |
|-----|--------|
| F5 | Turbo |
| F6 / F7 | Save / load state |
| F11 / Alt+Enter | Fullscreen |

## Layout

| Path | Purpose |
|------|---------|
| `game.toml` | Recompiler config (tables, trampolines, seeds) |
| `extras.c` | Game hooks + locale CLI |
| `override_text.*` | Runtime PRG text patching + hot-reload |
| `locales/` | EN/RU (and future) JSON tables |
| `generated/` | Output of NESRecomp (do not hand-edit) |
| `tools/extract_banks.py` | PRG bank extract for Ghidra |
| `docs/` | RE notes |

## Architecture

Not an emulator: 6502 in the ROM is translated to C at build time and compiled to native code. PPU, APU, and MMC3 are simulated by the NESRecomp runner.

## Bring-up checklist

1. `setup.bat` + first recompile → `generated/teyandee_*.c`
2. Build + `--smoke` / short run; log dispatch misses
3. `python tools/extract_banks.py <rom>` → Ghidra fixed bank @ `$C000`
4. **Ghidra:** follow `docs/ghidra_setup.md`; labels in `docs/boot_re.md`
5. Seed `game.toml` (bank switch, IRQ `$8006`, tables)
6. Iterate until title screen / gameplay
7. Fill real text encodings + locale strings

### Offline disasm (no Ghidra)

```bat
python tools\dis6502.py banks\bank07.bin FF90 -n 40
python tools\dis6502.py banks\bank07.bin C4FA
```

---

Part of the NESRecomp / R.A.I.D. ecosystem. FaxanaduRecomp is the structural template; YoshisCookieRecomp / Megaman3NESRecomp are the closest MMC3 references.
