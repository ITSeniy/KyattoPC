# Ghidra setup — TeyandeeRecomp

## Status

| Item | Value |
|------|-------|
| Ghidra | Set `GHIDRA_HOME` to your extracted Ghidra directory |
| Project | `TeyandeeRecomp/ghidra/teyandee_nesrecomp.gpr` |
| bank07 | imported @ `$C000`, auto-analyzed, labeled |
| bank01 | imported @ `$8000` — boot mode dispatch in **high** half (`$A000+`) |
| bank03 | imported @ `$8000` — scene/IRQ in **high** half (`$A000+`) |
| Vectors | NMI=`$FCCD` RESET=`$FF90` IRQ=`$FC22` ✅ |
| Bank-call RE | `docs/bank_calls.md` |

Re-run import/labels anytime:

```bat
cd TeyandeeRecomp
set GHIDRA_HOME=C:\Tools\ghidra_12.0_PUBLIC
tools\ghidra_import_bank07.bat
```

## Open the project (GUI)

1. `%GHIDRA_HOME%\ghidraRun.bat`
2. **File → Open Project** → `TeyandeeRecomp\ghidra\teyandee_nesrecomp.gpr`
3. Double-click **bank07.bin**
4. **G** (Go To): `FF90`, `C4FA`, `FC22`, `C0B1`

### Labeled symbols (bank07)

| Name | Address |
|------|---------|
| `RESET` | `$FF90` |
| `NMI` | `$FCCD` |
| `IRQ` | `$FC22` |
| `boot_continue` | `$C0B1` |
| `bank_call_C46F` / `C4B4` / `C4E0` | bank trampolines |
| `mmc3_map_r6_r7` | `$C4FA` |
| `mmc3_map_r6` | `$C513` |
| `wait_vblank_drain` | `$FC00` |
| `hide_sprites` / `clear_nametables` / `queue_palette` | `$FDF9` / `$FE04` / `$FE54` |

Label script (Java, works in Ghidra 12 headless without PyGhidra):

`tools/TeyandeeLabelBoot.java`

## Install Ghidra (other machines)

1. Download a recent release: https://github.com/NationalSecurityAgency/ghidra/releases  
   (needs JDK 17+).
2. Unzip and run `ghidraRun.bat`

Optional AI bridge (for this agent to query listings):

| Option | Notes |
|--------|--------|
| [LaurieWired/GhidraMCP](https://github.com/LaurieWired/GhidraMCP) | Classic plugin + bridge; port often `8080` |
| [bethington/ghidra-mcp](https://github.com/bethington/ghidra-mcp) | Larger tool surface |
| Project example | `nesrecomp/.mcp.json.example` uses SSE `http://localhost:9015/sse` per fixed bank |

After the MCP bridge is up, add it to your MCP client configuration (or the
project `.mcp.json`) and reconnect.

## Create project

1. **File → New Project → Non-Shared Project**  
   Path: `TeyandeeRecomp/ghidra/`  
   Name: `teyandee_nesrecomp`
2. Import banks as **Raw Binary** (not iNES).

### Import table

| File | Base address | Language | Name |
|------|--------------|----------|------|
| `banks/bank07.bin` | **`0xC000`** | 6502:LE:16:default | `bank07` (fixed) |
| `banks/bank00.bin` … `bank06.bin` | **`0x8000`** | 6502:LE:16:default | `bank00` … `bank06` |

**Start with bank07 only.** Switchable banks come after boot/NMI/IRQ are labeled.

### Per-import dialog

- Format: **Raw Binary**
- Language: **6502 / little / 16 / default** (processor: 6502)
- Base Address: as above
- Block Name: `rom`

### After import — bank07

1. Open in CodeBrowser.
2. **Analysis → Auto Analyze** (defaults OK; ensure “Disassemble Entry Points” / reference analysis on).
3. Go to vectors and create functions:

| Label | Address | Notes |
|-------|---------|--------|
| `vec_NMI` | `$FCCD` | |
| `vec_RESET` | `$FF90` | |
| `vec_IRQ` | `$FC22` | may `JMP $8006` |
| `RESET` | `$FF90` | already vector target |
| `boot_continue` | `$C0B1` | after RAM clear |
| `nmi_handler` | `$FCCD` | |
| `irq_handler` | `$FC22` | |
| `mmc3_map_r6_r7` | `$C4FA` | X = 8KB bank; maps R6=X, R7=X+1 |
| `mmc3_map_r6` | `$C513` | X = 8KB bank; maps R6 only |
| `wait_vblank_drain` | `$FC00` | sets `$1F` from DMA queue, waits `$1E` |
| `hide_sprites` | `$FDF9` | |
| `clear_nametables` | `$FE04` | |
| `queue_palette` | `$FE54` | |
| `bank_call_menu` | `$C46F` | maps bank then `JSR $8000` |
| `bank_call_scene` | `$C4B4` | maps bank then `JSR $8000` |

4. Verify vectors (Memory map / Go To `$FFFA`):

```
FFFA–FFFB: CD FC   → NMI   $FCCD
FFFC–FFFD: 90 FF   → RESET $FF90
FFFE–FFFF: 22 FC   → IRQ   $FC22
```

If these are wrong, the base address is wrong — re-import.

## Memory map (mental model)

MMC3 (mapper 4), 8 × 16 KB PRG:

| CPU window | Contents |
|------------|----------|
| `$8000–$9FFF` | R6 (8 KB) |
| `$A000–$BFFF` | R7 (8 KB) |
| `$C000–$DFFF` | often second-to-last (mode 0) |
| `$E000–$FFFF` | last 8 KB (always fixed) |

Recompiler / Ghidra **16 KB bank model**:

| Bank file | Ghidra base | ROM role |
|-----------|-------------|----------|
| 0–6 | `$8000` | switchable |
| 7 | `$C000` | fixed last 16 KB (contains vectors) |

`$C4FA` maps a **consecutive 8KB pair** (R6, R7) — i.e. one recompiler 16 KB bank when X is even.

## Headless helper (optional)

If `analyzeHeadless` is on PATH:

```bat
analyzeHeadless ghidra teyandee_nesrecomp -import banks\bank07.bin ^
  -loader BinaryLoader -loader-baseAddr 0xC000 ^
  -processor "6502:LE:16:default" ^
  -postScript tools\ghidra_label_boot.py
```

(`tools/ghidra_label_boot.py` is a Jython post-script in this repo.)

## Continuing the analysis

After bank07 is open and analyzed, start an MCP bridge or export listings for
the address ranges under investigation. Record any confirmed entry points or
data regions in `game.toml` and the corresponding document under `docs/`.
