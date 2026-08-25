# External RAM and replay sources

Public material is useful as a set of hypotheses and regression inputs. It is
kept separate from the canonical `memory_map.md`: an external address is not
promoted to confirmed until a local capture and a meaningful ROM reader/writer
support it.

## ROM identity

The local ROM payload (the file without its 16-byte iNES header) is:

| Hash | Value |
|---|---|
| MD5 | `D909ECF9D6DEB7A35263E6AA6B2F0CFE` |
| SHA-1 | `7D47CD172B886ECE5B98CCB8FEACBACEFA465C3A` |
| CRC32 | `45878D7F` |

This matches the Japanese 128 KiB PRG + 128 KiB CHR MMC3B dump listed by the
[NES Directory](https://nesdir.github.io/45878D7F_Japan.html). It also matches
the ROM checksum embedded in the TASVideos FM2 below. The external addresses
and controller movie therefore target the exact game payload used by the port.

## Public cheat table

The Japanese [NNNesterJ cheat wiki page](https://wikiwiki.jp/nnnes1/%E3%82%AD%E3%83%A3%E3%83%83%E5%85%9A%E5%BF%8D%E4%BC%9D%E3%81%A6%E3%82%84%E3%82%93%E3%81%A7%E3%81%88)
provides several useful independent leads:

| Address | External description | Local status |
|---|---|---|
| `$003B` | active character (`00`-`06`) | independently confirmed |
| `$003F` | health (`0A`) | independently confirmed |
| `$0040` | ninpo power | untested external seed |
| `$0041` | HELP gauge | untested external seed |
| `$0043-$0044` | lives | encoding still unknown |
| `$0045-$0048` | score, one decimal digit per byte | untested external seed |
| `$005D` | round (`01`-`0B`) | strong external seed |
| `$0087` | jump-related effect | meaning remains ambiguous |
| `$008F` | collision/invulnerability cheat | meaning remains ambiguous |
| `$0402/$0404` | player integer X/Y | independently confirmed as the high bytes of 8.8 coordinates |
| `$04A2/$04A4`, stride `$20` | enemy integer X/Y | independently confirms the object-slot stride |
| `$06F6` bit 7 | secret hard mode | untested external seed |

Machine-readable versions live in `tools/ram_seeds.json` and are displayed by
the extended capture analyser.

## RetroAchievements

The [Kyatto Ninden Teyandee set](https://retroachievements.org/game/4829)
currently describes 66 achievements and 13 leaderboards. Even without its raw
logic, the set is a compact checklist of useful game states: round completion,
character-specific finishing moves, score thresholds, secret hard mode,
helper-only challenges, boss deaths, damage-free conditions, and sprint/no-
sprint tracking.

The public `GetGameExtended` API is useful for titles and descriptions, but its
`MemAddr` property is an MD5 of each trigger definition, not the definition
itself. It therefore cannot yield RAM addresses. If a full patch or local
RACache JSON is exported from an authorised RetroAchievements client, extract
its actual memory operands without storing account credentials:

```powershell
python ./tools/ra_memory_import.py ./4829-patch.json
```

This writes `4829-patch-memory.json` and a Markdown table. The importer
understands the documented RA operand forms (`0xH` byte, bit fields,
16/24/32-bit values, delta, prior, and BCD modifiers) and restricts results to
the NES `$0000-$07FF` WRAM range. Each address is still a hypothesis:
achievement logic often contains guards, scratch fields, and indirect
conditions.

## TASVideos

[Movie 3971](https://tasvideos.org/3971M) is a published FCEUX 2.2.2 run by
J.Y, aiqiyou, and fcxiaopengyou. Its FM2 contains 31,223 NTSC controller frames
and reports 08:39.53. The movie starts from power-on and its payload MD5 is
exactly the local ROM payload MD5 above.

Convert a downloaded text FM2 to the port's deterministic input language:

```powershell
python ./tools/fm2_to_input.py ./movie.fm2 ./tas-input.txt
```

Replay it visibly:

```powershell
./build_release_ninja/TeyandeeRecomp.exe `
  "../Cat Ninden Teyandee (Japan).nes" --script ./tas-input.txt
```

Or use it as a fast headless whole-game regression (the extra frame lets the
script process its final `EXIT` after the final FM2 input):

```powershell
./build_release_ninja/TeyandeeRecomp.exe `
  "../Cat Ninden Teyandee (Japan).nes" `
  --script ./tas-input.txt --smoke 31224 --smoke-interval 600
```

This gives us broad deterministic code and stage coverage, reproducible boss
and transition states, and stable frame checkpoints. It does not prove cycle-
exact compatibility with FCEUX: the port can desynchronise if power-on state,
lag-frame input polling, PPU timing, or an emulation quirk differs. A first
desynchronisation is itself a valuable regression location.

Baseline (2026-08-24): the converted input loads all 6,996 commands,
executes its last command at the correct runner frame 31,222, completes the
31,224-frame smoke run with zero dispatch misses, but does **not** remain in
sync with FCEUX. The final RAM still reports round `$01`, Polly (`$003B = 02`),
and health `$08`, rather than a completed game. Treat the movie as a
desynchronisation test; do not use its late-game timestamps as known-good
checkpoints yet. The automated comparison and first unrecovered divergence are
now described in [tas_desync_analysis.md](tas_desync_analysis.md).

TASVideos asks that the publication page be linked instead of the raw file and
that TAS authors are credited. Do not commit or redistribute the downloaded
movie as a project-owned asset.
