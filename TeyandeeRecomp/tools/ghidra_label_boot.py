#@category Teyandee
#@menupath Tools.Teyandee.Label boot symbols
#@runtime PyGhidra
"""
Label known boot/NMI/IRQ/MMC3 symbols for Kyatto Ninden Teyandee
fixed bank (base $C000). Run with bank07 open (base address 0xC000).

Ghidra 12+: requires PyGhidra runtime (Jython extension optional/removed).
"""

from ghidra.program.model.symbol import SourceType

SYMBOLS = {
    0xFF90: "RESET",
    0xFCCD: "NMI",
    0xFC22: "IRQ",
    0xC0B1: "boot_continue",
    0xC46F: "bank_call_C46F",
    0xC4B4: "bank_call_C4B4",
    0xC4E0: "bank_call_C4E0",
    0xC4FA: "mmc3_map_r6_r7",
    0xC513: "mmc3_map_r6",
    0xFC00: "wait_vblank_drain",
    0xFDF9: "hide_sprites",
    0xFE04: "clear_nametables",
    0xFE29: "clear_nametable_page",
    0xFE54: "queue_palette",
    0xFE71: "ppu_disable",
    0xFE81: "ppu_restore",
    0xFFFA: "vec_NMI",
    0xFFFC: "vec_RESET",
    0xFFFE: "vec_IRQ",
}

CREATE_FUNCS = [
    0xFF90, 0xFCCD, 0xFC22, 0xC0B1, 0xC46F, 0xC4B4, 0xC4E0,
    0xC4FA, 0xC513, 0xFC00, 0xFDF9, 0xFE04, 0xFE54, 0xFE71, 0xFE81,
]


def run():
    program = currentProgram
    space = program.getAddressFactory().getDefaultAddressSpace()
    symtab = program.getSymbolTable()
    fm = program.getFunctionManager()
    min_addr = program.getMinAddress()
    max_addr = program.getMaxAddress()
    println("[Teyandee] program range %s .. %s" % (min_addr, max_addr))

    for value, name in sorted(SYMBOLS.items()):
        a = space.getAddress(value)
        if a.compareTo(min_addr) < 0 or a.compareTo(max_addr) > 0:
            println("[!] skip %s @ %s (out of range)" % (name, a))
            continue
        existing = list(symtab.getSymbols(a))
        if not existing:
            symtab.createLabel(a, name, SourceType.USER_DEFINED)
            println("[+] label %s @ %s" % (name, a))
        else:
            names = ", ".join([s.getName() for s in existing])
            println("[=] symbols at %s: %s" % (a, names))

    for value in CREATE_FUNCS:
        a = space.getAddress(value)
        if a.compareTo(min_addr) < 0 or a.compareTo(max_addr) > 0:
            continue
        if fm.getFunctionAt(a) is None:
            disassemble(a)
            fname = SYMBOLS.get(value, "FUN_%04X" % value)
            fn = createFunction(a, fname)
            if fn:
                println("[+] function %s" % fn.getName())
            else:
                println("[?] no function at %s" % a)
        else:
            println("[=] function exists at %s" % a)

    def read16(addr_val):
        a = space.getAddress(addr_val)
        mem = program.getMemory()
        lo = mem.getByte(a) & 0xFF
        hi = mem.getByte(a.add(1)) & 0xFF
        return lo | (hi << 8)

    try:
        nmi = read16(0xFFFA)
        rst = read16(0xFFFC)
        irq = read16(0xFFFE)
        println("[Teyandee] vectors: NMI=$%04X RESET=$%04X IRQ=$%04X" % (nmi, rst, irq))
        if nmi == 0xFCCD and rst == 0xFF90 and irq == 0xFC22:
            println("[Teyandee] vector check OK")
        else:
            println("[Teyandee] WARNING: unexpected vectors — check base address (want $C000)")
    except Exception as e:
        println("[Teyandee] vector read failed: %s" % e)

    println("[Teyandee] label_boot done")
