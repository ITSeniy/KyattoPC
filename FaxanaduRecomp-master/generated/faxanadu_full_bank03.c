/* faxanadu_full_bank03.c — PRG bank 3 function bodies.
 * Generated part of faxanadu_full.c: #included by the umbrella; NOT a
 * standalone translation unit. Do not compile or edit directly. */

void func_8009_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8009_b3");
#endif
label_8009:;
    /* $8009: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_800A:;
    /* $800A: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x7B11); FLAG_NZ(g_cpu.Y);
label_800D:;
    /* $800D: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1C7E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8010:;
    /* $8010: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x20; FLAG_NZ(g_cpu.A);
label_8012:;
    /* $8012: 1C */ maybe_trigger_vblank(4); (void)nes_read((0xA600 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8015:;
    /* $8015: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8016:;
    /* $8016: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8018:;
    /* $8018: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8019:;
    /* $8019: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x73 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_801B:;
    /* $801B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x26 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_801D:;
    /* $801D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x801D); return;
}

void func_8003_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8003_b3");
#endif
label_8003:;
    /* $8003: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8003); return;
}

void func_8006_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8006_b3");
#endif
label_8006:;
    /* $8006: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_8007:;
    /* $8007: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x29; FLAG_NZ(g_cpu.A);
label_8009:;
    /* $8009: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_800A:;
    /* $800A: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x7B11); FLAG_NZ(g_cpu.Y);
label_800D:;
    /* $800D: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x1C7E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8010:;
    /* $8010: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x20; FLAG_NZ(g_cpu.A);
label_8012:;
    /* $8012: 1C */ maybe_trigger_vblank(4); (void)nes_read((0xA600 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8015:;
    /* $8015: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8016:;
    /* $8016: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8018:;
    /* $8018: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_8019:;
    /* $8019: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x73 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_801B:;
    /* $801B: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x26 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_801D:;
    /* $801D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x801D); return;
}

void func_8000_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8000_b3");
#endif
label_8000:;
    /* $8000: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8001:;
    /* $8001: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8001); return;
}

void func_B7AE_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7AE_b3");
#endif
label_B7AE:;
    /* $B7AE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x001F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7B1:;
    /* $B7B1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF5 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7B4:;
    /* $B7B4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFDFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7B7:;
    /* $B7B7: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B7B9:;
    /* $B7B9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFF4 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7BC:;
    /* $B7BC: FE */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7BF:;
    /* $B7BF: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF00 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B7C2:;
    /* $B7C2: CE */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7C5:;
    /* $B7C5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7C8:;
    /* $B7C8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB7C8); return;
}

void func_BA55_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA55_b3");
#endif
label_BA55:;
    /* $BA55: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xF9FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA58:;
    /* $BA58: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA58); return;
}

void func_B982_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B982_b3");
#endif
label_B982:;
    /* $B982: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xFF + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B984:;
    /* $B984: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xB5FF + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B987:;
    /* $B987: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0xFF00 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B98A:;
    /* $B98A: 46 */ maybe_trigger_vblank(5); { uint16_t a=0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B98C:;
    /* $B98C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B98F:;
    /* $B98F: 61 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B991:;
    /* $B991: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFED + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B994:;
    /* $B994: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFBFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B997:;
    /* $B997: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0x00 + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_B999:;
    /* $B999: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF9E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B99C:;
    /* $B99C: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B99F:;
    /* $B99F: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9A1:;
    /* $B9A1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFC + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9A4:;
    /* $B9A4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9A7:;
    /* $B9A7: 7A */ maybe_trigger_vblank(2); /* NOP */
label_B9A8:;
    /* $B9A8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB9A8); return;
}

void func_B7D6_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7D6_b3");
#endif
label_B7D6:;
    /* $B7D6: EF */ maybe_trigger_vblank(6); { uint16_t a=0x0026; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7D9:;
    /* $B7D9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF36 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7DC:;
    /* $B7DC: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFFFF + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B7DF:;
    /* $B7DF: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B7E1:;
    /* $B7E1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF6B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7E4:;
    /* $B7E4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7E7:;
    /* $B7E7: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_B7E9:;
    /* $B7E9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFBD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7EC:;
    /* $B7EC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7EF:;
    /* $B7EF: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7F1:;
    /* $B7F1: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF3E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7F4:;
    /* $B7F4: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7F7:;
    /* $B7F7: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x00; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B7F9:;
    /* $B7F9: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFD7 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7FC:;
    /* $B7FC: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7FF:;
    /* $B7FF: 7F */ maybe_trigger_vblank(7); { uint16_t a=(0xFF00 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B802:;
    /* $B802: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0xFF); FLAG_NZ(g_cpu.A);
label_B804:;
    /* $B804: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFBFF + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B807:;
    /* $B807: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF00 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B80A:;
    /* $B80A: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B80D:;
    /* $B80D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xADFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B810:;
    /* $B810: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B811:;
    /* $B811: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFD + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B814:;
    /* $B814: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B817:;
    /* $B817: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_B81A:;
    /* $B81A: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xFFFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B81D:;
    /* $B81D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xD7FB + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B820:;
    /* $B820: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB820); return;
}

void func_BA5B_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA5B_b3");
#endif
label_BA5B:;
    /* $BA5B: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA5E:;
    /* $BA5E: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x009F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA61:;
    /* $BA61: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFE + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA64:;
    /* $BA64: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA67:;
    /* $BA67: BB */ maybe_trigger_vblank(4); /* ILLEGAL $BB — skip 3 */
label_BA6A:;
    /* $BA6A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xDFFF + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA6D:;
    /* $BA6D: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x6FFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA70:;
    /* $BA70: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA70); return;
}

void func_8070_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8070_b3");
#endif
label_8070:;
    /* $8070: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8071:;
    /* $8071: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8073:;
    /* $8073: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8075:;
    /* $8075: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8077:;
    /* $8077: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8079:;
    /* $8079: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_807B:;
    /* $807B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_807D:;
    /* $807D: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_807F:;
    /* $807F: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8081:;
    /* $8081: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8083:;
    /* $8083: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8085:;
    /* $8085: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8087:;
    /* $8087: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8089:;
    /* $8089: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_808B:;
    /* $808B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_808D:;
    /* $808D: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_808F:;
    /* $808F: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8091:;
    /* $8091: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8092:;
    /* $8092: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8093:;
    /* $8093: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8094:;
    /* $8094: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8095:;
    /* $8095: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8097:;
    /* $8097: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8097); return;
}

void func_B9ED_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9ED_b3");
#endif
label_B9ED:;
    /* $B9ED: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xDE37 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9F0:;
    /* $B9F0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB9F0); return;
}

void func_B7BF_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7BF_b3");
#endif
label_B7BF:;
    /* $B7BF: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xFF00 + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B7C2:;
    /* $B7C2: CE */ maybe_trigger_vblank(6); { uint16_t a=0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7C5:;
    /* $B7C5: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xBFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7C8:;
    /* $B7C8: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB7C8); return;
}

void func_B880_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B880_b3");
#endif
label_B880:;
    /* $B880: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB880); return;
}

void func_A860_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A860_b3");
#endif
label_A860:;
    /* $A860: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA860); return;
}

void func_A224_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A224_b3");
#endif
label_A224:;
    /* $A224: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A225:;
    /* $A225: 11 */ maybe_trigger_vblank(5); g_cpu.A |= nes_read((nes_read16zp(0x13) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A227:;
    /* $A227: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x1204); FLAG_NZ(g_cpu.A);
label_A22A:;
    /* $A22A: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_A22B:;
    /* $A22B: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x010C; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A22E:;
    /* $A22E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B003_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B003_b3");
#endif
label_B003:;
    /* $B003: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFEF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B006:;
    /* $B006: DF */ maybe_trigger_vblank(7); { uint16_t a=(0x001C + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B009:;
    /* $B009: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFF7E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B00C:;
    /* $B00C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFFFF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B00F:;
    /* $B00F: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0xFF00); FLAG_NZ(g_cpu.X);
label_B012:;
    /* $B012: 3E */ maybe_trigger_vblank(7); { uint16_t a=(0xEFFF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B015:;
    /* $B015: FF */ maybe_trigger_vblank(7); { uint16_t a=(0xFEBF + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B018:;
    /* $B018: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB018); return;
}

void func_B960_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B960_b3");
#endif
label_B960:;
    /* $B960: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB960); return;
}

void func_93BD_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_93BD_b3");
#endif
label_93BD:;
    /* $93BD: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x93BD); return;
}

void func_8A24_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A24_b3");
#endif
label_8A24:;
    /* $8A24: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xA8; g_cpu.C=(g_cpu.X>=0xA8)?1:0; FLAG_NZ(r&0xFF); }
label_8A26:;
    /* $8A26: 97 */ maybe_trigger_vblank(4); nes_write((0x95 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_8A28:;
    /* $8A28: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xB7FA + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8A2B:;
    /* $8A2B: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8A2C:;
    /* $8A2C: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8A2D:;
    /* $8A2D: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_8A2E:;
    /* $8A2E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8A2E); return;
}

void func_8DAE_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8DAE_b3");
#endif
label_8DAE:;
    /* $8DAE: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0xA0); FLAG_NZ(g_cpu.A);
label_8DB0:;
    /* $8DB0: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0xA5); FLAG_NZ(g_cpu.A);
label_8DB2:;
    /* $8DB2: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x06AF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_8DB5:;
    /* $8DB5: 7B */ maybe_trigger_vblank(7); { uint16_t a=(0xA250 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8DB8:;
    /* $8DB8: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x96; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8DBA:;
    /* $8DBA: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7C; FLAG_NZ(g_cpu.A);
label_8DBC:;
    /* $8DBC: 20 */ maybe_trigger_vblank(6); nes_dispatch_call(0x069E, -1);
label_8DBF:;
    /* $8DBF: 93 */ maybe_trigger_vblank(6); /* ILLEGAL $93 — skip 2 */
label_8DC1:;
    /* $8DC1: 9E */ maybe_trigger_vblank(5); /* ILLEGAL $9E — skip 3 */
label_8DC4:;
    /* $8DC4: 22 */ maybe_trigger_vblank(2); /* ILLEGAL $22 — skip 1 */
label_8DC5:;
    /* $8DC5: 9E */ maybe_trigger_vblank(5); /* ILLEGAL $9E — skip 3 */
label_8DC8:;
    /* $8DC8: 23 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x9E + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8DCA:;
    /* $8DCA: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x247C); FLAG_NZ(g_cpu.A);
label_8DCD:;
    /* $8DCD: 9E */ maybe_trigger_vblank(5); /* ILLEGAL $9E — skip 3 */
label_8DD0:;
    /* $8DD0: 25 */ maybe_trigger_vblank(3); g_cpu.A &= nes_read(0x9E); FLAG_NZ(g_cpu.A);
label_8DD2:;
    /* $8DD2: 1F */ maybe_trigger_vblank(7); { uint16_t a=(0x2694 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8DD5:;
    /* $8DD5: 9E */ maybe_trigger_vblank(5); /* ILLEGAL $9E — skip 3 */
label_8DD8:;
    /* $8DD8: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x1F11 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8DDB:;
    /* $8DDB: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_8DDE:;
    /* $8DDE: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0B3E + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_8DE1:;
    /* $8DE1: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x00 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8DE3:;
    /* $8DE3: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x0B); FLAG_NZ(g_cpu.A);
label_8DE5:;
    /* $8DE5: 02 */ maybe_trigger_vblank(2); /* ILLEGAL $02 — skip 1 */
label_8DE6:;
    /* $8DE6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8DE6); return;
}

void func_80A0_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80A0_b3");
#endif
label_80A0:;
    /* $80A0: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_80A2:;
    /* $80A2: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_80A3:;
    /* $80A3: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_80A4:;
    /* $80A4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_80A5:;
    /* $80A5: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_80A6:;
    /* $80A6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x80A6); return;
}

void func_8080_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8080_b3");
#endif
label_8080:;
    /* $8080: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8082:;
    /* $8082: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8084:;
    /* $8084: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8086:;
    /* $8086: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8087:;
    /* $8087: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8089:;
    /* $8089: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_808B:;
    /* $808B: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_808D:;
    /* $808D: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_808F:;
    /* $808F: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0xAA + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8091:;
    /* $8091: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8092:;
    /* $8092: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8093:;
    /* $8093: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8094:;
    /* $8094: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_8095:;
    /* $8095: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_8097:;
    /* $8097: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8097); return;
}

void func_9686_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9686_b3");
#endif
label_9686:;
    /* $9686: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAD; FLAG_NZ(g_cpu.A);
label_9688:;
    /* $9688: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xB1 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_968A:;
    /* $968A: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_968B:;
    /* $968B: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xC5; FLAG_NZ(g_cpu.A);
label_968D:;
    /* $968D: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB3); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_968F:;
    /* $968F: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xAB) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9691:;
    /* $9691: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAD; FLAG_NZ(g_cpu.A);
label_9693:;
    /* $9693: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC6; FLAG_NZ(g_cpu.A);
label_9695:;
    /* $9695: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC2; FLAG_NZ(g_cpu.A);
label_9697:;
    /* $9697: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA9; FLAG_NZ(g_cpu.A);
label_9699:;
    /* $9699: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB5; FLAG_NZ(g_cpu.A);
label_969B:;
    /* $969B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xAC; g_cpu.C=(g_cpu.A>=0xAC)?1:0; FLAG_NZ(r&0xFF); }
label_969D:;
    /* $969D: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xA9D1); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_96A0:;
    /* $96A0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x96A0); return;
}

void func_8BA6_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8BA6_b3");
#endif
label_8BA6:;
    /* $8BA6: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8BA7:;
    /* $8BA7: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8BA8:;
    /* $8BA8: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8BA9:;
    /* $8BA9: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xD1FD + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8BAC:;
    /* $8BAC: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8BAD:;
    /* $8BAD: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_8BAE:;
    /* $8BAE: E2 */ maybe_trigger_vblank(2); /* NOP */
label_8BB0:;
    /* $8BB0: C2 */ maybe_trigger_vblank(2); /* NOP */
label_8BB2:;
    /* $8BB2: BA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.S; FLAG_NZ(g_cpu.X);
label_8BB3:;
    /* $8BB3: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0xDD)?1:0; g_cpu.X=(t-0xDD)&0xFF; FLAG_NZ(g_cpu.X); }
label_8BB5:;
    /* $8BB5: E2 */ maybe_trigger_vblank(2); /* NOP */
label_8BB7:;
    /* $8BB7: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xCC); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8BB9:;
    /* $8BB9: 99 */ maybe_trigger_vblank(5); nes_write((0x82D3 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_8BBC:;
    /* $8BBC: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x9D; g_cpu.C=(g_cpu.X>=0x9D)?1:0; FLAG_NZ(r&0xFF); }
label_8BBE:;
    /* $8BBE: 80 */ maybe_trigger_vblank(2); /* NOP */
label_8BC0:;
    /* $8BC0: F9 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xCCFA + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_8BC3:;
    /* $8BC3: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_8BC6:;
    /* $8BC6: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8BC6); return;
}

void func_9295_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9295_b3");
#endif
label_9295:;
    /* $9295: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x55 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9297:;
    /* $9297: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x00 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_9299:;
    /* $9299: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x9299); return;
}

void func_8693_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8693_b3");
#endif
label_8693:;
    /* $8693: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xA8A7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8696:;
    /* $8696: A7 */ maybe_trigger_vblank(3); g_cpu.A = g_cpu.X = nes_read(0x95); FLAG_NZ(g_cpu.A);
label_8698:;
    /* $8698: DC */ maybe_trigger_vblank(4); (void)nes_read((0x85B6 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_869B:;
    /* $869B: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x98 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_869D:;
    /* $869D: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x83 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_869F:;
    /* $869F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x83EE; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_86A2:;
    /* $86A2: 84 */ maybe_trigger_vblank(3); nes_write(0xD4, g_cpu.Y);
label_86A4:;
    /* $86A4: 82 */ maybe_trigger_vblank(2); /* NOP */
label_86A6:;
    /* $86A6: 84 */ maybe_trigger_vblank(3); nes_write(0x9E, g_cpu.Y);
label_86A8:;
    /* $86A8: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x82); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_86AA:;
    /* $86AA: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x82 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_86AC:;
    /* $86AC: 83 */ maybe_trigger_vblank(6); nes_write(nes_read16zp((0x82 + g_cpu.X) & 0xFF), g_cpu.A & g_cpu.X); /* SAX */
label_86AE:;
    /* $86AE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x83; g_cpu.C=(g_cpu.A>=0x83)?1:0; FLAG_NZ(r&0xFF); }
label_86B0:;
    /* $86B0: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC3 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_86B2:;
    /* $86B2: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_86B5:;
    /* $86B5: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_86B8:;
    /* $86B8: E2 */ maybe_trigger_vblank(2); /* NOP */
label_86BA:;
    /* $86BA: E3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xE3 + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_86BC:;
    /* $86BC: B7 */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xBB + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.A);
label_86BE:;
    /* $86BE: B6 */ maybe_trigger_vblank(4); g_cpu.X = nes_read((0xDC + g_cpu.Y) & 0xFF); FLAG_NZ(g_cpu.X);
label_86C0:;
    /* $86C0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x8B) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_86C2:;
    /* $86C2: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x00EC); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_86C5:;
    /* $86C5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x86C5); return;
}

void func_9392_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9392_b3");
#endif
label_9392:;
    /* $9392: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xBBB7 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9395:;
    /* $9395: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC4C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9398:;
    /* $9398: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xA4A9); FLAG_NZ(g_cpu.A);
label_939B:;
    /* $939B: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_939C:;
    /* $939C: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xCA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_939E:;
    /* $939E: CE */ maybe_trigger_vblank(6); { uint16_t a=0x00AC; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_93A1:;
    /* $93A1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x93A1); return;
}

void func_9395_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9395_b3");
#endif
label_9395:;
    /* $9395: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xC4C0 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9398:;
    /* $9398: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0xA4A9); FLAG_NZ(g_cpu.A);
label_939B:;
    /* $939B: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_939C:;
    /* $939C: A1 */ maybe_trigger_vblank(6); g_cpu.A = nes_read(nes_read16zp((0xCA + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_939E:;
    /* $939E: CE */ maybe_trigger_vblank(6); { uint16_t a=0x00AC; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_93A1:;
    /* $93A1: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x93A1); return;
}

void func_9689_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_9689_b3");
#endif
label_9689:;
    /* $9689: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0xA8) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_968B:;
    /* $968B: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0xC5; FLAG_NZ(g_cpu.A);
label_968D:;
    /* $968D: C5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xB3); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_968F:;
    /* $968F: B3 */ maybe_trigger_vblank(5); g_cpu.A = g_cpu.X = nes_read((nes_read16zp(0xAB) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_9691:;
    /* $9691: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xAD; FLAG_NZ(g_cpu.A);
label_9693:;
    /* $9693: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC6; FLAG_NZ(g_cpu.A);
label_9695:;
    /* $9695: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC2; FLAG_NZ(g_cpu.A);
label_9697:;
    /* $9697: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xA9; FLAG_NZ(g_cpu.A);
label_9699:;
    /* $9699: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xB5; FLAG_NZ(g_cpu.A);
label_969B:;
    /* $969B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xAC; g_cpu.C=(g_cpu.A>=0xAC)?1:0; FLAG_NZ(r&0xFF); }
label_969D:;
    /* $969D: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xA9D1); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_96A0:;
    /* $96A0: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x96A0); return;
}

