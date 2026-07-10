/* faxanadu_full_bank00.c — PRG bank 0 function bodies.
 * Generated part of faxanadu_full.c: #included by the umbrella; NOT a
 * standalone translation unit. Do not compile or edit directly. */

void func_8009_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8009_b0");
#endif
label_8009:;
    /* $8009: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8009); return;
}

void func_8003_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8003_b0");
#endif
label_8003:;
    /* $8003: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x9C); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8005:;
    /* $8005: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_8006:;
    /* $8006: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8007:;
    /* $8007: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8007); return;
}

void func_8006_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8006_b0");
#endif
label_8006:;
    /* $8006: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_8007:;
    /* $8007: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8007); return;
}

void func_8000_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8000_b0");
#endif
label_8000:;
    /* $8000: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8002:;
    /* $8002: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x04; FLAG_NZ(g_cpu.A);
label_8004:;
    /* $8004: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_8007:;
    /* $8007: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8007); return;
}

void func_B7AE_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7AE_b0");
#endif
label_B7AE:;
    /* $B7AE: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xDE74); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B7B1:;
    /* $B7B1: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0xAD + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7B3:;
    /* $B7B3: EF */ maybe_trigger_vblank(6); { uint16_t a=0x506A; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B7B6:;
    /* $B7B6: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x77 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7B8:;
    /* $B7B8: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_B7B9:;
    /* $B7B9: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA55_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA55_b0");
#endif
label_BA55:;
    /* $BA55: 62 */ maybe_trigger_vblank(2); /* ILLEGAL $62 — skip 1 */
label_BA56:;
    /* $BA56: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { call_by_address(0xB9E8); return; }
label_BA58:;
    /* $BA58: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA58); return;
}

void func_B9E8_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9E8_b0");
#endif
label_B9E8:;
    /* $B9E8: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9EA:;
    /* $B9EA: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xD1); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B9EC:;
    /* $B9EC: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x74 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B9EE:;
    /* $B9EE: 41 */ maybe_trigger_vblank(6); g_cpu.A ^= nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_B9F0:;
    /* $B9F0: 07 */ maybe_trigger_vblank(5); { uint16_t a=0x4D; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9F2:;
    /* $B9F2: CF */ maybe_trigger_vblank(6); { uint16_t a=0x0DB4; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9F5:;
    /* $B9F5: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x41); FLAG_NZ(g_cpu.A);
label_B9F7:;
    /* $B9F7: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB9F7); return;
}

void func_B982_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B982_b0");
#endif
label_B982:;
    /* $B982: 97 */ maybe_trigger_vblank(4); nes_write((0x15 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_B984:;
    /* $B984: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x30); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B986:;
    /* $B986: FC */ maybe_trigger_vblank(4); (void)nes_read((0x1647 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B989:;
    /* $B989: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x72)?1:0; g_cpu.X=(t-0x72)&0xFF; FLAG_NZ(g_cpu.X); }
label_B98B:;
    /* $B98B: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xCF; g_cpu.C=(g_cpu.X>=0xCF)?1:0; FLAG_NZ(r&0xFF); }
label_B98D:;
    /* $B98D: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { call_by_address(0xB92C); return; }
label_B98F:;
    /* $B98F: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x1A) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B991:;
    /* $B991: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC7); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B993:;
    /* $B993: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B995:;
    /* $B995: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address(0xB983); return; }
label_B997:;
    /* $B997: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x1E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B999:;
    /* $B999: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x32)?1:0; g_cpu.X=(t-0x32)&0xFF; FLAG_NZ(g_cpu.X); }
label_B99B:;
    /* $B99B: FC */ maybe_trigger_vblank(4); (void)nes_read((0x38DF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B99E:;
    /* $B99E: CF */ maybe_trigger_vblank(6); { uint16_t a=0x9C31; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9A1:;
    /* $B9A1: 4F */ maybe_trigger_vblank(6); { uint16_t a=0xD417; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9A4:;
    /* $B9A4: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xC5) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B9A6:;
    /* $B9A6: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x30 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B9A8:;
    /* $B9A8: 5C */ maybe_trigger_vblank(4); (void)nes_read((0xCA1D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B9AB:;
    /* $B9AB: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x2C) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9AD:;
    /* $B9AD: CF */ maybe_trigger_vblank(6); { uint16_t a=0xCD34; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9B0:;
    /* $B9B0: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xFD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B9B2:;
    /* $B9B2: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x36 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9B4:;
    /* $B9B4: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_B9B5:;
    /* $B9B5: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x65) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B9B7:;
    /* $B9B7: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xB1 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B9B9:;
    /* $B9B9: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x7321); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B9BC:;
    /* $B9BC: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x35EB + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B9BF:;
    /* $B9BF: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xED + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B9C1:;
    /* $B9C1: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x4B) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9C3:;
    /* $B9C3: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x71 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B9C5:;
    /* $B9C5: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x73 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B9C7:;
    /* $B9C7: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x36EF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B9CA:;
    /* $B9CA: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xC04D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9CD:;
    /* $B9CD: 80 */ maybe_trigger_vblank(2); /* NOP */
label_B9CF:;
    /* $B9CF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB9CF); return;
}

void func_B7D6_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7D6_b0");
#endif
label_B7D6:;
    /* $B7D6: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x75 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7D8:;
    /* $B7D8: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x5C47); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B7DB:;
    /* $B7DB: D4 */ maybe_trigger_vblank(4); (void)nes_read((0x75 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7DD:;
    /* $B7DD: 9D */ maybe_trigger_vblank(5); nes_write((0x5C47 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_B7E0:;
    /* $B7E0: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x574F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B7E3:;
    /* $B7E3: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xF4 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7E5:;
    /* $B7E5: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x554F); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B7E8:;
    /* $B7E8: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xF5 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7EA:;
    /* $B7EA: DD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x5D4F + g_cpu.X) & 0xFFFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B7ED:;
    /* $B7ED: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xF4 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B7EF:;
    /* $B7EF: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x5D4F); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B7F2:;
    /* $B7F2: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x0040 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B7F5:;
    /* $B7F5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB7F5); return;
}

void func_BA5B_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA5B_b0");
#endif
label_BA5B:;
    /* $BA5B: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x80BC + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BA5E:;
    /* $BA5E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA5E); return;
}

void func_8070_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8070_b0");
#endif
label_8070:;
    /* $8070: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x00 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8072:;
    /* $8072: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x67 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_8074:;
    /* $8074: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8075:;
    /* $8075: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) goto label_80B3;
label_8077:;
    /* $8077: AB */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X = 0x08; FLAG_NZ(g_cpu.A);
label_8079:;
    /* $8079: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_807A:;
    /* $807A: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) goto label_80B3;
label_807C:;
    /* $807C: 5F */ maybe_trigger_vblank(7); { uint16_t a=(0x0340 + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_807F:;
    /* $807F: 3A */ maybe_trigger_vblank(2); /* NOP */
label_8080:;
    /* $8080: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x80; g_cpu.C=(g_cpu.Y>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_8082:;
    /* $8082: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8082); return;
label_8083:;
    /* $8083: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x40; g_cpu.C=(g_cpu.Y>=0x40)?1:0; FLAG_NZ(r&0xFF); }
label_8085:;
    /* $8085: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8085); return;
label_8086:;
    /* $8086: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8086); return;
label_8087:;
    /* $8087: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8087); return;
label_8088:;
    /* $8088: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8088); return;
label_8089:;
    /* $8089: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8089); return;
label_808A:;
    /* $808A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x808A); return;
label_808B:;
    /* $808B: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x808B); return;
label_808C:;
    /* $808C: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x808C); return;
label_808D:;
    /* $808D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x808D); return;
label_808E:;
    /* $808E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x808E); return;
label_808F:;
    /* $808F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x808F); return;
label_8090:;
    /* $8090: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8090); return;
label_8091:;
    /* $8091: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8091); return;
label_8092:;
    /* $8092: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8092); return;
label_8093:;
    /* $8093: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x8093); return;
label_8094:;
    /* $8094: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0xB3 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_8096:;
    /* $8096: FC */ maybe_trigger_vblank(4); (void)nes_read((0x358C + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8099:;
    /* $8099: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0xD6); FLAG_NZ(g_cpu.Y);
label_809B:;
    /* $809B: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0D + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_809D:;
    /* $809D: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x00 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x00); g_cpu.A=r&0xFF; }
label_809F:;
    /* $809F: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x35 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_80A1:;
    /* $80A1: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x229B + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_80A4:;
    /* $80A4: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB5; g_cpu.C=(g_cpu.A>=0xB5)?1:0; FLAG_NZ(r&0xFF); }
label_80A6:;
    /* $80A6: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x436F); FLAG_NZ(g_cpu.A);
label_80A9:;
    /* $80A9: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xF1 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_80AB:;
    /* $80AB: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x5B53); FLAG_NZ(g_cpu.A);
label_80AE:;
    /* $80AE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_8070;
    }
label_80B0:;
    /* $80B0: 5C */ maybe_trigger_vblank(4); (void)nes_read((0xCCC5 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_80B3:;
    /* $80B3: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x208F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80B6:;
    /* $80B6: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x47 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_80B8:;
    /* $80B8: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80BA:;
    /* $80BA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x80BA); return;
}

void func_B92C_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B92C_b0");
#endif
label_B92C:;
    /* $B92C: CE */ maybe_trigger_vblank(6); { uint16_t a=0x27F5; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B92F:;
    /* $B92F: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xF5D4 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B932:;
    /* $B932: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0xCA + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B934:;
    /* $B934: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xBC) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B936:;
    /* $B936: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xC0; FLAG_NZ(g_cpu.Y);
label_B938:;
    /* $B938: 80 */ maybe_trigger_vblank(2); /* NOP */
label_B93A:;
    /* $B93A: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB93A); return;
}

void func_B9ED_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9ED_b0");
#endif
label_B9ED:;
    /* $B9ED: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x41 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B9EF:;
    /* $B9EF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB9EF); return;
}

void func_B7BF_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B7BF_b0");
#endif
label_B7BF:;
    /* $B7BF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB7BF); return;
}

void func_B880_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B880_b0");
#endif
label_B880:;
    /* $B880: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x5C4F); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B883:;
    /* $B883: D4 */ maybe_trigger_vblank(4); (void)nes_read((0xF5 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B885:;
    /* $B885: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x2A47 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B888:;
    /* $B888: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { call_by_address(0xB881); return; }
label_B88A:;
    /* $B88A: 57 */ maybe_trigger_vblank(6); { uint16_t a=(0xD4 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B88C:;
    /* $B88C: F4 */ maybe_trigger_vblank(4); (void)nes_read((0xED + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B88E:;
    /* $B88E: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x7555; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B891:;
    /* $B891: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x5D + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B893:;
    /* $B893: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xED + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B895:;
    /* $B895: 4F */ maybe_trigger_vblank(6); { uint16_t a=0xDE3A; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B898:;
    /* $B898: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A860_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A860_b0");
#endif
label_A860:;
    /* $A860: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A861:;
    /* $A861: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A862:;
    /* $A862: F6 */ maybe_trigger_vblank(6); { uint16_t a=(0x9C + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A864:;
    /* $A864: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A869;
label_A866:;
    /* $A866: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x4435; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A869:;
    /* $A869: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_A86A:;
    /* $A86A: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x3A; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A86C:;
    /* $A86C: CE */ maybe_trigger_vblank(6); { uint16_t a=0x8CF6; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A86F:;
    /* $A86F: 3F */ maybe_trigger_vblank(7); { uint16_t a=(0xD74E + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A872:;
    /* $A872: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x4D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_A874:;
    /* $A874: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0xD55C + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_A877:;
    /* $A877: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xED + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A879:;
    /* $A879: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x57; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A87B:;
    /* $A87B: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x77ED); FLAG_NZ(g_cpu.A);
label_A87E:;
    /* $A87E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x2CAB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A881:;
    /* $A881: D7 */ maybe_trigger_vblank(6); { uint16_t a=(0x72 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A883:;
    /* $A883: C3 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x5D + g_cpu.X) & 0xFF); uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_A885:;
    /* $A885: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x0D)?1:0; g_cpu.X=(t-0x0D)&0xFF; FLAG_NZ(g_cpu.X); }
label_A887:;
    /* $A887: 4F */ maybe_trigger_vblank(6); { uint16_t a=0xDE2C; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_A88A:;
    /* $A88A: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x5D); FLAG_NZ(g_cpu.A);
label_A88C:;
    /* $A88C: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A88E:;
    /* $A88E: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA88E); return;
}

void func_A224_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A224_b0");
#endif
label_A224:;
    /* $A224: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x0307); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_B003_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B003_b0");
#endif
label_B003:;
    /* $B003: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x73)?1:0; g_cpu.X=(t-0x73)&0xFF; FLAG_NZ(g_cpu.X); }
label_B005:;
    /* $B005: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x2AEF); FLAG_NZ(g_cpu.A);
label_B008:;
    /* $B008: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x00)?1:0; g_cpu.X=(t-0x00)&0xFF; FLAG_NZ(g_cpu.X); }
label_B00A:;
    /* $B00A: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0xE7 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B00C:;
    /* $B00C: 5E */ maybe_trigger_vblank(7); { uint16_t a=(0xB2CF + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); FLAG_NZ(v); }
label_B00F:;
    /* $B00F: CD */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x567B); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B012:;
    /* $B012: D6 */ maybe_trigger_vblank(6); { uint16_t a=(0x47 + g_cpu.X) & 0xFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B014:;
    /* $B014: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B015:;
    /* $B015: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x8C + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B017:;
    /* $B017: D3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x5E) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B019:;
    /* $B019: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x73)?1:0; g_cpu.X=(t-0x73)&0xFF; FLAG_NZ(g_cpu.X); }
label_B01B:;
    /* $B01B: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x2D; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B01D:;
    /* $B01D: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x35)?1:0; g_cpu.X=(t-0x35)&0xFF; FLAG_NZ(g_cpu.X); }
label_B01F:;
    /* $B01F: EA */ maybe_trigger_vblank(2); /* NOP */
label_B020:;
    /* $B020: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x07)?1:0; g_cpu.X=(t-0x07)&0xFF; FLAG_NZ(g_cpu.X); }
label_B022:;
    /* $B022: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_B023:;
    /* $B023: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_CDB4(); return;
}

void func_B960_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B960_b0");
#endif
label_B960:;
    /* $B960: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x005B + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B963:;
    /* $B963: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x6D + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B965:;
    /* $B965: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xDB00 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B968:;
    /* $B968: C7 */ maybe_trigger_vblank(5); { uint16_t a=0x14; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B96A:;
    /* $B96A: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x31; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B96C:;
    /* $B96C: 9C */ maybe_trigger_vblank(5); /* ILLEGAL $9C — skip 3 */
label_B96F:;
    /* $B96F: 73 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xED) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B971:;
    /* $B971: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x41 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B973:;
    /* $B973: DB */ maybe_trigger_vblank(7); { uint16_t a=(0x85C0 + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B976:;
    /* $B976: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x2C) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B978:;
    /* $B978: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x73D1 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B97B:;
    /* $B97B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x4213 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B97E:;
    /* $B97E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_B984;
label_B980:;
    /* $B980: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x31; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B982:;
    /* $B982: 97 */ maybe_trigger_vblank(4); nes_write((0x15 + g_cpu.Y) & 0xFF, g_cpu.A & g_cpu.X); /* SAX */
label_B984:;
    /* $B984: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x30); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B986:;
    /* $B986: FC */ maybe_trigger_vblank(4); (void)nes_read((0x1647 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B989:;
    /* $B989: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x72)?1:0; g_cpu.X=(t-0x72)&0xFF; FLAG_NZ(g_cpu.X); }
label_B98B:;
    /* $B98B: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xCF; g_cpu.C=(g_cpu.X>=0xCF)?1:0; FLAG_NZ(r&0xFF); }
label_B98D:;
    /* $B98D: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) { call_by_address(0xB92C); return; }
label_B98F:;
    /* $B98F: 13 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x1A) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B991:;
    /* $B991: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0xC7); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B993:;
    /* $B993: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC2 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B995:;
    /* $B995: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address(0xB983); return; }
label_B997:;
    /* $B997: 2B */ maybe_trigger_vblank(2); g_cpu.A &= 0x1E; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B999:;
    /* $B999: CB */ maybe_trigger_vblank(2); { uint8_t t=(uint8_t)(g_cpu.A & g_cpu.X); g_cpu.C=(t>=0x32)?1:0; g_cpu.X=(t-0x32)&0xFF; FLAG_NZ(g_cpu.X); }
label_B99B:;
    /* $B99B: FC */ maybe_trigger_vblank(4); (void)nes_read((0x38DF + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B99E:;
    /* $B99E: CF */ maybe_trigger_vblank(6); { uint16_t a=0x9C31; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9A1:;
    /* $B9A1: 4F */ maybe_trigger_vblank(6); { uint16_t a=0xD417; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9A4:;
    /* $B9A4: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0xC5) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B9A6:;
    /* $B9A6: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x30 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B9A8:;
    /* $B9A8: 5C */ maybe_trigger_vblank(4); (void)nes_read((0xCA1D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B9AB:;
    /* $B9AB: F3 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x2C) + g_cpu.Y) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B9AD:;
    /* $B9AD: CF */ maybe_trigger_vblank(6); { uint16_t a=0xCD34; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); g_cpu.C=(g_cpu.A>=v)?1:0; FLAG_NZ((uint8_t)(g_cpu.A-v)); }
label_B9B0:;
    /* $B9B0: B4 */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xFD + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.Y);
label_B9B2:;
    /* $B9B2: 43 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x36 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9B4:;
    /* $B9B4: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_B9B5:;
    /* $B9B5: 33 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x65) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B9B7:;
    /* $B9B7: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0xB1 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B9B9:;
    /* $B9B9: CC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x7321); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B9BC:;
    /* $B9BC: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x35EB + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B9BF:;
    /* $B9BF: 74 */ maybe_trigger_vblank(4); (void)nes_read((0xED + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B9C1:;
    /* $B9C1: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x4B) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B9C3:;
    /* $B9C3: 55 */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x71 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_B9C5:;
    /* $B9C5: D5 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x73 + g_cpu.X) & 0xFF); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B9C7:;
    /* $B9C7: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x36EF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B9CA:;
    /* $B9CA: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0xC04D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B9CD:;
    /* $B9CD: 80 */ maybe_trigger_vblank(2); /* NOP */
label_B9CF:;
    /* $B9CF: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB9CF); return;
}

void func_93BD_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_93BD_b0");
#endif
label_93BD:;
    /* $93BD: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x0D75, -1); return;
}

void func_8A24_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8A24_b0");
#endif
label_8A24:;
    /* $8A24: 1C */ maybe_trigger_vblank(4); (void)nes_read((0x083B + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8A27:;
    /* $8A27: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x32); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_8A29:;
    /* $8A29: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); func_C9A0(); return;
}

void func_8DAE_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_8DAE_b0");
#endif
label_8DAE:;
    /* $8DAE: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x0CA3 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8DB1:;
    /* $8DB1: 32 */ maybe_trigger_vblank(2); /* ILLEGAL $32 — skip 1 */
label_8DB2:;
    /* $8DB2: 7C */ maybe_trigger_vblank(4); (void)nes_read((0x0E33 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8DB5:;
    /* $8DB5: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0xDC) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_8DB7:;
    /* $8DB7: 95 */ maybe_trigger_vblank(4); nes_write((0x71 + g_cpu.X) & 0xFF, g_cpu.A);
label_8DB9:;
    /* $8DB9: 37 */ maybe_trigger_vblank(6); { uint16_t a=(0x12 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_8DBB:;
    /* $8DBB: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_8DBC:;
    /* $8DBC: 0C */ maybe_trigger_vblank(4); (void)nes_read(0x119B); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8DBF:;
    /* $8DBF: 01 */ maybe_trigger_vblank(6); g_cpu.A |= nes_read(nes_read16zp((0xC4 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_8DC1:;
    /* $8DC1: 1C */ maybe_trigger_vblank(4); (void)nes_read((0xC10D + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8DC4:;
    /* $8DC4: 72 */ maybe_trigger_vblank(2); /* ILLEGAL $72 — skip 1 */
label_8DC5:;
    /* $8DC5: 5C */ maybe_trigger_vblank(4); (void)nes_read((0x32A0 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_8DC8:;
    /* $8DC8: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0xC344); maybe_trigger_vblank(2); call_by_address(_jt); return; }
}

void func_80A0_b0(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_80A0_b0");
#endif
label_80A0:;
    /* $80A0: 35 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3C + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_80A2:;
    /* $80A2: 9B */ maybe_trigger_vblank(5); /* ILLEGAL $9B — skip 3 */
label_80A5:;
    /* $80A5: B5 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x4D + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_80A7:;
    /* $80A7: 6F */ maybe_trigger_vblank(6); { uint16_t a=0xD443; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80AA:;
    /* $80AA: F1 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x2D) + g_cpu.Y) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_80AC:;
    /* $80AC: 53 */ maybe_trigger_vblank(8); { uint16_t a=(nes_read16zp(0x5B) + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_80AE:;
    /* $80AE: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address(0x8070); return; }
label_80B0:;
    /* $80B0: 5C */ maybe_trigger_vblank(4); (void)nes_read((0xCCC5 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_80B3:;
    /* $80B3: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x208F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_80B6:;
    /* $80B6: 74 */ maybe_trigger_vblank(4); (void)nes_read((0x47 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_80B8:;
    /* $80B8: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0xC8 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_80BA:;
    /* $80BA: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0x80BA); return;
}

