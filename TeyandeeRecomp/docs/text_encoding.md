# Text encoding notes — Kyatto Ninden Teyandee

Status: **stub**. Fill during reverse engineering.

## Goals

- Japanese original (baserom)
- English (`locales/en.json`)
- Russian (`locales/ru.json`)
- Other languages via the same JSON format

## Known facts (ROM)

| Item | Value |
|------|-------|
| Game | Kyatto Ninden Teyandee (Japan) |
| Mapper | MMC3 (4) |
| PRG | 8 × 16 KB |
| CHR | 16 × 8 KB ROM |
| CRC32 (headerless) | `45878D7F` |

## Open RE tasks

1. Locate title / menu string tables (bank + address ranges).
2. Locate dialogue / cutscene string tables.
3. Map tile indices → glyphs (hiragana/katakana/kanji/punctuation/digits).
4. Document string terminators and control codes (newline, wait, name insert…).
5. Implement real encoders in `extras.c` (`teyandee_*_encode`) and keep JSON as data-only.

## Control codes (TBD)

| Byte | Meaning |
|------|---------|
| ? | end of string |
| ? | line break |
| ? | … |

## References

- Runtime plugin: `override_text.c` / `override_text.h`
- Locale files: `locales/`
- Faxanadu example (different game, same machinery): FaxanaduRecomp `docs/text_handling.md`
