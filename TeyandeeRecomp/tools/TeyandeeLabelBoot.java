//Ghidra headless / Script Manager script (Java)
//@category Teyandee
//@menupath Tools.Teyandee.Label boot symbols (Java)

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;

import java.util.LinkedHashMap;
import java.util.Map;

/**
 * Label known boot/NMI/IRQ/MMC3 symbols for Kyatto Ninden Teyandee
 * fixed bank (base $C000).
 */
public class TeyandeeLabelBoot extends GhidraScript {

	private static final Map<Long, String> SYMBOLS = new LinkedHashMap<>();
	static {
		SYMBOLS.put(0xFF90L, "RESET");
		SYMBOLS.put(0xFCCDL, "NMI");
		SYMBOLS.put(0xFC22L, "IRQ");
		SYMBOLS.put(0xC0B1L, "boot_continue");
		SYMBOLS.put(0xC46FL, "bank_call_C46F");
		SYMBOLS.put(0xC4B4L, "bank_call_C4B4");
		SYMBOLS.put(0xC4E0L, "bank_call_C4E0");
		SYMBOLS.put(0xC4FAL, "mmc3_map_r6_r7");
		SYMBOLS.put(0xC513L, "mmc3_map_r6");
		SYMBOLS.put(0xFC00L, "wait_vblank_drain");
		SYMBOLS.put(0xFDF9L, "hide_sprites");
		SYMBOLS.put(0xFE04L, "clear_nametables");
		SYMBOLS.put(0xFE29L, "clear_nametable_page");
		SYMBOLS.put(0xFE54L, "queue_palette");
		SYMBOLS.put(0xFE71L, "ppu_disable");
		SYMBOLS.put(0xFE81L, "ppu_restore");
		SYMBOLS.put(0xFFFAL, "vec_NMI");
		SYMBOLS.put(0xFFFCL, "vec_RESET");
		SYMBOLS.put(0xFFFEL, "vec_IRQ");
	}

	private static final long[] CREATE_FUNCS = {
		0xFF90L, 0xFCCDL, 0xFC22L, 0xC0B1L, 0xC46FL, 0xC4B4L, 0xC4E0L,
		0xC4FAL, 0xC513L, 0xFC00L, 0xFDF9L, 0xFE04L, 0xFE54L, 0xFE71L, 0xFE81L,
	};

	@Override
	public void run() throws Exception {
		if (currentProgram == null) {
			printerr("No program open");
			return;
		}

		Address min = currentProgram.getMinAddress();
		Address max = currentProgram.getMaxAddress();
		println("[Teyandee] program range " + min + " .. " + max);

		for (Map.Entry<Long, String> e : SYMBOLS.entrySet()) {
			Address a = toAddr(e.getKey());
			String want = e.getValue();
			Symbol[] existing = currentProgram.getSymbolTable().getSymbols(a);
			boolean hasWanted = false;
			if (existing != null) {
				for (Symbol s : existing) {
					if (want.equals(s.getName())) {
						hasWanted = true;
						break;
					}
				}
			}
			if (!hasWanted) {
				// Prefer renaming auto-analysis symbols (FUN_*/LAB_*) over stacking labels
				if (existing != null && existing.length > 0) {
					Symbol primary = existing[0];
					String old = primary.getName();
					if (old.startsWith("FUN_") || old.startsWith("LAB_") ||
						old.equals("NMI") || old.equals("IRQ") || old.equals("RES") ||
						old.equals("RESET")) {
						primary.setName(want, SourceType.USER_DEFINED);
						println("[*] rename " + old + " -> " + want + " @ " + a);
						continue;
					}
				}
				createLabel(a, want, true, SourceType.USER_DEFINED);
				println("[+] label " + want + " @ " + a);
			}
			else {
				println("[=] already " + want + " @ " + a);
			}
		}

		for (long value : CREATE_FUNCS) {
			Address a = toAddr(value);
			String want = SYMBOLS.getOrDefault(value, String.format("FUN_%04X", value));
			Function existing = getFunctionAt(a);
			if (existing == null) {
				disassemble(a);
				Function fn = createFunction(a, want);
				if (fn != null) {
					println("[+] function " + fn.getName());
				}
				else {
					println("[?] no function at " + a);
				}
			}
			else if (!want.equals(existing.getName())) {
				String old = existing.getName();
				existing.setName(want, SourceType.USER_DEFINED);
				println("[*] rename function " + old + " -> " + want);
			}
			else {
				println("[=] function " + want + " @ " + a);
			}
		}

		int nmi = readU16(0xFFFA);
		int rst = readU16(0xFFFC);
		int irq = readU16(0xFFFE);
		println(String.format("[Teyandee] vectors: NMI=$%04X RESET=$%04X IRQ=$%04X", nmi, rst, irq));
		if (nmi == 0xFCCD && rst == 0xFF90 && irq == 0xFC22) {
			println("[Teyandee] vector check OK");
		}
		else {
			println("[Teyandee] WARNING: unexpected vectors — check base address (want $C000)");
		}
		println("[Teyandee] label_boot done");
	}

	private int readU16(long addrVal) throws Exception {
		Memory mem = currentProgram.getMemory();
		Address a = toAddr(addrVal);
		int lo = mem.getByte(a) & 0xFF;
		int hi = mem.getByte(a.add(1)) & 0xFF;
		return lo | (hi << 8);
	}
}
