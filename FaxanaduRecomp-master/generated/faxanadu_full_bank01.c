/* faxanadu_full_bank01.c — PRG bank 1 function bodies.
 * Generated part of faxanadu_full.c: #included by the umbrella; NOT a
 * standalone translation unit. Do not compile or edit directly. */

void func_8009_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8009_b1");
#endif
label_8009:;
    /* $8009: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x45 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_800B:;
    /* $800B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_800C:;
    /* $800C: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_800D:;
    /* $800D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_800E:;
    /* $800E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_800F:;
    /* $800F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x19 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8011:;
    /* $8011: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xD8); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8013:;
    /* $8013: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x64); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8015:;
    /* $8015: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xF3); FLAG_NZ(g_cpu.A);
label_8017:;
    /* $8017: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x87); FLAG_NZ(g_cpu.A);
label_8019:;
    /* $8019: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x3A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_801B:;
    /* $801B: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xDC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_801D:;
    /* $801D: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x7B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_801F:;
    /* $801F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8020:;
    /* $8020: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x09; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_8022:;
    /* $8022: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0xDB0A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8025:;
    /* $8025: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8026:;
    /* $8026: 85 */ maybe_trigger_vblank(3); nes_write(0x0B, g_cpu.A);
label_8028:;
    /* $8028: 2E */ maybe_trigger_vblank(6); { uint16_t a=0xE20C; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_802B:;
    /* $802B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0DA0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_802E:;
    /* $802E: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x020E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8031:;
    /* $8031: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0FAD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8034:;
    /* $8034: 4E */ maybe_trigger_vblank(6); { uint16_t a=0xF610; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8037:;
    /* $8037: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address(0x7FF1); return; }
label_8039:;
    /* $8039: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x84) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_803B:;
    /* $803B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x803B); return;
}

void func_8003_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8003_b1");
#endif
label_8003:;
    /* $8003: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_8004:;
    /* $8004: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_8006:;
    /* $8006: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xAA01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8009:;
    /* $8009: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x45 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_800B:;
    /* $800B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_800C:;
    /* $800C: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_800D:;
    /* $800D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_800E:;
    /* $800E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_800F:;
    /* $800F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x19 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8011:;
    /* $8011: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xD8); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8013:;
    /* $8013: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x64); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8015:;
    /* $8015: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xF3); FLAG_NZ(g_cpu.A);
label_8017:;
    /* $8017: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x87); FLAG_NZ(g_cpu.A);
label_8019:;
    /* $8019: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x3A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_801B:;
    /* $801B: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xDC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_801D:;
    /* $801D: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x7B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_801F:;
    /* $801F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8020:;
    /* $8020: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x09; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_8022:;
    /* $8022: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0xDB0A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8025:;
    /* $8025: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8026:;
    /* $8026: 85 */ maybe_trigger_vblank(3); nes_write(0x0B, g_cpu.A);
label_8028:;
    /* $8028: 2E */ maybe_trigger_vblank(6); { uint16_t a=0xE20C; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_802B:;
    /* $802B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0DA0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_802E:;
    /* $802E: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x020E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8031:;
    /* $8031: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0FAD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8034:;
    /* $8034: 4E */ maybe_trigger_vblank(6); { uint16_t a=0xF610; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8037:;
    /* $8037: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address(0x7FF1); return; }
label_8039:;
    /* $8039: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x84) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_803B:;
    /* $803B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x803B); return;
}

void func_8006_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8006_b1");
#endif
label_8006:;
    /* $8006: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xAA01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8009:;
    /* $8009: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x45 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_800B:;
    /* $800B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_800C:;
    /* $800C: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_800D:;
    /* $800D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_800E:;
    /* $800E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_800F:;
    /* $800F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x19 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8011:;
    /* $8011: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xD8); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8013:;
    /* $8013: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x64); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8015:;
    /* $8015: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xF3); FLAG_NZ(g_cpu.A);
label_8017:;
    /* $8017: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x87); FLAG_NZ(g_cpu.A);
label_8019:;
    /* $8019: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x3A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_801B:;
    /* $801B: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xDC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_801D:;
    /* $801D: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x7B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_801F:;
    /* $801F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8020:;
    /* $8020: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x09; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_8022:;
    /* $8022: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0xDB0A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8025:;
    /* $8025: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8026:;
    /* $8026: 85 */ maybe_trigger_vblank(3); nes_write(0x0B, g_cpu.A);
label_8028:;
    /* $8028: 2E */ maybe_trigger_vblank(6); { uint16_t a=0xE20C; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_802B:;
    /* $802B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0DA0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_802E:;
    /* $802E: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x020E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8031:;
    /* $8031: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0FAD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8034:;
    /* $8034: 4E */ maybe_trigger_vblank(6); { uint16_t a=0xF610; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8037:;
    /* $8037: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address(0x7FF1); return; }
label_8039:;
    /* $8039: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x84) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_803B:;
    /* $803B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x803B); return;
}

void func_8000_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8000_b1");
#endif
label_8000:;
    /* $8000: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x00); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8002:;
    /* $8002: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x28 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8004:;
    /* $8004: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_8006:;
    /* $8006: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xAA01); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8009:;
    /* $8009: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0x45 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_800B:;
    /* $800B: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_800C:;
    /* $800C: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_800D:;
    /* $800D: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_800E:;
    /* $800E: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_800F:;
    /* $800F: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x19 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8011:;
    /* $8011: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xD8); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8013:;
    /* $8013: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x64); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8015:;
    /* $8015: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xF3); FLAG_NZ(g_cpu.A);
label_8017:;
    /* $8017: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x87); FLAG_NZ(g_cpu.A);
label_8019:;
    /* $8019: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x3A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_801B:;
    /* $801B: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xDC; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_801D:;
    /* $801D: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x7B; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_801F:;
    /* $801F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8020:;
    /* $8020: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x09; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_8022:;
    /* $8022: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0xDB0A + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8025:;
    /* $8025: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8026:;
    /* $8026: 85 */ maybe_trigger_vblank(3); nes_write(0x0B, g_cpu.A);
label_8028:;
    /* $8028: 2E */ maybe_trigger_vblank(6); { uint16_t a=0xE20C; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_802B:;
    /* $802B: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x0DA0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_802E:;
    /* $802E: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0x020E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8031:;
    /* $8031: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x0FAD; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8034:;
    /* $8034: 4E */ maybe_trigger_vblank(6); { uint16_t a=0xF610; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8037:;
    /* $8037: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address(0x7FF1); return; }
label_8039:;
    /* $8039: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x84) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_803B:;
    /* $803B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x803B); return;
}

void func_B7AE_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7AE_b1");
#endif
label_B7AE:;
    /* $B7AE: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x5C33); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B7B1:;
    /* $B7B1: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B7B2:;
    /* $B7B2: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x1DF0); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B7B5:;
    /* $B7B5: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x28; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B7B7:;
    /* $B7B7: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB3; g_cpu.C=(g_cpu.A>=0xB3)?1:0; FLAG_NZ(r&0xFF); }
label_B7B9:;
    /* $B7B9: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x11B7); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B7BC:;
    /* $B7BC: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xDC) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B7BE:;
    /* $B7BE: 97 */ maybe_trigger_vblank(4); nes_write((0x11 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_B7C0:;
    /* $B7C0: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x3CB3); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B7C3:;
    /* $B7C3: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x02); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7C5:;
    /* $B7C5: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x5C33); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B7C8:;
    /* $B7C8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x15) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7CA:;
    /* $B7CA: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x40; g_cpu.C=(g_cpu.Y>=0x40)?1:0; FLAG_NZ(r&0xFF); }
label_B7CC:;
    /* $B7CC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB7CC); return;
}

void func_BA55_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA55_b1");
#endif
label_BA55:;
    /* $BA55: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x24; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BA57:;
    /* $BA57: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x4C); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA59:;
    /* $BA59: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0xC83F); FLAG_NZ(g_cpu.A);
label_BA5C:;
    /* $BA5C: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x8C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_BA5E:;
    /* $BA5E: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xC83C + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA61:;
    /* $BA61: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xEC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA63:;
    /* $BA63: 97 */ maybe_trigger_vblank(4); nes_write((0x11 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_BA65:;
    /* $BA65: C2 */ maybe_trigger_vblank(2); /* NOP */
label_BA67:;
    /* $BA67: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x43); FLAG_NZ(g_cpu.A);
label_BA69:;
    /* $BA69: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xC9; FLAG_NZ(g_cpu.A);
label_BA6B:;
    /* $BA6B: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x1C) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA6D:;
    /* $BA6D: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x25 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA6F:;
    /* $BA6F: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x73); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA71:;
    /* $BA71: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x55 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA73:;
    /* $BA73: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x55 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA75:;
    /* $BA75: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BA77:;
    /* $BA77: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x55 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA79:;
    /* $BA79: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BA7B:;
    /* $BA7B: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BA7D:;
    /* $BA7D: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x5C33); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA80:;
    /* $BA80: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x35) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BA82:;
    /* $BA82: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xCE + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BA84:;
    /* $BA84: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_BA87:;
    /* $BA87: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x34D7, -1); return;
}

void func_B982_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B982_b1");
#endif
label_B982:;
    /* $B982: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x0040 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B985:;
    /* $B985: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0xB0; g_cpu.C=(g_cpu.Y>=0xB0)?1:0; FLAG_NZ(r&0xFF); }
label_B987:;
    /* $B987: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x0F77 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B98A:;
    /* $B98A: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x3E5B); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B98D:;
    /* $B98D: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B7D6_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7D6_b1");
#endif
label_B7D6:;
    /* $B7D6: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x4C) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7D8:;
    /* $B7D8: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x34 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B7DA:;
    /* $B7DA: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xF1); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B7DC:;
    /* $B7DC: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_B7DF:;
    /* $B7DF: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x4D); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B7E1:;
    /* $B7E1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3F + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B7E3:;
    /* $B7E3: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B7E5:;
    /* $B7E5: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x43); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B7E7:;
    /* $B7E7: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xF1C3 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7EA:;
    /* $B7EA: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x4C25); FLAG_NZ(g_cpu.Y);
label_B7ED:;
    /* $B7ED: AF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read(0x0109); FLAG_NZ(g_cpu.A);
label_B7F0:;
    /* $B7F0: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0xD2 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B7F2:;
    /* $B7F2: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B7F3:;
    /* $B7F3: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x43 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B7F5:;
    /* $B7F5: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B7F6:;
    /* $B7F6: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xD0 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B7F8:;
    /* $B7F8: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B7F9:;
    /* $B7F9: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC4); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B7FB:;
    /* $B7FB: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x4C); FLAG_NZ(g_cpu.A);
label_B7FD:;
    /* $B7FD: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x35) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B7FF:;
    /* $B7FF: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x5C33); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B802:;
    /* $B802: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x35) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B804:;
    /* $B804: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_B805:;
    /* $B805: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x45 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B807:;
    /* $B807: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x00FC, -1); return;
}

void func_BA5B_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA5B_b1");
#endif
label_BA5B:;
    /* $BA5B: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_BA5C:;
    /* $BA5C: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x8C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_BA5E:;
    /* $BA5E: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xC83C + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA61:;
    /* $BA61: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xEC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA63:;
    /* $BA63: 97 */ maybe_trigger_vblank(4); nes_write((0x11 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_BA65:;
    /* $BA65: C2 */ maybe_trigger_vblank(2); /* NOP */
label_BA67:;
    /* $BA67: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x43); FLAG_NZ(g_cpu.A);
label_BA69:;
    /* $BA69: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xC9; FLAG_NZ(g_cpu.A);
label_BA6B:;
    /* $BA6B: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x1C) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA6D:;
    /* $BA6D: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x25 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA6F:;
    /* $BA6F: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x73); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA71:;
    /* $BA71: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x55 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA73:;
    /* $BA73: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x55 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA75:;
    /* $BA75: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BA77:;
    /* $BA77: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x55 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_BA79:;
    /* $BA79: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BA7B:;
    /* $BA7B: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x3A + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_BA7D:;
    /* $BA7D: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x5C33); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_BA80:;
    /* $BA80: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x35) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_BA82:;
    /* $BA82: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xCE + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BA84:;
    /* $BA84: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_BA87:;
    /* $BA87: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x34D7, -1); return;
}

void func_8070_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8070_b1");
#endif
label_8070:;
    /* $8070: 8E */ maybe_trigger_vblank(4); nes_write(0x5221, g_cpu.X);
label_8073:;
    /* $8073: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_8074:;
    /* $8074: E2 */ maybe_trigger_vblank(2); /* NOP */
label_8076:;
    /* $8076: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x23; FLAG_NZ(g_cpu.Y);
label_8078:;
    /* $8078: 46 */ maybe_trigger_vblank(5); { uint16_t a=0x24; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_807A:;
    /* $807A: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB924 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_807D:;
    /* $807D: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x5F); FLAG_NZ(g_cpu.A);
label_807F:;
    /* $807F: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x0C; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8081:;
    /* $8081: 27 */ maybe_trigger_vblank(5); { uint16_t a=0xC4; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8083:;
    /* $8083: 27 */ maybe_trigger_vblank(5); { uint16_t a=0xC0; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8085:;
    /* $8085: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B9ED_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9ED_b1");
#endif
label_B9ED:;
    /* $B9ED: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xCEB1); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B9F0:;
    /* $B9F0: 94 */ maybe_trigger_vblank(4); nes_write((0x55 + g_cpu.X) & 0xFF, g_cpu.Y);
label_B9F2:;
    /* $B9F2: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_B9F3:;
    /* $B9F3: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B9F4:;
    /* $B9F4: 1C */ maybe_trigger_vblank(4); (void)nes_read((0xCDD2 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B9F7:;
    /* $B9F7: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x26D3 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B9FA:;
    /* $B9FA: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x5C33); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B9FD:;
    /* $B9FD: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x35) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9FF:;
    /* $B9FF: CE */ maybe_trigger_vblank(6); { uint16_t a=0x2697; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BA02:;
    /* $BA02: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x65; g_cpu.C=(g_cpu.Y>=0x65)?1:0; FLAG_NZ(r&0xFF); }
label_BA04:;
    /* $BA04: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_BA05:;
    /* $BA05: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x3F23 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA08:;
    /* $BA08: D2 */ maybe_trigger_vblank(2); /* ILLEGAL $D2 — skip 1 */
label_BA09:;
    /* $BA09: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xB3FE); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BA0C:;
    /* $BA0C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C0D5(); return;
}

void func_B7BF_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7BF_b1");
#endif
label_B7BF:;
    /* $B7BF: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0xCC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7C1:;
    /* $B7C1: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x3C) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7C3:;
    /* $B7C3: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x02); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7C5:;
    /* $B7C5: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x5C33); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B7C8:;
    /* $B7C8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x15) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7CA:;
    /* $B7CA: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x40; g_cpu.C=(g_cpu.Y>=0x40)?1:0; FLAG_NZ(r&0xFF); }
label_B7CC:;
    /* $B7CC: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB7CC); return;
}

void func_B880_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B880_b1");
#endif
label_B880:;
    /* $B880: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x1A8B + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B883:;
    /* $B883: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xA3B1); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B886:;
    /* $B886: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x34CE); FLAG_NZ(g_cpu.A);
label_B889:;
    /* $B889: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xC4 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B88B:;
    /* $B88B: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x1193 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B88E:;
    /* $B88E: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x1BAF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B891:;
    /* $B891: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B892:;
    /* $B892: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_B893:;
    /* $B893: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x74 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B895:;
    /* $B895: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0055 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B898:;
    /* $B898: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xB3AE); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B89B:;
    /* $B89B: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x55D6); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_A860_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A860_b1");
#endif
label_A860:;
    /* $A860: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x7431); FLAG_NZ(g_cpu.A);
label_A863:;
    /* $A863: EA */ maybe_trigger_vblank(2); /* NOP */
label_A864:;
    /* $A864: 77 */ maybe_trigger_vblank(6); { uint16_t a=(0x3C + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A866:;
    /* $A866: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xCC34); FLAG_NZ(g_cpu.Y);
label_A869:;
    /* $A869: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xC63D + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A86C:;
    /* $A86C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xA7FA); return; }
label_A86E:;
    /* $A86E: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xC608; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A871:;
    /* $A871: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xA7FF); return; }
label_A873:;
    /* $A873: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xC608; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A876:;
    /* $A876: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xA804); return; }
label_A878:;
    /* $A878: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xC608; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A87B:;
    /* $A87B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0xA809); return; }
label_A87D:;
    /* $A87D: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x2A08; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A880:;
    /* $A880: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A881:;
    /* $A881: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A882:;
    /* $A882: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A883:;
    /* $A883: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x28) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A885:;
    /* $A885: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x29); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A887:;
    /* $A887: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x2A; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A889:;
    /* $A889: 96 */ maybe_trigger_vblank(4); nes_write((0x2A + g_cpu.Y) & 0xFF, g_cpu.X);
label_A88B:;
    /* $A88B: 19 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xA42B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A88E:;
    /* $A88E: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x33; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_A890:;
    /* $A890: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x2CD2); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A893:;
    /* $A893: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2D; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_A895:;
    /* $A895: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A896:;
    /* $A896: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x2E5A); FLAG_NZ(g_cpu.A);
label_A899:;
    /* $A899: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x2E + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A89B:;
    /* $A89B: 5B */ maybe_trigger_vblank(7); { uint16_t a=(0xD72F + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A89E:;
    /* $A89E: 2F */ maybe_trigger_vblank(6); { uint16_t a=0x305B; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A8A1:;
    /* $A8A1: E2 */ maybe_trigger_vblank(2); /* NOP */
label_A8A3:;
    /* $A8A3: 5A */ maybe_trigger_vblank(2); /* NOP */
label_A8A4:;
    /* $A8A4: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0xE2) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8A6:;
    /* $A8A6: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x5B) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8A8:;
    /* $A8A8: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_A8A9:;
    /* $A8A9: EF */ maybe_trigger_vblank(6); { uint16_t a=0x6E32; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A8AC:;
    /* $A8AC: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x19) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A8AE:;
    /* $A8AE: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xB8 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8B0:;
    /* $A8B0: 34 */ maybe_trigger_vblank(4); (void)nes_read((0x23 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A8B2:;
    /* $A8B2: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x9E + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A8B4:;
    /* $A8B4: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x2C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A8B6:;
    /* $A8B6: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xC1 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8B8:;
    /* $A8B8: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x3D + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8BA:;
    /* $A8BA: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0xDA + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A8BC:;
    /* $A8BC: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x5E + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A8BE:;
    /* $A8BE: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A8BF:;
    /* $A8BF: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x7338 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8C2:;
    /* $A8C2: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3A0E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8C5:;
    /* $A8C5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3A; FLAG_NZ(g_cpu.A);
label_A8C7:;
    /* $A8C7: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xD83B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8CA:;
    /* $A8CA: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x3C8C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A8CD:;
    /* $A8CD: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x3D); FLAG_NZ(g_cpu.A);
label_A8CF:;
    /* $A8CF: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A8D0:;
    /* $A8D0: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3E59 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8D3:;
    /* $A8D3: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x40; g_cpu.C=(g_cpu.Y>=0x40)?1:0; FLAG_NZ(r&0xFF); }
label_A8D5:;
    /* $A8D5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA8D5); return;
}

void func_A224_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A224_b1");
#endif
label_A224:;
    /* $A224: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) goto label_A233;
label_A226:;
    /* $A226: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x3E) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A228:;
    /* $A228: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x8DF6 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A22B:;
    /* $A22B: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0xDA7B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A22E:;
    /* $A22E: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x78DF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A231:;
    /* $A231: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x72 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A233:;
    /* $A233: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x4E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A235:;
    /* $A235: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x7C + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A237:;
    /* $A237: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0354 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A23A:;
    /* $A23A: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x6F5C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A23D:;
    /* $A23D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A23E:;
    /* $A23E: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { call_by_address(0xA1CC); return; }
label_A240:;
    /* $A240: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF0C6); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A243:;
    /* $A243: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_A246:;
    /* $A246: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A248:;
    /* $A248: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_A24B:;
    /* $A24B: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x76A4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A24E:;
    /* $A24E: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xDA) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A250:;
    /* $A250: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_A251:;
    /* $A251: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A252:;
    /* $A252: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A254:;
    /* $A254: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x3AFB); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A257:;
    /* $A257: CF */ maybe_trigger_vblank(6); { uint16_t a=0x73B1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A25A:;
    /* $A25A: 27 */ maybe_trigger_vblank(5); { uint16_t a=0xC5; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A25C:;
    /* $A25C: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x0C) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A25E:;
    /* $A25E: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_A261:;
    /* $A261: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x7C) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A263:;
    /* $A263: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xCA08; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A266:;
    /* $A266: DC */ maybe_trigger_vblank(4); (void)nes_read((0x30C7 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A269:;
    /* $A269: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x1C + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A26B:;
    /* $A26B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x4C21 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A26E:;
    /* $A26E: 85 */ maybe_trigger_vblank(3); nes_write(0x5D, g_cpu.A);
label_A270:;
    /* $A270: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A246;
    }
label_A272:;
    /* $A272: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x3C) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A274:;
    /* $A274: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xCC3A + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A277:;
    /* $A277: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x26 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A279:;
    /* $A279: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_A27A:;
    /* $A27A: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x724D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A27D:;
    /* $A27D: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x109B + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A280:;
    /* $A280: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_A281:;
    /* $A281: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A282:;
    /* $A282: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A284:;
    /* $A284: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address(0xA2F8); return; }
label_A286:;
    /* $A286: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC7); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A288:;
    /* $A288: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_A289:;
    /* $A289: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x5C40); maybe_trigger_vblank(2); call_by_address(_jt); return; }
label_A28C:; return;
label_A28F:; return;
label_A292:; return;
label_A294:; return;
label_A296:; return;
label_A298:; return;
label_A29A:; return;
label_A29C:; return;
label_A29E:; return;
label_A2A0:; return;
label_A2A3:; return;
label_A2A6:; return;
label_A2A8:; return;
label_A2AA:; return;
label_A2AC:; return;
label_A2AE:; return;
label_A2B0:; return;
label_A2B2:; return;
label_A2B5:; return;
label_A2B7:; return;
label_A2BA:; return;
label_A2BC:; return;
label_A2BF:; return;
label_A2C2:; return;
label_A2C4:; return;
label_A2C6:; return;
label_A2C9:; return;
label_A2CB:; return;
label_A2CE:; return;
label_A2D0:; return;
label_A2D3:; return;
label_A2D6:; return;
label_A2D8:; return;
label_A2D9:; return;
label_A2DA:; return;
label_A2DD:; return;
label_A2DF:; return;
label_A2E2:; return;
label_A2E4:; return;
label_A2E7:; return;
label_A2EA:; return;
label_A2EC:; return;
label_A2EF:; return;
label_A2F1:; return;
label_A2F4:; return;
label_A2F6:; return;
label_A2F7:; return;
label_A2F9:; return;
label_A2FB:; return;
label_A2FD:; return;
label_A300:; return;
label_A302:; return;
label_A305:; return;
label_A307:; return;
label_A309:; return;
label_A30B:; return;
label_A30E:; return;
label_A310:; return;
label_A312:; return;
label_A314:; return;
label_A316:; return;
label_A318:; return;
label_A31A:; return;
label_A31D:; return;
label_A31F:; return;
label_A322:; return;
label_A324:; return;
label_A327:; return;
label_A329:; return;
label_A32B:; return;
label_A32D:; return;
label_A330:; return;
label_A333:; return;
label_A335:; return;
label_A338:; return;
label_A33B:; return;
label_A33D:; return;
label_A33F:; return;
label_A342:; return;
label_A344:; return;
label_A345:; return;
label_A346:; return;
label_A347:; return;
label_A349:; return;
label_A34C:; return;
label_A34E:; return;
label_A351:; return;
label_A353:; return;
label_A356:; return;
label_A359:; return;
label_A35B:; return;
label_A35E:; return;
label_A360:; return;
label_A362:; return;
label_A365:; return;
label_A367:; return;
label_A369:; return;
label_A36C:; return;
label_A36F:; return;
label_A371:; return;
label_A372:; return;
label_A374:; return;
label_A377:; return;
label_A379:; return;
label_A37B:; return;
label_A37D:; return;
label_A380:; return;
label_A383:; return;
label_A385:; return;
label_A387:; return;
label_A389:; return;
label_A38B:; return;
label_A38E:; return;
label_A390:; return;
label_A393:; return;
label_A396:; return;
label_A399:; return;
label_A39B:; return;
label_A39E:; return;
label_A3A1:; return;
label_A3A3:; return;
label_A3A5:; return;
label_A3A8:; return;
label_A3AB:; return;
label_A3AE:; return;
label_A3B1:; return;
label_A3B2:; return;
label_A3B4:; return;
label_A3B7:; return;
label_A3B9:; return;
label_A3BC:; return;
label_A3BE:; return;
label_A3C1:; return;
label_A3C3:; return;
label_A3C5:; return;
label_A3C7:; return;
label_A3CA:; return;
label_A3CD:; return;
label_A3CF:; return;
label_A3D1:; return;
label_A3D4:; return;
label_A3D6:; return;
label_A3D9:; return;
label_A3DB:; return;
label_A3DE:; return;
label_A3DF:; return;
label_A3E1:; return;
label_A3E4:; return;
label_A3E7:; return;
label_A3E9:; return;
label_A3EB:; return;
label_A3EE:; return;
label_A3F1:; return;
label_A3F4:; return;
label_A3F6:; return;
label_A3F9:; return;
label_A3FB:; return;
label_A3FD:; return;
label_A3FF:; return;
label_A402:; return;
label_A405:; return;
label_A408:; return;
label_A409:; return;
label_A40B:; return;
label_A40E:; return;
label_A411:; return;
label_A413:; return;
label_A416:; return;
label_A418:; return;
label_A41B:; return;
label_A41D:; return;
label_A420:; return;
label_A423:; return;
label_A425:; return;
label_A428:; return;
label_A42B:; return;
label_A42E:; return;
label_A430:; return;
label_A433:; return;
label_A435:; return;
label_A438:; return;
label_A43A:; return;
label_A43C:; return;
label_A43F:; return;
label_A441:; return;
label_A443:; return;
label_A445:; return;
label_A446:; return;
label_A449:; return;
label_A44C:; return;
label_A44F:; return;
label_A452:; return;
label_A455:; return;
label_A456:; return;
label_A458:; return;
label_A45B:; return;
label_A45D:; return;
label_A460:; return;
label_A462:; return;
label_A465:; return;
label_A467:; return;
label_A46A:; return;
label_A46B:; return;
label_A46D:; return;
label_A46E:; return;
label_A470:; return;
label_A472:; return;
label_A474:; return;
label_A477:; return;
label_A47A:; return;
label_A47D:; return;
label_A47F:; return;
label_A482:; return;
label_A484:; return;
label_A487:; return;
label_A48A:; return;
label_A48B:; return;
label_A48D:; return;
label_A48E:; return;
label_A490:; return;
label_A492:; return;
label_A495:; return;
label_A497:; return;
label_A499:; return;
label_A49B:; return;
label_A49E:; return;
label_A4A0:; return;
label_A4A2:; return;
label_A4A3:; return;
label_A4A6:; return;
label_A4A9:; return;
label_A4AC:; return;
label_A4AF:; return;
label_A4B2:; return;
label_A4B5:; return;
label_A4B7:; return;
label_A4B9:; return;
label_A4BB:; return;
label_A4BC:; return;
label_A4BF:; return;
label_A4C1:; return;
label_A4C4:; return;
label_A4C7:; return;
label_A4CA:; return;
label_A4CD:; return;
label_A4D0:; return;
label_A4D1:; return;
label_A4D3:; return;
label_A4D4:; return;
label_A4D6:; return;
label_A4D7:; return;
label_A4D9:; return;
label_A4DA:; return;
label_A4DC:; return;
label_A4DF:; return;
label_A4E1:; return;
label_A4E2:; return;
label_A4E5:; return;
label_A4E8:; return;
label_A4EB:; return;
label_A4EE:; return;
label_A4F0:; return;
label_A4F3:; return;
label_A4F5:; return;
label_A4F8:; return;
label_A4FB:; return;
label_A4FC:; return;
label_A4FD:; return;
label_A500:; return;
label_A503:; return;
label_A506:; return;
label_A509:; return;
label_A50C:; return;
label_A50D:; return;
label_A50F:; return;
label_A512:; return;
label_A514:; return;
label_A517:; return;
label_A519:; return;
label_A51C:; return;
label_A51E:; return;
label_A521:; return;
label_A524:; return;
label_A526:; return;
label_A528:; return;
label_A52A:; return;
label_A52C:; return;
label_A52E:; return;
label_A530:; return;
label_A532:; return;
label_A534:; return;
label_A537:; return;
label_A539:; return;
label_A53C:; return;
label_A53E:; return;
label_A541:; return;
label_A543:; return;
label_A546:; return;
label_A548:; return;
label_A549:; return;
label_A54B:; return;
label_A54D:; return;
label_A54F:; return;
label_A552:; return;
label_A555:; return;
label_A558:; return;
label_A559:; return;
label_A55B:; return;
label_A55E:; return;
label_A55F:; return;
label_A561:; return;
label_A562:; return;
label_A564:; return;
label_A566:; return;
label_A569:; return;
label_A56B:; return;
label_A56C:; return;
label_A56E:; return;
label_A571:; return;
label_A572:; return;
label_A574:; return;
label_A575:; return;
label_A577:; return;
label_A578:; return;
label_A57A:; return;
label_A57D:; return;
label_A57F:; return;
label_A582:; return;
label_A584:; return;
label_A585:; return;
label_A588:; return;
label_A58B:; return;
label_A58D:; return;
label_A590:; return;
label_A592:; return;
label_A595:; return;
label_A597:; return;
label_A59A:; return;
label_A59D:; return;
label_A59E:; return;
label_A5A0:; return;
label_A5A1:; return;
label_A5A3:; return;
label_A5A4:; return;
label_A5A6:; return;
label_A5A7:; return;
label_A5A9:; return;
label_A5AA:; return;
label_A5AB:; return;
label_A5AC:; return;
label_A5AE:; return;
label_A5B1:; return;
label_A5B4:; return;
label_A5B6:; return;
label_A5B9:; return;
label_A5BC:; return;
label_A5BE:; return;
label_A5C0:; return;
label_A5C3:; return;
label_A5C5:; return;
label_A5C7:; return;
label_A5C9:; return;
label_A5CC:; return;
label_A5CE:; return;
label_A5D1:; return;
label_A5D2:; return;
label_A5D4:; return;
label_A5D6:; return;
label_A5D9:; return;
label_A5DB:; return;
label_A5DE:; return;
label_A5E0:; return;
label_A5E1:; return;
label_A5E3:; return;
label_A5E6:; return;
label_A5E7:; return;
label_A5EA:; return;
label_A5EB:; return;
label_A5ED:; return;
label_A5EF:; return;
label_A5F1:; return;
label_A5F3:; return;
label_A5F6:; return;
label_A5F8:; return;
label_A5FA:; return;
label_A5FB:; return;
label_A5FD:; return;
label_A600:; return;
label_A601:; return;
label_A603:; return;
label_A606:; return;
label_A609:; return;
label_A60B:; return;
label_A60D:; return;
label_A60F:; return;
label_A611:; return;
label_A613:; return;
label_A615:; return;
label_A618:; return;
label_A61A:; return;
label_A61C:; return;
label_A61E:; return;
label_A620:; return;
label_A622:; return;
label_A625:; return;
label_A627:; return;
label_A629:; return;
label_A62C:; return;
label_A62F:; return;
label_A632:; return;
label_A634:; return;
label_A636:; return;
label_A638:; return;
label_A63A:; return;
label_A63C:; return;
label_A63E:; return;
label_A641:; return;
label_A643:; return;
label_A645:; return;
label_A648:; return;
label_A64B:; return;
label_A64D:; return;
label_A650:; return;
label_A652:; return;
label_A655:; return;
label_A658:; return;
label_A65B:; return;
label_A65E:; return;
label_A65F:; return;
label_A661:; return;
label_A664:; return;
label_A666:; return;
label_A669:; return;
label_A66B:; return;
label_A66E:; return;
label_A670:; return;
label_A673:; return;
label_A674:; return;
label_A675:; return;
label_A677:; return;
label_A679:; return;
label_A67C:; return;
label_A67E:; return;
label_A680:; return;
label_A683:; return;
label_A685:; return;
label_A688:; return;
label_A68B:; return;
label_A68D:; return;
label_A690:; return;
label_A692:; return;
label_A695:; return;
label_A698:; return;
label_A69A:; return;
label_A69D:; return;
label_A69F:; return;
label_A6A1:; return;
label_A6A3:; return;
label_A6A6:; return;
label_A6A8:; return;
label_A6AB:; return;
label_A6AD:; return;
label_A6AF:; return;
label_A6B1:; return;
label_A6B3:; return;
label_A6B5:; return;
label_A6B8:; return;
label_A6BB:; return;
label_A6BD:; return;
label_A6C0:; return;
label_A6C2:; return;
label_A6C5:; return;
label_A6C7:; return;
label_A6CA:; return;
label_A6CC:; return;
label_A6CF:; return;
label_A6D2:; return;
label_A6D5:; return;
label_A6D8:; return;
label_A6DA:; return;
label_A6DC:; return;
label_A6DD:; return;
label_A6DF:; return;
label_A6E2:; return;
label_A6E4:; return;
label_A6E6:; return;
label_A6E8:; return;
label_A6EA:; return;
label_A6ED:; return;
label_A6EE:; return;
label_A6F0:; return;
label_A6F1:; return;
label_A6F4:; return;
label_A6F6:; return;
label_A6F9:; return;
label_A6FB:; return;
label_A6FE:; return;
label_A700:; return;
label_A703:; return;
label_A705:; return;
label_A707:; return;
label_A708:; return;
label_A709:; return;
label_A70A:; return;
label_A70C:; return;
label_A70E:; return;
label_A711:; return;
label_A713:; return;
label_A716:; return;
label_A718:; return;
label_A71B:; return;
label_A71D:; return;
label_A720:; return;
label_A722:; return;
label_A724:; return;
label_A726:; return;
label_A729:; return;
label_A72C:; return;
label_A72F:; return;
label_A732:; return;
label_A734:; return;
label_A737:; return;
label_A73A:; return;
label_A73C:; return;
label_A73F:; return;
label_A742:; return;
label_A744:; return;
label_A747:; return;
label_A74A:; return;
label_A74D:; return;
label_A74F:; return;
label_A750:; return;
label_A752:; return;
label_A754:; return;
label_A755:; return;
label_A756:; return;
label_A758:; return;
label_A75B:; return;
label_A75D:; return;
label_A75E:; return;
label_A761:; return;
label_A762:; return;
label_A764:; return;
label_A767:; return;
label_A769:; return;
label_A76B:; return;
label_A76C:; return;
label_A76E:; return;
label_A770:; return;
label_A772:; return;
label_A774:; return;
label_A776:; return;
label_A778:; return;
label_A77A:; return;
label_A77C:; return;
label_A77F:; return;
label_A782:; return;
label_A785:; return;
label_A787:; return;
label_A78A:; return;
label_A78D:; return;
label_A790:; return;
label_A793:; return;
label_A795:; return;
label_A797:; return;
label_A79A:; return;
label_A79D:; return;
label_A79F:; return;
label_A7A1:; return;
label_A7A3:; return;
label_A7A6:; return;
label_A7A9:; return;
label_A7AB:; return;
label_A7AD:; return;
label_A7AF:; return;
label_A7B2:; return;
label_A7B4:; return;
label_A7B7:; return;
label_A7B9:; return;
label_A7BC:; return;
label_A7BE:; return;
label_A7C1:; return;
label_A7C2:; return;
label_A7C3:; return;
label_A7C4:; return;
label_A7C6:; return;
label_A7C9:; return;
label_A7CB:; return;
label_A7CE:; return;
label_A7D0:; return;
label_A7D3:; return;
label_A7D5:; return;
label_A7D8:; return;
label_A7DA:; return;
label_A7DC:; return;
label_A7DE:; return;
label_A7E1:; return;
label_A7E4:; return;
label_A7E7:; return;
label_A7E9:; return;
label_A7EC:; return;
label_A7EE:; return;
label_A7F0:; return;
label_A7F3:; return;
label_A7F5:; return;
label_A7F8:; return;
label_A7FB:; return;
label_A7FD:; return;
label_A7FF:; return;
label_A802:; return;
label_A805:; return;
label_A807:; return;
label_A80A:; return;
label_A80D:; return;
label_A80E:; return;
label_A810:; return;
label_A812:; return;
label_A815:; return;
label_A817:; return;
label_A819:; return;
label_A81C:; return;
label_A81E:; return;
label_A820:; return;
label_A823:; return;
label_A826:; return;
label_A828:; return;
label_A82A:; return;
label_A82D:; return;
label_A830:; return;
label_A833:; return;
label_A835:; return;
label_A837:; return;
label_A838:; return;
label_A83B:; return;
label_A83D:; return;
label_A83F:; return;
label_A842:; return;
label_A844:; return;
label_A847:; return;
label_A849:; return;
label_A84C:; return;
label_A84F:; return;
label_A851:; return;
label_A854:; return;
label_A856:; return;
label_A859:; return;
label_A85B:; return;
label_A85D:; return;
label_A85F:; return;
label_A861:; return;
label_A863:; return;
label_A864:; return;
label_A866:; return;
label_A869:; return;
label_A86C:; return;
label_A86E:; return;
label_A871:; return;
label_A873:; return;
label_A876:; return;
label_A878:; return;
label_A87B:; return;
label_A87D:; return;
label_A880:; return;
label_A881:; return;
label_A882:; return;
label_A883:; return;
label_A885:; return;
label_A887:; return;
label_A889:; return;
label_A88B:; return;
label_A88E:; return;
label_A890:; return;
label_A893:; return;
label_A895:; return;
label_A896:; return;
label_A899:; return;
label_A89B:; return;
label_A89E:; return;
label_A8A1:; return;
label_A8A3:; return;
label_A8A4:; return;
label_A8A6:; return;
label_A8A8:; return;
label_A8A9:; return;
label_A8AC:; return;
label_A8AE:; return;
label_A8B0:; return;
label_A8B2:; return;
label_A8B4:; return;
label_A8B6:; return;
label_A8B8:; return;
label_A8BA:; return;
label_A8BC:; return;
label_A8BE:; return;
label_A8BF:; return;
label_A8C2:; return;
label_A8C5:; return;
label_A8C7:; return;
label_A8CA:; return;
label_A8CD:; return;
label_A8CF:; return;
label_A8D0:; return;
label_A8D3:; return;
label_A8D5:; return;
label_A8D6:; return;
label_A8D7:; return;
label_A8D8:; return;
label_A8D9:; return;
label_A8DA:; return;
label_A8DC:; return;
label_A8DF:; return;
label_A8E1:; return;
label_A8E3:; return;
label_A8E5:; return;
label_A8E7:; return;
label_A8E9:; return;
label_A8EB:; return;
label_A8ED:; return;
label_A8F0:; return;
label_A8F2:; return;
label_A8F5:; return;
label_A8F7:; return;
label_A8F9:; return;
label_A8FB:; return;
label_A8FD:; return;
label_A900:; return;
label_A902:; return;
label_A905:; return;
label_A907:; return;
label_A90A:; return;
label_A90D:; return;
label_A90F:; return;
label_A911:; return;
label_A913:; return;
label_A915:; return;
label_A916:; return;
label_A918:; return;
label_A919:; return;
label_A91B:; return;
label_A91D:; return;
label_A91E:; return;
label_A91F:; return;
label_A921:; return;
label_A922:; return;
label_A925:; return;
label_A927:; return;
label_A92A:; return;
label_A92B:; return;
label_A92C:; return;
label_A92F:; return;
label_A930:; return;
label_A932:; return;
label_A933:; return;
label_A935:; return;
label_A936:; return;
label_A939:; return;
label_A93B:; return;
label_A93E:; return;
label_A93F:; return;
label_A941:; return;
label_A942:; return;
label_A944:; return;
label_A946:; return;
label_A948:; return;
label_A94A:; return;
label_A94B:; return;
label_A94D:; return;
label_A94E:; return;
label_A950:; return;
label_A952:; return;
label_A954:; return;
label_A955:; return;
label_A957:; return;
label_A95A:; return;
label_A95C:; return;
label_A95D:; return;
label_A95F:; return;
label_A960:; return;
label_A963:; return;
label_A964:; return;
label_A965:; return;
label_A967:; return;
label_A968:; return;
label_A969:; return;
label_A96A:; return;
label_A96C:; return;
label_A96F:; return;
label_A970:; return;
label_A971:; return;
label_A973:; return;
label_A976:; return;
label_A978:; return;
label_A979:; return;
label_A97A:; return;
label_A97C:; return;
label_A97F:; return;
label_A981:; return;
label_A984:; return;
label_A986:; return;
label_A987:; return;
label_A988:; return;
label_A98A:; return;
label_A98D:; return;
label_A98F:; return;
label_A991:; return;
label_A993:; return;
label_A995:; return;
label_A997:; return;
label_A99A:; return;
label_A99D:; return;
label_A99E:; return;
label_A9A0:; return;
label_A9A2:; return;
label_A9A5:; return;
label_A9A7:; return;
label_A9AA:; return;
label_A9AC:; return;
label_A9AF:; return;
label_A9B1:; return;
label_A9B3:; return;
label_A9B6:; return;
label_A9B8:; return;
label_A9BB:; return;
label_A9BC:; return;
label_A9BF:; return;
label_A9C0:; return;
label_A9C3:; return;
label_A9C4:; return;
label_A9C6:; return;
label_A9C8:; return;
label_A9CA:; return;
label_A9CC:; return;
label_A9CE:; return;
label_A9D0:; return;
label_A9D2:; return;
label_A9D4:; return;
label_A9D5:; return;
label_A9D7:; return;
label_A9D9:; return;
label_A9DC:; return;
label_A9DE:; return;
label_A9E0:; return;
label_A9E3:; return;
label_A9E5:; return;
label_A9E7:; return;
label_A9E9:; return;
label_A9EC:; return;
label_A9EE:; return;
label_A9F0:; return;
label_A9F2:; return;
label_A9F5:; return;
label_A9F8:; return;
label_A9FA:; return;
label_A9FC:; return;
label_A9FE:; return;
label_AA00:; return;
label_AA02:; return;
label_AA04:; return;
label_AA06:; return;
label_AA07:; return;
label_AA09:; return;
label_AA0A:; return;
label_AA0B:; return;
label_AA0C:; return;
label_AA0D:; return;
label_AA0E:; return;
label_AA0F:; return;
label_AA10:; return;
label_AA11:; return;
label_AA12:; return;
label_AA13:; return;
label_AA14:; return;
label_AA16:; return;
label_AA19:; return;
label_AA1B:; return;
label_AA1C:; return;
label_AA1E:; return;
label_AA1F:; return;
label_AA22:; return;
label_AA24:; return;
label_AA26:; return;
label_AA28:; return;
label_AA2B:; return;
label_AA2D:; return;
label_AA30:; return;
label_AA31:; return;
label_AA34:; return;
label_AA36:; return;
label_AA38:; return;
label_AA3B:; return;
label_AA3E:; return;
label_AA41:; return;
label_AA43:; return;
label_AA45:; return;
label_AA47:; return;
label_AA49:; return;
label_AA4C:; return;
label_AA4F:; return;
label_AA51:; return;
label_AA53:; return;
label_AA55:; return;
label_AA58:; return;
label_AA5A:; return;
label_AA5D:; return;
label_AA5F:; return;
label_AA61:; return;
label_AA63:; return;
label_AA65:; return;
label_AA68:; return;
label_AA6A:; return;
label_AA6C:; return;
label_AA6F:; return;
label_AA71:; return;
label_AA73:; return;
label_AA75:; return;
label_AA77:; return;
label_AA79:; return;
label_AA7C:; return;
label_AA7E:; return;
label_AA80:; return;
label_AA82:; return;
label_AA85:; return;
label_AA87:; return;
label_AA89:; return;
label_AA8B:; return;
label_AA8E:; return;
label_AA8F:; return;
label_AA91:; return;
label_AA93:; return;
label_AA94:; return;
label_AA95:; return;
label_AA96:; return;
label_AA98:; return;
label_AA99:; return;
label_AA9A:; return;
label_AA9B:; return;
label_AA9C:; return;
label_AA9D:; return;
label_AAA0:; return;
label_AAA2:; return;
label_AAA5:; return;
label_AAA6:; return;
label_AAA7:; return;
label_AAA9:; return;
label_AAAC:; return;
label_AAAD:; return;
label_AAAF:; return;
label_AAB2:; return;
label_AAB4:; return;
label_AAB7:; return;
label_AAB9:; return;
label_AABC:; return;
label_AABF:; return;
label_AAC1:; return;
label_AAC3:; return;
label_AAC5:; return;
label_AAC6:; return;
label_AAC8:; return;
label_AACB:; return;
label_AACE:; return;
label_AAD0:; return;
label_AAD2:; return;
label_AAD4:; return;
label_AAD7:; return;
label_AADA:; return;
label_AADC:; return;
label_AADE:; return;
label_AADF:; return;
label_AAE1:; return;
label_AAE3:; return;
label_AAE5:; return;
label_AAE7:; return;
label_AAEA:; return;
label_AAEC:; return;
label_AAEE:; return;
label_AAEF:; return;
label_AAF0:; return;
label_AAF2:; return;
label_AAF4:; return;
label_AAF7:; return;
label_AAF9:; return;
label_AAFC:; return;
label_AAFE:; return;
label_AB01:; return;
label_AB03:; return;
label_AB06:; return;
label_AB08:; return;
label_AB09:; return;
label_AB0B:; return;
label_AB0E:; return;
label_AB11:; return;
label_AB12:; return;
label_AB13:; return;
label_AB14:; return;
label_AB15:; return;
label_AB16:; return;
label_AB17:; return;
label_AB18:; return;
label_AB19:; return;
label_AB1C:; return;
label_AB1E:; return;
label_AB21:; return;
label_AB23:; return;
label_AB25:; return;
label_AB28:; return;
label_AB2B:; return;
label_AB2D:; return;
label_AB2F:; return;
label_AB32:; return;
label_AB35:; return;
label_AB37:; return;
label_AB39:; return;
label_AB3C:; return;
label_AB3E:; return;
label_AB40:; return;
label_AB43:; return;
label_AB45:; return;
label_AB46:; return;
label_AB48:; return;
label_AB4A:; return;
label_AB4C:; return;
label_AB4D:; return;
label_AB50:; return;
label_AB53:; return;
label_AB55:; return;
label_AB57:; return;
label_AB59:; return;
label_AB5B:; return;
label_AB5D:; return;
label_AB5E:; return;
label_AB61:; return;
label_AB63:; return;
label_AB65:; return;
label_AB67:; return;
label_AB69:; return;
label_AB6C:; return;
label_AB6D:; return;
label_AB6F:; return;
label_AB71:; return;
label_AB73:; return;
label_AB76:; return;
label_AB78:; return;
label_AB7B:; return;
label_AB7D:; return;
label_AB80:; return;
label_AB83:; return;
label_AB85:; return;
label_AB87:; return;
label_AB8A:; return;
label_AB8C:; return;
label_AB8D:; return;
label_AB90:; return;
label_AB93:; return;
label_AB95:; return;
label_AB97:; return;
label_AB98:; return;
label_AB99:; return;
label_AB9A:; return;
label_AB9B:; return;
label_AB9C:; return;
label_AB9D:; return;
label_AB9E:; return;
label_AB9F:; return;
label_ABA0:; return;
label_ABA1:; return;
label_ABA2:; return;
label_ABA3:; return;
label_ABA4:; return;
label_ABA6:; return;
label_ABA8:; return;
label_ABAA:; return;
label_ABAC:; return;
label_ABAE:; return;
label_ABB1:; return;
label_ABB2:; return;
label_ABB5:; return;
label_ABB8:; return;
label_ABBA:; return;
label_ABBC:; return;
label_ABBE:; return;
label_ABC1:; return;
label_ABC4:; return;
label_ABC6:; return;
label_ABC8:; return;
label_ABC9:; return;
label_ABCB:; return;
label_ABCC:; return;
label_ABCF:; return;
label_ABD1:; return;
label_ABD3:; return;
label_ABD5:; return;
label_ABD8:; return;
label_ABDB:; return;
label_ABDD:; return;
label_ABDF:; return;
label_ABE1:; return;
label_ABE3:; return;
label_ABE6:; return;
label_ABE9:; return;
label_ABEB:; return;
label_ABED:; return;
label_ABEF:; return;
label_ABF1:; return;
label_ABF4:; return;
label_ABF7:; return;
label_ABF9:; return;
label_ABFC:; return;
label_ABFE:; return;
label_AC01:; return;
label_AC04:; return;
label_AC05:; return;
label_AC08:; return;
label_AC0A:; return;
label_AC0D:; return;
label_AC0F:; return;
label_AC10:; return;
label_AC12:; return;
label_AC13:; return;
label_AC16:; return;
label_AC18:; return;
label_AC1B:; return;
label_AC1D:; return;
label_AC1E:; return;
label_AC20:; return;
label_AC23:; return;
label_AC25:; return;
label_AC28:; return;
label_AC29:; return;
label_AC2A:; return;
label_AC2B:; return;
label_AC2E:; return;
label_AC2F:; return;
label_AC30:; return;
label_AC33:; return;
label_AC35:; return;
label_AC36:; return;
label_AC37:; return;
label_AC38:; return;
label_AC39:; return;
label_AC3A:; return;
label_AC3C:; return;
label_AC3E:; return;
label_AC41:; return;
label_AC42:; return;
label_AC44:; return;
label_AC47:; return;
label_AC4A:; return;
label_AC4D:; return;
label_AC50:; return;
label_AC53:; return;
label_AC56:; return;
label_AC57:; return;
label_AC5A:; return;
label_AC5C:; return;
label_AC5D:; return;
label_AC60:; return;
label_AC62:; return;
label_AC64:; return;
label_AC65:; return;
label_AC68:; return;
label_AC6A:; return;
label_AC6C:; return;
label_AC6F:; return;
label_AC71:; return;
label_AC74:; return;
label_AC77:; return;
label_AC79:; return;
label_AC7A:; return;
label_AC7D:; return;
label_AC80:; return;
label_AC82:; return;
label_AC85:; return;
label_AC88:; return;
label_AC8A:; return;
label_AC8B:; return;
label_AC8D:; return;
label_AC90:; return;
label_AC92:; return;
label_AC95:; return;
label_AC98:; return;
label_AC99:; return;
label_AC9C:; return;
label_AC9E:; return;
label_ACA0:; return;
label_ACA2:; return;
label_ACA4:; return;
label_ACA7:; return;
label_ACA9:; return;
label_ACAB:; return;
label_ACAD:; return;
label_ACAF:; return;
label_ACB1:; return;
label_ACB3:; return;
label_ACB6:; return;
label_ACB8:; return;
label_ACBA:; return;
label_ACBC:; return;
label_ACBF:; return;
label_ACC1:; return;
label_ACC3:; return;
label_ACC6:; return;
label_ACC8:; return;
label_ACCA:; return;
label_ACCC:; return;
label_ACCE:; return;
label_ACD0:; return;
label_ACD1:; return;
label_ACD2:; return;
label_ACD4:; return;
label_ACD5:; return;
label_ACD8:; return;
label_ACDA:; return;
label_ACDD:; return;
label_ACDE:; return;
label_ACE0:; return;
label_ACE2:; return;
label_ACE4:; return;
label_ACE7:; return;
label_ACE9:; return;
label_ACEC:; return;
label_ACED:; return;
label_ACEF:; return;
label_ACF2:; return;
label_ACF4:; return;
label_ACF7:; return;
label_ACF9:; return;
label_ACFC:; return;
label_ACFE:; return;
label_AD01:; return;
label_AD03:; return;
label_AD06:; return;
label_AD07:; return;
label_AD09:; return;
label_AD0C:; return;
label_AD0F:; return;
label_AD11:; return;
label_AD13:; return;
label_AD15:; return;
label_AD18:; return;
label_AD1A:; return;
label_AD1C:; return;
label_AD1D:; return;
label_AD1E:; return;
label_AD1F:; return;
label_AD22:; return;
label_AD23:; return;
label_AD24:; return;
label_AD27:; return;
label_AD28:; return;
label_AD2A:; return;
label_AD2C:; return;
label_AD2E:; return;
label_AD2F:; return;
label_AD30:; return;
label_AD32:; return;
label_AD33:; return;
label_AD35:; return;
label_AD36:; return;
label_AD39:; return;
label_AD3A:; return;
label_AD3B:; return;
label_AD3E:; return;
label_AD3F:; return;
label_AD40:; return;
label_AD43:; return;
label_AD44:; return;
label_AD45:; return;
label_AD47:; return;
label_AD48:; return;
label_AD49:; return;
label_AD4A:; return;
label_AD4B:; return;
label_AD4D:; return;
label_AD50:; return;
label_AD52:; return;
label_AD54:; return;
label_AD57:; return;
label_AD58:; return;
label_AD5A:; return;
label_AD5B:; return;
label_AD5E:; return;
label_AD61:; return;
label_AD62:; return;
label_AD65:; return;
label_AD68:; return;
label_AD6A:; return;
label_AD6C:; return;
label_AD6F:; return;
label_AD71:; return;
label_AD73:; return;
label_AD74:; return;
label_AD77:; return;
label_AD78:; return;
label_AD7B:; return;
label_AD7D:; return;
label_AD7F:; return;
label_AD81:; return;
label_AD83:; return;
label_AD85:; return;
label_AD87:; return;
label_AD88:; return;
label_AD8B:; return;
label_AD8D:; return;
label_AD90:; return;
label_AD92:; return;
label_AD94:; return;
label_AD96:; return;
label_AD98:; return;
label_AD9A:; return;
label_AD9C:; return;
label_AD9D:; return;
label_AD9E:; return;
label_ADA0:; return;
label_ADA2:; return;
label_ADA5:; return;
label_ADA7:; return;
label_ADA8:; return;
label_ADAB:; return;
label_ADAD:; return;
label_ADAF:; return;
label_ADB1:; return;
label_ADB3:; return;
label_ADB5:; return;
label_ADB8:; return;
label_ADBA:; return;
label_ADBC:; return;
label_ADBE:; return;
label_ADC0:; return;
label_ADC3:; return;
label_ADC5:; return;
label_ADC8:; return;
label_ADCB:; return;
label_ADCD:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD3:; return;
label_ADD5:; return;
label_ADD6:; return;
label_ADD7:; return;
label_ADD8:; return;
label_ADDB:; return;
label_ADDD:; return;
label_ADE0:; return;
label_ADE2:; return;
label_ADE5:; return;
label_ADE7:; return;
label_ADE8:; return;
label_ADEA:; return;
label_ADEC:; return;
label_ADED:; return;
label_ADEF:; return;
label_ADF1:; return;
label_ADF4:; return;
label_ADF7:; return;
label_ADFA:; return;
label_ADFD:; return;
label_ADFF:; return;
label_AE02:; return;
label_AE04:; return;
label_AE07:; return;
label_AE09:; return;
label_AE0B:; return;
label_AE0E:; return;
label_AE10:; return;
label_AE13:; return;
label_AE15:; return;
label_AE17:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1E:; return;
label_AE20:; return;
label_AE22:; return;
label_AE23:; return;
label_AE25:; return;
label_AE28:; return;
label_AE2A:; return;
label_AE2C:; return;
label_AE2E:; return;
label_AE30:; return;
label_AE33:; return;
label_AE34:; return;
label_AE36:; return;
label_AE39:; return;
label_AE3C:; return;
label_AE3D:; return;
label_AE40:; return;
label_AE42:; return;
label_AE44:; return;
label_AE45:; return;
label_AE47:; return;
label_AE4A:; return;
label_AE4C:; return;
label_AE4D:; return;
label_AE4E:; return;
label_AE51:; return;
label_AE54:; return;
label_AE55:; return;
label_AE56:; return;
label_AE57:; return;
label_AE58:; return;
label_AE59:; return;
label_AE5A:; return;
label_AE5C:; return;
label_AE5D:; return;
label_AE5E:; return;
label_AE5F:; return;
label_AE60:; return;
label_AE62:; return;
label_AE65:; return;
label_AE67:; return;
label_AE6A:; return;
label_AE6C:; return;
label_AE6E:; return;
label_AE71:; return;
label_AE73:; return;
label_AE75:; return;
label_AE78:; return;
label_AE7A:; return;
label_AE7B:; return;
label_AE7D:; return;
label_AE80:; return;
label_AE82:; return;
label_AE85:; return;
label_AE87:; return;
label_AE8A:; return;
label_AE8C:; return;
label_AE8F:; return;
label_AE92:; return;
label_AE95:; return;
label_AE97:; return;
label_AE9A:; return;
label_AE9C:; return;
label_AE9E:; return;
label_AEA1:; return;
label_AEA4:; return;
label_AEA6:; return;
label_AEA8:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAE:; return;
label_AEB0:; return;
label_AEB3:; return;
label_AEB4:; return;
label_AEB5:; return;
label_AEB8:; return;
label_AEBB:; return;
label_AEBE:; return;
label_AEBF:; return;
label_AEC1:; return;
label_AEC4:; return;
label_AEC7:; return;
label_AEC8:; return;
label_AEC9:; return;
label_AECA:; return;
label_AECB:; return;
label_AECC:; return;
label_AECD:; return;
label_AECE:; return;
label_AECF:; return;
label_AED0:; return;
label_AED1:; return;
label_AED2:; return;
label_AED3:; return;
label_AED4:; return;
label_AED5:; return;
label_AED7:; return;
label_AED8:; return;
label_AED9:; return;
label_AEDA:; return;
label_AEDB:; return;
label_AEDC:; return;
label_AEDD:; return;
label_AEDE:; return;
label_AEE0:; return;
label_AEE2:; return;
label_AEE4:; return;
label_AEE5:; return;
label_AEE6:; return;
label_AEE8:; return;
label_AEEB:; return;
label_AEED:; return;
label_AEEF:; return;
label_AEF1:; return;
label_AEF3:; return;
label_AEF6:; return;
label_AEF9:; return;
label_AEFC:; return;
label_AEFE:; return;
label_AF01:; return;
label_AF03:; return;
label_AF05:; return;
label_AF07:; return;
label_AF09:; return;
label_AF0B:; return;
label_AF0E:; return;
label_AF0F:; return;
label_AF12:; return;
label_AF13:; return;
label_AF15:; return;
label_AF17:; return;
label_AF19:; return;
label_AF1A:; return;
label_AF1D:; return;
label_AF1F:; return;
label_AF21:; return;
label_AF23:; return;
label_AF26:; return;
label_AF28:; return;
label_AF2A:; return;
label_AF2C:; return;
label_AF2D:; return;
label_AF2F:; return;
label_AF31:; return;
label_AF33:; return;
label_AF36:; return;
label_AF38:; return;
label_AF3A:; return;
label_AF3C:; return;
label_AF3F:; return;
label_AF42:; return;
label_AF44:; return;
label_AF45:; return;
label_AF47:; return;
label_AF4A:; return;
label_AF4C:; return;
label_AF4F:; return;
label_AF50:; return;
label_AF51:; return;
label_AF54:; return;
label_AF56:; return;
label_AF58:; return;
label_AF5B:; return;
label_AF5D:; return;
label_AF5F:; return;
label_AF62:; return;
label_AF64:; return;
label_AF67:; return;
label_AF69:; return;
label_AF6B:; return;
label_AF6D:; return;
label_AF6F:; return;
label_AF70:; return;
label_AF73:; return;
label_AF75:; return;
label_AF78:; return;
label_AF7A:; return;
label_AF7B:; return;
label_AF7D:; return;
label_AF80:; return;
label_AF83:; return;
label_AF85:; return;
label_AF87:; return;
label_AF89:; return;
label_AF8B:; return;
label_AF8E:; return;
label_AF90:; return;
label_AF93:; return;
label_AF96:; return;
label_AF98:; return;
label_AF99:; return;
label_AF9B:; return;
label_AF9E:; return;
label_AFA0:; return;
label_AFA3:; return;
label_AFA5:; return;
label_AFA7:; return;
label_AFA9:; return;
label_AFAB:; return;
label_AFAD:; return;
label_AFAF:; return;
label_AFB1:; return;
label_AFB4:; return;
label_AFB6:; return;
label_AFB9:; return;
label_AFBB:; return;
label_AFBD:; return;
label_AFC0:; return;
label_AFC2:; return;
label_AFC4:; return;
label_AFC5:; return;
label_AFC8:; return;
label_AFCB:; return;
label_AFCC:; return;
label_AFCD:; return;
label_AFCE:; return;
label_AFCF:; return;
label_AFD0:; return;
label_AFD1:; return;
label_AFD2:; return;
label_AFD3:; return;
label_AFD4:; return;
label_AFD5:; return;
label_AFD6:; return;
label_AFD7:; return;
label_AFD9:; return;
label_AFDA:; return;
label_AFDB:; return;
label_AFDD:; return;
label_AFDE:; return;
label_AFDF:; return;
label_AFE0:; return;
label_AFE3:; return;
label_AFE5:; return;
label_AFE6:; return;
label_AFE7:; return;
label_AFEA:; return;
label_AFEC:; return;
label_AFEF:; return;
label_AFF0:; return;
label_AFF2:; return;
label_AFF4:; return;
label_AFF5:; return;
label_AFF7:; return;
label_AFFA:; return;
label_AFFC:; return;
label_AFFF:; return;
label_B001:; return;
label_B004:; return;
label_B006:; return;
label_B009:; return;
label_B00A:; return;
label_B00D:; return;
label_B010:; return;
label_B013:; return;
label_B015:; return;
label_B016:; return;
label_B018:; return;
label_B01A:; return;
label_B01D:; return;
label_B01F:; return;
label_B022:; return;
label_B025:; return;
label_B028:; return;
label_B02A:; return;
label_B02C:; return;
label_B02E:; return;
label_B030:; return;
label_B033:; return;
label_B035:; return;
label_B037:; return;
label_B03A:; return;
label_B03C:; return;
label_B03F:; return;
label_B040:; return;
label_B042:; return;
label_B043:; return;
label_B045:; return;
label_B048:; return;
label_B04B:; return;
label_B04E:; return;
label_B04F:; return;
label_B050:; return;
label_B052:; return;
label_B055:; return;
label_B058:; return;
label_B059:; return;
label_B05A:; return;
label_B05B:; return;
label_B05D:; return;
label_B05E:; return;
label_B05F:; return;
label_B060:; return;
label_B061:; return;
label_B062:; return;
label_B063:; return;
label_B064:; return;
label_B065:; return;
label_B066:; return;
label_B067:; return;
label_B068:; return;
label_B069:; return;
label_B06B:; return;
label_B06E:; return;
label_B06F:; return;
label_B071:; return;
label_B073:; return;
label_B075:; return;
label_B078:; return;
label_B079:; return;
label_B07B:; return;
label_B07C:; return;
label_B07F:; return;
label_B081:; return;
label_B084:; return;
label_B087:; return;
label_B08A:; return;
label_B08C:; return;
label_B08D:; return;
label_B08F:; return;
label_B092:; return;
label_B093:; return;
label_B095:; return;
label_B098:; return;
label_B09B:; return;
label_B09E:; return;
label_B0A0:; return;
label_B0A3:; return;
label_B0A5:; return;
label_B0A8:; return;
label_B0AA:; return;
label_B0AC:; return;
label_B0AD:; return;
label_B0B0:; return;
label_B0B2:; return;
label_B0B4:; return;
label_B0B7:; return;
label_B0BA:; return;
label_B0BC:; return;
label_B0BE:; return;
label_B0C0:; return;
label_B0C3:; return;
label_B0C4:; return;
label_B0C7:; return;
label_B0C9:; return;
label_B0CC:; return;
label_B0CE:; return;
label_B0D1:; return;
label_B0D3:; return;
label_B0D6:; return;
label_B0D8:; return;
label_B0DA:; return;
label_B0DD:; return;
label_B0DF:; return;
label_B0E1:; return;
label_B0E2:; return;
label_B0E4:; return;
label_B0E5:; return;
label_B0E6:; return;
label_B0E7:; return;
label_B0E8:; return;
label_B0E9:; return;
label_B0EA:; return;
label_B0EB:; return;
label_B0EC:; return;
label_B0ED:; return;
label_B0EE:; return;
label_B0EF:; return;
label_B0F0:; return;
label_B0F2:; return;
label_B0F5:; return;
label_B0F7:; return;
label_B0FA:; return;
label_B0FC:; return;
label_B0FF:; return;
label_B102:; return;
label_B104:; return;
label_B107:; return;
label_B10A:; return;
label_B10C:; return;
label_B10F:; return;
label_B112:; return;
label_B115:; return;
label_B118:; return;
label_B11A:; return;
label_B11C:; return;
label_B11F:; return;
label_B121:; return;
label_B124:; return;
label_B126:; return;
label_B128:; return;
label_B12A:; return;
label_B12B:; return;
label_B12E:; return;
label_B12F:; return;
label_B131:; return;
label_B133:; return;
label_B136:; return;
label_B137:; return;
label_B139:; return;
label_B13A:; return;
label_B13C:; return;
label_B13E:; return;
label_B140:; return;
label_B141:; return;
label_B143:; return;
label_B145:; return;
label_B146:; return;
label_B147:; return;
label_B148:; return;
label_B14A:; return;
label_B14C:; return;
label_B14D:; return;
label_B14E:; return;
label_B151:; return;
label_B152:; return;
label_B153:; return;
label_B156:; return;
label_B157:; return;
label_B158:; return;
label_B159:; return;
label_B15A:; return;
label_B15C:; return;
label_B15E:; return;
label_B161:; return;
label_B163:; return;
label_B166:; return;
label_B168:; return;
label_B16A:; return;
label_B16C:; return;
label_B16D:; return;
label_B16F:; return;
label_B170:; return;
label_B172:; return;
label_B175:; return;
label_B177:; return;
label_B17A:; return;
label_B17C:; return;
label_B17F:; return;
label_B181:; return;
label_B183:; return;
label_B186:; return;
label_B188:; return;
label_B18B:; return;
label_B18D:; return;
label_B190:; return;
label_B193:; return;
label_B195:; return;
label_B197:; return;
label_B199:; return;
label_B19C:; return;
label_B19E:; return;
label_B1A0:; return;
label_B1A2:; return;
label_B1A4:; return;
label_B1A6:; return;
label_B1A9:; return;
label_B1AB:; return;
label_B1AE:; return;
label_B1B0:; return;
label_B1B2:; return;
label_B1B3:; return;
label_B1B5:; return;
label_B1B6:; return;
label_B1B8:; return;
label_B1BA:; return;
label_B1BC:; return;
label_B1BE:; return;
label_B1C0:; return;
label_B1C2:; return;
label_B1C5:; return;
label_B1C7:; return;
label_B1C9:; return;
label_B1CC:; return;
label_B1CE:; return;
label_B1D0:; return;
label_B1D2:; return;
label_B1D4:; return;
label_B1D7:; return;
label_B1DA:; return;
label_B1DB:; return;
label_B1DE:; return;
label_B1DF:; return;
label_B1E0:; return;
label_B1E1:; return;
label_B1E2:; return;
label_B1E4:; return;
label_B1E7:; return;
label_B1E8:; return;
label_B1E9:; return;
label_B1EA:; return;
label_B1EC:; return;
label_B1EF:; return;
label_B1F1:; return;
label_B1F4:; return;
label_B1F7:; return;
label_B1F9:; return;
label_B1FC:; return;
label_B1FE:; return;
label_B201:; return;
label_B203:; return;
label_B206:; return;
label_B209:; return;
label_B20A:; return;
label_B20C:; return;
label_B20E:; return;
label_B211:; return;
label_B213:; return;
label_B215:; return;
label_B217:; return;
label_B21A:; return;
label_B21D:; return;
label_B21F:; return;
label_B220:; return;
label_B222:; return;
label_B224:; return;
label_B227:; return;
label_B229:; return;
label_B22B:; return;
label_B22E:; return;
label_B230:; return;
label_B232:; return;
label_B234:; return;
label_B236:; return;
label_B237:; return;
label_B238:; return;
label_B23A:; return;
label_B23D:; return;
label_B23F:; return;
label_B241:; return;
label_B242:; return;
label_B244:; return;
label_B247:; return;
label_B24A:; return;
label_B24B:; return;
label_B24C:; return;
label_B24F:; return;
label_B251:; return;
label_B252:; return;
label_B253:; return;
label_B254:; return;
label_B255:; return;
label_B256:; return;
label_B257:; return;
label_B258:; return;
label_B259:; return;
label_B25A:; return;
label_B25B:; return;
label_B25D:; return;
label_B260:; return;
label_B262:; return;
label_B264:; return;
label_B267:; return;
label_B269:; return;
label_B26C:; return;
label_B26D:; return;
label_B26F:; return;
label_B272:; return;
label_B274:; return;
label_B275:; return;
label_B276:; return;
label_B279:; return;
label_B27B:; return;
label_B27E:; return;
label_B280:; return;
label_B281:; return;
label_B283:; return;
label_B285:; return;
label_B288:; return;
label_B28A:; return;
label_B28D:; return;
label_B28F:; return;
label_B292:; return;
label_B294:; return;
label_B295:; return;
label_B298:; return;
label_B299:; return;
label_B29B:; return;
label_B29D:; return;
label_B29F:; return;
label_B2A2:; return;
label_B2A3:; return;
label_B2A6:; return;
label_B2A8:; return;
label_B2AB:; return;
label_B2AD:; return;
label_B2B0:; return;
label_B2B2:; return;
label_B2B4:; return;
label_B2B6:; return;
label_B2B9:; return;
label_B2BB:; return;
label_B2BE:; return;
label_B2C1:; return;
label_B2C3:; return;
label_B2C5:; return;
label_B2C8:; return;
label_B2CA:; return;
label_B2CD:; return;
label_B2CE:; return;
label_B2D0:; return;
label_B2D3:; return;
label_B2D5:; return;
label_B2D7:; return;
label_B2D9:; return;
label_B2DB:; return;
label_B2DC:; return;
label_B2DE:; return;
label_B2E0:; return;
label_B2E2:; return;
label_B2E5:; return;
label_B2E7:; return;
label_B2EA:; return;
label_B2EC:; return;
label_B2EF:; return;
label_B2F1:; return;
label_B2F2:; return;
label_B2F3:; return;
label_B2F4:; return;
label_B2F5:; return;
label_B2F6:; return;
label_B2F7:; return;
label_B2F8:; return;
label_B2F9:; return;
label_B2FA:; return;
label_B2FB:; return;
label_B2FC:; return;
label_B2FD:; return;
label_B2FE:; return;
label_B2FF:; return;
label_B300:; return;
label_B302:; return;
label_B303:; return;
}

void func_B003_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B003_b1");
#endif
label_B003:;
    /* $B003: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xC0); FLAG_NZ(g_cpu.A);
label_B005:;
    /* $B005: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x8C) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B007:;
    /* $B007: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xD2; FLAG_NZ(g_cpu.A);
label_B009:;
    /* $B009: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB009); return;
}

void func_B960_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B960_b1");
#endif
label_B960:;
    /* $B960: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x1147); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_B963:;
    /* $B963: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B964:;
    /* $B964: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x5A33); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B967:;
    /* $B967: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x5733); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B96A:;
    /* $B96A: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xCD + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B96C:;
    /* $B96C: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x4C) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B96E:;
    /* $B96E: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x34 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B970:;
    /* $B970: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x3457); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B973:;
    /* $B973: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x40; g_cpu.C=(g_cpu.Y>=0x40)?1:0; FLAG_NZ(r&0xFF); }
label_B975:;
    /* $B975: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB975); return;
}

void func_93BD_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_93BD_b1");
#endif
label_93BD:;
    /* $93BD: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_93C0:;
    /* $93C0: 95 */ maybe_trigger_vblank(4); nes_write((0xD3 + g_cpu.X) & 0xFF, g_cpu.A);
label_93C2:;
    /* $93C2: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_93C0;
    }
label_93C4:;
    /* $93C4: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x40 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_93C6:;
    /* $93C6: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x71; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_93C8:;
    /* $93C8: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x1E3F); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_93CB:;
    /* $93CB: C2 */ maybe_trigger_vblank(2); /* NOP */
label_93CD:;
    /* $93CD: FC */ maybe_trigger_vblank(4); (void)nes_read((0x58F7 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_93D0:;
    /* $93D0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_93D2:;
    /* $93D2: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8A24_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A24_b1");
#endif
label_8A24:;
    /* $8A24: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8A26:;
    /* $8A26: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x1B23 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_8A29:;
    /* $8A29: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8A2B:;
    /* $8A2B: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x1B23 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_8A2E:;
    /* $8A2E: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xF7 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A30:;
    /* $8A30: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x0D + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8A32:;
    /* $8A32: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x08 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8A34:;
    /* $8A34: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xF6) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8A36:;
    /* $8A36: 9D */ maybe_trigger_vblank(5); nes_write((0x0D0C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_8A39:;
    /* $8A39: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_8A3A:;
    /* $8A3A: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8A3B:;
    /* $8A3B: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xAC + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8A3D:;
    /* $8A3D: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x4C; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8A3F:;
    /* $8A3F: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xB3) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8A41:;
    /* $8A41: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x437B); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8A44:;
    /* $8A44: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x33) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8A46:;
    /* $8A46: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x1E3B); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A49:;
    /* $8A49: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF1; g_cpu.C=(g_cpu.A>=0xF1)?1:0; FLAG_NZ(r&0xFF); }
label_8A4B:;
    /* $8A4B: DC */ maybe_trigger_vblank(4); (void)nes_read((0x2B7B + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A4E:;
    /* $8A4E: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xDC + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A50:;
    /* $8A50: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xCF4E + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8A53:;
    /* $8A53: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x4E; FLAG_NZ(g_cpu.A);
label_8A55:;
    /* $8A55: CF */ maybe_trigger_vblank(6); { uint16_t a=0xEAB4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8A58:;
    /* $8A58: CF */ maybe_trigger_vblank(6); { uint16_t a=0x0DB2; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8A5B:;
    /* $8A5B: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x53) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8A5D:;
    /* $8A5D: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xAA3A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8A60:;
    /* $8A60: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8A61:;
    /* $8A61: 97 */ maybe_trigger_vblank(4); nes_write((0x3D + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_8A63:;
    /* $8A63: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x63) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8A65:;
    /* $8A65: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_BC71_b1(); return;
}

void func_8DAE_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8DAE_b1");
#endif
label_8DAE:;
    /* $8DAE: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0xC2 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DB0:;
    /* $8DB0: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x6C) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8DB2:;
    /* $8DB2: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8DB4:;
    /* $8DB4: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x3D34 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8DB7:;
    /* $8DB7: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x43) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8DB9:;
    /* $8DB9: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x3D34 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8DBC:;
    /* $8DBC: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x43) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8DBE:;
    /* $8DBE: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x3D34 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8DC1:;
    /* $8DC1: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x7C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8DC3:;
    /* $8DC3: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xF4 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DC5:;
    /* $8DC5: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x7C43 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8DC8:;
    /* $8DC8: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x00 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8DCA:;
    /* $8DCA: DA */ maybe_trigger_vblank(2); /* NOP */
label_8DCB:;
    /* $8DCB: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8DCD:;
    /* $8DCD: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x33 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8DCF:;
    /* $8DCF: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x6473); FLAG_NZ(g_cpu.A);
label_8DD2:;
    /* $8DD2: DA */ maybe_trigger_vblank(2); /* NOP */
label_8DD3:;
    /* $8DD3: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC3 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8DD5:;
    /* $8DD5: 64 */ maybe_trigger_vblank(3); (void)nes_read(0xCF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8DD7:;
    /* $8DD7: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xEC + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_8DD9:;
    /* $8DD9: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xCF4E + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8DDC:;
    /* $8DDC: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xE3 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_8DDE:;
    /* $8DDE: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xB3D3 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DE1:;
    /* $8DE1: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x7339); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8DE4:;
    /* $8DE4: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x613B); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8DE7:;
    /* $8DE7: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xAA) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8DE9:;
    /* $8DE9: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xAB); FLAG_NZ(g_cpu.Y);
label_8DEB:;
    /* $8DEB: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x74 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8DED:;
    /* $8DED: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xC2; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8DEF:;
    /* $8DEF: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xCB + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8DF1:;
    /* $8DF1: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_8DF2:;
    /* $8DF2: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DF4:;
    /* $8DF4: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x4C + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_8DF6:;
    /* $8DF6: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address(0x8D84); return; }
label_8DF8:;
    /* $8DF8: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xC608; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8DFB:;
    /* $8DFB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x8D8A); return; }
label_8DFD:;
    /* $8DFD: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0xC0) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8DFF:;
    /* $8DFF: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0xC3 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8E01:;
    /* $8E01: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8E01); return;
}

void func_80A0_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80A0_b1");
#endif
label_80A0:;
    /* $80A0: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x10; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_80A2:;
    /* $80A2: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x80A2); return;
}

void func_A7FA_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A7FA_b1");
#endif
label_A7FA:;
    /* $A7FA: CF */ maybe_trigger_vblank(6); { uint16_t a=0xCFA2; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A7FD:;
    /* $A7FD: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xEB + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A7FF:;
    /* $A7FF: 4E */ maybe_trigger_vblank(6); { uint16_t a=0xB4CF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A802:;
    /* $A802: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x4EFB); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A805:;
    /* $A805: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xEC + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A807:;
    /* $A807: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xD318 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A80A:;
    /* $A80A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2A3A); FLAG_NZ(g_cpu.A);
label_A80D:;
    /* $A80D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A80E:;
    /* $A80E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x3D; FLAG_NZ(g_cpu.A);
label_A810:;
    /* $A810: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A812:;
    /* $A812: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0xD320); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_A7FF_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A7FF_b1");
#endif
label_A7FF:;
    /* $A7FF: 4E */ maybe_trigger_vblank(6); { uint16_t a=0xB4CF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A802:;
    /* $A802: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x4EFB); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A805:;
    /* $A805: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xEC + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A807:;
    /* $A807: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xD318 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A80A:;
    /* $A80A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2A3A); FLAG_NZ(g_cpu.A);
label_A80D:;
    /* $A80D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A80E:;
    /* $A80E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x3D; FLAG_NZ(g_cpu.A);
label_A810:;
    /* $A810: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A812:;
    /* $A812: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0xD320); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_A804_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A804_b1");
#endif
label_A804:;
    /* $A804: 4E */ maybe_trigger_vblank(6); { uint16_t a=0xECB4; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_A807:;
    /* $A807: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xD318 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A80A:;
    /* $A80A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x2A3A); FLAG_NZ(g_cpu.A);
label_A80D:;
    /* $A80D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A80E:;
    /* $A80E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x3D; FLAG_NZ(g_cpu.A);
label_A810:;
    /* $A810: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A812:;
    /* $A812: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0xD320); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_A809_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A809_b1");
#endif
label_A809:;
    /* $A809: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xAD) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A80B:;
    /* $A80B: 3A */ maybe_trigger_vblank(2); /* NOP */
label_A80C:;
    /* $A80C: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A80D:;
    /* $A80D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A80E:;
    /* $A80E: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x3D; FLAG_NZ(g_cpu.A);
label_A810:;
    /* $A810: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A812:;
    /* $A812: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0xD320); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_A1CC_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A1CC_b1");
#endif
label_A1CC:;
    /* $A1CC: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x52FB + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A1CF:;
    /* $A1CF: DA */ maybe_trigger_vblank(2); /* NOP */
label_A1D0:;
    /* $A1D0: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xEC + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A1D2:;
    /* $A1D2: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xCF4E + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A1D5:;
    /* $A1D5: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xEC + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_A1D7:;
    /* $A1D7: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB777 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A1DA:;
    /* $A1DA: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xF6DE + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A1DD:;
    /* $A1DD: 8D */ maybe_trigger_vblank(4); nes_write(0x7B3B, g_cpu.A);
label_A1E0:;
    /* $A1E0: D9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xEAF3 + g_cpu.Y) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A1E3:;
    /* $A1E3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x77; FLAG_NZ(g_cpu.A);
label_A1E5:;
    /* $A1E5: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x4E; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A1E7:;
    /* $A1E7: DC */ maybe_trigger_vblank(4); (void)nes_read((0x7CB6 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A1EA:;
    /* $A1EA: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xDA72 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A1ED:;
    /* $A1ED: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_A1EE:;
    /* $A1EE: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x58A7); FLAG_NZ(g_cpu.A);
label_A1F1:;
    /* $A1F1: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A1F3:;
    /* $A1F3: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xC2 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A1F5:;
    /* $A1F5: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0xBC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1F7:;
    /* $A1F7: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xC21B + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A1FA:;
    /* $A1FA: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x6C) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A1FC:;
    /* $A1FC: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x1B + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A1FE:;
    /* $A1FE: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A200:;
    /* $A200: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x7D; FLAG_NZ(g_cpu.A);
label_A202:;
    /* $A202: CE */ maybe_trigger_vblank(6); { uint16_t a=0xDDB7; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A205:;
    /* $A205: E1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xC6 + g_cpu.X) & 0xFF)); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A207:;
    /* $A207: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x583F); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A20A:;
    /* $A20A: DB */ maybe_trigger_vblank(7); { uint16_t a=(0xBD35 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A20D:;
    /* $A20D: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x6C + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A20F:;
    /* $A20F: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xD7 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A211:;
    /* $A211: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_A212:;
    /* $A212: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x71 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A214:;
    /* $A214: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A216:;
    /* $A216: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4EDB + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A219:;
    /* $A219: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x6D77 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A21C:;
    /* $A21C: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x75) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A21E:;
    /* $A21E: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xADB6 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A221:;
    /* $A221: F7 */ maybe_trigger_vblank(6); { uint16_t a=(0x77 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A223:;
    /* $A223: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x70); FLAG_NZ(g_cpu.A);
label_A225:;
    /* $A225: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x3E33); FLAG_NZ(g_cpu.A);
label_A228:;
    /* $A228: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x8DF6 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A22B:;
    /* $A22B: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0xDA7B + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A22E:;
    /* $A22E: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x78DF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A231:;
    /* $A231: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x72 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A233:;
    /* $A233: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x4E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A235:;
    /* $A235: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x7C + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A237:;
    /* $A237: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0354 + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A23A:;
    /* $A23A: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x6F5C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A23D:;
    /* $A23D: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_A23E:;
    /* $A23E: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1CC;
    }
label_A240:;
    /* $A240: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xF0C6); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A243:;
    /* $A243: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_A246:;
    /* $A246: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A248:;
    /* $A248: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_A24B:;
    /* $A24B: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x76A4 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A24E:;
    /* $A24E: 91 */ maybe_trigger_vblank(6); nes_write((nes_read16zp(0xDA) + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A250:;
    /* $A250: 6A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=g_cpu.A&1; g_cpu.A=((g_cpu.A>>1)|(c<<7))&0xFF; FLAG_NZ(g_cpu.A); }
label_A251:;
    /* $A251: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A252:;
    /* $A252: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A254:;
    /* $A254: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x3AFB); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A257:;
    /* $A257: CF */ maybe_trigger_vblank(6); { uint16_t a=0x73B1; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A25A:;
    /* $A25A: 27 */ maybe_trigger_vblank(5); { uint16_t a=0xC5; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A25C:;
    /* $A25C: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x0C) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A25E:;
    /* $A25E: 9F */ maybe_trigger_vblank(5); /* ILLEGAL $9F — skip 3 */
label_A261:;
    /* $A261: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x7C) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A263:;
    /* $A263: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xCA08; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A266:;
    /* $A266: DC */ maybe_trigger_vblank(4); (void)nes_read((0x30C7 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A269:;
    /* $A269: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x1C + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A26B:;
    /* $A26B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x4C21 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A26E:;
    /* $A26E: 85 */ maybe_trigger_vblank(3); nes_write(0x5D, g_cpu.A);
label_A270:;
    /* $A270: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A246;
    }
label_A272:;
    /* $A272: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x3C) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A274:;
    /* $A274: FB */ maybe_trigger_vblank(7); { uint16_t a=(0xCC3A + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A277:;
    /* $A277: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0x26 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A279:;
    /* $A279: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_A27A:;
    /* $A27A: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x724D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A27D:;
    /* $A27D: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x109B + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A280:;
    /* $A280: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_A281:;
    /* $A281: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A282:;
    /* $A282: C2 */ maybe_trigger_vblank(2); /* NOP */
label_A284:;
    /* $A284: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address(0xA2F8); return; }
label_A286:;
    /* $A286: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC7); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A288:;
    /* $A288: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_A289:;
    /* $A289: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x5C40); maybe_trigger_vblank(2); call_by_address(_jt); return; }
label_A28C:; return;
label_A28F:; return;
label_A292:; return;
label_A294:; return;
label_A296:; return;
label_A298:; return;
label_A29A:; return;
label_A29C:; return;
label_A29E:; return;
label_A2A0:; return;
label_A2A3:; return;
label_A2A6:; return;
label_A2A8:; return;
label_A2AA:; return;
label_A2AC:; return;
label_A2AE:; return;
label_A2B0:; return;
label_A2B2:; return;
label_A2B5:; return;
label_A2B7:; return;
label_A2BA:; return;
label_A2BC:; return;
label_A2BF:; return;
label_A2C2:; return;
label_A2C4:; return;
label_A2C6:; return;
label_A2C9:; return;
label_A2CB:; return;
label_A2CE:; return;
label_A2D0:; return;
label_A2D3:; return;
label_A2D6:; return;
label_A2D8:; return;
label_A2D9:; return;
label_A2DA:; return;
label_A2DD:; return;
label_A2DF:; return;
label_A2E2:; return;
label_A2E4:; return;
label_A2E7:; return;
label_A2EA:; return;
label_A2EC:; return;
label_A2EF:; return;
label_A2F1:; return;
label_A2F4:; return;
label_A2F6:; return;
label_A2F7:; return;
label_A2F9:; return;
label_A2FB:; return;
label_A2FD:; return;
label_A300:; return;
label_A302:; return;
label_A305:; return;
label_A307:; return;
label_A309:; return;
label_A30B:; return;
label_A30E:; return;
label_A310:; return;
label_A312:; return;
label_A314:; return;
label_A316:; return;
label_A318:; return;
label_A31A:; return;
label_A31D:; return;
label_A31F:; return;
label_A322:; return;
label_A324:; return;
label_A327:; return;
label_A329:; return;
label_A32B:; return;
label_A32D:; return;
label_A330:; return;
label_A333:; return;
label_A335:; return;
label_A338:; return;
label_A33B:; return;
label_A33D:; return;
label_A33F:; return;
label_A342:; return;
label_A344:; return;
label_A345:; return;
label_A346:; return;
label_A347:; return;
label_A349:; return;
label_A34C:; return;
label_A34E:; return;
label_A351:; return;
label_A353:; return;
label_A356:; return;
label_A359:; return;
label_A35B:; return;
label_A35E:; return;
label_A360:; return;
label_A362:; return;
label_A365:; return;
label_A367:; return;
label_A369:; return;
label_A36C:; return;
label_A36F:; return;
label_A371:; return;
label_A372:; return;
label_A374:; return;
label_A377:; return;
label_A379:; return;
label_A37B:; return;
label_A37D:; return;
label_A380:; return;
label_A383:; return;
label_A385:; return;
label_A387:; return;
label_A389:; return;
label_A38B:; return;
label_A38E:; return;
label_A390:; return;
label_A393:; return;
label_A396:; return;
label_A399:; return;
label_A39B:; return;
label_A39E:; return;
label_A3A1:; return;
label_A3A3:; return;
label_A3A5:; return;
label_A3A8:; return;
label_A3AB:; return;
label_A3AE:; return;
label_A3B1:; return;
label_A3B2:; return;
label_A3B4:; return;
label_A3B7:; return;
label_A3B9:; return;
label_A3BC:; return;
label_A3BE:; return;
label_A3C1:; return;
label_A3C3:; return;
label_A3C5:; return;
label_A3C7:; return;
label_A3CA:; return;
label_A3CD:; return;
label_A3CF:; return;
label_A3D1:; return;
label_A3D4:; return;
label_A3D6:; return;
label_A3D9:; return;
label_A3DB:; return;
label_A3DE:; return;
label_A3DF:; return;
label_A3E1:; return;
label_A3E4:; return;
label_A3E7:; return;
label_A3E9:; return;
label_A3EB:; return;
label_A3EE:; return;
label_A3F1:; return;
label_A3F4:; return;
label_A3F6:; return;
label_A3F9:; return;
label_A3FB:; return;
label_A3FD:; return;
label_A3FF:; return;
label_A402:; return;
label_A405:; return;
label_A408:; return;
label_A409:; return;
label_A40B:; return;
label_A40E:; return;
label_A411:; return;
label_A413:; return;
label_A416:; return;
label_A418:; return;
label_A41B:; return;
label_A41D:; return;
label_A420:; return;
label_A423:; return;
label_A425:; return;
label_A428:; return;
label_A42B:; return;
label_A42E:; return;
label_A430:; return;
label_A433:; return;
label_A435:; return;
label_A438:; return;
label_A43A:; return;
label_A43C:; return;
label_A43F:; return;
label_A441:; return;
label_A443:; return;
label_A445:; return;
label_A446:; return;
label_A449:; return;
label_A44C:; return;
label_A44F:; return;
label_A452:; return;
label_A455:; return;
label_A456:; return;
label_A458:; return;
label_A45B:; return;
label_A45D:; return;
label_A460:; return;
label_A462:; return;
label_A465:; return;
label_A467:; return;
label_A46A:; return;
label_A46B:; return;
label_A46D:; return;
label_A46E:; return;
label_A470:; return;
label_A472:; return;
label_A474:; return;
label_A477:; return;
label_A47A:; return;
label_A47D:; return;
label_A47F:; return;
label_A482:; return;
label_A484:; return;
label_A487:; return;
label_A48A:; return;
label_A48B:; return;
label_A48D:; return;
label_A48E:; return;
label_A490:; return;
label_A492:; return;
label_A495:; return;
label_A497:; return;
label_A499:; return;
label_A49B:; return;
label_A49E:; return;
label_A4A0:; return;
label_A4A2:; return;
label_A4A3:; return;
label_A4A6:; return;
label_A4A9:; return;
label_A4AC:; return;
label_A4AF:; return;
label_A4B2:; return;
label_A4B5:; return;
label_A4B7:; return;
label_A4B9:; return;
label_A4BB:; return;
label_A4BC:; return;
label_A4BF:; return;
label_A4C1:; return;
label_A4C4:; return;
label_A4C7:; return;
label_A4CA:; return;
label_A4CD:; return;
label_A4D0:; return;
label_A4D1:; return;
label_A4D3:; return;
label_A4D4:; return;
label_A4D6:; return;
label_A4D7:; return;
label_A4D9:; return;
label_A4DA:; return;
label_A4DC:; return;
label_A4DF:; return;
label_A4E1:; return;
label_A4E2:; return;
label_A4E5:; return;
label_A4E8:; return;
label_A4EB:; return;
label_A4EE:; return;
label_A4F0:; return;
label_A4F3:; return;
label_A4F5:; return;
label_A4F8:; return;
label_A4FB:; return;
label_A4FC:; return;
label_A4FD:; return;
label_A500:; return;
label_A503:; return;
label_A506:; return;
label_A509:; return;
label_A50C:; return;
label_A50D:; return;
label_A50F:; return;
label_A512:; return;
label_A514:; return;
label_A517:; return;
label_A519:; return;
label_A51C:; return;
label_A51E:; return;
label_A521:; return;
label_A524:; return;
label_A526:; return;
label_A528:; return;
label_A52A:; return;
label_A52C:; return;
label_A52E:; return;
label_A530:; return;
label_A532:; return;
label_A534:; return;
label_A537:; return;
label_A539:; return;
label_A53C:; return;
label_A53E:; return;
label_A541:; return;
label_A543:; return;
label_A546:; return;
label_A548:; return;
label_A549:; return;
label_A54B:; return;
label_A54D:; return;
label_A54F:; return;
label_A552:; return;
label_A555:; return;
label_A558:; return;
label_A559:; return;
label_A55B:; return;
label_A55E:; return;
label_A55F:; return;
label_A561:; return;
label_A562:; return;
label_A564:; return;
label_A566:; return;
label_A569:; return;
label_A56B:; return;
label_A56C:; return;
label_A56E:; return;
label_A571:; return;
label_A572:; return;
label_A574:; return;
label_A575:; return;
label_A577:; return;
label_A578:; return;
label_A57A:; return;
label_A57D:; return;
label_A57F:; return;
label_A582:; return;
label_A584:; return;
label_A585:; return;
label_A588:; return;
label_A58B:; return;
label_A58D:; return;
label_A590:; return;
label_A592:; return;
label_A595:; return;
label_A597:; return;
label_A59A:; return;
label_A59D:; return;
label_A59E:; return;
label_A5A0:; return;
label_A5A1:; return;
label_A5A3:; return;
label_A5A4:; return;
label_A5A6:; return;
label_A5A7:; return;
label_A5A9:; return;
label_A5AA:; return;
label_A5AB:; return;
label_A5AC:; return;
label_A5AE:; return;
label_A5B1:; return;
label_A5B4:; return;
label_A5B6:; return;
label_A5B9:; return;
label_A5BC:; return;
label_A5BE:; return;
label_A5C0:; return;
label_A5C3:; return;
label_A5C5:; return;
label_A5C7:; return;
label_A5C9:; return;
label_A5CC:; return;
label_A5CE:; return;
label_A5D1:; return;
label_A5D2:; return;
label_A5D4:; return;
label_A5D6:; return;
label_A5D9:; return;
label_A5DB:; return;
label_A5DE:; return;
label_A5E0:; return;
label_A5E1:; return;
label_A5E3:; return;
label_A5E6:; return;
label_A5E7:; return;
label_A5EA:; return;
label_A5EB:; return;
label_A5ED:; return;
label_A5EF:; return;
label_A5F1:; return;
label_A5F3:; return;
label_A5F6:; return;
label_A5F8:; return;
label_A5FA:; return;
label_A5FB:; return;
label_A5FD:; return;
label_A600:; return;
label_A601:; return;
label_A603:; return;
label_A606:; return;
label_A609:; return;
label_A60B:; return;
label_A60D:; return;
label_A60F:; return;
label_A611:; return;
label_A613:; return;
label_A615:; return;
label_A618:; return;
label_A61A:; return;
label_A61C:; return;
label_A61E:; return;
label_A620:; return;
label_A622:; return;
label_A625:; return;
label_A627:; return;
label_A629:; return;
label_A62C:; return;
label_A62F:; return;
label_A632:; return;
label_A634:; return;
label_A636:; return;
label_A638:; return;
label_A63A:; return;
label_A63C:; return;
label_A63E:; return;
label_A641:; return;
label_A643:; return;
label_A645:; return;
label_A648:; return;
label_A64B:; return;
label_A64D:; return;
label_A650:; return;
label_A652:; return;
label_A655:; return;
label_A658:; return;
label_A65B:; return;
label_A65E:; return;
label_A65F:; return;
label_A661:; return;
label_A664:; return;
label_A666:; return;
label_A669:; return;
label_A66B:; return;
label_A66E:; return;
label_A670:; return;
label_A673:; return;
label_A674:; return;
label_A675:; return;
label_A677:; return;
label_A679:; return;
label_A67C:; return;
label_A67E:; return;
label_A680:; return;
label_A683:; return;
label_A685:; return;
label_A688:; return;
label_A68B:; return;
label_A68D:; return;
label_A690:; return;
label_A692:; return;
label_A695:; return;
label_A698:; return;
label_A69A:; return;
label_A69D:; return;
label_A69F:; return;
label_A6A1:; return;
label_A6A3:; return;
label_A6A6:; return;
label_A6A8:; return;
label_A6AB:; return;
label_A6AD:; return;
label_A6AF:; return;
label_A6B1:; return;
label_A6B3:; return;
label_A6B5:; return;
label_A6B8:; return;
label_A6BB:; return;
label_A6BD:; return;
label_A6C0:; return;
label_A6C2:; return;
label_A6C5:; return;
label_A6C7:; return;
label_A6CA:; return;
label_A6CC:; return;
label_A6CF:; return;
label_A6D2:; return;
label_A6D5:; return;
label_A6D8:; return;
label_A6DA:; return;
label_A6DC:; return;
label_A6DD:; return;
label_A6DF:; return;
label_A6E2:; return;
label_A6E4:; return;
label_A6E6:; return;
label_A6E8:; return;
label_A6EA:; return;
label_A6ED:; return;
label_A6EE:; return;
label_A6F0:; return;
label_A6F1:; return;
label_A6F4:; return;
label_A6F6:; return;
label_A6F9:; return;
label_A6FB:; return;
label_A6FE:; return;
label_A700:; return;
label_A703:; return;
label_A705:; return;
label_A707:; return;
label_A708:; return;
label_A709:; return;
label_A70A:; return;
label_A70C:; return;
label_A70E:; return;
label_A711:; return;
label_A713:; return;
label_A716:; return;
label_A718:; return;
label_A71B:; return;
label_A71D:; return;
label_A720:; return;
label_A722:; return;
label_A724:; return;
label_A726:; return;
label_A729:; return;
label_A72C:; return;
label_A72F:; return;
label_A732:; return;
label_A734:; return;
label_A737:; return;
label_A73A:; return;
label_A73C:; return;
label_A73F:; return;
label_A742:; return;
label_A744:; return;
label_A747:; return;
label_A74A:; return;
label_A74D:; return;
label_A74F:; return;
label_A750:; return;
label_A752:; return;
label_A754:; return;
label_A755:; return;
label_A756:; return;
label_A758:; return;
label_A75B:; return;
label_A75D:; return;
label_A75E:; return;
label_A761:; return;
label_A762:; return;
label_A764:; return;
label_A767:; return;
label_A769:; return;
label_A76B:; return;
label_A76C:; return;
label_A76E:; return;
label_A770:; return;
label_A772:; return;
label_A774:; return;
label_A776:; return;
label_A778:; return;
label_A77A:; return;
label_A77C:; return;
label_A77F:; return;
label_A782:; return;
label_A785:; return;
label_A787:; return;
label_A78A:; return;
label_A78D:; return;
label_A790:; return;
label_A793:; return;
label_A795:; return;
label_A797:; return;
label_A79A:; return;
label_A79D:; return;
label_A79F:; return;
label_A7A1:; return;
label_A7A3:; return;
label_A7A6:; return;
label_A7A9:; return;
label_A7AB:; return;
label_A7AD:; return;
label_A7AF:; return;
label_A7B2:; return;
label_A7B4:; return;
label_A7B7:; return;
label_A7B9:; return;
label_A7BC:; return;
label_A7BE:; return;
label_A7C1:; return;
label_A7C2:; return;
label_A7C3:; return;
label_A7C4:; return;
label_A7C6:; return;
label_A7C9:; return;
label_A7CB:; return;
label_A7CE:; return;
label_A7D0:; return;
label_A7D3:; return;
label_A7D5:; return;
label_A7D8:; return;
label_A7DA:; return;
label_A7DC:; return;
label_A7DE:; return;
label_A7E1:; return;
label_A7E4:; return;
label_A7E7:; return;
label_A7E9:; return;
label_A7EC:; return;
label_A7EE:; return;
label_A7F0:; return;
label_A7F3:; return;
label_A7F5:; return;
label_A7F8:; return;
label_A7FB:; return;
label_A7FD:; return;
label_A7FF:; return;
label_A802:; return;
label_A805:; return;
label_A807:; return;
label_A80A:; return;
label_A80D:; return;
label_A80E:; return;
label_A810:; return;
label_A812:; return;
label_A815:; return;
label_A817:; return;
label_A819:; return;
label_A81C:; return;
label_A81E:; return;
label_A820:; return;
label_A823:; return;
label_A826:; return;
label_A828:; return;
label_A82A:; return;
label_A82D:; return;
label_A830:; return;
label_A833:; return;
label_A835:; return;
label_A837:; return;
label_A838:; return;
label_A83B:; return;
label_A83D:; return;
label_A83F:; return;
label_A842:; return;
label_A844:; return;
label_A847:; return;
label_A849:; return;
label_A84C:; return;
label_A84F:; return;
label_A851:; return;
label_A854:; return;
label_A856:; return;
label_A859:; return;
label_A85B:; return;
label_A85D:; return;
label_A85F:; return;
label_A861:; return;
label_A863:; return;
label_A864:; return;
label_A866:; return;
label_A869:; return;
label_A86C:; return;
label_A86E:; return;
label_A871:; return;
label_A873:; return;
label_A876:; return;
label_A878:; return;
label_A87B:; return;
label_A87D:; return;
label_A880:; return;
label_A881:; return;
label_A882:; return;
label_A883:; return;
label_A885:; return;
label_A887:; return;
label_A889:; return;
label_A88B:; return;
label_A88E:; return;
label_A890:; return;
label_A893:; return;
label_A895:; return;
label_A896:; return;
label_A899:; return;
label_A89B:; return;
label_A89E:; return;
label_A8A1:; return;
label_A8A3:; return;
label_A8A4:; return;
label_A8A6:; return;
label_A8A8:; return;
label_A8A9:; return;
label_A8AC:; return;
label_A8AE:; return;
label_A8B0:; return;
label_A8B2:; return;
label_A8B4:; return;
label_A8B6:; return;
label_A8B8:; return;
label_A8BA:; return;
label_A8BC:; return;
label_A8BE:; return;
label_A8BF:; return;
label_A8C2:; return;
label_A8C5:; return;
label_A8C7:; return;
label_A8CA:; return;
label_A8CD:; return;
label_A8CF:; return;
label_A8D0:; return;
label_A8D3:; return;
label_A8D5:; return;
label_A8D6:; return;
label_A8D7:; return;
label_A8D8:; return;
label_A8D9:; return;
label_A8DA:; return;
label_A8DC:; return;
label_A8DF:; return;
label_A8E1:; return;
label_A8E3:; return;
label_A8E5:; return;
label_A8E7:; return;
label_A8E9:; return;
label_A8EB:; return;
label_A8ED:; return;
label_A8F0:; return;
label_A8F2:; return;
label_A8F5:; return;
label_A8F7:; return;
label_A8F9:; return;
label_A8FB:; return;
label_A8FD:; return;
label_A900:; return;
label_A902:; return;
label_A905:; return;
label_A907:; return;
label_A90A:; return;
label_A90D:; return;
label_A90F:; return;
label_A911:; return;
label_A913:; return;
label_A915:; return;
label_A916:; return;
label_A918:; return;
label_A919:; return;
label_A91B:; return;
label_A91D:; return;
label_A91E:; return;
label_A91F:; return;
label_A921:; return;
label_A922:; return;
label_A925:; return;
label_A927:; return;
label_A92A:; return;
label_A92B:; return;
label_A92C:; return;
label_A92F:; return;
label_A930:; return;
label_A932:; return;
label_A933:; return;
label_A935:; return;
label_A936:; return;
label_A939:; return;
label_A93B:; return;
label_A93E:; return;
label_A93F:; return;
label_A941:; return;
label_A942:; return;
label_A944:; return;
label_A946:; return;
label_A948:; return;
label_A94A:; return;
label_A94B:; return;
label_A94D:; return;
label_A94E:; return;
label_A950:; return;
label_A952:; return;
label_A954:; return;
label_A955:; return;
label_A957:; return;
label_A95A:; return;
label_A95C:; return;
label_A95D:; return;
label_A95F:; return;
label_A960:; return;
label_A963:; return;
label_A964:; return;
label_A965:; return;
label_A967:; return;
label_A968:; return;
label_A969:; return;
label_A96A:; return;
label_A96C:; return;
label_A96F:; return;
label_A970:; return;
label_A971:; return;
label_A973:; return;
label_A976:; return;
label_A978:; return;
label_A979:; return;
label_A97A:; return;
label_A97C:; return;
label_A97F:; return;
label_A981:; return;
label_A984:; return;
label_A986:; return;
label_A987:; return;
label_A988:; return;
label_A98A:; return;
label_A98D:; return;
label_A98F:; return;
label_A991:; return;
label_A993:; return;
label_A995:; return;
label_A997:; return;
label_A99A:; return;
label_A99D:; return;
label_A99E:; return;
label_A9A0:; return;
label_A9A2:; return;
label_A9A5:; return;
label_A9A7:; return;
label_A9AA:; return;
label_A9AC:; return;
label_A9AF:; return;
label_A9B1:; return;
label_A9B3:; return;
label_A9B6:; return;
label_A9B8:; return;
label_A9BB:; return;
label_A9BC:; return;
label_A9BF:; return;
label_A9C0:; return;
label_A9C3:; return;
label_A9C4:; return;
label_A9C6:; return;
label_A9C8:; return;
label_A9CA:; return;
label_A9CC:; return;
label_A9CE:; return;
label_A9D0:; return;
label_A9D2:; return;
label_A9D4:; return;
label_A9D5:; return;
label_A9D7:; return;
label_A9D9:; return;
label_A9DC:; return;
label_A9DE:; return;
label_A9E0:; return;
label_A9E3:; return;
label_A9E5:; return;
label_A9E7:; return;
label_A9E9:; return;
label_A9EC:; return;
label_A9EE:; return;
label_A9F0:; return;
label_A9F2:; return;
label_A9F5:; return;
label_A9F8:; return;
label_A9FA:; return;
label_A9FC:; return;
label_A9FE:; return;
label_AA00:; return;
label_AA02:; return;
label_AA04:; return;
label_AA06:; return;
label_AA07:; return;
label_AA09:; return;
label_AA0A:; return;
label_AA0B:; return;
label_AA0C:; return;
label_AA0D:; return;
label_AA0E:; return;
label_AA0F:; return;
label_AA10:; return;
label_AA11:; return;
label_AA12:; return;
label_AA13:; return;
label_AA14:; return;
label_AA16:; return;
label_AA19:; return;
label_AA1B:; return;
label_AA1C:; return;
label_AA1E:; return;
label_AA1F:; return;
label_AA22:; return;
label_AA24:; return;
label_AA26:; return;
label_AA28:; return;
label_AA2B:; return;
label_AA2D:; return;
label_AA30:; return;
label_AA31:; return;
label_AA34:; return;
label_AA36:; return;
label_AA38:; return;
label_AA3B:; return;
label_AA3E:; return;
label_AA41:; return;
label_AA43:; return;
label_AA45:; return;
label_AA47:; return;
label_AA49:; return;
label_AA4C:; return;
label_AA4F:; return;
label_AA51:; return;
label_AA53:; return;
label_AA55:; return;
label_AA58:; return;
label_AA5A:; return;
label_AA5D:; return;
label_AA5F:; return;
label_AA61:; return;
label_AA63:; return;
label_AA65:; return;
label_AA68:; return;
label_AA6A:; return;
label_AA6C:; return;
label_AA6F:; return;
label_AA71:; return;
label_AA73:; return;
label_AA75:; return;
label_AA77:; return;
label_AA79:; return;
label_AA7C:; return;
label_AA7E:; return;
label_AA80:; return;
label_AA82:; return;
label_AA85:; return;
label_AA87:; return;
label_AA89:; return;
label_AA8B:; return;
label_AA8E:; return;
label_AA8F:; return;
label_AA91:; return;
label_AA93:; return;
label_AA94:; return;
label_AA95:; return;
label_AA96:; return;
label_AA98:; return;
label_AA99:; return;
label_AA9A:; return;
label_AA9B:; return;
label_AA9C:; return;
label_AA9D:; return;
label_AAA0:; return;
label_AAA2:; return;
label_AAA5:; return;
label_AAA6:; return;
label_AAA7:; return;
label_AAA9:; return;
label_AAAC:; return;
label_AAAD:; return;
label_AAAF:; return;
label_AAB2:; return;
label_AAB4:; return;
label_AAB7:; return;
label_AAB9:; return;
label_AABC:; return;
label_AABF:; return;
label_AAC1:; return;
label_AAC3:; return;
label_AAC5:; return;
label_AAC6:; return;
label_AAC8:; return;
label_AACB:; return;
label_AACE:; return;
label_AAD0:; return;
label_AAD2:; return;
label_AAD4:; return;
label_AAD7:; return;
label_AADA:; return;
label_AADC:; return;
label_AADE:; return;
label_AADF:; return;
label_AAE1:; return;
label_AAE3:; return;
label_AAE5:; return;
label_AAE7:; return;
label_AAEA:; return;
label_AAEC:; return;
label_AAEE:; return;
label_AAEF:; return;
label_AAF0:; return;
label_AAF2:; return;
label_AAF4:; return;
label_AAF7:; return;
label_AAF9:; return;
label_AAFC:; return;
label_AAFE:; return;
label_AB01:; return;
label_AB03:; return;
label_AB06:; return;
label_AB08:; return;
label_AB09:; return;
label_AB0B:; return;
label_AB0E:; return;
label_AB11:; return;
label_AB12:; return;
label_AB13:; return;
label_AB14:; return;
label_AB15:; return;
label_AB16:; return;
label_AB17:; return;
label_AB18:; return;
label_AB19:; return;
label_AB1C:; return;
label_AB1E:; return;
label_AB21:; return;
label_AB23:; return;
label_AB25:; return;
label_AB28:; return;
label_AB2B:; return;
label_AB2D:; return;
label_AB2F:; return;
label_AB32:; return;
label_AB35:; return;
label_AB37:; return;
label_AB39:; return;
label_AB3C:; return;
label_AB3E:; return;
label_AB40:; return;
label_AB43:; return;
label_AB45:; return;
label_AB46:; return;
label_AB48:; return;
label_AB4A:; return;
label_AB4C:; return;
label_AB4D:; return;
label_AB50:; return;
label_AB53:; return;
label_AB55:; return;
label_AB57:; return;
label_AB59:; return;
label_AB5B:; return;
label_AB5D:; return;
label_AB5E:; return;
label_AB61:; return;
label_AB63:; return;
label_AB65:; return;
label_AB67:; return;
label_AB69:; return;
label_AB6C:; return;
label_AB6D:; return;
label_AB6F:; return;
label_AB71:; return;
label_AB73:; return;
label_AB76:; return;
label_AB78:; return;
label_AB7B:; return;
label_AB7D:; return;
label_AB80:; return;
label_AB83:; return;
label_AB85:; return;
label_AB87:; return;
label_AB8A:; return;
label_AB8C:; return;
label_AB8D:; return;
label_AB90:; return;
label_AB93:; return;
label_AB95:; return;
label_AB97:; return;
label_AB98:; return;
label_AB99:; return;
label_AB9A:; return;
label_AB9B:; return;
label_AB9C:; return;
label_AB9D:; return;
label_AB9E:; return;
label_AB9F:; return;
label_ABA0:; return;
label_ABA1:; return;
label_ABA2:; return;
label_ABA3:; return;
label_ABA4:; return;
label_ABA6:; return;
label_ABA8:; return;
label_ABAA:; return;
label_ABAC:; return;
label_ABAE:; return;
label_ABB1:; return;
label_ABB2:; return;
label_ABB5:; return;
label_ABB8:; return;
label_ABBA:; return;
label_ABBC:; return;
label_ABBE:; return;
label_ABC1:; return;
label_ABC4:; return;
label_ABC6:; return;
label_ABC8:; return;
label_ABC9:; return;
label_ABCB:; return;
label_ABCC:; return;
label_ABCF:; return;
label_ABD1:; return;
label_ABD3:; return;
label_ABD5:; return;
label_ABD8:; return;
label_ABDB:; return;
label_ABDD:; return;
label_ABDF:; return;
label_ABE1:; return;
label_ABE3:; return;
label_ABE6:; return;
label_ABE9:; return;
label_ABEB:; return;
label_ABED:; return;
label_ABEF:; return;
label_ABF1:; return;
label_ABF4:; return;
label_ABF7:; return;
label_ABF9:; return;
label_ABFC:; return;
label_ABFE:; return;
label_AC01:; return;
label_AC04:; return;
label_AC05:; return;
label_AC08:; return;
label_AC0A:; return;
label_AC0D:; return;
label_AC0F:; return;
label_AC10:; return;
label_AC12:; return;
label_AC13:; return;
label_AC16:; return;
label_AC18:; return;
label_AC1B:; return;
label_AC1D:; return;
label_AC1E:; return;
label_AC20:; return;
label_AC23:; return;
label_AC25:; return;
label_AC28:; return;
label_AC29:; return;
label_AC2A:; return;
label_AC2B:; return;
label_AC2E:; return;
label_AC2F:; return;
label_AC30:; return;
label_AC33:; return;
label_AC35:; return;
label_AC36:; return;
label_AC37:; return;
label_AC38:; return;
label_AC39:; return;
label_AC3A:; return;
label_AC3C:; return;
label_AC3E:; return;
label_AC41:; return;
label_AC42:; return;
label_AC44:; return;
label_AC47:; return;
label_AC4A:; return;
label_AC4D:; return;
label_AC50:; return;
label_AC53:; return;
label_AC56:; return;
label_AC57:; return;
label_AC5A:; return;
label_AC5C:; return;
label_AC5D:; return;
label_AC60:; return;
label_AC62:; return;
label_AC64:; return;
label_AC65:; return;
label_AC68:; return;
label_AC6A:; return;
label_AC6C:; return;
label_AC6F:; return;
label_AC71:; return;
label_AC74:; return;
label_AC77:; return;
label_AC79:; return;
label_AC7A:; return;
label_AC7D:; return;
label_AC80:; return;
label_AC82:; return;
label_AC85:; return;
label_AC88:; return;
label_AC8A:; return;
label_AC8B:; return;
label_AC8D:; return;
label_AC90:; return;
label_AC92:; return;
label_AC95:; return;
label_AC98:; return;
label_AC99:; return;
label_AC9C:; return;
label_AC9E:; return;
label_ACA0:; return;
label_ACA2:; return;
label_ACA4:; return;
label_ACA7:; return;
label_ACA9:; return;
label_ACAB:; return;
label_ACAD:; return;
label_ACAF:; return;
label_ACB1:; return;
label_ACB3:; return;
label_ACB6:; return;
label_ACB8:; return;
label_ACBA:; return;
label_ACBC:; return;
label_ACBF:; return;
label_ACC1:; return;
label_ACC3:; return;
label_ACC6:; return;
label_ACC8:; return;
label_ACCA:; return;
label_ACCC:; return;
label_ACCE:; return;
label_ACD0:; return;
label_ACD1:; return;
label_ACD2:; return;
label_ACD4:; return;
label_ACD5:; return;
label_ACD8:; return;
label_ACDA:; return;
label_ACDD:; return;
label_ACDE:; return;
label_ACE0:; return;
label_ACE2:; return;
label_ACE4:; return;
label_ACE7:; return;
label_ACE9:; return;
label_ACEC:; return;
label_ACED:; return;
label_ACEF:; return;
label_ACF2:; return;
label_ACF4:; return;
label_ACF7:; return;
label_ACF9:; return;
label_ACFC:; return;
label_ACFE:; return;
label_AD01:; return;
label_AD03:; return;
label_AD06:; return;
label_AD07:; return;
label_AD09:; return;
label_AD0C:; return;
label_AD0F:; return;
label_AD11:; return;
label_AD13:; return;
label_AD15:; return;
label_AD18:; return;
label_AD1A:; return;
label_AD1C:; return;
label_AD1D:; return;
label_AD1E:; return;
label_AD1F:; return;
label_AD22:; return;
label_AD23:; return;
label_AD24:; return;
label_AD27:; return;
label_AD28:; return;
label_AD2A:; return;
label_AD2C:; return;
label_AD2E:; return;
label_AD2F:; return;
label_AD30:; return;
label_AD32:; return;
label_AD33:; return;
label_AD35:; return;
label_AD36:; return;
label_AD39:; return;
label_AD3A:; return;
label_AD3B:; return;
label_AD3E:; return;
label_AD3F:; return;
label_AD40:; return;
label_AD43:; return;
label_AD44:; return;
label_AD45:; return;
label_AD47:; return;
label_AD48:; return;
label_AD49:; return;
label_AD4A:; return;
label_AD4B:; return;
label_AD4D:; return;
label_AD50:; return;
label_AD52:; return;
label_AD54:; return;
label_AD57:; return;
label_AD58:; return;
label_AD5A:; return;
label_AD5B:; return;
label_AD5E:; return;
label_AD61:; return;
label_AD62:; return;
label_AD65:; return;
label_AD68:; return;
label_AD6A:; return;
label_AD6C:; return;
label_AD6F:; return;
label_AD71:; return;
label_AD73:; return;
label_AD74:; return;
label_AD77:; return;
label_AD78:; return;
label_AD7B:; return;
label_AD7D:; return;
label_AD7F:; return;
label_AD81:; return;
label_AD83:; return;
label_AD85:; return;
label_AD87:; return;
label_AD88:; return;
label_AD8B:; return;
label_AD8D:; return;
label_AD90:; return;
label_AD92:; return;
label_AD94:; return;
label_AD96:; return;
label_AD98:; return;
label_AD9A:; return;
label_AD9C:; return;
label_AD9D:; return;
label_AD9E:; return;
label_ADA0:; return;
label_ADA2:; return;
label_ADA5:; return;
label_ADA7:; return;
label_ADA8:; return;
label_ADAB:; return;
label_ADAD:; return;
label_ADAF:; return;
label_ADB1:; return;
label_ADB3:; return;
label_ADB5:; return;
label_ADB8:; return;
label_ADBA:; return;
label_ADBC:; return;
label_ADBE:; return;
label_ADC0:; return;
label_ADC3:; return;
label_ADC5:; return;
label_ADC8:; return;
label_ADCB:; return;
label_ADCD:; return;
label_ADD0:; return;
label_ADD1:; return;
label_ADD3:; return;
label_ADD5:; return;
label_ADD6:; return;
label_ADD7:; return;
label_ADD8:; return;
label_ADDB:; return;
label_ADDD:; return;
label_ADE0:; return;
label_ADE2:; return;
label_ADE5:; return;
label_ADE7:; return;
label_ADE8:; return;
label_ADEA:; return;
label_ADEC:; return;
label_ADED:; return;
label_ADEF:; return;
label_ADF1:; return;
label_ADF4:; return;
label_ADF7:; return;
label_ADFA:; return;
label_ADFD:; return;
label_ADFF:; return;
label_AE02:; return;
label_AE04:; return;
label_AE07:; return;
label_AE09:; return;
label_AE0B:; return;
label_AE0E:; return;
label_AE10:; return;
label_AE13:; return;
label_AE15:; return;
label_AE17:; return;
label_AE1A:; return;
label_AE1C:; return;
label_AE1E:; return;
label_AE20:; return;
label_AE22:; return;
label_AE23:; return;
label_AE25:; return;
label_AE28:; return;
label_AE2A:; return;
label_AE2C:; return;
label_AE2E:; return;
label_AE30:; return;
label_AE33:; return;
label_AE34:; return;
label_AE36:; return;
label_AE39:; return;
label_AE3C:; return;
label_AE3D:; return;
label_AE40:; return;
label_AE42:; return;
label_AE44:; return;
label_AE45:; return;
label_AE47:; return;
label_AE4A:; return;
label_AE4C:; return;
label_AE4D:; return;
label_AE4E:; return;
label_AE51:; return;
label_AE54:; return;
label_AE55:; return;
label_AE56:; return;
label_AE57:; return;
label_AE58:; return;
label_AE59:; return;
label_AE5A:; return;
label_AE5C:; return;
label_AE5D:; return;
label_AE5E:; return;
label_AE5F:; return;
label_AE60:; return;
label_AE62:; return;
label_AE65:; return;
label_AE67:; return;
label_AE6A:; return;
label_AE6C:; return;
label_AE6E:; return;
label_AE71:; return;
label_AE73:; return;
label_AE75:; return;
label_AE78:; return;
label_AE7A:; return;
label_AE7B:; return;
label_AE7D:; return;
label_AE80:; return;
label_AE82:; return;
label_AE85:; return;
label_AE87:; return;
label_AE8A:; return;
label_AE8C:; return;
label_AE8F:; return;
label_AE92:; return;
label_AE95:; return;
label_AE97:; return;
label_AE9A:; return;
label_AE9C:; return;
label_AE9E:; return;
label_AEA1:; return;
label_AEA4:; return;
label_AEA6:; return;
label_AEA8:; return;
label_AEAB:; return;
label_AEAD:; return;
label_AEAE:; return;
label_AEB0:; return;
label_AEB3:; return;
label_AEB4:; return;
label_AEB5:; return;
label_AEB8:; return;
label_AEBB:; return;
label_AEBE:; return;
label_AEBF:; return;
label_AEC1:; return;
label_AEC4:; return;
label_AEC7:; return;
label_AEC8:; return;
label_AEC9:; return;
label_AECA:; return;
label_AECB:; return;
label_AECC:; return;
label_AECD:; return;
label_AECE:; return;
label_AECF:; return;
label_AED0:; return;
label_AED1:; return;
label_AED2:; return;
label_AED3:; return;
label_AED4:; return;
label_AED5:; return;
label_AED7:; return;
label_AED8:; return;
label_AED9:; return;
label_AEDA:; return;
label_AEDB:; return;
label_AEDC:; return;
label_AEDD:; return;
label_AEDE:; return;
label_AEE0:; return;
label_AEE2:; return;
label_AEE4:; return;
label_AEE5:; return;
label_AEE6:; return;
label_AEE8:; return;
label_AEEB:; return;
label_AEED:; return;
label_AEEF:; return;
label_AEF1:; return;
label_AEF3:; return;
label_AEF6:; return;
label_AEF9:; return;
label_AEFC:; return;
label_AEFE:; return;
label_AF01:; return;
label_AF03:; return;
label_AF05:; return;
label_AF07:; return;
label_AF09:; return;
label_AF0B:; return;
label_AF0E:; return;
label_AF0F:; return;
label_AF12:; return;
label_AF13:; return;
label_AF15:; return;
label_AF17:; return;
label_AF19:; return;
label_AF1A:; return;
label_AF1D:; return;
label_AF1F:; return;
label_AF21:; return;
label_AF23:; return;
label_AF26:; return;
label_AF28:; return;
label_AF2A:; return;
label_AF2C:; return;
label_AF2D:; return;
label_AF2F:; return;
label_AF31:; return;
label_AF33:; return;
label_AF36:; return;
label_AF38:; return;
label_AF3A:; return;
label_AF3C:; return;
label_AF3F:; return;
label_AF42:; return;
label_AF44:; return;
label_AF45:; return;
label_AF47:; return;
label_AF4A:; return;
label_AF4C:; return;
label_AF4F:; return;
label_AF50:; return;
label_AF51:; return;
label_AF54:; return;
label_AF56:; return;
label_AF58:; return;
label_AF5B:; return;
label_AF5D:; return;
label_AF5F:; return;
label_AF62:; return;
label_AF64:; return;
label_AF67:; return;
label_AF69:; return;
label_AF6B:; return;
label_AF6D:; return;
label_AF6F:; return;
label_AF70:; return;
label_AF73:; return;
label_AF75:; return;
label_AF78:; return;
label_AF7A:; return;
label_AF7B:; return;
label_AF7D:; return;
label_AF80:; return;
label_AF83:; return;
label_AF85:; return;
label_AF87:; return;
label_AF89:; return;
label_AF8B:; return;
label_AF8E:; return;
label_AF90:; return;
label_AF93:; return;
label_AF96:; return;
label_AF98:; return;
label_AF99:; return;
label_AF9B:; return;
label_AF9E:; return;
label_AFA0:; return;
label_AFA3:; return;
label_AFA5:; return;
label_AFA7:; return;
label_AFA9:; return;
label_AFAB:; return;
label_AFAD:; return;
label_AFAF:; return;
label_AFB1:; return;
label_AFB4:; return;
label_AFB6:; return;
label_AFB9:; return;
label_AFBB:; return;
label_AFBD:; return;
label_AFC0:; return;
label_AFC2:; return;
label_AFC4:; return;
label_AFC5:; return;
label_AFC8:; return;
label_AFCB:; return;
label_AFCC:; return;
label_AFCD:; return;
label_AFCE:; return;
label_AFCF:; return;
label_AFD0:; return;
label_AFD1:; return;
label_AFD2:; return;
label_AFD3:; return;
label_AFD4:; return;
label_AFD5:; return;
label_AFD6:; return;
label_AFD7:; return;
label_AFD9:; return;
label_AFDA:; return;
label_AFDB:; return;
label_AFDD:; return;
label_AFDE:; return;
label_AFDF:; return;
label_AFE0:; return;
label_AFE3:; return;
label_AFE5:; return;
label_AFE6:; return;
label_AFE7:; return;
label_AFEA:; return;
label_AFEC:; return;
label_AFEF:; return;
label_AFF0:; return;
label_AFF2:; return;
label_AFF4:; return;
label_AFF5:; return;
label_AFF7:; return;
label_AFFA:; return;
label_AFFC:; return;
label_AFFF:; return;
label_B001:; return;
label_B004:; return;
label_B006:; return;
label_B009:; return;
label_B00A:; return;
label_B00D:; return;
label_B010:; return;
label_B013:; return;
label_B015:; return;
label_B016:; return;
label_B018:; return;
label_B01A:; return;
label_B01D:; return;
label_B01F:; return;
label_B022:; return;
label_B025:; return;
label_B028:; return;
label_B02A:; return;
label_B02C:; return;
label_B02E:; return;
label_B030:; return;
label_B033:; return;
label_B035:; return;
label_B037:; return;
label_B03A:; return;
label_B03C:; return;
label_B03F:; return;
label_B040:; return;
label_B042:; return;
label_B043:; return;
label_B045:; return;
label_B048:; return;
label_B04B:; return;
label_B04E:; return;
label_B04F:; return;
label_B050:; return;
label_B052:; return;
label_B055:; return;
label_B058:; return;
label_B059:; return;
label_B05A:; return;
label_B05B:; return;
label_B05D:; return;
label_B05E:; return;
label_B05F:; return;
label_B060:; return;
label_B061:; return;
label_B062:; return;
label_B063:; return;
label_B064:; return;
label_B065:; return;
label_B066:; return;
label_B067:; return;
label_B068:; return;
label_B069:; return;
label_B06B:; return;
label_B06E:; return;
label_B06F:; return;
label_B071:; return;
label_B073:; return;
label_B075:; return;
label_B078:; return;
label_B079:; return;
label_B07B:; return;
label_B07C:; return;
label_B07F:; return;
label_B081:; return;
label_B084:; return;
label_B087:; return;
label_B08A:; return;
label_B08C:; return;
label_B08D:; return;
label_B08F:; return;
label_B092:; return;
label_B093:; return;
label_B095:; return;
label_B098:; return;
label_B09B:; return;
label_B09E:; return;
label_B0A0:; return;
label_B0A3:; return;
label_B0A5:; return;
label_B0A8:; return;
label_B0AA:; return;
label_B0AC:; return;
label_B0AD:; return;
label_B0B0:; return;
label_B0B2:; return;
label_B0B4:; return;
label_B0B7:; return;
label_B0BA:; return;
label_B0BC:; return;
label_B0BE:; return;
label_B0C0:; return;
label_B0C3:; return;
label_B0C4:; return;
label_B0C7:; return;
label_B0C9:; return;
label_B0CC:; return;
label_B0CE:; return;
label_B0D1:; return;
label_B0D3:; return;
label_B0D6:; return;
label_B0D8:; return;
label_B0DA:; return;
label_B0DD:; return;
label_B0DF:; return;
label_B0E1:; return;
label_B0E2:; return;
label_B0E4:; return;
label_B0E5:; return;
label_B0E6:; return;
label_B0E7:; return;
label_B0E8:; return;
label_B0E9:; return;
label_B0EA:; return;
label_B0EB:; return;
label_B0EC:; return;
label_B0ED:; return;
label_B0EE:; return;
label_B0EF:; return;
label_B0F0:; return;
label_B0F2:; return;
label_B0F5:; return;
label_B0F7:; return;
label_B0FA:; return;
label_B0FC:; return;
label_B0FF:; return;
label_B102:; return;
label_B104:; return;
label_B107:; return;
label_B10A:; return;
label_B10C:; return;
label_B10F:; return;
label_B112:; return;
label_B115:; return;
label_B118:; return;
label_B11A:; return;
label_B11C:; return;
label_B11F:; return;
label_B121:; return;
label_B124:; return;
label_B126:; return;
label_B128:; return;
label_B12A:; return;
label_B12B:; return;
label_B12E:; return;
label_B12F:; return;
label_B131:; return;
label_B133:; return;
label_B136:; return;
label_B137:; return;
label_B139:; return;
label_B13A:; return;
label_B13C:; return;
label_B13E:; return;
label_B140:; return;
label_B141:; return;
label_B143:; return;
label_B145:; return;
label_B146:; return;
label_B147:; return;
label_B148:; return;
label_B14A:; return;
label_B14C:; return;
label_B14D:; return;
label_B14E:; return;
label_B151:; return;
label_B152:; return;
label_B153:; return;
label_B156:; return;
label_B157:; return;
label_B158:; return;
label_B159:; return;
label_B15A:; return;
label_B15C:; return;
label_B15E:; return;
label_B161:; return;
label_B163:; return;
label_B166:; return;
label_B168:; return;
label_B16A:; return;
label_B16C:; return;
label_B16D:; return;
label_B16F:; return;
label_B170:; return;
label_B172:; return;
label_B175:; return;
label_B177:; return;
label_B17A:; return;
label_B17C:; return;
label_B17F:; return;
label_B181:; return;
label_B183:; return;
label_B186:; return;
label_B188:; return;
label_B18B:; return;
label_B18D:; return;
label_B190:; return;
label_B193:; return;
label_B195:; return;
label_B197:; return;
label_B199:; return;
label_B19C:; return;
label_B19E:; return;
label_B1A0:; return;
label_B1A2:; return;
label_B1A4:; return;
label_B1A6:; return;
label_B1A9:; return;
label_B1AB:; return;
label_B1AE:; return;
label_B1B0:; return;
label_B1B2:; return;
label_B1B3:; return;
label_B1B5:; return;
label_B1B6:; return;
label_B1B8:; return;
label_B1BA:; return;
label_B1BC:; return;
label_B1BE:; return;
label_B1C0:; return;
label_B1C2:; return;
label_B1C5:; return;
label_B1C7:; return;
label_B1C9:; return;
label_B1CC:; return;
label_B1CE:; return;
label_B1D0:; return;
label_B1D2:; return;
label_B1D4:; return;
label_B1D7:; return;
label_B1DA:; return;
label_B1DB:; return;
label_B1DE:; return;
label_B1DF:; return;
label_B1E0:; return;
label_B1E1:; return;
label_B1E2:; return;
label_B1E4:; return;
label_B1E7:; return;
label_B1E8:; return;
label_B1E9:; return;
label_B1EA:; return;
label_B1EC:; return;
label_B1EF:; return;
label_B1F1:; return;
label_B1F4:; return;
label_B1F7:; return;
label_B1F9:; return;
label_B1FC:; return;
label_B1FE:; return;
label_B201:; return;
label_B203:; return;
label_B206:; return;
label_B209:; return;
label_B20A:; return;
label_B20C:; return;
label_B20E:; return;
label_B211:; return;
label_B213:; return;
label_B215:; return;
label_B217:; return;
label_B21A:; return;
label_B21D:; return;
label_B21F:; return;
label_B220:; return;
label_B222:; return;
label_B224:; return;
label_B227:; return;
label_B229:; return;
label_B22B:; return;
label_B22E:; return;
label_B230:; return;
label_B232:; return;
label_B234:; return;
label_B236:; return;
label_B237:; return;
label_B238:; return;
label_B23A:; return;
label_B23D:; return;
label_B23F:; return;
label_B241:; return;
label_B242:; return;
label_B244:; return;
label_B247:; return;
label_B24A:; return;
label_B24B:; return;
label_B24C:; return;
label_B24F:; return;
label_B251:; return;
label_B252:; return;
label_B253:; return;
label_B254:; return;
label_B255:; return;
label_B256:; return;
label_B257:; return;
label_B258:; return;
label_B259:; return;
label_B25A:; return;
label_B25B:; return;
label_B25D:; return;
label_B260:; return;
label_B262:; return;
label_B264:; return;
label_B267:; return;
label_B269:; return;
label_B26C:; return;
label_B26D:; return;
label_B26F:; return;
label_B272:; return;
label_B274:; return;
label_B275:; return;
label_B276:; return;
label_B279:; return;
label_B27B:; return;
label_B27E:; return;
label_B280:; return;
label_B281:; return;
label_B283:; return;
label_B285:; return;
label_B288:; return;
label_B28A:; return;
label_B28D:; return;
label_B28F:; return;
label_B292:; return;
label_B294:; return;
label_B295:; return;
label_B298:; return;
label_B299:; return;
label_B29B:; return;
label_B29D:; return;
label_B29F:; return;
label_B2A2:; return;
label_B2A3:; return;
label_B2A6:; return;
label_B2A8:; return;
label_B2AB:; return;
label_B2AD:; return;
label_B2B0:; return;
label_B2B2:; return;
label_B2B4:; return;
label_B2B6:; return;
label_B2B9:; return;
label_B2BB:; return;
label_B2BE:; return;
label_B2C1:; return;
label_B2C3:; return;
label_B2C5:; return;
}

void func_BC71_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BC71_b1");
#endif
label_BC71:;
    /* $BC71: 34 */ maybe_trigger_vblank(4); (void)nes_read((0xCD + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BC73:;
    /* $BC73: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x5D + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BC75:;
    /* $BC75: 06 */ maybe_trigger_vblank(5); { uint16_t a=0xB3; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BC77:;
    /* $BC77: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x34D7, -1); return;
}

void func_8D84_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D84_b1");
#endif
label_8D84:;
    /* $8D84: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x73 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8D86:;
    /* $8D86: 1C */ maybe_trigger_vblank(4); (void)nes_read((0xC6C0 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8D89:;
    /* $8D89: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x8D17); return; }
label_8D8B:;
    /* $8D8B: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x7008; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8D8E:;
    /* $8D8E: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_8D91:;
    /* $8D91: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D93:;
    /* $8D93: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_8D96:;
    /* $8D96: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D98:;
    /* $8D98: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_8D9B:;
    /* $8D9B: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_8D9C:;
    /* $8D9C: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xBA) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D9E:;
    /* $8D9E: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8D9F:;
    /* $8D9F: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8DA0:;
    /* $8DA0: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DA2:;
    /* $8DA2: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_8DA5:;
    /* $8DA5: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF3; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DA7:;
    /* $8DA7: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x3623); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_8D8A_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D8A_b1");
#endif
label_8D8A:;
    /* $8D8A: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_8D8D:;
    /* $8D8D: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { call_by_address(0x8D1B); return; }
label_8D8F:;
    /* $8D8F: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xC608; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8D92:;
    /* $8D92: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x8D20); return; }
label_8D94:;
    /* $8D94: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xC608; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8D97:;
    /* $8D97: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x8D25); return; }
label_8D99:;
    /* $8D99: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x2A08; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8D9C:;
    /* $8D9C: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xBA) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D9E:;
    /* $8D9E: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8D9F:;
    /* $8D9F: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8DA0:;
    /* $8DA0: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DA2:;
    /* $8DA2: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_8DA5:;
    /* $8DA5: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF3; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DA7:;
    /* $8DA7: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x3623); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_8D17_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D17_b1");
#endif
label_8D17:;
    /* $8D17: 4E */ maybe_trigger_vblank(6); { uint16_t a=0xB4CF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_8D1A:;
    /* $8D1A: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xD3F8); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8D1D:;
    /* $8D1D: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xED) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D1F:;
    /* $8D1F: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0xD33E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8D22:;
    /* $8D22: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xED) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D24:;
    /* $8D24: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0xCA3E + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8D27:;
    /* $8D27: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8D + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D29:;
    /* $8D29: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_8D2B:;
    /* $8D2B: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x28) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8D2D:;
    /* $8D2D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8D2E:;
    /* $8D2E: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8D2F:;
    /* $8D2F: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xF6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8D31:;
    /* $8D31: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xC66D); FLAG_NZ(g_cpu.Y);
label_8D34:;
    /* $8D34: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x8CC3); return; }
label_8D36:;
    /* $8D36: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0xC6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D38:;
    /* $8D38: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x8CC6); return; }
label_8D3A:;
    /* $8D3A: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xD308; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8D3D:;
    /* $8D3D: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address(0x8CCC); return; }
label_8D3F:;
    /* $8D3F: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8D41:;
    /* $8D41: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xD6F1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D44:;
    /* $8D44: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0xCD + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8D46:;
    /* $8D46: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x0000; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8D49:;
    /* $8D49: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x37 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D4B:;
    /* $8D4B: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x006F); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8D4E:;
    /* $8D4E: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x6A93 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D51:;
    /* $8D51: DA */ maybe_trigger_vblank(2); /* NOP */
label_8D52:;
    /* $8D52: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x4C + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D54:;
    /* $8D54: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8D54); return;
}

void func_8D1B_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D1B_b1");
#endif
label_8D1B:;
    /* $8D1B: F8 */ maybe_trigger_vblank(2); g_cpu.D = 1;
label_8D1C:;
    /* $8D1C: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xB3) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8D1E:;
    /* $8D1E: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x3E3B); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D21:;
    /* $8D21: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xB3) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8D23:;
    /* $8D23: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x3E3B); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D26:;
    /* $8D26: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8D27:;
    /* $8D27: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8D + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D29:;
    /* $8D29: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_8D2B:;
    /* $8D2B: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x28) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8D2D:;
    /* $8D2D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8D2E:;
    /* $8D2E: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8D2F:;
    /* $8D2F: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xF6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8D31:;
    /* $8D31: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xC66D); FLAG_NZ(g_cpu.Y);
label_8D34:;
    /* $8D34: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x8CC3); return; }
label_8D36:;
    /* $8D36: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0xC6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D38:;
    /* $8D38: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x8CC6); return; }
label_8D3A:;
    /* $8D3A: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xD308; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8D3D:;
    /* $8D3D: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address(0x8CCC); return; }
label_8D3F:;
    /* $8D3F: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8D41:;
    /* $8D41: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xD6F1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D44:;
    /* $8D44: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0xCD + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8D46:;
    /* $8D46: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x0000; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8D49:;
    /* $8D49: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x37 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D4B:;
    /* $8D4B: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x006F); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8D4E:;
    /* $8D4E: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x6A93 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D51:;
    /* $8D51: DA */ maybe_trigger_vblank(2); /* NOP */
label_8D52:;
    /* $8D52: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x4C + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D54:;
    /* $8D54: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8D54); return;
}

void func_8D20_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D20_b1");
#endif
label_8D20:;
    /* $8D20: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xB3D3 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D23:;
    /* $8D23: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x3E3B); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D26:;
    /* $8D26: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8D27:;
    /* $8D27: F5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x8D + g_cpu.X) & 0xFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8D29:;
    /* $8D29: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_8D2B:;
    /* $8D2B: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x28) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8D2D:;
    /* $8D2D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8D2E:;
    /* $8D2E: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8D2F:;
    /* $8D2F: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xF6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8D31:;
    /* $8D31: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xC66D); FLAG_NZ(g_cpu.Y);
label_8D34:;
    /* $8D34: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x8CC3); return; }
label_8D36:;
    /* $8D36: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0xC6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D38:;
    /* $8D38: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x8CC6); return; }
label_8D3A:;
    /* $8D3A: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xD308; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8D3D:;
    /* $8D3D: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address(0x8CCC); return; }
label_8D3F:;
    /* $8D3F: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8D41:;
    /* $8D41: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xD6F1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D44:;
    /* $8D44: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0xCD + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8D46:;
    /* $8D46: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x0000; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8D49:;
    /* $8D49: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x37 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D4B:;
    /* $8D4B: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x006F); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8D4E:;
    /* $8D4E: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x6A93 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D51:;
    /* $8D51: DA */ maybe_trigger_vblank(2); /* NOP */
label_8D52:;
    /* $8D52: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x4C + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D54:;
    /* $8D54: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8D54); return;
}

void func_8D25_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8D25_b1");
#endif
label_8D25:;
    /* $8D25: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xF5CA + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D28:;
    /* $8D28: 8D */ maybe_trigger_vblank(4); nes_write(0x2093, g_cpu.A);
label_8D2B:;
    /* $8D2B: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x28) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8D2D:;
    /* $8D2D: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8D2E:;
    /* $8D2E: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8D2F:;
    /* $8D2F: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xF6 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8D31:;
    /* $8D31: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xC66D); FLAG_NZ(g_cpu.Y);
label_8D34:;
    /* $8D34: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x8CC3); return; }
label_8D36:;
    /* $8D36: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0xC6) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D38:;
    /* $8D38: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x8CC6); return; }
label_8D3A:;
    /* $8D3A: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xD308; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8D3D:;
    /* $8D3D: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address(0x8CCC); return; }
label_8D3F:;
    /* $8D3F: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x08) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8D41:;
    /* $8D41: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xD6F1 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D44:;
    /* $8D44: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0xCD + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8D46:;
    /* $8D46: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x0000; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8D49:;
    /* $8D49: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x37 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D4B:;
    /* $8D4B: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x006F); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8D4E:;
    /* $8D4E: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x6A93 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8D51:;
    /* $8D51: DA */ maybe_trigger_vblank(2); /* NOP */
label_8D52:;
    /* $8D52: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x4C + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8D54:;
    /* $8D54: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8D54); return;
}

void func_8CC3_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CC3_b1");
#endif
label_8CC3:;
    /* $8CC3: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x3E) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8CC5:;
    /* $8CC5: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xB6) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8CC7:;
    /* $8CC7: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x443B); FLAG_NZ(g_cpu.A);
label_8CCA:;
    /* $8CCA: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CCC:;
    /* $8CCC: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_8CCF:;
    /* $8CCF: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CD1:;
    /* $8CD1: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_8CD4:;
    /* $8CD4: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CD6:;
    /* $8CD6: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_8CD9:;
    /* $8CD9: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CDB:;
    /* $8CDB: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_8CDE:;
    /* $8CDE: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_8CDF:;
    /* $8CDF: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8CE0:;
    /* $8CE0: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8CE1:;
    /* $8CE1: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8CE2:;
    /* $8CE2: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CE4:;
    /* $8CE4: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_8CE7:;
    /* $8CE7: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF3; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CE9:;
    /* $8CE9: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x3623); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_8CC6_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CC6_b1");
#endif
label_8CC6:;
    /* $8CC6: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0x4D + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_8CC8:;
    /* $8CC8: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0xC644 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8CCB:;
    /* $8CCB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x8C59); return; }
label_8CCD:;
    /* $8CCD: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xC608; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8CD0:;
    /* $8CD0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x8C5E); return; }
label_8CD2:;
    /* $8CD2: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xC608; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8CD5:;
    /* $8CD5: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x8C63); return; }
label_8CD7:;
    /* $8CD7: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xC608; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8CDA:;
    /* $8CDA: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) { call_by_address(0x8C68); return; }
label_8CDC:;
    /* $8CDC: 6F */ maybe_trigger_vblank(6); { uint16_t a=0x2A08; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8CDF:;
    /* $8CDF: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8CE0:;
    /* $8CE0: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8CE1:;
    /* $8CE1: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8CE2:;
    /* $8CE2: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CE4:;
    /* $8CE4: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_8CE7:;
    /* $8CE7: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF3; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CE9:;
    /* $8CE9: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x3623); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_8CCC_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8CCC_b1");
#endif
label_8CCC:;
    /* $8CCC: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_8CCF:;
    /* $8CCF: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CD1:;
    /* $8CD1: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_8CD4:;
    /* $8CD4: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CD6:;
    /* $8CD6: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_8CD9:;
    /* $8CD9: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CDB:;
    /* $8CDB: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_8CDE:;
    /* $8CDE: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_8CDF:;
    /* $8CDF: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8CE0:;
    /* $8CE0: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8CE1:;
    /* $8CE1: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8CE2:;
    /* $8CE2: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF0; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CE4:;
    /* $8CE4: 8C */ maybe_trigger_vblank(4); nes_write(0x086F, g_cpu.Y);
label_8CE7:;
    /* $8CE7: C6 */ maybe_trigger_vblank(5); { uint16_t a=0xF3; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8CE9:;
    /* $8CE9: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x3623); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_8C59_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C59_b1");
#endif
label_8C59:;
    /* $8C59: CF */ maybe_trigger_vblank(6); { uint16_t a=0xEDB4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8C5C:;
    /* $8C5C: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0xD3) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8C5E:;
    /* $8C5E: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x1D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C60:;
    /* $8C60: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x4E) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8C62:;
    /* $8C62: CF */ maybe_trigger_vblank(6); { uint16_t a=0xE4B4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8C65:;
    /* $8C65: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8C66:;
    /* $8C66: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x2B; FLAG_NZ(g_cpu.A);
label_8C68:;
    /* $8C68: CF */ maybe_trigger_vblank(6); { uint16_t a=0x3EA3; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8C6B:;
    /* $8C6B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8C6C:;
    /* $8C6C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8C6D:;
    /* $8C6D: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_8C6E:;
    /* $8C6E: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x53; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C70:;
    /* $8C70: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x1BFB + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8C73:;
    /* $8C73: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8C75:;
    /* $8C75: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x1B23 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_8C78:;
    /* $8C78: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8C7A:;
    /* $8C7A: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x3A) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8C7C:;
    /* $8C7C: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8C7E:;
    /* $8C7E: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xABD3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8C81:;
    /* $8C81: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0xDC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C83:;
    /* $8C83: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8C5E_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C5E_b1");
#endif
label_8C5E:;
    /* $8C5E: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0x1D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C60:;
    /* $8C60: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x4E) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8C62:;
    /* $8C62: CF */ maybe_trigger_vblank(6); { uint16_t a=0xE4B4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8C65:;
    /* $8C65: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8C66:;
    /* $8C66: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x2B; FLAG_NZ(g_cpu.A);
label_8C68:;
    /* $8C68: CF */ maybe_trigger_vblank(6); { uint16_t a=0x3EA3; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8C6B:;
    /* $8C6B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8C6C:;
    /* $8C6C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8C6D:;
    /* $8C6D: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_8C6E:;
    /* $8C6E: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x53; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C70:;
    /* $8C70: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x1BFB + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8C73:;
    /* $8C73: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8C75:;
    /* $8C75: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x1B23 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_8C78:;
    /* $8C78: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8C7A:;
    /* $8C7A: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x3A) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8C7C:;
    /* $8C7C: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8C7E:;
    /* $8C7E: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xABD3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8C81:;
    /* $8C81: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0xDC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C83:;
    /* $8C83: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8C63_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C63_b1");
#endif
label_8C63:;
    /* $8C63: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xE4 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_8C65:;
    /* $8C65: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8C66:;
    /* $8C66: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x2B; FLAG_NZ(g_cpu.A);
label_8C68:;
    /* $8C68: CF */ maybe_trigger_vblank(6); { uint16_t a=0x3EA3; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8C6B:;
    /* $8C6B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8C6C:;
    /* $8C6C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8C6D:;
    /* $8C6D: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_8C6E:;
    /* $8C6E: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x53; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C70:;
    /* $8C70: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x1BFB + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8C73:;
    /* $8C73: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8C75:;
    /* $8C75: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x1B23 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_8C78:;
    /* $8C78: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8C7A:;
    /* $8C7A: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x3A) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8C7C:;
    /* $8C7C: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8C7E:;
    /* $8C7E: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xABD3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8C81:;
    /* $8C81: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0xDC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C83:;
    /* $8C83: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_8C68_b1(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8C68_b1");
#endif
label_8C68:;
    /* $8C68: CF */ maybe_trigger_vblank(6); { uint16_t a=0x3EA3; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_8C6B:;
    /* $8C6B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_8C6C:;
    /* $8C6C: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8C6D:;
    /* $8C6D: B2 */ maybe_trigger_vblank(2); /* ILLEGAL $B2 — skip 1 */
label_8C6E:;
    /* $8C6E: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x53; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8C70:;
    /* $8C70: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x1BFB + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8C73:;
    /* $8C73: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8C75:;
    /* $8C75: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x1B23 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_8C78:;
    /* $8C78: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8C7A:;
    /* $8C7A: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x3A) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8C7C:;
    /* $8C7C: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8C7E:;
    /* $8C7E: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xABD3); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8C81:;
    /* $8C81: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0xDC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8C83:;
    /* $8C83: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

