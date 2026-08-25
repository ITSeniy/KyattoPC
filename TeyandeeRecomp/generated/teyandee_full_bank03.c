/* teyandee_full_bank03.c — PRG bank 3 function bodies.
 * Generated part of teyandee_full.c: #included by the umbrella; NOT a
 * standalone translation unit. Do not compile or edit directly. */

void func_B368_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B368_b3");
#endif
label_B368:;
    /* $B368: 67 */ maybe_trigger_vblank(5); { uint16_t a=0x61; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B36A:;
    /* $B36A: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3330; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B36D:;
    /* $B36D: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB36D); return;
}

void func_B620_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B620_b3");
#endif
label_B620:;
    /* $B620: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3036; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B623:;
    /* $B623: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3022; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B626:;
    /* $B626: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3028; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B629:;
    /* $B629: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x3525; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B62C:;
    /* $B62C: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x2712; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B62F:;
    /* $B62F: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB62F); return;
}

void func_BA49_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA49_b3");
#endif
label_BA49:;
    /* $BA49: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA49); return;
}

void func_AF7D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF7D_b3");
#endif
label_AF7D:;
    /* $AF7D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x06F7); FLAG_NZ(g_cpu.A);
label_AF80:;
    /* $AF80: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AF90;
label_AF82:;
    /* $AF82: EE */ maybe_trigger_vblank(6); { uint16_t a=0x06F7; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF85:;
    /* $AF85: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x12; FLAG_NZ(g_cpu.A);
label_AF87:;
    /* $AF87: 8D */ maybe_trigger_vblank(4); nes_write(0x06F8, g_cpu.A);
label_AF8A:;
    /* $AF8A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_AF8C:;
    /* $AF8C: 8D */ maybe_trigger_vblank(4); nes_write(0x06F9, g_cpu.A);
label_AF8F:;
    /* $AF8F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AF90:;
    /* $AF90: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x06F8); FLAG_NZ(g_cpu.A);
label_AF93:;
    /* $AF93: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AF99;
label_AF95:;
    /* $AF95: CE */ maybe_trigger_vblank(6); { uint16_t a=0x06F8; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF98:;
    /* $AF98: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AF99:;
    /* $AF99: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x12; FLAG_NZ(g_cpu.A);
label_AF9B:;
    /* $AF9B: 8D */ maybe_trigger_vblank(4); nes_write(0x06F8, g_cpu.A);
label_AF9E:;
    /* $AF9E: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1F; FLAG_NZ(g_cpu.X);
label_AFA0:;
    /* $AFA0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x060D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AFA3:;
    /* $AFA3: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AFA4:;
    /* $AFA4: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x10; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AFA6:;
    /* $AFA6: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AFAA;
label_AFA8:;
    /* $AFA8: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_AFAA:;
    /* $AFAA: 9D */ maybe_trigger_vblank(5); nes_write((0x060D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFAD:;
    /* $AFAD: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFAE:;
    /* $AFAE: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AFA0;
    }
label_AFB0:;
    /* $AFB0: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x21); FLAG_NZ(g_cpu.X);
label_AFB2:;
    /* $AFB2: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x060A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AFB5:;
    /* $AFB5: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AFB8:;
    /* $AFB8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AFB9:;
    /* $AFB9: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x23; g_cpu.C=(g_cpu.X>=0x23)?1:0; FLAG_NZ(r&0xFF); }
label_AFBB:;
    /* $AFBB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AFB2;
    }
label_AFBD:;
    /* $AFBD: 86 */ maybe_trigger_vblank(3); nes_write(0x21, g_cpu.X);
label_AFBF:;
    /* $AFBF: CE */ maybe_trigger_vblank(6); { uint16_t a=0x06F9; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AFC2:;
    /* $AFC2: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AFC9;
label_AFC4:;
    /* $AFC4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_AFC6:;
    /* $AFC6: 8D */ maybe_trigger_vblank(4); nes_write(0x06F7, g_cpu.A);
label_AFC9:;
    /* $AFC9: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A01F_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A01F_b3");
#endif
label_A01F:;
    /* $A01F: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0444); FLAG_NZ(g_cpu.X);
label_A022:;
    /* $A022: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0463 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A025:;
    /* $A025: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A026:;
    /* $A026: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_A028:;
    /* $A028: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A029:;
    /* $A029: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A028;
    }
label_A02B:;
    /* $A02B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A02C:;
    /* $A02C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A03A;
label_A02E:;
    /* $A02E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9983 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A031:;
    /* $A031: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_A034:;
    /* $A034: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9982 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A037:;
    /* $A037: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_A03A:;
    /* $A03A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x045F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A03D:;
    /* $A03D: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_A040:;
    /* $A040: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0449 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A043:;
    /* $A043: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_A046:;
    /* $A046: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A048:;
    /* $A048: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_A04B:;
    /* $A04B: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0442); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A04E:;
    /* $A04E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A057;
label_A050:;
    /* $A050: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1D); FLAG_NZ(g_cpu.A);
label_A052:;
    /* $A052: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xEF; FLAG_NZ(g_cpu.A);
label_A054:;
    /* $A054: 8D */ maybe_trigger_vblank(4); nes_write(0x2001, g_cpu.A);
label_A057:;
    /* $A057: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0443); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A05A:;
    /* $A05A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A071;
label_A05C:;
    /* $A05C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A05E:;
    /* $A05E: 8C */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.Y);
label_A061:;
    /* $A061: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0536); FLAG_NZ(g_cpu.A);
label_A064:;
    /* $A064: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_A067:;
    /* $A067: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A068:;
    /* $A068: 8C */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.Y);
label_A06B:;
    /* $A06B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0537); FLAG_NZ(g_cpu.A);
label_A06E:;
    /* $A06E: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_A071:;
    /* $A071: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0452); FLAG_NZ(g_cpu.A);
label_A074:;
    /* $A074: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A085;
label_A076:;
    /* $A076: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0444; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A079:;
    /* $A079: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0444); FLAG_NZ(g_cpu.X);
label_A07C:;
    /* $A07C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x044E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 8D */ maybe_trigger_vblank(4); nes_write(0x0452, g_cpu.A);
label_A082:;
    /* $A082: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8088, 3); return;
label_A085:;
    /* $A085: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0441; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A088:;
    /* $A088: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x36); FLAG_NZ(g_cpu.A);
label_A08A:;
    /* $A08A: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_A08D:;
    /* $A08D: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A08E:;
    /* $A08E: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A08F:;
    /* $A08F: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A090:;
    /* $A090: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A091:;
    /* $A091: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A092:;
    /* $A092: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A088_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A088_b3");
#endif
label_A088:;
    /* $A088: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x36); FLAG_NZ(g_cpu.A);
label_A08A:;
    /* $A08A: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_A08D:;
    /* $A08D: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A08E:;
    /* $A08E: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A08F:;
    /* $A08F: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A090:;
    /* $A090: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A091:;
    /* $A091: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A092:;
    /* $A092: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AB9E_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB9E_b3");
#endif
label_AB9E:;
    /* $AB9E: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x07; FLAG_NZ(g_cpu.X);
label_ABA0:;
    /* $ABA0: 86 */ maybe_trigger_vblank(3); nes_write(0x36, g_cpu.X);
label_ABA2:;
    /* $ABA2: 8E */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.X);
label_ABA5:;
    /* $ABA5: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_ABA8:;
    /* $ABA8: 85 */ maybe_trigger_vblank(3); nes_write(0x2A, g_cpu.A);
label_ABAA:;
    /* $ABAA: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A8A2_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8A2_b3");
#endif
label_A8A2:;
    /* $A8A2: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A8A4:;
    /* $A8A4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_A8A6:;
    /* $A8A6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_A8A8:;
    /* $A8A8: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A8AA:;
    /* $A8AA: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) goto label_A8AE;
label_A8AC:;
    /* $A8AC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_A8AE:;
    /* $A8AE: 99 */ maybe_trigger_vblank(5); nes_write((0x0513 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A8B1:;
    /* $A8B1: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A8B3:;
    /* $A8B3: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_A8B9;
label_A8B5:;
    /* $A8B5: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x11; g_cpu.C=(g_cpu.Y>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_A8B7:;
    /* $A8B7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A8BC;
label_A8B9:;
    /* $A8B9: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A8BA:;
    /* $A8BA: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8AE;
    }
label_A8BC:;
    /* $A8BC: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8BE:;
    /* $A8BE: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A8C0:;
    /* $A8C0: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) goto label_A8CC;
label_A8C2:;
    /* $A8C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x38; FLAG_NZ(g_cpu.A);
label_A8C4:;
    /* $A8C4: 8D */ maybe_trigger_vblank(4); nes_write(0x0514, g_cpu.A);
label_A8C7:;
    /* $A8C7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x27; FLAG_NZ(g_cpu.A);
label_A8C9:;
    /* $A8C9: 8D */ maybe_trigger_vblank(4); nes_write(0x0516, g_cpu.A);
label_A8CC:;
    /* $A8CC: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x21); FLAG_NZ(g_cpu.X);
label_A8CE:;
    /* $A8CE: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A8D0:;
    /* $A8D0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0510 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8D3:;
    /* $A8D3: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A8D6:;
    /* $A8D6: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A8D7:;
    /* $A8D7: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A8D8:;
    /* $A8D8: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x23; g_cpu.C=(g_cpu.Y>=0x23)?1:0; FLAG_NZ(r&0xFF); }
label_A8DA:;
    /* $A8DA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8D0;
    }
label_A8DC:;
    /* $A8DC: 86 */ maybe_trigger_vblank(3); nes_write(0x21, g_cpu.X);
label_A8DE:;
    /* $A8DE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A2C1_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A2C1_b3");
#endif
label_A2C1:;
    /* $A2C1: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x21); FLAG_NZ(g_cpu.X);
label_A2C3:;
    /* $A2C3: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A2CE;
label_A2C5:;
    /* $A2C5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A2C7:;
    /* $A2C7: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A2CA:;
    /* $A2CA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A2CC:;
    /* $A2CC: 85 */ maybe_trigger_vblank(3); nes_write(0x1F, g_cpu.A);
label_A2CE:;
    /* $A2CE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1E); FLAG_NZ(g_cpu.A);
label_A2D0:;
    /* $A2D0: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A2CE;
    }
label_A2D2:;
    /* $A2D2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A2D4:;
    /* $A2D4: 85 */ maybe_trigger_vblank(3); nes_write(0x1E, g_cpu.A);
label_A2D6:;
    /* $A2D6: 85 */ maybe_trigger_vblank(3); nes_write(0x21, g_cpu.A);
label_A2D8:;
    /* $A2D8: 85 */ maybe_trigger_vblank(3); nes_write(0x22, g_cpu.A);
label_A2DA:;
    /* $A2DA: 8D */ maybe_trigger_vblank(4); nes_write(0x0444, g_cpu.A);
label_A2DD:;
    /* $A2DD: 8D */ maybe_trigger_vblank(4); nes_write(0x0441, g_cpu.A);
label_A2E0:;
    /* $A2E0: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044E); FLAG_NZ(g_cpu.A);
label_A2E3:;
    /* $A2E3: 8D */ maybe_trigger_vblank(4); nes_write(0x0452, g_cpu.A);
label_A2E6:;
    /* $A2E6: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_A1AD_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A1BE;
    }
label_A1AD:;
    /* $A1AD: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8F6D, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A1B0:;
    /* $A1B0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_A1B2:;
    /* $A1B2: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x81CA, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A1B5:;
    /* $A1B5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x24; FLAG_NZ(g_cpu.A);
label_A1B7:;
    /* $A1B7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A1B8:;
    /* $A1B8: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0501); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A1BB:;
    /* $A1BB: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x81CA, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A1BE:;
    /* $A1BE: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1D); FLAG_NZ(g_cpu.A);
label_A1C0:;
    /* $A1C0: 8D */ maybe_trigger_vblank(4); nes_write(0x2001, g_cpu.A);
label_A1C3:;
    /* $A1C3: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_A1C5:;
    /* $A1C5: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_A1C8:;
    /* $A1C8: 58 */ maybe_trigger_vblank(2); g_cpu.I = 0;
label_A1C9:;
    /* $A1C9: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A1AD_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A1AD_b3");
#endif
    func_A1AD_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A1BE_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A1BE_b3");
#endif
    func_A1AD_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A1EC_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A1EC_b3");
#endif
label_A1EC:;
    /* $A1EC: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8F6D, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A1EF:;
    /* $A1EF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1F1:;
    /* $A1F1: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A1F3:;
    /* $A1F3: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x820D, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A1F6:;
    /* $A1F6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A1F8:;
    /* $A1F8: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x01) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A1FA:;
    /* $A1FA: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_A1FD:;
    /* $A1FD: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A1FE:;
    /* $A1FE: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x0E; g_cpu.C=(g_cpu.Y>=0x0E)?1:0; FLAG_NZ(r&0xFF); }
label_A200:;
    /* $A200: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1F8;
    }
label_A202:;
    /* $A202: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A204:;
    /* $A204: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A206:;
    /* $A206: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x20; g_cpu.C=(g_cpu.A>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_A208:;
    /* $A208: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1F3;
    }
label_A20A:;
    /* $A20A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x81BE, 3); return;
}

void func_ABAB_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ABAB_b3");
#endif
label_ABAB:;
    /* $ABAB: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_ABAD:;
    /* $ABAD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF8; FLAG_NZ(g_cpu.A);
label_ABAF:;
    /* $ABAF: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ABB2:;
    /* $ABB2: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ABB3:;
    /* $ABB3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ABB4:;
    /* $ABB4: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ABB5:;
    /* $ABB5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ABB6:;
    /* $ABB6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_ABAF;
    }
label_ABB8:;
    /* $ABB8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A22C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A22C_b3");
#endif
label_A22C:;
    /* $A22C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x33); FLAG_NZ(g_cpu.A);
label_A22E:;
    /* $A22E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A22F:;
    /* $A22F: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x046B); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A232:;
    /* $A232: 85 */ maybe_trigger_vblank(3); nes_write(0x33, g_cpu.A);
label_A234:;
    /* $A234: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x34); FLAG_NZ(g_cpu.A);
label_A236:;
    /* $A236: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x046C); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A239:;
    /* $A239: 85 */ maybe_trigger_vblank(3); nes_write(0x34, g_cpu.A);
label_A23B:;
    /* $A23B: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_A23D:;
    /* $A23D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_A250;
label_A23F:;
    /* $A23F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A241:;
    /* $A241: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x046C); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A244:;
    /* $A244: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_A248;
label_A246:;
    /* $A246: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xE0; FLAG_NZ(g_cpu.A);
label_A248:;
    /* $A248: 85 */ maybe_trigger_vblank(3); nes_write(0x34, g_cpu.A);
label_A24A:;
    /* $A24A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_A24C:;
    /* $A24C: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_A24E:;
    /* $A24E: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_A250:;
    /* $A250: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x2F); FLAG_NZ(g_cpu.A);
label_A252:;
    /* $A252: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A253:;
    /* $A253: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0469); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A256:;
    /* $A256: 85 */ maybe_trigger_vblank(3); nes_write(0x2F, g_cpu.A);
label_A258:;
    /* $A258: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_A25A:;
    /* $A25A: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x046A); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A25D:;
    /* $A25D: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_A25F:;
    /* $A25F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A261:;
    /* $A261: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A262:;
    /* $A262: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x046A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A265:;
    /* $A265: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_A269;
label_A267:;
    /* $A267: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_A269:;
    /* $A269: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_A26B:;
    /* $A26B: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_A26D:;
    /* $A26D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A26F:;
    /* $A26F: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0445 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A272:;
    /* $A272: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A273:;
    /* $A273: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0453 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A276:;
    /* $A276: 9D */ maybe_trigger_vblank(5); nes_write((0x0445 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A279:;
    /* $A279: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0457 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A27C:;
    /* $A27C: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A27E:;
    /* $A27E: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0449 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A281:;
    /* $A281: 9D */ maybe_trigger_vblank(5); nes_write((0x0449 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A284:;
    /* $A284: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A286:;
    /* $A286: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A287:;
    /* $A287: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A289:;
    /* $A289: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_A28D;
label_A28B:;
    /* $A28B: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_A28D:;
    /* $A28D: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x045F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A290:;
    /* $A290: 9D */ maybe_trigger_vblank(5); nes_write((0x045F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A293:;
    /* $A293: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A294:;
    /* $A294: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x04; g_cpu.C=(g_cpu.X>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A296:;
    /* $A296: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A26F;
    }
label_A298:;
    /* $A298: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0503); FLAG_NZ(g_cpu.Y);
label_A29B:;
    /* $A29B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A2C0;
label_A29D:;
    /* $A29D: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0467; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2A0:;
    /* $A2A0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A2C0;
label_A2A2:;
    /* $A2A2: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0468); FLAG_NZ(g_cpu.A);
label_A2A5:;
    /* $A2A5: 8D */ maybe_trigger_vblank(4); nes_write(0x0467, g_cpu.A);
label_A2A8:;
    /* $A2A8: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A2AA:;
    /* $A2AA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x044D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2AD:;
    /* $A2AD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A2BB;
label_A2AF:;
    /* $A2AF: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A2B0:;
    /* $A2B0: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x045B + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A2B3:;
    /* $A2B3: 9D */ maybe_trigger_vblank(5); nes_write((0x044D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A2B6:;
    /* $A2B6: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A2B7:;
    /* $A2B7: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x04; g_cpu.C=(g_cpu.X>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A2B9:;
    /* $A2B9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A2AA;
    }
label_A2BB:;
    /* $A2BB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044D); FLAG_NZ(g_cpu.A);
label_A2BE:;
    /* $A2BE: 85 */ maybe_trigger_vblank(3); nes_write(0x20, g_cpu.A);
label_A2C0:;
    /* $A2C0: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_A9A1_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_AA06;
    }
label_A9A1:;
    /* $A9A1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0428); FLAG_NZ(g_cpu.A);
label_A9A4:;
    /* $A9A4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A9AA;
label_A9A6:;
    /* $A9A6: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0428; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A9A9:;
    /* $A9A9: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A9AA:;
    /* $A9AA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0429); FLAG_NZ(g_cpu.A);
label_A9AD:;
    /* $A9AD: 8D */ maybe_trigger_vblank(4); nes_write(0x0428, g_cpu.A);
label_A9B0:;
    /* $A9B0: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x82E7, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A9B3:;
    /* $A9B3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0427); FLAG_NZ(g_cpu.A);
label_A9B6:;
    /* $A9B6: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A9B8:;
    /* $A9B8: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A9BA:;
    /* $A9BA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042A); FLAG_NZ(g_cpu.A);
label_A9BD:;
    /* $A9BD: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_A9C1;
label_A9BF:;
    /* $A9BF: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x10; FLAG_NZ(g_cpu.X);
label_A9C1:;
    /* $A9C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042B); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A9CD;
label_A9C6:;
    /* $A9C6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_A9C8:;
    /* $A9C8: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A9C9:;
    /* $A9C9: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9CB:;
    /* $A9CB: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A9CD:;
    /* $A9CD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0513 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9D0:;
    /* $A9D0: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A9D1:;
    /* $A9D1: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9D3:;
    /* $A9D3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_A9D7;
label_A9D5:;
    /* $A9D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_A9D7:;
    /* $A9D7: 9D */ maybe_trigger_vblank(5); nes_write((0x0513 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A9DA:;
    /* $A9DA: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A9DB:;
    /* $A9DB: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x10; g_cpu.C=(g_cpu.X>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_A9DD:;
    /* $A9DD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A9E4;
label_A9DF:;
    /* $A9DF: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x042A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A9E2:;
    /* $A9E2: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) goto label_A9E8;
label_A9E4:;
    /* $A9E4: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x20; g_cpu.C=(g_cpu.X>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_A9E6:;
    /* $A9E6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A9CD;
    }
label_A9E8:;
    /* $A9E8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0427); FLAG_NZ(g_cpu.A);
label_A9EB:;
    /* $A9EB: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9EC:;
    /* $A9EC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_A9EE:;
    /* $A9EE: 8D */ maybe_trigger_vblank(4); nes_write(0x0427, g_cpu.A);
label_A9F1:;
    /* $A9F1: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x50; FLAG_NZ(g_cpu.A);
label_A9F3:;
    /* $A9F3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A9F8;
label_A9F5:;
    /* $A9F5: 8D */ maybe_trigger_vblank(4); nes_write(0x0427, g_cpu.A);
label_A9F8:;
    /* $A9F8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042A); FLAG_NZ(g_cpu.A);
label_A9FB:;
    /* $A9FB: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_A9FD:;
    /* $A9FD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AA09;
label_A9FF:;
    /* $A9FF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x38; FLAG_NZ(g_cpu.A);
label_AA01:;
    /* $AA01: 8D */ maybe_trigger_vblank(4); nes_write(0x0514, g_cpu.A);
label_AA04:;
    /* $AA04: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x27; FLAG_NZ(g_cpu.A);
label_AA06:;
    /* $AA06: 8D */ maybe_trigger_vblank(4); nes_write(0x0516, g_cpu.A);
label_AA09:;
    /* $AA09: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x88CC, 3); return;
}

void func_A9A1_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9A1_b3");
#endif
    func_A9A1_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AA06_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA06_b3");
#endif
    func_A9A1_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AA0C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA0C_b3");
#endif
label_AA0C:;
    /* $AA0C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042E); FLAG_NZ(g_cpu.A);
label_AA0F:;
    /* $AA0F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AA15;
label_AA11:;
    /* $AA11: CE */ maybe_trigger_vblank(6); { uint16_t a=0x042E; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA14:;
    /* $AA14: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA15:;
    /* $AA15: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x042D); FLAG_NZ(g_cpu.X);
label_AA18:;
    /* $AA18: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x97B7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA1B:;
    /* $AA1B: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_AA1D:;
    /* $AA1D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x97B8 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA20:;
    /* $AA20: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_AA22:;
    /* $AA22: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042F); FLAG_NZ(g_cpu.A);
label_AA25:;
    /* $AA25: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AA26:;
    /* $AA26: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AA27:;
    /* $AA27: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA29:;
    /* $AA29: 8D */ maybe_trigger_vblank(4); nes_write(0x042E, g_cpu.A);
label_AA2C:;
    /* $AA2C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AA2D:;
    /* $AA2D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA2F:;
    /* $AA2F: 8D */ maybe_trigger_vblank(4); nes_write(0x0507, g_cpu.A);
label_AA32:;
    /* $AA32: EE */ maybe_trigger_vblank(6); { uint16_t a=0x042F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA35:;
    /* $AA35: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042C); FLAG_NZ(g_cpu.A);
label_AA38:;
    /* $AA38: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x042F); FLAG_NZ(g_cpu.A);
label_AA3B:;
    /* $AA3B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AA40;
label_AA3D:;
    /* $AA3D: 8D */ maybe_trigger_vblank(4); nes_write(0x042F, g_cpu.A);
label_AA40:;
    /* $AA40: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x832A, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_AA43:;
    /* $AA43: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0538); FLAG_NZ(g_cpu.A);
label_AA46:;
    /* $AA46: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AA4E;
label_AA48:;
    /* $AA48: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0539); FLAG_NZ(g_cpu.A);
label_AA4B:;
    /* $AA4B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AA4E;
label_AA4D:;
    /* $AA4D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AA4E:;
    /* $AA4E: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x88CC, 3); return;
}

static void func_AC92_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_ACBB;
        case 2: goto label_ADE0;
        case 3: goto label_ADF6;
        case 4: goto label_ADC6;
        case 5: goto label_AD23;
        case 6: goto label_AD8C;
    }
label_AC92:;
    /* $AC92: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_AC94:;
    /* $AC94: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8B9E, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_AC97:;
    /* $AC97: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x043C); FLAG_NZ(g_cpu.A);
label_AC9A:;
    /* $AC9A: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF5; g_cpu.C=(g_cpu.A>=0xF5)?1:0; FLAG_NZ(r&0xFF); }
label_AC9C:;
    /* $AC9C: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_AD00;
label_AC9E:;
    /* $AC9E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0438); FLAG_NZ(g_cpu.A);
label_ACA1:;
    /* $ACA1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_ACB0;
label_ACA3:;
    /* $ACA3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0437); FLAG_NZ(g_cpu.A);
label_ACA6:;
    /* $ACA6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_ACB4;
label_ACA8:;
    /* $ACA8: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0437; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ACAB:;
    /* $ACAB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_ACAD:;
    /* $ACAD: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_ACB0:;
    /* $ACB0: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0438; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ACB3:;
    /* $ACB3: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_ACB4:;
    /* $ACB4: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_ACB5:;
    /* $ACB5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0439); FLAG_NZ(g_cpu.A);
label_ACB8:;
    /* $ACB8: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_ACBB:;
    /* $ACBB: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8E50, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_ACBE:;
    /* $ACBE: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF5; g_cpu.C=(g_cpu.A>=0xF5)?1:0; FLAG_NZ(r&0xFF); }
label_ACC0:;
    /* $ACC0: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_AD00;
label_ACC2:;
    /* $ACC2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_ACC3:;
    /* $ACC3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x82; FLAG_NZ(g_cpu.A);
label_ACC5:;
    /* $ACC5: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8E3E, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_ACC8:;
    /* $ACC8: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_ACC9:;
    /* $ACC9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB0; g_cpu.C=(g_cpu.A>=0xB0)?1:0; FLAG_NZ(r&0xFF); }
label_ACCB:;
    /* $ACCB: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_ACEE;
label_ACCD:;
    /* $ACCD: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_ACCF:;
    /* $ACCF: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_ACE2;
label_ACD1:;
    /* $ACD1: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_ACD2:;
    /* $ACD2: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xB0; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ACD4:;
    /* $ACD4: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_ACD5:;
    /* $ACD5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5D; FLAG_NZ(g_cpu.A);
label_ACD7:;
    /* $ACD7: 9D */ maybe_trigger_vblank(5); nes_write((0x03A3 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACDA:;
    /* $ACDA: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8FF8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ACDD:;
    /* $ACDD: 9D */ maybe_trigger_vblank(5); nes_write((0x03A4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACE0:;
    /* $ACE0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_ACF6;
label_ACE2:;
    /* $ACE2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_ACE4:;
    /* $ACE4: 9D */ maybe_trigger_vblank(5); nes_write((0x03A4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACE7:;
    /* $ACE7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5C; FLAG_NZ(g_cpu.A);
label_ACE9:;
    /* $ACE9: 9D */ maybe_trigger_vblank(5); nes_write((0x03A3 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACEC:;
    /* $ACEC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_ACF6;
label_ACEE:;
    /* $ACEE: 9D */ maybe_trigger_vblank(5); nes_write((0x03A4 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACF1:;
    /* $ACF1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_ACF3:;
    /* $ACF3: 9D */ maybe_trigger_vblank(5); nes_write((0x03A3 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ACF6:;
    /* $ACF6: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_ACF7:;
    /* $ACF7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ACF8:;
    /* $ACF8: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x05 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x05); g_cpu.A=r&0xFF; }
label_ACFA:;
    /* $ACFA: 85 */ maybe_trigger_vblank(3); nes_write(0x21, g_cpu.A);
label_ACFC:;
    /* $ACFC: EE */ maybe_trigger_vblank(6); { uint16_t a=0x043A; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ACFF:;
    /* $ACFF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AD00:;
    /* $AD00: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AD01:;
    /* $AD01: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xF5; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AD03:;
    /* $AD03: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AD04:;
    /* $AD04: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AD22;
label_AD06:;
    /* $AD06: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8E50, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_AD09:;
    /* $AD09: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AD0A:;
    /* $AD0A: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_AD0B:;
    /* $AD0B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0C); FLAG_NZ(g_cpu.A);
label_AD0D:;
    /* $AD0D: 8D */ maybe_trigger_vblank(4); nes_write(0x043F, g_cpu.A);
label_AD10:;
    /* $AD10: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA000 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD13:;
    /* $AD13: 85 */ maybe_trigger_vblank(3); nes_write(0x0C, g_cpu.A);
label_AD15:;
    /* $AD15: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0D); FLAG_NZ(g_cpu.A);
label_AD17:;
    /* $AD17: 8D */ maybe_trigger_vblank(4); nes_write(0x0440, g_cpu.A);
label_AD1A:;
    /* $AD1A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA001 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD1D:;
    /* $AD1D: 85 */ maybe_trigger_vblank(3); nes_write(0x0D, g_cpu.A);
label_AD1F:;
    /* $AD1F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8CBB, 3); return;
label_AD22:;
    /* $AD22: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AD23:;
    /* $AD23: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AD32;
label_AD25:;
    /* $AD25: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x043F); FLAG_NZ(g_cpu.A);
label_AD28:;
    /* $AD28: 85 */ maybe_trigger_vblank(3); nes_write(0x0C, g_cpu.A);
label_AD2A:;
    /* $AD2A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0440); FLAG_NZ(g_cpu.A);
label_AD2D:;
    /* $AD2D: 85 */ maybe_trigger_vblank(3); nes_write(0x0D, g_cpu.A);
label_AD2F:;
    /* $AD2F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8CBB, 3); return;
label_AD32:;
    /* $AD32: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AD33:;
    /* $AD33: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AD3C;
label_AD35:;
    /* $AD35: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8E50, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_AD38:;
    /* $AD38: 8D */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.A);
label_AD3B:;
    /* $AD3B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AD3C:;
    /* $AD3C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AD3D:;
    /* $AD3D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AD45;
label_AD3F:;
    /* $AD3F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x043D; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AD42:;
    /* $AD42: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8E59, 3); return;
label_AD45:;
    /* $AD45: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AD46:;
    /* $AD46: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AD5C;
label_AD48:;
    /* $AD48: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFC; FLAG_NZ(g_cpu.A);
label_AD4A:;
    /* $AD4A: 8D */ maybe_trigger_vblank(4); nes_write(0x043C, g_cpu.A);
label_AD4D:;
    /* $AD4D: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x043D); FLAG_NZ(g_cpu.X);
label_AD50:;
    /* $AD50: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9006 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD53:;
    /* $AD53: 8D */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.A);
label_AD56:;
    /* $AD56: 8C */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.Y);
label_AD59:;
    /* $AD59: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8E59, 3); return;
label_AD5C:;
    /* $AD5C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AD5D:;
    /* $AD5D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AD66;
label_AD5F:;
    /* $AD5F: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8E50, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_AD62:;
    /* $AD62: 8D */ maybe_trigger_vblank(4); nes_write(0x0437, g_cpu.A);
label_AD65:;
    /* $AD65: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AD66:;
    /* $AD66: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AD67:;
    /* $AD67: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AD6C;
label_AD69:;
    /* $AD69: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8DF7, 3); return;
label_AD6C:;
    /* $AD6C: 8C */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.Y);
label_AD6F:;
    /* $AD6F: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x21); FLAG_NZ(g_cpu.X);
label_AD71:;
    /* $AD71: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8E50, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_AD74:;
    /* $AD74: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD77:;
    /* $AD77: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_AD79:;
    /* $AD79: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AD7A:;
    /* $AD7A: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8E50, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_AD7D:;
    /* $AD7D: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD80:;
    /* $AD80: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_AD82:;
    /* $AD82: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AD83:;
    /* $AD83: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8E50, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_AD86:;
    /* $AD86: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AD89:;
    /* $AD89: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_AD8B:;
    /* $AD8B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AD8C:;
    /* $AD8C: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x0C) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AD8E:;
    /* $AD8E: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_ADA0;
label_AD90:;
    /* $AD90: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xB0; g_cpu.C=(g_cpu.A>=0xB0)?1:0; FLAG_NZ(r&0xFF); }
label_AD92:;
    /* $AD92: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_ADA0;
label_AD94:;
    /* $AD94: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_AD96:;
    /* $AD96: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_AD9C;
label_AD98:;
    /* $AD98: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5D; FLAG_NZ(g_cpu.A);
label_AD9A:;
    /* $AD9A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_ADA2;
label_AD9C:;
    /* $AD9C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5C; FLAG_NZ(g_cpu.A);
label_AD9E:;
    /* $AD9E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_ADA2;
label_ADA0:;
    /* $ADA0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_ADA2:;
    /* $ADA2: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ADA5:;
    /* $ADA5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ADA6:;
    /* $ADA6: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_ADA7:;
    /* $ADA7: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_ADA9:;
    /* $ADA9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AD8C;
    }
label_ADAB:;
    /* $ADAB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_ADAD:;
    /* $ADAD: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ADB0:;
    /* $ADB0: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ADB1:;
    /* $ADB1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_ADB3:;
    /* $ADB3: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ADB4:;
    /* $ADB4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_ADB6:;
    /* $ADB6: 9D */ maybe_trigger_vblank(5); nes_write((0x03A1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ADB9:;
    /* $ADB9: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_ADBD;
label_ADBB:;
    /* $ADBB: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ADBD:;
    /* $ADBD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_ADBF:;
    /* $ADBF: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ADC2:;
    /* $ADC2: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ADC3:;
    /* $ADC3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ADC4:;
    /* $ADC4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_ADC6:;
    /* $ADC6: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x0C) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ADC8:;
    /* $ADC8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xA0; g_cpu.C=(g_cpu.A>=0xA0)?1:0; FLAG_NZ(r&0xFF); }
label_ADCA:;
    /* $ADCA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_ADE0;
label_ADCC:;
    /* $ADCC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_ADCE:;
    /* $ADCE: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_ADDE;
label_ADD0:;
    /* $ADD0: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_ADD2:;
    /* $ADD2: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_ADD3:;
    /* $ADD3: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xB0; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ADD5:;
    /* $ADD5: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_ADD6:;
    /* $ADD6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8FF8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ADD9:;
    /* $ADD9: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x04); FLAG_NZ(g_cpu.Y);
label_ADDB:;
    /* $ADDB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8DE0, 3); return;
label_ADDE:;
    /* $ADDE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_ADE0:;
    /* $ADE0: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ADE3:;
    /* $ADE3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ADE4:;
    /* $ADE4: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_ADE5:;
    /* $ADE5: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_ADE7:;
    /* $ADE7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_ADC6;
    }
label_ADE9:;
    /* $ADE9: 86 */ maybe_trigger_vblank(3); nes_write(0x21, g_cpu.X);
label_ADEB:;
    /* $ADEB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_ADED:;
    /* $ADED: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ADEE:;
    /* $ADEE: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0C); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ADF0:;
    /* $ADF0: 85 */ maybe_trigger_vblank(3); nes_write(0x0C, g_cpu.A);
label_ADF2:;
    /* $ADF2: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_ADF6;
label_ADF4:;
    /* $ADF4: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x0D; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ADF6:;
    /* $ADF6: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AC92_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC92_b3");
#endif
    func_AC92_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ACBB_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ACBB_b3");
#endif
    func_AC92_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ADE0_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ADE0_b3");
#endif
    func_AC92_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ADF6_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ADF6_b3");
#endif
    func_AC92_b3_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_ADC6_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ADC6_b3");
#endif
    func_AC92_b3_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AD23_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD23_b3");
#endif
    func_AC92_b3_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AD8C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD8C_b3");
#endif
    func_AC92_b3_body(6);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AA51_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA51_b3");
#endif
label_AA51:;
    /* $AA51: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0435); FLAG_NZ(g_cpu.Y);
label_AA54:;
    /* $AA54: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x996C + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA57:;
    /* $AA57: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_AA59:;
    /* $AA59: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x996D + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA5C:;
    /* $AA5C: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_AA5E:;
    /* $AA5E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0432); FLAG_NZ(g_cpu.A);
label_AA61:;
    /* $AA61: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_AA63:;
    /* $AA63: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AA64:;
    /* $AA64: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA66:;
    /* $AA66: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_AA67:;
    /* $AA67: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AA68:;
    /* $AA68: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AA69:;
    /* $AA69: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AA6A:;
    /* $AA6A: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_AA6B:;
    /* $AA6B: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_AA6D:;
    /* $AA6D: 8D */ maybe_trigger_vblank(4); nes_write(0x0433, g_cpu.A);
label_AA70:;
    /* $AA70: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0431); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AA73:;
    /* $AA73: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_AA87;
label_AA75:;
    /* $AA75: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_AA76:;
    /* $AA76: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_AA78:;
    /* $AA78: 85 */ maybe_trigger_vblank(3); nes_write(0x34, g_cpu.A);
label_AA7A:;
    /* $AA7A: 8D */ maybe_trigger_vblank(4); nes_write(0x0434, g_cpu.A);
label_AA7D:;
    /* $AA7D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_AA7F:;
    /* $AA7F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x30); FLAG_NZ(g_cpu.A);
label_AA81:;
    /* $AA81: 9D */ maybe_trigger_vblank(5); nes_write((0x0449 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AA84:;
    /* $AA84: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_AA85:;
    /* $AA85: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AA81;
    }
label_AA87:;
    /* $AA87: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0432; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AA8A:;
    /* $AA8A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AEC6_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AEC6_b3");
#endif
label_AEC6:;
    /* $AEC6: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_AEC8:;
    /* $AEC8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0539); FLAG_NZ(g_cpu.A);
label_AECB:;
    /* $AECB: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AED1;
label_AECD:;
    /* $AECD: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0539; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AED0:;
    /* $AED0: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AED1:;
    /* $AED1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x053E); FLAG_NZ(g_cpu.A);
label_AED4:;
    /* $AED4: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_AED6:;
    /* $AED6: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x053C); FLAG_NZ(g_cpu.Y);
label_AED9:;
    /* $AED9: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x974F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEDC:;
    /* $AEDC: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_AEDE:;
    /* $AEDE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9750 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEE1:;
    /* $AEE1: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_AEE3:;
    /* $AEE3: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9783 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEE6:;
    /* $AEE6: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_AEE8:;
    /* $AEE8: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9784 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEEB:;
    /* $AEEB: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_AEED:;
    /* $AEED: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x053D); FLAG_NZ(g_cpu.Y);
label_AEF0:;
    /* $AEF0: EE */ maybe_trigger_vblank(6); { uint16_t a=0x053D; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AEF3:;
    /* $AEF3: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEF5:;
    /* $AEF5: 8D */ maybe_trigger_vblank(4); nes_write(0x0539, g_cpu.A);
label_AEF8:;
    /* $AEF8: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_AEFA:;
    /* $AEFA: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEFC:;
    /* $AEFC: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_AEFD:;
    /* $AEFD: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AEFE:;
    /* $AEFE: 84 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.Y);
label_AF00:;
    /* $AF00: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x053D); FLAG_NZ(g_cpu.Y);
label_AF03:;
    /* $AF03: EE */ maybe_trigger_vblank(6); { uint16_t a=0x053D; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF06:;
    /* $AF06: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF08:;
    /* $AF08: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x05); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AF0A:;
    /* $AF0A: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AF11;
label_AF0C:;
    /* $AF0C: 9D */ maybe_trigger_vblank(5); nes_write((0x0513 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF0F:;
    /* $AF0F: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_AF14;
label_AF11:;
    /* $AF11: 9D */ maybe_trigger_vblank(5); nes_write((0x0508 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AF14:;
    /* $AF14: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x06); FLAG_NZ(g_cpu.Y);
label_AF16:;
    /* $AF16: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0004; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF19:;
    /* $AF19: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AEFA;
    }
label_AF1B:;
    /* $AF1B: EE */ maybe_trigger_vblank(6); { uint16_t a=0x053A; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF1E:;
    /* $AF1E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x053B); FLAG_NZ(g_cpu.A);
label_AF21:;
    /* $AF21: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x053A); FLAG_NZ(g_cpu.A);
label_AF24:;
    /* $AF24: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AF2C;
label_AF26:;
    /* $AF26: 8D */ maybe_trigger_vblank(4); nes_write(0x053A, g_cpu.A);
label_AF29:;
    /* $AF29: 8D */ maybe_trigger_vblank(4); nes_write(0x053D, g_cpu.A);
label_AF2C:;
    /* $AF2C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_AF2E:;
    /* $AF2E: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_AF33;
label_AF30:;
    /* $AF30: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x82E7, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_AF33:;
    /* $AF33: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x88CC, 3); return;
}

void func_AF36_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF36_b3");
#endif
label_AF36:;
    /* $AF36: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0544); FLAG_NZ(g_cpu.A);
label_AF39:;
    /* $AF39: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AF3F;
label_AF3B:;
    /* $AF3B: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0544; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF3E:;
    /* $AF3E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AF3F:;
    /* $AF3F: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0540); FLAG_NZ(g_cpu.X);
label_AF42:;
    /* $AF42: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x994E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF45:;
    /* $AF45: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_AF47:;
    /* $AF47: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x994F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF4A:;
    /* $AF4A: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_AF4C:;
    /* $AF4C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0543); FLAG_NZ(g_cpu.A);
label_AF4F:;
    /* $AF4F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AF50:;
    /* $AF50: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AF51:;
    /* $AF51: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF53:;
    /* $AF53: 8D */ maybe_trigger_vblank(4); nes_write(0x0544, g_cpu.A);
label_AF56:;
    /* $AF56: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AF57:;
    /* $AF57: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AF59:;
    /* $AF59: 8D */ maybe_trigger_vblank(4); nes_write(0x0533, g_cpu.A);
label_AF5C:;
    /* $AF5C: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0543; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AF5F:;
    /* $AF5F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0543); FLAG_NZ(g_cpu.A);
label_AF62:;
    /* $AF62: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x0541); FLAG_NZ(g_cpu.A);
label_AF65:;
    /* $AF65: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AF6A;
label_AF67:;
    /* $AF67: 8D */ maybe_trigger_vblank(4); nes_write(0x0543, g_cpu.A);
label_AF6A:;
    /* $AF6A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8E68, 3); return;
}

static void func_AB74_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_AB88;
        case 2: goto label_AB83;
    }
label_AB74:;
    /* $AB74: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0A; FLAG_NZ(g_cpu.A);
label_AB76:;
    /* $AB76: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8B9E, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_AB79:;
    /* $AB79: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8BAB, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_AB7C:;
    /* $AB7C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_AB7E:;
    /* $AB7E: 8D */ maybe_trigger_vblank(4); nes_write(0x0480, g_cpu.A);
label_AB81:;
    /* $AB81: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_AB83:;
    /* $AB83: 86 */ maybe_trigger_vblank(3); nes_write(0x09, g_cpu.X);
label_AB85:;
    /* $AB85: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x0481 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_AB88:;
    /* $AB88: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AB95;
label_AB8A:;
    /* $AB8A: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8A8B, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_AB8D:;
    /* $AB8D: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0480); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AB90:;
    /* $AB90: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_AB95;
label_AB92:;
    /* $AB92: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8BB9, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_AB95:;
    /* $AB95: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x09); FLAG_NZ(g_cpu.A);
label_AB97:;
    /* $AB97: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AB98:;
    /* $AB98: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_AB9A:;
    /* $AB9A: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_AB9B:;
    /* $AB9B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AB83;
    }
label_AB9D:;
    /* $AB9D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AB74_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB74_b3");
#endif
    func_AB74_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AB88_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB88_b3");
#endif
    func_AB74_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AB83_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB83_b3");
#endif
    func_AB74_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A676_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A676_b3");
#endif
label_A676:;
    /* $A676: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x02; FLAG_NZ(g_cpu.A);
label_A678:;
    /* $A678: 85 */ maybe_trigger_vblank(3); nes_write(0x09, g_cpu.A);
label_A67A:;
    /* $A67A: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x21); FLAG_NZ(g_cpu.X);
label_A67C:;
    /* $A67C: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A67D:;
    /* $A67D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A6E0;
label_A67F:;
    /* $A67F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A681:;
    /* $A681: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_A683:;
    /* $A683: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x87ED, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A686:;
    /* $A686: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A688:;
    /* $A688: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A68B:;
    /* $A68B: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A68C:;
    /* $A68C: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x87CA, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A68F:;
    /* $A68F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFC; FLAG_NZ(g_cpu.A);
label_A691:;
    /* $A691: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x04; FLAG_NZ(g_cpu.Y);
label_A693:;
    /* $A693: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A696:;
    /* $A696: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A697:;
    /* $A697: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A698:;
    /* $A698: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A693;
    }
label_A69A:;
    /* $A69A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_A69C:;
    /* $A69C: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A69E:;
    /* $A69E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A68C;
    }
label_A6A0:;
    /* $A6A0: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0477; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A6A3:;
    /* $A6A3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0477); FLAG_NZ(g_cpu.A);
label_A6A6:;
    /* $A6A6: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x0475); FLAG_NZ(g_cpu.A);
label_A6A9:;
    /* $A6A9: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A6B6;
label_A6AB:;
    /* $A6AB: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0478); FLAG_NZ(g_cpu.A);
label_A6AE:;
    /* $A6AE: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A6AF:;
    /* $A6AF: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x5C; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6B1:;
    /* $A6B1: 8D */ maybe_trigger_vblank(4); nes_write(0x0478, g_cpu.A);
label_A6B4:;
    /* $A6B4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A6D3;
label_A6B6:;
    /* $A6B6: 8D */ maybe_trigger_vblank(4); nes_write(0x0477, g_cpu.A);
label_A6B9:;
    /* $A6B9: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0476; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A6BC:;
    /* $A6BC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0476); FLAG_NZ(g_cpu.A);
label_A6BF:;
    /* $A6BF: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x0474); FLAG_NZ(g_cpu.A);
label_A6C2:;
    /* $A6C2: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A6DA;
label_A6C4:;
    /* $A6C4: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0478); FLAG_NZ(g_cpu.A);
label_A6C7:;
    /* $A6C7: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A6C8:;
    /* $A6C8: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x047B); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A6CB:;
    /* $A6CB: 8D */ maybe_trigger_vblank(4); nes_write(0x0478, g_cpu.A);
label_A6CE:;
    /* $A6CE: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_A6D3;
label_A6D0:;
    /* $A6D0: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0479; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A6D3:;
    /* $A6D3: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A6D5:;
    /* $A6D5: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A67F;
    }
label_A6D7:;
    /* $A6D7: 86 */ maybe_trigger_vblank(3); nes_write(0x21, g_cpu.X);
label_A6D9:;
    /* $A6D9: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A6DA:;
    /* $A6DA: 8D */ maybe_trigger_vblank(4); nes_write(0x046D, g_cpu.A);
label_A6DD:;
    /* $A6DD: 86 */ maybe_trigger_vblank(3); nes_write(0x21, g_cpu.X);
label_A6DF:;
    /* $A6DF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A6E0:;
    /* $A6E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A6E2:;
    /* $A6E2: 85 */ maybe_trigger_vblank(3); nes_write(0x08, g_cpu.A);
label_A6E4:;
    /* $A6E4: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_A6E6:;
    /* $A6E6: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x87ED, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A6E9:;
    /* $A6E9: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8749, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A6EC:;
    /* $A6EC: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A6EF:;
    /* $A6EF: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A6F0:;
    /* $A6F0: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8762, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A6F3:;
    /* $A6F3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A6F5:;
    /* $A6F5: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x87CA, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A6F8:;
    /* $A6F8: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x877C, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A6FB:;
    /* $A6FB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A6FD:;
    /* $A6FD: 85 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.A);
label_A6FF:;
    /* $A6FF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_A701:;
    /* $A701: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A703:;
    /* $A703: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x08); FLAG_NZ(g_cpu.Y);
label_A705:;
    /* $A705: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x04; g_cpu.C=(g_cpu.Y>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A707:;
    /* $A707: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A6F5;
    }
label_A709:;
    /* $A709: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0477; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A70C:;
    /* $A70C: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0477); FLAG_NZ(g_cpu.A);
label_A70F:;
    /* $A70F: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x0475); FLAG_NZ(g_cpu.A);
label_A712:;
    /* $A712: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A71F;
label_A714:;
    /* $A714: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0478); FLAG_NZ(g_cpu.A);
label_A717:;
    /* $A717: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A718:;
    /* $A718: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x5C; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A71A:;
    /* $A71A: 8D */ maybe_trigger_vblank(4); nes_write(0x0478, g_cpu.A);
label_A71D:;
    /* $A71D: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A73C;
label_A71F:;
    /* $A71F: 8D */ maybe_trigger_vblank(4); nes_write(0x0477, g_cpu.A);
label_A722:;
    /* $A722: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0476; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A725:;
    /* $A725: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0476); FLAG_NZ(g_cpu.A);
label_A728:;
    /* $A728: 4D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read(0x0474); FLAG_NZ(g_cpu.A);
label_A72B:;
    /* $A72B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A743;
label_A72D:;
    /* $A72D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0478); FLAG_NZ(g_cpu.A);
label_A730:;
    /* $A730: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A731:;
    /* $A731: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x047B); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A734:;
    /* $A734: 8D */ maybe_trigger_vblank(4); nes_write(0x0478, g_cpu.A);
label_A737:;
    /* $A737: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_A73C;
label_A739:;
    /* $A739: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0479; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A73C:;
    /* $A73C: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x09; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A73E:;
    /* $A73E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A6E0;
    }
label_A740:;
    /* $A740: 86 */ maybe_trigger_vblank(3); nes_write(0x21, g_cpu.X);
label_A742:;
    /* $A742: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A743:;
    /* $A743: 8D */ maybe_trigger_vblank(4); nes_write(0x046D, g_cpu.A);
label_A746:;
    /* $A746: 86 */ maybe_trigger_vblank(3); nes_write(0x21, g_cpu.X);
label_A748:;
    /* $A748: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_A339_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A37A;
        case 2: goto label_A366;
        case 3: goto label_A379;
    }
label_A339:;
    /* $A339: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0420); FLAG_NZ(g_cpu.A);
label_A33C:;
    /* $A33C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A346;
label_A33E:;
    /* $A33E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0421); FLAG_NZ(g_cpu.A);
label_A341:;
    /* $A341: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A34A;
label_A343:;
    /* $A343: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0421; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A346:;
    /* $A346: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0420; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A349:;
    /* $A349: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A34A:;
    /* $A34A: 8D */ maybe_trigger_vblank(4); nes_write(0x0504, g_cpu.A);
label_A34D:;
    /* $A34D: 8D */ maybe_trigger_vblank(4); nes_write(0x0505, g_cpu.A);
label_A350:;
    /* $A350: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A353:;
    /* $A353: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_A356:;
    /* $A356: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A359:;
    /* $A359: 8D */ maybe_trigger_vblank(4); nes_write(0x0421, g_cpu.A);
label_A35C:;
    /* $A35C: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x0420); FLAG_NZ(g_cpu.A);
label_A35F:;
    /* $A35F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_A361:;
    /* $A361: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A37A;
label_A363:;
    /* $A363: 8D */ maybe_trigger_vblank(4); nes_write(0x0423, g_cpu.A);
label_A366:;
    /* $A366: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0504); FLAG_NZ(g_cpu.A);
label_A369:;
    /* $A369: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A371;
label_A36B:;
    /* $A36B: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x82E7, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A36E:;
    /* $A36E: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x88CC, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A371:;
    /* $A371: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0505); FLAG_NZ(g_cpu.A);
label_A374:;
    /* $A374: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A379;
label_A376:;
    /* $A376: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8E68, 3); return;
label_A379:;
    /* $A379: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A37A:;
    /* $A37A: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A37D:;
    /* $A37D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_A37F:;
    /* $A37F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A366;
    }
label_A381:;
    /* $A381: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A383:;
    /* $A383: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_A385:;
    /* $A385: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A386:;
    /* $A386: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A388:;
    /* $A388: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) goto label_A38D;
label_A38A:;
    /* $A38A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8565, 3); return;
label_A38D:;
    /* $A38D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_A392;
label_A38F:;
    /* $A38F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x85E5, 3); return;
label_A392:;
    /* $A392: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A394:;
    /* $A394: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A395:;
    /* $A395: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x79; FLAG_NZ(g_cpu.A);
label_A397:;
    /* $A397: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A398:;
    /* $A398: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A399:;
    /* $A399: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A39A:;
    /* $A39A: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A39B:;
    /* $A39B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8FCA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A39E:;
    /* $A39E: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A3A0:;
    /* $A3A0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8FCB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3A3:;
    /* $A3A3: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A3A5:;
    /* $A3A5: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x06; g_cpu.C=(g_cpu.X>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_A3A7:;
    /* $A3A7: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_A3AC;
label_A3A9:;
    /* $A3A9: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A3AC:;
    /* $A3AC: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A3AE:;
    /* $A3AE: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0x00); maybe_trigger_vblank(2); g_cpu.S = (uint8_t)(g_cpu.S + 2); call_by_address(_jt); } goto label_A37A;
}

void func_A339_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A339_b3");
#endif
    func_A339_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A37A_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A37A_b3");
#endif
    func_A339_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A366_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A366_b3");
#endif
    func_A339_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A379_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A379_b3");
#endif
    func_A339_b3_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AF6D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AF6D_b3");
#endif
label_AF6D:;
    /* $AF6D: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_AF6E:;
    /* $AF6E: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_AF70:;
    /* $AF70: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_AF72:;
    /* $AF72: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_AF75:;
    /* $AF75: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1D); FLAG_NZ(g_cpu.A);
label_AF77:;
    /* $AF77: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xE6; FLAG_NZ(g_cpu.A);
label_AF79:;
    /* $AF79: 8D */ maybe_trigger_vblank(4); nes_write(0x2001, g_cpu.A);
label_AF7C:;
    /* $AF7C: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_A1CA_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A1DB;
        case 2: goto label_A1D8;
    }
label_A1CA:;
    /* $A1CA: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_A1CD:;
    /* $A1CD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1CF:;
    /* $A1CF: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_A1D2:;
    /* $A1D2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFC; FLAG_NZ(g_cpu.A);
label_A1D4:;
    /* $A1D4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_A1D6:;
    /* $A1D6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0xC0; FLAG_NZ(g_cpu.Y);
label_A1D8:;
    /* $A1D8: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_A1DB:;
    /* $A1DB: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A1DC:;
    /* $A1DC: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1D8;
    }
label_A1DE:;
    /* $A1DE: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A1DF:;
    /* $A1DF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1D8;
    }
label_A1E1:;
    /* $A1E1: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x40; FLAG_NZ(g_cpu.Y);
label_A1E3:;
    /* $A1E3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A1E5:;
    /* $A1E5: 8D */ maybe_trigger_vblank(4); nes_write(0x2007, g_cpu.A);
label_A1E8:;
    /* $A1E8: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A1E9:;
    /* $A1E9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A1E5;
    }
label_A1EB:;
    /* $A1EB: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A1CA_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A1CA_b3");
#endif
    func_A1CA_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A1DB_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A1DB_b3");
#endif
    func_A1CA_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A1D8_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A1D8_b3");
#endif
    func_A1CA_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A20D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A20D_b3");
#endif
label_A20D:;
    /* $A20D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0C; FLAG_NZ(g_cpu.A);
label_A20F:;
    /* $A20F: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_A212:;
    /* $A212: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_A214:;
    /* $A214: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_A217:;
    /* $A217: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0000); FLAG_NZ(g_cpu.X);
label_A21A:;
    /* $A21A: 8E */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.X);
label_A21D:;
    /* $A21D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x900A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A220:;
    /* $A220: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A221:;
    /* $A221: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x902A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A224:;
    /* $A224: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A226:;
    /* $A226: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x902B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A229:;
    /* $A229: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A22B:;
    /* $A22B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A870_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A870_b3");
#endif
label_A870:;
    /* $A870: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A872:;
    /* $A872: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x0A) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A874:;
    /* $A874: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x0A; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A876:;
    /* $A876: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A87A;
label_A878:;
    /* $A878: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x0B; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A87A:;
    /* $A87A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A2E7_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A2E7_b3");
#endif
label_A2E7:;
    /* $A2E7: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A2E9:;
    /* $A2E9: 86 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.X);
label_A2EB:;
    /* $A2EB: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0508 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A2EE:;
    /* $A2EE: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A2F0:;
    /* $A2F0: 86 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.X);
label_A2F2:;
    /* $A2F2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A2F3:;
    /* $A2F3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A2F5:;
    /* $A2F5: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A2F7:;
    /* $A2F7: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A2F8:;
    /* $A2F8: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A2FA:;
    /* $A2FA: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A2FB:;
    /* $A2FB: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A2FC:;
    /* $A2FC: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A2FE:;
    /* $A2FE: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A300:;
    /* $A300: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_A302:;
    /* $A302: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x94 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x94); g_cpu.A=r&0xFF; }
label_A304:;
    /* $A304: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A306:;
    /* $A306: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A308:;
    /* $A308: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A309:;
    /* $A309: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xDF + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xDF); g_cpu.A=r&0xFF; }
label_A30B:;
    /* $A30B: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A30D:;
    /* $A30D: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_A311;
label_A30F:;
    /* $A30F: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A311:;
    /* $A311: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x04); FLAG_NZ(g_cpu.X);
label_A313:;
    /* $A313: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A315:;
    /* $A315: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A317:;
    /* $A317: 9D */ maybe_trigger_vblank(5); nes_write((0x0514 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A31A:;
    /* $A31A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A31B:;
    /* $A31B: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A31C:;
    /* $A31C: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x03; g_cpu.C=(g_cpu.Y>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A31E:;
    /* $A31E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A315;
    }
label_A320:;
    /* $A320: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A321:;
    /* $A321: 86 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.X);
label_A323:;
    /* $A323: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x01); FLAG_NZ(g_cpu.X);
label_A325:;
    /* $A325: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A326:;
    /* $A326: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x08; g_cpu.C=(g_cpu.X>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_A328:;
    /* $A328: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A2EB;
    }
label_A32A:;
    /* $A32A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0507); FLAG_NZ(g_cpu.A);
label_A32D:;
    /* $A32D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1C; FLAG_NZ(g_cpu.X);
label_A32F:;
    /* $A32F: 9D */ maybe_trigger_vblank(5); nes_write((0x0513 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A332:;
    /* $A332: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A333:;
    /* $A333: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A334:;
    /* $A334: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A335:;
    /* $A335: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A336:;
    /* $A336: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A32F;
    }
label_A338:;
    /* $A338: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AE68_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE68_b3");
#endif
label_AE68:;
    /* $AE68: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_AE6A:;
    /* $AE6A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0533); FLAG_NZ(g_cpu.A);
label_AE6D:;
    /* $AE6D: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_AE78;
label_AE6F:;
    /* $AE6F: 85 */ maybe_trigger_vblank(3); nes_write(0x23, g_cpu.A);
label_AE71:;
    /* $AE71: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AE72:;
    /* $AE72: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_AE74:;
    /* $AE74: 85 */ maybe_trigger_vblank(3); nes_write(0x24, g_cpu.A);
label_AE76:;
    /* $AE76: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AE84;
label_AE78:;
    /* $AE78: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AE79:;
    /* $AE79: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AE7A:;
    /* $AE7A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9303 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE7D:;
    /* $AE7D: 85 */ maybe_trigger_vblank(3); nes_write(0x23, g_cpu.A);
label_AE7F:;
    /* $AE7F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9304 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE82:;
    /* $AE82: 85 */ maybe_trigger_vblank(3); nes_write(0x24, g_cpu.A);
label_AE84:;
    /* $AE84: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0534); FLAG_NZ(g_cpu.A);
label_AE87:;
    /* $AE87: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_AE96;
label_AE89:;
    /* $AE89: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AE8A:;
    /* $AE8A: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_AE8C:;
    /* $AE8C: 94 */ maybe_trigger_vblank(4); nes_write((0x25 + g_cpu.X) & 0xFF, g_cpu.Y);
label_AE8E:;
    /* $AE8E: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AE8F:;
    /* $AE8F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AE90:;
    /* $AE90: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x04; g_cpu.C=(g_cpu.X>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AE92:;
    /* $AE92: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AE8C;
    }
label_AE94:;
    /* $AE94: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AEA6;
label_AE96:;
    /* $AE96: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AE97:;
    /* $AE97: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AE98:;
    /* $AE98: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AE99:;
    /* $AE99: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_AE9B:;
    /* $AE9B: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9345 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE9E:;
    /* $AE9E: 95 */ maybe_trigger_vblank(4); nes_write((0x25 + g_cpu.X) & 0xFF, g_cpu.A);
label_AEA0:;
    /* $AEA0: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AEA1:;
    /* $AEA1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AEA2:;
    /* $AEA2: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x04; g_cpu.C=(g_cpu.X>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_AEA4:;
    /* $AEA4: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AE9B;
    }
label_AEA6:;
    /* $AEA6: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_AEA8:;
    /* $AEA8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0535); FLAG_NZ(g_cpu.A);
label_AEAB:;
    /* $AEAB: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_AEB7;
label_AEAD:;
    /* $AEAD: 8D */ maybe_trigger_vblank(4); nes_write(0x0536, g_cpu.A);
label_AEB0:;
    /* $AEB0: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AEB1:;
    /* $AEB1: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x02 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x02); g_cpu.A=r&0xFF; }
label_AEB3:;
    /* $AEB3: 8D */ maybe_trigger_vblank(4); nes_write(0x0537, g_cpu.A);
label_AEB6:;
    /* $AEB6: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AEB7:;
    /* $AEB7: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AEB8:;
    /* $AEB8: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AEB9:;
    /* $AEB9: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9303 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEBC:;
    /* $AEBC: 8D */ maybe_trigger_vblank(4); nes_write(0x0536, g_cpu.A);
label_AEBF:;
    /* $AEBF: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9304 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AEC2:;
    /* $AEC2: 8D */ maybe_trigger_vblank(4); nes_write(0x0537, g_cpu.A);
label_AEC5:;
    /* $AEC5: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_A565_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A591;
    }
label_A565:;
    /* $A565: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A568:;
    /* $A568: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A569:;
    /* $A569: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A56A:;
    /* $A56A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9983 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A56D:;
    /* $A56D: 8D */ maybe_trigger_vblank(4); nes_write(0x0479, g_cpu.A);
label_A570:;
    /* $A570: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9982 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A573:;
    /* $A573: 8D */ maybe_trigger_vblank(4); nes_write(0x0478, g_cpu.A);
label_A576:;
    /* $A576: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A578:;
    /* $A578: 8D */ maybe_trigger_vblank(4); nes_write(0x0476, g_cpu.A);
label_A57B:;
    /* $A57B: 8D */ maybe_trigger_vblank(4); nes_write(0x0477, g_cpu.A);
label_A57E:;
    /* $A57E: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A581:;
    /* $A581: 8E */ maybe_trigger_vblank(4); nes_write(0x046D, g_cpu.X);
label_A584:;
    /* $A584: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A585:;
    /* $A585: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A58D;
label_A587:;
    /* $A587: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8656, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A58A:;
    /* $A58A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x837A, 3); return;
label_A58D:;
    /* $A58D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A58E:;
    /* $A58E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A58F:;
    /* $A58F: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_A591:;
    /* $A591: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8B9E, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A594:;
    /* $A594: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA00E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A597:;
    /* $A597: 85 */ maybe_trigger_vblank(3); nes_write(0x0E, g_cpu.A);
label_A599:;
    /* $A599: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA00F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A59C:;
    /* $A59C: 85 */ maybe_trigger_vblank(3); nes_write(0x0F, g_cpu.A);
label_A59E:;
    /* $A59E: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A5A0:;
    /* $A5A0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x0E) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5A2:;
    /* $A5A2: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A5A3:;
    /* $A5A3: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A5A5:;
    /* $A5A5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A5A7:;
    /* $A5A7: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5A8:;
    /* $A5A8: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A5A9:;
    /* $A5A9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA004 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5AC:;
    /* $A5AC: 8D */ maybe_trigger_vblank(4); nes_write(0x0470, g_cpu.A);
label_A5AF:;
    /* $A5AF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA005 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5B2:;
    /* $A5B2: 8D */ maybe_trigger_vblank(4); nes_write(0x0471, g_cpu.A);
label_A5B5:;
    /* $A5B5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A5B7:;
    /* $A5B7: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A5B8:;
    /* $A5B8: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A5B9:;
    /* $A5B9: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A5BA:;
    /* $A5BA: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A5BB:;
    /* $A5BB: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA000 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5BE:;
    /* $A5BE: 8D */ maybe_trigger_vblank(4); nes_write(0x0472, g_cpu.A);
label_A5C1:;
    /* $A5C1: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA00A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5C4:;
    /* $A5C4: 8D */ maybe_trigger_vblank(4); nes_write(0x046E, g_cpu.A);
label_A5C7:;
    /* $A5C7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA001 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5CA:;
    /* $A5CA: 8D */ maybe_trigger_vblank(4); nes_write(0x0473, g_cpu.A);
label_A5CD:;
    /* $A5CD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA00B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5D0:;
    /* $A5D0: 8D */ maybe_trigger_vblank(4); nes_write(0x046F, g_cpu.A);
label_A5D3:;
    /* $A5D3: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x0E) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5D5:;
    /* $A5D5: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A5D6:;
    /* $A5D6: 8C */ maybe_trigger_vblank(4); nes_write(0x047A, g_cpu.Y);
label_A5D9:;
    /* $A5D9: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8656, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A5DC:;
    /* $A5DC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0424); FLAG_NZ(g_cpu.A);
label_A5DF:;
    /* $A5DF: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8B9E, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A5E2:;
    /* $A5E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x837A, 3); return;
}

void func_A565_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A565_b3");
#endif
    func_A565_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A591_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A591_b3");
#endif
    func_A565_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

static void func_A5E5_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A645;
        case 2: goto label_A609;
    }
label_A5E5:;
    /* $A5E5: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8820, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A5E8:;
    /* $A5E8: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A5E9:;
    /* $A5E9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A5F1;
label_A5EB:;
    /* $A5EB: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8BAB, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A5EE:;
    /* $A5EE: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x837A, 3); return;
label_A5F1:;
    /* $A5F1: 8E */ maybe_trigger_vblank(4); nes_write(0x047C, g_cpu.X);
label_A5F4:;
    /* $A5F4: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A5F6:;
    /* $A5F6: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A5F9:;
    /* $A5F9: 9D */ maybe_trigger_vblank(5); nes_write((0x050C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A5FC:;
    /* $A5FC: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A5FD:;
    /* $A5FD: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x04; g_cpu.C=(g_cpu.X>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A5FF:;
    /* $A5FF: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A5F6;
    }
label_A601:;
    /* $A601: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A604:;
    /* $A604: 8D */ maybe_trigger_vblank(4); nes_write(0x0534, g_cpu.A);
label_A607:;
    /* $A607: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A609:;
    /* $A609: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A60C:;
    /* $A60C: 9D */ maybe_trigger_vblank(5); nes_write((0x0483 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A60F:;
    /* $A60F: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A612:;
    /* $A612: 9D */ maybe_trigger_vblank(5); nes_write((0x0486 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A615:;
    /* $A615: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A618:;
    /* $A618: 9D */ maybe_trigger_vblank(5); nes_write((0x048D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A61B:;
    /* $A61B: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A61E:;
    /* $A61E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A61F:;
    /* $A61F: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x80; FLAG_NZ(g_cpu.A);
label_A621:;
    /* $A621: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A623:;
    /* $A623: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A624:;
    /* $A624: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_A626:;
    /* $A626: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A627:;
    /* $A627: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A629:;
    /* $A629: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A62B:;
    /* $A62B: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A62C:;
    /* $A62C: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A62D:;
    /* $A62D: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A62E:;
    /* $A62E: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A62F:;
    /* $A62F: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A630:;
    /* $A630: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A632:;
    /* $A632: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A634:;
    /* $A634: 9D */ maybe_trigger_vblank(5); nes_write((0x0484 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A637:;
    /* $A637: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A638:;
    /* $A638: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A63A:;
    /* $A63A: 9D */ maybe_trigger_vblank(5); nes_write((0x0481 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A63D:;
    /* $A63D: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A63E:;
    /* $A63E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A643;
label_A640:;
    /* $A640: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x882B, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A643:;
    /* $A643: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A644:;
    /* $A644: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A645:;
    /* $A645: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_A647:;
    /* $A647: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A648:;
    /* $A648: CE */ maybe_trigger_vblank(6); { uint16_t a=0x047C; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A64B:;
    /* $A64B: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A609;
    }
label_A64D:;
    /* $A64D: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0504; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A650:;
    /* $A650: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0505; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A653:;
    /* $A653: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x837A, 3); return;
}

void func_A5E5_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A5E5_b3");
#endif
    func_A5E5_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A645_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A645_b3");
#endif
    func_A5E5_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A609_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A609_b3");
#endif
    func_A5E5_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_AE59_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE59_b3");
#endif
label_AE59:;
    /* $AE59: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x043D); FLAG_NZ(g_cpu.X);
label_AE5C:;
    /* $AE5C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9002 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE5F:;
    /* $AE5F: 8D */ maybe_trigger_vblank(4); nes_write(0x043A, g_cpu.A);
label_AE62:;
    /* $AE62: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x22; FLAG_NZ(g_cpu.A);
label_AE64:;
    /* $AE64: 8D */ maybe_trigger_vblank(4); nes_write(0x043B, g_cpu.A);
label_AE67:;
    /* $AE67: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A820_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A820_b3");
#endif
label_A820:;
    /* $A820: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A822:;
    /* $A822: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x7F; FLAG_NZ(g_cpu.Y);
label_A824:;
    /* $A824: 99 */ maybe_trigger_vblank(5); nes_write((0x0481 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A827:;
    /* $A827: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A828:;
    /* $A828: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A824;
    }
label_A82A:;
    /* $A82A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A8DF_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8DF_b3");
#endif
label_A8DF:;
    /* $A8DF: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A8E1:;
    /* $A8E1: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_A8E3:;
    /* $A8E3: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A8E4:;
    /* $A8E4: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A8E5:;
    /* $A8E5: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x93E5 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8E8:;
    /* $A8E8: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A8EA:;
    /* $A8EA: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x93E6 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8ED:;
    /* $A8ED: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A8EF:;
    /* $A8EF: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8F1:;
    /* $A8F1: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A8F2:;
    /* $A8F2: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8F4:;
    /* $A8F4: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A8F5:;
    /* $A8F5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A8F7:;
    /* $A8F7: 8D */ maybe_trigger_vblank(4); nes_write(0x0502, g_cpu.A);
label_A8FA:;
    /* $A8FA: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A8FB:;
    /* $A8FB: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A8FC:;
    /* $A8FC: 8C */ maybe_trigger_vblank(4); nes_write(0x0503, g_cpu.Y);
label_A8FF:;
    /* $A8FF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A901:;
    /* $A901: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A903:;
    /* $A903: 8D */ maybe_trigger_vblank(4); nes_write(0x0469, g_cpu.A);
label_A906:;
    /* $A906: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A907:;
    /* $A907: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A909:;
    /* $A909: 8D */ maybe_trigger_vblank(4); nes_write(0x046A, g_cpu.A);
label_A90C:;
    /* $A90C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A90D:;
    /* $A90D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A90F:;
    /* $A90F: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A910:;
    /* $A910: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A912:;
    /* $A912: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A914:;
    /* $A914: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A915:;
    /* $A915: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A916:;
    /* $A916: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0443; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A919:;
    /* $A919: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0443; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A91D:;
    /* $A91D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A91F:;
    /* $A91F: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A920:;
    /* $A920: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A922:;
    /* $A922: 9D */ maybe_trigger_vblank(5); nes_write((0x044D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A925:;
    /* $A925: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A926:;
    /* $A926: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A928:;
    /* $A928: 9D */ maybe_trigger_vblank(5); nes_write((0x0453 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A92B:;
    /* $A92B: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A92C:;
    /* $A92C: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A92E:;
    /* $A92E: 9D */ maybe_trigger_vblank(5); nes_write((0x0457 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A931:;
    /* $A931: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A932:;
    /* $A932: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A934:;
    /* $A934: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A91F;
    }
label_A936:;
    /* $A936: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044D); FLAG_NZ(g_cpu.A);
label_A939:;
    /* $A939: 85 */ maybe_trigger_vblank(3); nes_write(0x20, g_cpu.A);
label_A93B:;
    /* $A93B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0503); FLAG_NZ(g_cpu.A);
label_A93E:;
    /* $A93E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A968;
label_A940:;
    /* $A940: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A941:;
    /* $A941: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A943:;
    /* $A943: 8D */ maybe_trigger_vblank(4); nes_write(0x046B, g_cpu.A);
label_A946:;
    /* $A946: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A947:;
    /* $A947: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A949:;
    /* $A949: 8D */ maybe_trigger_vblank(4); nes_write(0x046C, g_cpu.A);
label_A94C:;
    /* $A94C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A94D:;
    /* $A94D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A94F:;
    /* $A94F: 8D */ maybe_trigger_vblank(4); nes_write(0x0467, g_cpu.A);
label_A952:;
    /* $A952: 8D */ maybe_trigger_vblank(4); nes_write(0x0468, g_cpu.A);
label_A955:;
    /* $A955: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A957:;
    /* $A957: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A958:;
    /* $A958: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A95A:;
    /* $A95A: 9D */ maybe_trigger_vblank(5); nes_write((0x0463 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A95D:;
    /* $A95D: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A95E:;
    /* $A95E: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A960:;
    /* $A960: 9D */ maybe_trigger_vblank(5); nes_write((0x045B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A963:;
    /* $A963: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A964:;
    /* $A964: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A966:;
    /* $A966: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A957;
    }
label_A968:;
    /* $A968: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A969:;
    /* $A969: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A96B:;
    /* $A96B: 8D */ maybe_trigger_vblank(4); nes_write(0x0535, g_cpu.A);
label_A96E:;
    /* $A96E: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0505; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A971:;
    /* $A971: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_A87B_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A8CC;
        case 2: goto label_A8A8;
        case 3: goto label_A882;
    }
label_A87B:;
    /* $A87B: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A87C:;
    /* $A87C: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A87D:;
    /* $A87D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_A87F:;
    /* $A87F: 8D */ maybe_trigger_vblank(4); nes_write(0x0429, g_cpu.A);
label_A882:;
    /* $A882: 8D */ maybe_trigger_vblank(4); nes_write(0x0428, g_cpu.A);
label_A885:;
    /* $A885: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A886:;
    /* $A886: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xC0; FLAG_NZ(g_cpu.A);
label_A888:;
    /* $A888: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A88C;
label_A88A:;
    /* $A88A: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE0; FLAG_NZ(g_cpu.A);
label_A88C:;
    /* $A88C: 8D */ maybe_trigger_vblank(4); nes_write(0x042A, g_cpu.A);
label_A88F:;
    /* $A88F: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A890:;
    /* $A890: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A892:;
    /* $A892: 8D */ maybe_trigger_vblank(4); nes_write(0x042B, g_cpu.A);
label_A895:;
    /* $A895: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x10; FLAG_NZ(g_cpu.A);
label_A897:;
    /* $A897: 8D */ maybe_trigger_vblank(4); nes_write(0x0427, g_cpu.A);
label_A89A:;
    /* $A89A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042B); FLAG_NZ(g_cpu.A);
label_A89D:;
    /* $A89D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A8DE;
label_A89F:;
    /* $A89F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042A); FLAG_NZ(g_cpu.A);
label_A8A2:;
    /* $A8A2: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A8A4:;
    /* $A8A4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x1F; FLAG_NZ(g_cpu.Y);
label_A8A6:;
    /* $A8A6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_A8A8:;
    /* $A8A8: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A8AA:;
    /* $A8AA: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) goto label_A8AE;
label_A8AC:;
    /* $A8AC: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x10; FLAG_NZ(g_cpu.Y);
label_A8AE:;
    /* $A8AE: 99 */ maybe_trigger_vblank(5); nes_write((0x0513 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A8B1:;
    /* $A8B1: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A8B3:;
    /* $A8B3: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_A8B9;
label_A8B5:;
    /* $A8B5: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x11; g_cpu.C=(g_cpu.Y>=0x11)?1:0; FLAG_NZ(r&0xFF); }
label_A8B7:;
    /* $A8B7: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A8BC;
label_A8B9:;
    /* $A8B9: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A8BA:;
    /* $A8BA: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8AE;
    }
label_A8BC:;
    /* $A8BC: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A8BE:;
    /* $A8BE: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A8C0:;
    /* $A8C0: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) goto label_A8CC;
label_A8C2:;
    /* $A8C2: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x38; FLAG_NZ(g_cpu.A);
label_A8C4:;
    /* $A8C4: 8D */ maybe_trigger_vblank(4); nes_write(0x0514, g_cpu.A);
label_A8C7:;
    /* $A8C7: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x27; FLAG_NZ(g_cpu.A);
label_A8C9:;
    /* $A8C9: 8D */ maybe_trigger_vblank(4); nes_write(0x0516, g_cpu.A);
label_A8CC:;
    /* $A8CC: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x21); FLAG_NZ(g_cpu.X);
label_A8CE:;
    /* $A8CE: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A8D0:;
    /* $A8D0: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0510 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A8D3:;
    /* $A8D3: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A8D6:;
    /* $A8D6: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A8D7:;
    /* $A8D7: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A8D8:;
    /* $A8D8: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x23; g_cpu.C=(g_cpu.Y>=0x23)?1:0; FLAG_NZ(r&0xFF); }
label_A8DA:;
    /* $A8DA: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A8D0;
    }
label_A8DC:;
    /* $A8DC: 86 */ maybe_trigger_vblank(3); nes_write(0x21, g_cpu.X);
label_A8DE:;
    /* $A8DE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A87B_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A87B_b3");
#endif
    func_A87B_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A8CC_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8CC_b3");
#endif
    func_A87B_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A8A8_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A8A8_b3");
#endif
    func_A87B_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A882_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A882_b3");
#endif
    func_A87B_b3_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_BA4C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA4C_b3");
#endif
label_BA4C:;
    /* $BA4C: FF */ maybe_trigger_vblank(7); { uint16_t a=(0x0040 + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA4F:;
    /* $BA4F: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x10 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BA51:;
    /* $BA51: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x15); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BA53:;
    /* $BA53: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x1208, -1);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_BA56:;
    /* $BA56: 1C */ maybe_trigger_vblank(4); (void)nes_read((0xFF00 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BA59:;
    /* $BA59: EF */ maybe_trigger_vblank(6); { uint16_t a=0x1500; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_BA5C:;
    /* $BA5C: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_BA5E;
label_BA5E:;
    /* $BA5E: 15 */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x20 + g_cpu.X) & 0xFF); FLAG_NZ(g_cpu.A);
label_BA60:;
    /* $BA60: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA60); return;
}

void func_BA40_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA40_b3");
#endif
label_BA40:;
    /* $BA40: 27 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_BA42:;
    /* $BA42: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA42); return;
}

void func_A82B_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A82B_b3");
#endif
label_A82B:;
    /* $A82B: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_A82D:;
    /* $A82D: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A830:;
    /* $A830: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A831:;
    /* $A831: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A832:;
    /* $A832: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A833:;
    /* $A833: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x924F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A836:;
    /* $A836: 9D */ maybe_trigger_vblank(5); nes_write((0x0487 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A839:;
    /* $A839: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9250 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A83C:;
    /* $A83C: 9D */ maybe_trigger_vblank(5); nes_write((0x0488 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A83F:;
    /* $A83F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9251 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A842:;
    /* $A842: 9D */ maybe_trigger_vblank(5); nes_write((0x0489 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A845:;
    /* $A845: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9252 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A848:;
    /* $A848: 9D */ maybe_trigger_vblank(5); nes_write((0x048A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A84B:;
    /* $A84B: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x00); FLAG_NZ(g_cpu.Y);
label_A84D:;
    /* $A84D: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A84E:;
    /* $A84E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A851;
label_A850:;
    /* $A850: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A851:;
    /* $A851: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A852:;
    /* $A852: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A863;
label_A854:;
    /* $A854: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A857:;
    /* $A857: 9D */ maybe_trigger_vblank(5); nes_write((0x048E + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A85A:;
    /* $A85A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_A85C:;
    /* $A85C: 9D */ maybe_trigger_vblank(5); nes_write((0x048B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A85F:;
    /* $A85F: 9D */ maybe_trigger_vblank(5); nes_write((0x048C + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A862:;
    /* $A862: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A863:;
    /* $A863: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A866:;
    /* $A866: 9D */ maybe_trigger_vblank(5); nes_write((0x0490 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A869:;
    /* $A869: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A86C:;
    /* $A86C: 9D */ maybe_trigger_vblank(5); nes_write((0x048E + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A86F:;
    /* $A86F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A656_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A656_b3");
#endif
label_A656:;
    /* $A656: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A657:;
    /* $A657: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A659:;
    /* $A659: 8D */ maybe_trigger_vblank(4); nes_write(0x0475, g_cpu.A);
label_A65C:;
    /* $A65C: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A65D:;
    /* $A65D: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A65F:;
    /* $A65F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A660:;
    /* $A660: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A661:;
    /* $A661: 8D */ maybe_trigger_vblank(4); nes_write(0x047B, g_cpu.A);
label_A664:;
    /* $A664: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_A666:;
    /* $A666: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A667:;
    /* $A667: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x047B); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A66A:;
    /* $A66A: 8D */ maybe_trigger_vblank(4); nes_write(0x047B, g_cpu.A);
label_A66D:;
    /* $A66D: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A66E:;
    /* $A66E: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A66F:;
    /* $A66F: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A670:;
    /* $A670: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A671:;
    /* $A671: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A672:;
    /* $A672: 8D */ maybe_trigger_vblank(4); nes_write(0x0474, g_cpu.A);
label_A675:;
    /* $A675: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A7ED_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A7ED_b3");
#endif
label_A7ED:;
    /* $A7ED: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A7EF:;
    /* $A7EF: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A7F2:;
    /* $A7F2: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A7F3:;
    /* $A7F3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0479); FLAG_NZ(g_cpu.A);
label_A7F6:;
    /* $A7F6: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x03; FLAG_NZ(g_cpu.A);
label_A7F8:;
    /* $A7F8: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A7FB:;
    /* $A7FB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A7FC:;
    /* $A7FC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0479); FLAG_NZ(g_cpu.A);
label_A7FF:;
    /* $A7FF: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A801:;
    /* $A801: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A802:;
    /* $A802: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A803:;
    /* $A803: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A804:;
    /* $A804: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A805:;
    /* $A805: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A806:;
    /* $A806: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0xC0 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0xC0); g_cpu.A=r&0xFF; }
label_A808:;
    /* $A808: 85 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.A);
label_A80A:;
    /* $A80A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0478); FLAG_NZ(g_cpu.A);
label_A80D:;
    /* $A80D: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x1F; FLAG_NZ(g_cpu.A);
label_A80F:;
    /* $A80F: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A810:;
    /* $A810: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A811:;
    /* $A811: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0478); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A814:;
    /* $A814: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_A818;
label_A816:;
    /* $A816: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_A818:;
    /* $A818: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A819:;
    /* $A819: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x07); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A81B:;
    /* $A81B: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A81E:;
    /* $A81E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A81F:;
    /* $A81F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A7CA_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A7CA_b3");
#endif
label_A7CA:;
    /* $A7CA: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A7CB:;
    /* $A7CB: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x04; FLAG_NZ(g_cpu.A);
label_A7CD:;
    /* $A7CD: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A7D0:;
    /* $A7D0: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A7D1:;
    /* $A7D1: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A7D2:;
    /* $A7D2: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A7D3:;
    /* $A7D3: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0478); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7D6:;
    /* $A7D6: 8D */ maybe_trigger_vblank(4); nes_write(0x0478, g_cpu.A);
label_A7D9:;
    /* $A7D9: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_A7DE;
label_A7DB:;
    /* $A7DB: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0479; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7DE:;
    /* $A7DE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0479); FLAG_NZ(g_cpu.A);
label_A7E1:;
    /* $A7E1: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A7E4:;
    /* $A7E4: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A7E5:;
    /* $A7E5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0478); FLAG_NZ(g_cpu.A);
label_A7E8:;
    /* $A7E8: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A7EB:;
    /* $A7EB: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A7EC:;
    /* $A7EC: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A749_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A749_b3");
#endif
label_A749:;
    /* $A749: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x047A); FLAG_NZ(g_cpu.Y);
label_A74C:;
    /* $A74C: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x0E) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A74E:;
    /* $A74E: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A74F:;
    /* $A74F: 8C */ maybe_trigger_vblank(4); nes_write(0x047A, g_cpu.Y);
label_A752:;
    /* $A752: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_A754:;
    /* $A754: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A755:;
    /* $A755: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x046E); FLAG_NZ(g_cpu.A);
label_A758:;
    /* $A758: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A75A:;
    /* $A75A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x046F); FLAG_NZ(g_cpu.A);
label_A75D:;
    /* $A75D: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A75F:;
    /* $A75F: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A761:;
    /* $A761: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A762_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A762_b3");
#endif
label_A762:;
    /* $A762: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A764:;
    /* $A764: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A766:;
    /* $A766: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A768:;
    /* $A768: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A769:;
    /* $A769: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A76B:;
    /* $A76B: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A76C:;
    /* $A76C: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x01; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A76E:;
    /* $A76E: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A76F:;
    /* $A76F: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0472); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A772:;
    /* $A772: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A774:;
    /* $A774: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0473); FLAG_NZ(g_cpu.A);
label_A777:;
    /* $A777: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x01); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A779:;
    /* $A779: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A77B:;
    /* $A77B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A77C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A77C_b3");
#endif
label_A77C:;
    /* $A77C: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x08); FLAG_NZ(g_cpu.A);
label_A77E:;
    /* $A77E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A780:;
    /* $A780: 85 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.A);
label_A782:;
    /* $A782: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x04); FLAG_NZ(g_cpu.A);
label_A784:;
    /* $A784: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_A786:;
    /* $A786: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A787:;
    /* $A787: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x07); FLAG_NZ(g_cpu.A);
label_A789:;
    /* $A789: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A78A:;
    /* $A78A: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A78C:;
    /* $A78C: 85 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.A);
label_A78E:;
    /* $A78E: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x879C, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A791:;
    /* $A791: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A793:;
    /* $A793: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A795:;
    /* $A795: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x04); FLAG_NZ(g_cpu.Y);
label_A797:;
    /* $A797: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x04; g_cpu.C=(g_cpu.Y>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A799:;
    /* $A799: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A77C;
    }
label_A79B:;
    /* $A79B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A79C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A79C_b3");
#endif
label_A79C:;
    /* $A79C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A79E:;
    /* $A79E: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A7A0:;
    /* $A7A0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x06); FLAG_NZ(g_cpu.A);
label_A7A2:;
    /* $A7A2: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A7A3:;
    /* $A7A3: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7A5:;
    /* $A7A5: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A7A6:;
    /* $A7A6: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x03; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A7A8:;
    /* $A7A8: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A7A9:;
    /* $A7A9: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0470); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7AC:;
    /* $A7AC: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A7AE:;
    /* $A7AE: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0471); FLAG_NZ(g_cpu.A);
label_A7B1:;
    /* $A7B1: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x03); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A7B3:;
    /* $A7B3: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_A7B5:;
    /* $A7B5: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0008); FLAG_NZ(g_cpu.A);
label_A7B8:;
    /* $A7B8: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_A7BA:;
    /* $A7BA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A7BB:;
    /* $A7BB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A7BC:;
    /* $A7BC: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7BE:;
    /* $A7BE: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A7C1:;
    /* $A7C1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A7C2:;
    /* $A7C2: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A7C3:;
    /* $A7C3: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7C5:;
    /* $A7C5: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A7C8:;
    /* $A7C8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A7C9:;
    /* $A7C9: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A32A_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A32A_b3");
#endif
label_A32A:;
    /* $A32A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0507); FLAG_NZ(g_cpu.A);
label_A32D:;
    /* $A32D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x1C; FLAG_NZ(g_cpu.X);
label_A32F:;
    /* $A32F: 9D */ maybe_trigger_vblank(5); nes_write((0x0513 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A332:;
    /* $A332: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A333:;
    /* $A333: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A334:;
    /* $A334: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A335:;
    /* $A335: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A336:;
    /* $A336: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A32F;
    }
label_A338:;
    /* $A338: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AE50_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE50_b3");
#endif
label_AE50:;
    /* $AE50: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x0C) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AE52:;
    /* $AE52: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x0C; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE54:;
    /* $AE54: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AE58;
label_AE56:;
    /* $AE56: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x0D; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE58:;
    /* $AE58: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AE3E_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AE3E_b3");
#endif
label_AE3E:;
    /* $AE3E: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x21); FLAG_NZ(g_cpu.X);
label_AE40:;
    /* $AE40: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AE43:;
    /* $AE43: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x043B); FLAG_NZ(g_cpu.A);
label_AE46:;
    /* $AE46: 9D */ maybe_trigger_vblank(5); nes_write((0x03A1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AE49:;
    /* $AE49: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x043A); FLAG_NZ(g_cpu.A);
label_AE4C:;
    /* $AE4C: 9D */ maybe_trigger_vblank(5); nes_write((0x03A2 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AE4F:;
    /* $AE4F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_ADF7_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ADF7_b3");
#endif
label_ADF7:;
    /* $ADF7: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_ADF8:;
    /* $ADF8: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AE28;
label_ADFA:;
    /* $ADFA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0438); FLAG_NZ(g_cpu.A);
label_ADFD:;
    /* $ADFD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AE03;
label_ADFF:;
    /* $ADFF: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0438; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE02:;
    /* $AE02: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AE03:;
    /* $AE03: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x88; FLAG_NZ(g_cpu.A);
label_AE05:;
    /* $AE05: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8E3E, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_AE08:;
    /* $AE08: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AE09:;
    /* $AE09: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AE0A:;
    /* $AE0A: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AE0B:;
    /* $AE0B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_AE0D:;
    /* $AE0D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_AE0F:;
    /* $AE0F: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AE12:;
    /* $AE12: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AE13:;
    /* $AE13: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AE14:;
    /* $AE14: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AE0F;
    }
label_AE16:;
    /* $AE16: 86 */ maybe_trigger_vblank(3); nes_write(0x21, g_cpu.X);
label_AE18:;
    /* $AE18: EE */ maybe_trigger_vblank(6); { uint16_t a=0x043A; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE1B:;
    /* $AE1B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x043A); FLAG_NZ(g_cpu.A);
label_AE1E:;
    /* $AE1E: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x3D; FLAG_NZ(g_cpu.A);
label_AE20:;
    /* $AE20: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0DF6), 3); return; }
label_AE22:;
    /* $AE22: 8D */ maybe_trigger_vblank(4); nes_write(0x043C, g_cpu.A);
label_AE25:;
    /* $AE25: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8E59, 3); return;
label_AE28:;
    /* $AE28: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AE29:;
    /* $AE29: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AE2F;
label_AE2B:;
    /* $AE2B: EE */ maybe_trigger_vblank(6); { uint16_t a=0x043E; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AE2E:;
    /* $AE2E: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AE2F:;
    /* $AE2F: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AE30:;
    /* $AE30: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AE38;
label_AE32:;
    /* $AE32: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_AE34:;
    /* $AE34: 8D */ maybe_trigger_vblank(4); nes_write(0x043E, g_cpu.A);
label_AE37:;
    /* $AE37: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AE38:;
    /* $AE38: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AE3A:;
    /* $AE3A: 8D */ maybe_trigger_vblank(4); nes_write(0x0436, g_cpu.A);
label_AE3D:;
    /* $AE3D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AA8B_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA8B_b3");
#endif
label_AA8B:;
    /* $AA8B: 84 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.Y);
label_AA8D:;
    /* $AA8D: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0482 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA90:;
    /* $AA90: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AA91:;
    /* $AA91: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0487 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AA94:;
    /* $AA94: 9D */ maybe_trigger_vblank(5); nes_write((0x0482 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AA97:;
    /* $AA97: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0488 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA9A:;
    /* $AA9A: 8D */ maybe_trigger_vblank(4); nes_write(0x047D, g_cpu.A);
label_AA9D:;
    /* $AA9D: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0483 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AAA0:;
    /* $AAA0: 9D */ maybe_trigger_vblank(5); nes_write((0x0483 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAA3:;
    /* $AAA3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AAA5:;
    /* $AAA5: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AAA6:;
    /* $AAA6: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x047D); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AAA9:;
    /* $AAA9: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AAAD;
label_AAAB:;
    /* $AAAB: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_AAAD:;
    /* $AAAD: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0484 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAB0:;
    /* $AAB0: 9D */ maybe_trigger_vblank(5); nes_write((0x0484 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAB3:;
    /* $AAB3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0485 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAB6:;
    /* $AAB6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AAB7:;
    /* $AAB7: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0489 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AABA:;
    /* $AABA: 9D */ maybe_trigger_vblank(5); nes_write((0x0485 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AABD:;
    /* $AABD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAC0:;
    /* $AAC0: 8D */ maybe_trigger_vblank(4); nes_write(0x047E, g_cpu.A);
label_AAC3:;
    /* $AAC3: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0486 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AAC6:;
    /* $AAC6: 9D */ maybe_trigger_vblank(5); nes_write((0x0486 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAC9:;
    /* $AAC9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AACB:;
    /* $AACB: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AACC:;
    /* $AACC: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AACD:;
    /* $AACD: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x047E); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AAD0:;
    /* $AAD0: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AAD4;
label_AAD2:;
    /* $AAD2: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_AAD4:;
    /* $AAD4: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0484 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAD7:;
    /* $AAD7: 9D */ maybe_trigger_vblank(5); nes_write((0x0484 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AADA:;
    /* $AADA: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x00); FLAG_NZ(g_cpu.Y);
label_AADC:;
    /* $AADC: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AADD:;
    /* $AADD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AAE0;
label_AADF:;
    /* $AADF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AAE0:;
    /* $AAE0: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AAE1:;
    /* $AAE1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AB20;
label_AAE3:;
    /* $AAE3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAE6:;
    /* $AAE6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AAEC;
label_AAE8:;
    /* $AAE8: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x048B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAEB:;
    /* $AAEB: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AAEC:;
    /* $AAEC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAEF:;
    /* $AAEF: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_AAF1:;
    /* $AAF1: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_AB04;
label_AAF3:;
    /* $AAF3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AAF5:;
    /* $AAF5: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AAF6:;
    /* $AAF6: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0487 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AAF9:;
    /* $AAF9: 9D */ maybe_trigger_vblank(5); nes_write((0x0487 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAFC:;
    /* $AAFC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AAFE:;
    /* $AAFE: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0488 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB01:;
    /* $AB01: 9D */ maybe_trigger_vblank(5); nes_write((0x0488 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB04:;
    /* $AB04: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AB06:;
    /* $AB06: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) goto label_AB19;
label_AB08:;
    /* $AB08: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AB0A:;
    /* $AB0A: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AB0B:;
    /* $AB0B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0489 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB0E:;
    /* $AB0E: 9D */ maybe_trigger_vblank(5); nes_write((0x0489 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB11:;
    /* $AB11: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AB13:;
    /* $AB13: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x048A + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB16:;
    /* $AB16: 9D */ maybe_trigger_vblank(5); nes_write((0x048A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB19:;
    /* $AB19: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB1C:;
    /* $AB1C: 9D */ maybe_trigger_vblank(5); nes_write((0x048B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB1F:;
    /* $AB1F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AB20:;
    /* $AB20: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AB21:;
    /* $AB21: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AB5A;
label_AB23:;
    /* $AB23: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB26:;
    /* $AB26: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AB2C;
label_AB28:;
    /* $AB28: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x048B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB2B:;
    /* $AB2B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AB2C:;
    /* $AB2C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB2F:;
    /* $AB2F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AB30:;
    /* $AB30: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AB31:;
    /* $AB31: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x909F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB34:;
    /* $AB34: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_AB36:;
    /* $AB36: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x90A0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB39:;
    /* $AB39: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_AB3B:;
    /* $AB3B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB3E:;
    /* $AB3E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AB3F:;
    /* $AB3F: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AB40:;
    /* $AB40: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB42:;
    /* $AB42: 9D */ maybe_trigger_vblank(5); nes_write((0x048B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB45:;
    /* $AB45: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AB46:;
    /* $AB46: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB48:;
    /* $AB48: 9D */ maybe_trigger_vblank(5); nes_write((0x048D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB4B:;
    /* $AB4B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x048F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB4E:;
    /* $AB4E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB51:;
    /* $AB51: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0490 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB54:;
    /* $AB54: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AB59;
label_AB56:;
    /* $AB56: 9D */ maybe_trigger_vblank(5); nes_write((0x048F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB59:;
    /* $AB59: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AB5A:;
    /* $AB5A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x043E); FLAG_NZ(g_cpu.A);
label_AB5D:;
    /* $AB5D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AB68;
label_AB5F:;
    /* $AB5F: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_AB69;
label_AB61:;
    /* $AB61: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0437); FLAG_NZ(g_cpu.A);
label_AB64:;
    /* $AB64: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AB6C;
label_AB66:;
    /* $AB66: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AB23;
    }
label_AB68:;
    /* $AB68: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AB69:;
    /* $AB69: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x043E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB6C:;
    /* $AB6C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AB6E:;
    /* $AB6E: 9D */ maybe_trigger_vblank(5); nes_write((0x048F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB71:;
    /* $AB71: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8B2C, 3); return;
}

void func_ABB9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ABB9_b3");
#endif
label_ABB9:;
    /* $ABB9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0483 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABBC:;
    /* $ABBC: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_ABBD:;
    /* $ABBD: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0433); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ABC0:;
    /* $ABC0: 8D */ maybe_trigger_vblank(4); nes_write(0x047D, g_cpu.A);
label_ABC3:;
    /* $ABC3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0486 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABC6:;
    /* $ABC6: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_ABC7:;
    /* $ABC7: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0434); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ABCA:;
    /* $ABCA: 8D */ maybe_trigger_vblank(4); nes_write(0x047E, g_cpu.A);
label_ABCD:;
    /* $ABCD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0484 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABD0:;
    /* $ABD0: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_ABD2:;
    /* $ABD2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_ABD4:;
    /* $ABD4: 85 */ maybe_trigger_vblank(3); nes_write(0x03, g_cpu.A);
label_ABD6:;
    /* $ABD6: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0x048D + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_ABD9:;
    /* $ABD9: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA039 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABDC:;
    /* $ABDC: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_ABDE:;
    /* $ABDE: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA12E + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABE1:;
    /* $ABE1: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_ABE3:;
    /* $ABE3: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_ABE5:;
    /* $ABE5: A6 */ maybe_trigger_vblank(3); g_cpu.X = nes_read(0x22); FLAG_NZ(g_cpu.X);
label_ABE7:;
    /* $ABE7: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABE9:;
    /* $ABE9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_ABEB:;
    /* $ABEB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_ABF0;
label_ABED:;
    /* $ABED: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8C8F, 3); return;
label_ABF0:;
    /* $ABF0: 9D */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ABF3:;
    /* $ABF3: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_ABF4:;
    /* $ABF4: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABF6:;
    /* $ABF6: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_ABF8:;
    /* $ABF8: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_ABF9:;
    /* $ABF9: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABFB:;
    /* $ABFB: 85 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.A);
label_ABFD:;
    /* $ABFD: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_ABFE:;
    /* $ABFE: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_AC00:;
    /* $AC00: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_AC02:;
    /* $AC02: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_AC04:;
    /* $AC04: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AC05:;
    /* $AC05: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA000 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC08:;
    /* $AC08: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0002); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AC0B:;
    /* $AC0B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AC12;
label_AC0D:;
    /* $AC0D: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_AC0F:;
    /* $AC0F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AC10:;
    /* $AC10: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AC12:;
    /* $AC12: 85 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.A);
label_AC14:;
    /* $AC14: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AC15:;
    /* $AC15: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x047D); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC18:;
    /* $AC18: 9D */ maybe_trigger_vblank(5); nes_write((0x0203 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC1B:;
    /* $AC1B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AC1D:;
    /* $AC1D: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AC1E:;
    /* $AC1E: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x07); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AC20:;
    /* $AC20: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AC24;
label_AC22:;
    /* $AC22: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_AC24:;
    /* $AC24: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_AC26:;
    /* $AC26: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_AC28:;
    /* $AC28: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AC4B;
label_AC2A:;
    /* $AC2A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x06); FLAG_NZ(g_cpu.A);
label_AC2C:;
    /* $AC2C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_AC2E:;
    /* $AC2E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AC2F:;
    /* $AC2F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA021 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC32:;
    /* $AC32: 85 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.A);
label_AC34:;
    /* $AC34: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AC35:;
    /* $AC35: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x047E); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC38:;
    /* $AC38: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC3B:;
    /* $AC3B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AC3D:;
    /* $AC3D: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AC3E:;
    /* $AC3E: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AC3F:;
    /* $AC3F: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x07); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AC41:;
    /* $AC41: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AC45;
label_AC43:;
    /* $AC43: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_AC45:;
    /* $AC45: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_AC47:;
    /* $AC47: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_AC49:;
    /* $AC49: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AC54;
label_AC4B:;
    /* $AC4B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF7; FLAG_NZ(g_cpu.A);
label_AC4D:;
    /* $AC4D: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC50:;
    /* $AC50: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x04); FLAG_NZ(g_cpu.Y);
label_AC52:;
    /* $AC52: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AC78;
label_AC54:;
    /* $AC54: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x06); FLAG_NZ(g_cpu.A);
label_AC56:;
    /* $AC56: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_AC58:;
    /* $AC58: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_AC5A:;
    /* $AC5A: 85 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.A);
label_AC5C:;
    /* $AC5C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AC5E:;
    /* $AC5E: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC60:;
    /* $AC60: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AC61:;
    /* $AC61: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC63:;
    /* $AC63: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AC64:;
    /* $AC64: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x07); FLAG_NZ(g_cpu.A);
label_AC66:;
    /* $AC66: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AC68:;
    /* $AC68: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AC6C;
label_AC6A:;
    /* $AC6A: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x40; FLAG_NZ(g_cpu.A);
label_AC6C:;
    /* $AC6C: 9D */ maybe_trigger_vblank(5); nes_write((0x0202 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC6F:;
    /* $AC6F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC70:;
    /* $AC70: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC71:;
    /* $AC71: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC72:;
    /* $AC72: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC73:;
    /* $AC73: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0480; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC76:;
    /* $AC76: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_AC8F;
label_AC78:;
    /* $AC78: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x04); FLAG_NZ(g_cpu.Y);
label_AC7A:;
    /* $AC7A: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x06); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AC7C:;
    /* $AC7C: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AC8C;
label_AC7E:;
    /* $AC7E: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC80:;
    /* $AC80: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AC81:;
    /* $AC81: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AC82:;
    /* $AC82: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC84:;
    /* $AC84: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AC85:;
    /* $AC85: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_AC87:;
    /* $AC87: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AC88:;
    /* $AC88: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_AC8A:;
    /* $AC8A: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_AC8C:;
    /* $AC8C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8BE7, 3); return;
label_AC8F:;
    /* $AC8F: 86 */ maybe_trigger_vblank(3); nes_write(0x22, g_cpu.X);
label_AC91:;
    /* $AC91: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AB2C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB2C_b3");
#endif
label_AB2C:;
    /* $AB2C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB2F:;
    /* $AB2F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AB30:;
    /* $AB30: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AB31:;
    /* $AB31: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x909F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB34:;
    /* $AB34: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_AB36:;
    /* $AB36: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x90A0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB39:;
    /* $AB39: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_AB3B:;
    /* $AB3B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB3E:;
    /* $AB3E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AB3F:;
    /* $AB3F: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AB40:;
    /* $AB40: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB42:;
    /* $AB42: 9D */ maybe_trigger_vblank(5); nes_write((0x048B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB45:;
    /* $AB45: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AB46:;
    /* $AB46: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB48:;
    /* $AB48: 9D */ maybe_trigger_vblank(5); nes_write((0x048D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB4B:;
    /* $AB4B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x048F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB4E:;
    /* $AB4E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB51:;
    /* $AB51: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0490 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB54:;
    /* $AB54: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AB59;
label_AB56:;
    /* $AB56: 9D */ maybe_trigger_vblank(5); nes_write((0x048F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB59:;
    /* $AB59: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_AC8F_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AC8F_b3");
#endif
label_AC8F:;
    /* $AC8F: 86 */ maybe_trigger_vblank(3); nes_write(0x22, g_cpu.X);
label_AC91:;
    /* $AC91: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_ABE7_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_ABE7_b3");
#endif
label_ABE7:;
    /* $ABE7: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABE9:;
    /* $ABE9: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_ABEB:;
    /* $ABEB: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_ABF0;
label_ABED:;
    /* $ABED: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8C8F, 3); return;
label_ABF0:;
    /* $ABF0: 9D */ maybe_trigger_vblank(5); nes_write((0x0201 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ABF3:;
    /* $ABF3: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_ABF4:;
    /* $ABF4: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABF6:;
    /* $ABF6: 85 */ maybe_trigger_vblank(3); nes_write(0x05, g_cpu.A);
label_ABF8:;
    /* $ABF8: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_ABF9:;
    /* $ABF9: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ABFB:;
    /* $ABFB: 85 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.A);
label_ABFD:;
    /* $ABFD: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_ABFE:;
    /* $ABFE: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_AC00:;
    /* $AC00: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x05); FLAG_NZ(g_cpu.A);
label_AC02:;
    /* $AC02: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_AC04:;
    /* $AC04: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AC05:;
    /* $AC05: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA000 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC08:;
    /* $AC08: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0002); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AC0B:;
    /* $AC0B: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AC12;
label_AC0D:;
    /* $AC0D: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0xFF; FLAG_NZ(g_cpu.A);
label_AC0F:;
    /* $AC0F: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AC10:;
    /* $AC10: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x01 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x01); g_cpu.A=r&0xFF; }
label_AC12:;
    /* $AC12: 85 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.A);
label_AC14:;
    /* $AC14: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AC15:;
    /* $AC15: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x047D); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC18:;
    /* $AC18: 9D */ maybe_trigger_vblank(5); nes_write((0x0203 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC1B:;
    /* $AC1B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AC1D:;
    /* $AC1D: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AC1E:;
    /* $AC1E: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x07); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AC20:;
    /* $AC20: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AC24;
label_AC22:;
    /* $AC22: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_AC24:;
    /* $AC24: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_AC26:;
    /* $AC26: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x01; FLAG_NZ(g_cpu.A);
label_AC28:;
    /* $AC28: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AC4B;
label_AC2A:;
    /* $AC2A: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x06); FLAG_NZ(g_cpu.A);
label_AC2C:;
    /* $AC2C: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_AC2E:;
    /* $AC2E: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AC2F:;
    /* $AC2F: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA021 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC32:;
    /* $AC32: 85 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.A);
label_AC34:;
    /* $AC34: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AC35:;
    /* $AC35: 6D */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x047E); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AC38:;
    /* $AC38: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC3B:;
    /* $AC3B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AC3D:;
    /* $AC3D: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AC3E:;
    /* $AC3E: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AC3F:;
    /* $AC3F: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x07); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AC41:;
    /* $AC41: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AC45;
label_AC43:;
    /* $AC43: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_AC45:;
    /* $AC45: 45 */ maybe_trigger_vblank(3); g_cpu.A ^= nes_read(0x02); FLAG_NZ(g_cpu.A);
label_AC47:;
    /* $AC47: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x02; FLAG_NZ(g_cpu.A);
label_AC49:;
    /* $AC49: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AC54;
label_AC4B:;
    /* $AC4B: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xF7; FLAG_NZ(g_cpu.A);
label_AC4D:;
    /* $AC4D: 9D */ maybe_trigger_vblank(5); nes_write((0x0200 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC50:;
    /* $AC50: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x04); FLAG_NZ(g_cpu.Y);
label_AC52:;
    /* $AC52: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AC78;
label_AC54:;
    /* $AC54: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x06); FLAG_NZ(g_cpu.A);
label_AC56:;
    /* $AC56: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x40; FLAG_NZ(g_cpu.A);
label_AC58:;
    /* $AC58: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x03); FLAG_NZ(g_cpu.A);
label_AC5A:;
    /* $AC5A: 85 */ maybe_trigger_vblank(3); nes_write(0x07, g_cpu.A);
label_AC5C:;
    /* $AC5C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AC5E:;
    /* $AC5E: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC60:;
    /* $AC60: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AC61:;
    /* $AC61: 06 */ maybe_trigger_vblank(5); { uint16_t a=0x05; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC63:;
    /* $AC63: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AC64:;
    /* $AC64: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x07); FLAG_NZ(g_cpu.A);
label_AC66:;
    /* $AC66: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AC68:;
    /* $AC68: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AC6C;
label_AC6A:;
    /* $AC6A: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x40; FLAG_NZ(g_cpu.A);
label_AC6C:;
    /* $AC6C: 9D */ maybe_trigger_vblank(5); nes_write((0x0202 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AC6F:;
    /* $AC6F: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC70:;
    /* $AC70: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC71:;
    /* $AC71: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC72:;
    /* $AC72: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_AC73:;
    /* $AC73: CE */ maybe_trigger_vblank(6); { uint16_t a=0x0480; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AC76:;
    /* $AC76: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_AC8F;
label_AC78:;
    /* $AC78: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x04); FLAG_NZ(g_cpu.Y);
label_AC7A:;
    /* $AC7A: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x06); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AC7C:;
    /* $AC7C: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AC8C;
label_AC7E:;
    /* $AC7E: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC80:;
    /* $AC80: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_AC81:;
    /* $AC81: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AC82:;
    /* $AC82: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AC84:;
    /* $AC84: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AC85:;
    /* $AC85: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_AC87:;
    /* $AC87: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_AC88:;
    /* $AC88: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_AC8A:;
    /* $AC8A: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_AC8C:;
    /* $AC8C: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8BE7, 3); return;
label_AC8F:;
    /* $AC8F: 86 */ maybe_trigger_vblank(3); nes_write(0x22, g_cpu.X);
label_AC91:;
    /* $AC91: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A060_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A060_b3");
#endif
label_A060:;
    /* $A060: 80 */ maybe_trigger_vblank(2); /* NOP */
label_A062:;
    /* $A062: 36 */ maybe_trigger_vblank(6); { uint16_t a=(0x05 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A064:;
    /* $A064: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_A067:;
    /* $A067: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A068:;
    /* $A068: 8C */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.Y);
label_A06B:;
    /* $A06B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0537); FLAG_NZ(g_cpu.A);
label_A06E:;
    /* $A06E: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_A071:;
    /* $A071: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0452); FLAG_NZ(g_cpu.A);
label_A074:;
    /* $A074: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A085;
label_A076:;
    /* $A076: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0444; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A079:;
    /* $A079: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0444); FLAG_NZ(g_cpu.X);
label_A07C:;
    /* $A07C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x044E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 8D */ maybe_trigger_vblank(4); nes_write(0x0452, g_cpu.A);
label_A082:;
    /* $A082: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8088, 3); return;
label_A085:;
    /* $A085: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0441; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A088:;
    /* $A088: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x36); FLAG_NZ(g_cpu.A);
label_A08A:;
    /* $A08A: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_A08D:;
    /* $A08D: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A08E:;
    /* $A08E: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A08F:;
    /* $A08F: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A090:;
    /* $A090: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A091:;
    /* $A091: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A092:;
    /* $A092: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A905_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A905_b3");
#endif
label_A905:;
    /* $A905: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xC8); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A907:;
    /* $A907: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A909:;
    /* $A909: 8D */ maybe_trigger_vblank(4); nes_write(0x046A, g_cpu.A);
label_A90C:;
    /* $A90C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A90D:;
    /* $A90D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A90F:;
    /* $A90F: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A910:;
    /* $A910: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x07; FLAG_NZ(g_cpu.A);
label_A912:;
    /* $A912: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A914:;
    /* $A914: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A915:;
    /* $A915: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A916:;
    /* $A916: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0443; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A919:;
    /* $A919: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A91A:;
    /* $A91A: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x0443; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A91D:;
    /* $A91D: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A91F:;
    /* $A91F: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A920:;
    /* $A920: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A922:;
    /* $A922: 9D */ maybe_trigger_vblank(5); nes_write((0x044D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A925:;
    /* $A925: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A926:;
    /* $A926: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A928:;
    /* $A928: 9D */ maybe_trigger_vblank(5); nes_write((0x0453 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A92B:;
    /* $A92B: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A92C:;
    /* $A92C: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A92E:;
    /* $A92E: 9D */ maybe_trigger_vblank(5); nes_write((0x0457 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A931:;
    /* $A931: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A932:;
    /* $A932: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A934:;
    /* $A934: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A91F;
    }
label_A936:;
    /* $A936: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x044D); FLAG_NZ(g_cpu.A);
label_A939:;
    /* $A939: 85 */ maybe_trigger_vblank(3); nes_write(0x20, g_cpu.A);
label_A93B:;
    /* $A93B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0503); FLAG_NZ(g_cpu.A);
label_A93E:;
    /* $A93E: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A968;
label_A940:;
    /* $A940: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A941:;
    /* $A941: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A943:;
    /* $A943: 8D */ maybe_trigger_vblank(4); nes_write(0x046B, g_cpu.A);
label_A946:;
    /* $A946: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A947:;
    /* $A947: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A949:;
    /* $A949: 8D */ maybe_trigger_vblank(4); nes_write(0x046C, g_cpu.A);
label_A94C:;
    /* $A94C: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A94D:;
    /* $A94D: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A94F:;
    /* $A94F: 8D */ maybe_trigger_vblank(4); nes_write(0x0467, g_cpu.A);
label_A952:;
    /* $A952: 8D */ maybe_trigger_vblank(4); nes_write(0x0468, g_cpu.A);
label_A955:;
    /* $A955: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A957:;
    /* $A957: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A958:;
    /* $A958: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A95A:;
    /* $A95A: 9D */ maybe_trigger_vblank(5); nes_write((0x0463 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A95D:;
    /* $A95D: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A95E:;
    /* $A95E: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A960:;
    /* $A960: 9D */ maybe_trigger_vblank(5); nes_write((0x045B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A963:;
    /* $A963: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A964:;
    /* $A964: E4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x02); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A966:;
    /* $A966: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A957;
    }
label_A968:;
    /* $A968: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A969:;
    /* $A969: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A96B:;
    /* $A96B: 8D */ maybe_trigger_vblank(4); nes_write(0x0535, g_cpu.A);
label_A96E:;
    /* $A96E: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0505; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A971:;
    /* $A971: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9F7_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9F7_b3");
#endif
label_A9F7:;
    /* $A9F7: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xAD); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9F9:;
    /* $A9F9: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A9FA:;
    /* $A9FA: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x29); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9FC:;
    /* $A9FC: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x0AD0, -1);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A9FF:;
    /* $A9FF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x38; FLAG_NZ(g_cpu.A);
label_AA01:;
    /* $AA01: 8D */ maybe_trigger_vblank(4); nes_write(0x0514, g_cpu.A);
label_AA04:;
    /* $AA04: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x27; FLAG_NZ(g_cpu.A);
label_AA06:;
    /* $AA06: 8D */ maybe_trigger_vblank(4); nes_write(0x0516, g_cpu.A);
label_AA09:;
    /* $AA09: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x88CC, 3); return;
}

void func_A590_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A590_b3");
#endif
label_A590:;
    /* $A590: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x20; FLAG_NZ(g_cpu.A);
label_A592:;
    /* $A592: 9E */ maybe_trigger_vblank(5); /* ILLEGAL $9E — skip 3 */
label_A595:;
    /* $A595: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x85A0; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A598:;
    /* $A598: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x0FB9; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A59B:;
    /* $A59B: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x85; FLAG_NZ(g_cpu.Y);
label_A59D:;
    /* $A59D: 0F */ maybe_trigger_vblank(6); { uint16_t a=0x00A0; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_A5A0:;
    /* $A5A0: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x0E) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5A2:;
    /* $A5A2: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A5A3:;
    /* $A5A3: 85 */ maybe_trigger_vblank(3); nes_write(0x02, g_cpu.A);
label_A5A5:;
    /* $A5A5: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A5A7:;
    /* $A5A7: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A5A8:;
    /* $A5A8: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A5A9:;
    /* $A5A9: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA004 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5AC:;
    /* $A5AC: 8D */ maybe_trigger_vblank(4); nes_write(0x0470, g_cpu.A);
label_A5AF:;
    /* $A5AF: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA005 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5B2:;
    /* $A5B2: 8D */ maybe_trigger_vblank(4); nes_write(0x0471, g_cpu.A);
label_A5B5:;
    /* $A5B5: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_A5B7:;
    /* $A5B7: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A5B8:;
    /* $A5B8: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A5B9:;
    /* $A5B9: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A5BA:;
    /* $A5BA: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A5BB:;
    /* $A5BB: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA000 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5BE:;
    /* $A5BE: 8D */ maybe_trigger_vblank(4); nes_write(0x0472, g_cpu.A);
label_A5C1:;
    /* $A5C1: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA00A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5C4:;
    /* $A5C4: 8D */ maybe_trigger_vblank(4); nes_write(0x046E, g_cpu.A);
label_A5C7:;
    /* $A5C7: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA001 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5CA:;
    /* $A5CA: 8D */ maybe_trigger_vblank(4); nes_write(0x0473, g_cpu.A);
label_A5CD:;
    /* $A5CD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0xA00B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5D0:;
    /* $A5D0: 8D */ maybe_trigger_vblank(4); nes_write(0x046F, g_cpu.A);
label_A5D3:;
    /* $A5D3: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x0E) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A5D5:;
    /* $A5D5: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A5D6:;
    /* $A5D6: 8C */ maybe_trigger_vblank(4); nes_write(0x047A, g_cpu.Y);
label_A5D9:;
    /* $A5D9: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8656, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A5DC:;
    /* $A5DC: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0424); FLAG_NZ(g_cpu.A);
label_A5DF:;
    /* $A5DF: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8B9E, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A5E2:;
    /* $A5E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x837A, 3); return;
}

void func_B9C8_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B9C8_b3");
#endif
label_B9C8:;
    /* $B9C8: 1B */ maybe_trigger_vblank(7); { uint16_t a=(0x82A8 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_B9CB:;
    /* $B9CB: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_B9CC:;
    /* $B9CC: 94 */ maybe_trigger_vblank(4); nes_write((0xA9 + g_cpu.X) & 0xFF, g_cpu.Y);
label_B9CE:;
    /* $B9CE: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0xB0A9); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B9D1:;
    /* $B9D1: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_B9D2:;
    /* $B9D2: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16_jmpbug(0x03AC); maybe_trigger_vblank(2); call_by_address_tail(_jt, -1); return; }
}

void func_A560_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A560_b3");
#endif
label_A560:;
    /* $A560: 26 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A562:;
    /* $A562: 85 */ maybe_trigger_vblank(3); nes_write(0x0B, g_cpu.A);
label_A564:;
    /* $A564: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A504_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A504_b3");
#endif
label_A504:;
    /* $A504: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x60); FLAG_NZ(g_cpu.A);
label_A506:;
    /* $A506: 8D */ maybe_trigger_vblank(4); nes_write(0x0533, g_cpu.A);
label_A509:;
    /* $A509: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A50C:;
    /* $A50C: 8D */ maybe_trigger_vblank(4); nes_write(0x0507, g_cpu.A);
label_A50F:;
    /* $A50F: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A511:;
    /* $A511: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A514:;
    /* $A514: 9D */ maybe_trigger_vblank(5); nes_write((0x0509 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A517:;
    /* $A517: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A518:;
    /* $A518: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x03; g_cpu.C=(g_cpu.X>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A51A:;
    /* $A51A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A511;
    }
label_A51C:;
    /* $A51C: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0504; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A51F:;
    /* $A51F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0505; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A522:;
    /* $A522: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_BA43_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BA43_b3");
#endif
label_BA43:;
    /* $BA43: 07 */ maybe_trigger_vblank(5); { uint16_t a=0xD3; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA45:;
    /* $BA45: 42 */ maybe_trigger_vblank(2); /* ILLEGAL $42 — skip 1 */
label_BA46:;
    /* $BA46: 03 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x06 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); g_cpu.A|=v; FLAG_NZ(g_cpu.A); }
label_BA48:;
    /* $BA48: 12 */ maybe_trigger_vblank(2); /* ILLEGAL $12 — skip 1 */
label_BA49:;
    /* $BA49: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBA49); return;
}

void func_AD91_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AD91_b3");
#endif
label_AD91:;
    /* $AD91: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0D23), 3); return; }
label_AD93:;
    /* $AD93: 0C */ maybe_trigger_vblank(4); (void)nes_read(0xC0C9); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_AD96:;
    /* $AD96: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_AD9C;
label_AD98:;
    /* $AD98: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5D; FLAG_NZ(g_cpu.A);
label_AD9A:;
    /* $AD9A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_ADA2;
label_AD9C:;
    /* $AD9C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x5C; FLAG_NZ(g_cpu.A);
label_AD9E:;
    /* $AD9E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_ADA2;
label_ADA0:;
    /* $ADA0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_ADA2:;
    /* $ADA2: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ADA5:;
    /* $ADA5: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ADA6:;
    /* $ADA6: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_ADA7:;
    /* $ADA7: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_ADA9:;
    /* $ADA9: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x0D8C), 3); return; }
label_ADAB:;
    /* $ADAB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_ADAD:;
    /* $ADAD: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ADB0:;
    /* $ADB0: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ADB1:;
    /* $ADB1: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x03); FLAG_NZ(g_cpu.A);
label_ADB3:;
    /* $ADB3: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ADB4:;
    /* $ADB4: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x20 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x20); g_cpu.A=r&0xFF; }
label_ADB6:;
    /* $ADB6: 9D */ maybe_trigger_vblank(5); nes_write((0x03A1 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ADB9:;
    /* $ADB9: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_ADBD;
label_ADBB:;
    /* $ADBB: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x02; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ADBD:;
    /* $ADBD: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x02); FLAG_NZ(g_cpu.A);
label_ADBF:;
    /* $ADBF: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ADC2:;
    /* $ADC2: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ADC3:;
    /* $ADC3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ADC4:;
    /* $ADC4: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_ADC6:;
    /* $ADC6: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x0C) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ADC8:;
    /* $ADC8: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xA0; g_cpu.C=(g_cpu.A>=0xA0)?1:0; FLAG_NZ(r&0xFF); }
label_ADCA:;
    /* $ADCA: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_ADE0;
label_ADCC:;
    /* $ADCC: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xC0; g_cpu.C=(g_cpu.A>=0xC0)?1:0; FLAG_NZ(r&0xFF); }
label_ADCE:;
    /* $ADCE: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_ADDE;
label_ADD0:;
    /* $ADD0: 84 */ maybe_trigger_vblank(3); nes_write(0x04, g_cpu.Y);
label_ADD2:;
    /* $ADD2: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_ADD3:;
    /* $ADD3: E9 */ maybe_trigger_vblank(2); { uint8_t m=0xB0; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ADD5:;
    /* $ADD5: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_ADD6:;
    /* $ADD6: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8FF8 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_ADD9:;
    /* $ADD9: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x04); FLAG_NZ(g_cpu.Y);
label_ADDB:;
    /* $ADDB: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8DE0, 3); return;
label_ADDE:;
    /* $ADDE: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_ADE0:;
    /* $ADE0: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_ADE3:;
    /* $ADE3: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_ADE4:;
    /* $ADE4: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_ADE5:;
    /* $ADE5: C4 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int r=g_cpu.Y-m; g_cpu.C=(g_cpu.Y>=m)?1:0; FLAG_NZ(r&0xFF); }
label_ADE7:;
    /* $ADE7: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_ADC6;
    }
label_ADE9:;
    /* $ADE9: 86 */ maybe_trigger_vblank(3); nes_write(0x21, g_cpu.X);
label_ADEB:;
    /* $ADEB: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_ADED:;
    /* $ADED: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_ADEE:;
    /* $ADEE: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x0C); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_ADF0:;
    /* $ADF0: 85 */ maybe_trigger_vblank(3); nes_write(0x0C, g_cpu.A);
label_ADF2:;
    /* $ADF2: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_ADF6;
label_ADF4:;
    /* $ADF4: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x0D; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_ADF6:;
    /* $ADF6: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B191_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B191_b3");
#endif
label_B191:;
    /* $B191: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B192:;
    /* $B192: 75 */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x08 + g_cpu.X) & 0xFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B194:;
    /* $B194: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x08 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B196:;
    /* $B196: BC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read((0xBD08 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.Y);
label_B199:;
    /* $B199: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B19A:;
    /* $B19A: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B19B:;
    /* $B19B: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B19C:;
    /* $B19C: 3B */ maybe_trigger_vblank(7); { uint16_t a=(0x4608 + g_cpu.Y) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); g_cpu.A&=v; FLAG_NZ(g_cpu.A); }
label_B19F:;
    /* $B19F: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B1A0:;
    /* $B1A0: 47 */ maybe_trigger_vblank(5); { uint16_t a=0x08; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B1A2:;
    /* $B1A2: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B1A3:;
    /* $B1A3: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B1A4:;
    /* $B1A4: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_B1A6:;
    /* $B1A6: C1 */ maybe_trigger_vblank(6); { uint8_t m=nes_read(nes_read16zp((0x08 + g_cpu.X) & 0xFF)); int r=g_cpu.A-m; g_cpu.C=(g_cpu.A>=m)?1:0; FLAG_NZ(r&0xFF); }
label_B1A8:;
    /* $B1A8: C2 */ maybe_trigger_vblank(2); /* NOP */
label_B1AA:;
    /* $B1AA: BF */ maybe_trigger_vblank(4); g_cpu.A = g_cpu.X = nes_read((0xC00A + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1AD:;
    /* $B1AD: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B1AE:;
    /* $B1AE: 3D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x3E08 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1B1:;
    /* $B1B1: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x2C; FLAG_NZ(g_cpu.A);
label_B1B3:;
    /* $B1B3: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x2D; FLAG_NZ(g_cpu.A);
label_B1B5:;
    /* $B1B5: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B1B6:;
    /* $B1B6: 2E */ maybe_trigger_vblank(6); { uint16_t a=0x2F0A; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=(v>>7)&1; v=((v<<1)|c)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1B9:;
    /* $B1B9: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B1BA:;
    /* $B1BA: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x11C4), 3); return; }
label_B1BC:;
    /* $B1BC: 31 */ maybe_trigger_vblank(5); g_cpu.A &= nes_read((nes_read16zp(0x0D) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1BE:;
    /* $B1BE: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) goto label_B1CD;
label_B1C0:;
    /* $B1C0: 71 */ maybe_trigger_vblank(5); { uint8_t m=nes_read((nes_read16zp(0x0D) + g_cpu.Y) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_B1C2:;
    /* $B1C2: 7E */ maybe_trigger_vblank(7); { uint16_t a=(0x7D0D + g_cpu.X) & 0xFFFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_B1C5:;
    /* $B1C5: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B1C6:;
    /* $B1C6: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B1C7:;
    /* $B1C7: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B1C8:;
    /* $B1C8: 0B */ maybe_trigger_vblank(2); g_cpu.A &= 0x10; FLAG_NZ(g_cpu.A); g_cpu.C=(g_cpu.A>>7)&1;
label_B1CA:;
    /* $B1CA: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0xAD10); FLAG_NZ(g_cpu.Y);
label_B1CD:;
    /* $B1CD: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0xAE; g_cpu.C=(g_cpu.X>=0xAE)?1:0; FLAG_NZ(r&0xFF); }
label_B1CF:;
    /* $B1CF: 0D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read(0x0AB2); FLAG_NZ(g_cpu.A);
label_B1D2:;
    /* $B1D2: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x80) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_B1D4:;
    /* $B1D4: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x08; g_cpu.C=(g_cpu.X>=0x08)?1:0; FLAG_NZ(r&0xFF); }
label_B1D6:;
    /* $B1D6: 63 */ maybe_trigger_vblank(8); { uint16_t a=nes_read16zp((0x08 + g_cpu.X) & 0xFF); uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); uint16_t r=g_cpu.A+v+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_B1D8:;
    /* $B1D8: 64 */ maybe_trigger_vblank(3); (void)nes_read(0x0A); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1DA:;
    /* $B1DA: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_B1DB:;
    /* $B1DB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B1DC:;
    /* $B1DC: 8B */ maybe_trigger_vblank(2); /* ILLEGAL $8B — skip 2 */
label_B1DE:;
    /* $B1DE: 3A */ maybe_trigger_vblank(2); /* NOP */
label_B1DF:;
    /* $B1DF: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B1E0:;
    /* $B1E0: 3C */ maybe_trigger_vblank(4); (void)nes_read((0x4E08 + g_cpu.X) & 0xFFFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_B1E3:;
    /* $B1E3: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B1E4:;
    /* $B1E4: 4F */ maybe_trigger_vblank(6); { uint16_t a=0x8E0A; uint8_t v=nes_read(a); g_cpu.C=v&1; v>>=1; nes_write(a,v); g_cpu.A^=v; FLAG_NZ(g_cpu.A); }
label_B1E7:;
    /* $B1E7: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_B1E8:;
    /* $B1E8: 8F */ maybe_trigger_vblank(4); nes_write(0x4808, g_cpu.A & g_cpu.X); /* SAX */
label_B1EB:;
    /* $B1EB: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B1EC:;
    /* $B1EC: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x08; FLAG_NZ(g_cpu.A);
label_B1EE:;
    /* $B1EE: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_B1EF:;
    /* $B1EF: 08 */ maybe_trigger_vblank(3); { uint8_t p = (g_cpu.N<<7)|(g_cpu.V<<6)|0x30|(g_cpu.D<<3)|(g_cpu.I<<2)|(g_cpu.Z<<1)|g_cpu.C;
  g_ram[0x100 + g_cpu.S] = p; g_cpu.S--; }
label_B1F0:;
    /* $B1F0: 4B */ maybe_trigger_vblank(2); g_cpu.A &= 0x08; g_cpu.C=g_cpu.A&1; g_cpu.A>>=1; FLAG_NZ(g_cpu.A);
label_B1F2:;
    /* $B1F2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x4D08, -1); return;
label_B1F5:; return;
label_B1F7:; return;
label_B1F8:; return;
label_B1FA:; return;
label_B1FC:; return;
label_B1FD:; return;
label_B1FE:; return;
label_B200:; return;
label_B202:; return;
label_B203:; return;
label_B205:; return;
label_B207:; return;
label_B208:; return;
label_B20A:; return;
label_B20C:; return;
label_B20D:; return;
label_B20E:; return;
label_B210:; return;
label_B212:; return;
label_B214:; return;
label_B216:; return;
label_B219:; return;
label_B21A:; return;
label_B21C:; return;
label_B21F:; return;
label_B221:; return;
label_B222:; return;
label_B224:; return;
label_B225:; return;
label_B227:; return;
label_B229:; return;
label_B22A:; return;
label_B22C:; return;
label_B22E:; return;
label_B230:; return;
label_B232:; return;
label_B233:; return;
label_B234:; return;
label_B237:; return;
label_B238:; return;
label_B239:; return;
label_B23A:; return;
label_B23B:; return;
label_B23D:; return;
label_B23F:; return;
label_B241:; return;
label_B243:; return;
label_B245:; return;
label_B247:; return;
label_B249:; return;
label_B24B:; return;
label_B24D:; return;
label_B24F:; return;
label_B250:; return;
label_B251:; return;
label_B252:; return;
label_B253:; return;
label_B254:; return;
label_B255:; return;
label_B256:; return;
label_B257:; return;
label_B258:; return;
label_B25B:; return;
label_B25C:; return;
label_B25F:; return;
label_B262:; return;
label_B263:; return;
label_B264:; return;
label_B267:; return;
label_B268:; return;
label_B26A:; return;
label_B26B:; return;
label_B26C:; return;
label_B26F:; return;
label_B272:; return;
label_B274:; return;
label_B277:; return;
label_B279:; return;
label_B27A:; return;
label_B27B:; return;
label_B27C:; return;
label_B27D:; return;
label_B280:; return;
label_B283:; return;
label_B285:; return;
label_B286:; return;
label_B287:; return;
label_B288:; return;
label_B289:; return;
label_B28A:; return;
label_B28C:; return;
label_B28F:; return;
label_B290:; return;
label_B293:; return;
label_B294:; return;
label_B295:; return;
label_B296:; return;
label_B299:; return;
label_B29B:; return;
label_B29C:; return;
label_B29D:; return;
label_B29E:; return;
label_B2A1:; return;
label_B2A2:; return;
label_B2A3:; return;
label_B2A4:; return;
label_B2A6:; return;
label_B2A9:; return;
label_B2AA:; return;
label_B2AC:; return;
label_B2AD:; return;
label_B2AE:; return;
label_B2B1:; return;
label_B2B3:; return;
label_B2B4:; return;
label_B2B7:; return;
label_B2B8:; return;
label_B2BA:; return;
label_B2BD:; return;
label_B2BF:; return;
label_B2C0:; return;
label_B2C1:; return;
label_B2C3:; return;
label_B2C5:; return;
label_B2C6:; return;
label_B2C7:; return;
label_B2C9:; return;
label_B2CA:; return;
label_B2CB:; return;
label_B2CD:; return;
label_B2CE:; return;
label_B2D1:; return;
label_B2D3:; return;
label_B2D4:; return;
label_B2D7:; return;
label_B2D8:; return;
label_B2DA:; return;
label_B2DD:; return;
label_B2DF:; return;
label_B2E0:; return;
label_B2E1:; return;
label_B2E3:; return;
label_B2E4:; return;
label_B2E7:; return;
label_B2E8:; return;
label_B2E9:; return;
label_B2EB:; return;
label_B2EC:; return;
label_B2EF:; return;
label_B2F2:; return;
label_B2F3:; return;
label_B2F5:; return;
label_B2F7:; return;
label_B2F8:; return;
label_B2F9:; return;
label_B2FB:; return;
label_B2FD:; return;
label_B2FE:; return;
label_B2FF:; return;
label_B301:; return;
label_B302:; return;
label_B305:; return;
label_B307:; return;
label_B309:; return;
label_B30A:; return;
label_B30D:; return;
label_B310:; return;
label_B312:; return;
label_B314:; return;
label_B315:; return;
label_B316:; return;
label_B317:; return;
label_B31A:; return;
label_B31C:; return;
label_B31E:; return;
label_B31F:; return;
label_B321:; return;
label_B322:; return;
label_B324:; return;
label_B326:; return;
label_B328:; return;
label_B32A:; return;
label_B32D:; return;
label_B32F:; return;
label_B331:; return;
label_B333:; return;
label_B334:; return;
label_B336:; return;
label_B338:; return;
label_B33A:; return;
label_B33D:; return;
label_B340:; return;
label_B342:; return;
label_B344:; return;
label_B346:; return;
label_B349:; return;
label_B34A:; return;
label_B34C:; return;
label_B34E:; return;
label_B350:; return;
label_B352:; return;
label_B354:; return;
label_B357:; return;
label_B359:; return;
label_B35C:; return;
label_B35E:; return;
label_B361:; return;
label_B362:; return;
label_B365:; return;
label_B367:; return;
label_B369:; return;
label_B36B:; return;
label_B36D:; return;
label_B36E:; return;
label_B370:; return;
label_B373:; return;
label_B374:; return;
label_B377:; return;
label_B379:; return;
label_B37B:; return;
label_B37C:; return;
label_B37E:; return;
label_B381:; return;
label_B384:; return;
label_B385:; return;
label_B386:; return;
label_B389:; return;
label_B38C:; return;
label_B38E:; return;
label_B391:; return;
label_B393:; return;
label_B395:; return;
label_B397:; return;
label_B398:; return;
label_B39B:; return;
label_B39E:; return;
label_B3A0:; return;
label_B3A2:; return;
label_B3A4:; return;
label_B3A6:; return;
label_B3A9:; return;
label_B3AB:; return;
label_B3AC:; return;
label_B3AD:; return;
label_B3AF:; return;
label_B3B1:; return;
label_B3B3:; return;
label_B3B4:; return;
label_B3B6:; return;
label_B3B9:; return;
label_B3BA:; return;
label_B3BD:; return;
label_B3BF:; return;
label_B3C0:; return;
label_B3C2:; return;
label_B3C5:; return;
label_B3C6:; return;
label_B3C8:; return;
label_B3CA:; return;
label_B3CC:; return;
label_B3CE:; return;
label_B3D0:; return;
label_B3D2:; return;
label_B3D4:; return;
label_B3D7:; return;
label_B3D8:; return;
label_B3DA:; return;
label_B3DB:; return;
label_B3DC:; return;
label_B3DE:; return;
label_B3E0:; return;
label_B3E2:; return;
label_B3E4:; return;
label_B3E6:; return;
label_B3E8:; return;
label_B3EA:; return;
label_B3EC:; return;
label_B3EE:; return;
label_B3F0:; return;
label_B3F2:; return;
label_B3F4:; return;
label_B3F6:; return;
label_B3F8:; return;
label_B3FA:; return;
label_B3FC:; return;
label_B3FE:; return;
label_B400:; return;
label_B402:; return;
label_B404:; return;
label_B406:; return;
label_B408:; return;
label_B40A:; return;
label_B40C:; return;
label_B40E:; return;
label_B410:; return;
label_B411:; return;
label_B413:; return;
label_B414:; return;
label_B415:; return;
label_B416:; return;
label_B417:; return;
label_B419:; return;
label_B41C:; return;
label_B41D:; return;
label_B41E:; return;
label_B41F:; return;
label_B421:; return;
label_B422:; return;
label_B423:; return;
label_B424:; return;
label_B425:; return;
label_B426:; return;
label_B428:; return;
label_B429:; return;
label_B42A:; return;
label_B42B:; return;
label_B42C:; return;
label_B42F:; return;
label_B432:; return;
label_B433:; return;
label_B434:; return;
label_B436:; return;
label_B439:; return;
label_B43A:; return;
label_B43B:; return;
label_B43E:; return;
label_B43F:; return;
label_B440:; return;
label_B441:; return;
label_B442:; return;
label_B444:; return;
label_B445:; return;
label_B446:; return;
label_B447:; return;
label_B448:; return;
label_B449:; return;
label_B44A:; return;
label_B44C:; return;
label_B44D:; return;
label_B44E:; return;
label_B44F:; return;
label_B451:; return;
label_B452:; return;
label_B453:; return;
label_B454:; return;
label_B455:; return;
label_B456:; return;
label_B458:; return;
label_B459:; return;
label_B45A:; return;
label_B45B:; return;
label_B45D:; return;
label_B45E:; return;
label_B45F:; return;
label_B460:; return;
label_B462:; return;
label_B464:; return;
label_B465:; return;
label_B466:; return;
label_B467:; return;
label_B468:; return;
label_B46B:; return;
label_B46C:; return;
label_B46D:; return;
label_B46E:; return;
label_B46F:; return;
label_B470:; return;
label_B472:; return;
label_B473:; return;
label_B474:; return;
label_B475:; return;
label_B476:; return;
label_B477:; return;
label_B479:; return;
label_B47A:; return;
label_B47B:; return;
label_B47C:; return;
label_B47F:; return;
label_B480:; return;
label_B481:; return;
label_B482:; return;
label_B483:; return;
label_B485:; return;
label_B486:; return;
label_B487:; return;
label_B489:; return;
label_B48C:; return;
label_B48D:; return;
label_B48E:; return;
label_B48F:; return;
label_B491:; return;
label_B492:; return;
label_B493:; return;
label_B494:; return;
label_B495:; return;
label_B498:; return;
label_B499:; return;
label_B49C:; return;
label_B49F:; return;
label_B4A0:; return;
label_B4A1:; return;
label_B4A2:; return;
label_B4A3:; return;
label_B4A4:; return;
label_B4A5:; return;
label_B4A6:; return;
label_B4A9:; return;
label_B4AA:; return;
label_B4AB:; return;
label_B4AE:; return;
label_B4AF:; return;
label_B4B0:; return;
label_B4B1:; return;
label_B4B2:; return;
label_B4B3:; return;
label_B4B5:; return;
label_B4B6:; return;
label_B4B7:; return;
label_B4B8:; return;
label_B4B9:; return;
label_B4BA:; return;
label_B4BC:; return;
label_B4BD:; return;
label_B4BE:; return;
label_B4BF:; return;
label_B4C0:; return;
label_B4C3:; return;
label_B4C6:; return;
label_B4C7:; return;
label_B4C8:; return;
label_B4C9:; return;
label_B4CB:; return;
label_B4CC:; return;
label_B4CD:; return;
label_B4CE:; return;
label_B4D0:; return;
label_B4D1:; return;
label_B4D4:; return;
label_B4D6:; return;
label_B4D7:; return;
label_B4D9:; return;
label_B4DA:; return;
label_B4DC:; return;
label_B4DD:; return;
label_B4DE:; return;
label_B4DF:; return;
label_B4E0:; return;
label_B4E3:; return;
label_B4E5:; return;
label_B4E7:; return;
label_B4E9:; return;
label_B4EC:; return;
label_B4ED:; return;
label_B4EF:; return;
label_B4F1:; return;
label_B4F3:; return;
label_B4F4:; return;
label_B4F6:; return;
label_B4F8:; return;
label_B4FA:; return;
label_B4FC:; return;
label_B4FE:; return;
label_B501:; return;
label_B503:; return;
label_B505:; return;
label_B507:; return;
label_B509:; return;
label_B50B:; return;
label_B50D:; return;
label_B50F:; return;
label_B511:; return;
label_B513:; return;
label_B515:; return;
label_B517:; return;
label_B519:; return;
label_B51C:; return;
label_B51D:; return;
label_B51F:; return;
label_B521:; return;
label_B524:; return;
label_B525:; return;
label_B527:; return;
label_B529:; return;
label_B52B:; return;
label_B52D:; return;
label_B52F:; return;
label_B531:; return;
label_B532:; return;
label_B534:; return;
label_B536:; return;
label_B539:; return;
label_B53B:; return;
label_B53D:; return;
label_B53E:; return;
label_B53F:; return;
label_B541:; return;
label_B542:; return;
label_B545:; return;
label_B547:; return;
label_B549:; return;
label_B54B:; return;
label_B54D:; return;
label_B54E:; return;
label_B550:; return;
label_B553:; return;
label_B555:; return;
label_B557:; return;
label_B559:; return;
label_B55A:; return;
label_B55C:; return;
label_B55E:; return;
label_B55F:; return;
label_B561:; return;
label_B562:; return;
label_B564:; return;
label_B565:; return;
label_B567:; return;
label_B569:; return;
label_B56B:; return;
label_B56D:; return;
label_B56E:; return;
label_B56F:; return;
label_B571:; return;
label_B573:; return;
label_B575:; return;
label_B577:; return;
label_B579:; return;
label_B57B:; return;
label_B57D:; return;
label_B57F:; return;
label_B580:; return;
label_B582:; return;
label_B585:; return;
label_B587:; return;
label_B589:; return;
label_B58B:; return;
label_B58E:; return;
label_B591:; return;
label_B593:; return;
label_B595:; return;
label_B596:; return;
label_B597:; return;
label_B59A:; return;
label_B59D:; return;
label_B5A0:; return;
label_B5A2:; return;
label_B5A3:; return;
label_B5A4:; return;
label_B5A6:; return;
label_B5A7:; return;
label_B5A9:; return;
label_B5AB:; return;
label_B5AC:; return;
label_B5AE:; return;
label_B5B1:; return;
label_B5B4:; return;
label_B5B6:; return;
label_B5B8:; return;
label_B5B9:; return;
label_B5BA:; return;
label_B5BB:; return;
label_B5BE:; return;
label_B5C0:; return;
label_B5C3:; return;
label_B5C6:; return;
label_B5C9:; return;
label_B5CC:; return;
label_B5CF:; return;
label_B5D2:; return;
label_B5D5:; return;
label_B5D8:; return;
label_B5DB:; return;
label_B5DE:; return;
label_B5E1:; return;
label_B5E4:; return;
label_B5E7:; return;
label_B5EA:; return;
label_B5ED:; return;
label_B5F0:; return;
label_B5F3:; return;
label_B5F6:; return;
label_B5F9:; return;
label_B5FC:; return;
label_B5FF:; return;
label_B602:; return;
label_B605:; return;
label_B607:; return;
label_B609:; return;
label_B60B:; return;
label_B60E:; return;
label_B611:; return;
label_B614:; return;
label_B617:; return;
label_B61A:; return;
label_B61D:; return;
label_B620:; return;
label_B623:; return;
label_B626:; return;
label_B629:; return;
label_B62C:; return;
label_B62F:; return;
label_B630:; return;
label_B632:; return;
label_B635:; return;
label_B638:; return;
label_B63B:; return;
label_B63E:; return;
label_B641:; return;
label_B644:; return;
label_B647:; return;
label_B649:; return;
label_B64B:; return;
label_B64D:; return;
label_B650:; return;
label_B651:; return;
label_B653:; return;
label_B655:; return;
label_B657:; return;
label_B659:; return;
label_B65C:; return;
label_B65F:; return;
label_B662:; return;
label_B664:; return;
label_B665:; return;
label_B667:; return;
label_B669:; return;
label_B66B:; return;
label_B66D:; return;
label_B66F:; return;
label_B671:; return;
label_B674:; return;
label_B676:; return;
label_B678:; return;
label_B67B:; return;
label_B67D:; return;
label_B67E:; return;
label_B680:; return;
label_B682:; return;
label_B683:; return;
label_B686:; return;
label_B689:; return;
label_B68C:; return;
label_B68F:; return;
label_B691:; return;
label_B693:; return;
label_B695:; return;
label_B698:; return;
label_B69B:; return;
label_B69E:; return;
label_B6A1:; return;
label_B6A4:; return;
label_B6A6:; return;
label_B6A7:; return;
label_B6AA:; return;
label_B6AD:; return;
label_B6B0:; return;
label_B6B3:; return;
label_B6B4:; return;
label_B6B6:; return;
label_B6B7:; return;
label_B6B9:; return;
label_B6BA:; return;
label_B6BC:; return;
label_B6BE:; return;
label_B6C0:; return;
label_B6C1:; return;
label_B6C3:; return;
label_B6C5:; return;
label_B6C6:; return;
label_B6C8:; return;
label_B6C9:; return;
label_B6CC:; return;
label_B6CF:; return;
label_B6D2:; return;
label_B6D5:; return;
label_B6D8:; return;
label_B6D9:; return;
label_B6DA:; return;
label_B6DC:; return;
label_B6DD:; return;
label_B6DF:; return;
label_B6E0:; return;
label_B6E2:; return;
label_B6E4:; return;
label_B6E6:; return;
label_B6E8:; return;
label_B6EA:; return;
label_B6EC:; return;
label_B6ED:; return;
label_B6EE:; return;
label_B6F0:; return;
label_B6F1:; return;
label_B6F2:; return;
label_B6F4:; return;
label_B6F5:; return;
label_B6F7:; return;
label_B6F9:; return;
label_B6FA:; return;
label_B6FD:; return;
label_B6FF:; return;
label_B701:; return;
label_B704:; return;
label_B706:; return;
label_B708:; return;
label_B709:; return;
label_B70A:; return;
label_B70C:; return;
label_B70E:; return;
label_B710:; return;
label_B712:; return;
label_B714:; return;
label_B716:; return;
label_B717:; return;
label_B719:; return;
label_B71A:; return;
label_B71C:; return;
label_B71F:; return;
label_B722:; return;
label_B725:; return;
label_B728:; return;
label_B72B:; return;
label_B72E:; return;
label_B731:; return;
label_B734:; return;
label_B737:; return;
label_B73A:; return;
label_B73D:; return;
label_B740:; return;
label_B741:; return;
label_B743:; return;
label_B745:; return;
label_B747:; return;
label_B748:; return;
label_B749:; return;
label_B74A:; return;
label_B74C:; return;
label_B74E:; return;
label_B750:; return;
label_B752:; return;
label_B754:; return;
label_B756:; return;
label_B757:; return;
label_B759:; return;
label_B75A:; return;
label_B75B:; return;
label_B75E:; return;
label_B75F:; return;
label_B761:; return;
label_B764:; return;
label_B765:; return;
label_B767:; return;
label_B76A:; return;
label_B76B:; return;
label_B76E:; return;
label_B76F:; return;
label_B771:; return;
label_B772:; return;
label_B773:; return;
label_B774:; return;
label_B775:; return;
label_B776:; return;
label_B779:; return;
label_B77B:; return;
label_B77E:; return;
label_B781:; return;
label_B784:; return;
label_B786:; return;
label_B788:; return;
label_B789:; return;
label_B78B:; return;
label_B78D:; return;
label_B790:; return;
label_B791:; return;
label_B793:; return;
label_B796:; return;
label_B797:; return;
label_B79A:; return;
label_B79B:; return;
label_B79D:; return;
label_B79E:; return;
label_B79F:; return;
label_B7A1:; return;
label_B7A2:; return;
label_B7A3:; return;
label_B7A6:; return;
label_B7A7:; return;
label_B7AA:; return;
label_B7AD:; return;
label_B7B0:; return;
label_B7B3:; return;
label_B7B4:; return;
label_B7B7:; return;
label_B7B8:; return;
label_B7BB:; return;
label_B7BD:; return;
label_B7BF:; return;
label_B7C1:; return;
label_B7C3:; return;
label_B7C5:; return;
label_B7C7:; return;
label_B7C9:; return;
label_B7CB:; return;
label_B7CD:; return;
label_B7CF:; return;
label_B7D1:; return;
label_B7D3:; return;
label_B7D5:; return;
label_B7D7:; return;
label_B7D9:; return;
label_B7DB:; return;
label_B7DD:; return;
label_B7DF:; return;
label_B7E1:; return;
label_B7E3:; return;
label_B7E5:; return;
label_B7E7:; return;
label_B7E9:; return;
label_B7EB:; return;
label_B7ED:; return;
label_B7EF:; return;
label_B7F1:; return;
label_B7F3:; return;
label_B7F4:; return;
label_B7F6:; return;
label_B7F8:; return;
label_B7FA:; return;
label_B7FC:; return;
label_B7FE:; return;
label_B800:; return;
label_B802:; return;
label_B804:; return;
label_B806:; return;
label_B808:; return;
label_B80B:; return;
label_B80D:; return;
label_B810:; return;
label_B813:; return;
label_B815:; return;
label_B818:; return;
label_B819:; return;
label_B81B:; return;
label_B81D:; return;
label_B81F:; return;
label_B821:; return;
label_B823:; return;
label_B824:; return;
label_B826:; return;
label_B827:; return;
label_B82A:; return;
label_B82C:; return;
label_B82E:; return;
label_B830:; return;
label_B832:; return;
label_B834:; return;
label_B836:; return;
label_B838:; return;
label_B83A:; return;
label_B83C:; return;
label_B83E:; return;
label_B83F:; return;
label_B841:; return;
label_B842:; return;
label_B844:; return;
label_B847:; return;
label_B84A:; return;
label_B84C:; return;
label_B84E:; return;
label_B850:; return;
label_B852:; return;
label_B854:; return;
label_B856:; return;
label_B858:; return;
label_B85A:; return;
label_B85C:; return;
label_B85E:; return;
label_B860:; return;
label_B861:; return;
label_B864:; return;
label_B866:; return;
label_B869:; return;
label_B86C:; return;
label_B86F:; return;
label_B870:; return;
label_B872:; return;
label_B874:; return;
label_B876:; return;
label_B878:; return;
label_B87A:; return;
label_B87B:; return;
label_B87C:; return;
label_B87D:; return;
label_B87F:; return;
label_B880:; return;
label_B881:; return;
label_B883:; return;
label_B885:; return;
label_B887:; return;
label_B888:; return;
label_B889:; return;
label_B88B:; return;
label_B88D:; return;
label_B88F:; return;
label_B892:; return;
label_B894:; return;
label_B895:; return;
label_B897:; return;
label_B89A:; return;
label_B89B:; return;
label_B89E:; return;
label_B89F:; return;
label_B8A1:; return;
label_B8A3:; return;
label_B8A5:; return;
label_B8A7:; return;
label_B8A8:; return;
label_B8AB:; return;
label_B8AC:; return;
label_B8AE:; return;
label_B8AF:; return;
label_B8B0:; return;
label_B8B2:; return;
label_B8B3:; return;
label_B8B4:; return;
label_B8B5:; return;
label_B8B7:; return;
label_B8B9:; return;
label_B8BB:; return;
label_B8BC:; return;
label_B8BE:; return;
label_B8BF:; return;
label_B8C1:; return;
label_B8C2:; return;
label_B8C4:; return;
label_B8C6:; return;
label_B8C8:; return;
label_B8CA:; return;
label_B8CC:; return;
label_B8CF:; return;
label_B8D2:; return;
label_B8D4:; return;
label_B8D7:; return;
label_B8D9:; return;
label_B8DB:; return;
label_B8DD:; return;
label_B8DE:; return;
label_B8E0:; return;
label_B8E2:; return;
label_B8E4:; return;
label_B8E6:; return;
label_B8E8:; return;
label_B8EA:; return;
label_B8EB:; return;
label_B8EC:; return;
label_B8ED:; return;
label_B8EF:; return;
label_B8F0:; return;
label_B8F1:; return;
label_B8F2:; return;
label_B8F4:; return;
label_B8F5:; return;
label_B8F6:; return;
label_B8F7:; return;
label_B8F9:; return;
label_B8FA:; return;
label_B8FB:; return;
label_B8FC:; return;
label_B8FD:; return;
label_B8FF:; return;
label_B902:; return;
label_B903:; return;
label_B906:; return;
label_B907:; return;
label_B908:; return;
label_B909:; return;
label_B90B:; return;
label_B90E:; return;
label_B90F:; return;
label_B910:; return;
label_B911:; return;
label_B913:; return;
label_B915:; return;
label_B918:; return;
label_B91B:; return;
label_B91E:; return;
label_B920:; return;
label_B922:; return;
label_B925:; return;
label_B927:; return;
label_B929:; return;
label_B92A:; return;
label_B92C:; return;
label_B92D:; return;
label_B92F:; return;
label_B930:; return;
label_B932:; return;
label_B935:; return;
label_B937:; return;
label_B93A:; return;
label_B93C:; return;
label_B93F:; return;
label_B941:; return;
label_B943:; return;
label_B945:; return;
label_B948:; return;
label_B94A:; return;
label_B94B:; return;
label_B94D:; return;
label_B94F:; return;
label_B952:; return;
label_B954:; return;
label_B956:; return;
label_B958:; return;
label_B95A:; return;
label_B95C:; return;
label_B95E:; return;
label_B960:; return;
label_B962:; return;
label_B964:; return;
label_B966:; return;
label_B968:; return;
label_B96A:; return;
label_B96C:; return;
label_B96E:; return;
label_B970:; return;
label_B973:; return;
label_B975:; return;
label_B976:; return;
label_B978:; return;
label_B97A:; return;
label_B97B:; return;
label_B97D:; return;
label_B97E:; return;
label_B980:; return;
label_B982:; return;
label_B983:; return;
label_B986:; return;
label_B988:; return;
label_B98A:; return;
label_B98D:; return;
label_B98F:; return;
label_B991:; return;
label_B993:; return;
label_B995:; return;
label_B997:; return;
label_B998:; return;
label_B99A:; return;
label_B99C:; return;
label_B99D:; return;
label_B99E:; return;
label_B99F:; return;
label_B9A0:; return;
label_B9A2:; return;
label_B9A4:; return;
label_B9A6:; return;
label_B9A8:; return;
label_B9AA:; return;
label_B9AC:; return;
label_B9AD:; return;
label_B9B0:; return;
label_B9B1:; return;
label_B9B2:; return;
label_B9B3:; return;
label_B9B5:; return;
label_B9B7:; return;
label_B9B9:; return;
label_B9BB:; return;
label_B9BD:; return;
label_B9BF:; return;
label_B9C1:; return;
label_B9C3:; return;
label_B9C5:; return;
label_B9C7:; return;
label_B9C9:; return;
label_B9CA:; return;
label_B9CC:; return;
label_B9CE:; return;
label_B9D1:; return;
label_B9D2:; return;
label_B9D5:; return;
label_B9D8:; return;
label_B9DB:; return;
label_B9DD:; return;
label_B9DF:; return;
label_B9E0:; return;
label_B9E2:; return;
label_B9E4:; return;
label_B9E6:; return;
label_B9E8:; return;
label_B9E9:; return;
label_B9EB:; return;
label_B9ED:; return;
label_B9EF:; return;
label_B9F0:; return;
label_B9F2:; return;
label_B9F4:; return;
label_B9F7:; return;
label_B9F8:; return;
label_B9F9:; return;
label_B9FA:; return;
label_B9FC:; return;
label_B9FE:; return;
label_B9FF:; return;
label_BA02:; return;
label_BA04:; return;
label_BA06:; return;
label_BA08:; return;
label_BA0A:; return;
label_BA0B:; return;
label_BA0C:; return;
label_BA0E:; return;
label_BA10:; return;
label_BA11:; return;
label_BA14:; return;
label_BA17:; return;
label_BA1A:; return;
label_BA1B:; return;
label_BA1E:; return;
label_BA20:; return;
label_BA22:; return;
label_BA25:; return;
label_BA26:; return;
label_BA28:; return;
label_BA2B:; return;
label_BA2E:; return;
label_BA30:; return;
label_BA31:; return;
label_BA33:; return;
label_BA34:; return;
label_BA36:; return;
label_BA37:; return;
label_BA38:; return;
label_BA3A:; return;
label_BA3B:; return;
label_BA3D:; return;
label_BA3E:; return;
label_BA40:; return;
label_BA42:; return;
label_BA43:; return;
label_BA45:; return;
label_BA46:; return;
label_BA48:; return;
label_BA49:; return;
label_BA4A:; return;
label_BA4C:; return;
label_BA4F:; return;
label_BA51:; return;
label_BA53:; return;
label_BA56:; return;
label_BA59:; return;
label_BA5C:; return;
label_BA5E:; return;
label_BA60:; return;
label_BA61:; return;
label_BA63:; return;
label_BA65:; return;
label_BA68:; return;
label_BA69:; return;
label_BA6C:; return;
label_BA6D:; return;
label_BA6F:; return;
label_BA71:; return;
label_BA73:; return;
label_BA76:; return;
label_BA77:; return;
label_BA79:; return;
label_BA7B:; return;
label_BA7E:; return;
label_BA80:; return;
label_BA82:; return;
label_BA83:; return;
label_BA84:; return;
label_BA87:; return;
label_BA89:; return;
label_BA8B:; return;
label_BA8E:; return;
label_BA8F:; return;
label_BA91:; return;
label_BA93:; return;
label_BA96:; return;
label_BA98:; return;
label_BA9A:; return;
label_BA9B:; return;
label_BA9D:; return;
label_BA9F:; return;
label_BAA1:; return;
label_BAA3:; return;
label_BAA5:; return;
label_BAA6:; return;
label_BAA8:; return;
label_BAA9:; return;
label_BAAB:; return;
label_BAAC:; return;
label_BAAD:; return;
label_BAAF:; return;
label_BAB1:; return;
label_BAB2:; return;
label_BAB4:; return;
label_BAB6:; return;
label_BAB7:; return;
label_BAB9:; return;
label_BABB:; return;
label_BABD:; return;
label_BABE:; return;
label_BAC1:; return;
label_BAC3:; return;
label_BAC5:; return;
label_BAC8:; return;
label_BACA:; return;
label_BACB:; return;
label_BACD:; return;
label_BAD0:; return;
label_BAD1:; return;
label_BAD2:; return;
label_BAD5:; return;
label_BAD7:; return;
label_BAD9:; return;
label_BADC:; return;
label_BADD:; return;
label_BADF:; return;
label_BAE1:; return;
label_BAE3:; return;
label_BAE5:; return;
label_BAE6:; return;
label_BAE8:; return;
label_BAE9:; return;
label_BAEB:; return;
label_BAED:; return;
label_BAEF:; return;
label_BAF0:; return;
label_BAF2:; return;
label_BAF3:; return;
label_BAF5:; return;
label_BAF7:; return;
label_BAF9:; return;
label_BAFB:; return;
label_BAFC:; return;
label_BAFE:; return;
label_BB00:; return;
label_BB02:; return;
label_BB04:; return;
label_BB05:; return;
label_BB07:; return;
label_BB08:; return;
label_BB0A:; return;
label_BB0D:; return;
label_BB0F:; return;
label_BB11:; return;
label_BB12:; return;
label_BB14:; return;
label_BB16:; return;
label_BB17:; return;
label_BB1A:; return;
label_BB1C:; return;
label_BB1D:; return;
label_BB1F:; return;
label_BB20:; return;
label_BB22:; return;
label_BB25:; return;
label_BB26:; return;
label_BB28:; return;
label_BB2B:; return;
label_BB2C:; return;
label_BB2E:; return;
label_BB31:; return;
label_BB34:; return;
label_BB36:; return;
label_BB37:; return;
label_BB39:; return;
label_BB3B:; return;
label_BB3C:; return;
label_BB3D:; return;
label_BB40:; return;
label_BB42:; return;
label_BB43:; return;
label_BB45:; return;
label_BB47:; return;
label_BB4A:; return;
label_BB4B:; return;
label_BB4D:; return;
label_BB50:; return;
label_BB51:; return;
label_BB52:; return;
label_BB54:; return;
label_BB56:; return;
label_BB57:; return;
label_BB59:; return;
label_BB5B:; return;
label_BB5D:; return;
label_BB5F:; return;
label_BB61:; return;
label_BB63:; return;
label_BB66:; return;
label_BB69:; return;
label_BB6B:; return;
label_BB6D:; return;
label_BB70:; return;
label_BB72:; return;
label_BB75:; return;
label_BB76:; return;
label_BB79:; return;
label_BB7B:; return;
label_BB7D:; return;
label_BB7E:; return;
label_BB7F:; return;
label_BB80:; return;
label_BB82:; return;
label_BB85:; return;
label_BB86:; return;
label_BB88:; return;
label_BB89:; return;
label_BB8B:; return;
label_BB8E:; return;
label_BB91:; return;
label_BB92:; return;
label_BB95:; return;
label_BB96:; return;
label_BB98:; return;
label_BB9A:; return;
label_BB9D:; return;
label_BB9F:; return;
label_BBA0:; return;
label_BBA3:; return;
label_BBA5:; return;
label_BBA7:; return;
label_BBA9:; return;
label_BBAB:; return;
label_BBAD:; return;
label_BBAE:; return;
label_BBB1:; return;
label_BBB3:; return;
label_BBB5:; return;
label_BBB7:; return;
label_BBB9:; return;
label_BBBA:; return;
label_BBBD:; return;
label_BBBE:; return;
label_BBC1:; return;
label_BBC3:; return;
label_BBC5:; return;
label_BBC7:; return;
label_BBC8:; return;
label_BBCA:; return;
label_BBCC:; return;
label_BBCD:; return;
label_BBD0:; return;
label_BBD2:; return;
label_BBD4:; return;
label_BBD6:; return;
label_BBD8:; return;
label_BBDB:; return;
label_BBDC:; return;
label_BBDD:; return;
label_BBE0:; return;
label_BBE1:; return;
label_BBE3:; return;
label_BBE4:; return;
label_BBE6:; return;
label_BBE9:; return;
label_BBEB:; return;
label_BBED:; return;
label_BBEE:; return;
label_BBF1:; return;
label_BBF3:; return;
label_BBF6:; return;
label_BBF7:; return;
label_BBF9:; return;
label_BBFC:; return;
label_BBFE:; return;
label_BC01:; return;
label_BC02:; return;
label_BC03:; return;
label_BC06:; return;
label_BC08:; return;
label_BC0A:; return;
label_BC0D:; return;
label_BC0E:; return;
label_BC11:; return;
label_BC14:; return;
label_BC16:; return;
label_BC19:; return;
label_BC1A:; return;
label_BC1C:; return;
label_BC1E:; return;
label_BC20:; return;
label_BC23:; return;
label_BC24:; return;
label_BC26:; return;
label_BC28:; return;
label_BC2A:; return;
label_BC2C:; return;
label_BC2E:; return;
label_BC30:; return;
label_BC31:; return;
label_BC34:; return;
label_BC35:; return;
label_BC36:; return;
label_BC38:; return;
label_BC3B:; return;
label_BC3E:; return;
label_BC41:; return;
label_BC43:; return;
label_BC45:; return;
label_BC47:; return;
label_BC4A:; return;
label_BC4C:; return;
label_BC4E:; return;
label_BC50:; return;
label_BC51:; return;
label_BC52:; return;
label_BC55:; return;
label_BC57:; return;
label_BC5A:; return;
label_BC5C:; return;
label_BC5E:; return;
label_BC60:; return;
label_BC61:; return;
label_BC62:; return;
label_BC64:; return;
label_BC66:; return;
label_BC68:; return;
label_BC6A:; return;
label_BC6D:; return;
label_BC6F:; return;
label_BC71:; return;
label_BC73:; return;
label_BC76:; return;
label_BC78:; return;
label_BC7B:; return;
label_BC7D:; return;
label_BC7E:; return;
label_BC80:; return;
label_BC81:; return;
label_BC83:; return;
label_BC86:; return;
label_BC89:; return;
label_BC8A:; return;
label_BC8B:; return;
label_BC8C:; return;
label_BC8D:; return;
label_BC8F:; return;
label_BC92:; return;
label_BC94:; return;
label_BC96:; return;
label_BC98:; return;
label_BC99:; return;
label_BC9A:; return;
label_BC9C:; return;
label_BC9E:; return;
label_BCA0:; return;
label_BCA3:; return;
label_BCA5:; return;
label_BCA7:; return;
label_BCAA:; return;
label_BCAB:; return;
label_BCAD:; return;
label_BCB0:; return;
label_BCB1:; return;
label_BCB4:; return;
label_BCB7:; return;
label_BCB8:; return;
label_BCBA:; return;
label_BCBD:; return;
label_BCBF:; return;
label_BCC1:; return;
label_BCC3:; return;
label_BCC4:; return;
label_BCC7:; return;
label_BCC8:; return;
label_BCC9:; return;
label_BCCA:; return;
label_BCCD:; return;
label_BCD0:; return;
label_BCD2:; return;
label_BCD4:; return;
label_BCD6:; return;
label_BCD7:; return;
label_BCD8:; return;
label_BCD9:; return;
label_BCDB:; return;
label_BCDE:; return;
label_BCE0:; return;
label_BCE2:; return;
label_BCE4:; return;
label_BCE6:; return;
label_BCE9:; return;
label_BCEB:; return;
label_BCED:; return;
label_BCEE:; return;
label_BCF0:; return;
label_BCF2:; return;
label_BCF3:; return;
label_BCF6:; return;
label_BCF7:; return;
label_BCF9:; return;
label_BCFC:; return;
label_BCFF:; return;
label_BD00:; return;
label_BD02:; return;
label_BD05:; return;
label_BD06:; return;
label_BD07:; return;
label_BD0A:; return;
label_BD0C:; return;
label_BD0D:; return;
label_BD0F:; return;
label_BD10:; return;
label_BD13:; return;
label_BD15:; return;
label_BD17:; return;
label_BD1A:; return;
label_BD1B:; return;
label_BD1E:; return;
label_BD20:; return;
label_BD21:; return;
label_BD22:; return;
label_BD23:; return;
label_BD25:; return;
label_BD27:; return;
label_BD2A:; return;
label_BD2B:; return;
label_BD2D:; return;
label_BD30:; return;
label_BD32:; return;
label_BD35:; return;
label_BD37:; return;
label_BD39:; return;
label_BD3B:; return;
label_BD3C:; return;
label_BD3D:; return;
label_BD3F:; return;
label_BD41:; return;
label_BD43:; return;
label_BD46:; return;
label_BD47:; return;
label_BD49:; return;
label_BD4C:; return;
label_BD4D:; return;
label_BD4E:; return;
label_BD50:; return;
label_BD53:; return;
label_BD54:; return;
label_BD56:; return;
label_BD58:; return;
label_BD5B:; return;
label_BD5C:; return;
label_BD5F:; return;
label_BD60:; return;
label_BD61:; return;
label_BD62:; return;
label_BD65:; return;
label_BD66:; return;
label_BD68:; return;
label_BD6A:; return;
label_BD6D:; return;
label_BD70:; return;
label_BD72:; return;
label_BD74:; return;
label_BD76:; return;
label_BD79:; return;
label_BD7A:; return;
label_BD7B:; return;
label_BD7D:; return;
label_BD7F:; return;
label_BD82:; return;
label_BD83:; return;
label_BD85:; return;
label_BD88:; return;
label_BD8A:; return;
label_BD8D:; return;
label_BD8F:; return;
label_BD91:; return;
label_BD93:; return;
label_BD94:; return;
label_BD95:; return;
label_BD97:; return;
label_BD99:; return;
label_BD9C:; return;
label_BD9F:; return;
label_BDA0:; return;
label_BDA2:; return;
label_BDA5:; return;
label_BDA6:; return;
label_BDA8:; return;
label_BDAB:; return;
label_BDAD:; return;
label_BDAF:; return;
label_BDB1:; return;
label_BDB2:; return;
label_BDB3:; return;
label_BDB5:; return;
label_BDB6:; return;
label_BDB8:; return;
label_BDBB:; return;
label_BDBC:; return;
label_BDBE:; return;
label_BDBF:; return;
label_BDC1:; return;
label_BDC3:; return;
label_BDC6:; return;
label_BDC7:; return;
label_BDC9:; return;
label_BDCC:; return;
label_BDCE:; return;
label_BDD1:; return;
label_BDD2:; return;
label_BDD4:; return;
label_BDD6:; return;
label_BDD8:; return;
label_BDDA:; return;
label_BDDD:; return;
label_BDDF:; return;
label_BDE1:; return;
label_BDE4:; return;
label_BDE6:; return;
label_BDE7:; return;
label_BDE8:; return;
label_BDEB:; return;
label_BDEE:; return;
label_BDF0:; return;
label_BDF2:; return;
label_BDF5:; return;
label_BDF7:; return;
label_BDFA:; return;
label_BDFC:; return;
label_BDFE:; return;
label_BE01:; return;
label_BE02:; return;
label_BE03:; return;
label_BE05:; return;
label_BE08:; return;
label_BE0A:; return;
label_BE0C:; return;
label_BE0D:; return;
label_BE0E:; return;
label_BE11:; return;
label_BE13:; return;
label_BE16:; return;
label_BE17:; return;
label_BE18:; return;
label_BE1A:; return;
label_BE1D:; return;
label_BE20:; return;
label_BE21:; return;
label_BE23:; return;
label_BE26:; return;
label_BE28:; return;
label_BE2B:; return;
label_BE2D:; return;
label_BE2F:; return;
label_BE31:; return;
label_BE32:; return;
label_BE33:; return;
label_BE35:; return;
label_BE38:; return;
label_BE3A:; return;
label_BE3B:; return;
label_BE3E:; return;
label_BE40:; return;
label_BE41:; return;
label_BE43:; return;
label_BE44:; return;
label_BE46:; return;
label_BE49:; return;
label_BE4A:; return;
label_BE4C:; return;
label_BE4F:; return;
label_BE50:; return;
label_BE51:; return;
label_BE53:; return;
label_BE56:; return;
label_BE59:; return;
label_BE5A:; return;
label_BE5C:; return;
label_BE5F:; return;
label_BE60:; return;
label_BE62:; return;
label_BE64:; return;
label_BE66:; return;
label_BE68:; return;
label_BE6A:; return;
label_BE6B:; return;
label_BE6D:; return;
label_BE70:; return;
label_BE71:; return;
label_BE72:; return;
label_BE75:; return;
label_BE77:; return;
label_BE78:; return;
label_BE79:; return;
label_BE7C:; return;
label_BE7D:; return;
label_BE7E:; return;
label_BE80:; return;
label_BE83:; return;
label_BE86:; return;
label_BE87:; return;
label_BE89:; return;
label_BE8C:; return;
label_BE8E:; return;
label_BE91:; return;
label_BE94:; return;
label_BE95:; return;
label_BE97:; return;
label_BE9A:; return;
label_BE9B:; return;
label_BE9D:; return;
label_BE9E:; return;
label_BEA0:; return;
label_BEA1:; return;
label_BEA2:; return;
label_BEA4:; return;
label_BEA6:; return;
label_BEA7:; return;
label_BEA8:; return;
label_BEAA:; return;
label_BEAC:; return;
label_BEAD:; return;
label_BEB0:; return;
label_BEB1:; return;
label_BEB4:; return;
label_BEB5:; return;
label_BEB7:; return;
label_BEB9:; return;
label_BEBA:; return;
label_BEBC:; return;
label_BEBF:; return;
label_BEC2:; return;
label_BEC3:; return;
label_BEC5:; return;
label_BEC8:; return;
label_BECB:; return;
label_BECD:; return;
label_BECF:; return;
label_BED1:; return;
label_BED3:; return;
label_BED4:; return;
label_BED5:; return;
label_BED8:; return;
label_BEDB:; return;
label_BEDE:; return;
label_BEDF:; return;
label_BEE0:; return;
label_BEE2:; return;
label_BEE4:; return;
label_BEE7:; return;
label_BEE8:; return;
label_BEEA:; return;
label_BEEB:; return;
label_BEED:; return;
label_BEF0:; return;
label_BEF3:; return;
label_BEF4:; return;
label_BEF6:; return;
label_BEF9:; return;
label_BEFC:; return;
label_BEFE:; return;
label_BEFF:; return;
label_BF01:; return;
label_BF04:; return;
label_BF05:; return;
label_BF07:; return;
label_BF09:; return;
label_BF0B:; return;
label_BF0C:; return;
label_BF0F:; return;
label_BF10:; return;
label_BF12:; return;
label_BF15:; return;
label_BF16:; return;
label_BF19:; return;
label_BF1C:; return;
label_BF1D:; return;
label_BF1F:; return;
label_BF22:; return;
label_BF24:; return;
label_BF26:; return;
label_BF28:; return;
label_BF2A:; return;
label_BF2C:; return;
label_BF2E:; return;
label_BF2F:; return;
label_BF32:; return;
label_BF34:; return;
label_BF35:; return;
label_BF36:; return;
label_BF39:; return;
label_BF3B:; return;
label_BF3C:; return;
label_BF3E:; return;
label_BF40:; return;
label_BF43:; return;
label_BF44:; return;
label_BF45:; return;
label_BF46:; return;
label_BF48:; return;
label_BF49:; return;
label_BF4C:; return;
label_BF4E:; return;
label_BF51:; return;
label_BF52:; return;
label_BF54:; return;
label_BF56:; return;
label_BF58:; return;
label_BF5A:; return;
label_BF5C:; return;
label_BF5E:; return;
label_BF5F:; return;
label_BF60:; return;
label_BF61:; return;
label_BF64:; return;
label_BF67:; return;
label_BF6A:; return;
label_BF6B:; return;
label_BF6D:; return;
label_BF70:; return;
label_BF71:; return;
label_BF73:; return;
label_BF74:; return;
label_BF77:; return;
label_BF79:; return;
label_BF7A:; return;
label_BF7B:; return;
label_BF7D:; return;
label_BF80:; return;
label_BF82:; return;
label_BF85:; return;
label_BF86:; return;
label_BF88:; return;
label_BF8B:; return;
label_BF8C:; return;
label_BF8E:; return;
label_BF90:; return;
label_BF91:; return;
label_BF92:; return;
label_BF93:; return;
label_BF94:; return;
label_BF96:; return;
label_BF98:; return;
label_BF9B:; return;
label_BF9E:; return;
label_BFA0:; return;
label_BFA1:; return;
label_BFA3:; return;
label_BFA4:; return;
label_BFA7:; return;
label_BFA8:; return;
label_BFA9:; return;
label_BFAA:; return;
label_BFAD:; return;
label_BFB0:; return;
label_BFB1:; return;
label_BFB3:; return;
label_BFB6:; return;
label_BFB8:; return;
label_BFBA:; return;
label_BFBD:; return;
label_BFC0:; return;
label_BFC2:; return;
label_BFC3:; return;
label_BFC5:; return;
label_BFC8:; return;
label_BFCA:; return;
label_BFCC:; return;
label_BFCE:; return;
label_BFCF:; return;
label_BFD2:; return;
label_BFD5:; return;
label_BFD6:; return;
label_BFD8:; return;
label_BFDB:; return;
label_BFDE:; return;
label_BFE0:; return;
label_BFE1:; return;
label_BFE2:; return;
label_BFE3:; return;
label_BFE6:; return;
label_BFE8:; return;
label_BFEA:; return;
label_BFEB:; return;
label_BFEE:; return;
label_BFEF:; return;
label_BFF0:; return;
label_BFF1:; return;
label_BFF2:; return;
label_BFF4:; return;
label_BFF6:; return;
label_BFF9:; return;
label_BFFB:; return;
label_BFFE:; return;
label_BFFF:; return;
label_C000:; return;
label_C003:; return;
label_C006:; return;
label_C009:; return;
label_C00C:; return;
label_C00F:; return;
label_C012:; return;
label_C015:; return;
label_C018:; return;
label_C01B:; return;
label_C01E:; return;
label_C021:; return;
label_C024:; return;
label_C027:; return;
label_C02A:; return;
label_C02D:; return;
label_C030:; return;
label_C033:; return;
label_C036:; return;
label_C039:; return;
label_C03C:; return;
label_C03F:; return;
label_C042:; return;
label_C045:; return;
label_C048:; return;
label_C04B:; return;
label_C04E:; return;
label_C051:; return;
label_C054:; return;
label_C057:; return;
label_C05A:; return;
label_C05D:; return;
label_C060:; return;
label_C063:; return;
label_C066:; return;
label_C069:; return;
label_C06C:; return;
label_C06F:; return;
label_C072:; return;
label_C075:; return;
label_C078:; return;
label_C07B:; return;
label_C07E:; return;
label_C081:; return;
label_C084:; return;
label_C087:; return;
label_C08A:; return;
label_C08D:; return;
label_C090:; return;
label_C093:; return;
label_C096:; return;
label_C099:; return;
label_C09C:; return;
label_C09F:; return;
label_C0A2:; return;
label_C0A5:; return;
label_C0A8:; return;
label_C0AB:; return;
label_C0AE:; return;
label_C0B1:; return;
label_C0B3:; return;
label_C0B5:; return;
label_C0B8:; return;
label_C0BA:; return;
label_C0BC:; return;
label_C0BE:; return;
label_C0C1:; return;
label_C0C3:; return;
label_C0C6:; return;
label_C0C9:; return;
label_C0CC:; return;
label_C0CF:; return;
label_C0D2:; return;
label_C0D4:; return;
label_C0D7:; return;
label_C0D9:; return;
label_C0DC:; return;
label_C0DE:; return;
label_C0E0:; return;
label_C0E2:; return;
label_C0E5:; return;
label_C0E8:; return;
label_C0EB:; return;
label_C0ED:; return;
label_C0EF:; return;
label_C0F1:; return;
label_C0F3:; return;
label_C0F5:; return;
label_C0F7:; return;
label_C0F9:; return;
label_C0FC:; return;
label_C0FE:; return;
label_C100:; return;
label_C102:; return;
label_C104:; return;
label_C107:; return;
label_C10A:; return;
label_C10D:; return;
label_C10F:; return;
label_C111:; return;
label_C113:; return;
label_C115:; return;
label_C117:; return;
}

void func_AB06_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AB06_b3");
#endif
label_AB06:;
    /* $AB06: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) goto label_AB19;
label_AB08:;
    /* $AB08: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AB0A:;
    /* $AB0A: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AB0B:;
    /* $AB0B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0489 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB0E:;
    /* $AB0E: 9D */ maybe_trigger_vblank(5); nes_write((0x0489 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB11:;
    /* $AB11: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AB13:;
    /* $AB13: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x048A + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB16:;
    /* $AB16: 9D */ maybe_trigger_vblank(5); nes_write((0x048A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB19:;
    /* $AB19: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB1C:;
    /* $AB1C: 9D */ maybe_trigger_vblank(5); nes_write((0x048B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB1F:;
    /* $AB1F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A786_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A786_b3");
#endif
label_A786:;
    /* $A786: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A787:;
    /* $A787: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x07); FLAG_NZ(g_cpu.A);
label_A789:;
    /* $A789: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A78A:;
    /* $A78A: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A78C:;
    /* $A78C: 85 */ maybe_trigger_vblank(3); nes_write(0x06, g_cpu.A);
label_A78E:;
    /* $A78E: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x879C, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A791:;
    /* $A791: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A793:;
    /* $A793: E6 */ maybe_trigger_vblank(5); { uint16_t a=0x04; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A795:;
    /* $A795: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x04); FLAG_NZ(g_cpu.Y);
label_A797:;
    /* $A797: C0 */ maybe_trigger_vblank(2); { int r=g_cpu.Y-0x04; g_cpu.C=(g_cpu.Y>=0x04)?1:0; FLAG_NZ(r&0xFF); }
label_A799:;
    /* $A799: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) { call_by_address_tail((uint16_t)(g_code_window_base | 0x077C), 3); return; }
label_A79B:;
    /* $A79B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A81B_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A81B_b3");
#endif
label_A81B:;
    /* $A81B: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A81E:;
    /* $A81E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A81F:;
    /* $A81F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A000_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A000_b3");
#endif
label_A000:;
    /* $A000: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8093, 3); return;
}

void func_BEF4_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_BEF4_b3");
#endif
label_BEF4:;
    /* $BEF4: 14 */ maybe_trigger_vblank(4); (void)nes_read((0x87 + g_cpu.X) & 0xFF); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_BEF6:;
    /* $BEF6: 39 */ maybe_trigger_vblank(4); g_cpu.A &= nes_read((0x1C1B + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BEF9:;
    /* $BEF9: 1D */ maybe_trigger_vblank(4); g_cpu.A |= nes_read((0x7582 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_BEFC:;
    /* $BEFC: 76 */ maybe_trigger_vblank(6); { uint16_t a=(0x77 + g_cpu.X) & 0xFF; uint8_t v=nes_read(a); uint8_t c=g_cpu.C; g_cpu.C=v&1; v=((v>>1)|(c<<7))&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_BEFE:;
    /* $BEFE: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xBEFE); return;
}

void func_A4AA_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4AA_b3");
#endif
label_A4AA:;
    /* $A4AA: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A4AB:;
    /* $A4AB: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_A4AD:;
    /* $A4AD: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A4B0:;
    /* $A4B0: 85 */ maybe_trigger_vblank(3); nes_write(0x34, g_cpu.A);
label_A4B2:;
    /* $A4B2: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A115_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A115_b3");
#endif
label_A115:;
    /* $A115: 7A */ maybe_trigger_vblank(2); /* NOP */
label_A116:;
    /* $A116: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) { call_by_address_tail((uint16_t)(g_code_window_base | 0x00A5), 3); return; }
label_A118:;
    /* $A118: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x04); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A11A:;
    /* $A11A: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x82C1, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A11D:;
    /* $A11D: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0502); FLAG_NZ(g_cpu.Y);
label_A120:;
    /* $A120: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A125;
label_A122:;
    /* $A122: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x822C, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A125:;
    /* $A125: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0427); FLAG_NZ(g_cpu.A);
label_A128:;
    /* $A128: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A12D;
label_A12A:;
    /* $A12A: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x89A1, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A12D:;
    /* $A12D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042C); FLAG_NZ(g_cpu.A);
label_A130:;
    /* $A130: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A135;
label_A132:;
    /* $A132: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8A0C, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A135:;
    /* $A135: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0436); FLAG_NZ(g_cpu.A);
label_A138:;
    /* $A138: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A13D;
label_A13A:;
    /* $A13A: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8C92, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A13D:;
    /* $A13D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0431); FLAG_NZ(g_cpu.A);
label_A140:;
    /* $A140: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A145;
label_A142:;
    /* $A142: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8A51, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A145:;
    /* $A145: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0538); FLAG_NZ(g_cpu.A);
label_A148:;
    /* $A148: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A14D;
label_A14A:;
    /* $A14A: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8EC6, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A14D:;
    /* $A14D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x053F); FLAG_NZ(g_cpu.A);
label_A150:;
    /* $A150: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A155;
label_A152:;
    /* $A152: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8F36, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A155:;
    /* $A155: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8B74, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A158:;
    /* $A158: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x046D); FLAG_NZ(g_cpu.Y);
label_A15B:;
    /* $A15B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A165;
label_A15D:;
    /* $A15D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_A15F:;
    /* $A15F: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8B9E, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A162:;
    /* $A162: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8676, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A165:;
    /* $A165: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0424); FLAG_NZ(g_cpu.A);
label_A168:;
    /* $A168: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8B9E, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A16B:;
    /* $A16B: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8339, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A16E:;
    /* $A16E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0422); FLAG_NZ(g_cpu.A);
label_A171:;
    /* $A171: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x23; g_cpu.C=(g_cpu.A>=0x23)?1:0; FLAG_NZ(r&0xFF); }
label_A173:;
    /* $A173: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A188;
label_A175:;
    /* $A175: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x17); FLAG_NZ(g_cpu.A);
label_A177:;
    /* $A177: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_A179:;
    /* $A179: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A18E;
label_A17B:;
    /* $A17B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_A17D:;
    /* $A17D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_A17F:;
    /* $A17F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A18E;
label_A181:;
    /* $A181: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A183:;
    /* $A183: 8D */ maybe_trigger_vblank(4); nes_write(0x06F6, g_cpu.A);
label_A186:;
    /* $A186: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_A193;
label_A188:;
    /* $A188: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_A18A:;
    /* $A18A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_A18C:;
    /* $A18C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A193;
label_A18E:;
    /* $A18E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0423); FLAG_NZ(g_cpu.A);
label_A191:;
    /* $A191: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A11A;
    }
label_A193:;
    /* $A193: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE0; FLAG_NZ(g_cpu.A);
label_A195:;
    /* $A195: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x88A2, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A198:;
    /* $A198: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0700; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A19B:;
    /* $A19B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_A19D:;
    /* $A19D: 8E */ maybe_trigger_vblank(4); nes_write(0x0701, g_cpu.X);
label_A1A0:;
    /* $A1A0: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A1A2:;
    /* $A1A2: 86 */ maybe_trigger_vblank(3); nes_write(0x20, g_cpu.X);
label_A1A4:;
    /* $A1A4: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x82C1, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A1A7:;
    /* $A1A7: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x81AD, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A1AA:;
    /* $A1AA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8BAB, 3); return;
}

void func_A65C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A65C_b3");
#endif
label_A65C:;
    /* $A65C: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A65D:;
    /* $A65D: E9 */ maybe_trigger_vblank(2); { uint8_t m=0x01; int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A65F:;
    /* $A65F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A660:;
    /* $A660: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A661:;
    /* $A661: 8D */ maybe_trigger_vblank(4); nes_write(0x047B, g_cpu.A);
label_A664:;
    /* $A664: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_A666:;
    /* $A666: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A667:;
    /* $A667: ED */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x047B); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A66A:;
    /* $A66A: 8D */ maybe_trigger_vblank(4); nes_write(0x047B, g_cpu.A);
label_A66D:;
    /* $A66D: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A66E:;
    /* $A66E: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A66F:;
    /* $A66F: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A670:;
    /* $A670: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A671:;
    /* $A671: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A672:;
    /* $A672: 8D */ maybe_trigger_vblank(4); nes_write(0x0474, g_cpu.A);
label_A675:;
    /* $A675: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A73D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A73D_b3");
#endif
label_A73D:;
    /* $A73D: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0xD0; FLAG_NZ(g_cpu.A);
label_A73F:;
    /* $A73F: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x86; FLAG_NZ(g_cpu.Y);
label_A741:;
    /* $A741: 21 */ maybe_trigger_vblank(6); g_cpu.A &= nes_read(nes_read16zp((0x60 + g_cpu.X) & 0xFF)); FLAG_NZ(g_cpu.A);
label_A743:;
    /* $A743: 8D */ maybe_trigger_vblank(4); nes_write(0x046D, g_cpu.A);
label_A746:;
    /* $A746: 86 */ maybe_trigger_vblank(3); nes_write(0x21, g_cpu.X);
label_A748:;
    /* $A748: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A7BF_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A7BF_b3");
#endif
label_A7BF:;
    /* $A7BF: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_A7C1:;
    /* $A7C1: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A7C2:;
    /* $A7C2: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A7C3:;
    /* $A7C3: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x02) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A7C5:;
    /* $A7C5: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A7C8:;
    /* $A7C8: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A7C9:;
    /* $A7C9: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A814_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A814_b3");
#endif
label_A814:;
    /* $A814: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_A818;
label_A816:;
    /* $A816: 09 */ maybe_trigger_vblank(2); g_cpu.A |= 0x08; FLAG_NZ(g_cpu.A);
label_A818:;
    /* $A818: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A819:;
    /* $A819: 65 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x07); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A81B:;
    /* $A81B: 9D */ maybe_trigger_vblank(5); nes_write((0x03A0 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A81E:;
    /* $A81E: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A81F:;
    /* $A81F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A9DC_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9DC_b3");
#endif
label_A9DC:;
    /* $A9DC: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) { call_by_address_tail((uint16_t)(g_code_window_base | 0x09AE), 3); return; }
label_A9DE:;
    /* $A9DE: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x2C); FLAG_NZ(g_cpu.A);
label_A9E0:;
    /* $A9E0: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_A9E1:;
    /* $A9E1: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x50); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9E3:;
    /* $A9E3: 04 */ maybe_trigger_vblank(3); (void)nes_read(0xE0); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9E5:;
    /* $A9E5: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
{ uint16_t _swb = g_code_window_base; g_code_window_base = 0xE000; func_E5D0(); g_code_window_base = _swb; }
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A9E8:;
    /* $A9E8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0427); FLAG_NZ(g_cpu.A);
label_A9EB:;
    /* $A9EB: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9EC:;
    /* $A9EC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_A9EE:;
    /* $A9EE: 8D */ maybe_trigger_vblank(4); nes_write(0x0427, g_cpu.A);
label_A9F1:;
    /* $A9F1: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x50; FLAG_NZ(g_cpu.A);
label_A9F3:;
    /* $A9F3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A9F8;
label_A9F5:;
    /* $A9F5: 8D */ maybe_trigger_vblank(4); nes_write(0x0427, g_cpu.A);
label_A9F8:;
    /* $A9F8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042A); FLAG_NZ(g_cpu.A);
label_A9FB:;
    /* $A9FB: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_A9FD:;
    /* $A9FD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AA09;
label_A9FF:;
    /* $A9FF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x38; FLAG_NZ(g_cpu.A);
label_AA01:;
    /* $AA01: 8D */ maybe_trigger_vblank(4); nes_write(0x0514, g_cpu.A);
label_AA04:;
    /* $AA04: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x27; FLAG_NZ(g_cpu.A);
label_AA06:;
    /* $AA06: 8D */ maybe_trigger_vblank(4); nes_write(0x0516, g_cpu.A);
label_AA09:;
    /* $AA09: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x88CC, 3); return;
}

void func_AA94_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_AA94_b3");
#endif
label_AA94:;
    /* $AA94: 9D */ maybe_trigger_vblank(5); nes_write((0x0482 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AA97:;
    /* $AA97: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0488 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AA9A:;
    /* $AA9A: 8D */ maybe_trigger_vblank(4); nes_write(0x047D, g_cpu.A);
label_AA9D:;
    /* $AA9D: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0483 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AAA0:;
    /* $AAA0: 9D */ maybe_trigger_vblank(5); nes_write((0x0483 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAA3:;
    /* $AAA3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AAA5:;
    /* $AAA5: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AAA6:;
    /* $AAA6: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x047D); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AAA9:;
    /* $AAA9: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AAAD;
label_AAAB:;
    /* $AAAB: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x01; FLAG_NZ(g_cpu.A);
label_AAAD:;
    /* $AAAD: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0484 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAB0:;
    /* $AAB0: 9D */ maybe_trigger_vblank(5); nes_write((0x0484 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAB3:;
    /* $AAB3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0485 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAB6:;
    /* $AAB6: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_AAB7:;
    /* $AAB7: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0489 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AABA:;
    /* $AABA: 9D */ maybe_trigger_vblank(5); nes_write((0x0485 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AABD:;
    /* $AABD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAC0:;
    /* $AAC0: 8D */ maybe_trigger_vblank(4); nes_write(0x047E, g_cpu.A);
label_AAC3:;
    /* $AAC3: 7D */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0486 + g_cpu.X) & 0xFFFF); uint16_t r=g_cpu.A+m+g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AAC6:;
    /* $AAC6: 9D */ maybe_trigger_vblank(5); nes_write((0x0486 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAC9:;
    /* $AAC9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AACB:;
    /* $AACB: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AACC:;
    /* $AACC: 2A */ maybe_trigger_vblank(2); { uint8_t c=g_cpu.C; g_cpu.C=(g_cpu.A>>7)&1; g_cpu.A=((g_cpu.A<<1)|c)&0xFF; FLAG_NZ(g_cpu.A); }
label_AACD:;
    /* $AACD: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x047E); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AAD0:;
    /* $AAD0: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_AAD4;
label_AAD2:;
    /* $AAD2: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x02; FLAG_NZ(g_cpu.A);
label_AAD4:;
    /* $AAD4: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0484 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAD7:;
    /* $AAD7: 9D */ maybe_trigger_vblank(5); nes_write((0x0484 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AADA:;
    /* $AADA: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x00); FLAG_NZ(g_cpu.Y);
label_AADC:;
    /* $AADC: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AADD:;
    /* $AADD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AAE0;
label_AADF:;
    /* $AADF: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AAE0:;
    /* $AAE0: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AAE1:;
    /* $AAE1: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AB20;
label_AAE3:;
    /* $AAE3: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAE6:;
    /* $AAE6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AAEC;
label_AAE8:;
    /* $AAE8: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x048B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AAEB:;
    /* $AAEB: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AAEC:;
    /* $AAEC: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AAEF:;
    /* $AAEF: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_AAF1:;
    /* $AAF1: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_AB04;
label_AAF3:;
    /* $AAF3: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AAF5:;
    /* $AAF5: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AAF6:;
    /* $AAF6: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0487 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AAF9:;
    /* $AAF9: 9D */ maybe_trigger_vblank(5); nes_write((0x0487 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AAFC:;
    /* $AAFC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AAFE:;
    /* $AAFE: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0488 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB01:;
    /* $AB01: 9D */ maybe_trigger_vblank(5); nes_write((0x0488 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB04:;
    /* $AB04: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_AB06:;
    /* $AB06: 70 */ maybe_trigger_vblank(2); if (g_cpu.V) goto label_AB19;
label_AB08:;
    /* $AB08: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AB0A:;
    /* $AB0A: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_AB0B:;
    /* $AB0B: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x0489 + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB0E:;
    /* $AB0E: 9D */ maybe_trigger_vblank(5); nes_write((0x0489 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB11:;
    /* $AB11: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AB13:;
    /* $AB13: FD */ maybe_trigger_vblank(4); { uint8_t m=nes_read((0x048A + g_cpu.X) & 0xFFFF); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_AB16:;
    /* $AB16: 9D */ maybe_trigger_vblank(5); nes_write((0x048A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB19:;
    /* $AB19: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048C + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB1C:;
    /* $AB1C: 9D */ maybe_trigger_vblank(5); nes_write((0x048B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB1F:;
    /* $AB1F: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AB20:;
    /* $AB20: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AB21:;
    /* $AB21: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AB5A;
label_AB23:;
    /* $AB23: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048B + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB26:;
    /* $AB26: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AB2C;
label_AB28:;
    /* $AB28: DE */ maybe_trigger_vblank(7); { uint16_t a=(0x048B + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB2B:;
    /* $AB2B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AB2C:;
    /* $AB2C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB2F:;
    /* $AB2F: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AB30:;
    /* $AB30: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AB31:;
    /* $AB31: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x909F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB34:;
    /* $AB34: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_AB36:;
    /* $AB36: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x90A0 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB39:;
    /* $AB39: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_AB3B:;
    /* $AB3B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB3E:;
    /* $AB3E: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_AB3F:;
    /* $AB3F: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_AB40:;
    /* $AB40: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB42:;
    /* $AB42: 9D */ maybe_trigger_vblank(5); nes_write((0x048B + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB45:;
    /* $AB45: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_AB46:;
    /* $AB46: B1 */ maybe_trigger_vblank(5); g_cpu.A = nes_read((nes_read16zp(0x00) + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB48:;
    /* $AB48: 9D */ maybe_trigger_vblank(5); nes_write((0x048D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB4B:;
    /* $AB4B: FE */ maybe_trigger_vblank(7); { uint16_t a=(0x048F + g_cpu.X) & 0xFFFF; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB4E:;
    /* $AB4E: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x048F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB51:;
    /* $AB51: 5D */ maybe_trigger_vblank(4); g_cpu.A ^= nes_read((0x0490 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_AB54:;
    /* $AB54: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AB59;
label_AB56:;
    /* $AB56: 9D */ maybe_trigger_vblank(5); nes_write((0x048F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB59:;
    /* $AB59: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AB5A:;
    /* $AB5A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x043E); FLAG_NZ(g_cpu.A);
label_AB5D:;
    /* $AB5D: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_AB68;
label_AB5F:;
    /* $AB5F: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_AB69;
label_AB61:;
    /* $AB61: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0437); FLAG_NZ(g_cpu.A);
label_AB64:;
    /* $AB64: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AB6C;
label_AB66:;
    /* $AB66: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_AB23;
    }
label_AB68:;
    /* $AB68: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_AB69:;
    /* $AB69: 0E */ maybe_trigger_vblank(6); { uint16_t a=0x043E; uint8_t v=nes_read(a); g_cpu.C=(v>>7)&1; v=(v<<1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_AB6C:;
    /* $AB6C: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_AB6E:;
    /* $AB6E: 9D */ maybe_trigger_vblank(5); nes_write((0x048F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_AB71:;
    /* $AB71: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8B2C, 3); return;
}

void func_A34C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A34C_b3");
#endif
label_A34C:;
    /* $A34C: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x8D); FLAG_NZ(g_cpu.A);
label_A34E:;
    /* $A34E: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x05); FLAG_NZ(g_cpu.A);
label_A350:;
    /* $A350: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A353:;
    /* $A353: 8D */ maybe_trigger_vblank(4); nes_write(0x0420, g_cpu.A);
label_A356:;
    /* $A356: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A359:;
    /* $A359: 8D */ maybe_trigger_vblank(4); nes_write(0x0421, g_cpu.A);
label_A35C:;
    /* $A35C: 2D */ maybe_trigger_vblank(4); g_cpu.A &= nes_read(0x0420); FLAG_NZ(g_cpu.A);
label_A35F:;
    /* $A35F: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_A361:;
    /* $A361: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A37A;
label_A363:;
    /* $A363: 8D */ maybe_trigger_vblank(4); nes_write(0x0423, g_cpu.A);
label_A366:;
    /* $A366: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0504); FLAG_NZ(g_cpu.A);
label_A369:;
    /* $A369: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A371;
label_A36B:;
    /* $A36B: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x82E7, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A36E:;
    /* $A36E: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x88CC, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A371:;
    /* $A371: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0505); FLAG_NZ(g_cpu.A);
label_A374:;
    /* $A374: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A379;
label_A376:;
    /* $A376: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8E68, 3); return;
label_A379:;
    /* $A379: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A37A:;
    /* $A37A: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A37D:;
    /* $A37D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xFF; g_cpu.C=(g_cpu.A>=0xFF)?1:0; FLAG_NZ(r&0xFF); }
label_A37F:;
    /* $A37F: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A366;
    }
label_A381:;
    /* $A381: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A383:;
    /* $A383: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x3F; FLAG_NZ(g_cpu.A);
label_A385:;
    /* $A385: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A386:;
    /* $A386: 24 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A388:;
    /* $A388: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) goto label_A38D;
label_A38A:;
    /* $A38A: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8565, 3); return;
label_A38D:;
    /* $A38D: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_A392;
label_A38F:;
    /* $A38F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x85E5, 3); return;
label_A392:;
    /* $A392: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x83; FLAG_NZ(g_cpu.A);
label_A394:;
    /* $A394: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A395:;
    /* $A395: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x79; FLAG_NZ(g_cpu.A);
label_A397:;
    /* $A397: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A398:;
    /* $A398: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A399:;
    /* $A399: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A39A:;
    /* $A39A: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A39B:;
    /* $A39B: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8FCA + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A39E:;
    /* $A39E: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A3A0:;
    /* $A3A0: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x8FCB + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A3A3:;
    /* $A3A3: 85 */ maybe_trigger_vblank(3); nes_write(0x01, g_cpu.A);
label_A3A5:;
    /* $A3A5: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x06; g_cpu.C=(g_cpu.X>=0x06)?1:0; FLAG_NZ(r&0xFF); }
label_A3A7:;
    /* $A3A7: 90 */ maybe_trigger_vblank(2); if (!g_cpu.C) goto label_A3AC;
label_A3A9:;
    /* $A3A9: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A3AC:;
    /* $A3AC: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A3AE:;
    /* $A3AE: 6C */ maybe_trigger_vblank(5); { uint16_t _jt = nes_read16zp(0x00); maybe_trigger_vblank(2); g_cpu.S = (uint8_t)(g_cpu.S + 2); call_by_address(_jt); } goto label_A37A;
}

void func_A3E5_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A3E5_b3");
#endif
label_A3E5:;
    /* $A3E5: 8D */ maybe_trigger_vblank(4); nes_write(0x0431, g_cpu.A);
label_A3E8:;
    /* $A3E8: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A3EA:;
    /* $A3EA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A3EB:;
    /* $A3EB: 8D */ maybe_trigger_vblank(4); nes_write(0x0435, g_cpu.A);
label_A3EE:;
    /* $A3EE: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_B3F2_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_B3F2_b3");
#endif
label_B3F2:;
    /* $B3F2: 94 */ maybe_trigger_vblank(4); nes_write((0x4D + g_cpu.X) & 0xFF, g_cpu.Y);
label_B3F4:;
    /* $B3F4: 94 */ maybe_trigger_vblank(4); nes_write((0x59 + g_cpu.X) & 0xFF, g_cpu.Y);
label_B3F6:;
    /* $B3F6: 94 */ maybe_trigger_vblank(4); nes_write((0x60 + g_cpu.X) & 0xFF, g_cpu.Y);
label_B3F8:;
    /* $B3F8: 94 */ maybe_trigger_vblank(4); nes_write((0x67 + g_cpu.X) & 0xFF, g_cpu.Y);
label_B3FA:;
    /* $B3FA: 94 */ maybe_trigger_vblank(4); nes_write((0x6E + g_cpu.X) & 0xFF, g_cpu.Y);
label_B3FC:;
    /* $B3FC: 94 */ maybe_trigger_vblank(4); nes_write((0x75 + g_cpu.X) & 0xFF, g_cpu.Y);
label_B3FE:;
    /* $B3FE: 94 */ maybe_trigger_vblank(4); nes_write((0x81 + g_cpu.X) & 0xFF, g_cpu.Y);
label_B400:;
    /* $B400: 94 */ maybe_trigger_vblank(4); nes_write((0x8D + g_cpu.X) & 0xFF, g_cpu.Y);
label_B402:;
    /* $B402: 94 */ maybe_trigger_vblank(4); nes_write((0x99 + g_cpu.X) & 0xFF, g_cpu.Y);
label_B404:;
    /* $B404: 94 */ maybe_trigger_vblank(4); nes_write((0xA0 + g_cpu.X) & 0xFF, g_cpu.Y);
label_B406:;
    /* $B406: 94 */ maybe_trigger_vblank(4); nes_write((0xAA + g_cpu.X) & 0xFF, g_cpu.Y);
label_B408:;
    /* $B408: 94 */ maybe_trigger_vblank(4); nes_write((0xB1 + g_cpu.X) & 0xFF, g_cpu.Y);
label_B40A:;
    /* $B40A: 94 */ maybe_trigger_vblank(4); nes_write((0xBD + g_cpu.X) & 0xFF, g_cpu.Y);
label_B40C:;
    /* $B40C: 94 */ maybe_trigger_vblank(4); nes_write((0xCE + g_cpu.X) & 0xFF, g_cpu.Y);
label_B40E:;
    /* $B40E: 94 */ maybe_trigger_vblank(4); nes_write((0x00 + g_cpu.X) & 0xFF, g_cpu.Y);
label_B410:;
    /* $B410: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xB410); return;
}

void func_A093_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A093_b3");
#endif
label_A093:;
    /* $A093: 78 */ maybe_trigger_vblank(2); g_cpu.I = 1;
label_A094:;
    /* $A094: D8 */ maybe_trigger_vblank(2); g_cpu.D = 0;
label_A095:;
    /* $A095: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A096:;
    /* $A096: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A098:;
    /* $A098: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A099:;
    /* $A099: 99 */ maybe_trigger_vblank(5); nes_write((0x0400 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A09C:;
    /* $A09C: 99 */ maybe_trigger_vblank(5); nes_write((0x0500 + g_cpu.Y) & 0xFFFF, g_cpu.A);
label_A09F:;
    /* $A09F: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A0A0:;
    /* $A0A0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A099;
    }
label_A0A2:;
    /* $A0A2: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x0F; FLAG_NZ(g_cpu.X);
label_A0A4:;
    /* $A0A4: 95 */ maybe_trigger_vblank(4); nes_write((0x00 + g_cpu.X) & 0xFF, g_cpu.A);
label_A0A6:;
    /* $A0A6: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0A7:;
    /* $A0A7: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A0A4;
    }
label_A0A9:;
    /* $A0A9: 85 */ maybe_trigger_vblank(3); nes_write(0x2F, g_cpu.A);
label_A0AB:;
    /* $A0AB: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_A0AD:;
    /* $A0AD: 85 */ maybe_trigger_vblank(3); nes_write(0x33, g_cpu.A);
label_A0AF:;
    /* $A0AF: 85 */ maybe_trigger_vblank(3); nes_write(0x34, g_cpu.A);
label_A0B1:;
    /* $A0B1: 8D */ maybe_trigger_vblank(4); nes_write(0xA000, g_cpu.A);
label_A0B4:;
    /* $A0B4: 85 */ maybe_trigger_vblank(3); nes_write(0x1E, g_cpu.A);
label_A0B6:;
    /* $A0B6: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x07; FLAG_NZ(g_cpu.Y);
label_A0B8:;
    /* $A0B8: 84 */ maybe_trigger_vblank(3); nes_write(0x29, g_cpu.Y);
label_A0BA:;
    /* $A0BA: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x08; FLAG_NZ(g_cpu.A);
label_A0BC:;
    /* $A0BC: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8B9E, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A0BF:;
    /* $A0BF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x3F; FLAG_NZ(g_cpu.A);
label_A0C1:;
    /* $A0C1: 8D */ maybe_trigger_vblank(4); nes_write(0x0511, g_cpu.A);
label_A0C4:;
    /* $A0C4: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x20; FLAG_NZ(g_cpu.A);
label_A0C6:;
    /* $A0C6: 8D */ maybe_trigger_vblank(4); nes_write(0x0510, g_cpu.A);
label_A0C9:;
    /* $A0C9: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0700; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A0CC:;
    /* $A0CC: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x01; FLAG_NZ(g_cpu.A);
label_A0CE:;
    /* $A0CE: 8D */ maybe_trigger_vblank(4); nes_write(0x0701, g_cpu.A);
label_A0D1:;
    /* $A0D1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x88; FLAG_NZ(g_cpu.A);
label_A0D3:;
    /* $A0D3: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_A0D5:;
    /* $A0D5: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_A0D7:;
    /* $A0D7: 9D */ maybe_trigger_vblank(5); nes_write((0x045F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A0DA:;
    /* $A0DA: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A0DB:;
    /* $A0DB: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A0D7;
    }
label_A0DD:;
    /* $A0DD: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x1E; FLAG_NZ(g_cpu.A);
label_A0DF:;
    /* $A0DF: 85 */ maybe_trigger_vblank(3); nes_write(0x1D, g_cpu.A);
label_A0E1:;
    /* $A0E1: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xFF; FLAG_NZ(g_cpu.A);
label_A0E3:;
    /* $A0E3: 8D */ maybe_trigger_vblank(4); nes_write(0x0442, g_cpu.A);
label_A0E6:;
    /* $A0E6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE0; FLAG_NZ(g_cpu.A);
label_A0E8:;
    /* $A0E8: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x88A2, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A0EB:;
    /* $A0EB: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x82C1, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A0EE:;
    /* $A0EE: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x81AD, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A0F1:;
    /* $A0F1: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x81EC, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A0F4:;
    /* $A0F4: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8BAB, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A0F7:;
    /* $A0F7: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A0F8:;
    /* $A0F8: 8D */ maybe_trigger_vblank(4); nes_write(0x0422, g_cpu.A);
label_A0FB:;
    /* $A0FB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A0FC:;
    /* $A0FC: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A0FD:;
    /* $A0FD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C09 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A100:;
    /* $A100: 85 */ maybe_trigger_vblank(3); nes_write(0x0A, g_cpu.A);
label_A102:;
    /* $A102: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C0A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A105:;
    /* $A105: 85 */ maybe_trigger_vblank(3); nes_write(0x0B, g_cpu.A);
label_A107:;
    /* $A107: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x99B6 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A10A:;
    /* $A10A: 85 */ maybe_trigger_vblank(3); nes_write(0x0C, g_cpu.A);
label_A10C:;
    /* $A10C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x99B7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A10F:;
    /* $A10F: 85 */ maybe_trigger_vblank(3); nes_write(0x0D, g_cpu.A);
label_A111:;
    /* $A111: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0422); FLAG_NZ(g_cpu.X);
label_A114:;
    /* $A114: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x907A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A117:;
    /* $A117: 8D */ maybe_trigger_vblank(4); nes_write(0x0424, g_cpu.A);
label_A11A:;
    /* $A11A: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x82C1, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A11D:;
    /* $A11D: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0502); FLAG_NZ(g_cpu.Y);
label_A120:;
    /* $A120: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A125;
label_A122:;
    /* $A122: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x822C, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A125:;
    /* $A125: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0427); FLAG_NZ(g_cpu.A);
label_A128:;
    /* $A128: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A12D;
label_A12A:;
    /* $A12A: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x89A1, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A12D:;
    /* $A12D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042C); FLAG_NZ(g_cpu.A);
label_A130:;
    /* $A130: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A135;
label_A132:;
    /* $A132: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8A0C, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A135:;
    /* $A135: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0436); FLAG_NZ(g_cpu.A);
label_A138:;
    /* $A138: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A13D;
label_A13A:;
    /* $A13A: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8C92, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A13D:;
    /* $A13D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0431); FLAG_NZ(g_cpu.A);
label_A140:;
    /* $A140: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A145;
label_A142:;
    /* $A142: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8A51, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A145:;
    /* $A145: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0538); FLAG_NZ(g_cpu.A);
label_A148:;
    /* $A148: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A14D;
label_A14A:;
    /* $A14A: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8EC6, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A14D:;
    /* $A14D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x053F); FLAG_NZ(g_cpu.A);
label_A150:;
    /* $A150: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A155;
label_A152:;
    /* $A152: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8F36, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A155:;
    /* $A155: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8B74, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A158:;
    /* $A158: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x046D); FLAG_NZ(g_cpu.Y);
label_A15B:;
    /* $A15B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A165;
label_A15D:;
    /* $A15D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_A15F:;
    /* $A15F: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8B9E, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A162:;
    /* $A162: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8676, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A165:;
    /* $A165: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0424); FLAG_NZ(g_cpu.A);
label_A168:;
    /* $A168: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8B9E, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A16B:;
    /* $A16B: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8339, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A16E:;
    /* $A16E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0422); FLAG_NZ(g_cpu.A);
label_A171:;
    /* $A171: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x23; g_cpu.C=(g_cpu.A>=0x23)?1:0; FLAG_NZ(r&0xFF); }
label_A173:;
    /* $A173: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A188;
label_A175:;
    /* $A175: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x17); FLAG_NZ(g_cpu.A);
label_A177:;
    /* $A177: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_A179:;
    /* $A179: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A18E;
label_A17B:;
    /* $A17B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_A17D:;
    /* $A17D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_A17F:;
    /* $A17F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A18E;
label_A181:;
    /* $A181: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A183:;
    /* $A183: 8D */ maybe_trigger_vblank(4); nes_write(0x06F6, g_cpu.A);
label_A186:;
    /* $A186: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_A193;
label_A188:;
    /* $A188: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_A18A:;
    /* $A18A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_A18C:;
    /* $A18C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A193;
label_A18E:;
    /* $A18E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0423); FLAG_NZ(g_cpu.A);
label_A191:;
    /* $A191: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A11A;
    }
label_A193:;
    /* $A193: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE0; FLAG_NZ(g_cpu.A);
label_A195:;
    /* $A195: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x88A2, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A198:;
    /* $A198: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0700; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A19B:;
    /* $A19B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_A19D:;
    /* $A19D: 8E */ maybe_trigger_vblank(4); nes_write(0x0701, g_cpu.X);
label_A1A0:;
    /* $A1A0: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A1A2:;
    /* $A1A2: 86 */ maybe_trigger_vblank(3); nes_write(0x20, g_cpu.X);
label_A1A4:;
    /* $A1A4: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x82C1, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A1A7:;
    /* $A1A7: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x81AD, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A1AA:;
    /* $A1AA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8BAB, 3); return;
}

void func_A0A5_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0A5_b3");
#endif
label_A0A5:;
    /* $A0A5: 00 */ maybe_trigger_vblank(7); nes_brk_executed(0xA0A5); return;
}

void func_A9AE_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A9AE_b3");
#endif
label_A9AE:;
    /* $A9AE: 28 */ maybe_trigger_vblank(4); { g_cpu.S++; uint8_t p = g_ram[0x100 + g_cpu.S];
  g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1;
  g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
label_A9AF:;
    /* $A9AF: 04 */ maybe_trigger_vblank(3); (void)nes_read(0x20); /* NOP* (unofficial DOP/TOP read, result discarded) */
label_A9B1:;
    /* $A9B1: E7 */ maybe_trigger_vblank(5); { uint16_t a=0x82; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); int16_t r=g_cpu.A-v-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,v); g_cpu.A=r&0xFF; }
label_A9B3:;
    /* $A9B3: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0427); FLAG_NZ(g_cpu.A);
label_A9B6:;
    /* $A9B6: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A9B8:;
    /* $A9B8: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A9BA:;
    /* $A9BA: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042A); FLAG_NZ(g_cpu.A);
label_A9BD:;
    /* $A9BD: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_A9C1;
label_A9BF:;
    /* $A9BF: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x10; FLAG_NZ(g_cpu.X);
label_A9C1:;
    /* $A9C1: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042B); FLAG_NZ(g_cpu.A);
label_A9C4:;
    /* $A9C4: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A9CD;
label_A9C6:;
    /* $A9C6: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x40; FLAG_NZ(g_cpu.A);
label_A9C8:;
    /* $A9C8: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A9C9:;
    /* $A9C9: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9CB:;
    /* $A9CB: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A9CD:;
    /* $A9CD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0513 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A9D0:;
    /* $A9D0: 38 */ maybe_trigger_vblank(2); g_cpu.C = 1;
label_A9D1:;
    /* $A9D1: E5 */ maybe_trigger_vblank(3); { uint8_t m=nes_read(0x00); int16_t r=g_cpu.A-m-(1-g_cpu.C); FLAG_NZC_SUB(r,g_cpu.A,m); g_cpu.A=r&0xFF; }
label_A9D3:;
    /* $A9D3: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) goto label_A9D7;
label_A9D5:;
    /* $A9D5: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x0F; FLAG_NZ(g_cpu.A);
label_A9D7:;
    /* $A9D7: 9D */ maybe_trigger_vblank(5); nes_write((0x0513 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A9DA:;
    /* $A9DA: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A9DB:;
    /* $A9DB: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x10; g_cpu.C=(g_cpu.X>=0x10)?1:0; FLAG_NZ(r&0xFF); }
label_A9DD:;
    /* $A9DD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A9E4;
label_A9DF:;
    /* $A9DF: 2C */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x042A); g_cpu.Z=(g_cpu.A&m)?0:1; g_cpu.N=(m>>7)&1; g_cpu.V=(m>>6)&1; }
label_A9E2:;
    /* $A9E2: 50 */ maybe_trigger_vblank(2); if (!g_cpu.V) goto label_A9E8;
label_A9E4:;
    /* $A9E4: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x20; g_cpu.C=(g_cpu.X>=0x20)?1:0; FLAG_NZ(r&0xFF); }
label_A9E6:;
    /* $A9E6: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A9CD;
    }
label_A9E8:;
    /* $A9E8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0427); FLAG_NZ(g_cpu.A);
label_A9EB:;
    /* $A9EB: 18 */ maybe_trigger_vblank(2); g_cpu.C = 0;
label_A9EC:;
    /* $A9EC: 69 */ maybe_trigger_vblank(2); { uint16_t r = g_cpu.A + 0x10 + g_cpu.C; FLAG_NZC_ADD(r,g_cpu.A,0x10); g_cpu.A=r&0xFF; }
label_A9EE:;
    /* $A9EE: 8D */ maybe_trigger_vblank(4); nes_write(0x0427, g_cpu.A);
label_A9F1:;
    /* $A9F1: 49 */ maybe_trigger_vblank(2); g_cpu.A ^= 0x50; FLAG_NZ(g_cpu.A);
label_A9F3:;
    /* $A9F3: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A9F8;
label_A9F5:;
    /* $A9F5: 8D */ maybe_trigger_vblank(4); nes_write(0x0427, g_cpu.A);
label_A9F8:;
    /* $A9F8: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042A); FLAG_NZ(g_cpu.A);
label_A9FB:;
    /* $A9FB: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_A9FD:;
    /* $A9FD: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_AA09;
label_A9FF:;
    /* $A9FF: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x38; FLAG_NZ(g_cpu.A);
label_AA01:;
    /* $AA01: 8D */ maybe_trigger_vblank(4); nes_write(0x0514, g_cpu.A);
label_AA04:;
    /* $AA04: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x27; FLAG_NZ(g_cpu.A);
label_AA06:;
    /* $AA06: 8D */ maybe_trigger_vblank(4); nes_write(0x0516, g_cpu.A);
label_AA09:;
    /* $AA09: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x88CC, 3); return;
}

void func_A003_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A003_b3");
#endif
label_A003:;
    /* $A003: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8F7D, 3); return;
}

void func_A006_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A006_b3");
#endif
label_A006:;
    /* $A006: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A007:;
    /* $A007: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A008:;
    /* $A008: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A009:;
    /* $A009: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A00A:;
    /* $A00A: 48 */ maybe_trigger_vblank(3); g_ram[0x100 + g_cpu.S] = g_cpu.A; g_cpu.S--;
label_A00B:;
    /* $A00B: 8D */ maybe_trigger_vblank(4); nes_write(0xE000, g_cpu.A);
label_A00E:;
    /* $A00E: 8D */ maybe_trigger_vblank(4); nes_write(0xE001, g_cpu.A);
label_A011:;
    /* $A011: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0452); FLAG_NZ(g_cpu.A);
label_A014:;
    /* $A014: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A01C;
label_A016:;
    /* $A016: 8D */ maybe_trigger_vblank(4); nes_write(0xE000, g_cpu.A);
label_A019:;
    /* $A019: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x801F, 3); return;
label_A01C:;
    /* $A01C: 8D */ maybe_trigger_vblank(4); nes_write(0xC000, g_cpu.A);
label_A01F:;
    /* $A01F: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0444); FLAG_NZ(g_cpu.X);
label_A022:;
    /* $A022: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0463 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A025:;
    /* $A025: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A026:;
    /* $A026: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x03; FLAG_NZ(g_cpu.Y);
label_A028:;
    /* $A028: 88 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y-1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A029:;
    /* $A029: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A028;
    }
label_A02B:;
    /* $A02B: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A02C:;
    /* $A02C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A03A;
label_A02E:;
    /* $A02E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9983 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A031:;
    /* $A031: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_A034:;
    /* $A034: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9982 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A037:;
    /* $A037: 8D */ maybe_trigger_vblank(4); nes_write(0x2006, g_cpu.A);
label_A03A:;
    /* $A03A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x045F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A03D:;
    /* $A03D: 8D */ maybe_trigger_vblank(4); nes_write(0x2000, g_cpu.A);
label_A040:;
    /* $A040: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x0449 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A043:;
    /* $A043: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_A046:;
    /* $A046: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A048:;
    /* $A048: 8D */ maybe_trigger_vblank(4); nes_write(0x2005, g_cpu.A);
label_A04B:;
    /* $A04B: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0442); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A04E:;
    /* $A04E: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A057;
label_A050:;
    /* $A050: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1D); FLAG_NZ(g_cpu.A);
label_A052:;
    /* $A052: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xEF; FLAG_NZ(g_cpu.A);
label_A054:;
    /* $A054: 8D */ maybe_trigger_vblank(4); nes_write(0x2001, g_cpu.A);
label_A057:;
    /* $A057: EC */ maybe_trigger_vblank(4); { uint8_t m=nes_read(0x0443); int r=g_cpu.X-m; g_cpu.C=(g_cpu.X>=m)?1:0; FLAG_NZ(r&0xFF); }
label_A05A:;
    /* $A05A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A071;
label_A05C:;
    /* $A05C: A0 */ maybe_trigger_vblank(2); g_cpu.Y = 0x00; FLAG_NZ(g_cpu.Y);
label_A05E:;
    /* $A05E: 8C */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.Y);
label_A061:;
    /* $A061: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0536); FLAG_NZ(g_cpu.A);
label_A064:;
    /* $A064: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_A067:;
    /* $A067: C8 */ maybe_trigger_vblank(2); g_cpu.Y = (g_cpu.Y+1)&0xFF; FLAG_NZ(g_cpu.Y);
label_A068:;
    /* $A068: 8C */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.Y);
label_A06B:;
    /* $A06B: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0537); FLAG_NZ(g_cpu.A);
label_A06E:;
    /* $A06E: 8D */ maybe_trigger_vblank(4); nes_write(0x8001, g_cpu.A);
label_A071:;
    /* $A071: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0452); FLAG_NZ(g_cpu.A);
label_A074:;
    /* $A074: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A085;
label_A076:;
    /* $A076: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0444; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A079:;
    /* $A079: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0444); FLAG_NZ(g_cpu.X);
label_A07C:;
    /* $A07C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x044E + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A07F:;
    /* $A07F: 8D */ maybe_trigger_vblank(4); nes_write(0x0452, g_cpu.A);
label_A082:;
    /* $A082: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8088, 3); return;
label_A085:;
    /* $A085: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0441; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A088:;
    /* $A088: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x36); FLAG_NZ(g_cpu.A);
label_A08A:;
    /* $A08A: 8D */ maybe_trigger_vblank(4); nes_write(0x8000, g_cpu.A);
label_A08D:;
    /* $A08D: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A08E:;
    /* $A08E: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A08F:;
    /* $A08F: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A090:;
    /* $A090: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A091:;
    /* $A091: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A092:;
    /* $A092: 40 */ maybe_trigger_vblank(6); /* RTI */ g_cpu.S++; { uint8_t p=g_ram[0x100+g_cpu.S]; g_cpu.N=(p>>7)&1; g_cpu.V=(p>>6)&1; g_cpu.D=(p>>3)&1; g_cpu.I=(p>>2)&1; g_cpu.Z=(p>>1)&1; g_cpu.C=p&1; }
    g_cpu.S++; { uint8_t _rti_lo = g_ram[0x100+g_cpu.S];
    g_cpu.S++; uint8_t _rti_hi = g_ram[0x100+g_cpu.S];
    g_rti_target = (_rti_hi << 8) | _rti_lo; }
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_A0F4_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A191;
        case 2: goto label_A11A;
        case 3: goto label_A0F7;
        case 4: goto label_A111;
        case 5: goto label_A193;
    }
label_A0F4:;
    /* $A0F4: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8BAB, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A0F7:;
    /* $A0F7: 68 */ maybe_trigger_vblank(4); g_cpu.S++; g_cpu.A = g_ram[0x100 + g_cpu.S]; FLAG_NZ(g_cpu.A);
label_A0F8:;
    /* $A0F8: 8D */ maybe_trigger_vblank(4); nes_write(0x0422, g_cpu.A);
label_A0FB:;
    /* $A0FB: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A0FC:;
    /* $A0FC: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A0FD:;
    /* $A0FD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C09 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A100:;
    /* $A100: 85 */ maybe_trigger_vblank(3); nes_write(0x0A, g_cpu.A);
label_A102:;
    /* $A102: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9C0A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A105:;
    /* $A105: 85 */ maybe_trigger_vblank(3); nes_write(0x0B, g_cpu.A);
label_A107:;
    /* $A107: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x99B6 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A10A:;
    /* $A10A: 85 */ maybe_trigger_vblank(3); nes_write(0x0C, g_cpu.A);
label_A10C:;
    /* $A10C: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x99B7 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A10F:;
    /* $A10F: 85 */ maybe_trigger_vblank(3); nes_write(0x0D, g_cpu.A);
label_A111:;
    /* $A111: AE */ maybe_trigger_vblank(4); g_cpu.X = nes_read(0x0422); FLAG_NZ(g_cpu.X);
label_A114:;
    /* $A114: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x907A + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A117:;
    /* $A117: 8D */ maybe_trigger_vblank(4); nes_write(0x0424, g_cpu.A);
label_A11A:;
    /* $A11A: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x82C1, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A11D:;
    /* $A11D: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0502); FLAG_NZ(g_cpu.Y);
label_A120:;
    /* $A120: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A125;
label_A122:;
    /* $A122: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x822C, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A125:;
    /* $A125: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0427); FLAG_NZ(g_cpu.A);
label_A128:;
    /* $A128: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A12D;
label_A12A:;
    /* $A12A: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x89A1, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A12D:;
    /* $A12D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x042C); FLAG_NZ(g_cpu.A);
label_A130:;
    /* $A130: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A135;
label_A132:;
    /* $A132: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8A0C, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A135:;
    /* $A135: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0436); FLAG_NZ(g_cpu.A);
label_A138:;
    /* $A138: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A13D;
label_A13A:;
    /* $A13A: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8C92, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A13D:;
    /* $A13D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0431); FLAG_NZ(g_cpu.A);
label_A140:;
    /* $A140: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A145;
label_A142:;
    /* $A142: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8A51, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A145:;
    /* $A145: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0538); FLAG_NZ(g_cpu.A);
label_A148:;
    /* $A148: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A14D;
label_A14A:;
    /* $A14A: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8EC6, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A14D:;
    /* $A14D: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x053F); FLAG_NZ(g_cpu.A);
label_A150:;
    /* $A150: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A155;
label_A152:;
    /* $A152: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8F36, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A155:;
    /* $A155: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8B74, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A158:;
    /* $A158: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x046D); FLAG_NZ(g_cpu.Y);
label_A15B:;
    /* $A15B: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A165;
label_A15D:;
    /* $A15D: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x09; FLAG_NZ(g_cpu.A);
label_A15F:;
    /* $A15F: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8B9E, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A162:;
    /* $A162: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8676, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A165:;
    /* $A165: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0424); FLAG_NZ(g_cpu.A);
label_A168:;
    /* $A168: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8B9E, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A16B:;
    /* $A16B: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8339, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A16E:;
    /* $A16E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0422); FLAG_NZ(g_cpu.A);
label_A171:;
    /* $A171: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x23; g_cpu.C=(g_cpu.A>=0x23)?1:0; FLAG_NZ(r&0xFF); }
label_A173:;
    /* $A173: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A188;
label_A175:;
    /* $A175: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x17); FLAG_NZ(g_cpu.A);
label_A177:;
    /* $A177: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0x80; g_cpu.C=(g_cpu.A>=0x80)?1:0; FLAG_NZ(r&0xFF); }
label_A179:;
    /* $A179: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A18E;
label_A17B:;
    /* $A17B: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x16); FLAG_NZ(g_cpu.A);
label_A17D:;
    /* $A17D: C9 */ maybe_trigger_vblank(2); { int r=g_cpu.A-0xF0; g_cpu.C=(g_cpu.A>=0xF0)?1:0; FLAG_NZ(r&0xFF); }
label_A17F:;
    /* $A17F: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A18E;
label_A181:;
    /* $A181: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x80; FLAG_NZ(g_cpu.A);
label_A183:;
    /* $A183: 8D */ maybe_trigger_vblank(4); nes_write(0x06F6, g_cpu.A);
label_A186:;
    /* $A186: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_A193;
label_A188:;
    /* $A188: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1A); FLAG_NZ(g_cpu.A);
label_A18A:;
    /* $A18A: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x20; FLAG_NZ(g_cpu.A);
label_A18C:;
    /* $A18C: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) goto label_A193;
label_A18E:;
    /* $A18E: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0423); FLAG_NZ(g_cpu.A);
label_A191:;
    /* $A191: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A11A;
    }
label_A193:;
    /* $A193: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xE0; FLAG_NZ(g_cpu.A);
label_A195:;
    /* $A195: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x88A2, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A198:;
    /* $A198: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0700; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A19B:;
    /* $A19B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x01; FLAG_NZ(g_cpu.X);
label_A19D:;
    /* $A19D: 8E */ maybe_trigger_vblank(4); nes_write(0x0701, g_cpu.X);
label_A1A0:;
    /* $A1A0: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A1A2:;
    /* $A1A2: 86 */ maybe_trigger_vblank(3); nes_write(0x20, g_cpu.X);
label_A1A4:;
    /* $A1A4: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x82C1, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A1A7:;
    /* $A1A7: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x81AD, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A1AA:;
    /* $A1AA: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x8BAB, 3); return;
}

void func_A0F4_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0F4_b3");
#endif
    func_A0F4_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A191_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A191_b3");
#endif
    func_A0F4_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A11A_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A11A_b3");
#endif
    func_A0F4_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A0F7_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A0F7_b3");
#endif
    func_A0F4_b3_body(3);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A111_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A111_b3");
#endif
    func_A0F4_b3_body(4);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A193_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A193_b3");
#endif
    func_A0F4_b3_body(5);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A3B1_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A3B1_b3");
#endif
label_A3B1:;
    /* $A3B1: 8E */ maybe_trigger_vblank(4); nes_write(0x043C, g_cpu.X);
label_A3B4:;
    /* $A3B4: 8E */ maybe_trigger_vblank(4); nes_write(0x0437, g_cpu.X);
label_A3B7:;
    /* $A3B7: 8E */ maybe_trigger_vblank(4); nes_write(0x043D, g_cpu.X);
label_A3BA:;
    /* $A3BA: 8E */ maybe_trigger_vblank(4); nes_write(0x0438, g_cpu.X);
label_A3BD:;
    /* $A3BD: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8E59, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A3C0:;
    /* $A3C0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x06; FLAG_NZ(g_cpu.A);
label_A3C2:;
    /* $A3C2: 8D */ maybe_trigger_vblank(4); nes_write(0x0439, g_cpu.A);
label_A3C5:;
    /* $A3C5: 8D */ maybe_trigger_vblank(4); nes_write(0x0436, g_cpu.A);
label_A3C8:;
    /* $A3C8: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A3C9_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A3C9_b3");
#endif
label_A3C9:;
    /* $A3C9: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A3CA:;
    /* $A3CA: 9D */ maybe_trigger_vblank(5); nes_write((0x0431 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A3CD:;
    /* $A3CD: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A3CE:;
    /* $A3CE: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x05; g_cpu.C=(g_cpu.X>=0x05)?1:0; FLAG_NZ(r&0xFF); }
label_A3D0:;
    /* $A3D0: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A3CA;
    }
label_A3D2:;
    /* $A3D2: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_A3D4:;
    /* $A3D4: 85 */ maybe_trigger_vblank(3); nes_write(0x34, g_cpu.A);
label_A3D6:;
    /* $A3D6: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A3D7_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A3D7_b3");
#endif
label_A3D7:;
    /* $A3D7: 8E */ maybe_trigger_vblank(4); nes_write(0x0504, g_cpu.X);
label_A3DA:;
    /* $A3DA: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8820, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A3DD:;
    /* $A3DD: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8BAB, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A3E0:;
    /* $A3E0: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0xC0; FLAG_NZ(g_cpu.A);
label_A3E2:;
    /* $A3E2: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x88A2, 3); return;
}

void func_A3EF_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A3EF_b3");
#endif
label_A3EF:;
    /* $A3EF: A4 */ maybe_trigger_vblank(3); g_cpu.Y = nes_read(0x20); FLAG_NZ(g_cpu.Y);
label_A3F1:;
    /* $A3F1: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A3F8;
label_A3F3:;
    /* $A3F3: AC */ maybe_trigger_vblank(4); g_cpu.Y = nes_read(0x0441); FLAG_NZ(g_cpu.Y);
label_A3F6:;
    /* $A3F6: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A3F3;
    }
label_A3F8:;
    /* $A3F8: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A3F9:;
    /* $A3F9: 86 */ maybe_trigger_vblank(3); nes_write(0x20, g_cpu.X);
label_A3FB:;
    /* $A3FB: 8E */ maybe_trigger_vblank(4); nes_write(0x0443, g_cpu.X);
label_A3FE:;
    /* $A3FE: 8E */ maybe_trigger_vblank(4); nes_write(0x0502, g_cpu.X);
label_A401:;
    /* $A401: 8E */ maybe_trigger_vblank(4); nes_write(0x0452, g_cpu.X);
label_A404:;
    /* $A404: 86 */ maybe_trigger_vblank(3); nes_write(0x2F, g_cpu.X);
label_A406:;
    /* $A406: 86 */ maybe_trigger_vblank(3); nes_write(0x33, g_cpu.X);
label_A408:;
    /* $A408: 8A */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.X; FLAG_NZ(g_cpu.A);
label_A409:;
    /* $A409: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_A40B:;
    /* $A40B: 9D */ maybe_trigger_vblank(5); nes_write((0x0463 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A40E:;
    /* $A40E: 9D */ maybe_trigger_vblank(5); nes_write((0x0445 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A411:;
    /* $A411: 9D */ maybe_trigger_vblank(5); nes_write((0x044D + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A414:;
    /* $A414: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A415:;
    /* $A415: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A40B;
    }
label_A417:;
    /* $A417: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A418:;
    /* $A418: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A41D;
label_A41A:;
    /* $A41A: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x88DF, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A41D:;
    /* $A41D: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

static void func_A972_b3_body(int _entry) {
    switch (_entry) {
        case 1: goto label_A991;
        case 2: goto label_A994;
    }
label_A972:;
    /* $A972: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A973:;
    /* $A973: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_A995;
label_A975:;
    /* $A975: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_A984;
label_A977:;
    /* $A977: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A97A:;
    /* $A97A: 8D */ maybe_trigger_vblank(4); nes_write(0x0469, g_cpu.A);
label_A97D:;
    /* $A97D: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A980:;
    /* $A980: 8D */ maybe_trigger_vblank(4); nes_write(0x046A, g_cpu.A);
label_A983:;
    /* $A983: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A984:;
    /* $A984: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A985:;
    /* $A985: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A987:;
    /* $A987: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A988:;
    /* $A988: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A98B:;
    /* $A98B: 9D */ maybe_trigger_vblank(5); nes_write((0x0453 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A98E:;
    /* $A98E: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A991:;
    /* $A991: 9D */ maybe_trigger_vblank(5); nes_write((0x0457 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A994:;
    /* $A994: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A995:;
    /* $A995: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x03; FLAG_NZ(g_cpu.X);
label_A997:;
    /* $A997: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A99A:;
    /* $A99A: 9D */ maybe_trigger_vblank(5); nes_write((0x0469 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A99D:;
    /* $A99D: CA */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X-1)&0xFF; FLAG_NZ(g_cpu.X);
label_A99E:;
    /* $A99E: 10 */ maybe_trigger_vblank(2); if (!g_cpu.N) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A997;
    }
label_A9A0:;
    /* $A9A0: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A972_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A972_b3");
#endif
    func_A972_b3_body(0);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A991_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A991_b3");
#endif
    func_A972_b3_body(1);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A994_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A994_b3");
#endif
    func_A972_b3_body(2);
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
}

void func_A41E_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A41E_b3");
#endif
label_A41E:;
    /* $A41E: 8E */ maybe_trigger_vblank(4); nes_write(0x0504, g_cpu.X);
label_A421:;
    /* $A421: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x887B, 3); return;
}

void func_A424_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A424_b3");
#endif
label_A424:;
    /* $A424: 8D */ maybe_trigger_vblank(4); nes_write(0x0501, g_cpu.A);
label_A427:;
    /* $A427: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A428:;
    /* $A428: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A429:;
    /* $A429: 8D */ maybe_trigger_vblank(4); nes_write(0xA000, g_cpu.A);
label_A42C:;
    /* $A42C: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A42D_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A42D_b3");
#endif
label_A42D:;
    /* $A42D: 8D */ maybe_trigger_vblank(4); nes_write(0x0533, g_cpu.A);
label_A430:;
    /* $A430: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A433:;
    /* $A433: 8D */ maybe_trigger_vblank(4); nes_write(0x0535, g_cpu.A);
label_A436:;
    /* $A436: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0505; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A439:;
    /* $A439: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A43A_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A43A_b3");
#endif
label_A43A:;
    /* $A43A: 8D */ maybe_trigger_vblank(4); nes_write(0x0507, g_cpu.A);
label_A43D:;
    /* $A43D: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0504; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A440:;
    /* $A440: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A441_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A441_b3");
#endif
label_A441:;
    /* $A441: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A442:;
    /* $A442: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A444:;
    /* $A444: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A446:;
    /* $A446: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x04; FLAG_NZ(g_cpu.X);
label_A448:;
    /* $A448: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A449:;
    /* $A449: 30 */ maybe_trigger_vblank(2); if (g_cpu.N) goto label_A44D;
label_A44B:;
    /* $A44B: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A44D:;
    /* $A44D: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A450:;
    /* $A450: 9D */ maybe_trigger_vblank(5); nes_write((0x0508 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A453:;
    /* $A453: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A454:;
    /* $A454: C6 */ maybe_trigger_vblank(5); { uint16_t a=0x00; uint8_t v=(nes_read(a)-1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A456:;
    /* $A456: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A44D;
    }
label_A458:;
    /* $A458: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0504; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A45B:;
    /* $A45B: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A45C_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A45C_b3");
#endif
label_A45C:;
    /* $A45C: 8E */ maybe_trigger_vblank(4); nes_write(0x0504, g_cpu.X);
label_A45F:;
    /* $A45F: 4C */ maybe_trigger_vblank(3); maybe_trigger_vblank(2); call_by_address_tail(0x88A2, 3); return;
}

void func_A462_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A462_b3");
#endif
label_A462:;
    /* $A462: 8E */ maybe_trigger_vblank(4); nes_write(0x042E, g_cpu.X);
label_A465:;
    /* $A465: 8E */ maybe_trigger_vblank(4); nes_write(0x042F, g_cpu.X);
label_A468:;
    /* $A468: 8D */ maybe_trigger_vblank(4); nes_write(0x042C, g_cpu.A);
label_A46B:;
    /* $A46B: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A46C:;
    /* $A46C: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A474;
label_A46E:;
    /* $A46E: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A471:;
    /* $A471: 8D */ maybe_trigger_vblank(4); nes_write(0x042D, g_cpu.A);
label_A474:;
    /* $A474: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A475_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A475_b3");
#endif
label_A475:;
    /* $A475: 8E */ maybe_trigger_vblank(4); nes_write(0x0539, g_cpu.X);
label_A478:;
    /* $A478: 8E */ maybe_trigger_vblank(4); nes_write(0x053A, g_cpu.X);
label_A47B:;
    /* $A47B: 8E */ maybe_trigger_vblank(4); nes_write(0x053D, g_cpu.X);
label_A47E:;
    /* $A47E: 8D */ maybe_trigger_vblank(4); nes_write(0x0538, g_cpu.A);
label_A481:;
    /* $A481: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A482:;
    /* $A482: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A49A;
label_A484:;
    /* $A484: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x7F; FLAG_NZ(g_cpu.A);
label_A486:;
    /* $A486: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A487:;
    /* $A487: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A488:;
    /* $A488: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A489:;
    /* $A489: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A48A:;
    /* $A48A: 8D */ maybe_trigger_vblank(4); nes_write(0x053E, g_cpu.A);
label_A48D:;
    /* $A48D: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A48E:;
    /* $A48E: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A490:;
    /* $A490: 8D */ maybe_trigger_vblank(4); nes_write(0x053B, g_cpu.A);
label_A493:;
    /* $A493: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A496:;
    /* $A496: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A497:;
    /* $A497: 8D */ maybe_trigger_vblank(4); nes_write(0x053C, g_cpu.A);
label_A49A:;
    /* $A49A: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A49B_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A49B_b3");
#endif
label_A49B:;
    /* $A49B: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A49D:;
    /* $A49D: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A49E:;
    /* $A49E: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_A4B3;
label_A4A0:;
    /* $A4A0: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x1C); FLAG_NZ(g_cpu.A);
label_A4A2:;
    /* $A4A2: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_A4A4:;
    /* $A4A4: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A4A6:;
    /* $A4A6: 85 */ maybe_trigger_vblank(3); nes_write(0x1C, g_cpu.A);
label_A4A8:;
    /* $A4A8: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A4AB:;
    /* $A4AB: 85 */ maybe_trigger_vblank(3); nes_write(0x30, g_cpu.A);
label_A4AD:;
    /* $A4AD: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A4B0:;
    /* $A4B0: 85 */ maybe_trigger_vblank(3); nes_write(0x34, g_cpu.A);
label_A4B2:;
    /* $A4B2: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A4B3:;
    /* $A4B3: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A4B4:;
    /* $A4B4: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A4B5:;
    /* $A4B5: 4A */ maybe_trigger_vblank(2); g_cpu.C = g_cpu.A&1; g_cpu.A >>= 1; FLAG_NZ(g_cpu.A);
label_A4B6:;
    /* $A4B6: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A4B7:;
    /* $A4B7: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A4B9:;
    /* $A4B9: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x03; FLAG_NZ(g_cpu.A);
label_A4BB:;
    /* $A4BB: 85 */ maybe_trigger_vblank(3); nes_write(0x00, g_cpu.A);
label_A4BD:;
    /* $A4BD: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x045F + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A4C0:;
    /* $A4C0: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xFC; FLAG_NZ(g_cpu.A);
label_A4C2:;
    /* $A4C2: 05 */ maybe_trigger_vblank(3); g_cpu.A |= nes_read(0x00); FLAG_NZ(g_cpu.A);
label_A4C4:;
    /* $A4C4: 9D */ maybe_trigger_vblank(5); nes_write((0x045F + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A4C7:;
    /* $A4C7: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A4CA:;
    /* $A4CA: 9D */ maybe_trigger_vblank(5); nes_write((0x0449 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A4CD:;
    /* $A4CD: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A4CE_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4CE_b3");
#endif
label_A4CE:;
    /* $A4CE: 8D */ maybe_trigger_vblank(4); nes_write(0x0442, g_cpu.A);
label_A4D1:;
    /* $A4D1: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A4D2_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4D2_b3");
#endif
label_A4D2:;
    /* $A4D2: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A4D3:;
    /* $A4D3: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0xF0; FLAG_NZ(g_cpu.A);
label_A4D5:;
    /* $A4D5: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A4D6:;
    /* $A4D6: 98 */ maybe_trigger_vblank(2); g_cpu.A = g_cpu.Y; FLAG_NZ(g_cpu.A);
label_A4D7:;
    /* $A4D7: 29 */ maybe_trigger_vblank(2); g_cpu.A &= 0x0F; FLAG_NZ(g_cpu.A);
label_A4D9:;
    /* $A4D9: 9D */ maybe_trigger_vblank(5); nes_write((0x0481 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A4DC:;
    /* $A4DC: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A4DD:;
    /* $A4DD: F0 */ maybe_trigger_vblank(2); if (g_cpu.Z) goto label_A4E2;
label_A4DF:;
    /* $A4DF: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x882B, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A4E2:;
    /* $A4E2: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A4E3_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4E3_b3");
#endif
label_A4E3:;
    /* $A4E3: 8D */ maybe_trigger_vblank(4); nes_write(0x0701, g_cpu.A);
label_A4E6:;
    /* $A4E6: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0700; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4E9:;
    /* $A4E9: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A4EA_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A4EA_b3");
#endif
label_A4EA:;
    /* $A4EA: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A4EB:;
    /* $A4EB: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_A502;
label_A4ED:;
    /* $A4ED: 8D */ maybe_trigger_vblank(4); nes_write(0x0540, g_cpu.A);
label_A4F0:;
    /* $A4F0: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A4F3:;
    /* $A4F3: 8D */ maybe_trigger_vblank(4); nes_write(0x0541, g_cpu.A);
label_A4F6:;
    /* $A4F6: EE */ maybe_trigger_vblank(6); { uint16_t a=0x053F; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A4F9:;
    /* $A4F9: A9 */ maybe_trigger_vblank(2); g_cpu.A = 0x00; FLAG_NZ(g_cpu.A);
label_A4FB:;
    /* $A4FB: 8D */ maybe_trigger_vblank(4); nes_write(0x0543, g_cpu.A);
label_A4FE:;
    /* $A4FE: 8D */ maybe_trigger_vblank(4); nes_write(0x0544, g_cpu.A);
label_A501:;
    /* $A501: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A502:;
    /* $A502: 8D */ maybe_trigger_vblank(4); nes_write(0x053F, g_cpu.A);
label_A505:;
    /* $A505: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A506_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A506_b3");
#endif
label_A506:;
    /* $A506: 8D */ maybe_trigger_vblank(4); nes_write(0x0533, g_cpu.A);
label_A509:;
    /* $A509: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A50C:;
    /* $A50C: 8D */ maybe_trigger_vblank(4); nes_write(0x0507, g_cpu.A);
label_A50F:;
    /* $A50F: A2 */ maybe_trigger_vblank(2); g_cpu.X = 0x00; FLAG_NZ(g_cpu.X);
label_A511:;
    /* $A511: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A514:;
    /* $A514: 9D */ maybe_trigger_vblank(5); nes_write((0x0509 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A517:;
    /* $A517: E8 */ maybe_trigger_vblank(2); g_cpu.X = (g_cpu.X+1)&0xFF; FLAG_NZ(g_cpu.X);
label_A518:;
    /* $A518: E0 */ maybe_trigger_vblank(2); { int r=g_cpu.X-0x03; g_cpu.C=(g_cpu.X>=0x03)?1:0; FLAG_NZ(r&0xFF); }
label_A51A:;
    /* $A51A: D0 */ maybe_trigger_vblank(2); if (!g_cpu.Z) {
    maybe_trigger_vblank(2);
#ifdef WATCHDOG_ENABLED
    watchdog_check();
#endif
    goto label_A511;
    }
label_A51C:;
    /* $A51C: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0504; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A51F:;
    /* $A51F: EE */ maybe_trigger_vblank(6); { uint16_t a=0x0505; uint8_t v=(nes_read(a)+1)&0xFF; nes_write(a,v); FLAG_NZ(v); }
label_A522:;
    /* $A522: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A523_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A523_b3");
#endif
label_A523:;
    /* $A523: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A524:;
    /* $A524: 20 */ maybe_trigger_vblank(6); { uint64_t _jsr_prev = nes_jsr_context_enter();
nes_dispatch_call(0x8870, 3);
if (nes_jsr_context_leave(_jsr_prev)) return; }
label_A527:;
    /* $A527: A8 */ maybe_trigger_vblank(2); g_cpu.Y = g_cpu.A; FLAG_NZ(g_cpu.Y);
label_A528:;
    /* $A528: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x924F + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A52B:;
    /* $A52B: 9D */ maybe_trigger_vblank(5); nes_write((0x0487 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A52E:;
    /* $A52E: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9250 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A531:;
    /* $A531: 9D */ maybe_trigger_vblank(5); nes_write((0x0488 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A534:;
    /* $A534: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9251 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A537:;
    /* $A537: 9D */ maybe_trigger_vblank(5); nes_write((0x0489 + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A53A:;
    /* $A53A: B9 */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9252 + g_cpu.Y) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A53D:;
    /* $A53D: 9D */ maybe_trigger_vblank(5); nes_write((0x048A + g_cpu.X) & 0xFFFF, g_cpu.A);
label_A540:;
    /* $A540: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

void func_A541_b3(void) {
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_push("func_A541_b3");
#endif
label_A541:;
    /* $A541: 0A */ maybe_trigger_vblank(2); g_cpu.C = (g_cpu.A>>7)&1; g_cpu.A = (g_cpu.A<<1)&0xFF; FLAG_NZ(g_cpu.A);
label_A542:;
    /* $A542: B0 */ maybe_trigger_vblank(2); if (g_cpu.C) goto label_A55A;
label_A544:;
    /* $A544: AA */ maybe_trigger_vblank(2); g_cpu.X = g_cpu.A; FLAG_NZ(g_cpu.X);
label_A545:;
    /* $A545: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0A); FLAG_NZ(g_cpu.A);
label_A547:;
    /* $A547: 8D */ maybe_trigger_vblank(4); nes_write(0x0425, g_cpu.A);
label_A54A:;
    /* $A54A: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9A00 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A54D:;
    /* $A54D: 85 */ maybe_trigger_vblank(3); nes_write(0x0A, g_cpu.A);
label_A54F:;
    /* $A54F: A5 */ maybe_trigger_vblank(3); g_cpu.A = nes_read(0x0B); FLAG_NZ(g_cpu.A);
label_A551:;
    /* $A551: 8D */ maybe_trigger_vblank(4); nes_write(0x0426, g_cpu.A);
label_A554:;
    /* $A554: BD */ maybe_trigger_vblank(4); g_cpu.A = nes_read((0x9A01 + g_cpu.X) & 0xFFFF); FLAG_NZ(g_cpu.A);
label_A557:;
    /* $A557: 85 */ maybe_trigger_vblank(3); nes_write(0x0B, g_cpu.A);
label_A559:;
    /* $A559: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
label_A55A:;
    /* $A55A: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0425); FLAG_NZ(g_cpu.A);
label_A55D:;
    /* $A55D: 85 */ maybe_trigger_vblank(3); nes_write(0x0A, g_cpu.A);
label_A55F:;
    /* $A55F: AD */ maybe_trigger_vblank(4); g_cpu.A = nes_read(0x0426); FLAG_NZ(g_cpu.A);
label_A562:;
    /* $A562: 85 */ maybe_trigger_vblank(3); nes_write(0x0B, g_cpu.A);
label_A564:;
    /* $A564: 60 */ maybe_trigger_vblank(6); 
#ifdef RECOMP_STACK_TRACKING
    recomp_stack_pop();
#endif
    return;
}

