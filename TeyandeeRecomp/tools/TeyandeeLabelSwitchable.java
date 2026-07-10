//Ghidra script: labels for switchable banks used at boot
//@category Teyandee
//@menupath Tools.Teyandee.Label switchable bank entries

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;

import java.util.LinkedHashMap;
import java.util.Map;

/**
 * Labels for bank01 (8k#2+#3) or bank03 (8k#6+#7) loaded at $8000.
 *
 * Boot mapping:
 *   bank_call_C46F: R6=3 → CPU $8000 = high half of bank01 → Ghidra $A000
 *   bank_call_C4B4: R6=7,R7=8 → CPU $8000 = high half of bank03 → Ghidra $A000
 *   IRQ JMP $8006 when R6=7 → Ghidra $A006
 */
public class TeyandeeLabelSwitchable extends GhidraScript {

	// Offsets within the $8000 window as the CPU sees them when R6 is odd
	// (high half). If this program is a full 16KB bank at $8000, add +0x2000.
	private static final Map<Long, String> CPU8000_SYMBOLS = new LinkedHashMap<>();
	static {
		// Shared vector-style entries at start of mapped 8k
		CPU8000_SYMBOLS.put(0x8000L, "sw_entry_8000");
		CPU8000_SYMBOLS.put(0x8003L, "sw_entry_8003");
		CPU8000_SYMBOLS.put(0x8006L, "sw_irq_8006");
	}

	// bank01 high-half (8k#3) handlers — CPU addresses when R6=3
	private static final Map<Long, String> BANK3_8K_HANDLERS = new LinkedHashMap<>();
	static {
		BANK3_8K_HANDLERS.put(0x8000L, "mode_dispatch");       // STX $08 / ASL / table JMP
		BANK3_8K_HANDLERS.put(0x8011L, "mode_ptr_table");
		BANK3_8K_HANDLERS.put(0x801BL, "mode_handler_4");      // A=4
		BANK3_8K_HANDLERS.put(0x8127L, "mode_handler_3");      // A=3
		BANK3_8K_HANDLERS.put(0x8264L, "mode_handler_0");      // A=0 title-ish
		BANK3_8K_HANDLERS.put(0x8362L, "mode_handler_2");      // A=2
		BANK3_8K_HANDLERS.put(0x8523L, "mode_handler_1");      // A=1
	}

	// bank03 high-half (8k#7)
	private static final Map<Long, String> BANK7_8K_HANDLERS = new LinkedHashMap<>();
	static {
		BANK7_8K_HANDLERS.put(0x8000L, "scene_entry_jmp");     // JMP $8093
		BANK7_8K_HANDLERS.put(0x8003L, "scene_alt_jmp");       // JMP $8F7D
		BANK7_8K_HANDLERS.put(0x8006L, "scene_irq");
		BANK7_8K_HANDLERS.put(0x8093L, "scene_init");
		BANK7_8K_HANDLERS.put(0x8F7DL, "scene_alt_entry");
	}

	@Override
	public void run() throws Exception {
		if (currentProgram == null) {
			printerr("No program");
			return;
		}
		String name = currentProgram.getName().toLowerCase();
		boolean full16 = currentProgram.getMemory().getSize() >= 0x4000;
		// If 16KB bank image at $8000, high 8k (odd R6) lives at $A000
		long bias = full16 ? 0x2000L : 0L;
		println("[Teyandee] program=" + name + " size=" + currentProgram.getMemory().getSize()
			+ " full16=" + full16 + " bias=$" + Long.toHexString(bias));

		Map<Long, String> table;
		if (name.contains("bank01") || name.contains("prg8k_03") || name.contains("8k_03")) {
			table = BANK3_8K_HANDLERS;
			println("[Teyandee] using 8k#3 / bank01-high labels");
		}
		else if (name.contains("bank03") || name.contains("prg8k_07") || name.contains("8k_07")) {
			table = BANK7_8K_HANDLERS;
			println("[Teyandee] using 8k#7 / bank03-high labels");
		}
		else {
			table = new LinkedHashMap<>(CPU8000_SYMBOLS);
			println("[Teyandee] generic $8000 entries only — rename program to bank01/bank03 for full labels");
		}

		for (Map.Entry<Long, String> e : table.entrySet()) {
			long cpu = e.getKey();
			// Map CPU $8xxx (when R6=odd half) → image address
			long img = cpu + bias;
			// If 8k-only image loaded at $8000, cpu already correct (bias=0)
			// If 16k image, CPU $8000 with R6=odd → $A000 = $8000+0x2000
			labelAndFunc(img, e.getValue());
		}
		println("[Teyandee] switchable labels done");
	}

	private void labelAndFunc(long addrVal, String want) throws Exception {
		Address a = toAddr(addrVal);
		if (!currentProgram.getMemory().contains(a)) {
			println("[!] out of range " + want + " @ " + a);
			return;
		}
		Symbol[] existing = currentProgram.getSymbolTable().getSymbols(a);
		boolean has = false;
		if (existing != null) {
			for (Symbol s : existing) {
				if (want.equals(s.getName())) {
					has = true;
					break;
				}
			}
			if (!has && existing.length > 0) {
				String old = existing[0].getName();
				if (old.startsWith("FUN_") || old.startsWith("LAB_") || old.startsWith("DAT_")) {
					existing[0].setName(want, SourceType.USER_DEFINED);
					println("[*] rename " + old + " -> " + want + " @ " + a);
					has = true;
				}
			}
		}
		if (!has) {
			createLabel(a, want, true, SourceType.USER_DEFINED);
			println("[+] label " + want + " @ " + a);
		}
		Function fn = getFunctionAt(a);
		if (fn == null) {
			disassemble(a);
			fn = createFunction(a, want);
			if (fn != null) {
				println("[+] function " + fn.getName());
			}
		}
		else if (!want.equals(fn.getName())) {
			String old = fn.getName();
			fn.setName(want, SourceType.USER_DEFINED);
			println("[*] rename function " + old + " -> " + want);
		}
	}
}
