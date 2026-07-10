# Locales (text overrides)

Runtime string patches for **TeyandeeRecomp**. Selected with:

```text
TeyandeeRecomp.exe <rom.nes> --lang en
TeyandeeRecomp.exe <rom.nes> --lang ru
TeyandeeRecomp.exe <rom.nes> --text-overrides path/to/custom.json
```

## File format

JSON array of entries:

```json
{
  "bank": 0,
  "addr": "9ABC",
  "encoding": "TEYANDEE_MENU",
  "source": "optional original text (documentation only)",
  "replacement": "NEW TEXT"
}
```

| Field | Meaning |
|-------|---------|
| `bank` | 16 KB PRG bank index (0–7 for this ROM) |
| `addr` | NES address as hex string (no `0x`). Switchable: `$8000–$BFFF`, fixed last bank: `$C000–$FFFF` |
| `encoding` | Registered encoder name (see below) |
| `source` | Ignored by the loader; for translators |
| `replacement` | ASCII to encode. **Empty string = skip** (template placeholder) |

Hot-reload: edit the active JSON while the game runs; changes apply within ~1 s.

## Encodings (registered in `extras.c`)

| Name | Terminator | Status |
|------|------------|--------|
| `TEYANDEE_ASCII` | `0x00` | Placeholder identity map |
| `TEYANDEE_MENU` | `0x00` | Placeholder — title/menu tiles TBD |
| `TEYANDEE_DIALOGUE` | `0xFF` | Placeholder — dialogue font TBD |
| `ASCII` | `0x00` | Alias of `TEYANDEE_ASCII` |

Until tile maps are reverse-engineered, replacements only work for strings that already use ASCII-like tile indices (if any). Real JP→EN/RU work starts after string tables and CHR font encoding are documented in `docs/text_encoding.md`.

## Workflow for translators

1. Dump / annotate string tables (bank + address + original bytes).
2. Add entries with correct `encoding` once encoders are implemented.
3. Keep `source` filled for diff review.
4. Prefer shorter-or-equal replacements; longer ones overwrite adjacent ROM data.
