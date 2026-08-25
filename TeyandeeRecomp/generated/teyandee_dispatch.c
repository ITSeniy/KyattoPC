/* AUTO-GENERATED dispatch table. DO NOT EDIT. */
#include "nes_runtime.h"
extern int g_current_bank;

/* Interpreter-fallback precondition flag (see runner/src/interp.c). */
int g_recomp_push_all_jsr = 0;

/* Forward declarations */
void func_FF90(void);
void func_FFA9(void);
void func_FFAE(void);
void func_FF91(void);
void func_FFC0(void);
void func_FFE5(void);
void func_FFDE(void);
void func_FFE0(void);
void func_FFC8(void);
void func_FFC3(void);
void func_FFB0(void);
void func_FFD4(void);
void func_FFA1(void);
void func_FFCE(void);
void func_FFBB(void);
void func_FFE8(void);
void func_FF9A(void);
void func_FFA4(void);
void func_FFD9(void);
void func_FFD7(void);
void func_FFD6(void);
void func_FF95(void);
void func_FFA7(void);
void func_FFB3(void);
void func_FFEF(void);
void func_FFE7(void);
void func_FF9C(void);
void func_FF94(void);
void func_FF92(void);
void func_FFC5(void);
void func_FFA6(void);
void func_FFAB(void);
void func_FFB9(void);
void func_FFBE(void);
void func_FFEA(void);
void func_FFEC(void);
void func_FCCD(void);
void func_FD4C(void);
void func_FD2A(void);
void func_FD8F(void);
void func_FDDE(void);
void func_FDAA(void);
void func_FCE1(void);
void func_FDA3(void);
void func_FCFF(void);
void func_FD7D(void);
void func_FD0D(void);
void func_FDD1(void);
void func_FCCE(void);
void func_FCE7(void);
void func_FD79(void);
void func_FD6B(void);
void func_FD0A(void);
void func_FDB7(void);
void func_FCFB(void);
void func_FCFC(void);
void func_FCED(void);
void func_FCEC(void);
void func_FD06(void);
void func_FD27(void);
void func_FD2F(void);
void func_FD35(void);
void func_FD3A(void);
void func_FD32(void);
void func_FD03(void);
void func_FD10(void);
void func_FD16(void);
void func_FD93(void);
void func_FD46(void);
void func_FD83(void);
void func_FCEA(void);
void func_FD18(void);
void func_FD12(void);
void func_FD69(void);
void func_FD7C(void);
void func_FD64(void);
void func_FD6D(void);
void func_FCD0(void);
void func_FD02(void);
void func_FCF4(void);
void func_FD60(void);
void func_FDAF(void);
void func_FD97(void);
void func_FD9B(void);
void func_FCE5(void);
void func_FCCF(void);
void func_FCF2(void);
void func_FCEF(void);
void func_FCF8(void);
void func_FD09(void);
void func_FD1F(void);
void func_FD14(void);
void func_FD49(void);
void func_FD22(void);
void func_FD3F(void);
void func_FD3C(void);
void func_FCDE(void);
void func_FDDC(void);
void func_FD74(void);
void func_FD37(void);
void func_FD41(void);
void func_FDCF(void);
void func_FDCB(void);
void func_FDC5(void);
void func_FD95(void);
void func_FDB5(void);
void func_FD85(void);
void func_FD86(void);
void func_FD9D(void);
void func_FDB1(void);
void func_FD8A(void);
void func_FD5B(void);
void func_FC22(void);
void func_FC29(void);
void func_FC2A(void);
void func_FC31(void);
void func_FC24(void);
void func_FC34(void);
void func_FC3C(void);
void func_FC3F(void);
void func_FC2D(void);
void func_FC37(void);
void func_FC39(void);
void func_FC2B(void);
void func_C0B1(void);
void func_C24C(void);
void func_C0C9(void);
void func_C0F1(void);
void func_C221(void);
void func_C0BE(void);
void func_C29E(void);
void func_C0ED(void);
void func_C2AD(void);
void func_C28D(void);
void func_C26D(void);
void func_C1F7(void);
void func_C0E0(void);
void func_C2B0(void);
void func_C1B5(void);
void func_C0F3(void);
void func_C13E(void);
void func_C27E(void);
void func_C0FE(void);
void func_C200(void);
void func_C2BE(void);
void func_C0F7(void);
void func_C123(void);
void func_C124(void);
void func_C223(void);
void func_C128(void);
void func_C228(void);
void func_C1BA(void);
void func_C194(void);
void func_C121(void);
void func_C2AB(void);
void func_C2B4(void);
void func_C2B6(void);
void func_C0E5(void);
void func_C1C0(void);
void func_C0E8(void);
void func_C0C1(void);
void func_C18E(void);
void func_C10A(void);
void func_C10F(void);
void func_C100(void);
void func_C107(void);
void func_C1CF(void);
void func_C111(void);
void func_C2C0(void);
void func_C1C2(void);
void func_C115(void);
void func_C218(void);
void func_C2A1(void);
void func_C14C(void);
void func_C198(void);
void func_C20B(void);
void func_C207(void);
void func_C15A(void);
void func_C203(void);
void func_C102(void);
void func_C1BC(void);
void func_C120(void);
void func_C183(void);
void func_C191(void);
void func_C1E4(void);
void func_C0EB(void);
void func_C0D7(void);
void func_C0BC(void);
void func_C1A8(void);
void func_C28B(void);
void func_C1B7(void);
void func_C2B2(void);
void func_C299(void);
void func_C244(void);
void func_C270(void);
void func_C252(void);
void func_C258(void);
void func_C104(void);
void func_C205(void);
void func_C117(void);
void func_C215(void);
void func_C1BE(void);
void func_C240(void);
void func_C1F2(void);
void func_C141(void);
void func_C14E(void);
void func_C24F(void);
void func_C269(void);
void func_C286(void);
void func_C296(void);
void func_C282(void);
void func_C238(void);
void func_C23A(void);
void func_C149(void);
void func_C169(void);
void func_C16B(void);
void func_C290(void);
void func_C267(void);
void func_C293(void);
void func_C19A(void);
void func_C236(void);
void func_C23E(void);
void func_C25E(void);
void func_C261(void);
void func_C1E2(void);
void func_C234(void);
void func_C1EA(void);
void func_C21A(void);
void func_C26B(void);
void func_C16F(void);
void func_C209(void);
void func_C0DC(void);
void func_C13A(void);
void func_C226(void);
void func_C12C(void);
void func_C1DC(void);
void func_C0EF(void);
void func_C0E2(void);
void func_FC9E(void);
void func_FCAE(void);
void func_FCC9(void);
void func_FCA3(void);
void func_FCBE(void);
void func_FCBF(void);
void func_FCA9(void);
void func_FCC4(void);
void func_FCAC(void);
void func_FCBB(void);
void func_FCB4(void);
void func_FCB6(void);
void func_FCA0(void);
void func_FCC7(void);
void func_FCC2(void);
void func_FCCC(void);
void func_FCA5(void);
void func_FDEF(void);
void func_FDF7(void);
void func_FDF8(void);
void func_FDF5(void);
void func_FDF3(void);
void func_FDF1(void);
void func_8006_b0(void);
void func_8006_b1(void);
void func_8006_b2(void);
void func_8006_b4(void);
void func_8006_b5(void);
void func_FC42(void);
void func_FC4D(void);
void func_FC70(void);
void func_FC84(void);
void func_FC81(void);
void func_FC6D(void);
void func_FC87(void);
void func_FC69(void);
void func_FC9A(void);
void func_FC8D(void);
void func_FC90(void);
void func_FC95(void);
void func_FC9B(void);
void func_FC98(void);
void func_FC61(void);
void func_FC7F(void);
void func_FC50(void);
void func_FC4F(void);
void func_FDF9(void);
void func_FDFD(void);
void func_FE00(void);
void func_FE01(void);
void func_FE03(void);
void func_FDFB(void);
void func_FE04(void);
void func_FE20(void);
void func_FE23(void);
void func_FE16(void);
void func_FE11(void);
void func_FE09(void);
void func_FE07(void);
void func_FE0E(void);
void func_FE54(void);
void func_FE5C(void);
void func_FE65(void);
void func_FE58(void);
void func_FE62(void);
void func_FC00(void);
void func_FC04(void);
void func_FC0F(void);
void func_FC02(void);
void func_FC06(void);
void func_FC0B(void);
void func_FC1A(void);
void func_FC13(void);
void func_FC15(void);
void func_FC18(void);
void func_FC08(void);
void func_C46F(void);
void func_C49A(void);
void func_C48E(void);
void func_C488(void);
void func_C48A(void);
void func_C49C(void);
void func_C482(void);
void func_C48C(void);
void func_C484(void);
void func_C4A6(void);
void func_C471(void);
void func_C497(void);
void func_C49F(void);
void func_C4B4(void);
void func_C4BE(void);
void func_C4C5(void);
void func_C4CA(void);
void func_C4D9(void);
void func_C4C3(void);
void func_C4C8(void);
void func_C4CC(void);
void func_C4CE(void);
void func_C4DD(void);
void func_C4BA(void);
void func_C4D6(void);
void func_C41E(void);
void func_C420(void);
void func_C43E(void);
void func_C424(void);
void func_C428(void);
void func_C42F(void);
void func_C43C(void);
void func_C435(void);
void func_C43A(void);
void func_C437(void);
void func_FE8D(void);
void func_FEA0(void);
void func_FEA3(void);
void func_C4FA(void);
void func_C503(void);
void func_C506(void);
void func_C507(void);
void func_C509(void);
void func_C50A(void);
void func_C50C(void);
void func_C50F(void);
void func_BA43_b2(void);
void func_BA40_b2(void);
void func_C54B(void);
void func_C54D(void);
void func_C574(void);
void func_C566(void);
void func_C555(void);
void func_C562(void);
void func_C52F(void);
void func_C53C(void);
void func_C544(void);
void func_C531(void);
void func_C547(void);
void func_C53A(void);
void func_C541(void);
void func_C69C(void);
void func_C69E(void);
void func_C6C8(void);
void func_C6A7(void);
void func_C701(void);
void func_C6FF(void);
void func_C6AB(void);
void func_C6AA(void);
void func_C6A1(void);
void func_C6C5(void);
void func_C6C2(void);
void func_C6FC(void);
void func_C6A3(void);
void func_C704(void);
void func_C706(void);
void func_C6D8(void);
void func_C6D1(void);
void func_C6D9(void);
void func_C6D7(void);
void func_C6DC(void);
void func_C6D4(void);
void func_C6A8(void);
void func_C707(void);
void func_C710(void);
void func_C723(void);
void func_C71B(void);
void func_C70F(void);
void func_C70E(void);
void func_C726(void);
void func_C7FD(void);
void func_C81C(void);
void func_C849(void);
void func_C7CB(void);
void func_C7F7(void);
void func_C907(void);
void func_C917(void);
void func_C95D(void);
void func_C93B(void);
void func_C983(void);
void func_C905(void);
void func_C950(void);
void func_C935(void);
void func_C936(void);
void func_C961(void);
void func_C82B(void);
void func_C761(void);
void func_C802(void);
void func_C8C9(void);
void func_C948(void);
void func_C945(void);
void func_C800(void);
void func_C86D(void);
void func_C806(void);
void func_C8E8(void);
void func_C8E9(void);
void func_C80A(void);
void func_C975(void);
void func_C86F(void);
void func_C95B(void);
void func_C953(void);
void func_C910(void);
void func_C95F(void);
void func_C804(void);
void func_C955(void);
void func_C90B(void);
void func_C91B(void);
void func_C901(void);
void func_C930(void);
void func_C74E(void);
void func_C787(void);
void func_C7BF(void);
void func_C909(void);
void func_C93D(void);
void func_C912(void);
void func_C929(void);
void func_C92A(void);
void func_C90E(void);
void func_C986(void);
void func_C92F(void);
void func_C988(void);
void func_C92E(void);
void func_C919(void);
void func_C924(void);
void func_C925(void);
void func_C8AA(void);
void func_C895(void);
void func_C896(void);
void func_C9B1(void);
void func_C8DC(void);
void func_C98A(void);
void func_C920(void);
void func_C8FE(void);
void func_C900(void);
void func_C88A(void);
void func_C9AB(void);
void func_C9A3(void);
void func_C922(void);
void func_C8ED(void);
void func_C835(void);
void func_C969(void);
void func_C7EC(void);
void func_C7ED(void);
void func_C932(void);
void func_C74B(void);
void func_C7C3(void);
void func_C831(void);
void func_C7B2(void);
void func_C770(void);
void func_C92C(void);
void func_C881(void);
void func_C821(void);
void func_C758(void);
void func_C8B9(void);
void func_C868(void);
void func_C8E3(void);
void func_C77F(void);
void func_C765(void);
void func_C79D(void);
void func_C7E6(void);
void func_C763(void);
void func_C88D(void);
void func_C8AC(void);
void func_C990(void);
void func_C8CE(void);
void func_C8D0(void);
void func_C8CC(void);
void func_C7A1(void);
void func_C7B7(void);
void func_C808(void);
void func_C903(void);
void func_C8F1(void);
void func_C7BD(void);
void func_C7C1(void);
void func_C7C9(void);
void func_C7C7(void);
void func_C7E3(void);
void func_C8E1(void);
void func_C99F(void);
void func_C8CB(void);
void func_C8B5(void);
void func_C8C3(void);
void func_C8BE(void);
void func_C878(void);
void func_C8B7(void);
void func_C8AF(void);
void func_C99D(void);
void func_C999(void);
void func_C898(void);
void func_C8C0(void);
void func_C744(void);
void func_C864(void);
void func_C943(void);
void func_C992(void);
void func_C97F(void);
void func_C957(void);
void func_C967(void);
void func_C926(void);
void func_C91D(void);
void func_C994(void);
void func_C794(void);
void func_C872(void);
void func_C75A(void);
void func_C942(void);
void func_C7A2(void);
void func_C810(void);
void func_C9A7(void);
void func_C934(void);
void func_C80E(void);
void func_C828(void);
void func_C98E(void);
void func_C914(void);
void func_C941(void);
void func_C7E4(void);
void func_C7CE(void);
void func_C7FC(void);
void func_C8FC(void);
void func_C7DA(void);
void func_C7AB(void);
void func_C782(void);
void func_C775(void);
void func_C742(void);
void func_C842(void);
void func_C981(void);
void func_C8F3(void);
void func_C8F0(void);
void func_C8F6(void);
void func_C790(void);
void func_E916(void);
void func_E929(void);
void func_E91B(void);
void func_E921(void);
void func_E923(void);
void func_CD00(void);
void func_CD4D(void);
void func_CD20(void);
void func_CD24(void);
void func_CD06(void);
void func_CD0E(void);
void func_CD03(void);
void func_CD47(void);
void func_CD34(void);
void func_CD60(void);
void func_C520(void);
void func_C524(void);
void func_C527(void);
void func_C528(void);
void func_C529(void);
void func_C52B(void);
void func_CDA9(void);
void func_CDC6(void);
void func_CDCC(void);
void func_CDD0(void);
void func_CDC8(void);
void func_CDCE(void);
void func_CDB5(void);
void func_CDB1(void);
void func_CDB9(void);
void func_CDB3(void);
void func_CDB7(void);
void func_CDBD(void);
void func_D1B0(void);
void func_D2D0(void);
void func_D2A5(void);
void func_D285(void);
void func_D1ED(void);
void func_D29D(void);
void func_D2F3(void);
void func_D2F2(void);
void func_D2BF(void);
void func_D343(void);
void func_D1F0(void);
void func_D2A9(void);
void func_D1D9(void);
void func_D1BB(void);
void func_D1CE(void);
void func_D1C8(void);
void func_D1D0(void);
void func_D2B3(void);
void func_D30F(void);
void func_D2E0(void);
void func_D235(void);
void func_D2D2(void);
void func_D2D4(void);
void func_D245(void);
void func_D21E(void);
void func_D301(void);
void func_D1D2(void);
void func_D299(void);
void func_D304(void);
void func_D20B(void);
void func_D30B(void);
void func_D262(void);
void func_D20F(void);
void func_D306(void);
void func_D206(void);
void func_D1FF(void);
void func_D1B4(void);
void func_D1D7(void);
void func_D1CA(void);
void func_D1E1(void);
void func_D1C6(void);
void func_D1C4(void);
void func_D241(void);
void func_D341(void);
void func_D2BA(void);
void func_D2E9(void);
void func_D1E8(void);
void func_C693(void);
void func_C698(void);
void func_C695(void);
void func_D458(void);
void func_D4A0(void);
void func_D4A1(void);
void func_D485(void);
void func_D4A5(void);
void func_D487(void);
void func_D4D1(void);
void func_D4B3(void);
void func_D4D2(void);
void func_D4D4(void);
void func_D4CB(void);
void func_D4A7(void);
void func_D4C5(void);
void func_D4E1(void);
void func_D4D6(void);
void func_D4D8(void);
void func_D492(void);
void func_D4BC(void);
void func_9173_b2(void);
void func_D572(void);
void func_D585(void);
void func_D5C6(void);
void func_D5EC(void);
void func_D5DF(void);
void func_D5A3(void);
void func_D5CA(void);
void func_D5C2(void);
void func_D5BC(void);
void func_D5D2(void);
void func_D5D4(void);
void func_D5D8(void);
void func_D58C(void);
void func_D58F(void);
void func_D5C0(void);
void func_D591(void);
void func_D598(void);
void func_D5E0(void);
void func_D5E2(void);
void func_D5E9(void);
void func_9176_b2(void);
void func_D644(void);
void func_D64C(void);
void func_D69A(void);
void func_D6D6(void);
void func_D6BD(void);
void func_D6A1(void);
void func_D651(void);
void func_D648(void);
void func_D668(void);
void func_D6A5(void);
void func_D684(void);
void func_D688(void);
void func_D6A3(void);
void func_D6D7(void);
void func_D6D2(void);
void func_D6D4(void);
void func_D6D9(void);
void func_D6B0(void);
void func_D64F(void);
void func_9179_b2(void);
void func_9170_b2(void);
void func_CC3C(void);
void func_CC4D(void);
void func_CC85(void);
void func_CC8A(void);
void func_CC8E(void);
void func_CA48(void);
void func_CAF1(void);
void func_CAF7(void);
void func_CA85(void);
void func_CAEB(void);
void func_CA4D(void);
void func_CB30(void);
void func_CB31(void);
void func_CB1F(void);
void func_CA9B(void);
void func_CA9C(void);
void func_CAC8(void);
void func_CA88(void);
void func_CAFB(void);
void func_CACF(void);
void func_CB2A(void);
void func_CAFD(void);
void func_CA95(void);
void func_CAAA(void);
void func_CA9E(void);
void func_CAD5(void);
void func_CAC6(void);
void func_CA5C(void);
void func_CA60(void);
void func_CA5E(void);
void func_CACB(void);
void func_CADA(void);
void func_CB02(void);
void func_CAB9(void);
void func_CB00(void);
void func_CB0E(void);
void func_CB07(void);
void func_CA8D(void);
void func_CAAF(void);
void func_CAB4(void);
void func_CAB6(void);
void func_CABA(void);
void func_CABC(void);
void func_CADD(void);
void func_CAD7(void);
void func_CA83(void);
void func_CB43(void);
void func_CA81(void);
void func_CAE8(void);
void func_CAE9(void);
void func_CAB1(void);
void func_CA67(void);
void func_CB48(void);
void func_CB4C(void);
void func_CB86(void);
void func_CBA6(void);
void func_CBFF(void);
void func_CBA4(void);
void func_CB81(void);
void func_CB54(void);
void func_CB96(void);
void func_CBCB(void);
void func_CB9E(void);
void func_CB67(void);
void func_CB5C(void);
void func_CBB3(void);
void func_CBC8(void);
void func_CBD0(void);
void func_CBDA(void);
void func_CC2A(void);
void func_CC20(void);
void func_CC30(void);
void func_CB92(void);
void func_CB9A(void);
void func_CC0A(void);
void func_CBA0(void);
void func_CC01(void);
void func_CBB9(void);
void func_CBBF(void);
void func_CC08(void);
void func_CBE4(void);
void func_CC28(void);
void func_CBCE(void);
void func_CBFE(void);
void func_CB8C(void);
void func_CC8F(void);
void func_CCA6(void);
void func_CCF4(void);
void func_CCAA(void);
void func_CCBA(void);
void func_CCB5(void);
void func_CCC2(void);
void func_CCBC(void);
void func_CCD0(void);
void func_CC92(void);
void func_CC9E(void);
void func_CC98(void);
void func_CCA2(void);
void func_CCC7(void);
void func_CCE8(void);
void func_DAC4(void);
void func_DB29(void);
void func_DAF2(void);
void func_DAE5(void);
void func_DAE0(void);
void func_DB18(void);
void func_DADA(void);
void func_DAC9(void);
void func_DADD(void);
void func_DB2E(void);
void func_DB0B(void);
void func_DB07(void);
void func_DB0E(void);
void func_DB04(void);
void func_DB33(void);
void func_DC4C(void);
void func_DBD1(void);
void func_DCA9(void);
void func_DCAA(void);
void func_DC3E(void);
void func_DC3F(void);
void func_DBA0(void);
void func_DCA7(void);
void func_DC86(void);
void func_DCAF(void);
void func_DCC9(void);
void func_DBDB(void);
void func_DC01(void);
void func_DC00(void);
void func_DBC9(void);
void func_DBD9(void);
void func_DCA5(void);
void func_DBDC(void);
void func_DC28(void);
void func_DC2A(void);
void func_DBA5(void);
void func_DC75(void);
void func_DB9E(void);
void func_DC93(void);
void func_DC07(void);
void func_DC5A(void);
void func_DC0E(void);
void func_DC0B(void);
void func_DBA4(void);
void func_DBB4(void);
void func_DB95(void);
void func_DBB6(void);
void func_DBF1(void);
void func_DCC6(void);
void func_DB6B(void);
void func_DBD3(void);
void func_DC02(void);
void func_DC03(void);
void func_DC8C(void);
void func_DCF0(void);
void func_DD4D(void);
void func_DD08(void);
void func_DDC1(void);
void func_DD0D(void);
void func_DD98(void);
void func_DD49(void);
void func_DD0B(void);
void func_DD03(void);
void func_DDA6(void);
void func_DDD7(void);
void func_DDB3(void);
void func_DD5F(void);
void func_DCFD(void);
void func_DD4B(void);
void func_DD21(void);
void func_DDA5(void);
void func_DD06(void);
void func_DD5A(void);
void func_DDAB(void);
void func_DDAF(void);
void func_DDB9(void);
void func_DDCD(void);
void func_DDB5(void);
void func_DDB7(void);
void func_DD52(void);
void func_DCFB(void);
void func_DDCA(void);
void func_DD6B(void);
void func_DD88(void);
void func_DCFF(void);
void func_DD90(void);
void func_DD40(void);
void func_DD7F(void);
void func_DE74(void);
void func_DEAE(void);
void func_DE83(void);
void func_DEA5(void);
void func_DE95(void);
void func_DE8D(void);
void func_DE98(void);
void func_E1AB(void);
void func_D8E6(void);
void func_D8ED(void);
void func_D8F6(void);
void func_D99A(void);
void func_D9CA(void);
void func_D9BF(void);
void func_D9D8(void);
void func_D9B7(void);
void func_D916(void);
void func_D9E4(void);
void func_D909(void);
void func_D9BD(void);
void func_D988(void);
void func_D997(void);
void func_D99D(void);
void func_D90B(void);
void func_D90E(void);
void func_D9B9(void);
void func_D903(void);
void func_D991(void);
void func_D8FF(void);
void func_D93F(void);
void func_D9C6(void);
void func_D8FD(void);
void func_D955(void);
void func_D9E0(void);
void func_D984(void);
void func_D9E9(void);
void func_D905(void);
void func_D8F8(void);
void func_D4F6(void);
void func_D550(void);
void func_D535(void);
void func_D500(void);
void func_D555(void);
void func_D541(void);
void func_D50E(void);
void func_D506(void);
void func_D50A(void);
void func_D508(void);
void func_D502(void);
void func_CFD7(void);
void func_D05E(void);
void func_D0C0(void);
void func_D005(void);
void func_D003(void);
void func_D050(void);
void func_D120(void);
void func_D00A(void);
void func_D013(void);
void func_D008(void);
void func_D019(void);
void func_D0E9(void);
void func_D011(void);
void func_D020(void);
void func_D021(void);
void func_D060(void);
void func_D061(void);
void func_D000(void);
void func_D0CA(void);
void func_D032(void);
void func_D040(void);
void func_D041(void);
void func_D049(void);
void func_D02A(void);
void func_D0D0(void);
void func_D0D1(void);
void func_D0AA(void);
void func_D00D(void);
void func_D04A(void);
void func_D0FB(void);
void func_D0C8(void);
void func_D0FE(void);
void func_D00F(void);
void func_D0A1(void);
void func_D091(void);
void func_D080(void);
void func_D081(void);
void func_D055(void);
void func_D07E(void);
void func_D08C(void);
void func_D08A(void);
void func_D082(void);
void func_D083(void);
void func_D08E(void);
void func_D079(void);
void func_D086(void);
void func_D044(void);
void func_D09F(void);
void func_D04C(void);
void func_D0E2(void);
void func_D051(void);
void func_D015(void);
void func_D088(void);
void func_D0E0(void);
void func_D0F0(void);
void func_D0A5(void);
void func_D0EE(void);
void func_D01D(void);
void func_D0EA(void);
void func_D0A3(void);
void func_D022(void);
void func_CFF0(void);
void func_D10F(void);
void func_D03C(void);
void func_D03D(void);
void func_D0BC(void);
void func_D0C4(void);
void func_D023(void);
void func_D024(void);
void func_D05C(void);
void func_D0CC(void);
void func_D0E4(void);
void func_D0AE(void);
void func_D090(void);
void func_D0F9(void);
void func_D0DE(void);
void func_D12A(void);
void func_D13E(void);
void func_D142(void);
void func_D10A(void);
void func_D102(void);
void func_D05A(void);
void func_D104(void);
void func_D0B8(void);
void func_D14C(void);
void func_D01B(void);
void func_D09D(void);
void func_CFE1(void);
void func_D0D3(void);
void func_D097(void);
void func_D06B(void);
void func_D140(void);
void func_D0F8(void);
void func_D0F6(void);
void func_D150(void);
void func_D07A(void);
void func_D18D(void);
void func_D19B(void);
void func_D192(void);
void func_D18F(void);
void func_CDD1(void);
void func_CDEA(void);
void func_CE0E(void);
void func_CE07(void);
void func_CE05(void);
void func_CE86(void);
void func_CEA6(void);
void func_CF11(void);
void func_CEB3(void);
void func_CE61(void);
void func_CDDD(void);
void func_CE66(void);
void func_CE9E(void);
void func_CEF1(void);
void func_CE8D(void);
void func_CEF5(void);
void func_CEF6(void);
void func_CE03(void);
void func_CF1F(void);
void func_CF0C(void);
void func_CF00(void);
void func_CF14(void);
void func_CEE9(void);
void func_CF36(void);
void func_CEAA(void);
void func_CECD(void);
void func_CED0(void);
void func_CECF(void);
void func_CECB(void);
void func_CED2(void);
void func_CE89(void);
void func_CE4D(void);
void func_CE20(void);
void func_CF23(void);
void func_CF0A(void);
void func_CE47(void);
void func_CF06(void);
void func_CE5A(void);
void func_CEA0(void);
void func_CF03(void);
void func_CEC0(void);
void func_CE84(void);
void func_CF08(void);
void func_CDFC(void);
void func_CED7(void);
void func_CDE1(void);
void func_CEFD(void);
void func_CE30(void);
void func_CEF8(void);
void func_CEB9(void);
void func_CDE8(void);
void func_CE2A(void);
void func_C513(void);
void func_9803_b2(void);
void func_9806_b2(void);
void func_980C_b2(void);
void func_980F_b2(void);
void func_9809_b2(void);
void func_8000_b2(void);
void func_8002_b2(void);
void func_C58A(void);
void func_C5C4(void);
void func_C59E(void);
void func_C58D(void);
void func_C58E(void);
void func_C5C9(void);
void func_C598(void);
void func_C5D2(void);
void func_C5CF(void);
void func_C5B6(void);
void func_C58F(void);
void func_C5B9(void);
void func_C5B5(void);
void func_C5C2(void);
void func_C5B8(void);
void func_C5C7(void);
void func_C5BF(void);
void func_C5BB(void);
void func_C590(void);
void func_C5B0(void);
void func_C2C6(void);
void func_C2F0(void);
void func_C321(void);
void func_C2F7(void);
void func_C2CF(void);
void func_C2EE(void);
void func_C308(void);
void func_C2FC(void);
void func_C303(void);
void func_C304(void);
void func_C2CB(void);
void func_C302(void);
void func_C30A(void);
void func_C306(void);
void func_C310(void);
void func_C31C(void);
void func_C31E(void);
void func_C2E0(void);
void func_C2DD(void);
void func_C2E3(void);
void func_C2CD(void);
void func_C30E(void);
void func_C2D9(void);
void func_C30C(void);
void func_C314(void);
void func_C2E5(void);
void func_C2E7(void);
void func_C324(void);
void func_C3BD(void);
void func_C3DF(void);
void func_C382(void);
void func_C32F(void);
void func_C3C2(void);
void func_C340(void);
void func_C341(void);
void func_C400(void);
void func_C3C4(void);
void func_C3F5(void);
void func_C328(void);
void func_C414(void);
void func_C3C9(void);
void func_C3BF(void);
void func_C3E7(void);
void func_C410(void);
void func_C3DC(void);
void func_C402(void);
void func_C3A9(void);
void func_C406(void);
void func_C35A(void);
void func_C40A(void);
void func_C3B2(void);
void func_C344(void);
void func_C354(void);
void func_C3C7(void);
void func_C3E1(void);
void func_C3D7(void);
void func_C416(void);
void func_C39F(void);
void func_C373(void);
void func_C411(void);
void func_C3B6(void);
void func_C34C(void);
void func_C350(void);
void func_C358(void);
void func_C368(void);
void func_C37A(void);
void func_C387(void);
void func_C390(void);
void func_C3A5(void);
void func_C33C(void);
void func_C370(void);
void func_C38C(void);
void func_C369(void);
void func_C37C(void);
void func_C396(void);
void func_C3B4(void);
void func_C33E(void);
void func_C34E(void);
void func_C360(void);
void func_C361(void);
void func_C363(void);
void func_C41B(void);
void func_C40F(void);
void func_C3CC(void);
void func_C3EF(void);
void func_C1C8(void);
void func_A000_b5(void);
void func_A11A_b5(void);
void func_A135_b5(void);
void func_A132_b5(void);
void func_A0A1_b5(void);
void func_A04F_b5(void);
void func_A066_b5(void);
void func_D420(void);
void func_B368_b3(void);
void func_EF21(void);
void func_F620(void);
void func_EF24(void);
void func_F520(void);
void func_F52A(void);
void func_D405(void);
void func_CE4E(void);
void func_CE60(void);
void func_CE65(void);
void func_CE51(void);
void func_C847(void);
void func_CF51(void);
void func_D14F(void);
void func_D166(void);
void func_D348(void);
void func_D34B(void);
void func_F720(void);
void func_C7D2(void);
void func_CF0F(void);
void func_D446(void);
void func_E6B6(void);
void func_E6B8(void);
void func_D201(void);
void func_F80A(void);
void func_D0CE(void);
void func_B620_b3(void);
void func_CF4F(void);
void func_C246(void);
void func_F5FD(void);
void func_F602(void);
void func_F604(void);
void func_F600(void);
void func_F5FF(void);
void func_D210(void);
void func_C750(void);
void func_C146(void);
void func_FC93(void);
void func_FE71(void);
void func_FE72(void);
void func_FE80(void);
void func_FE29(void);
void func_FE4D(void);
void func_FE36(void);
void func_FE50(void);
void func_FE2F(void);
void func_FE3F(void);
void func_FE3B(void);
void func_FE3C(void);
void func_FE38(void);
void func_FE81(void);
void func_8000_b0(void);
void func_8001_b0(void);
void func_8000_b6(void);
void func_8006_b6(void);
void func_C042(void);
void func_C07E(void);
void func_980C_b0(void);
void func_980C_b1(void);
void func_980C_b4(void);
void func_980C_b5(void);
void func_980C_b6(void);
void func_C818(void);
void func_C737(void);
void func_C9B4(void);
void func_CA05(void);
void func_C9CA(void);
void func_CA01(void);
void func_CA07(void);
void func_CA25(void);
void func_C9D2(void);
void func_C9D7(void);
void func_C9E6(void);
void func_C9F2(void);
void func_C9E1(void);
void func_C9E3(void);
void func_C9E4(void);
void func_C9C1(void);
void func_CA2E(void);
void func_C9EF(void);
void func_C9F0(void);
void func_C9ED(void);
void func_CA34(void);
void func_CA11(void);
void func_CA20(void);
void func_C9EB(void);
void func_C9C8(void);
void func_C9BD(void);
void func_CA03(void);
void func_CA09(void);
void func_CA1A(void);
void func_CA22(void);
void func_CA0E(void);
void func_CA0B(void);
void func_C9D0(void);
void func_C9B7(void);
void func_C9F4(void);
void func_C9F5(void);
void func_C9E9(void);
void func_C93F(void);
void func_EA1D(void);
void func_EA21(void);
void func_EA29(void);
void func_EA25(void);
void func_EA23(void);
void func_EA2B(void);
void func_EA28(void);
void func_EA26(void);
void func_EA01(void);
void func_EA0B(void);
void func_EA03(void);
void func_EA04(void);
void func_EA07(void);
void func_EA10(void);
void func_EA09(void);
void func_EA0E(void);
void func_EA18(void);
void func_E930(void);
void func_E94C(void);
void func_E950(void);
void func_E986(void);
void func_E93C(void);
void func_E936(void);
void func_E961(void);
void func_E957(void);
void func_E980(void);
void func_E937(void);
void func_E932(void);
void func_E982(void);
void func_E96E(void);
void func_E95F(void);
void func_E935(void);
void func_E973(void);
void func_E979(void);
void func_E97D(void);
void func_E989(void);
void func_E9D0(void);
void func_E9EF(void);
void func_E9DF(void);
void func_E9C0(void);
void func_E9CA(void);
void func_E9AE(void);
void func_E9B6(void);
void func_E9E9(void);
void func_E9FE(void);
void func_E9E2(void);
void func_E9A9(void);
void func_E994(void);
void func_E9B8(void);
void func_E9E4(void);
void func_E9F3(void);
void func_E9A1(void);
void func_E997(void);
void func_E9A3(void);
void func_E999(void);
void func_E99B(void);
void func_E99D(void);
void func_E9A5(void);
void func_E9A7(void);
void func_EA00(void);
void func_E9BC(void);
void func_E9D2(void);
void func_CD3D(void);
void func_CD13(void);
void func_D451(void);
void func_D2A0(void);
void func_D35F(void);
void func_D356(void);
void func_D385(void);
void func_D3A5(void);
void func_D3E5(void);
void func_D42C(void);
void func_D400(void);
void func_D402(void);
void func_D426(void);
void func_D3A1(void);
void func_D3A7(void);
void func_D398(void);
void func_D3D2(void);
void func_D3A9(void);
void func_D362(void);
void func_D442(void);
void func_D40B(void);
void func_D407(void);
void func_D3B7(void);
void func_D3B9(void);
void func_D428(void);
void func_D3C6(void);
void func_D3DB(void);
void func_D403(void);
void func_D34A(void);
void func_D34C(void);
void func_D445(void);
void func_D44C(void);
void func_D457(void);
void func_D329(void);
void func_CCCB(void);
void func_D41A(void);
void func_9800_b0(void);
void func_9800_b2(void);
void func_9800_b4(void);
void func_9800_b6(void);
void func_9803_b6(void);
void func_A384_b6(void);
void func_A590_b6(void);
void func_A560_b6(void);
void func_A504_b6(void);
void func_A5CE_b6(void);
void func_D49D(void);
void func_D4E9(void);
void func_D601(void);
void func_D602(void);
void func_D640(void);
void func_D63A(void);
void func_D638(void);
void func_D643(void);
void func_D626(void);
void func_D603(void);
void func_D606(void);
void func_D608(void);
void func_D736(void);
void func_D7BB(void);
void func_D7D0(void);
void func_D835(void);
void func_D7D8(void);
void func_D7E2(void);
void func_D7D6(void);
void func_D865(void);
void func_D823(void);
void func_D80F(void);
void func_D802(void);
void func_D807(void);
void func_D7CE(void);
void func_D7D4(void);
void func_D7FE(void);
void func_D7DA(void);
void func_D7C6(void);
void func_D7C8(void);
void func_D7CC(void);
void func_D817(void);
void func_D800(void);
void func_D6F7(void);
void func_D6FF(void);
void func_D703(void);
void func_D70F(void);
void func_D70B(void);
void func_D711(void);
void func_D707(void);
void func_E5BF(void);
void func_E5CF(void);
void func_E5C1(void);
void func_D720(void);
void func_D72A(void);
void func_D726(void);
void func_D72C(void);
void func_D72D(void);
void func_D6E6(void);
void func_D6F1(void);
void func_D6E9(void);
void func_9170_b0(void);
void func_9170_b4(void);
void func_9170_b5(void);
void func_9170_b6(void);
void func_CC60(void);
void func_CA59(void);
void func_CAA0(void);
void func_CA7A(void);
void func_CCF5(void);
void func_CCF7(void);
void func_CCF9(void);
void func_DB28(void);
void func_DBF9(void);
void func_DB75(void);
void func_E395(void);
void func_E3A9(void);
void func_E399(void);
void func_E397(void);
void func_E3A0(void);
void func_E3A1(void);
void func_E3A7(void);
void func_E3AC(void);
void func_DC2E(void);
void func_DCD0(void);
void func_DCE8(void);
void func_DCD8(void);
void func_DCDD(void);
void func_DCA1(void);
void func_DCAC(void);
void func_DDC0(void);
void func_DDB0(void);
void func_DD54(void);
void func_E66A(void);
void func_E66B(void);
void func_E672(void);
void func_E673(void);
void func_E6B7(void);
void func_E6AA(void);
void func_E67E(void);
void func_E687(void);
void func_E6A1(void);
void func_E679(void);
void func_E670(void);
void func_E698(void);
void func_E6A4(void);
void func_E6A6(void);
void func_E69E(void);
void func_E6AC(void);
void func_E6B9(void);
void func_E6B0(void);
void func_E6B2(void);
void func_E6B4(void);
void func_E6B5(void);
void func_E66C(void);
void func_DD70(void);
void func_E587(void);
void func_DD01(void);
void func_DCF9(void);
void func_DEA8(void);
void func_D9F1(void);
void func_DA0E(void);
void func_DA13(void);
void func_DA06(void);
void func_DA0A(void);
void func_DA03(void);
void func_DA95(void);
void func_DAA0(void);
void func_DAB0(void);
void func_DAA5(void);
void func_DA98(void);
void func_DAA9(void);
void func_DABA(void);
void func_DAAB(void);
void func_E6C2(void);
void func_E6C7(void);
void func_D964(void);
void func_DA32(void);
void func_DA90(void);
void func_DA91(void);
void func_DA4C(void);
void func_DA41(void);
void func_D98B(void);
void func_D52A(void);
void func_D156(void);
void func_D178(void);
void func_D185(void);
void func_D0B0(void);
void func_D0F4(void);
void func_D100(void);
void func_D099(void);
void func_D069(void);
void func_FC1B(void);
void func_FC1E(void);
void func_FC1F(void);
void func_FC21(void);
void func_CD69(void);
void func_CD85(void);
void func_CD82(void);
void func_CF3D(void);
void func_CF85(void);
void func_CF86(void);
void func_CF66(void);
void func_CF7A(void);
void func_CF8B(void);
void func_CF5A(void);
void func_CF43(void);
void func_BA49_b0(void);
void func_BA49_b1(void);
void func_BA49_b2(void);
void func_BA49_b3(void);
void func_BA49_b4(void);
void func_BA49_b6(void);
void func_D048(void);
void func_CE1A(void);
void func_BA4C_b6(void);
void func_BA40_b6(void);
void func_C4E0(void);
void func_C4EB(void);
void func_C158(void);
void func_C147(void);
void func_C4A7(void);
void func_C4AA(void);
void func_C4AC(void);
void func_C4B3(void);
void func_C11E(void);
void func_C5D6(void);
void func_C621(void);
void func_C64C(void);
void func_C64F(void);
void func_C603(void);
void func_C5E1(void);
void func_C605(void);
void func_C608(void);
void func_C61C(void);
void func_C600(void);
void func_C5EB(void);
void func_C636(void);
void func_C5F2(void);
void func_C624(void);
void func_C628(void);
void func_C61F(void);
void func_C641(void);
void func_C5DF(void);
void func_C60A(void);
void func_C638(void);
void func_C63A(void);
void func_C5E9(void);
void func_C65B(void);
void func_C67E(void);
void func_C686(void);
void func_C688(void);
void func_C684(void);
void func_C65E(void);
void func_C2FF(void);
void func_C0C6(void);
void func_C12E(void);
void func_9173_b0(void);
void func_9173_b4(void);
void func_9173_b5(void);
void func_9173_b6(void);
void func_9176_b0(void);
void func_9176_b1(void);
void func_9176_b4(void);
void func_9176_b5(void);
void func_9176_b6(void);
void func_9179_b0(void);
void func_9179_b4(void);
void func_9179_b5(void);
void func_9179_b6(void);
void func_9803_b0(void);
void func_9803_b1(void);
void func_9803_b4(void);
void func_9806_b0(void);
void func_9806_b1(void);
void func_9806_b4(void);
void func_9806_b5(void);
void func_9806_b6(void);
void func_9809_b0(void);
void func_9809_b1(void);
void func_9809_b4(void);
void func_9809_b6(void);
void func_8000_b1(void);
void func_8000_b4(void);
void func_8000_b5(void);
void func_8480_b5(void);
void func_A480_b5(void);
void func_804C_b5(void);
void func_8A9E_b5(void);
void func_8ABE_b5(void);
void func_8AFE_b5(void);
void func_8B0A_b5(void);
void func_8B42_b5(void);
void func_8B46_b5(void);
void func_8B4A_b5(void);
void func_8B4E_b5(void);
void func_8B7A_b5(void);
void func_8B90_b5(void);
void func_8BA6_b5(void);
void func_8BC6_b5(void);
void func_8CB0_b5(void);
void func_8CB4_b5(void);
void func_8CCC_b5(void);
void func_8CFA_b5(void);
void func_8D14_b5(void);
void func_8D58_b5(void);
void func_8D82_b5(void);
void func_8D86_b5(void);
void func_8D9E_b5(void);
void func_8DBE_b5(void);
void func_8DEC_b5(void);
void func_8E2C_b5(void);
void func_8E7A_b5(void);
void func_8EA0_b5(void);
void func_8540_b5(void);
void func_8595_b5(void);
void func_85A1_b5(void);
void func_85AA_b5(void);
void func_85C1_b5(void);
void func_85ED_b5(void);
void func_8687_b5(void);
void func_8692_b5(void);
void func_86B8_b5(void);
void func_86BF_b5(void);
void func_8710_b5(void);
void func_8730_b5(void);
void func_8770_b5(void);
void func_8790_b5(void);
void func_87A1_b5(void);
void func_A04C_b5(void);
void func_841F_b5(void);
void func_A41F_b5(void);
void func_A48F_b5(void);
void func_8228_b5(void);
void func_A228_b5(void);
void func_8302_b5(void);
void func_A302_b5(void);
void func_A3A3_b5(void);
void func_A337_b5(void);
void func_A335_b5(void);
void func_A330_b5(void);
void func_80FC_b5(void);
void func_A0FC_b5(void);
void func_824F_b5(void);
void func_A24F_b5(void);
void func_8161_b5(void);
void func_A161_b5(void);
void func_823D_b5(void);
void func_A23D_b5(void);
void func_82BD_b5(void);
void func_A2BD_b5(void);
void func_8186_b5(void);
void func_A186_b5(void);
void func_D440(void);
void func_E809(void);
void func_E845(void);
void func_E87F(void);
void func_E856(void);
void func_E859(void);
void func_E80B(void);
void func_E810(void);
void func_E864(void);
void func_E823(void);
void func_E847(void);
void func_E860(void);
void func_E821(void);
void func_E836(void);
void func_E843(void);
void func_E83B(void);
void func_E839(void);
void func_E849(void);
void func_E828(void);
void func_E838(void);
void func_E819(void);
void func_E826(void);
void func_E832(void);
void func_E86A(void);
void func_E81D(void);
void func_E812(void);
void func_C850(void);
void func_F819(void);
void func_F554(void);
void func_F556(void);
void func_D04D(void);
void func_D04F(void);
void func_CE48(void);
void func_C118(void);
void func_C103(void);
void func_C105(void);
void func_C24D(void);
void func_C250(void);
void func_C80C(void);
void func_F9FE(void);
void func_FA20(void);
void func_F5F8(void);
void func_AF7D_b3(void);
void func_A01F_b3(void);
void func_A088_b3(void);
void func_AB9E_b3(void);
void func_A8A2_b3(void);
void func_A2C1_b3(void);
void func_A1AD_b3(void);
void func_A1BE_b3(void);
void func_A1EC_b3(void);
void func_ABAB_b3(void);
void func_A22C_b3(void);
void func_A9A1_b3(void);
void func_AA06_b3(void);
void func_AA0C_b3(void);
void func_AC92_b3(void);
void func_ACBB_b3(void);
void func_ADE0_b3(void);
void func_ADF6_b3(void);
void func_ADC6_b3(void);
void func_AD23_b3(void);
void func_AD8C_b3(void);
void func_AA51_b3(void);
void func_AEC6_b3(void);
void func_AF36_b3(void);
void func_AB74_b3(void);
void func_AB88_b3(void);
void func_AB83_b3(void);
void func_A676_b3(void);
void func_A339_b3(void);
void func_A37A_b3(void);
void func_A366_b3(void);
void func_A379_b3(void);
void func_AF6D_b3(void);
void func_A1CA_b3(void);
void func_A1DB_b3(void);
void func_A1D8_b3(void);
void func_A20D_b3(void);
void func_A870_b3(void);
void func_A2E7_b3(void);
void func_AE68_b3(void);
void func_A565_b3(void);
void func_A591_b3(void);
void func_A5E5_b3(void);
void func_A645_b3(void);
void func_A609_b3(void);
void func_AE59_b3(void);
void func_A820_b3(void);
void func_A8DF_b3(void);
void func_A87B_b3(void);
void func_A8CC_b3(void);
void func_A8A8_b3(void);
void func_A882_b3(void);
void func_E65A(void);
void func_E660(void);
void func_E661(void);
void func_E65C(void);
void func_E65E(void);
void func_E460(void);
void func_E5A3(void);
void func_F5DA(void);
void func_F61C(void);
void func_E286(void);
void func_E292(void);
void func_E2B9(void);
void func_E28E(void);
void func_E2CF(void);
void func_E2EF(void);
void func_E304(void);
void func_E2BF(void);
void func_E2C0(void);
void func_E300(void);
void func_E2A2(void);
void func_E2A3(void);
void func_E2B7(void);
void func_E2E6(void);
void func_E2DC(void);
void func_E2E0(void);
void func_E2E4(void);
void func_E2E8(void);
void func_E288(void);
void func_E2A5(void);
void func_E2FF(void);
void func_E294(void);
void func_E298(void);
void func_E302(void);
void func_E306(void);
void func_E2AE(void);
void func_E2E2(void);
void func_E308(void);
void func_E2EA(void);
void func_E31B(void);
void func_E30D(void);
void func_E309(void);
void func_E313(void);
void func_E30F(void);
void func_E315(void);
void func_E319(void);
void func_E30B(void);
void func_E317(void);
void func_E2D1(void);
void func_F646(void);
void func_E476(void);
void func_E47C(void);
void func_E482(void);
void func_E5AF(void);
void func_E5B5(void);
void func_E5B1(void);
void func_F6A6(void);
void func_DEC8(void);
void func_E14C(void);
void func_E0E8(void);
void func_E0AA(void);
void func_E020(void);
void func_E05D(void);
void func_E02A(void);
void func_E0CA(void);
void func_DF2A(void);
void func_E004(void);
void func_E087(void);
void func_E088(void);
void func_DEF0(void);
void func_DEF1(void);
void func_E1BA(void);
void func_DF5A(void);
void func_E048(void);
void func_DFF1(void);
void func_E0EA(void);
void func_E120(void);
void func_E0AD(void);
void func_DFC9(void);
void func_E08E(void);
void func_E0A0(void);
void func_E0A2(void);
void func_DEF8(void);
void func_DF0F(void);
void func_E0FF(void);
void func_E039(void);
void func_DFC0(void);
void func_E00A(void);
void func_DFB4(void);
void func_E0FC(void);
void func_E0FD(void);
void func_E180(void);
void func_E08C(void);
void func_E0E1(void);
void func_DF21(void);
void func_DF43(void);
void func_E0BF(void);
void func_E127(void);
void func_E002(void);
void func_DFBE(void);
void func_DF3C(void);
void func_E00E(void);
void func_E10D(void);
void func_DFE4(void);
void func_E19A(void);
void func_DFDE(void);
void func_E0DF(void);
void func_E0B2(void);
void func_E1E1(void);
void func_E1B0(void);
void func_E0B6(void);
void func_E1B8(void);
void func_DEDA(void);
void func_E1D2(void);
void func_E1DC(void);
void func_E1E3(void);
void func_E0E3(void);
void func_DEDC(void);
void func_E1D0(void);
void func_DF5E(void);
void func_DED9(void);
void func_DFB0(void);
void func_DFDC(void);
void func_E090(void);
void func_E008(void);
void func_E03B(void);
void func_E04C(void);
void func_DF6E(void);
void func_E0F4(void);
void func_DF4C(void);
void func_E185(void);
void func_E1A5(void);
void func_DFC5(void);
void func_DFA5(void);
void func_E0C5(void);
void func_E11E(void);
void func_E09C(void);
void func_DF0E(void);
void func_E02E(void);
void func_E10A(void);
void func_E10C(void);
void func_DF0A(void);
void func_E103(void);
void func_E006(void);
void func_DFA3(void);
void func_E018(void);
void func_E1D4(void);
void func_E028(void);
void func_E107(void);
void func_DFFF(void);
void func_E091(void);
void func_E16A(void);
void func_DF57(void);
void func_E057(void);
void func_E154(void);
void func_E0DD(void);
void func_DFE0(void);
void func_E1C4(void);
void func_E1C6(void);
void func_E1D8(void);
void func_DF48(void);
void func_E0D5(void);
void func_E05B(void);
void func_E066(void);
void func_E17C(void);
void func_E014(void);
void func_E00C(void);
void func_E0D0(void);
void func_E198(void);
void func_DF03(void);
void func_E0FA(void);
void func_DFA9(void);
void func_E0C8(void);
void func_E1A9(void);
void func_E032(void);
void func_E030(void);
void func_E097(void);
void func_E1E9(void);
void func_E099(void);
void func_E010(void);
void func_E101(void);
void func_E137(void);
void func_E149(void);
void func_E1C0(void);
void func_E081(void);
void func_DEE8(void);
void func_E0EC(void);
void func_E147(void);
void func_E0A4(void);
void func_E024(void);
void func_E0B4(void);
void func_E083(void);
void func_E040(void);
void func_E0A8(void);
void func_E0B8(void);
void func_E034(void);
void func_E085(void);
void func_E022(void);
void func_E01B(void);
void func_E143(void);
void func_E0B0(void);
void func_E036(void);
void func_E026(void);
void func_E043(void);
void func_E0A6(void);
void func_E129(void);
void func_E12B(void);
void func_E17E(void);
void func_DF70(void);
void func_DF7E(void);
void func_E196(void);
void func_DF2C(void);
void func_E455(void);
void func_E45B(void);
void func_CDE0(void);
void func_CE04(void);
void func_BA4C_b0(void);
void func_BA4C_b1(void);
void func_BA4C_b3(void);
void func_BA4C_b4(void);
void func_BA4C_b5(void);
void func_BA40_b0(void);
void func_BA40_b1(void);
void func_BA40_b3(void);
void func_BA40_b4(void);
void func_BA40_b5(void);
void func_CF55(void);
void func_CF96(void);
void func_CF6B(void);
void func_D02E(void);
void func_E5B8(void);
void func_E7A5(void);
void func_E7F4(void);
void func_E7F5(void);
void func_E7ED(void);
void func_E7AD(void);
void func_E7EC(void);
void func_E7E8(void);
void func_E7B9(void);
void func_E7E2(void);
void func_E7C9(void);
void func_E7C0(void);
void func_E7F3(void);
void func_E7BB(void);
void func_E7FC(void);
void func_E7A9(void);
void func_A82B_b3(void);
void func_A656_b3(void);
void func_A7ED_b3(void);
void func_A7CA_b3(void);
void func_A749_b3(void);
void func_A762_b3(void);
void func_A77C_b3(void);
void func_A79C_b3(void);
void func_9934_b4(void);
void func_999A_b4(void);
void func_9798_b6(void);
void func_8422_b6(void);
void func_8384_b6(void);
void func_9682_b6(void);
void func_B682_b6(void);
void func_C9CC(void);
void func_CA35(void);
void func_CA3D(void);
void func_CA3E(void);
void func_CA42(void);
void func_E990(void);
void func_D3FC(void);
void func_9B7B_b4(void);
void func_D656(void);
void func_D87C(void);
void func_D8D0(void);
void func_D8E0(void);
void func_D8B0(void);
void func_D8A7(void);
void func_D8A2(void);
void func_D8BD(void);
void func_D8A4(void);
void func_D8C6(void);
void func_D8D2(void);
void func_D884(void);
void func_D889(void);
void func_D80B(void);
void func_D8C4(void);
void func_D85C(void);
void func_D695(void);
void func_D74B(void);
void func_D782(void);
void func_D750(void);
void func_D6B3(void);
void func_92DB_b0(void);
void func_C407(void);
void func_E0A3(void);
void func_A0EF_b6(void);
void func_80EF_b6(void);
void func_E019(void);
void func_DAEE(void);
void func_E6C5(void);
void func_DE81(void);
void func_D907(void);
void func_D065(void);
void func_CF94(void);
void func_BB94_b0(void);
void func_C02D(void);
void func_C05A(void);
void func_BFA3_b2(void);
void func_EB20(void);
void func_E0A1(void);
void func_C22F(void);
void func_FE5E(void);
void func_E6D6(void);
void func_E6D8(void);
void func_E6E1(void);
void func_E6E9(void);
void func_E6E5(void);
void func_E6E3(void);
void func_E31F(void);
void func_E325(void);
void func_E32D(void);
void func_E34C(void);
void func_E343(void);
void func_E341(void);
void func_E350(void);
void func_E329(void);
void func_E332(void);
void func_E344(void);
void func_E336(void);
void func_E327(void);
void func_E322(void);
void func_E346(void);
void func_E348(void);
void func_E331(void);
void func_E338(void);
void func_E334(void);
void func_E351(void);
void func_E38E(void);
void func_E38C(void);
void func_E368(void);
void func_E394(void);
void func_E361(void);
void func_E380(void);
void func_E383(void);
void func_E385(void);
void func_E382(void);
void func_E369(void);
void func_E3AD(void);
void func_E3AF(void);
void func_E3B4(void);
void func_E3B5(void);
void func_E3D0(void);
void func_E3F5(void);
void func_E3F7(void);
void func_E3F3(void);
void func_E3E1(void);
void func_E3C9(void);
void func_E3E4(void);
void func_E403(void);
void func_E3BD(void);
void func_E40C(void);
void func_E407(void);
void func_E40B(void);
void func_E40F(void);
void func_E3EC(void);
void func_E3D6(void);
void func_E3EA(void);
void func_E3FF(void);
void func_E3F0(void);
void func_E3B7(void);
void func_E3B9(void);
void func_E3BA(void);
void func_E3E8(void);
void func_E3BF(void);
void func_E3DC(void);
void func_E6EA(void);
void func_E6EE(void);
void func_E6F4(void);
void func_E6FC(void);
void func_E6EC(void);
void func_E702(void);
void func_E6F6(void);
void func_E71C(void);
void func_E720(void);
void func_E72E(void);
void func_E732(void);
void func_E734(void);
void func_E73A(void);
void func_E750(void);
void func_E756(void);
void func_E74C(void);
void func_E795(void);
void func_E78E(void);
void func_E76B(void);
void func_E41E(void);
void func_E427(void);
void func_E44A(void);
void func_E44C(void);
void func_E452(void);
void func_E46B(void);
void func_E46D(void);
void func_E485(void);
void func_E486(void);
void func_E497(void);
void func_E48F(void);
void func_E498(void);
void func_E493(void);
void func_E49D(void);
void func_E4D0(void);
void func_E4A1(void);
void func_E4A4(void);
void func_E4C0(void);
void func_E4C4(void);
void func_E4A6(void);
void func_E4AE(void);
void func_E4C2(void);
void func_E4DD(void);
void func_E4F1(void);
void func_E4EB(void);
void func_E4E1(void);
void func_E4E3(void);
void func_E4E9(void);
void func_E4E5(void);
void func_E4FE(void);
void func_E500(void);
void func_E507(void);
void func_E520(void);
void func_E50D(void);
void func_E502(void);
void func_E503(void);
void func_E505(void);
void func_E526(void);
void func_E527(void);
void func_E530(void);
void func_E539(void);
void func_E53D(void);
void func_E54C(void);
void func_E549(void);
void func_E543(void);
void func_E552(void);
void func_E547(void);
void func_E558(void);
void func_E562(void);
void func_E584(void);
void func_E583(void);
void func_E56C(void);
void func_E586(void);
void func_E595(void);
void func_E5A5(void);
void func_E214(void);
void func_E273(void);
void func_E244(void);
void func_E24B(void);
void func_E243(void);
void func_E225(void);
void func_E222(void);
void func_E220(void);
void func_E232(void);
void func_E247(void);
void func_E267(void);
void func_E26C(void);
void func_E276(void);
void func_E257(void);
void func_E21D(void);
void func_E237(void);
void func_E23F(void);
void func_E239(void);
void func_E242(void);
void func_E22B(void);
void func_E234(void);
void func_E7FD(void);
void func_E805(void);
void func_E801(void);
void func_E804(void);
void func_E803(void);
void func_E808(void);
void func_E5D4(void);
void func_E5D5(void);
void func_E5F0(void);
void func_E5E5(void);
void func_E5E3(void);
void func_E5E8(void);
void func_E5F3(void);
void func_E6CD(void);
void func_E6CF(void);
void func_E5F8(void);
void func_E603(void);
void func_E606(void);
void func_E601(void);
void func_E60D(void);
void func_E60F(void);
void func_E614(void);
void func_E617(void);
void func_E608(void);
void func_E60A(void);
void func_E5FF(void);
void func_E618(void);
void func_E621(void);
void func_E62A(void);
void func_E62B(void);
void func_E61D(void);
void func_E61F(void);
void func_E62F(void);
void func_E630(void);
void func_E634(void);
void func_E647(void);
void func_E640(void);
void func_E6BC(void);
void func_E6BF(void);
void func_E64C(void);
void func_E652(void);
void func_E430(void);
void func_E444(void);
void func_8003_b0(void);
void func_E0BA(void);
void func_9ADA_b4(void);
void func_9B0D_b4(void);
void func_9B2F_b4(void);
void func_9A3C_b4(void);
void func_8061_b5(void);
void func_A061_b5(void);
void func_801E_b5(void);
void func_A584_b5(void);
void func_A590_b5(void);
void func_A007_b5(void);
void func_830E_b5(void);
void func_A30E_b5(void);
void func_83D3_b5(void);
void func_A3D3_b5(void);
void func_8404_b5(void);
void func_A404_b5(void);
void func_A0AB_b5(void);
void func_8159_b5(void);
void func_815B_b5(void);
void func_815D_b5(void);
void func_8160_b5(void);
void func_A130_b5(void);
void func_8523_b5(void);
void func_8158_b5(void);
void func_815A_b5(void);
void func_815C_b5(void);
void func_815E_b5(void);
void func_E88A(void);
void func_E8A8(void);
void func_E88E(void);
void func_E8A1(void);
void func_E8B4(void);
void func_E8AC(void);
void func_E8A5(void);
void func_E898(void);
void func_E89F(void);
void func_E894(void);
void func_E8A4(void);
void func_E880(void);
void func_E882(void);
void func_E889(void);
void func_E884(void);
void func_E886(void);
void func_E83F(void);
void func_E8AA(void);
void func_EC51(void);
void func_F9ED(void);
void func_F5CA(void);
void func_A32A_b3(void);
void func_AE50_b3(void);
void func_AE3E_b3(void);
void func_ADF7_b3(void);
void func_AA8B_b3(void);
void func_ABB9_b3(void);
void func_E1DD(void);
void func_DF06(void);
void func_DF59(void);
void func_DF33(void);
void func_E051(void);
void func_E072(void);
void func_E0BD(void);
void func_E18A(void);
void func_E108(void);
void func_E192(void);
void func_E187(void);
void func_BAE5_b0(void);
void func_BB4A_b0(void);
void func_975E_b6(void);
void func_EBEC(void);
void func_9BA4_b4(void);
void func_9BB5_b4(void);
void func_D7E5(void);
void func_D7E9(void);
void func_80E9_b6(void);
void func_80A6_b6(void);
void func_DFE3(void);
void func_BB84_b0(void);
void func_C015(void);
void func_C04E(void);
void func_C05D(void);
void func_E3DA(void);
void func_E401(void);
void func_E77E(void);
void func_E61A(void);
void func_801C_b5(void);
void func_E8BD(void);
void func_E8E8(void);
void func_E8C8(void);
void func_E8CB(void);
void func_E8C1(void);
void func_E8CF(void);
void func_E8D0(void);
void func_E8D3(void);
void func_E8D4(void);
void func_E8F3(void);
void func_E8C3(void);
void func_E8E6(void);
void func_E8BF(void);
void func_E905(void);
void func_E8E0(void);
void func_E8DE(void);
void func_E8FB(void);
void func_E90B(void);
void func_E911(void);
void func_E907(void);
void func_E8E2(void);
void func_E8FD(void);
void func_E8FF(void);
void func_E8F1(void);
void func_E903(void);
void func_E901(void);
void func_E909(void);
void func_E8EC(void);
void func_E90D(void);
void func_E90F(void);
void func_F749(void);
void func_FFDF(void);
void func_AB2C_b3(void);
void func_AC8F_b3(void);
void func_ABE7_b3(void);
void func_BAD5_b0(void);
void func_9BD7_b4(void);
void func_DFAF(void);
void func_E913(void);
void func_DF36(void);
void func_EB2C(void);
void func_EB5C(void);
void func_EB46(void);
void func_EBFF(void);
void func_EAF6(void);
void func_EC87(void);
void func_EF5F(void);
void func_EC56(void);
void func_EF4B(void);
void func_EDDD(void);
void func_EF2A(void);
void func_EE6C(void);
void func_E709(void);
void func_EF42(void);
void func_E5C0(void);
void func_D9A6(void);
void func_CB4D(void);
void func_CCCC(void);
void func_C521(void);
void func_C230(void);
void func_C84C(void);
void func_C84D(void);
void func_DEC9(void);
void func_FE5F(void);
void func_C0B2(void);
void func_D64D(void);
void func_E6D7(void);
void func_E14D(void);
void func_E320(void);
void func_E352(void);
void func_E396(void);
void func_DC4D(void);
void func_E3DD(void);
void func_EA4C(void);
void func_EA4D(void);
void func_E6EB(void);
void func_E71D(void);
void func_E73B(void);
void func_E7A6(void);
void func_E41F(void);
void func_E428(void);
void func_E44B(void);
void func_E456(void);
void func_E461(void);
void func_E46C(void);
void func_E477(void);
void func_FE8E(void);
void func_E4C3(void);
void func_DD4C(void);
void func_E4DE(void);
void func_FE4C(void);
void func_E531(void);
void func_E53E(void);
void func_E588(void);
void func_E596(void);
void func_E5B0(void);
void func_E215(void);
void func_FD4D(void);
void func_E7FE(void);
void func_D44D(void);
void func_E6CE(void);
void func_F84C(void);
void func_E5F9(void);
void func_E619(void);
void func_E635(void);
void func_E65B(void);
void func_E6BD(void);
void func_E64D(void);
void func_E431(void);
void func_E287(void);
void func_E6C3(void);
void func_F920(void);
void func_F921(void);
void func_FE05(void);
void func_FC01(void);
void func_C470(void);
void func_C906(void);
void func_C4B5(void);
void func_C918(void);
void func_C0CA(void);
void func_C916(void);
void func_D070(void);
void func_D071(void);
void func_F68D(void);
void func_F68E(void);
void func_D001(void);
void func_D002(void);
void func_E0E9(void);
void func_D006(void);
void func_D007(void);
void func_F9D1(void);
void func_C41F(void);
void func_FCAD(void);
void func_F05D(void);
void func_F05E(void);
void func_FC8E(void);
void func_FC8F(void);
void func_C44A(void);
void func_C44B(void);
void func_CBBD(void);
void func_CFCB(void);
void func_CFCC(void);
void func_C4FB(void);
void func_C54C(void);
void func_C530(void);
void func_C708(void);
void func_C727(void);
void func_E917(void);
void func_CD01(void);
void func_FBAD(void);
void func_FBAE(void);
void func_D1B1(void);
void func_C694(void);
void func_D459(void);
void func_D573(void);
void func_D645(void);
void func_C93C(void);
void func_D004(void);
void func_C904(void);
void func_CC3D(void);
void func_C94F(void);
void func_F006(void);
void func_CA49(void);
void func_CC90(void);
void func_C421(void);
void func_DB34(void);
void func_F020(void);
void func_F021(void);
void func_DCF1(void);
void func_DE75(void);
void func_E620(void);
void func_D8E7(void);
void func_F621(void);
void func_D4F7(void);
void func_CFD8(void);
void func_D18E(void);
void func_F011(void);
void func_D121(void);
void func_CDD2(void);
void func_C514(void);
void func_F038(void);
void func_F039(void);
void func_C58B(void);
void func_C620(void);
void func_C2C7(void);
void func_FD29(void);
void func_C1C9(void);
void func_C43F(void);
void func_C5C5(void);
void func_D05F(void);
void func_E021(void);
void func_C4E1(void);
void func_E05E(void);
void func_D00B(void);
void func_E602(void);
void func_FDAD(void);
void func_FDAE(void);
void func_FD8E(void);
void func_C456(void);
void func_D00C(void);
void func_D012(void);
void func_C159(void);
void func_F03F(void);
void func_F040(void);
void func_FB8D(void);
void func_FB8E(void);
void func_CE08(void);
void func_C960(void);
void func_D737(void);
void func_C606(void);
void func_C607(void);
void func_C11F(void);
void func_FAAD(void);
void func_FAAE(void);
void func_F58D(void);
void func_F58E(void);
void func_D620(void);
void func_D621(void);
void func_C5D7(void);
void func_C65C(void);
void func_F036(void);
void func_FA8D(void);
void func_FA8E(void);
void func_FC1C(void);
void func_F01F(void);
void func_C300(void);
void func_C463(void);
void func_D009(void);
void func_C64D(void);
void func_C0C7(void);
void func_C12F(void);
void func_C0A9(void);
void func_C0AA(void);
void func_FFAA(void);
void func_E87E(void);
void func_D01A(void);
void func_FFAF(void);
void func_CEA5(void);
void func_E806(void);
void func_D0E8(void);
void func_F7D0(void);
void func_F7D1(void);
void func_F7AD(void);
void func_F7AE(void);
void func_F510(void);
void func_F511(void);
void func_C82A(void);
void func_CA04(void);
void func_F710(void);
void func_F711(void);
void func_EFBD(void);
void func_DDEF(void);
void func_DDF0(void);
void func_C399(void);
void func_C39A(void);
void func_F0BD(void);
void func_F0BE(void);
void func_DDF1(void);
void func_C499(void);
void func_F1BD(void);
void func_F1BE(void);
void func_DDF2(void);
void func_F2BD(void);
void func_F2BE(void);
void func_DDF3(void);
void func_E800(void);
void func_E8E9(void);
void func_E9D1(void);
void func_C760(void);
void func_CF19(void);
void func_C57B(void);
void func_C57C(void);
void func_C57D(void);
void func_C8C8(void);
void func_C0C8(void);
void func_D010(void);
void func_DBD0(void);
void func_FA10(void);
void func_F050(void);
void func_F051(void);
void func_C951(void);
void func_EED0(void);
void func_EED1(void);
void func_EE0F(void);
void func_EE10(void);
void func_F5EE(void);
void func_F5EF(void);
void func_CDC7(void);
void func_F5CD(void);
void func_F5CE(void);
void func_C947(void);
void func_E648(void);
void func_C946(void);
void func_E646(void);
void func_C86B(void);
void func_C86C(void);
void func_C801(void);
void func_F6D0(void);
void func_F6D1(void);
void func_C86E(void);
void func_F05B(void);
void func_F05C(void);
void func_C6C9(void);
void func_F5D0(void);
void func_C807(void);
void func_E8C9(void);
void func_E807(void);
void func_F3D1(void);
void func_E6E8(void);
void func_C6E8(void);
void func_C6E9(void);
void func_E6F3(void);
void func_E605(void);
void func_C908(void);
void func_F002(void);
void func_F003(void);
void func_E8CA(void);
void func_F008(void);
void func_F009(void);
void func_C2F1(void);
void func_C819(void);
void func_E4D1(void);
void func_E6E4(void);
void func_E600(void);
void func_C738(void);
void func_C6C7(void);
void func_C9B5(void);
void func_C9C9(void);
void func_F001(void);
void func_C940(void);
void func_C809(void);
void func_E538(void);
void func_F521(void);
void func_C974(void);
void func_CC4C(void);
void func_C9CD(void);
void func_F00E(void);
void func_E939(void);
void func_F0AA(void);
void func_F0AB(void);
void func_E60C(void);
void func_CA00(void);
void func_D0CB(void);
void func_F4D0(void);
void func_F4D1(void);
void func_C602(void);
void func_ED38(void);
void func_ED39(void);
void func_CA36(void);
void func_FE82(void);
void func_C870(void);
void func_C95C(void);
void func_F000(void);
void func_C80D(void);
void func_CA5A(void);
void func_CA7B(void);
void func_C952(void);
void func_E8C0(void);
void func_C08D(void);
void func_C08E(void);
void func_E029(void);
void func_C5E0(void);
void func_D033(void);
void func_CC61(void);
void func_FEA6(void);
void func_FEA7(void);
void func_C6BD(void);
void func_C6BE(void);
void func_FEC6(void);
void func_E6BE(void);
void func_FEE6(void);
void func_E85A(void);
void func_C982(void);
void func_F061(void);
void func_F062(void);
void func_F063(void);
void func_F810(void);
void func_F811(void);
void func_CD3E(void);
void func_E38D(void);
void func_F007(void);
void func_EBA9(void);
void func_EBAA(void);
void func_CD9A(void);
void func_CD9B(void);
void func_CEB4(void);
void func_C954(void);
void func_C90A(void);
void func_FA30(void);
void func_EAA5(void);
void func_EAA6(void);
void func_CD6A(void);
void func_CF3A(void);
void func_CA26(void);
void func_E6A9(void);
void func_EA8D(void);
void func_EA8E(void);
void func_C4A9(void);
void func_EAA9(void);
void func_EAAA(void);
void func_CFAC(void);
void func_CFAE(void);
void func_C902(void);
void func_D029(void);
void func_F03D(void);
void func_D0AB(void);
void func_F004(void);
void func_C931(void);
void func_DD09(void);
void func_CF9F(void);
void func_F0CF(void);
void func_F0D0(void);
void func_D0CF(void);
void func_CFA5(void);
void func_CFA6(void);
void func_CF6C(void);
void func_FBF0(void);
void func_FBF1(void);
void func_CF95(void);
void func_E6D0(void);
void func_C74F(void);
void func_C786(void);
void func_C7BE(void);
void func_C320(void);
void func_CFC3(void);
void func_CFC4(void);
void func_FB29(void);
void func_FB2A(void);
void func_D0FC(void);
void func_F0A9(void);
void func_D0C9(void);
void func_FFCA(void);
void func_D0FF(void);
void func_D179(void);
void func_F8AA(void);
void func_D0B1(void);
void func_E604(void);
void func_E0C9(void);
void func_F44C(void);
void func_F44D(void);
void func_D0F5(void);
void func_D101(void);
void func_E60E(void);
void func_D00E(void);
void func_D0A0(void);
void func_E610(void);
void func_C609(void);
void func_D09A(void);
void func_D06A(void);
void func_F0EA(void);
void func_F0EB(void);
void func_E651(void);
void func_F00D(void);
void func_D02F(void);
void func_C805(void);
void func_C848(void);
void func_D066(void);
void func_C949(void);
void func_F092(void);
void func_F093(void);
void func_D452(void);
void func_D084(void);
void func_D085(void);
void func_D19C(void);
void func_D19D(void);
void func_D19E(void);
void func_F92A(void);
void func_F0F9(void);
void func_F0FA(void);
void func_C02A(void);
void func_F0C0(void);
void func_F0C1(void);
void func_F0D4(void);
void func_D357(void);
void func_D054(void);
void func_F054(void);
void func_F055(void);
void func_E61C(void);
void func_D32A(void);
void func_F081(void);
void func_EEC9(void);
void func_EECA(void);
void func_EEA9(void);
void func_EEAA(void);
void func_D07D(void);
void func_E67D(void);
void func_D41B(void);
void func_E501(void);
void func_F0FF(void);
void func_F100(void);
void func_C61D(void);
void func_FC4C(void);
void func_D3FD(void);
void func_F070(void);
void func_F05F(void);
void func_F07D(void);
void func_F07E(void);
void func_C67D(void);
void func_C601(void);
void func_F8D1(void);
void func_E80A(void);
void func_F082(void);
void func_F083(void);
void func_F0C9(void);
void func_F0CA(void);
void func_F084(void);
void func_D089(void);
void func_D49E(void);
void func_E61E(void);
void func_F02A(void);
void func_F1B0(void);
void func_F1B1(void);
void func_E94D(void);
void func_D4EA(void);
void func_EAF0(void);
void func_EAF1(void);
void func_D52B(void);
void func_D08F(void);
void func_F07F(void);
void func_C829(void);
void func_EF29(void);
void func_D078(void);
void func_CC86(void);
void func_DF29(void);
void func_EE01(void);
void func_D7BC(void);
void func_F74C(void);
void func_F74D(void);
void func_D6F8(void);
void func_C9D6(void);
void func_D6E7(void);
void func_FD38(void);
void func_FD39(void);
void func_E005(void);
void func_D2D1(void);
void func_F028(void);
void func_D042(void);
void func_D696(void);
void func_D79B(void);
void func_D79C(void);
void func_C685(void);
void func_D657(void);
void func_D87D(void);
void func_D80C(void);
void func_C44C(void);
void func_D8C5(void);
void func_D878(void);
void func_D879(void);
void func_D85D(void);
void func_D874(void);
void func_D875(void);
void func_E688(void);
void func_E54D(void);
void func_D7EA(void);
void func_F0FD(void);
void func_F0FE(void);
void func_D5C5(void);
void func_F08F(void);
void func_F090(void);
void func_F14C(void);
void func_F14D(void);
void func_D9F2(void);
void func_F0D2(void);
void func_C548(void);
void func_C549(void);
void func_F138(void);
void func_F139(void);
void func_C551(void);
void func_D043(void);
void func_DA96(void);
void func_C9E5(void);
void func_C220(void);
void func_D965(void);
void func_DA33(void);
void func_D98C(void);
void func_C651(void);
void func_F6AD(void);
void func_F6AE(void);
void func_C604(void);
void func_D08B(void);
void func_F690(void);
void func_F691(void);
void func_CAF6(void);
void func_F02E(void);
void func_F02F(void);
void func_F02B(void);
void func_F02C(void);
void func_F02D(void);
void func_D02D(void);
void func_D03F(void);
void func_F94C(void);
void func_F94D(void);
void func_DB76(void);
void func_C0E3(void);
void func_C0E4(void);
void func_C006(void);
void func_C007(void);
void func_C3BE(void);
void func_CA86(void);
void func_C9F1(void);
void func_CB85(void);
void func_DE6E(void);
void func_E1B9(void);
void func_DDE1(void);
void func_DDE2(void);
void func_CDDE(void);
void func_E2BA(void);
void func_DDE3(void);
void func_F095(void);
void func_F096(void);
void func_DCA2(void);
void func_C8DD(void);
void func_CBA5(void);
void func_C98B(void);
void func_DCAD(void);
void func_ECBE(void);
void func_DCEC(void);
void func_DCED(void);
void func_C04D(void);
void func_DDB1(void);
void func_D3A6(void);
void func_C9D4(void);
void func_DD55(void);
void func_D551(void);
void func_DD71(void);
void func_F03A(void);
void func_E050(void);
void func_DD02(void);
void func_DCFA(void);
void func_F56D(void);
void func_F56E(void);
void func_DDF5(void);
void func_FDDD(void);
void func_DDFD(void);
void func_DE35(void);
void func_E1AC(void);
void func_DEA9(void);
void func_EA2C(void);
void func_EA2D(void);
void func_EA2E(void);
void func_E1DE(void);
void func_DF07(void);
void func_DF34(void);
void func_F4BD(void);
void func_F4BE(void);
void func_E1F4(void);
void func_E1F5(void);
void func_F0E1(void);
void func_C851(void);
void func_C91F(void);
void func_FDA9(void);
void func_C8FD(void);
void func_E073(void);
void func_CF65(void);
void func_E0BE(void);
void func_E18B(void);
void func_E802(void);
void func_E109(void);
void func_E204(void);
void func_E205(void);
void func_D0E3(void);
void func_F106(void);
void func_F107(void);
void func_E193(void);
void func_C9E2(void);
void func_F729(void);
void func_F72A(void);
void func_F0A1(void);
void func_D286(void);
void func_DE82(void);
void func_F012(void);
void func_D016(void);
void func_F0A8(void);
void func_F0FB(void);
void func_CF84(void);
void func_E293(void);
void func_D186(void);
void func_F110(void);
void func_F111(void);
void func_C50B(void);
void func_EB10(void);
void func_EB11(void);
void func_C80B(void);
void func_EDD0(void);
void func_EDD1(void);
void func_F0D1(void);
void func_DA4D(void);
void func_E3DB(void);
void func_D0DF(void);
void func_D0EF(void);
void func_D0A6(void);
void func_D0ED(void);
void func_D1A6(void);
void func_D1EE(void);
void func_D01C(void);
void func_EC30(void);
void func_EC31(void);
void func_FE21(void);
void func_E61B(void);
void func_F6CA(void);
void func_F6CB(void);
void func_FCE0(void);
void func_D0FD(void);
void func_EFD0(void);
void func_E6C6(void);
void func_C88B(void);
void func_F09E(void);
void func_F09F(void);
void func_F7C9(void);
void func_F7CA(void);
void func_C0BD(void);
void func_C09D(void);
void func_C09E(void);
void func_CE9D(void);
void func_D29E(void);
void func_C29D(void);
void func_C49D(void);
void func_C49E(void);
void func_E77F(void);
void func_EA1E(void);
void func_C9A4(void);
void func_C57F(void);
void func_C580(void);
void func_E88B(void);
void func_C822(void);
void func_C823(void);
void func_E840(void);
void func_C50D(void);
void func_E8AB(void);
void func_ED10(void);
void func_C0EE(void);
void func_FFC1(void);
void func_C060(void);
void func_C061(void);
void func_C504(void);
void func_C505(void);
void func_F0A2(void);
void func_E931(void);
void func_C0A2(void);
void func_C0A3(void);
void func_E3D1(void);
void func_DFF0(void);
void func_E914(void);
void func_EA02(void);
void func_E98A(void);
void func_C543(void);
void func_C53F(void);
void func_C540(void);
void func_E615(void);
void func_E991(void);
void func_E6A2(void);
void func_EFF1(void);
void func_CA2F(void);
void func_EC1C(void);
void func_EC1D(void);
void func_EC9D(void);
void func_EC9E(void);
void func_EA88(void);
void func_EA89(void);
void func_CAEA(void);
void func_EACA(void);
void func_EACB(void);
void func_E0EB(void);
void func_EAE0(void);
void func_EAE1(void);
void func_EB78(void);
void func_EB7B(void);
void func_EB7C(void);
void func_D5EB(void);
void func_ECD5(void);
void func_ECD6(void);
void func_EDB7(void);
void func_EDB8(void);
void func_EB92(void);
void func_EE0E(void);
void func_EF6D(void);
void func_F00C(void);
void func_EF9D(void);
void func_F042(void);
void func_F043(void);
void func_CEF0(void);
void func_F0CE(void);
void func_F293(void);
void func_D2F4(void);
void func_F3D2(void);
void func_F37C(void);
void func_F3F4(void);
void func_F4AC(void);
void func_F4AD(void);
void func_E3F4(void);
void func_F4E3(void);
void func_F4E4(void);
void func_F4E7(void);
void func_F4E8(void);
void func_F7F4(void);
void func_F7F5(void);
void func_F4F7(void);
void func_F4F8(void);
void func_FAF5(void);
void func_EDFA(void);
void func_EDFB(void);
void func_F1B8(void);
void func_F1B9(void);
void func_EF7A(void);
void func_EF90(void);
void func_F750(void);
void func_F776(void);
void func_EBF7(void);
void func_EBF8(void);
void func_EEEB(void);
void func_EEEC(void);
void func_F3EE(void);
void func_F3EF(void);
void func_EEF3(void);
void func_EEF4(void);
void func_EEF5(void);
void func_F7EF(void);
void func_EEF7(void);
void func_FEF8(void);
void func_F2FE(void);
void func_F302(void);
void func_F304(void);
void func_F561(void);
void func_F562(void);
void func_F25C(void);
void func_F4D2(void);
void func_F4D3(void);
void func_EA8C(void);
void func_EA95(void);
void func_EA96(void);
void func_F6E5(void);
void func_F6E6(void);
void func_EAF7(void);
void func_F737(void);
void func_F738(void);
void func_EC57(void);
void func_FBEC(void);
void func_EAFB(void);
void func_EAFC(void);
void func_EB1B(void);
void func_EB1C(void);
void func_EB4B(void);
void func_EB4C(void);
void func_EB66(void);
void func_EB67(void);
void func_F721(void);
void func_F6F7(void);
void func_F6F8(void);
void func_EB25(void);
void func_EB26(void);
void func_EB55(void);
void func_EB56(void);
void func_F74A(void);
void func_CD21(void);
void func_EB2D(void);
void func_FFA3(void);
void func_E121(void);
void func_EB5D(void);
void func_EB47(void);
void func_EB7F(void);
void func_EB80(void);
void func_F713(void);
void func_F714(void);
void func_EB88(void);
void func_EB89(void);
void func_EB9F(void);
void func_EBA0(void);
void func_EBB2(void);
void func_EBB3(void);
void func_EBB9(void);
void func_EBBA(void);
void func_EC60(void);
void func_EC61(void);
void func_EBF4(void);
void func_EC00(void);
void func_C0AD(void);
void func_C0AE(void);
void func_E0AE(void);
void func_C2AE(void);
void func_DFCA(void);
void func_E08D(void);
void func_EE8D(void);
void func_EE8E(void);
void func_DEAD(void);
void func_DAED(void);
void func_EFA5(void);
void func_EC19(void);
void func_C28E(void);
void func_EC1A(void);
void func_EC1B(void);
void func_C48D(void);
void func_CE8E(void);
void func_FFE6(void);
void func_EC2A(void);
void func_EC2B(void);
void func_EC46(void);
void func_EC47(void);
void func_EC40(void);
void func_EC41(void);
void func_EC74(void);
void func_EC75(void);
void func_EC7E(void);
void func_EC7F(void);
void func_F64C(void);
void func_F64D(void);
void func_EC88(void);
void func_EF60(void);
void func_ECA1(void);
void func_ECA2(void);
void func_ECA9(void);
void func_ECAA(void);
void func_C26E(void);
void func_E28D(void);
void func_C4AE(void);
void func_E48D(void);
void func_E48E(void);
void func_E9DE(void);
void func_ECE9(void);
void func_ECEA(void);
void func_F8F7(void);
void func_ECF8(void);
void func_ECF9(void);
void func_ED02(void);
void func_ED03(void);
void func_EDAC(void);
void func_EDAD(void);
void func_F71B(void);
void func_ED43(void);
void func_ED44(void);
void func_ED64(void);
void func_ED65(void);
void func_EDA1(void);
void func_EDA2(void);
void func_C91E(void);
void func_C921(void);
void func_EF4C(void);
void func_EDBF(void);
void func_EDC0(void);
void func_C8EE(void);
void func_EDC8(void);
void func_EDC9(void);
void func_E7EE(void);
void func_EDE7(void);
void func_EDE8(void);
void func_F746(void);
void func_F747(void);
void func_FD20(void);
void func_FD21(void);
void func_EE04(void);
void func_EE05(void);
void func_C8EF(void);
void func_EDDE(void);
void func_EE1C(void);
void func_EE1D(void);
void func_EE34(void);
void func_EE35(void);
void func_EE4D(void);
void func_EE4E(void);
void func_EE5B(void);
void func_EE5C(void);
void func_EF2B(void);
void func_D0F1(void);
void func_F8A2(void);
void func_ECA0(void);
void func_F5A2(void);
void func_F5A3(void);
void func_E4A0(void);
void func_F960(void);
void func_F961(void);
void func_EEF9(void);
void func_EEFA(void);
void func_EF22(void);
void func_EEFD(void);
void func_EF01(void);
void func_EF02(void);
void func_EF05(void);
void func_E70A(void);
void func_FCCA(void);
void func_F01A(void);
void func_F01B(void);
void func_E4F0(void);
void func_D6F0(void);
void func_EF71(void);
void func_EF72(void);
void func_EF7E(void);
void func_EF7F(void);
void func_EF94(void);
void func_EF95(void);
void func_EFB3(void);
void func_EFB4(void);
void func_C2F8(void);
void func_EFC2(void);
void func_CCF8(void);
void func_EFCC(void);
void func_EFDD(void);
void func_EFDE(void);
void func_EFF8(void);
void func_EFEF(void);
void func_EFFD(void);
void func_D0A9(void);
void func_F017(void);
void func_F018(void);
void func_ECA3(void);
void func_FAA0(void);
void func_F04E(void);
void func_F04F(void);
void func_EC5B(void);
void func_EC5C(void);
void func_F067(void);
void func_C968(void);
void func_F0C5(void);
void func_F0C6(void);
void func_EC6A(void);
void func_EC6B(void);
void func_F734(void);
void func_F735(void);
void func_F0F8(void);
void func_EB00(void);
void func_EB01(void);
void func_F5AC(void);
void func_F5AD(void);
void func_F101(void);
void func_F102(void);
void func_F108(void);
void func_F132(void);
void func_C5EC(void);
void func_F19E(void);
void func_F19F(void);
void func_F149(void);
void func_F14A(void);
void func_F725(void);
void func_F726(void);
void func_F181(void);
void func_F182(void);
void func_EEA0(void);
void func_EEA1(void);
void func_F6A0(void);
void func_F6A1(void);
void func_F0A3(void);
void func_FEA1(void);
void func_F172(void);
void func_F169(void);
void func_F16A(void);
void func_EE11(void);
void func_EE80(void);
void func_EE81(void);
void func_F1BA(void);
void func_F1BB(void);
void func_D5DE(void);
void func_F1D5(void);
void func_F1D6(void);
void func_EC65(void);
void func_EC66(void);
void func_E3F8(void);
void func_F1E3(void);
void func_F1E4(void);
void func_F1EB(void);
void func_F1EC(void);
void func_F3F1(void);
void func_F3F2(void);
void func_F1F3(void);
void func_F1F4(void);
void func_F23A(void);
void func_F23B(void);
void func_F257(void);
void func_F258(void);
void func_F242(void);
void func_F243(void);
void func_F55C(void);
void func_F55D(void);
void func_EEFF(void);
void func_EE06(void);
void func_EE07(void);
void func_CEFE(void);
void func_CEFF(void);
void func_D7D1(void);
void func_F200(void);
void func_F201(void);
void func_CE06(void);
void func_C2EF(void);
void func_F260(void);
void func_F261(void);
void func_F26F(void);
void func_F285(void);
void func_F286(void);
void func_F716(void);
void func_F2A3(void);
void func_F2A4(void);
void func_F2B3(void);
void func_F2B4(void);
void func_DAF3(void);
void func_F2DA(void);
void func_F2DB(void);
void func_F2EF(void);
void func_F2F0(void);
void func_F306(void);
void func_F307(void);
void func_F30A(void);
void func_F30B(void);
void func_F30E(void);
void func_F342(void);
void func_F343(void);
void func_F16D(void);
void func_F16E(void);
void func_F350(void);
void func_F351(void);
void func_F361(void);
void func_F362(void);
void func_F36D(void);
void func_F36E(void);
void func_F370(void);
void func_F371(void);
void func_EEE5(void);
void func_EEE6(void);
void func_CEE5(void);
void func_CEE6(void);
void func_F380(void);
void func_F381(void);
void func_F39C(void);
void func_F39D(void);
void func_F3B9(void);
void func_F3BA(void);
void func_F70E(void);
void func_F70F(void);
void func_F3B0(void);
void func_F3B1(void);
void func_EC52(void);
void func_D8EC(void);
void func_F3D8(void);
void func_F3D9(void);
void func_E8F4(void);
void func_F3E8(void);
void func_F3E9(void);
void func_F41B(void);
void func_F41C(void);
void func_F44E(void);
void func_F49B(void);
void func_F49C(void);
void func_F48A(void);
void func_F48B(void);
void func_F46D(void);
void func_F46E(void);
void func_FCA2(void);
void func_F4A0(void);
void func_F4A1(void);
void func_EEAD(void);
void func_EEAE(void);
void func_F09A(void);
void func_F09B(void);
void func_CEF4(void);
void func_E2EE(void);
void func_F4B4(void);
void func_F4B5(void);
void func_C9EC(void);
void func_F4C9(void);
void func_F4CA(void);
void func_DAE6(void);
void func_F4DA(void);
void func_F4DB(void);
void func_F4EE(void);
void func_F4EF(void);
void func_F4EB(void);
void func_F4EC(void);
void func_F509(void);
void func_F50A(void);
void func_F519(void);
void func_F51A(void);
void func_F530(void);
void func_F531(void);
void func_F542(void);
void func_F543(void);
void func_F54F(void);
void func_F550(void);
void func_F59D(void);
void func_F59E(void);
void func_F62C(void);
void func_F62D(void);
void func_F659(void);
void func_F65A(void);
void func_F6AF(void);
void func_D8F7(void);
void func_F6D8(void);
void func_F6D9(void);
void func_F6EA(void);
void func_F6EB(void);
void func_FBF7(void);
void func_F6FB(void);
void func_F6FC(void);
void func_F5C7(void);
void func_F5C8(void);
void func_F4ED(void);
void func_F5F4(void);
void func_F5F5(void);
void func_F5BF(void);
void func_F5C0(void);
void func_F601(void);
void func_F5F0(void);
void func_F5F1(void);
void func_CA4C(void);
void func_F624(void);
void func_F625(void);
void func_F8A0(void);
void func_F8A1(void);
void func_F647(void);
void func_D165(void);
void func_F9C9(void);
void func_F9CA(void);
void func_CD04(void);
void func_F6A7(void);
void func_F6E7(void);
void func_E277(void);
void func_E278(void);
void func_C080(void);
void func_C081(void);
void func_F756(void);
void func_F757(void);
void func_F765(void);
void func_F766(void);
void func_F794(void);
void func_F795(void);
void func_E1F7(void);
void func_E1F8(void);
void func_F7E1(void);
void func_F7E2(void);
void func_F7A9(void);
void func_F7AA(void);
void func_F7B5(void);
void func_F7B6(void);
void func_C1F8(void);
void func_F7C1(void);
void func_F7C2(void);
void func_D2F7(void);
void func_D2F8(void);
void func_F7D2(void);
void func_F7D3(void);
void func_DEF7(void);
void func_F7DE(void);
void func_F7DF(void);
void func_EFE5(void);
void func_EFE6(void);
void func_F7F0(void);
void func_DF10(void);
void func_C0DF(void);
void func_FD00(void);
void func_C000(void);
void func_C001(void);
void func_F400(void);
void func_F401(void);
void func_FFF4(void);
void func_FFF5(void);
void func_F4BB(void);
void func_F4BC(void);
void func_D42D(void);
void func_FF00(void);
void func_F7FC(void);
void func_F7FD(void);
void func_FFF7(void);
void func_FFF8(void);
void func_FFF0(void);
void func_FFF1(void);
void func_FE37(void);
void func_E100(void);
void func_FAE0(void);
void func_FAE1(void);
void func_FAFA(void);
void func_C2AF(void);
void func_FE22(void);
void func_C033(void);
void func_DDFF(void);
void func_FFDD(void);
void func_E038(void);
void func_FFE1(void);
void func_CF30(void);
void func_CF31(void);
void func_FFCF(void);
void func_FFD0(void);
void func_EFFF(void);
void func_CBEF(void);
void func_FD7E(void);
void func_F3F0(void);
void func_E000(void);
void func_E001(void);
void func_FC30(void);
void func_CF20(void);
void func_FB0D(void);
void func_F3C0(void);
void func_F3C1(void);
void func_FFFB(void);
void func_FFFC(void);
void func_F83F(void);
void func_C03F(void);
void func_C040(void);
void func_D3FF(void);
void func_C003(void);
void func_C004(void);
void func_FFC7(void);
void func_C073(void);
void func_C074(void);
void func_DFC1(void);
void func_C3E0(void);
void func_C06F(void);
void func_C070(void);
void func_C74C(void);
void func_E00B(void);
void func_F1E0(void);
void func_F1E1(void);
void func_FC33(void);
void func_F3FC(void);
void func_CCF3(void);
void func_F0CC(void);
void func_F0CD(void);
void func_F037(void);
void func_FC71(void);
void func_DFB5(void);
void func_FCDF(void);
void func_F3E3(void);
void func_C1B4(void);
void func_F0C2(void);
void func_C383(void);
void func_C142(void);
void func_C143(void);
void func_CC00(void);
void func_C309(void);
void func_C036(void);
void func_C037(void);
void func_F034(void);
void func_C3F1(void);
void func_FC0E(void);
void func_C2FD(void);
void func_C7C2(void);
void func_C00F(void);
void func_F20B(void);
void func_F20C(void);
void func_C0F2(void);
void func_EF33(void);
void func_EF34(void);
void func_F327(void);
void func_F328(void);
void func_FC83(void);
void func_C637(void);
void func_E38B(void);
void func_CD23(void);
void func_C330(void);
void func_CF0D(void);
void func_C13D(void);
void func_E08B(void);
void func_E0E0(void);
void func_EB03(void);
void func_EB04(void);
void func_C27D(void);
void func_F38D(void);
void func_C323(void);
void func_D0BD(void);
void func_CA33(void);
void func_D534(void);
void func_F4D5(void);
void func_DE6B(void);
void func_DE6C(void);
void func_C0FD(void);
void func_F40F(void);
void func_F410(void);
void func_FC2F(void);
void func_C1FF(void);
void func_FD01(void);
void func_FFB7(void);
void func_FFB8(void);
void func_F74F(void);
void func_F0FC(void);
void func_EF40(void);
void func_EF41(void);
void func_C008(void);
void func_D780(void);
void func_D781(void);
void func_CF01(void);
void func_C01F(void);
void func_C020(void);
void func_C0BF(void);
void func_C0C0(void);
void func_EDC7(void);
void func_C07F(void);
void func_E74F(void);
void func_F829(void);
void func_F82A(void);
void func_C0F4(void);
void func_F529(void);
void func_CF15(void);
void func_FC80(void);
void func_C01C(void);
void func_C01D(void);
void func_D0BF(void);
void func_F0F0(void);
void func_F0F1(void);
void func_DF20(void);
void func_F3FF(void);
void func_FFC4(void);
void func_F04D(void);
void func_C082(void);
void func_C083(void);
void func_FC10(void);
void func_C3FF(void);
void func_F4F0(void);
void func_F40B(void);
void func_F40C(void);
void func_F3F5(void);
void func_C3C0(void);
void func_C3C1(void);
void func_D0C3(void);
void func_D342(void);
void func_FFD3(void);
void func_CF7D(void);
void func_E03E(void);
void func_E03F(void);
void func_C0E1(void);
void func_F403(void);
void func_F404(void);
void func_F430(void);
void func_C3F4(void);
void func_C347(void);
void func_C348(void);
void func_FE7F(void);
void func_FE0F(void);
void func_FE10(void);
void func_DF44(void);
void func_E301(void);
void func_F434(void);
void func_F435(void);
void func_FE24(void);
void func_FE25(void);
void func_E80F(void);
void func_F603(void);
void func_D834(void);
void func_F48C(void);
void func_F0B0(void);
void func_F0B1(void);
void func_FC3E(void);
void func_F436(void);
void func_F437(void);
void func_DAE1(void);
void func_F9B6(void);
void func_F9B7(void);
void func_C2BF(void);
void func_F42D(void);
void func_F42E(void);
void func_D401(void);
void func_D8AF(void);
void func_FE2D(void);
void func_FE2E(void);
void func_DA9F(void);
void func_DD0E(void);
void func_D56A(void);
void func_D56B(void);
void func_F694(void);
void func_F695(void);
void func_F628(void);
void func_F629(void);
void func_C0F6(void);
void func_E128(void);
void func_DD97(void);
void func_F68B(void);
void func_F68C(void);
void func_C894(void);
void func_F605(void);
void func_F606(void);
void func_C2AC(void);
void func_C92D(void);
void func_DB50(void);
void func_F22F(void);
void func_F230(void);
void func_EAB6(void);
void func_EAB7(void);
void func_F29B(void);
void func_D887(void);
void func_D5A2(void);
void func_F022(void);
void func_EFE7(void);
void func_FC43(void);
void func_FDD0(void);
void func_EC20(void);
void func_EC21(void);
void func_FC94(void);
void func_C880(void);
void func_C820(void);
void func_CAC9(void);
void func_F0F6(void);
void func_F0F7(void);
void func_D1F1(void);
void func_C002(void);
void func_F411(void);
void func_CA12(void);
void func_C5F1(void);
void func_FC9F(void);
void func_EF4D(void);
void func_FDF0(void);
void func_FCAA(void);
void func_CAFA(void);
void func_C0A0(void);
void func_C0A1(void);
void func_CA21(void);
void func_E629(void);
void func_D486(void);
void func_D4A6(void);
void func_C024(void);
void func_C224(void);
void func_C623(void);
void func_C724(void);
void func_C023(void);
void func_C127(void);
void func_C227(void);
void func_C427(void);
void func_C627(void);
void func_C728(void);
void func_FB10(void);
void func_CAFC(void);
void func_CA10(void);
void func_FBD0(void);
void func_FBD1(void);
void func_E6FB(void);
void func_CA02(void);
void func_E665(void);
void func_E6AB(void);
void func_E467(void);
void func_E4C7(void);
void func_A060_b0(void);
void func_A060_b2(void);
void func_A060_b3(void);
void func_A060_b4(void);
void func_A060_b5(void);
void func_A060_b6(void);
void func_F8D6(void);
void func_F8B2(void);
void func_F90D(void);
void func_C460(void);
void func_FB9B(void);
void func_E5A1(void);
void func_F03E(void);
void func_F027(void);
void func_FA9F(void);
void func_F533(void);
void func_F54D(void);
void func_C08F(void);
void func_CFB7(void);
void func_C546(void);
void func_C556(void);
void func_980F_b6(void);
void func_EFE4(void);
void func_EFFE(void);
void func_F5C5(void);
void func_F041(void);
void func_C8FB(void);
void func_F47F(void);
void func_A905_b0(void);
void func_A905_b1(void);
void func_A905_b2(void);
void func_A905_b3(void);
void func_A905_b4(void);
void func_A905_b5(void);
void func_A905_b6(void);
void func_E674(void);
void func_CFD4(void);
void func_C78B(void);
void func_980F_b0(void);
void func_980F_b1(void);
void func_980F_b4(void);
void func_F08D(void);
void func_F929(void);
void func_F09D(void);
void func_F0E5(void);
void func_F013(void);
void func_A9F7_b1(void);
void func_A9F7_b2(void);
void func_A9F7_b3(void);
void func_A9F7_b4(void);
void func_A9F7_b5(void);
void func_A9F7_b6(void);
void func_D804(void);
void func_F076(void);
void func_DA20(void);
void func_C1D9(void);
void func_F65C(void);
void func_F942(void);
void func_F92F(void);
void func_DC5D(void);
void func_DFF2(void);
void func_EA19(void);
void func_EA0A(void);
void func_F0B4(void);
void func_E37D(void);
void func_EBC7(void);
void func_EBE1(void);
void func_E690(void);
void func_F76B(void);
void func_8003_b1(void);
void func_8003_b2(void);
void func_8003_b4(void);
void func_8003_b5(void);
void func_8003_b6(void);
void func_86E8_b7(void);
void func_EC99(void);
void func_F79F(void);
void func_FAED(void);
void func_F6DD(void);
void func_F8D3(void);
void func_F8E2(void);
void func_ED11(void);
void func_ED4E(void);
void func_ED6F(void);
void func_A590_b0(void);
void func_A590_b2(void);
void func_A590_b3(void);
void func_A590_b4(void);
void func_F590(void);
void func_EF56(void);
void func_EF49(void);
void func_EF63(void);
void func_EFA6(void);
void func_F159(void);
void func_F24D(void);
void func_8D20_b0(void);
void func_8D20_b2(void);
void func_8D20_b4(void);
void func_8D20_b5(void);
void func_8D20_b6(void);
void func_EE78(void);
void func_F5B9(void);
void func_F5FB(void);
void func_D10C(void);
void func_F6EC(void);
void func_F706(void);
void func_F74E(void);
void func_F75A(void);
void func_F777(void);
void func_814C_b0(void);
void func_814C_b1(void);
void func_814C_b2(void);
void func_814C_b4(void);
void func_814C_b5(void);
void func_814C_b6(void);
void func_F363(void);
void func_C057(void);
void func_DFAD(void);
void func_DFA4(void);
void func_F1C7(void);
void func_EEFE(void);
void func_B9C8_b0(void);
void func_B9C8_b1(void);
void func_B9C8_b2(void);
void func_B9C8_b3(void);
void func_B9C8_b4(void);
void func_B9C8_b6(void);
void func_A560_b0(void);
void func_A560_b1(void);
void func_A560_b2(void);
void func_A560_b3(void);
void func_A560_b4(void);
void func_A560_b5(void);
void func_E2A8(void);
void func_F20E(void);
void func_FB08(void);
void func_FB0F(void);
void func_FBB8(void);
void func_C989(void);
void func_C535(void);
void func_EF86(void);
void func_A0B9_b4(void);
void func_FD23(void);
void func_82FC_b4(void);
void func_9815_b4(void);
void func_982D_b4(void);
void func_A9A5_b5(void);
void func_A9BF_b5(void);
void func_A9DB_b5(void);
void func_A9F3_b5(void);
void func_F71A(void);
void func_ED3A(void);
void func_8714_b1(void);
void func_A714_b1(void);
void func_86CF_b1(void);
void func_A6CF_b1(void);
void func_8875_b1(void);
void func_A875_b1(void);
void func_861C_b1(void);
void func_A61C_b1(void);
void func_85D1_b1(void);
void func_A5D1_b1(void);
void func_86C8_b1(void);
void func_A6C8_b1(void);
void func_85E8_b1(void);
void func_A5E8_b1(void);
void func_A53C_b2(void);
void func_A54A_b2(void);
void func_C063(void);
void func_C0A8(void);
void func_C084(void);
void func_C012(void);
void func_AE56_b2(void);
void func_C06C(void);
void func_BFAE_b2(void);
void func_C07B(void);
void func_C069(void);
void func_B5A5_b2(void);
void func_C048(void);
void func_C072(void);
void func_C066(void);
void func_AFB0_b2(void);
void func_C093(void);
void func_C01B(void);
void func_C01E(void);
void func_B5D3_b2(void);
void func_AEDD_b2(void);
void func_C051(void);
void func_B59B_b2(void);
void func_B036_b2(void);
void func_C09F(void);
void func_B393_b2(void);
void func_AF29_b2(void);
void func_C039(void);
void func_B23F_b2(void);
void func_BA03_b2(void);
void func_CAB3(void);
void func_C0A5(void);
void func_B44A_b2(void);
void func_B5C6_b2(void);
void func_C0AB(void);
void func_B4D1_b2(void);
void func_B5A0_b2(void);
void func_B120_b2(void);
void func_B661_b2(void);
void func_B66D_b2(void);
void func_B3CB_b2(void);
void func_8CFC_b0(void);
void func_8585_b0(void);
void func_A04C_b0(void);
void func_804C_b0(void);
void func_8013_b4(void);
void func_9930_b4(void);
void func_9A0E_b1(void);
void func_BA0E_b1(void);
void func_9C69_b1(void);
void func_BC69_b1(void);
void func_BCAB_b1(void);
void func_BC71_b1(void);
void func_BCBB_b1(void);
void func_9373_b1(void);
void func_B373_b1(void);
void func_9259_b1(void);
void func_B259_b1(void);
void func_91CC_b1(void);
void func_B1CC_b1(void);
void func_B2A5_b1(void);
void func_B204_b1(void);
void func_B20C_b1(void);
void func_C00C(void);
void func_B96B_b6(void);
void func_8566_b1(void);
void func_A566_b1(void);
void func_85F7_b1(void);
void func_9170_b1(void);
void func_9173_b1(void);
void func_9179_b1(void);
void func_9293_b1(void);
void func_A5F7_b1(void);
void func_817F_b1(void);
void func_8D20_b1(void);
void func_8690_b1(void);
void func_848F_b1(void);
void func_843C_b1(void);
void func_8458_b1(void);
void func_83EA_b1(void);
void func_83FA_b1(void);
void func_8404_b1(void);
void func_8410_b1(void);
void func_8450_b1(void);
void func_85E1_b1(void);
void func_8502_b1(void);
void func_856C_b1(void);
void func_85A1_b1(void);
void func_8C05_b1(void);
void func_8576_b1(void);
void func_9020_b1(void);
void func_8265_b1(void);
void func_A17F_b1(void);
void func_C1BF(void);
void func_86FF_b1(void);
void func_8612_b1(void);
void func_857A_b1(void);
void func_9BEF_b1(void);
void func_8644_b1(void);
void func_A644_b1(void);
void func_868F_b1(void);
void func_A68F_b1(void);
void func_880D_b1(void);
void func_A80D_b1(void);
void func_8248_b1(void);
void func_A248_b1(void);
void func_81F7_b1(void);
void func_A1F7_b1(void);
void func_8291_b1(void);
void func_A291_b1(void);
void func_83EB_b1(void);
void func_A3EB_b1(void);
void func_8353_b1(void);
void func_A353_b1(void);
void func_8264_b1(void);
void func_A264_b1(void);
void func_82FF_b1(void);
void func_A2FF_b1(void);
void func_82FB_b1(void);
void func_A2FB_b1(void);
void func_8774_b1(void);
void func_A774_b1(void);
void func_86B8_b1(void);
void func_A6B8_b1(void);
void func_839A_b1(void);
void func_A39A_b1(void);
void func_84DC_b1(void);
void func_A4DC_b1(void);
void func_84E0_b1(void);
void func_A4E0_b1(void);
void func_8412_b1(void);
void func_A412_b1(void);
void func_8819_b1(void);
void func_A819_b1(void);
void func_886F_b1(void);
void func_A86F_b1(void);
void func_881E_b1(void);
void func_A81E_b1(void);
void func_B43E_b1(void);
void func_9232_b1(void);
void func_B232_b1(void);
void func_93D4_b1(void);
void func_B3D4_b1(void);
void func_B3E6_b1(void);
void func_97CE_b1(void);
void func_997F_b1(void);
void func_B97F_b1(void);
void func_B996_b1(void);
void func_B970_b5(void);
void func_86AC_b1(void);
void func_9BC7_b1(void);
void func_9BD1_b1(void);
void func_85DA_b1(void);
void func_8193_b1(void);
void func_818E_b1(void);
void func_84A5_b1(void);
void func_93E6_b1(void);
void func_83FF_b1(void);
void func_9B71_b1(void);
void func_F487(void);
void func_E410(void);
void func_EBE4(void);
void func_EBEB(void);
void func_E7EB(void);
void func_E8EB(void);
void func_EBE6(void);
void func_D484(void);
void func_C485(void);
void func_EC85(void);
void func_C08B(void);
void func_C2C2(void);
void func_C9C2(void);
void func_C7AC(void);
void func_EC8E(void);
void func_D98F(void);
void func_F190(void);
void func_E191(void);
void func_F71D(void);
void func_D3AB(void);
void func_C4C7(void);
void func_C4CB(void);
void func_C4C9(void);
void func_C3CB(void);
void func_D5BB(void);
void func_C101(void);
void func_C201(void);
void func_D59C(void);
void func_D501(void);
void func_D390(void);
void func_D3B2(void);
void func_DAD9(void);
void func_DBDA(void);
void func_FB98(void);
void func_EB99(void);
void func_D6B4(void);
void func_D6B5(void);
void func_CAD9(void);
void func_C2CA(void);
void func_E7BD(void);
void func_E7E7(void);
void func_D8BF(void);
void func_C0E9(void);
void func_C1BD(void);
void func_E9C1(void);
void func_CA8E(void);
void func_E5CA(void);
void func_F2BF(void);
void func_F2E8(void);
void func_CCD1(void);
void func_CFC8(void);
void func_C8CD(void);
void func_D0CD(void);
void func_CD71(void);
void func_CE72(void);
void func_C19C(void);
void func_E1AF(void);
void func_F39E(void);
void func_DF9F(void);
void func_F7A0(void);
void func_D63B(void);
void func_D63C(void);
void func_E34B(void);
void func_D641(void);
void func_D63E(void);
void func_C746(void);
void func_F7A3(void);
void func_F56F(void);
void func_F5DD(void);
void func_F570(void);
void func_D66E(void);
void func_F441(void);
void func_C5A5(void);
void func_EDA5(void);
void func_CB61(void);
void func_DAB3(void);
void func_E5E4(void);
void func_F1F0(void);
void func_E3E2(void);
void func_F2E7(void);
void func_D6D3(void);
void func_CF4A(void);
void func_D8B9(void);
void func_DCD9(void);
void func_FC17(void);
void func_F5B2(void);
void func_C064(void);
void func_C5AE(void);
void func_F2AE(void);
void func_EEAF(void);
void func_F7AF(void);
void func_C1D2(void);
void func_EEC1(void);
void func_E6B3(void);
void func_D516(void);
void func_C10C(void);
void func_C3B5(void);
void func_D5B5(void);
void func_E7B5(void);
void func_F0B5(void);
void func_CEB6(void);
void func_F2B6(void);
void func_FBB6(void);
void func_C108(void);
void func_F4B7(void);
void func_D8B8(void);
void func_EAB8(void);
void func_F3B8(void);
void func_FCB8(void);
void func_D5B9(void);
void func_DEB9(void);
void func_F0B9(void);
void func_F0F4(void);
void func_C8BA(void);
void func_EBD0(void);
void func_D58D(void);
void func_EB6C(void);
void func_D7DF(void);
void func_D8D7(void);
void func_D2D3(void);
void func_D6D5(void);
void func_E5E2(void);
void func_E9E7(void);
void func_D214(void);
void func_ECEC(void);
void func_CBC0(void);
void func_D7E4(void);
void func_D3D8(void);
void func_DFDD(void);
void func_E900(void);
void func_CBE9(void);
void func_C2FE(void);
void func_F5F3(void);
void func_F0F3(void);
void func_ECF4(void);
void func_EDEC(void);
void func_EBEA(void);
void func_F7F6(void);
void func_CBC9(void);
void func_CF28(void);
void func_DCE2(void);
void func_DAC8(void);
void func_DCE1(void);
void func_C10B(void);
void func_CA27(void);
void func_C6C6(void);
void func_C301(void);
void func_C401(void);
void func_C5C3(void);
void func_C502(void);
void func_C9CB(void);
void func_CBCC(void);
void func_CBCF(void);
void func_D5CE(void);
void func_D5D5(void);
void func_CBD5(void);
void func_D6C9(void);
void func_D3D6(void);
void func_DFD4(void);
void func_E3DF(void);
void func_DBDD(void);
void func_DDDE(void);
void func_DBDE(void);
void func_DFDB(void);
void func_D9DA(void);
void func_C2C9(void);
void func_CAB8(void);
void func_C0B7(void);
void func_C8B6(void);
void func_C80F(void);
void func_C8BD(void);
void func_FDBC(void);
void func_FB66(void);
void func_E5BE(void);
void func_C8C1(void);
void func_C8B8(void);
void func_CE00(void);
void func_F0EF(void);
void func_F1ED(void);
void func_F2F3(void);
void func_EBF9(void);
void func_EC76(void);
void func_F7F7(void);
void func_F7F8(void);
void func_F6FA(void);
void func_F5F6(void);
void func_F6F5(void);
void func_F6F4(void);
void func_F55F(void);
void func_F5EA(void);
void func_F5A5(void);
void func_F55A(void);
void func_F577(void);
void func_FF9B(void);
void func_EAAB(void);
void func_EAAE(void);
void func_FD55(void);
void func_F5AA(void);
void func_DF77(void);
void func_DD77(void);
void func_F7DD(void);
void func_F5D5(void);
void func_DD75(void);
void func_EABF(void);
void func_DD00(void);
void func_C0D8(void);
void func_ECCF(void);
void func_EDED(void);
void func_EDFC(void);
void func_ECFC(void);
void func_EEFC(void);
void func_FAEF(void);
void func_D9FB(void);
void func_D9FD(void);
void func_FDDB(void);
void func_DADE(void);
void func_DFF7(void);
void func_DFDF(void);
void func_FDDF(void);
void func_F6FD(void);
void func_FD0B(void);
void func_FD26(void);
void func_FD28(void);
void func_FD3B(void);
void func_FD34(void);
void func_FD2E(void);
void func_FD71(void);
void func_FC32(void);
void func_FD4F(void);
void func_FE15(void);
void func_FE19(void);
void func_FE1A(void);
void func_D18B(void);
void func_D8A5(void);
void func_FCBC(void);
void func_C016(void);
void func_EE19(void);
void func_FCFD(void);
void func_FCC6(void);
void func_C5FC(void);
void func_C8AD(void);
void func_E0AB(void);
void func_FD04(void);
void func_FC20(void);
void func_FD47(void);
void func_FD80(void);
void func_FD82(void);
void func_FCA7(void);
void func_EBFC(void);
void func_FDEB(void);
void func_FC16(void);
void func_FC73(void);
void func_FC91(void);
void func_FC92(void);
void func_FC97(void);
void func_F5B0(void);
void func_FD07(void);
void func_FD48(void);
void func_FD4A(void);
void func_FC48(void);
void func_FD66(void);
void func_FD68(void);
void func_FD6E(void);
void func_FD70(void);
void func_DCDC(void);
void func_EE5A(void);
void func_F64E(void);
void func_FE52(void);
void func_ECBC(void);
void func_F088(void);
void func_EDA9(void);
void func_CA99(void);
void func_C009(void);
void func_C222(void);
void func_DD0A(void);
void func_E1F0(void);
void func_D2F0(void);
void func_ECB9(void);
void func_E710(void);
void func_F086(void);
void func_F08A(void);
void func_F049(void);
void func_E84C(void);
void func_E007(void);
void func_CCA9(void);
void func_E4BD(void);
void func_DAF0(void);
void func_F6A9(void);
void func_F0E8(void);
void func_E011(void);
void func_E240(void);
void func_CA6A(void);
void func_CB2D(void);
void func_E52E(void);
void func_CF4E(void);
void func_ED13(void);
void func_F204(void);
void func_EF25(void);
void func_E908(void);
void func_DD48(void);
void func_DF4D(void);
void func_F62A(void);
void func_D261(void);
void func_D305(void);
void func_C825(void);
void func_C845(void);
void func_D746(void);
void func_DD4A(void);
void func_C569(void);
void func_EC8B(void);
void func_D590(void);
void func_FD90(void);
void func_C0B4(void);
void func_C4C1(void);
void func_F223(void);
void func_FEB0(void);
void func_FEB2(void);
void func_FE08(void);
void func_FE06(void);
void func_EE20(void);
void func_FEB8(void);
void func_F7B3(void);
void func_EA22(void);
void func_F5C4(void);
void func_D3C4(void);
void func_E421(void);
void func_FC28(void);
void func_CC91(void);
void func_CC93(void);
void func_EA97(void);
void func_EA93(void);
void func_CEF7(void);
void func_C9AC(void);
void func_D03E(void);
void func_ED85(void);
void func_EB85(void);
void func_EBA5(void);
void func_ECA5(void);
void func_ECE6(void);
void func_C915(void);
void func_E4F4(void);
void func_D5ED(void);
void func_E904(void);
void func_C99A(void);
void func_C92B(void);
void func_C993(void);
void func_EE60(void);
void func_D6C6(void);
void func_E285(void);
void func_C5E2(void);
void func_E4A5(void);
void func_C97E(void);
void func_C5DE(void);
void func_D985(void);
void func_DA85(void);
void func_DC99(void);
void func_EF10(void);
void func_EB9E(void);
void func_F69E(void);
void func_E19F(void);
void func_ED9F(void);
void func_F1FE(void);
void func_F70C(void);
void func_F507(void);
void func_F609(void);
void func_EFFA(void);
void func_F5FE(void);
void func_EC10(void);
void func_EE0D(void);
void func_F681(void);
void func_E682(void);
void func_DC83(void);
void func_F483(void);
void func_F484(void);
void func_FC89(void);
void func_D88A(void);
void func_C4FF(void);
void func_E106(void);
void func_C22B(void);
void func_C61A(void);
void func_E10B(void);
void func_C5FF(void);
void func_EC22(void);
void func_DE8E(void);
void func_F21B(void);
void func_C792(void);
void func_EC92(void);
void func_EC93(void);
void func_FD94(void);
void func_D795(void);
void func_F895(void);
void func_EB96(void);
void func_C397(void);
void func_D698(void);
void func_DD99(void);
void func_C39C(void);
void func_F49D(void);
void func_D4FF(void);
void func_FF98(void);
void func_C60F(void);
void func_CF07(void);
void func_D107(void);
void func_EC0B(void);
void func_EF0F(void);
void func_F103(void);
void func_F607(void);
void func_C362(void);
void func_C662(void);
void func_C762(void);
void func_C106(void);
void func_C70A(void);
void func_D662(void);
void func_D762(void);
void func_CE0A(void);
void func_D902(void);
void func_F6FF(void);
void func_FFCC(void);
void func_D207(void);
void func_FFD2(void);
void func_CF0E(void);
void func_D60E(void);
void func_ED36(void);
void func_EB3A(void);
void func_E632(void);
void func_EC36(void);
void func_EE3A(void);
void func_E42E(void);
void func_F206(void);
void func_E102(void);
void func_ECFF(void);
void func_FFB1(void);
void func_E10E(void);
void func_CC06(void);
void func_C702(void);
void func_E30A(void);
void func_E20A(void);
void func_D203(void);
void func_D15B(void);
void func_D303(void);
void func_DF0B(void);
void func_E906(void);
void func_EB0A(void);
void func_EC06(void);
void func_ED06(void);
void func_EF0A(void);
void func_EBB6(void);
void func_E70E(void);
void func_EB02(void);
void func_DB0F(void);
void func_CA0C(void);
void func_E40D(void);
void func_CD0A(void);
void func_E704(void);
void func_EB0D(void);
void func_EC08(void);
void func_C20E(void);
void func_C30F(void);
void func_D50B(void);
void func_D202(void);
void func_D906(void);
void func_DC06(void);
void func_FE0A(void);
void func_EC8A(void);
void func_DA02(void);
void func_ED8A(void);
void func_EF5A(void);
void func_CD5B(void);
void func_E902(void);
void func_F48E(void);
void func_F68A(void);
void func_D30A(void);
void func_EB0F(void);
void func_F10A(void);
void func_F56B(void);
void func_D1F6(void);
void func_EC07(void);
void func_EF07(void);
void func_E55B(void);
void func_E406(void);
void func_EB0B(void);
void func_EE0B(void);
void func_C47B(void);
void func_C647(void);
void func_F10B(void);
void func_C25A(void);
void func_D85A(void);
void func_D20A(void);
void func_D90A(void);
void func_E706(void);
void func_ED0A(void);
void func_DA5B(void);
void func_E003(void);
void func_CB5A(void);
void func_F70A(void);
void func_F20F(void);
void func_FE0B(void);
void func_F50B(void);
void func_FE02(void);
void func_FFEE(void);
void func_DA0F(void);
void func_EC0A(void);
void func_FA07(void);
void func_F69F(void);
void func_FB9F(void);
void func_C3A0(void);
void func_C6A0(void);
void func_E1A2(void);
void func_FBA2(void);
void func_C013(void);
void func_C210(void);
void func_D904(void);
void func_CF02(void);
void func_CF82(void);
void func_C4A3(void);
void func_E8A3(void);
void func_F1A3(void);
void func_C0A4(void);
void func_EDA4(void);
void func_F6A4(void);
void func_F709(void);
void func_E80C(void);
void func_F50C(void);
void func_FF99(void);
void func_FFB6(void);
void func_F5A6(void);
void func_E7A8(void);
void func_C6A9(void);
void func_E5A9(void);
void func_FF9E(void);
void func_F1AC(void);
void func_F5AE(void);
void func_E1B7(void);
void func_FBB7(void);
void func_CDAE(void);
void func_CAAE(void);
void func_D320(void);
void func_FEA9(void);
void func_C7C0(void);
void func_CAB0(void);
void func_CCB9(void);
void func_EFB9(void);
void func_E6B1(void);
void func_EEB1(void);
void func_CAB2(void);
void func_C0B6(void);
void func_DBB0(void);
void func_C3B3(void);
void func_DDB4(void);
void func_CFB9(void);
void func_D7B5(void);
void func_F360(void);
void func_EFC0(void);
void func_C04B(void);
void func_C075(void);
void func_C090(void);
void func_C027(void);
void func_F4BA(void);
void func_E9BB(void);
void func_F5BB(void);
void func_C4B9(void);
void func_EC4C(void);
void func_C096(void);
void func_D014(void);
void func_C099(void);
void func_C078(void);
void func_FBFE(void);
void func_E1EC(void);
void func_CE26(void);
void func_E009(void);
void func_CE23(void);
void func_F01E(void);
void func_DF69(void);
void func_C1D0(void);
void func_F098(void);
void func_EEBC(void);
void func_ED20(void);
void func_ECD0(void);
void func_F210(void);
void func_E5BD(void);
void func_CEE8(void);
void func_F5C9(void);
void func_EE21(void);
void func_F5E9(void);
void func_D0A8(void);
void func_DDD0(void);
void func_D4D0(void);
void func_EF83(void);
void func_EA84(void);
void func_E3A3(void);
void func_C591(void);
void func_DD91(void);
void func_ED91(void);
void func_F191(void);
void func_CA08(void);
void func_C508(void);
void func_D208(void);
void func_C0FF(void);
void func_FFD8(void);
void func_FE97(void);
void func_F8B1(void);
void func_F1B2(void);
void func_D79A(void);
void func_F69A(void);
void func_F19B(void);
void func_D307(void);
void func_EB9D(void);
void func_F1A1(void);
void func_DBA6(void);
void func_DCA8(void);
void func_D1AE(void);
void func_DCB6(void);
void func_EDFF(void);
void func_F240(void);
void func_F147(void);
void func_F36F(void);
void func_E00F(void);
void func_FF04(void);
void func_E01E(void);
void func_C38D(void);
void func_F057(void);
void func_E26A(void);
void func_F08B(void);
void func_D49A(void);
void func_F099(void);
void func_D5BD(void);
void func_E84A(void);
void func_D03B(void);
void func_C642(void);
void func_CCE6(void);
void func_ED28(void);
void func_EF30(void);
void func_F09C(void);
void func_EE9C(void);
void func_E3B3(void);
void func_C9B6(void);
void func_E7B7(void);
void func_F1B7(void);
void func_D702(void);
void func_D713(void);
void func_D715(void);
void func_E172(void);
void func_E38F(void);
void func_E4BB(void);
void func_E4B9(void);
void func_E4BF(void);
void func_D7CF(void);
void func_E4D7(void);
void func_D7CB(void);
void func_E8E7(void);
void func_E5EA(void);
void func_F244(void);
void func_EC3F(void);
void func_E8EE(void);
void func_EBE8(void);
void func_EBEF(void);
void func_F23F(void);
void func_E36C(void);
void func_F16C(void);
void func_F36C(void);
void func_F46C(void);
void func_F6E2(void);
void func_E2F6(void);
void func_EB6B(void);
void func_ECEB(void);
void func_F76C(void);
void func_ED6C(void);
void func_E2F0(void);
void func_F96C(void);
void func_E2FC(void);
void func_DCDB(void);
void func_DD3F(void);
void func_E044(void);
void func_D8DD(void);
void func_D5D9(void);
void func_DA28(void);
void func_C417(void);
void func_C4C4(void);
void func_C2C4(void);
void func_C03C(void);
void func_C01A(void);
void func_D228(void);
void func_CB28(void);
void func_E4FC(void);
void func_F2F1(void);
void func_FCF3(void);
void func_C1FC(void);
void func_E8FE(void);
void func_ECFE(void);
void func_E3FE(void);
void func_C5E6(void);
void func_F6FE(void);
void func_FCB5(void);
void func_C0A7(void);
void func_FCC1(void);
void func_C9FC(void);
void func_FCC3(void);
void func_FEAF(void);
void func_FD61(void);
void func_F2E9(void);
void func_F1EE(void);
void func_EB57(void);
void func_F2EB(void);
void func_EAF8(void);
void func_F5F7(void);
void func_F2F5(void);
void func_F1E9(void);
void func_F4B2(void);
void func_E161(void);
void func_D9D7(void);
void func_DAD6(void);
void func_DC6F(void);
void func_D9DF(void);
void func_FCDB(void);
void func_F3D6(void);
void func_DCFC(void);
void func_F5FC(void);
void func_EF57(void);
void func_D8FC(void);
void func_DCB0(void);
void func_DB53(void);
void func_FCBD(void);
void func_FC57(void);
void func_FD2C(void);
void func_FBB2(void);
void func_E6F9(void);
void func_E657(void);
void func_FDE5(void);
void func_FC7C(void);
void func_FD4B(void);
void func_FE5D(void);
void func_FC74(void);
void func_FD42(void);
void func_C74D(void);
void func_FD45(void);
void func_C72E(void);
void func_C6B7(void);
void func_FD3D(void);
void func_C65D(void);
void func_E1D7(void);
void func_FCFA(void);
void func_FCCB(void);
void func_DEFC(void);
void func_E8D7(void);
void func_CAFF(void);
void func_FD3E(void);
void func_FD36(void);
void func_FD6C(void);
void func_E1CB(void);
void func_D7C2(void);
void func_C9C6(void);
void func_E0C6(void);
void func_C6D2(void);
void func_C6CD(void);
void func_D2E1(void);
void func_C6CF(void);
void func_C6D3(void);
void func_E1CD(void);
void func_DAD3(void);
void func_DAC6(void);
void func_E1D6(void);
void func_C6D5(void);
void func_C6D6(void);
void func_E7F0(void);
void func_FDE7(void);
void func_EAFD(void);
void func_EDEE(void);
void func_FDED(void);
void func_FC51(void);
void func_F425(void);
void func_FFD5(void);
void func_EEBB(void);
void func_FEAA(void);
void func_FEBA(void);
void func_D5AA(void);
void func_E8D2(void);
void func_DD81(void);
void func_ED81(void);
void func_F2F2(void);
void func_C21F(void);
void func_C7C8(void);
void func_E060(void);
void func_E067(void);
void func_CAC5(void);
void func_C6CA(void);
void func_E041(void);
void func_E224(void);
void func_EC28(void);
void func_DF00(void);
void func_D24F(void);
void func_DC6B(void);
void func_D34F(void);
void func_D44F(void);
void func_E56B(void);
void func_CA4B(void);
void func_E86B(void);
void func_DFCE(void);
void func_D820(void);
void func_F2F6(void);
void func_E867(void);
void func_F4D8(void);
void func_EF28(void);
void func_CCB6(void);
void func_F6E0(void);
void func_FB8B(void);
void func_D0A4(void);
void func_F1E6(void);
void func_DED1(void);
void func_F1DE(void);
void func_FDC6(void);
void func_CFBF(void);
void func_EFEB(void);
void func_E5DD(void);
void func_D6C0(void);
void func_F024(void);
void func_C311(void);
void func_C3D1(void);
void func_C256(void);
void func_C345(void);
void func_C34D(void);
void func_EE02(void);
void func_D503(void);
void func_C351(void);
void func_CD1F(void);
void func_C5CD(void);
void func_C0FA(void);
void func_C1FB(void);
void func_C3DE(void);
void func_F203(void);
void func_EDA8(void);
void func_EC03(void);
void func_EC02(void);
void func_C266(void);
void func_C367(void);
void func_C27A(void);
void func_C37B(void);
void func_C35F(void);
void func_C34F(void);
void func_EA05(void);
void func_C247(void);
void func_C257(void);
void func_C259(void);
void func_C15D(void);
void func_C25C(void);
void func_C35B(void);
void func_C161(void);
void func_C265(void);
void func_C364(void);
void func_C174(void);
void func_C077(void);
void func_C279(void);
void func_C3AB(void);
void func_C3AD(void);
void func_C28A(void);
void func_C38B(void);
void func_C381(void);
void func_C589(void);
void func_C28F(void);
void func_C33B(void);
void func_C239(void);
void func_C384(void);
void func_C251(void);
void func_C371(void);
void func_C474(void);
void func_C156(void);
void func_C393(void);
void func_C24E(void);
void func_C289(void);
void func_C38E(void);
void func_CB03(void);
void func_C56D(void);
void func_C567(void);
void func_C479(void);
void func_E703(void);
void func_C29B(void);
void func_C39E(void);
void func_C0B0(void);
void func_C337(void);
void func_C34B(void);
void func_C35E(void);
void func_C25F(void);
void func_C09C(void);
void func_C2B7(void);
void func_C395(void);
void func_C3E9(void);
void func_C4C2(void);
void func_ECB3(void);
void func_EEB3(void);
void func_C412(void);
void func_CBBA(void);
void func_EDBA(void);
void func_CEFA(void);
void func_CCFB(void);
void func_C3D8(void);
void func_E104(void);
void func_E844(void);
void func_EB44(void);
void func_D4E0(void);
void func_D4E2(void);
void func_C235(void);
void func_C237(void);
void func_E246(void);
void func_EB05(void);
void func_C2D1(void);
void func_F703(void);
void func_D504(void);
void func_C339(void);
void func_C14B(void);
void func_C52D(void);
void func_F202(void);
void func_C2B5(void);
void func_C3BA(void);
void func_C3F8(void);
void func_C2F4(void);
void func_C085(void);
void func_CC82(void);
void func_C0CD(void);
void func_C18F(void);
void func_EF03(void);
void func_C481(void);
void func_C781(void);
void func_F288(void);
void func_F222(void);
void func_F2A6(void);
void func_E8F2(void);
void func_F485(void);
void func_DE80(void);
void func_F3E6(void);
void func_F185(void);
void func_F1A5(void);
void func_C6D0(void);
void func_C5FA(void);
void func_F125(void);
void func_F4A4(void);
void func_F3A5(void);
void func_F565(void);
void func_F4A5(void);
void func_F0A5(void);
void func_F025(void);
void func_F065(void);
void func_F685(void);
void func_F66C(void);
void func_F5A4(void);
void func_F525(void);
void func_F666(void);
void func_F665(void);
void func_F6A5(void);
void func_F165(void);
void func_FBA5(void);
void func_D3D0(void);
void func_FD84(void);
void func_F5E5(void);
void func_C8F2(void);
void func_F7A5(void);
void func_F2B1(void);
void func_F7A4(void);
void func_F684(void);
void func_C6F7(void);
void func_F7C6(void);
void func_D0F7(void);
void func_F389(void);
void func_DB89(void);
void func_DD8A(void);
void func_EB8E(void);
void func_E791(void);
void func_F493(void);
void func_EC94(void);
void func_D495(void);
void func_EE95(void);
void func_ED18(void);
void func_F229(void);
void func_F227(void);
void func_F2A5(void);
void func_ED1A(void);
void func_E037(void);
void func_F2A0(void);
void func_EA27(void);
void func_ED00(void);
void func_EB0E(void);
void func_EC09(void);
void func_E910(void);
void func_F806(void);
void func_E084(void);
void func_E086(void);
void func_E922(void);
void func_ED32(void);
void func_E829(void);
void func_E027(void);
void func_EBA1(void);
void func_EC27(void);
void func_FBE8(void);
void func_EB9A(void);
void func_E927(void);
void func_EB27(void);
void func_EC9C(void);
void func_EC25(void);
void func_E827(void);
void func_F19D(void);
void func_F196(void);
void func_E200(void);
void func_E934(void);
void func_ED80(void);
void func_E30C(void);
void func_E504(void);
void func_E39D(void);
void func_DAE9(void);
void func_E90C(void);
void func_F429(void);
void func_F330(void);
void func_EDA0(void);
void func_EA24(void);
void func_ED37(void);
void func_E201(void);
void func_E924(void);
void func_EA0C(void);
void func_E9A2(void);
void func_F104(void);
void func_EDA3(void);
void func_E134(void);
void func_E942(void);
void func_ED40(void);
void func_EDEA(void);
void func_ED29(void);
void func_E506(void);
void func_E2E9(void);
void func_EB07(void);
void func_F3EC(void);
void func_F0A4(void);
void func_F24E(void);
void func_F237(void);
void func_E981(void);
void func_E281(void);
void func_EC42(void);
void func_ED49(void);
void func_F21F(void);
void func_F250(void);
void func_F249(void);
void func_F247(void);
void func_E210(void);
void func_ECA7(void);
void func_F1A7(void);
void func_F3A1(void);
void func_F0A6(void);
void func_D205(void);
void func_E229(void);
void func_EA1B(void);
void func_E9AA(void);
void func_CDE9(void);
void func_EBC0(void);
void func_EC32(void);
void func_FDE9(void);
void func_F3A0(void);
void func_FFAD(void);
void func_ED0C(void);
void func_E96B(void);
void func_E7E9(void);
void func_E851(void);
void func_EA2A(void);
void func_EC29(void);
void func_EB24(void);
void func_EB29(void);
void func_EC24(void);
void func_F105(void);
void func_F7F3(void);
void func_EB09(void);
void func_F6E8(void);
void func_E0AF(void);
void func_EC23(void);
void func_EC26(void);
void func_EB18(void);
void func_DBE9(void);
void func_F6E9(void);
void func_F0B2(void);
void func_F0B3(void);
void func_FFB4(void);
void func_EF20(void);
void func_EC05(void);
void func_EC04(void);
void func_E02B(void);
void func_EC33(void);
void func_E82B(void);
void func_E314(void);
void func_EBA3(void);
void func_E082(void);
void func_E110(void);
void func_ED04(void);
void func_F482(void);
void func_F097(void);
void func_F882(void);
void func_E9B9(void);
void func_EB81(void);
void func_EC0C(void);
void func_FFBC(void);
void func_E925(void);
void func_E822(void);
void func_E0BB(void);
void func_E983(void);
void func_EB83(void);
void func_EBBC(void);
void func_EC37(void);
void func_E089(void);
void func_E0BC(void);
void func_E342(void);
void func_F183(void);
void func_E824(void);
void func_F3AC(void);
void func_F1AD(void);
void func_EC01(void);
void func_E218(void);
void func_F744(void);
void func_EC34(void);
void func_E92B(void);
void func_E837(void);
void func_E330(void);
void func_E540(void);
void func_ED14(void);
void func_EBA7(void);
void func_FFA8(void);
void func_E580(void);
void func_F30C(void);
void func_ED27(void);
void func_ED83(void);
void func_EC63(void);
void func_F311(void);
void func_F432(void);
void func_EF82(void);
void func_F382(void);
void func_EDF3(void);
void func_F308(void);
void func_F459(void);
void func_EC4B(void);
void func_EC48(void);
void func_F452(void);
void func_F280(void);
void func_E537(void);
void func_F480(void);
void func_EC39(void);
void func_E340(void);
void func_EDF4(void);
void func_F323(void);
void func_E90E(void);
void func_EC0E(void);
void func_EC0D(void);
void func_EB40(void);
void func_E820(void);
void func_ECAE(void);
void func_E381(void);
void func_E00D(void);
void func_ED88(void);
void func_E305(void);
void func_E349(void);
void func_E339(void);
void func_EC16(void);
void func_EB15(void);
void func_E818(void);
void func_E0B1(void);
void func_F44B(void);
void func_EFEC(void);
void func_E483(void);
void func_E03A(void);
void func_E279(void);
void func_ED26(void);
void func_F375(void);
void func_F376(void);
void func_F377(void);
void func_F42B(void);
void func_ED76(void);
void func_ED31(void);
void func_F423(void);
void func_F324(void);
void func_F426(void);
void func_ED23(void);
void func_E374(void);
void func_E0C0(void);
void func_ED78(void);
void func_ED08(void);
void func_ECB6(void);
void func_EC38(void);
void func_F197(void);
void func_F1A9(void);
void func_ECB7(void);
void func_E27B(void);
void func_E17A(void);
void func_EC3B(void);
void func_EB21(void);
void func_F309(void);
void func_FFBD(void);
void func_E97C(void);
void func_E098(void);
void func_E9BD(void);
void func_E928(void);
void func_E9FF(void);
void func_EABD(void);
void func_F187(void);
void func_EBBF(void);
void func_E404(void);
void func_EC13(void);
void func_E138(void);
void func_D647(void);
void func_A504_b0(void);
void func_A504_b2(void);
void func_A504_b3(void);
void func_A504_b4(void);
void func_A504_b5(void);
void func_D3CA(void);
void func_DF8A(void);
void func_88A9_b0(void);
void func_88A9_b1(void);
void func_88A9_b2(void);
void func_88A9_b4(void);
void func_88A9_b5(void);
void func_88A9_b6(void);
void func_FD17(void);
void func_EA79(void);
void func_EC3E(void);
void func_F88F(void);
void func_DD7B(void);
void func_D8AD(void);
void func_E8B1(void);
void func_E963(void);
void func_E895(void);
void func_F6C9(void);
void func_FCC5(void);
void func_E4F2(void);
void func_E9CF(void);
void func_BA43_b0(void);
void func_BA43_b1(void);
void func_BA43_b3(void);
void func_BA43_b4(void);
void func_BA43_b5(void);
void func_BA43_b6(void);
void func_C285(void);
void func_F3CC(void);
void func_F297(void);
void func_E7FB(void);
void func_F129(void);
void func_F143(void);
void func_E8B3(void);
void func_F325(void);
void func_E0D6(void);
void func_F044(void);
void func_F151(void);
void func_E7C1(void);
void func_E324(void);
void func_E7C3(void);
void func_F431(void);
void func_E3AB(void);
void func_8870_b1(void);
void func_886C_b6(void);
void func_BB75_b0(void);
void func_8018_b0(void);
void func_83E0_b0(void);
void func_8754_b0(void);
void func_8A7C_b0(void);
void func_8AA4_b0(void);
void func_8ACC_b0(void);
void func_8B20_b0(void);
void func_8B48_b0(void);
void func_8B70_b0(void);
void func_8B98_b0(void);
void func_8BC0_b0(void);
void func_8BE8_b0(void);
void func_8C10_b0(void);
void func_8D50_b0(void);
void func_8D78_b0(void);
void func_8DA0_b0(void);
void func_8DC8_b0(void);
void func_8DF0_b0(void);
void func_8E18_b0(void);
void func_9833_b0(void);
void func_985B_b0(void);
void func_9883_b0(void);
void func_98AB_b0(void);
void func_98D3_b0(void);
void func_98FB_b0(void);
void func_9923_b0(void);
void func_BABD_b0(void);
void func_BABA_b0(void);
void func_BBBA_b0(void);
void func_9E03_b0(void);
void func_9E2B_b0(void);
void func_9E53_b0(void);
void func_9E7B_b0(void);
void func_A0F7_b0(void);
void func_A11F_b0(void);
void func_A147_b0(void);
void func_A16F_b0(void);
void func_A3A7_b0(void);
void func_A3CF_b0(void);
void func_A3F7_b0(void);
void func_A41F_b0(void);
void func_8385_b0(void);
void func_A5C5_b0(void);
void func_A5ED_b0(void);
void func_A615_b0(void);
void func_A63D_b0(void);
void func_B9B8_b0(void);
void func_B9B9_b0(void);
void func_A901_b0(void);
void func_8504_b0(void);
void func_A606_b0(void);
void func_B105_b0(void);
void func_8D0B_b0(void);
void func_8CC8_b0(void);
void func_8D29_b0(void);
void func_A58F_b1(void);
void func_9A99_b1(void);
void func_9490_b1(void);
void func_9F9F_b1(void);
void func_9691_b1(void);
void func_BFC0_b1(void);
void func_BF00_b1(void);
void func_BDBC_b1(void);
void func_BEBD_b1(void);
void func_A4A3_b1(void);
void func_AD9C_b1(void);
void func_B3B3_b1(void);
void func_B4B5_b1(void);
void func_B5B3_b1(void);
void func_BDBD_b1(void);
void func_BFBD_b1(void);
void func_A0B0_b1(void);
void func_A2B0_b1(void);
void func_A29D_b1(void);
void func_A080_b1(void);
void func_AFAF_b1(void);
void func_A5A6_b1(void);
void func_80AE_b1(void);
void func_80B0_b1(void);
void func_A203_b1(void);
void func_A006_b1(void);
void func_A034_b1(void);
void func_8C20_b1(void);
void func_A28C_b1(void);
void func_B800_b1(void);
void func_85A0_b1(void);
void func_8503_b1(void);
void func_A50A_b1(void);
void func_85E5_b1(void);
void func_85E2_b1(void);
void func_A901_b1(void);
void func_8504_b1(void);
void func_8500_b1(void);
void func_B1C8_b1(void);
void func_A19F_b1(void);
void func_A0A7_b1(void);
void func_910E_b1(void);
void func_A34C_b1(void);
void func_A201_b1(void);
void func_838D_b1(void);
void func_879F_b2(void);
void func_87BC_b2(void);
void func_87DB_b2(void);
void func_87F5_b2(void);
void func_88D9_b2(void);
void func_88FA_b2(void);
void func_891E_b2(void);
void func_897E_b2(void);
void func_899E_b2(void);
void func_89BB_b2(void);
void func_89DE_b2(void);
void func_8B2F_b2(void);
void func_8B4C_b2(void);
void func_8B6A_b2(void);
void func_8B8D_b2(void);
void func_92E1_b2(void);
void func_92EC_b2(void);
void func_92F0_b2(void);
void func_92FB_b2(void);
void func_98F8_b2(void);
void func_9903_b2(void);
void func_990E_b2(void);
void func_9919_b2(void);
void func_992E_b2(void);
void func_9957_b2(void);
void func_9986_b2(void);
void func_99B1_b2(void);
void func_87B0_b2(void);
void func_A01E_b2(void);
void func_A021_b2(void);
void func_A026_b2(void);
void func_A02B_b2(void);
void func_A8A0_b2(void);
void func_B4A0_b2(void);
void func_B7A0_b2(void);
void func_A138_b2(void);
void func_A13B_b2(void);
void func_A140_b2(void);
void func_A143_b2(void);
void func_A146_b2(void);
void func_A149_b2(void);
void func_A155_b2(void);
void func_A158_b2(void);
void func_A15B_b2(void);
void func_A15E_b2(void);
void func_A161_b2(void);
void func_A164_b2(void);
void func_A16D_b2(void);
void func_A173_b2(void);
void func_A170_b2(void);
void func_A176_b2(void);
void func_A17F_b2(void);
void func_A182_b2(void);
void func_A185_b2(void);
void func_A18A_b2(void);
void func_A18D_b2(void);
void func_A221_b2(void);
void func_A224_b2(void);
void func_A227_b2(void);
void func_A22A_b2(void);
void func_A22F_b2(void);
void func_A232_b2(void);
void func_A235_b2(void);
void func_A238_b2(void);
void func_A23B_b2(void);
void func_A23E_b2(void);
void func_A241_b2(void);
void func_A244_b2(void);
void func_A247_b2(void);
void func_A2BF_b2(void);
void func_A2C2_b2(void);
void func_A2C7_b2(void);
void func_A2CC_b2(void);
void func_A2CF_b2(void);
void func_A2D2_b2(void);
void func_A2D5_b2(void);
void func_B40D_b2(void);
void func_B20D_b2(void);
void func_B508_b2(void);
void func_8800_b2(void);
void func_85A3_b2(void);
void func_8EA3_b2(void);
void func_97A3_b2(void);
void func_A0A3_b2(void);
void func_ADF5_b2(void);
void func_B1AF_b2(void);
void func_B1B5_b2(void);
void func_B899_b2(void);
void func_ADDB_b2(void);
void func_ADFD_b2(void);
void func_AF0D_b2(void);
void func_AFED_b2(void);
void func_B1BB_b2(void);
void func_B10B_b2(void);
void func_B13B_b2(void);
void func_B0A9_b2(void);
void func_B25F_b2(void);
void func_B79F_b2(void);
void func_B30C_b2(void);
void func_B33A_b2(void);
void func_B436_b2(void);
void func_B49F_b2(void);
void func_B50C_b2(void);
void func_B547_b2(void);
void func_B5F3_b2(void);
void func_B6AA_b2(void);
void func_B71D_b2(void);
void func_B803_b2(void);
void func_B80C_b2(void);
void func_B83A_b2(void);
void func_B852_b2(void);
void func_B890_b2(void);
void func_B8A3_b2(void);
void func_BA5D_b2(void);
void func_BA74_b2(void);
void func_80A9_b2(void);
void func_A4A9_b2(void);
void func_BB08_b2(void);
void func_BB47_b2(void);
void func_BB60_b2(void);
void func_BB59_b2(void);
void func_BC05_b2(void);
void func_BDCB_b2(void);
void func_8500_b2(void);
void func_8520_b2(void);
void func_8539_b2(void);
void func_8530_b2(void);
void func_B1C8_b2(void);
void func_8502_b2(void);
void func_A901_b2(void);
void func_A0E0_b2(void);
void func_B104_b2(void);
void func_8550_b2(void);
void func_A201_b2(void);
void func_8A4C_b2(void);
void func_A0E1_b2(void);
void func_85AC_b2(void);
void func_A9CF_b2(void);
void func_8503_b2(void);
void func_AA02_b2(void);
void func_AD91_b3(void);
void func_B191_b3(void);
void func_AB06_b3(void);
void func_A786_b3(void);
void func_A81B_b3(void);
void func_A000_b3(void);
void func_BEF4_b3(void);
void func_A4AA_b3(void);
void func_A115_b3(void);
void func_A65C_b3(void);
void func_A73D_b3(void);
void func_A7BF_b3(void);
void func_A814_b3(void);
void func_A9DC_b3(void);
void func_AA94_b3(void);
void func_A34C_b3(void);
void func_A3E5_b3(void);
void func_B3F2_b3(void);
void func_9BF0_b4(void);
void func_9BF1_b4(void);
void func_9BFD_b4(void);
void func_9C03_b4(void);
void func_9C23_b4(void);
void func_9C32_b4(void);
void func_9C47_b4(void);
void func_9C5E_b4(void);
void func_B659_b4(void);
void func_B67B_b4(void);
void func_B69D_b4(void);
void func_B6A7_b4(void);
void func_989A_b4(void);
void func_AEAE_b4(void);
void func_A4B6_b5(void);
void func_A4A4_b5(void);
void func_A5A4_b5(void);
void func_A7A7_b5(void);
void func_B3B3_b5(void);
void func_B7B6_b5(void);
void func_911D_b5(void);
void func_A450_b5(void);
void func_85A9_b6(void);
void func_85AC_b6(void);
void func_A9CF_b6(void);
void func_8B76_b0(void);
void func_8BE0_b0(void);
void func_8BE6_b0(void);
void func_8DFC_b0(void);
void func_BBB6_b0(void);
void func_8339_b0(void);
void func_8CA2_b0(void);
void func_A535_b1(void);
void func_9662_b1(void);
void func_9664_b1(void);
void func_963C_b1(void);
void func_9640_b1(void);
void func_964C_b1(void);
void func_9650_b1(void);
void func_9658_b1(void);
void func_9DC8_b1(void);
void func_BDC8_b1(void);
void func_BDF4_b1(void);
void func_B342_b1(void);
void func_9436_b1(void);
void func_A590_b1(void);
void func_A592_b1(void);
void func_B436_b1(void);
void func_B48B_b1(void);
void func_98D3_b1(void);
void func_A9CF_b1(void);
void func_A9A9_b1(void);
void func_B8D3_b1(void);
void func_98E7_b1(void);
void func_A9E5_b1(void);
void func_B8E7_b1(void);
void func_94FC_b1(void);
void func_A5A5_b1(void);
void func_A5A3_b1(void);
void func_A5E4_b1(void);
void func_A606_b1(void);
void func_B4FC_b1(void);
void func_B5B4_b1(void);
void func_B622_b1(void);
void func_B5C1_b1(void);
void func_B5E0_b1(void);
void func_B511_b1(void);
void func_B562_b1(void);
void func_970F_b1(void);
void func_B70F_b1(void);
void func_9A5F_b1(void);
void func_BA5F_b1(void);
void func_BAB9_b1(void);
void func_BAC7_b1(void);
void func_BAB2_b1(void);
void func_9A9D_b1(void);
void func_BA9D_b1(void);
void func_9D37_b1(void);
void func_BD37_b1(void);
void func_9D46_b1(void);
void func_BD46_b1(void);
void func_9D88_b1(void);
void func_BD88_b1(void);
void func_9DB7_b1(void);
void func_BDB7_b1(void);
void func_9EA4_b1(void);
void func_9EA6_b1(void);
void func_A0CD_b2(void);
void func_A0CC_b2(void);
void func_A0D0_b2(void);
void func_A0F1_b2(void);
void func_A104_b2(void);
void func_A1E4_b2(void);
void func_A286_b2(void);
void func_A289_b2(void);
void func_A290_b2(void);
void func_A293_b2(void);
void func_AD79_b2(void);
void func_AE21_b2(void);
void func_B31F_b2(void);
void func_B353_b2(void);
void func_B967_b2(void);
void func_BD44_b2(void);
void func_BD5B_b2(void);
void func_BEA6_b2(void);
void func_A953_b2(void);
void func_BA4C_b2(void);
void func_BAB2_b2(void);
void func_B113_b2(void);
void func_B387_b2(void);
void func_ABA0_b2(void);
void func_AEA0_b2(void);
void func_B1A0_b2(void);
void func_B406_b2(void);
void func_B60D_b2(void);
void func_B608_b2(void);
void func_B688_b2(void);
void func_B80A_b2(void);
void func_ADCA_b2(void);
void func_AE69_b2(void);
void func_AEEA_b2(void);
void func_B31C_b2(void);
void func_B336_b2(void);
void func_B362_b2(void);
void func_B3E4_b2(void);
void func_BA57_b2(void);
void func_BA6E_b2(void);
void func_B42C_b2(void);
void func_B69E_b2(void);
void func_AEFB_b2(void);
void func_AE26_b2(void);
void func_AE3E_b2(void);
void func_AE4A_b2(void);
void func_AE7D_b2(void);
void func_AE86_b2(void);
void func_AEAB_b2(void);
void func_AEB0_b2(void);
void func_AEB8_b2(void);
void func_AEC4_b2(void);
void func_AECC_b2(void);
void func_AEE2_b2(void);
void func_B9CD_b2(void);
void func_B9E6_b2(void);
void func_AF2E_b2(void);
void func_AF56_b2(void);
void func_AF65_b2(void);
void func_B653_b2(void);
void func_AF72_b2(void);
void func_AF83_b2(void);
void func_AFFD_b2(void);
void func_B007_b2(void);
void func_B01B_b2(void);
void func_B025_b2(void);
void func_B9CA_b2(void);
void func_B059_b2(void);
void func_B08B_b2(void);
void func_B0B6_b2(void);
void func_B0CC_b2(void);
void func_B0EF_b2(void);
void func_B9C5_b2(void);
void func_B11A_b2(void);
void func_BA0C_b2(void);
void func_B1CC_b2(void);
void func_B1DD_b2(void);
void func_B14B_b2(void);
void func_B161_b2(void);
void func_B171_b2(void);
void func_B194_b2(void);
void func_B19C_b2(void);
void func_B1EE_b2(void);
void func_B201_b2(void);
void func_B217_b2(void);
void func_B230_b2(void);
void func_B244_b2(void);
void func_B267_b2(void);
void func_B27C_b2(void);
void func_B29A_b2(void);
void func_B2B0_b2(void);
void func_B617_b2(void);
void func_B2C0_b2(void);
void func_B2CD_b2(void);
void func_B7A9_b2(void);
void func_B7B3_b2(void);
void func_B36C_b2(void);
void func_B398_b2(void);
void func_B350_b2(void);
void func_B3B3_b2(void);
void func_B3C3_b2(void);
void func_B3D0_b2(void);
void func_B3EE_b2(void);
void func_B404_b2(void);
void func_B40C_b2(void);
void func_B41F_b2(void);
void func_B45C_b2(void);
void func_B478_b2(void);
void func_B4A8_b2(void);
void func_B4B6_b2(void);
void func_B4CA_b2(void);
void func_B4DB_b2(void);
void func_B4FC_b2(void);
void func_B4F9_b2(void);
void func_AECF_b2(void);
void func_B52A_b2(void);
void func_B518_b2(void);
void func_B9D7_b2(void);
void func_B550_b2(void);
void func_B55D_b2(void);
void func_B590_b2(void);
void func_B570_b2(void);
void func_B57D_b2(void);
void func_B5B4_b2(void);
void func_B5CB_b2(void);
void func_B602_b2(void);
void func_B61C_b2(void);
void func_B624_b2(void);
void func_B633_b2(void);
void func_B644_b2(void);
void func_B6BA_b2(void);
void func_B6D9_b2(void);
void func_B6F2_b2(void);
void func_B701_b2(void);
void func_B726_b2(void);
void func_B74C_b2(void);
void func_B77F_b2(void);
void func_B762_b2(void);
void func_B767_b2(void);
void func_B773_b2(void);
void func_B7BD_b2(void);
void func_B7E1_b2(void);
void func_B7EF_b2(void);
void func_B82F_b2(void);
void func_B843_b2(void);
void func_B863_b2(void);
void func_B86C_b2(void);
void func_B87C_b2(void);
void func_B8AC_b2(void);
void func_B8B8_b2(void);
void func_B951_b2(void);
void func_B93D_b2(void);
void func_B942_b2(void);
void func_B947_b2(void);
void func_B94C_b2(void);
void func_BA4A_b2(void);
void func_BAB8_b2(void);
void func_BADA_b2(void);
void func_BAF4_b2(void);
void func_B9E9_b2(void);
void func_B9F5_b2(void);
void func_B9FA_b2(void);
void func_B10D_b2(void);
void func_A960_b2(void);
void func_ADF6_b2(void);
void func_B28B_b2(void);
void func_B337_b2(void);
void func_B363_b2(void);
void func_BAB3_b2(void);
void func_BB01_b2(void);
void func_B925_b2(void);
void func_B6E9_b2(void);
void func_B69F_b2(void);
void func_B89A_b2(void);
void func_B108_b2(void);
void func_B84D_b2(void);
void func_ADD1_b2(void);
void func_ADE8_b2(void);
void func_ADE1_b2(void);
void func_B0F9_b2(void);
void func_B103_b2(void);
void func_B1A9_b2(void);
void func_B2FA_b2(void);
void func_B3AB_b2(void);
void func_B487_b2(void);
void func_B502_b2(void);
void func_B52F_b2(void);
void func_B5AA_b2(void);
void func_B5DF_b2(void);
void func_B6E8_b2(void);
void func_B717_b2(void);
void func_B732_b2(void);
void func_B78D_b2(void);
void func_B7CD_b2(void);
void func_B7FB_b2(void);
void func_B834_b2(void);
void func_B84C_b2(void);
void func_B85B_b2(void);
void func_B888_b2(void);
void func_B8CE_b2(void);
void func_B8EF_b2(void);
void func_B915_b2(void);
void func_BA89_b2(void);
void func_BAA5_b2(void);
void func_A976_b2(void);
void func_910E_b2(void);
void func_A093_b3(void);
void func_A0A5_b3(void);
void func_A9AE_b3(void);
void func_E5D0(void);
void func_9C0C_b4(void);
void func_98B8_b4(void);
void func_A319_b5(void);
void func_A320_b5(void);
void func_A59D_b6(void);
void func_82CB_b0(void);
void func_82D5_b0(void);
void func_95E0_b1(void);
void func_948B_b1(void);
void func_9562_b1(void);
void func_B63B_b1(void);
void func_9A21_b1(void);
void func_9AB2_b1(void);
void func_9D35_b1(void);
void func_B2B6_b1(void);
void func_B020_b1(void);
void func_BF98_b1(void);
void func_9236_b1(void);
void func_B236_b1(void);
void func_941B_b1(void);
void func_9800_b1(void);
void func_A060_b1(void);
void func_A047_b1(void);
void func_A02D_b1(void);
void func_A48F_b1(void);
void func_9CAB_b1(void);
void func_9996_b1(void);
void func_A504_b1(void);
void func_A0A6_b1(void);
void func_9B9A_b1(void);
void func_9B9C_b1(void);
void func_A4A1_b1(void);
void func_A2A1_b1(void);
void func_A483_b1(void);
void func_A28D_b1(void);
void func_978E_b1(void);
void func_9DA5_b1(void);
void func_9D8A_b1(void);
void func_9E9C_b1(void);
void func_A000_b1(void);
void func_A509_b1(void);
void func_A571_b1(void);
void func_A2AE_b1(void);
void func_9EBD_b1(void);
void func_A550_b1(void);
void func_A261_b1(void);
void func_A090_b1(void);
void func_A3E5_b1(void);
void func_A295_b1(void);
void func_A004_b1(void);
void func_A0A4_b1(void);
void func_A205_b1(void);
void func_9687_b1(void);
void func_9685_b1(void);
void func_95C1_b1(void);
void func_9AC7_b1(void);
void func_A07D_b1(void);
void func_9E70_b1(void);
void func_9E72_b1(void);
void func_A097_b1(void);
void func_9511_b1(void);
void func_963B_b1(void);
void func_96FE_b1(void);
void func_9F98_b1(void);
void func_988C_b1(void);
void func_963F_b1(void);
void func_96BC_b1(void);
void func_9A65_b1(void);
void func_969A_b1(void);
void func_A003_b1(void);
void func_A362_b1(void);
void func_B41B_b1(void);
void func_B63F_b1(void);
void func_96E1_b1(void);
void func_B6E1_b1(void);
void func_B706_b1(void);
void func_97B2_b1(void);
void func_B7B2_b1(void);
void func_B7CE_b1(void);
void func_97AB_b1(void);
void func_B7AB_b1(void);
void func_97DF_b1(void);
void func_B7DF_b1(void);
void func_988A_b1(void);
void func_A6A5_b1(void);
void func_A903_b1(void);
void func_A900_b1(void);
void func_A972_b1(void);
void func_A983_b1(void);
void func_B88A_b1(void);
void func_B8AF_b1(void);
void func_B8B7_b1(void);
void func_B8B9_b1(void);
void func_B8A7_b1(void);
void func_B88C_b1(void);
void func_996C_b1(void);
void func_A9F1_b1(void);
void func_A9FE_b1(void);
void func_A9F4_b1(void);
void func_B96C_b1(void);
void func_BEB8_b2(void);
void func_828B_b0(void);
void func_9D33_b1(void);
void func_9699_b1(void);
void func_969B_b1(void);
void func_96A8_b1(void);
void func_BEE8_b2(void);
void func_BF85_b2(void);
void func_9694_b1(void);
void func_8899_b1(void);
void func_8524_b1(void);
void func_8363_b1(void);
void func_8128_b1(void);
void func_801C_b1(void);
void func_8A7E_b5(void);
void func_8B28_b5(void);
void func_8B5A_b5(void);
void func_8C1A_b5(void);
void func_8C70_b5(void);
void func_8C88_b5(void);
void func_8D2E_b5(void);
void func_8D7E_b5(void);
void func_8DD8_b5(void);
void func_8E00_b5(void);
void func_8E12_b5(void);
void func_8E28_b5(void);
void func_8E30_b5(void);
void func_8E34_b5(void);
void func_8E44_b5(void);
void func_8E54_b5(void);
void func_8E68_b5(void);
void func_8E8C_b5(void);
void func_8EB2_b5(void);
void func_8EC4_b5(void);
void func_8501_b5(void);
void func_855A_b5(void);
void func_852E_b5(void);
void func_84FE_b5(void);
void func_8608_b5(void);
void func_8633_b5(void);
void func_8662_b5(void);
void func_86C6_b5(void);
void func_86EB_b5(void);
void func_86A5_b5(void);
void func_8750_b5(void);
void func_8793_b5(void);
void func_879A_b5(void);
void func_ADCB_b2(void);
void func_AE6A_b2(void);
void func_AEEB_b2(void);
void func_AEEE_b2(void);
void func_AFC4_b2(void);
void func_AFC7_b2(void);
void func_AFA3_b2(void);
void func_AFA6_b2(void);
void func_AFDE_b2(void);
void func_B07A_b2(void);
void func_B126_b2(void);
void func_B1F8_b2(void);
void func_B250_b2(void);
void func_B31D_b2(void);
void func_B3E5_b2(void);
void func_BA10_b2(void);
void func_BA29_b2(void);
void func_BA86_b2(void);
void func_BB6B_b2(void);
void func_BB6E_b2(void);
void func_BB84_b2(void);
void func_BBD8_b2(void);
void func_BBDB_b2(void);
void func_BBE4_b2(void);
void func_BBE7_b2(void);
void func_BC00_b2(void);
void func_BC4B_b2(void);
void func_BCFA_b2(void);
void func_BD03_b2(void);
void func_BDC2_b2(void);
void func_BA58_b2(void);
void func_BA6F_b2(void);
void func_BCE1_b2(void);
void func_BCE4_b2(void);
void func_BB40_b2(void);
void func_BB52_b2(void);
void func_BFB6_b2(void);
void func_B8C9_b2(void);
void func_B8CF_b2(void);
void func_B8EA_b2(void);
void func_B929_b2(void);
void func_B92D_b2(void);
void func_B931_b2(void);
void func_B935_b2(void);
void func_B938_b2(void);
void func_B909_b2(void);
void func_B90C_b2(void);
void func_B1AA_b2(void);
void func_B1B0_b2(void);
void func_B1B6_b2(void);
void func_B1B8_b2(void);
void func_B42D_b2(void);
void func_B488_b2(void);
void func_B503_b2(void);
void func_B530_b2(void);
void func_B5AB_b2(void);
void func_AF4B_b2(void);
void func_B5E0_b2(void);
void func_B7CE_b2(void);
void func_B7D5_b2(void);
void func_B85C_b2(void);
void func_B733_b2(void);
void func_AEFC_b2(void);
void func_AF05_b2(void);
void func_B3AC_b2(void);
void func_B718_b2(void);
void func_ADE2_b2(void);
void func_B0FA_b2(void);
void func_B78E_b2(void);
void func_B794_b2(void);
void func_B79A_b2(void);
void func_B7FC_b2(void);
void func_B889_b2(void);
void func_B835_b2(void);
void func_B2FB_b2(void);
void func_B301_b2(void);
void func_B307_b2(void);
void func_B9E7_b2(void);
void func_BA0D_b2(void);
void func_A9C1_b2(void);
void func_A84D_b2(void);
void func_EFC1(void);
void func_EFD1(void);
void func_EFC3(void);
void func_EFD6(void);
void func_8AC6_b5(void);
void func_8ADC_b5(void);
void func_8ADE_b5(void);
void func_8BD8_b5(void);
void func_8BDA_b5(void);
void func_8C07_b5(void);
void func_8D6B_b5(void);
void func_8D84_b5(void);
void func_8E4A_b5(void);
void func_854F_b5(void);
void func_8783_b5(void);
void func_AFB2_b2(void);
void func_B062_b2(void);
void func_B240_b2(void);
void func_BBEC_b2(void);
void func_BDB4_b2(void);
void func_B4F0_b2(void);
void func_B4F2_b2(void);
void func_AD7D_b2(void);
void func_AD97_b2(void);
void func_B482_b2(void);
void func_BFB6_b0(void);
void func_C018(void);
void func_C021(void);
void func_C030(void);
void func_C045(void);
void func_C054(void);
void func_C087(void);
void func_C08A(void);
void func_A01B_b1(void);
void func_A020_b1(void);
void func_A01D_b1(void);
void func_A127_b1(void);
void func_A523_b1(void);
void func_B170_b1(void);
void func_B173_b1(void);
void func_B176_b1(void);
void func_B179_b1(void);
void func_B9A3_b1(void);
void func_B9B9_b1(void);
void func_B9A5_b1(void);
void func_BAF8_b1(void);
void func_BB00_b1(void);
void func_BB0E_b1(void);
void func_BBE5_b1(void);
void func_BCE5_b1(void);
void func_BDBE_b1(void);
void func_BD00_b1(void);
void func_BD51_b1(void);
void func_B934_b1(void);
void func_BC0C_b1(void);
void func_BC0F_b1(void);
void func_B34D_b1(void);
void func_B2AC_b1(void);
void func_B2BC_b1(void);
void func_B2EB_b1(void);
void func_B2F2_b1(void);
void func_B2F9_b1(void);
void func_B324_b1(void);
void func_B3EA_b1(void);
void func_B3F2_b1(void);
void func_B496_b1(void);
void func_B4A0_b1(void);
void func_B4AA_b1(void);
void func_B4E9_b1(void);
void func_B4FB_b1(void);
void func_B692_b1(void);
void func_B6DF_b1(void);
void func_B752_b1(void);
void func_B837_b1(void);
void func_B8F6_b1(void);
void func_BCD4_b1(void);
void func_ADD0_b2(void);
void func_ADE7_b2(void);
void func_ADF2_b2(void);
void func_B107_b2(void);
void func_B300_b2(void);
void func_B306_b2(void);
void func_B320_b2(void);
void func_B793_b2(void);
void func_B799_b2(void);
void func_BA13_b2(void);
void func_BA2E_b2(void);
void func_BC22_b2(void);
void func_BE5A_b2(void);
void func_A003_b3(void);
void func_A006_b3(void);
void func_A0F4_b3(void);
void func_A191_b3(void);
void func_A11A_b3(void);
void func_A0F7_b3(void);
void func_A111_b3(void);
void func_A193_b3(void);
void func_A3B1_b3(void);
void func_A3C9_b3(void);
void func_A3D7_b3(void);
void func_A3EF_b3(void);
void func_A972_b3(void);
void func_A991_b3(void);
void func_A994_b3(void);
void func_A41E_b3(void);
void func_A424_b3(void);
void func_A42D_b3(void);
void func_A43A_b3(void);
void func_A441_b3(void);
void func_A45C_b3(void);
void func_A462_b3(void);
void func_A475_b3(void);
void func_A49B_b3(void);
void func_A4CE_b3(void);
void func_A4D2_b3(void);
void func_A4E3_b3(void);
void func_A4EA_b3(void);
void func_A506_b3(void);
void func_A523_b3(void);
void func_A541_b3(void);
void func_9812_b4(void);
void func_98A6_b4(void);
void func_A4FD_b5(void);
void func_A500_b5(void);
void func_A522_b5(void);
void func_A52D_b5(void);
void func_A53F_b5(void);
void func_A550_b5(void);
void func_A559_b5(void);
void func_A574_b5(void);
void func_A594_b5(void);
void func_A5A0_b5(void);
void func_A5A9_b5(void);
void func_A5C0_b5(void);
void func_A5EC_b5(void);
void func_A607_b5(void);
void func_A632_b5(void);
void func_A661_b5(void);
void func_A686_b5(void);
void func_A691_b5(void);
void func_A6A4_b5(void);
void func_A6A6_b5(void);
void func_A6B7_b5(void);
void func_A6BE_b5(void);
void func_A6C5_b5(void);
void func_A6EA_b5(void);
void func_A70F_b5(void);
void func_A72F_b5(void);
void func_A74F_b5(void);
void func_A76F_b5(void);
void func_A78F_b5(void);
void func_A792_b5(void);
void func_A799_b5(void);
void func_A7A0_b5(void);
void func_AA7D_b5(void);
void func_AA9D_b5(void);
void func_AABD_b5(void);
void func_AADD_b5(void);
void func_AAFD_b5(void);
void func_AB09_b5(void);
void func_AB27_b5(void);
void func_AB45_b5(void);
void func_AB4D_b5(void);
void func_AB41_b5(void);
void func_BA49_b5(void);
void func_BA1B_b5(void);
void func_BA21_b5(void);
void func_BA3F_b5(void);
void func_B9C8_b5(void);
void func_B979_b5(void);
void func_B2B2_b5(void);
void func_B7B7_b5(void);
void func_AB49_b5(void);
void func_AB59_b5(void);
void func_AB79_b5(void);
void func_AB8F_b5(void);
void func_ABA5_b5(void);
void func_ABD9_b5(void);
void func_ACB3_b5(void);
void func_AD2D_b5(void);
void func_AD81_b5(void);
void func_AD85_b5(void);
void func_ABC5_b5(void);
void func_AC19_b5(void);
void func_AC6F_b5(void);
void func_AC87_b5(void);
void func_ACAF_b5(void);
void func_ACCB_b5(void);
void func_ACF9_b5(void);
void func_AD13_b5(void);
void func_AD57_b5(void);
void func_AD7D_b5(void);
void func_AD9D_b5(void);
void func_ADBD_b5(void);
void func_9BE5_b1(void);
void func_9CE5_b1(void);
void func_99A3_b1(void);
void func_9AF8_b1(void);
void func_9C0C_b1(void);
void func_9C63_b1(void);
void func_BC63_b1(void);
void func_9CD4_b1(void);
void func_B366_b2(void);
void func_B4E8_b2(void);
void func_B842_b2(void);
void func_BCA0_b2(void);
void func_BE54_b2(void);
void func_BCE0_b2(void);
void func_BBB1_b2(void);
void func_BBC4_b2(void);
void func_BC2C_b2(void);
void func_BC54_b2(void);
void func_BC70_b2(void);
void func_BC91_b2(void);
void func_BC96_b2(void);
void func_BD20_b2(void);
void func_BD63_b2(void);
void func_BD88_b2(void);
void func_BD8E_b2(void);
void func_BDE0_b2(void);
void func_BE00_b2(void);
void func_BE25_b2(void);
void func_BE4C_b2(void);
void func_BE55_b2(void);
void func_BC1D_b2(void);
void func_BD95_b2(void);
void func_BD98_b2(void);
void func_BE7B_b2(void);
void func_987F_b4(void);
void func_8D00_b5(void);
void func_9800_b5(void);
void func_9803_b5(void);
void func_9809_b5(void);
void func_980F_b5(void);
void func_9C08_b1(void);
void func_9C18_b1(void);
void func_9C1A_b1(void);
void func_B7D9_b2(void);
void func_A9BE_b2(void);
void func_BB24_b2(void);
void func_BB95_b2(void);
void func_98A3_b4(void);

int call_by_address_cb(uint16_t addr, int _caller_bank) {
    if (addr < 0x8000) { return nes_interp_dispatch(addr); }
    extern int g_mmc3_win_bank8k[4];
    /* MMC3: resolve the target through the live 8KB bank of its CPU
     * window ($8000/$A000/$C000/$E000).  g_mmc3_win_bank8k is mode-aware
     * (PRG mode 1 fixes $8000 to the second-to-last bank and swaps $C000
     * via R6 — e.g. SMB3), so this stays correct in both PRG modes.
     * Rebase addr into the recompiler's layout: switchable 16KB banks are
     * generated at $8000/$A000 offsets, the fixed pair at $C000/$E000. */
    uint16_t _cpu_addr = addr;
    int _w = (addr >> 13) & 3;
    int _b8 = g_mmc3_win_bank8k[_w];
    int _bank = _b8 >> 1;
    (void)_caller_bank; /* window resolution is authoritative; see miss default */
    addr = (uint16_t)(((_bank == 7) ? 0xC000 : 0x8000)
                      + ((_b8 & 1) ? 0x2000 : 0) + (addr & 0x1FFF));
_dispatch_retry:
    switch (addr) {
        case 0xFF90:
            func_FF90(); break;
        case 0xFFA9:
            func_FFA9(); break;
        case 0xFFAE:
            func_FFAE(); break;
        case 0xFF91:
            func_FF91(); break;
        case 0xFFC0:
            func_FFC0(); break;
        case 0xFFE5:
            func_FFE5(); break;
        case 0xFFDE:
            func_FFDE(); break;
        case 0xFFE0:
            func_FFE0(); break;
        case 0xFFC8:
            func_FFC8(); break;
        case 0xFFC3:
            func_FFC3(); break;
        case 0xFFB0:
            func_FFB0(); break;
        case 0xFFD4:
            func_FFD4(); break;
        case 0xFFA1:
            func_FFA1(); break;
        case 0xFFCE:
            func_FFCE(); break;
        case 0xFFBB:
            func_FFBB(); break;
        case 0xFFE8:
            func_FFE8(); break;
        case 0xFF9A:
            func_FF9A(); break;
        case 0xFFA4:
            func_FFA4(); break;
        case 0xFFD9:
            func_FFD9(); break;
        case 0xFFD7:
            func_FFD7(); break;
        case 0xFFD6:
            func_FFD6(); break;
        case 0xFF95:
            func_FF95(); break;
        case 0xFFA7:
            func_FFA7(); break;
        case 0xFFB3:
            func_FFB3(); break;
        case 0xFFEF:
            func_FFEF(); break;
        case 0xFFE7:
            func_FFE7(); break;
        case 0xFF9C:
            func_FF9C(); break;
        case 0xFF94:
            func_FF94(); break;
        case 0xFF92:
            func_FF92(); break;
        case 0xFFC5:
            func_FFC5(); break;
        case 0xFFA6:
            func_FFA6(); break;
        case 0xFFAB:
            func_FFAB(); break;
        case 0xFFB9:
            func_FFB9(); break;
        case 0xFFBE:
            func_FFBE(); break;
        case 0xFFEA:
            func_FFEA(); break;
        case 0xFFEC:
            func_FFEC(); break;
        case 0xFCCD:
            func_FCCD(); break;
        case 0xFD4C:
            func_FD4C(); break;
        case 0xFD2A:
            func_FD2A(); break;
        case 0xFD8F:
            func_FD8F(); break;
        case 0xFDDE:
            func_FDDE(); break;
        case 0xFDAA:
            func_FDAA(); break;
        case 0xFCE1:
            func_FCE1(); break;
        case 0xFDA3:
            func_FDA3(); break;
        case 0xFCFF:
            func_FCFF(); break;
        case 0xFD7D:
            func_FD7D(); break;
        case 0xFD0D:
            func_FD0D(); break;
        case 0xFDD1:
            func_FDD1(); break;
        case 0xFCCE:
            func_FCCE(); break;
        case 0xFCE7:
            func_FCE7(); break;
        case 0xFD79:
            func_FD79(); break;
        case 0xFD6B:
            func_FD6B(); break;
        case 0xFD0A:
            func_FD0A(); break;
        case 0xFDB7:
            func_FDB7(); break;
        case 0xFCFB:
            func_FCFB(); break;
        case 0xFCFC:
            func_FCFC(); break;
        case 0xFCED:
            func_FCED(); break;
        case 0xFCEC:
            func_FCEC(); break;
        case 0xFD06:
            func_FD06(); break;
        case 0xFD27:
            func_FD27(); break;
        case 0xFD2F:
            func_FD2F(); break;
        case 0xFD35:
            func_FD35(); break;
        case 0xFD3A:
            func_FD3A(); break;
        case 0xFD32:
            func_FD32(); break;
        case 0xFD03:
            func_FD03(); break;
        case 0xFD10:
            func_FD10(); break;
        case 0xFD16:
            func_FD16(); break;
        case 0xFD93:
            func_FD93(); break;
        case 0xFD46:
            func_FD46(); break;
        case 0xFD83:
            func_FD83(); break;
        case 0xFCEA:
            func_FCEA(); break;
        case 0xFD18:
            func_FD18(); break;
        case 0xFD12:
            func_FD12(); break;
        case 0xFD69:
            func_FD69(); break;
        case 0xFD7C:
            func_FD7C(); break;
        case 0xFD64:
            func_FD64(); break;
        case 0xFD6D:
            func_FD6D(); break;
        case 0xFCD0:
            func_FCD0(); break;
        case 0xFD02:
            func_FD02(); break;
        case 0xFCF4:
            func_FCF4(); break;
        case 0xFD60:
            func_FD60(); break;
        case 0xFDAF:
            func_FDAF(); break;
        case 0xFD97:
            func_FD97(); break;
        case 0xFD9B:
            func_FD9B(); break;
        case 0xFCE5:
            func_FCE5(); break;
        case 0xFCCF:
            func_FCCF(); break;
        case 0xFCF2:
            func_FCF2(); break;
        case 0xFCEF:
            func_FCEF(); break;
        case 0xFCF8:
            func_FCF8(); break;
        case 0xFD09:
            func_FD09(); break;
        case 0xFD1F:
            func_FD1F(); break;
        case 0xFD14:
            func_FD14(); break;
        case 0xFD49:
            func_FD49(); break;
        case 0xFD22:
            func_FD22(); break;
        case 0xFD3F:
            func_FD3F(); break;
        case 0xFD3C:
            func_FD3C(); break;
        case 0xFCDE:
            func_FCDE(); break;
        case 0xFDDC:
            func_FDDC(); break;
        case 0xFD74:
            func_FD74(); break;
        case 0xFD37:
            func_FD37(); break;
        case 0xFD41:
            func_FD41(); break;
        case 0xFDCF:
            func_FDCF(); break;
        case 0xFDCB:
            func_FDCB(); break;
        case 0xFDC5:
            func_FDC5(); break;
        case 0xFD95:
            func_FD95(); break;
        case 0xFDB5:
            func_FDB5(); break;
        case 0xFD85:
            func_FD85(); break;
        case 0xFD86:
            func_FD86(); break;
        case 0xFD9D:
            func_FD9D(); break;
        case 0xFDB1:
            func_FDB1(); break;
        case 0xFD8A:
            func_FD8A(); break;
        case 0xFD5B:
            func_FD5B(); break;
        case 0xFC22:
            func_FC22(); break;
        case 0xFC29:
            func_FC29(); break;
        case 0xFC2A:
            func_FC2A(); break;
        case 0xFC31:
            func_FC31(); break;
        case 0xFC24:
            func_FC24(); break;
        case 0xFC34:
            func_FC34(); break;
        case 0xFC3C:
            func_FC3C(); break;
        case 0xFC3F:
            func_FC3F(); break;
        case 0xFC2D:
            func_FC2D(); break;
        case 0xFC37:
            func_FC37(); break;
        case 0xFC39:
            func_FC39(); break;
        case 0xFC2B:
            func_FC2B(); break;
        case 0xC0B1:
            func_C0B1(); break;
        case 0xC24C:
            func_C24C(); break;
        case 0xC0C9:
            func_C0C9(); break;
        case 0xC0F1:
            func_C0F1(); break;
        case 0xC221:
            func_C221(); break;
        case 0xC0BE:
            func_C0BE(); break;
        case 0xC29E:
            func_C29E(); break;
        case 0xC0ED:
            func_C0ED(); break;
        case 0xC2AD:
            func_C2AD(); break;
        case 0xC28D:
            func_C28D(); break;
        case 0xC26D:
            func_C26D(); break;
        case 0xC1F7:
            func_C1F7(); break;
        case 0xC0E0:
            func_C0E0(); break;
        case 0xC2B0:
            func_C2B0(); break;
        case 0xC1B5:
            func_C1B5(); break;
        case 0xC0F3:
            func_C0F3(); break;
        case 0xC13E:
            func_C13E(); break;
        case 0xC27E:
            func_C27E(); break;
        case 0xC0FE:
            func_C0FE(); break;
        case 0xC200:
            func_C200(); break;
        case 0xC2BE:
            func_C2BE(); break;
        case 0xC0F7:
            func_C0F7(); break;
        case 0xC123:
            func_C123(); break;
        case 0xC124:
            func_C124(); break;
        case 0xC223:
            func_C223(); break;
        case 0xC128:
            func_C128(); break;
        case 0xC228:
            func_C228(); break;
        case 0xC1BA:
            func_C1BA(); break;
        case 0xC194:
            func_C194(); break;
        case 0xC121:
            func_C121(); break;
        case 0xC2AB:
            func_C2AB(); break;
        case 0xC2B4:
            func_C2B4(); break;
        case 0xC2B6:
            func_C2B6(); break;
        case 0xC0E5:
            func_C0E5(); break;
        case 0xC1C0:
            func_C1C0(); break;
        case 0xC0E8:
            func_C0E8(); break;
        case 0xC0C1:
            func_C0C1(); break;
        case 0xC18E:
            func_C18E(); break;
        case 0xC10A:
            func_C10A(); break;
        case 0xC10F:
            func_C10F(); break;
        case 0xC100:
            func_C100(); break;
        case 0xC107:
            func_C107(); break;
        case 0xC1CF:
            func_C1CF(); break;
        case 0xC111:
            func_C111(); break;
        case 0xC2C0:
            func_C2C0(); break;
        case 0xC1C2:
            func_C1C2(); break;
        case 0xC115:
            func_C115(); break;
        case 0xC218:
            func_C218(); break;
        case 0xC2A1:
            func_C2A1(); break;
        case 0xC14C:
            func_C14C(); break;
        case 0xC198:
            func_C198(); break;
        case 0xC20B:
            func_C20B(); break;
        case 0xC207:
            func_C207(); break;
        case 0xC15A:
            func_C15A(); break;
        case 0xC203:
            func_C203(); break;
        case 0xC102:
            func_C102(); break;
        case 0xC1BC:
            func_C1BC(); break;
        case 0xC120:
            func_C120(); break;
        case 0xC183:
            func_C183(); break;
        case 0xC191:
            func_C191(); break;
        case 0xC1E4:
            func_C1E4(); break;
        case 0xC0EB:
            func_C0EB(); break;
        case 0xC0D7:
            func_C0D7(); break;
        case 0xC0BC:
            func_C0BC(); break;
        case 0xC1A8:
            func_C1A8(); break;
        case 0xC28B:
            func_C28B(); break;
        case 0xC1B7:
            func_C1B7(); break;
        case 0xC2B2:
            func_C2B2(); break;
        case 0xC299:
            func_C299(); break;
        case 0xC244:
            func_C244(); break;
        case 0xC270:
            func_C270(); break;
        case 0xC252:
            func_C252(); break;
        case 0xC258:
            func_C258(); break;
        case 0xC104:
            func_C104(); break;
        case 0xC205:
            func_C205(); break;
        case 0xC117:
            func_C117(); break;
        case 0xC215:
            func_C215(); break;
        case 0xC1BE:
            func_C1BE(); break;
        case 0xC240:
            func_C240(); break;
        case 0xC1F2:
            func_C1F2(); break;
        case 0xC141:
            func_C141(); break;
        case 0xC14E:
            func_C14E(); break;
        case 0xC24F:
            func_C24F(); break;
        case 0xC269:
            func_C269(); break;
        case 0xC286:
            func_C286(); break;
        case 0xC296:
            func_C296(); break;
        case 0xC282:
            func_C282(); break;
        case 0xC238:
            func_C238(); break;
        case 0xC23A:
            func_C23A(); break;
        case 0xC149:
            func_C149(); break;
        case 0xC169:
            func_C169(); break;
        case 0xC16B:
            func_C16B(); break;
        case 0xC290:
            func_C290(); break;
        case 0xC267:
            func_C267(); break;
        case 0xC293:
            func_C293(); break;
        case 0xC19A:
            func_C19A(); break;
        case 0xC236:
            func_C236(); break;
        case 0xC23E:
            func_C23E(); break;
        case 0xC25E:
            func_C25E(); break;
        case 0xC261:
            func_C261(); break;
        case 0xC1E2:
            func_C1E2(); break;
        case 0xC234:
            func_C234(); break;
        case 0xC1EA:
            func_C1EA(); break;
        case 0xC21A:
            func_C21A(); break;
        case 0xC26B:
            func_C26B(); break;
        case 0xC16F:
            func_C16F(); break;
        case 0xC209:
            func_C209(); break;
        case 0xC0DC:
            func_C0DC(); break;
        case 0xC13A:
            func_C13A(); break;
        case 0xC226:
            func_C226(); break;
        case 0xC12C:
            func_C12C(); break;
        case 0xC1DC:
            func_C1DC(); break;
        case 0xC0EF:
            func_C0EF(); break;
        case 0xC0E2:
            func_C0E2(); break;
        case 0xFC9E:
            func_FC9E(); break;
        case 0xFCAE:
            func_FCAE(); break;
        case 0xFCC9:
            func_FCC9(); break;
        case 0xFCA3:
            func_FCA3(); break;
        case 0xFCBE:
            func_FCBE(); break;
        case 0xFCBF:
            func_FCBF(); break;
        case 0xFCA9:
            func_FCA9(); break;
        case 0xFCC4:
            func_FCC4(); break;
        case 0xFCAC:
            func_FCAC(); break;
        case 0xFCBB:
            func_FCBB(); break;
        case 0xFCB4:
            func_FCB4(); break;
        case 0xFCB6:
            func_FCB6(); break;
        case 0xFCA0:
            func_FCA0(); break;
        case 0xFCC7:
            func_FCC7(); break;
        case 0xFCC2:
            func_FCC2(); break;
        case 0xFCCC:
            func_FCCC(); break;
        case 0xFCA5:
            func_FCA5(); break;
        case 0xFDEF:
            func_FDEF(); break;
        case 0xFDF7:
            func_FDF7(); break;
        case 0xFDF8:
            func_FDF8(); break;
        case 0xFDF5:
            func_FDF5(); break;
        case 0xFDF3:
            func_FDF3(); break;
        case 0xFDF1:
            func_FDF1(); break;
        case 0x8006:
            switch (_bank) {
                case 7: func_C006(); break;
                case 0: func_8006_b0(); break;
                case 1: func_8006_b1(); break;
                case 2: func_8006_b2(); break;
                case 4: func_8006_b4(); break;
                case 5: func_8006_b5(); break;
                case 6: func_8006_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xFC42:
            func_FC42(); break;
        case 0xFC4D:
            func_FC4D(); break;
        case 0xFC70:
            func_FC70(); break;
        case 0xFC84:
            func_FC84(); break;
        case 0xFC81:
            func_FC81(); break;
        case 0xFC6D:
            func_FC6D(); break;
        case 0xFC87:
            func_FC87(); break;
        case 0xFC69:
            func_FC69(); break;
        case 0xFC9A:
            func_FC9A(); break;
        case 0xFC8D:
            func_FC8D(); break;
        case 0xFC90:
            func_FC90(); break;
        case 0xFC95:
            func_FC95(); break;
        case 0xFC9B:
            func_FC9B(); break;
        case 0xFC98:
            func_FC98(); break;
        case 0xFC61:
            func_FC61(); break;
        case 0xFC7F:
            func_FC7F(); break;
        case 0xFC50:
            func_FC50(); break;
        case 0xFC4F:
            func_FC4F(); break;
        case 0xFDF9:
            func_FDF9(); break;
        case 0xFDFD:
            func_FDFD(); break;
        case 0xFE00:
            func_FE00(); break;
        case 0xFE01:
            func_FE01(); break;
        case 0xFE03:
            func_FE03(); break;
        case 0xFDFB:
            func_FDFB(); break;
        case 0xFE04:
            func_FE04(); break;
        case 0xFE20:
            func_FE20(); break;
        case 0xFE23:
            func_FE23(); break;
        case 0xFE16:
            func_FE16(); break;
        case 0xFE11:
            func_FE11(); break;
        case 0xFE09:
            func_FE09(); break;
        case 0xFE07:
            func_FE07(); break;
        case 0xFE0E:
            func_FE0E(); break;
        case 0xFE54:
            func_FE54(); break;
        case 0xFE5C:
            func_FE5C(); break;
        case 0xFE65:
            func_FE65(); break;
        case 0xFE58:
            func_FE58(); break;
        case 0xFE62:
            func_FE62(); break;
        case 0xFC00:
            func_FC00(); break;
        case 0xFC04:
            func_FC04(); break;
        case 0xFC0F:
            func_FC0F(); break;
        case 0xFC02:
            func_FC02(); break;
        case 0xFC06:
            func_FC06(); break;
        case 0xFC0B:
            func_FC0B(); break;
        case 0xFC1A:
            func_FC1A(); break;
        case 0xFC13:
            func_FC13(); break;
        case 0xFC15:
            func_FC15(); break;
        case 0xFC18:
            func_FC18(); break;
        case 0xFC08:
            func_FC08(); break;
        case 0xC46F:
            func_C46F(); break;
        case 0xC49A:
            func_C49A(); break;
        case 0xC48E:
            func_C48E(); break;
        case 0xC488:
            func_C488(); break;
        case 0xC48A:
            func_C48A(); break;
        case 0xC49C:
            func_C49C(); break;
        case 0xC482:
            func_C482(); break;
        case 0xC48C:
            func_C48C(); break;
        case 0xC484:
            func_C484(); break;
        case 0xC4A6:
            func_C4A6(); break;
        case 0xC471:
            func_C471(); break;
        case 0xC497:
            func_C497(); break;
        case 0xC49F:
            func_C49F(); break;
        case 0xC4B4:
            func_C4B4(); break;
        case 0xC4BE:
            func_C4BE(); break;
        case 0xC4C5:
            func_C4C5(); break;
        case 0xC4CA:
            func_C4CA(); break;
        case 0xC4D9:
            func_C4D9(); break;
        case 0xC4C3:
            func_C4C3(); break;
        case 0xC4C8:
            func_C4C8(); break;
        case 0xC4CC:
            func_C4CC(); break;
        case 0xC4CE:
            func_C4CE(); break;
        case 0xC4DD:
            func_C4DD(); break;
        case 0xC4BA:
            func_C4BA(); break;
        case 0xC4D6:
            func_C4D6(); break;
        case 0xC41E:
            func_C41E(); break;
        case 0xC420:
            func_C420(); break;
        case 0xC43E:
            func_C43E(); break;
        case 0xC424:
            func_C424(); break;
        case 0xC428:
            func_C428(); break;
        case 0xC42F:
            func_C42F(); break;
        case 0xC43C:
            func_C43C(); break;
        case 0xC435:
            func_C435(); break;
        case 0xC43A:
            func_C43A(); break;
        case 0xC437:
            func_C437(); break;
        case 0xFE8D:
            func_FE8D(); break;
        case 0xFEA0:
            func_FEA0(); break;
        case 0xFEA3:
            func_FEA3(); break;
        case 0xC4FA:
            func_C4FA(); break;
        case 0xC503:
            func_C503(); break;
        case 0xC506:
            func_C506(); break;
        case 0xC507:
            func_C507(); break;
        case 0xC509:
            func_C509(); break;
        case 0xC50A:
            func_C50A(); break;
        case 0xC50C:
            func_C50C(); break;
        case 0xC50F:
            func_C50F(); break;
        case 0xBA43:
            switch (_bank) {
                case 2: func_BA43_b2(); break;
                case 0: func_BA43_b0(); break;
                case 1: func_BA43_b1(); break;
                case 3: func_BA43_b3(); break;
                case 4: func_BA43_b4(); break;
                case 5: func_BA43_b5(); break;
                case 6: func_BA43_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA40:
            switch (_bank) {
                case 2: func_BA40_b2(); break;
                case 6: func_BA40_b6(); break;
                case 0: func_BA40_b0(); break;
                case 1: func_BA40_b1(); break;
                case 3: func_BA40_b3(); break;
                case 4: func_BA40_b4(); break;
                case 5: func_BA40_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC54B:
            func_C54B(); break;
        case 0xC54D:
            func_C54D(); break;
        case 0xC574:
            func_C574(); break;
        case 0xC566:
            func_C566(); break;
        case 0xC555:
            func_C555(); break;
        case 0xC562:
            func_C562(); break;
        case 0xC52F:
            func_C52F(); break;
        case 0xC53C:
            func_C53C(); break;
        case 0xC544:
            func_C544(); break;
        case 0xC531:
            func_C531(); break;
        case 0xC547:
            func_C547(); break;
        case 0xC53A:
            func_C53A(); break;
        case 0xC541:
            func_C541(); break;
        case 0xC69C:
            func_C69C(); break;
        case 0xC69E:
            func_C69E(); break;
        case 0xC6C8:
            func_C6C8(); break;
        case 0xC6A7:
            func_C6A7(); break;
        case 0xC701:
            func_C701(); break;
        case 0xC6FF:
            func_C6FF(); break;
        case 0xC6AB:
            func_C6AB(); break;
        case 0xC6AA:
            func_C6AA(); break;
        case 0xC6A1:
            func_C6A1(); break;
        case 0xC6C5:
            func_C6C5(); break;
        case 0xC6C2:
            func_C6C2(); break;
        case 0xC6FC:
            func_C6FC(); break;
        case 0xC6A3:
            func_C6A3(); break;
        case 0xC704:
            func_C704(); break;
        case 0xC706:
            func_C706(); break;
        case 0xC6D8:
            func_C6D8(); break;
        case 0xC6D1:
            func_C6D1(); break;
        case 0xC6D9:
            func_C6D9(); break;
        case 0xC6D7:
            func_C6D7(); break;
        case 0xC6DC:
            func_C6DC(); break;
        case 0xC6D4:
            func_C6D4(); break;
        case 0xC6A8:
            func_C6A8(); break;
        case 0xC707:
            func_C707(); break;
        case 0xC710:
            func_C710(); break;
        case 0xC723:
            func_C723(); break;
        case 0xC71B:
            func_C71B(); break;
        case 0xC70F:
            func_C70F(); break;
        case 0xC70E:
            func_C70E(); break;
        case 0xC726:
            func_C726(); break;
        case 0xC7FD:
            func_C7FD(); break;
        case 0xC81C:
            func_C81C(); break;
        case 0xC849:
            func_C849(); break;
        case 0xC7CB:
            func_C7CB(); break;
        case 0xC7F7:
            func_C7F7(); break;
        case 0xC907:
            func_C907(); break;
        case 0xC917:
            func_C917(); break;
        case 0xC95D:
            func_C95D(); break;
        case 0xC93B:
            func_C93B(); break;
        case 0xC983:
            func_C983(); break;
        case 0xC905:
            func_C905(); break;
        case 0xC950:
            func_C950(); break;
        case 0xC935:
            func_C935(); break;
        case 0xC936:
            func_C936(); break;
        case 0xC961:
            func_C961(); break;
        case 0xC82B:
            func_C82B(); break;
        case 0xC761:
            func_C761(); break;
        case 0xC802:
            func_C802(); break;
        case 0xC8C9:
            func_C8C9(); break;
        case 0xC948:
            func_C948(); break;
        case 0xC945:
            func_C945(); break;
        case 0xC800:
            func_C800(); break;
        case 0xC86D:
            func_C86D(); break;
        case 0xC806:
            func_C806(); break;
        case 0xC8E8:
            func_C8E8(); break;
        case 0xC8E9:
            func_C8E9(); break;
        case 0xC80A:
            func_C80A(); break;
        case 0xC975:
            func_C975(); break;
        case 0xC86F:
            func_C86F(); break;
        case 0xC95B:
            func_C95B(); break;
        case 0xC953:
            func_C953(); break;
        case 0xC910:
            func_C910(); break;
        case 0xC95F:
            func_C95F(); break;
        case 0xC804:
            func_C804(); break;
        case 0xC955:
            func_C955(); break;
        case 0xC90B:
            func_C90B(); break;
        case 0xC91B:
            func_C91B(); break;
        case 0xC901:
            func_C901(); break;
        case 0xC930:
            func_C930(); break;
        case 0xC74E:
            func_C74E(); break;
        case 0xC787:
            func_C787(); break;
        case 0xC7BF:
            func_C7BF(); break;
        case 0xC909:
            func_C909(); break;
        case 0xC93D:
            func_C93D(); break;
        case 0xC912:
            func_C912(); break;
        case 0xC929:
            func_C929(); break;
        case 0xC92A:
            func_C92A(); break;
        case 0xC90E:
            func_C90E(); break;
        case 0xC986:
            func_C986(); break;
        case 0xC92F:
            func_C92F(); break;
        case 0xC988:
            func_C988(); break;
        case 0xC92E:
            func_C92E(); break;
        case 0xC919:
            func_C919(); break;
        case 0xC924:
            func_C924(); break;
        case 0xC925:
            func_C925(); break;
        case 0xC8AA:
            func_C8AA(); break;
        case 0xC895:
            func_C895(); break;
        case 0xC896:
            func_C896(); break;
        case 0xC9B1:
            func_C9B1(); break;
        case 0xC8DC:
            func_C8DC(); break;
        case 0xC98A:
            func_C98A(); break;
        case 0xC920:
            func_C920(); break;
        case 0xC8FE:
            func_C8FE(); break;
        case 0xC900:
            func_C900(); break;
        case 0xC88A:
            func_C88A(); break;
        case 0xC9AB:
            func_C9AB(); break;
        case 0xC9A3:
            func_C9A3(); break;
        case 0xC922:
            func_C922(); break;
        case 0xC8ED:
            func_C8ED(); break;
        case 0xC835:
            func_C835(); break;
        case 0xC969:
            func_C969(); break;
        case 0xC7EC:
            func_C7EC(); break;
        case 0xC7ED:
            func_C7ED(); break;
        case 0xC932:
            func_C932(); break;
        case 0xC74B:
            func_C74B(); break;
        case 0xC7C3:
            func_C7C3(); break;
        case 0xC831:
            func_C831(); break;
        case 0xC7B2:
            func_C7B2(); break;
        case 0xC770:
            func_C770(); break;
        case 0xC92C:
            func_C92C(); break;
        case 0xC881:
            func_C881(); break;
        case 0xC821:
            func_C821(); break;
        case 0xC758:
            func_C758(); break;
        case 0xC8B9:
            func_C8B9(); break;
        case 0xC868:
            func_C868(); break;
        case 0xC8E3:
            func_C8E3(); break;
        case 0xC77F:
            func_C77F(); break;
        case 0xC765:
            func_C765(); break;
        case 0xC79D:
            func_C79D(); break;
        case 0xC7E6:
            func_C7E6(); break;
        case 0xC763:
            func_C763(); break;
        case 0xC88D:
            func_C88D(); break;
        case 0xC8AC:
            func_C8AC(); break;
        case 0xC990:
            func_C990(); break;
        case 0xC8CE:
            func_C8CE(); break;
        case 0xC8D0:
            func_C8D0(); break;
        case 0xC8CC:
            func_C8CC(); break;
        case 0xC7A1:
            func_C7A1(); break;
        case 0xC7B7:
            func_C7B7(); break;
        case 0xC808:
            func_C808(); break;
        case 0xC903:
            func_C903(); break;
        case 0xC8F1:
            func_C8F1(); break;
        case 0xC7BD:
            func_C7BD(); break;
        case 0xC7C1:
            func_C7C1(); break;
        case 0xC7C9:
            func_C7C9(); break;
        case 0xC7C7:
            func_C7C7(); break;
        case 0xC7E3:
            func_C7E3(); break;
        case 0xC8E1:
            func_C8E1(); break;
        case 0xC99F:
            func_C99F(); break;
        case 0xC8CB:
            func_C8CB(); break;
        case 0xC8B5:
            func_C8B5(); break;
        case 0xC8C3:
            func_C8C3(); break;
        case 0xC8BE:
            func_C8BE(); break;
        case 0xC878:
            func_C878(); break;
        case 0xC8B7:
            func_C8B7(); break;
        case 0xC8AF:
            func_C8AF(); break;
        case 0xC99D:
            func_C99D(); break;
        case 0xC999:
            func_C999(); break;
        case 0xC898:
            func_C898(); break;
        case 0xC8C0:
            func_C8C0(); break;
        case 0xC744:
            func_C744(); break;
        case 0xC864:
            func_C864(); break;
        case 0xC943:
            func_C943(); break;
        case 0xC992:
            func_C992(); break;
        case 0xC97F:
            func_C97F(); break;
        case 0xC957:
            func_C957(); break;
        case 0xC967:
            func_C967(); break;
        case 0xC926:
            func_C926(); break;
        case 0xC91D:
            func_C91D(); break;
        case 0xC994:
            func_C994(); break;
        case 0xC794:
            func_C794(); break;
        case 0xC872:
            func_C872(); break;
        case 0xC75A:
            func_C75A(); break;
        case 0xC942:
            func_C942(); break;
        case 0xC7A2:
            func_C7A2(); break;
        case 0xC810:
            func_C810(); break;
        case 0xC9A7:
            func_C9A7(); break;
        case 0xC934:
            func_C934(); break;
        case 0xC80E:
            func_C80E(); break;
        case 0xC828:
            func_C828(); break;
        case 0xC98E:
            func_C98E(); break;
        case 0xC914:
            func_C914(); break;
        case 0xC941:
            func_C941(); break;
        case 0xC7E4:
            func_C7E4(); break;
        case 0xC7CE:
            func_C7CE(); break;
        case 0xC7FC:
            func_C7FC(); break;
        case 0xC8FC:
            func_C8FC(); break;
        case 0xC7DA:
            func_C7DA(); break;
        case 0xC7AB:
            func_C7AB(); break;
        case 0xC782:
            func_C782(); break;
        case 0xC775:
            func_C775(); break;
        case 0xC742:
            func_C742(); break;
        case 0xC842:
            func_C842(); break;
        case 0xC981:
            func_C981(); break;
        case 0xC8F3:
            func_C8F3(); break;
        case 0xC8F0:
            func_C8F0(); break;
        case 0xC8F6:
            func_C8F6(); break;
        case 0xC790:
            func_C790(); break;
        case 0xE916:
            func_E916(); break;
        case 0xE929:
            func_E929(); break;
        case 0xE91B:
            func_E91B(); break;
        case 0xE921:
            func_E921(); break;
        case 0xE923:
            func_E923(); break;
        case 0xCD00:
            func_CD00(); break;
        case 0xCD4D:
            func_CD4D(); break;
        case 0xCD20:
            func_CD20(); break;
        case 0xCD24:
            func_CD24(); break;
        case 0xCD06:
            func_CD06(); break;
        case 0xCD0E:
            func_CD0E(); break;
        case 0xCD03:
            func_CD03(); break;
        case 0xCD47:
            func_CD47(); break;
        case 0xCD34:
            func_CD34(); break;
        case 0xCD60:
            func_CD60(); break;
        case 0xC520:
            func_C520(); break;
        case 0xC524:
            func_C524(); break;
        case 0xC527:
            func_C527(); break;
        case 0xC528:
            func_C528(); break;
        case 0xC529:
            func_C529(); break;
        case 0xC52B:
            func_C52B(); break;
        case 0xCDA9:
            func_CDA9(); break;
        case 0xCDC6:
            func_CDC6(); break;
        case 0xCDCC:
            func_CDCC(); break;
        case 0xCDD0:
            func_CDD0(); break;
        case 0xCDC8:
            func_CDC8(); break;
        case 0xCDCE:
            func_CDCE(); break;
        case 0xCDB5:
            func_CDB5(); break;
        case 0xCDB1:
            func_CDB1(); break;
        case 0xCDB9:
            func_CDB9(); break;
        case 0xCDB3:
            func_CDB3(); break;
        case 0xCDB7:
            func_CDB7(); break;
        case 0xCDBD:
            func_CDBD(); break;
        case 0xD1B0:
            func_D1B0(); break;
        case 0xD2D0:
            func_D2D0(); break;
        case 0xD2A5:
            func_D2A5(); break;
        case 0xD285:
            func_D285(); break;
        case 0xD1ED:
            func_D1ED(); break;
        case 0xD29D:
            func_D29D(); break;
        case 0xD2F3:
            func_D2F3(); break;
        case 0xD2F2:
            func_D2F2(); break;
        case 0xD2BF:
            func_D2BF(); break;
        case 0xD343:
            func_D343(); break;
        case 0xD1F0:
            func_D1F0(); break;
        case 0xD2A9:
            func_D2A9(); break;
        case 0xD1D9:
            func_D1D9(); break;
        case 0xD1BB:
            func_D1BB(); break;
        case 0xD1CE:
            func_D1CE(); break;
        case 0xD1C8:
            func_D1C8(); break;
        case 0xD1D0:
            func_D1D0(); break;
        case 0xD2B3:
            func_D2B3(); break;
        case 0xD30F:
            func_D30F(); break;
        case 0xD2E0:
            func_D2E0(); break;
        case 0xD235:
            func_D235(); break;
        case 0xD2D2:
            func_D2D2(); break;
        case 0xD2D4:
            func_D2D4(); break;
        case 0xD245:
            func_D245(); break;
        case 0xD21E:
            func_D21E(); break;
        case 0xD301:
            func_D301(); break;
        case 0xD1D2:
            func_D1D2(); break;
        case 0xD299:
            func_D299(); break;
        case 0xD304:
            func_D304(); break;
        case 0xD20B:
            func_D20B(); break;
        case 0xD30B:
            func_D30B(); break;
        case 0xD262:
            func_D262(); break;
        case 0xD20F:
            func_D20F(); break;
        case 0xD306:
            func_D306(); break;
        case 0xD206:
            func_D206(); break;
        case 0xD1FF:
            func_D1FF(); break;
        case 0xD1B4:
            func_D1B4(); break;
        case 0xD1D7:
            func_D1D7(); break;
        case 0xD1CA:
            func_D1CA(); break;
        case 0xD1E1:
            func_D1E1(); break;
        case 0xD1C6:
            func_D1C6(); break;
        case 0xD1C4:
            func_D1C4(); break;
        case 0xD241:
            func_D241(); break;
        case 0xD341:
            func_D341(); break;
        case 0xD2BA:
            func_D2BA(); break;
        case 0xD2E9:
            func_D2E9(); break;
        case 0xD1E8:
            func_D1E8(); break;
        case 0xC693:
            func_C693(); break;
        case 0xC698:
            func_C698(); break;
        case 0xC695:
            func_C695(); break;
        case 0xD458:
            func_D458(); break;
        case 0xD4A0:
            func_D4A0(); break;
        case 0xD4A1:
            func_D4A1(); break;
        case 0xD485:
            func_D485(); break;
        case 0xD4A5:
            func_D4A5(); break;
        case 0xD487:
            func_D487(); break;
        case 0xD4D1:
            func_D4D1(); break;
        case 0xD4B3:
            func_D4B3(); break;
        case 0xD4D2:
            func_D4D2(); break;
        case 0xD4D4:
            func_D4D4(); break;
        case 0xD4CB:
            func_D4CB(); break;
        case 0xD4A7:
            func_D4A7(); break;
        case 0xD4C5:
            func_D4C5(); break;
        case 0xD4E1:
            func_D4E1(); break;
        case 0xD4D6:
            func_D4D6(); break;
        case 0xD4D8:
            func_D4D8(); break;
        case 0xD492:
            func_D492(); break;
        case 0xD4BC:
            func_D4BC(); break;
        case 0x9173:
            switch (_bank) {
                case 2: func_9173_b2(); break;
                case 0: func_9173_b0(); break;
                case 4: func_9173_b4(); break;
                case 5: func_9173_b5(); break;
                case 6: func_9173_b6(); break;
                case 1: func_9173_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD572:
            func_D572(); break;
        case 0xD585:
            func_D585(); break;
        case 0xD5C6:
            func_D5C6(); break;
        case 0xD5EC:
            func_D5EC(); break;
        case 0xD5DF:
            func_D5DF(); break;
        case 0xD5A3:
            func_D5A3(); break;
        case 0xD5CA:
            func_D5CA(); break;
        case 0xD5C2:
            func_D5C2(); break;
        case 0xD5BC:
            func_D5BC(); break;
        case 0xD5D2:
            func_D5D2(); break;
        case 0xD5D4:
            func_D5D4(); break;
        case 0xD5D8:
            func_D5D8(); break;
        case 0xD58C:
            func_D58C(); break;
        case 0xD58F:
            func_D58F(); break;
        case 0xD5C0:
            func_D5C0(); break;
        case 0xD591:
            func_D591(); break;
        case 0xD598:
            func_D598(); break;
        case 0xD5E0:
            func_D5E0(); break;
        case 0xD5E2:
            func_D5E2(); break;
        case 0xD5E9:
            func_D5E9(); break;
        case 0x9176:
            switch (_bank) {
                case 2: func_9176_b2(); break;
                case 0: func_9176_b0(); break;
                case 1: func_9176_b1(); break;
                case 4: func_9176_b4(); break;
                case 5: func_9176_b5(); break;
                case 6: func_9176_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD644:
            func_D644(); break;
        case 0xD64C:
            func_D64C(); break;
        case 0xD69A:
            func_D69A(); break;
        case 0xD6D6:
            func_D6D6(); break;
        case 0xD6BD:
            func_D6BD(); break;
        case 0xD6A1:
            func_D6A1(); break;
        case 0xD651:
            func_D651(); break;
        case 0xD648:
            func_D648(); break;
        case 0xD668:
            func_D668(); break;
        case 0xD6A5:
            func_D6A5(); break;
        case 0xD684:
            func_D684(); break;
        case 0xD688:
            func_D688(); break;
        case 0xD6A3:
            func_D6A3(); break;
        case 0xD6D7:
            func_D6D7(); break;
        case 0xD6D2:
            func_D6D2(); break;
        case 0xD6D4:
            func_D6D4(); break;
        case 0xD6D9:
            func_D6D9(); break;
        case 0xD6B0:
            func_D6B0(); break;
        case 0xD64F:
            func_D64F(); break;
        case 0x9179:
            switch (_bank) {
                case 7: func_D179(); break;
                case 2: func_9179_b2(); break;
                case 0: func_9179_b0(); break;
                case 4: func_9179_b4(); break;
                case 5: func_9179_b5(); break;
                case 6: func_9179_b6(); break;
                case 1: func_9179_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9170:
            switch (_bank) {
                case 2: func_9170_b2(); break;
                case 0: func_9170_b0(); break;
                case 4: func_9170_b4(); break;
                case 5: func_9170_b5(); break;
                case 6: func_9170_b6(); break;
                case 1: func_9170_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCC3C:
            func_CC3C(); break;
        case 0xCC4D:
            func_CC4D(); break;
        case 0xCC85:
            func_CC85(); break;
        case 0xCC8A:
            func_CC8A(); break;
        case 0xCC8E:
            func_CC8E(); break;
        case 0xCA48:
            func_CA48(); break;
        case 0xCAF1:
            func_CAF1(); break;
        case 0xCAF7:
            func_CAF7(); break;
        case 0xCA85:
            func_CA85(); break;
        case 0xCAEB:
            func_CAEB(); break;
        case 0xCA4D:
            func_CA4D(); break;
        case 0xCB30:
            func_CB30(); break;
        case 0xCB31:
            func_CB31(); break;
        case 0xCB1F:
            func_CB1F(); break;
        case 0xCA9B:
            func_CA9B(); break;
        case 0xCA9C:
            func_CA9C(); break;
        case 0xCAC8:
            func_CAC8(); break;
        case 0xCA88:
            func_CA88(); break;
        case 0xCAFB:
            func_CAFB(); break;
        case 0xCACF:
            func_CACF(); break;
        case 0xCB2A:
            func_CB2A(); break;
        case 0xCAFD:
            func_CAFD(); break;
        case 0xCA95:
            func_CA95(); break;
        case 0xCAAA:
            func_CAAA(); break;
        case 0xCA9E:
            func_CA9E(); break;
        case 0xCAD5:
            func_CAD5(); break;
        case 0xCAC6:
            func_CAC6(); break;
        case 0xCA5C:
            func_CA5C(); break;
        case 0xCA60:
            func_CA60(); break;
        case 0xCA5E:
            func_CA5E(); break;
        case 0xCACB:
            func_CACB(); break;
        case 0xCADA:
            func_CADA(); break;
        case 0xCB02:
            func_CB02(); break;
        case 0xCAB9:
            func_CAB9(); break;
        case 0xCB00:
            func_CB00(); break;
        case 0xCB0E:
            func_CB0E(); break;
        case 0xCB07:
            func_CB07(); break;
        case 0xCA8D:
            func_CA8D(); break;
        case 0xCAAF:
            func_CAAF(); break;
        case 0xCAB4:
            func_CAB4(); break;
        case 0xCAB6:
            func_CAB6(); break;
        case 0xCABA:
            func_CABA(); break;
        case 0xCABC:
            func_CABC(); break;
        case 0xCADD:
            func_CADD(); break;
        case 0xCAD7:
            func_CAD7(); break;
        case 0xCA83:
            func_CA83(); break;
        case 0xCB43:
            func_CB43(); break;
        case 0xCA81:
            func_CA81(); break;
        case 0xCAE8:
            func_CAE8(); break;
        case 0xCAE9:
            func_CAE9(); break;
        case 0xCAB1:
            func_CAB1(); break;
        case 0xCA67:
            func_CA67(); break;
        case 0xCB48:
            func_CB48(); break;
        case 0xCB4C:
            func_CB4C(); break;
        case 0xCB86:
            func_CB86(); break;
        case 0xCBA6:
            func_CBA6(); break;
        case 0xCBFF:
            func_CBFF(); break;
        case 0xCBA4:
            func_CBA4(); break;
        case 0xCB81:
            func_CB81(); break;
        case 0xCB54:
            func_CB54(); break;
        case 0xCB96:
            func_CB96(); break;
        case 0xCBCB:
            func_CBCB(); break;
        case 0xCB9E:
            func_CB9E(); break;
        case 0xCB67:
            func_CB67(); break;
        case 0xCB5C:
            func_CB5C(); break;
        case 0xCBB3:
            func_CBB3(); break;
        case 0xCBC8:
            func_CBC8(); break;
        case 0xCBD0:
            func_CBD0(); break;
        case 0xCBDA:
            func_CBDA(); break;
        case 0xCC2A:
            func_CC2A(); break;
        case 0xCC20:
            func_CC20(); break;
        case 0xCC30:
            func_CC30(); break;
        case 0xCB92:
            func_CB92(); break;
        case 0xCB9A:
            func_CB9A(); break;
        case 0xCC0A:
            func_CC0A(); break;
        case 0xCBA0:
            func_CBA0(); break;
        case 0xCC01:
            func_CC01(); break;
        case 0xCBB9:
            func_CBB9(); break;
        case 0xCBBF:
            func_CBBF(); break;
        case 0xCC08:
            func_CC08(); break;
        case 0xCBE4:
            func_CBE4(); break;
        case 0xCC28:
            func_CC28(); break;
        case 0xCBCE:
            func_CBCE(); break;
        case 0xCBFE:
            func_CBFE(); break;
        case 0xCB8C:
            func_CB8C(); break;
        case 0xCC8F:
            func_CC8F(); break;
        case 0xCCA6:
            func_CCA6(); break;
        case 0xCCF4:
            func_CCF4(); break;
        case 0xCCAA:
            func_CCAA(); break;
        case 0xCCBA:
            func_CCBA(); break;
        case 0xCCB5:
            func_CCB5(); break;
        case 0xCCC2:
            func_CCC2(); break;
        case 0xCCBC:
            func_CCBC(); break;
        case 0xCCD0:
            func_CCD0(); break;
        case 0xCC92:
            func_CC92(); break;
        case 0xCC9E:
            func_CC9E(); break;
        case 0xCC98:
            func_CC98(); break;
        case 0xCCA2:
            func_CCA2(); break;
        case 0xCCC7:
            func_CCC7(); break;
        case 0xCCE8:
            func_CCE8(); break;
        case 0xDAC4:
            func_DAC4(); break;
        case 0xDB29:
            func_DB29(); break;
        case 0xDAF2:
            func_DAF2(); break;
        case 0xDAE5:
            func_DAE5(); break;
        case 0xDAE0:
            func_DAE0(); break;
        case 0xDB18:
            func_DB18(); break;
        case 0xDADA:
            func_DADA(); break;
        case 0xDAC9:
            func_DAC9(); break;
        case 0xDADD:
            func_DADD(); break;
        case 0xDB2E:
            func_DB2E(); break;
        case 0xDB0B:
            func_DB0B(); break;
        case 0xDB07:
            func_DB07(); break;
        case 0xDB0E:
            func_DB0E(); break;
        case 0xDB04:
            func_DB04(); break;
        case 0xDB33:
            func_DB33(); break;
        case 0xDC4C:
            func_DC4C(); break;
        case 0xDBD1:
            func_DBD1(); break;
        case 0xDCA9:
            func_DCA9(); break;
        case 0xDCAA:
            func_DCAA(); break;
        case 0xDC3E:
            func_DC3E(); break;
        case 0xDC3F:
            func_DC3F(); break;
        case 0xDBA0:
            func_DBA0(); break;
        case 0xDCA7:
            func_DCA7(); break;
        case 0xDC86:
            func_DC86(); break;
        case 0xDCAF:
            func_DCAF(); break;
        case 0xDCC9:
            func_DCC9(); break;
        case 0xDBDB:
            func_DBDB(); break;
        case 0xDC01:
            func_DC01(); break;
        case 0xDC00:
            func_DC00(); break;
        case 0xDBC9:
            func_DBC9(); break;
        case 0xDBD9:
            func_DBD9(); break;
        case 0xDCA5:
            func_DCA5(); break;
        case 0xDBDC:
            func_DBDC(); break;
        case 0xDC28:
            func_DC28(); break;
        case 0xDC2A:
            func_DC2A(); break;
        case 0xDBA5:
            func_DBA5(); break;
        case 0xDC75:
            func_DC75(); break;
        case 0xDB9E:
            func_DB9E(); break;
        case 0xDC93:
            func_DC93(); break;
        case 0xDC07:
            func_DC07(); break;
        case 0xDC5A:
            func_DC5A(); break;
        case 0xDC0E:
            func_DC0E(); break;
        case 0xDC0B:
            func_DC0B(); break;
        case 0xDBA4:
            func_DBA4(); break;
        case 0xDBB4:
            func_DBB4(); break;
        case 0xDB95:
            func_DB95(); break;
        case 0xDBB6:
            func_DBB6(); break;
        case 0xDBF1:
            func_DBF1(); break;
        case 0xDCC6:
            func_DCC6(); break;
        case 0xDB6B:
            func_DB6B(); break;
        case 0xDBD3:
            func_DBD3(); break;
        case 0xDC02:
            func_DC02(); break;
        case 0xDC03:
            func_DC03(); break;
        case 0xDC8C:
            func_DC8C(); break;
        case 0xDCF0:
            func_DCF0(); break;
        case 0xDD4D:
            func_DD4D(); break;
        case 0xDD08:
            func_DD08(); break;
        case 0xDDC1:
            func_DDC1(); break;
        case 0xDD0D:
            func_DD0D(); break;
        case 0xDD98:
            func_DD98(); break;
        case 0xDD49:
            func_DD49(); break;
        case 0xDD0B:
            func_DD0B(); break;
        case 0xDD03:
            func_DD03(); break;
        case 0xDDA6:
            func_DDA6(); break;
        case 0xDDD7:
            func_DDD7(); break;
        case 0xDDB3:
            func_DDB3(); break;
        case 0xDD5F:
            func_DD5F(); break;
        case 0xDCFD:
            func_DCFD(); break;
        case 0xDD4B:
            func_DD4B(); break;
        case 0xDD21:
            func_DD21(); break;
        case 0xDDA5:
            func_DDA5(); break;
        case 0xDD06:
            func_DD06(); break;
        case 0xDD5A:
            func_DD5A(); break;
        case 0xDDAB:
            func_DDAB(); break;
        case 0xDDAF:
            func_DDAF(); break;
        case 0xDDB9:
            func_DDB9(); break;
        case 0xDDCD:
            func_DDCD(); break;
        case 0xDDB5:
            func_DDB5(); break;
        case 0xDDB7:
            func_DDB7(); break;
        case 0xDD52:
            func_DD52(); break;
        case 0xDCFB:
            func_DCFB(); break;
        case 0xDDCA:
            func_DDCA(); break;
        case 0xDD6B:
            func_DD6B(); break;
        case 0xDD88:
            func_DD88(); break;
        case 0xDCFF:
            func_DCFF(); break;
        case 0xDD90:
            func_DD90(); break;
        case 0xDD40:
            func_DD40(); break;
        case 0xDD7F:
            func_DD7F(); break;
        case 0xDE74:
            func_DE74(); break;
        case 0xDEAE:
            func_DEAE(); break;
        case 0xDE83:
            func_DE83(); break;
        case 0xDEA5:
            func_DEA5(); break;
        case 0xDE95:
            func_DE95(); break;
        case 0xDE8D:
            func_DE8D(); break;
        case 0xDE98:
            func_DE98(); break;
        case 0xE1AB:
            func_E1AB(); break;
        case 0xD8E6:
            func_D8E6(); break;
        case 0xD8ED:
            func_D8ED(); break;
        case 0xD8F6:
            func_D8F6(); break;
        case 0xD99A:
            func_D99A(); break;
        case 0xD9CA:
            func_D9CA(); break;
        case 0xD9BF:
            func_D9BF(); break;
        case 0xD9D8:
            func_D9D8(); break;
        case 0xD9B7:
            func_D9B7(); break;
        case 0xD916:
            func_D916(); break;
        case 0xD9E4:
            func_D9E4(); break;
        case 0xD909:
            func_D909(); break;
        case 0xD9BD:
            func_D9BD(); break;
        case 0xD988:
            func_D988(); break;
        case 0xD997:
            func_D997(); break;
        case 0xD99D:
            func_D99D(); break;
        case 0xD90B:
            func_D90B(); break;
        case 0xD90E:
            func_D90E(); break;
        case 0xD9B9:
            func_D9B9(); break;
        case 0xD903:
            func_D903(); break;
        case 0xD991:
            func_D991(); break;
        case 0xD8FF:
            func_D8FF(); break;
        case 0xD93F:
            func_D93F(); break;
        case 0xD9C6:
            func_D9C6(); break;
        case 0xD8FD:
            func_D8FD(); break;
        case 0xD955:
            func_D955(); break;
        case 0xD9E0:
            func_D9E0(); break;
        case 0xD984:
            func_D984(); break;
        case 0xD9E9:
            func_D9E9(); break;
        case 0xD905:
            func_D905(); break;
        case 0xD8F8:
            func_D8F8(); break;
        case 0xD4F6:
            func_D4F6(); break;
        case 0xD550:
            func_D550(); break;
        case 0xD535:
            func_D535(); break;
        case 0xD500:
            func_D500(); break;
        case 0xD555:
            func_D555(); break;
        case 0xD541:
            func_D541(); break;
        case 0xD50E:
            func_D50E(); break;
        case 0xD506:
            func_D506(); break;
        case 0xD50A:
            func_D50A(); break;
        case 0xD508:
            func_D508(); break;
        case 0xD502:
            func_D502(); break;
        case 0xCFD7:
            func_CFD7(); break;
        case 0xD05E:
            func_D05E(); break;
        case 0xD0C0:
            func_D0C0(); break;
        case 0xD005:
            func_D005(); break;
        case 0xD003:
            func_D003(); break;
        case 0xD050:
            func_D050(); break;
        case 0xD120:
            func_D120(); break;
        case 0xD00A:
            func_D00A(); break;
        case 0xD013:
            func_D013(); break;
        case 0xD008:
            func_D008(); break;
        case 0xD019:
            func_D019(); break;
        case 0xD0E9:
            func_D0E9(); break;
        case 0xD011:
            func_D011(); break;
        case 0xD020:
            func_D020(); break;
        case 0xD021:
            func_D021(); break;
        case 0xD060:
            func_D060(); break;
        case 0xD061:
            func_D061(); break;
        case 0xD000:
            func_D000(); break;
        case 0xD0CA:
            func_D0CA(); break;
        case 0xD032:
            func_D032(); break;
        case 0xD040:
            func_D040(); break;
        case 0xD041:
            func_D041(); break;
        case 0xD049:
            func_D049(); break;
        case 0xD02A:
            func_D02A(); break;
        case 0xD0D0:
            func_D0D0(); break;
        case 0xD0D1:
            func_D0D1(); break;
        case 0xD0AA:
            func_D0AA(); break;
        case 0xD00D:
            func_D00D(); break;
        case 0xD04A:
            func_D04A(); break;
        case 0xD0FB:
            func_D0FB(); break;
        case 0xD0C8:
            func_D0C8(); break;
        case 0xD0FE:
            func_D0FE(); break;
        case 0xD00F:
            func_D00F(); break;
        case 0xD0A1:
            func_D0A1(); break;
        case 0xD091:
            func_D091(); break;
        case 0xD080:
            func_D080(); break;
        case 0xD081:
            func_D081(); break;
        case 0xD055:
            func_D055(); break;
        case 0xD07E:
            func_D07E(); break;
        case 0xD08C:
            func_D08C(); break;
        case 0xD08A:
            func_D08A(); break;
        case 0xD082:
            func_D082(); break;
        case 0xD083:
            func_D083(); break;
        case 0xD08E:
            func_D08E(); break;
        case 0xD079:
            func_D079(); break;
        case 0xD086:
            func_D086(); break;
        case 0xD044:
            func_D044(); break;
        case 0xD09F:
            func_D09F(); break;
        case 0xD04C:
            func_D04C(); break;
        case 0xD0E2:
            func_D0E2(); break;
        case 0xD051:
            func_D051(); break;
        case 0xD015:
            func_D015(); break;
        case 0xD088:
            func_D088(); break;
        case 0xD0E0:
            func_D0E0(); break;
        case 0xD0F0:
            func_D0F0(); break;
        case 0xD0A5:
            func_D0A5(); break;
        case 0xD0EE:
            func_D0EE(); break;
        case 0xD01D:
            func_D01D(); break;
        case 0xD0EA:
            func_D0EA(); break;
        case 0xD0A3:
            func_D0A3(); break;
        case 0xD022:
            func_D022(); break;
        case 0xCFF0:
            func_CFF0(); break;
        case 0xD10F:
            func_D10F(); break;
        case 0xD03C:
            func_D03C(); break;
        case 0xD03D:
            func_D03D(); break;
        case 0xD0BC:
            func_D0BC(); break;
        case 0xD0C4:
            func_D0C4(); break;
        case 0xD023:
            func_D023(); break;
        case 0xD024:
            func_D024(); break;
        case 0xD05C:
            func_D05C(); break;
        case 0xD0CC:
            func_D0CC(); break;
        case 0xD0E4:
            func_D0E4(); break;
        case 0xD0AE:
            func_D0AE(); break;
        case 0xD090:
            func_D090(); break;
        case 0xD0F9:
            func_D0F9(); break;
        case 0xD0DE:
            func_D0DE(); break;
        case 0xD12A:
            func_D12A(); break;
        case 0xD13E:
            func_D13E(); break;
        case 0xD142:
            func_D142(); break;
        case 0xD10A:
            func_D10A(); break;
        case 0xD102:
            func_D102(); break;
        case 0xD05A:
            func_D05A(); break;
        case 0xD104:
            func_D104(); break;
        case 0xD0B8:
            func_D0B8(); break;
        case 0xD14C:
            func_D14C(); break;
        case 0xD01B:
            func_D01B(); break;
        case 0xD09D:
            func_D09D(); break;
        case 0xCFE1:
            func_CFE1(); break;
        case 0xD0D3:
            func_D0D3(); break;
        case 0xD097:
            func_D097(); break;
        case 0xD06B:
            func_D06B(); break;
        case 0xD140:
            func_D140(); break;
        case 0xD0F8:
            func_D0F8(); break;
        case 0xD0F6:
            func_D0F6(); break;
        case 0xD150:
            func_D150(); break;
        case 0xD07A:
            func_D07A(); break;
        case 0xD18D:
            func_D18D(); break;
        case 0xD19B:
            func_D19B(); break;
        case 0xD192:
            func_D192(); break;
        case 0xD18F:
            func_D18F(); break;
        case 0xCDD1:
            func_CDD1(); break;
        case 0xCDEA:
            func_CDEA(); break;
        case 0xCE0E:
            func_CE0E(); break;
        case 0xCE07:
            func_CE07(); break;
        case 0xCE05:
            func_CE05(); break;
        case 0xCE86:
            func_CE86(); break;
        case 0xCEA6:
            func_CEA6(); break;
        case 0xCF11:
            func_CF11(); break;
        case 0xCEB3:
            func_CEB3(); break;
        case 0xCE61:
            func_CE61(); break;
        case 0xCDDD:
            func_CDDD(); break;
        case 0xCE66:
            func_CE66(); break;
        case 0xCE9E:
            func_CE9E(); break;
        case 0xCEF1:
            func_CEF1(); break;
        case 0xCE8D:
            func_CE8D(); break;
        case 0xCEF5:
            func_CEF5(); break;
        case 0xCEF6:
            func_CEF6(); break;
        case 0xCE03:
            func_CE03(); break;
        case 0xCF1F:
            func_CF1F(); break;
        case 0xCF0C:
            func_CF0C(); break;
        case 0xCF00:
            func_CF00(); break;
        case 0xCF14:
            func_CF14(); break;
        case 0xCEE9:
            func_CEE9(); break;
        case 0xCF36:
            func_CF36(); break;
        case 0xCEAA:
            func_CEAA(); break;
        case 0xCECD:
            func_CECD(); break;
        case 0xCED0:
            func_CED0(); break;
        case 0xCECF:
            func_CECF(); break;
        case 0xCECB:
            func_CECB(); break;
        case 0xCED2:
            func_CED2(); break;
        case 0xCE89:
            func_CE89(); break;
        case 0xCE4D:
            func_CE4D(); break;
        case 0xCE20:
            func_CE20(); break;
        case 0xCF23:
            func_CF23(); break;
        case 0xCF0A:
            func_CF0A(); break;
        case 0xCE47:
            func_CE47(); break;
        case 0xCF06:
            func_CF06(); break;
        case 0xCE5A:
            func_CE5A(); break;
        case 0xCEA0:
            func_CEA0(); break;
        case 0xCF03:
            func_CF03(); break;
        case 0xCEC0:
            func_CEC0(); break;
        case 0xCE84:
            func_CE84(); break;
        case 0xCF08:
            func_CF08(); break;
        case 0xCDFC:
            func_CDFC(); break;
        case 0xCED7:
            func_CED7(); break;
        case 0xCDE1:
            func_CDE1(); break;
        case 0xCEFD:
            func_CEFD(); break;
        case 0xCE30:
            func_CE30(); break;
        case 0xCEF8:
            func_CEF8(); break;
        case 0xCEB9:
            func_CEB9(); break;
        case 0xCDE8:
            func_CDE8(); break;
        case 0xCE2A:
            func_CE2A(); break;
        case 0xC513:
            func_C513(); break;
        case 0x9803:
            switch (_bank) {
                case 2: func_9803_b2(); break;
                case 6: func_9803_b6(); break;
                case 0: func_9803_b0(); break;
                case 1: func_9803_b1(); break;
                case 4: func_9803_b4(); break;
                case 5: func_9803_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9806:
            switch (_bank) {
                case 2: func_9806_b2(); break;
                case 0: func_9806_b0(); break;
                case 1: func_9806_b1(); break;
                case 4: func_9806_b4(); break;
                case 5: func_9806_b5(); break;
                case 6: func_9806_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x980C:
            switch (_bank) {
                case 7: func_D80C(); break;
                case 2: func_980C_b2(); break;
                case 0: func_980C_b0(); break;
                case 1: func_980C_b1(); break;
                case 4: func_980C_b4(); break;
                case 5: func_980C_b5(); break;
                case 6: func_980C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x980F:
            switch (_bank) {
                case 7: func_D80F(); break;
                case 2: func_980F_b2(); break;
                case 6: func_980F_b6(); break;
                case 0: func_980F_b0(); break;
                case 1: func_980F_b1(); break;
                case 4: func_980F_b4(); break;
                case 5: func_980F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9809:
            switch (_bank) {
                case 2: func_9809_b2(); break;
                case 0: func_9809_b0(); break;
                case 1: func_9809_b1(); break;
                case 4: func_9809_b4(); break;
                case 6: func_9809_b6(); break;
                case 5: func_9809_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8000:
            switch (_bank) {
                case 7: func_C000(); break;
                case 2: func_8000_b2(); break;
                case 0: func_8000_b0(); break;
                case 6: func_8000_b6(); break;
                case 1: func_8000_b1(); break;
                case 4: func_8000_b4(); break;
                case 5: func_8000_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8002:
            switch (_bank) {
                case 2: func_8002_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC58A:
            func_C58A(); break;
        case 0xC5C4:
            func_C5C4(); break;
        case 0xC59E:
            func_C59E(); break;
        case 0xC58D:
            func_C58D(); break;
        case 0xC58E:
            func_C58E(); break;
        case 0xC5C9:
            func_C5C9(); break;
        case 0xC598:
            func_C598(); break;
        case 0xC5D2:
            func_C5D2(); break;
        case 0xC5CF:
            func_C5CF(); break;
        case 0xC5B6:
            func_C5B6(); break;
        case 0xC58F:
            func_C58F(); break;
        case 0xC5B9:
            func_C5B9(); break;
        case 0xC5B5:
            func_C5B5(); break;
        case 0xC5C2:
            func_C5C2(); break;
        case 0xC5B8:
            func_C5B8(); break;
        case 0xC5C7:
            func_C5C7(); break;
        case 0xC5BF:
            func_C5BF(); break;
        case 0xC5BB:
            func_C5BB(); break;
        case 0xC590:
            func_C590(); break;
        case 0xC5B0:
            func_C5B0(); break;
        case 0xC2C6:
            func_C2C6(); break;
        case 0xC2F0:
            func_C2F0(); break;
        case 0xC321:
            func_C321(); break;
        case 0xC2F7:
            func_C2F7(); break;
        case 0xC2CF:
            func_C2CF(); break;
        case 0xC2EE:
            func_C2EE(); break;
        case 0xC308:
            func_C308(); break;
        case 0xC2FC:
            func_C2FC(); break;
        case 0xC303:
            func_C303(); break;
        case 0xC304:
            func_C304(); break;
        case 0xC2CB:
            func_C2CB(); break;
        case 0xC302:
            func_C302(); break;
        case 0xC30A:
            func_C30A(); break;
        case 0xC306:
            func_C306(); break;
        case 0xC310:
            func_C310(); break;
        case 0xC31C:
            func_C31C(); break;
        case 0xC31E:
            func_C31E(); break;
        case 0xC2E0:
            func_C2E0(); break;
        case 0xC2DD:
            func_C2DD(); break;
        case 0xC2E3:
            func_C2E3(); break;
        case 0xC2CD:
            func_C2CD(); break;
        case 0xC30E:
            func_C30E(); break;
        case 0xC2D9:
            func_C2D9(); break;
        case 0xC30C:
            func_C30C(); break;
        case 0xC314:
            func_C314(); break;
        case 0xC2E5:
            func_C2E5(); break;
        case 0xC2E7:
            func_C2E7(); break;
        case 0xC324:
            func_C324(); break;
        case 0xC3BD:
            func_C3BD(); break;
        case 0xC3DF:
            func_C3DF(); break;
        case 0xC382:
            func_C382(); break;
        case 0xC32F:
            func_C32F(); break;
        case 0xC3C2:
            func_C3C2(); break;
        case 0xC340:
            func_C340(); break;
        case 0xC341:
            func_C341(); break;
        case 0xC400:
            func_C400(); break;
        case 0xC3C4:
            func_C3C4(); break;
        case 0xC3F5:
            func_C3F5(); break;
        case 0xC328:
            func_C328(); break;
        case 0xC414:
            func_C414(); break;
        case 0xC3C9:
            func_C3C9(); break;
        case 0xC3BF:
            func_C3BF(); break;
        case 0xC3E7:
            func_C3E7(); break;
        case 0xC410:
            func_C410(); break;
        case 0xC3DC:
            func_C3DC(); break;
        case 0xC402:
            func_C402(); break;
        case 0xC3A9:
            func_C3A9(); break;
        case 0xC406:
            func_C406(); break;
        case 0xC35A:
            func_C35A(); break;
        case 0xC40A:
            func_C40A(); break;
        case 0xC3B2:
            func_C3B2(); break;
        case 0xC344:
            func_C344(); break;
        case 0xC354:
            func_C354(); break;
        case 0xC3C7:
            func_C3C7(); break;
        case 0xC3E1:
            func_C3E1(); break;
        case 0xC3D7:
            func_C3D7(); break;
        case 0xC416:
            func_C416(); break;
        case 0xC39F:
            func_C39F(); break;
        case 0xC373:
            func_C373(); break;
        case 0xC411:
            func_C411(); break;
        case 0xC3B6:
            func_C3B6(); break;
        case 0xC34C:
            func_C34C(); break;
        case 0xC350:
            func_C350(); break;
        case 0xC358:
            func_C358(); break;
        case 0xC368:
            func_C368(); break;
        case 0xC37A:
            func_C37A(); break;
        case 0xC387:
            func_C387(); break;
        case 0xC390:
            func_C390(); break;
        case 0xC3A5:
            func_C3A5(); break;
        case 0xC33C:
            func_C33C(); break;
        case 0xC370:
            func_C370(); break;
        case 0xC38C:
            func_C38C(); break;
        case 0xC369:
            func_C369(); break;
        case 0xC37C:
            func_C37C(); break;
        case 0xC396:
            func_C396(); break;
        case 0xC3B4:
            func_C3B4(); break;
        case 0xC33E:
            func_C33E(); break;
        case 0xC34E:
            func_C34E(); break;
        case 0xC360:
            func_C360(); break;
        case 0xC361:
            func_C361(); break;
        case 0xC363:
            func_C363(); break;
        case 0xC41B:
            func_C41B(); break;
        case 0xC40F:
            func_C40F(); break;
        case 0xC3CC:
            func_C3CC(); break;
        case 0xC3EF:
            func_C3EF(); break;
        case 0xC1C8:
            func_C1C8(); break;
        case 0xA000:
            switch (_bank) {
                case 7: func_E000(); break;
                case 5: func_A000_b5(); break;
                case 3: func_A000_b3(); break;
                case 1: func_A000_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA11A:
            switch (_bank) {
                case 5: func_A11A_b5(); break;
                case 3: func_A11A_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA135:
            switch (_bank) {
                case 5: func_A135_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA132:
            switch (_bank) {
                case 5: func_A132_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0A1:
            switch (_bank) {
                case 5: func_A0A1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA04F:
            switch (_bank) {
                case 5: func_A04F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA066:
            switch (_bank) {
                case 5: func_A066_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD420:
            func_D420(); break;
        case 0xB368:
            switch (_bank) {
                case 3: func_B368_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEF21:
            func_EF21(); break;
        case 0xF620:
            func_F620(); break;
        case 0xEF24:
            func_EF24(); break;
        case 0xF520:
            func_F520(); break;
        case 0xF52A:
            func_F52A(); break;
        case 0xD405:
            func_D405(); break;
        case 0xCE4E:
            func_CE4E(); break;
        case 0xCE60:
            func_CE60(); break;
        case 0xCE65:
            func_CE65(); break;
        case 0xCE51:
            func_CE51(); break;
        case 0xC847:
            func_C847(); break;
        case 0xCF51:
            func_CF51(); break;
        case 0xD14F:
            func_D14F(); break;
        case 0xD166:
            func_D166(); break;
        case 0xD348:
            func_D348(); break;
        case 0xD34B:
            func_D34B(); break;
        case 0xF720:
            func_F720(); break;
        case 0xC7D2:
            func_C7D2(); break;
        case 0xCF0F:
            func_CF0F(); break;
        case 0xD446:
            func_D446(); break;
        case 0xE6B6:
            func_E6B6(); break;
        case 0xE6B8:
            func_E6B8(); break;
        case 0xD201:
            func_D201(); break;
        case 0xF80A:
            func_F80A(); break;
        case 0xD0CE:
            func_D0CE(); break;
        case 0xB620:
            switch (_bank) {
                case 3: func_B620_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCF4F:
            func_CF4F(); break;
        case 0xC246:
            func_C246(); break;
        case 0xF5FD:
            func_F5FD(); break;
        case 0xF602:
            func_F602(); break;
        case 0xF604:
            func_F604(); break;
        case 0xF600:
            func_F600(); break;
        case 0xF5FF:
            func_F5FF(); break;
        case 0xD210:
            func_D210(); break;
        case 0xC750:
            func_C750(); break;
        case 0xC146:
            func_C146(); break;
        case 0xFC93:
            func_FC93(); break;
        case 0xFE71:
            func_FE71(); break;
        case 0xFE72:
            func_FE72(); break;
        case 0xFE80:
            func_FE80(); break;
        case 0xFE29:
            func_FE29(); break;
        case 0xFE4D:
            func_FE4D(); break;
        case 0xFE36:
            func_FE36(); break;
        case 0xFE50:
            func_FE50(); break;
        case 0xFE2F:
            func_FE2F(); break;
        case 0xFE3F:
            func_FE3F(); break;
        case 0xFE3B:
            func_FE3B(); break;
        case 0xFE3C:
            func_FE3C(); break;
        case 0xFE38:
            func_FE38(); break;
        case 0xFE81:
            func_FE81(); break;
        case 0x8001:
            switch (_bank) {
                case 0: func_8001_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC042:
            func_C042(); break;
        case 0xC07E:
            func_C07E(); break;
        case 0xC818:
            func_C818(); break;
        case 0xC737:
            func_C737(); break;
        case 0xC9B4:
            func_C9B4(); break;
        case 0xCA05:
            func_CA05(); break;
        case 0xC9CA:
            func_C9CA(); break;
        case 0xCA01:
            func_CA01(); break;
        case 0xCA07:
            func_CA07(); break;
        case 0xCA25:
            func_CA25(); break;
        case 0xC9D2:
            func_C9D2(); break;
        case 0xC9D7:
            func_C9D7(); break;
        case 0xC9E6:
            func_C9E6(); break;
        case 0xC9F2:
            func_C9F2(); break;
        case 0xC9E1:
            func_C9E1(); break;
        case 0xC9E3:
            func_C9E3(); break;
        case 0xC9E4:
            func_C9E4(); break;
        case 0xC9C1:
            func_C9C1(); break;
        case 0xCA2E:
            func_CA2E(); break;
        case 0xC9EF:
            func_C9EF(); break;
        case 0xC9F0:
            func_C9F0(); break;
        case 0xC9ED:
            func_C9ED(); break;
        case 0xCA34:
            func_CA34(); break;
        case 0xCA11:
            func_CA11(); break;
        case 0xCA20:
            func_CA20(); break;
        case 0xC9EB:
            func_C9EB(); break;
        case 0xC9C8:
            func_C9C8(); break;
        case 0xC9BD:
            func_C9BD(); break;
        case 0xCA03:
            func_CA03(); break;
        case 0xCA09:
            func_CA09(); break;
        case 0xCA1A:
            func_CA1A(); break;
        case 0xCA22:
            func_CA22(); break;
        case 0xCA0E:
            func_CA0E(); break;
        case 0xCA0B:
            func_CA0B(); break;
        case 0xC9D0:
            func_C9D0(); break;
        case 0xC9B7:
            func_C9B7(); break;
        case 0xC9F4:
            func_C9F4(); break;
        case 0xC9F5:
            func_C9F5(); break;
        case 0xC9E9:
            func_C9E9(); break;
        case 0xC93F:
            func_C93F(); break;
        case 0xEA1D:
            func_EA1D(); break;
        case 0xEA21:
            func_EA21(); break;
        case 0xEA29:
            func_EA29(); break;
        case 0xEA25:
            func_EA25(); break;
        case 0xEA23:
            func_EA23(); break;
        case 0xEA2B:
            func_EA2B(); break;
        case 0xEA28:
            func_EA28(); break;
        case 0xEA26:
            func_EA26(); break;
        case 0xEA01:
            func_EA01(); break;
        case 0xEA0B:
            func_EA0B(); break;
        case 0xEA03:
            func_EA03(); break;
        case 0xEA04:
            func_EA04(); break;
        case 0xEA07:
            func_EA07(); break;
        case 0xEA10:
            func_EA10(); break;
        case 0xEA09:
            func_EA09(); break;
        case 0xEA0E:
            func_EA0E(); break;
        case 0xEA18:
            func_EA18(); break;
        case 0xE930:
            func_E930(); break;
        case 0xE94C:
            func_E94C(); break;
        case 0xE950:
            func_E950(); break;
        case 0xE986:
            func_E986(); break;
        case 0xE93C:
            func_E93C(); break;
        case 0xE936:
            func_E936(); break;
        case 0xE961:
            func_E961(); break;
        case 0xE957:
            func_E957(); break;
        case 0xE980:
            func_E980(); break;
        case 0xE937:
            func_E937(); break;
        case 0xE932:
            func_E932(); break;
        case 0xE982:
            func_E982(); break;
        case 0xE96E:
            func_E96E(); break;
        case 0xE95F:
            func_E95F(); break;
        case 0xE935:
            func_E935(); break;
        case 0xE973:
            func_E973(); break;
        case 0xE979:
            func_E979(); break;
        case 0xE97D:
            func_E97D(); break;
        case 0xE989:
            func_E989(); break;
        case 0xE9D0:
            func_E9D0(); break;
        case 0xE9EF:
            func_E9EF(); break;
        case 0xE9DF:
            func_E9DF(); break;
        case 0xE9C0:
            func_E9C0(); break;
        case 0xE9CA:
            func_E9CA(); break;
        case 0xE9AE:
            func_E9AE(); break;
        case 0xE9B6:
            func_E9B6(); break;
        case 0xE9E9:
            func_E9E9(); break;
        case 0xE9FE:
            func_E9FE(); break;
        case 0xE9E2:
            func_E9E2(); break;
        case 0xE9A9:
            func_E9A9(); break;
        case 0xE994:
            func_E994(); break;
        case 0xE9B8:
            func_E9B8(); break;
        case 0xE9E4:
            func_E9E4(); break;
        case 0xE9F3:
            func_E9F3(); break;
        case 0xE9A1:
            func_E9A1(); break;
        case 0xE997:
            func_E997(); break;
        case 0xE9A3:
            func_E9A3(); break;
        case 0xE999:
            func_E999(); break;
        case 0xE99B:
            func_E99B(); break;
        case 0xE99D:
            func_E99D(); break;
        case 0xE9A5:
            func_E9A5(); break;
        case 0xE9A7:
            func_E9A7(); break;
        case 0xEA00:
            func_EA00(); break;
        case 0xE9BC:
            func_E9BC(); break;
        case 0xE9D2:
            func_E9D2(); break;
        case 0xCD3D:
            func_CD3D(); break;
        case 0xCD13:
            func_CD13(); break;
        case 0xD451:
            func_D451(); break;
        case 0xD2A0:
            func_D2A0(); break;
        case 0xD35F:
            func_D35F(); break;
        case 0xD356:
            func_D356(); break;
        case 0xD385:
            func_D385(); break;
        case 0xD3A5:
            func_D3A5(); break;
        case 0xD3E5:
            func_D3E5(); break;
        case 0xD42C:
            func_D42C(); break;
        case 0xD400:
            func_D400(); break;
        case 0xD402:
            func_D402(); break;
        case 0xD426:
            func_D426(); break;
        case 0xD3A1:
            func_D3A1(); break;
        case 0xD3A7:
            func_D3A7(); break;
        case 0xD398:
            func_D398(); break;
        case 0xD3D2:
            func_D3D2(); break;
        case 0xD3A9:
            func_D3A9(); break;
        case 0xD362:
            func_D362(); break;
        case 0xD442:
            func_D442(); break;
        case 0xD40B:
            func_D40B(); break;
        case 0xD407:
            func_D407(); break;
        case 0xD3B7:
            func_D3B7(); break;
        case 0xD3B9:
            func_D3B9(); break;
        case 0xD428:
            func_D428(); break;
        case 0xD3C6:
            func_D3C6(); break;
        case 0xD3DB:
            func_D3DB(); break;
        case 0xD403:
            func_D403(); break;
        case 0xD34A:
            func_D34A(); break;
        case 0xD34C:
            func_D34C(); break;
        case 0xD445:
            func_D445(); break;
        case 0xD44C:
            func_D44C(); break;
        case 0xD457:
            func_D457(); break;
        case 0xD329:
            func_D329(); break;
        case 0xCCCB:
            func_CCCB(); break;
        case 0xD41A:
            func_D41A(); break;
        case 0x9800:
            switch (_bank) {
                case 7: func_D800(); break;
                case 0: func_9800_b0(); break;
                case 2: func_9800_b2(); break;
                case 4: func_9800_b4(); break;
                case 6: func_9800_b6(); break;
                case 1: func_9800_b1(); break;
                case 5: func_9800_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA384:
            switch (_bank) {
                case 6: func_A384_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA590:
            switch (_bank) {
                case 6: func_A590_b6(); break;
                case 5: func_A590_b5(); break;
                case 0: func_A590_b0(); break;
                case 2: func_A590_b2(); break;
                case 3: func_A590_b3(); break;
                case 4: func_A590_b4(); break;
                case 1: func_A590_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA560:
            switch (_bank) {
                case 6: func_A560_b6(); break;
                case 0: func_A560_b0(); break;
                case 1: func_A560_b1(); break;
                case 2: func_A560_b2(); break;
                case 3: func_A560_b3(); break;
                case 4: func_A560_b4(); break;
                case 5: func_A560_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA504:
            switch (_bank) {
                case 7: func_E504(); break;
                case 6: func_A504_b6(); break;
                case 0: func_A504_b0(); break;
                case 2: func_A504_b2(); break;
                case 3: func_A504_b3(); break;
                case 4: func_A504_b4(); break;
                case 5: func_A504_b5(); break;
                case 1: func_A504_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5CE:
            switch (_bank) {
                case 6: func_A5CE_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD49D:
            func_D49D(); break;
        case 0xD4E9:
            func_D4E9(); break;
        case 0xD601:
            func_D601(); break;
        case 0xD602:
            func_D602(); break;
        case 0xD640:
            func_D640(); break;
        case 0xD63A:
            func_D63A(); break;
        case 0xD638:
            func_D638(); break;
        case 0xD643:
            func_D643(); break;
        case 0xD626:
            func_D626(); break;
        case 0xD603:
            func_D603(); break;
        case 0xD606:
            func_D606(); break;
        case 0xD608:
            func_D608(); break;
        case 0xD736:
            func_D736(); break;
        case 0xD7BB:
            func_D7BB(); break;
        case 0xD7D0:
            func_D7D0(); break;
        case 0xD835:
            func_D835(); break;
        case 0xD7D8:
            func_D7D8(); break;
        case 0xD7E2:
            func_D7E2(); break;
        case 0xD7D6:
            func_D7D6(); break;
        case 0xD865:
            func_D865(); break;
        case 0xD823:
            func_D823(); break;
        case 0xD80F:
            func_D80F(); break;
        case 0xD802:
            func_D802(); break;
        case 0xD807:
            func_D807(); break;
        case 0xD7CE:
            func_D7CE(); break;
        case 0xD7D4:
            func_D7D4(); break;
        case 0xD7FE:
            func_D7FE(); break;
        case 0xD7DA:
            func_D7DA(); break;
        case 0xD7C6:
            func_D7C6(); break;
        case 0xD7C8:
            func_D7C8(); break;
        case 0xD7CC:
            func_D7CC(); break;
        case 0xD817:
            func_D817(); break;
        case 0xD800:
            func_D800(); break;
        case 0xD6F7:
            func_D6F7(); break;
        case 0xD6FF:
            func_D6FF(); break;
        case 0xD703:
            func_D703(); break;
        case 0xD70F:
            func_D70F(); break;
        case 0xD70B:
            func_D70B(); break;
        case 0xD711:
            func_D711(); break;
        case 0xD707:
            func_D707(); break;
        case 0xE5BF:
            func_E5BF(); break;
        case 0xE5CF:
            func_E5CF(); break;
        case 0xE5C1:
            func_E5C1(); break;
        case 0xD720:
            func_D720(); break;
        case 0xD72A:
            func_D72A(); break;
        case 0xD726:
            func_D726(); break;
        case 0xD72C:
            func_D72C(); break;
        case 0xD72D:
            func_D72D(); break;
        case 0xD6E6:
            func_D6E6(); break;
        case 0xD6F1:
            func_D6F1(); break;
        case 0xD6E9:
            func_D6E9(); break;
        case 0xCC60:
            func_CC60(); break;
        case 0xCA59:
            func_CA59(); break;
        case 0xCAA0:
            func_CAA0(); break;
        case 0xCA7A:
            func_CA7A(); break;
        case 0xCCF5:
            func_CCF5(); break;
        case 0xCCF7:
            func_CCF7(); break;
        case 0xCCF9:
            func_CCF9(); break;
        case 0xDB28:
            func_DB28(); break;
        case 0xDBF9:
            func_DBF9(); break;
        case 0xDB75:
            func_DB75(); break;
        case 0xE395:
            func_E395(); break;
        case 0xE3A9:
            func_E3A9(); break;
        case 0xE399:
            func_E399(); break;
        case 0xE397:
            func_E397(); break;
        case 0xE3A0:
            func_E3A0(); break;
        case 0xE3A1:
            func_E3A1(); break;
        case 0xE3A7:
            func_E3A7(); break;
        case 0xE3AC:
            func_E3AC(); break;
        case 0xDC2E:
            func_DC2E(); break;
        case 0xDCD0:
            func_DCD0(); break;
        case 0xDCE8:
            func_DCE8(); break;
        case 0xDCD8:
            func_DCD8(); break;
        case 0xDCDD:
            func_DCDD(); break;
        case 0xDCA1:
            func_DCA1(); break;
        case 0xDCAC:
            func_DCAC(); break;
        case 0xDDC0:
            func_DDC0(); break;
        case 0xDDB0:
            func_DDB0(); break;
        case 0xDD54:
            func_DD54(); break;
        case 0xE66A:
            func_E66A(); break;
        case 0xE66B:
            func_E66B(); break;
        case 0xE672:
            func_E672(); break;
        case 0xE673:
            func_E673(); break;
        case 0xE6B7:
            func_E6B7(); break;
        case 0xE6AA:
            func_E6AA(); break;
        case 0xE67E:
            func_E67E(); break;
        case 0xE687:
            func_E687(); break;
        case 0xE6A1:
            func_E6A1(); break;
        case 0xE679:
            func_E679(); break;
        case 0xE670:
            func_E670(); break;
        case 0xE698:
            func_E698(); break;
        case 0xE6A4:
            func_E6A4(); break;
        case 0xE6A6:
            func_E6A6(); break;
        case 0xE69E:
            func_E69E(); break;
        case 0xE6AC:
            func_E6AC(); break;
        case 0xE6B9:
            func_E6B9(); break;
        case 0xE6B0:
            func_E6B0(); break;
        case 0xE6B2:
            func_E6B2(); break;
        case 0xE6B4:
            func_E6B4(); break;
        case 0xE6B5:
            func_E6B5(); break;
        case 0xE66C:
            func_E66C(); break;
        case 0xDD70:
            func_DD70(); break;
        case 0xE587:
            func_E587(); break;
        case 0xDD01:
            func_DD01(); break;
        case 0xDCF9:
            func_DCF9(); break;
        case 0xDEA8:
            func_DEA8(); break;
        case 0xD9F1:
            func_D9F1(); break;
        case 0xDA0E:
            func_DA0E(); break;
        case 0xDA13:
            func_DA13(); break;
        case 0xDA06:
            func_DA06(); break;
        case 0xDA0A:
            func_DA0A(); break;
        case 0xDA03:
            func_DA03(); break;
        case 0xDA95:
            func_DA95(); break;
        case 0xDAA0:
            func_DAA0(); break;
        case 0xDAB0:
            func_DAB0(); break;
        case 0xDAA5:
            func_DAA5(); break;
        case 0xDA98:
            func_DA98(); break;
        case 0xDAA9:
            func_DAA9(); break;
        case 0xDABA:
            func_DABA(); break;
        case 0xDAAB:
            func_DAAB(); break;
        case 0xE6C2:
            func_E6C2(); break;
        case 0xE6C7:
            func_E6C7(); break;
        case 0xD964:
            func_D964(); break;
        case 0xDA32:
            func_DA32(); break;
        case 0xDA90:
            func_DA90(); break;
        case 0xDA91:
            func_DA91(); break;
        case 0xDA4C:
            func_DA4C(); break;
        case 0xDA41:
            func_DA41(); break;
        case 0xD98B:
            func_D98B(); break;
        case 0xD52A:
            func_D52A(); break;
        case 0xD156:
            func_D156(); break;
        case 0xD178:
            func_D178(); break;
        case 0xD185:
            func_D185(); break;
        case 0xD0B0:
            func_D0B0(); break;
        case 0xD0F4:
            func_D0F4(); break;
        case 0xD100:
            func_D100(); break;
        case 0xD099:
            func_D099(); break;
        case 0xD069:
            func_D069(); break;
        case 0xFC1B:
            func_FC1B(); break;
        case 0xFC1E:
            func_FC1E(); break;
        case 0xFC1F:
            func_FC1F(); break;
        case 0xFC21:
            func_FC21(); break;
        case 0xCD69:
            func_CD69(); break;
        case 0xCD85:
            func_CD85(); break;
        case 0xCD82:
            func_CD82(); break;
        case 0xCF3D:
            func_CF3D(); break;
        case 0xCF85:
            func_CF85(); break;
        case 0xCF86:
            func_CF86(); break;
        case 0xCF66:
            func_CF66(); break;
        case 0xCF7A:
            func_CF7A(); break;
        case 0xCF8B:
            func_CF8B(); break;
        case 0xCF5A:
            func_CF5A(); break;
        case 0xCF43:
            func_CF43(); break;
        case 0xBA49:
            switch (_bank) {
                case 0: func_BA49_b0(); break;
                case 1: func_BA49_b1(); break;
                case 2: func_BA49_b2(); break;
                case 3: func_BA49_b3(); break;
                case 4: func_BA49_b4(); break;
                case 6: func_BA49_b6(); break;
                case 5: func_BA49_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD048:
            func_D048(); break;
        case 0xCE1A:
            func_CE1A(); break;
        case 0xBA4C:
            switch (_bank) {
                case 6: func_BA4C_b6(); break;
                case 0: func_BA4C_b0(); break;
                case 1: func_BA4C_b1(); break;
                case 3: func_BA4C_b3(); break;
                case 4: func_BA4C_b4(); break;
                case 5: func_BA4C_b5(); break;
                case 2: func_BA4C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC4E0:
            func_C4E0(); break;
        case 0xC4EB:
            func_C4EB(); break;
        case 0xC158:
            func_C158(); break;
        case 0xC147:
            func_C147(); break;
        case 0xC4A7:
            func_C4A7(); break;
        case 0xC4AA:
            func_C4AA(); break;
        case 0xC4AC:
            func_C4AC(); break;
        case 0xC4B3:
            func_C4B3(); break;
        case 0xC11E:
            func_C11E(); break;
        case 0xC5D6:
            func_C5D6(); break;
        case 0xC621:
            func_C621(); break;
        case 0xC64C:
            func_C64C(); break;
        case 0xC64F:
            func_C64F(); break;
        case 0xC603:
            func_C603(); break;
        case 0xC5E1:
            func_C5E1(); break;
        case 0xC605:
            func_C605(); break;
        case 0xC608:
            func_C608(); break;
        case 0xC61C:
            func_C61C(); break;
        case 0xC600:
            func_C600(); break;
        case 0xC5EB:
            func_C5EB(); break;
        case 0xC636:
            func_C636(); break;
        case 0xC5F2:
            func_C5F2(); break;
        case 0xC624:
            func_C624(); break;
        case 0xC628:
            func_C628(); break;
        case 0xC61F:
            func_C61F(); break;
        case 0xC641:
            func_C641(); break;
        case 0xC5DF:
            func_C5DF(); break;
        case 0xC60A:
            func_C60A(); break;
        case 0xC638:
            func_C638(); break;
        case 0xC63A:
            func_C63A(); break;
        case 0xC5E9:
            func_C5E9(); break;
        case 0xC65B:
            func_C65B(); break;
        case 0xC67E:
            func_C67E(); break;
        case 0xC686:
            func_C686(); break;
        case 0xC688:
            func_C688(); break;
        case 0xC684:
            func_C684(); break;
        case 0xC65E:
            func_C65E(); break;
        case 0xC2FF:
            func_C2FF(); break;
        case 0xC0C6:
            func_C0C6(); break;
        case 0xC12E:
            func_C12E(); break;
        case 0x8480:
            switch (_bank) {
                case 5: func_8480_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA480:
            switch (_bank) {
                case 5: func_A480_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x804C:
            switch (_bank) {
                case 5: func_804C_b5(); break;
                case 0: func_804C_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8A9E:
            switch (_bank) {
                case 5: func_8A9E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8ABE:
            switch (_bank) {
                case 5: func_8ABE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8AFE:
            switch (_bank) {
                case 5: func_8AFE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B0A:
            switch (_bank) {
                case 5: func_8B0A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B42:
            switch (_bank) {
                case 5: func_8B42_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B46:
            switch (_bank) {
                case 5: func_8B46_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B4A:
            switch (_bank) {
                case 5: func_8B4A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B4E:
            switch (_bank) {
                case 5: func_8B4E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B7A:
            switch (_bank) {
                case 5: func_8B7A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B90:
            switch (_bank) {
                case 5: func_8B90_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8BA6:
            switch (_bank) {
                case 5: func_8BA6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8BC6:
            switch (_bank) {
                case 5: func_8BC6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8CB0:
            switch (_bank) {
                case 5: func_8CB0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8CB4:
            switch (_bank) {
                case 5: func_8CB4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8CCC:
            switch (_bank) {
                case 5: func_8CCC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8CFA:
            switch (_bank) {
                case 5: func_8CFA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D14:
            switch (_bank) {
                case 5: func_8D14_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D58:
            switch (_bank) {
                case 5: func_8D58_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D82:
            switch (_bank) {
                case 5: func_8D82_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D86:
            switch (_bank) {
                case 5: func_8D86_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D9E:
            switch (_bank) {
                case 5: func_8D9E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8DBE:
            switch (_bank) {
                case 5: func_8DBE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8DEC:
            switch (_bank) {
                case 5: func_8DEC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8E2C:
            switch (_bank) {
                case 5: func_8E2C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8E7A:
            switch (_bank) {
                case 5: func_8E7A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8EA0:
            switch (_bank) {
                case 5: func_8EA0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8540:
            switch (_bank) {
                case 5: func_8540_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8595:
            switch (_bank) {
                case 5: func_8595_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85A1:
            switch (_bank) {
                case 5: func_85A1_b5(); break;
                case 1: func_85A1_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85AA:
            switch (_bank) {
                case 5: func_85AA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85C1:
            switch (_bank) {
                case 5: func_85C1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85ED:
            switch (_bank) {
                case 5: func_85ED_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8687:
            switch (_bank) {
                case 5: func_8687_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8692:
            switch (_bank) {
                case 5: func_8692_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x86B8:
            switch (_bank) {
                case 5: func_86B8_b5(); break;
                case 1: func_86B8_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x86BF:
            switch (_bank) {
                case 5: func_86BF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8710:
            switch (_bank) {
                case 5: func_8710_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8730:
            switch (_bank) {
                case 5: func_8730_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8770:
            switch (_bank) {
                case 5: func_8770_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8790:
            switch (_bank) {
                case 5: func_8790_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x87A1:
            switch (_bank) {
                case 5: func_87A1_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA04C:
            switch (_bank) {
                case 7: func_E04C(); break;
                case 5: func_A04C_b5(); break;
                case 0: func_A04C_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x841F:
            switch (_bank) {
                case 5: func_841F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA41F:
            switch (_bank) {
                case 7: func_E41F(); break;
                case 5: func_A41F_b5(); break;
                case 0: func_A41F_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA48F:
            switch (_bank) {
                case 7: func_E48F(); break;
                case 5: func_A48F_b5(); break;
                case 1: func_A48F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8228:
            switch (_bank) {
                case 5: func_8228_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA228:
            switch (_bank) {
                case 5: func_A228_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8302:
            switch (_bank) {
                case 5: func_8302_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA302:
            switch (_bank) {
                case 5: func_A302_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3A3:
            switch (_bank) {
                case 5: func_A3A3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA337:
            switch (_bank) {
                case 5: func_A337_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA335:
            switch (_bank) {
                case 5: func_A335_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA330:
            switch (_bank) {
                case 5: func_A330_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x80FC:
            switch (_bank) {
                case 5: func_80FC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0FC:
            switch (_bank) {
                case 5: func_A0FC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x824F:
            switch (_bank) {
                case 5: func_824F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA24F:
            switch (_bank) {
                case 5: func_A24F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8161:
            switch (_bank) {
                case 5: func_8161_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA161:
            switch (_bank) {
                case 7: func_E161(); break;
                case 5: func_A161_b5(); break;
                case 2: func_A161_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x823D:
            switch (_bank) {
                case 5: func_823D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA23D:
            switch (_bank) {
                case 5: func_A23D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x82BD:
            switch (_bank) {
                case 5: func_82BD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2BD:
            switch (_bank) {
                case 5: func_A2BD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8186:
            switch (_bank) {
                case 5: func_8186_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA186:
            switch (_bank) {
                case 5: func_A186_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD440:
            func_D440(); break;
        case 0xE809:
            func_E809(); break;
        case 0xE845:
            func_E845(); break;
        case 0xE87F:
            func_E87F(); break;
        case 0xE856:
            func_E856(); break;
        case 0xE859:
            func_E859(); break;
        case 0xE80B:
            func_E80B(); break;
        case 0xE810:
            func_E810(); break;
        case 0xE864:
            func_E864(); break;
        case 0xE823:
            func_E823(); break;
        case 0xE847:
            func_E847(); break;
        case 0xE860:
            func_E860(); break;
        case 0xE821:
            func_E821(); break;
        case 0xE836:
            func_E836(); break;
        case 0xE843:
            func_E843(); break;
        case 0xE83B:
            func_E83B(); break;
        case 0xE839:
            func_E839(); break;
        case 0xE849:
            func_E849(); break;
        case 0xE828:
            func_E828(); break;
        case 0xE838:
            func_E838(); break;
        case 0xE819:
            func_E819(); break;
        case 0xE826:
            func_E826(); break;
        case 0xE832:
            func_E832(); break;
        case 0xE86A:
            func_E86A(); break;
        case 0xE81D:
            func_E81D(); break;
        case 0xE812:
            func_E812(); break;
        case 0xC850:
            func_C850(); break;
        case 0xF819:
            func_F819(); break;
        case 0xF554:
            func_F554(); break;
        case 0xF556:
            func_F556(); break;
        case 0xD04D:
            func_D04D(); break;
        case 0xD04F:
            func_D04F(); break;
        case 0xCE48:
            func_CE48(); break;
        case 0xC118:
            func_C118(); break;
        case 0xC103:
            func_C103(); break;
        case 0xC105:
            func_C105(); break;
        case 0xC24D:
            func_C24D(); break;
        case 0xC250:
            func_C250(); break;
        case 0xC80C:
            func_C80C(); break;
        case 0xF9FE:
            func_F9FE(); break;
        case 0xFA20:
            func_FA20(); break;
        case 0xF5F8:
            func_F5F8(); break;
        case 0xAF7D:
            switch (_bank) {
                case 3: func_AF7D_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA01F:
            switch (_bank) {
                case 3: func_A01F_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA088:
            switch (_bank) {
                case 3: func_A088_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB9E:
            switch (_bank) {
                case 3: func_AB9E_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA8A2:
            switch (_bank) {
                case 3: func_A8A2_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2C1:
            switch (_bank) {
                case 3: func_A2C1_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA1AD:
            switch (_bank) {
                case 3: func_A1AD_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA1BE:
            switch (_bank) {
                case 3: func_A1BE_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA1EC:
            switch (_bank) {
                case 3: func_A1EC_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xABAB:
            switch (_bank) {
                case 3: func_ABAB_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA22C:
            switch (_bank) {
                case 3: func_A22C_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9A1:
            switch (_bank) {
                case 3: func_A9A1_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA06:
            switch (_bank) {
                case 3: func_AA06_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA0C:
            switch (_bank) {
                case 3: func_AA0C_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC92:
            switch (_bank) {
                case 3: func_AC92_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xACBB:
            switch (_bank) {
                case 3: func_ACBB_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADE0:
            switch (_bank) {
                case 3: func_ADE0_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADF6:
            switch (_bank) {
                case 3: func_ADF6_b3(); break;
                case 2: func_ADF6_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADC6:
            switch (_bank) {
                case 3: func_ADC6_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD23:
            switch (_bank) {
                case 3: func_AD23_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD8C:
            switch (_bank) {
                case 3: func_AD8C_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA51:
            switch (_bank) {
                case 3: func_AA51_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEC6:
            switch (_bank) {
                case 3: func_AEC6_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF36:
            switch (_bank) {
                case 3: func_AF36_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB74:
            switch (_bank) {
                case 3: func_AB74_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB88:
            switch (_bank) {
                case 3: func_AB88_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB83:
            switch (_bank) {
                case 3: func_AB83_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA676:
            switch (_bank) {
                case 3: func_A676_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA339:
            switch (_bank) {
                case 3: func_A339_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA37A:
            switch (_bank) {
                case 3: func_A37A_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA366:
            switch (_bank) {
                case 3: func_A366_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA379:
            switch (_bank) {
                case 3: func_A379_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF6D:
            switch (_bank) {
                case 3: func_AF6D_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA1CA:
            switch (_bank) {
                case 3: func_A1CA_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA1DB:
            switch (_bank) {
                case 3: func_A1DB_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA1D8:
            switch (_bank) {
                case 3: func_A1D8_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA20D:
            switch (_bank) {
                case 3: func_A20D_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA870:
            switch (_bank) {
                case 3: func_A870_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2E7:
            switch (_bank) {
                case 3: func_A2E7_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE68:
            switch (_bank) {
                case 3: func_AE68_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA565:
            switch (_bank) {
                case 3: func_A565_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA591:
            switch (_bank) {
                case 3: func_A591_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5E5:
            switch (_bank) {
                case 3: func_A5E5_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA645:
            switch (_bank) {
                case 3: func_A645_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA609:
            switch (_bank) {
                case 3: func_A609_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE59:
            switch (_bank) {
                case 3: func_AE59_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA820:
            switch (_bank) {
                case 3: func_A820_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA8DF:
            switch (_bank) {
                case 3: func_A8DF_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA87B:
            switch (_bank) {
                case 3: func_A87B_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA8CC:
            switch (_bank) {
                case 3: func_A8CC_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA8A8:
            switch (_bank) {
                case 3: func_A8A8_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA882:
            switch (_bank) {
                case 3: func_A882_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE65A:
            func_E65A(); break;
        case 0xE660:
            func_E660(); break;
        case 0xE661:
            func_E661(); break;
        case 0xE65C:
            func_E65C(); break;
        case 0xE65E:
            func_E65E(); break;
        case 0xE460:
            func_E460(); break;
        case 0xE5A3:
            func_E5A3(); break;
        case 0xF5DA:
            func_F5DA(); break;
        case 0xF61C:
            func_F61C(); break;
        case 0xE286:
            func_E286(); break;
        case 0xE292:
            func_E292(); break;
        case 0xE2B9:
            func_E2B9(); break;
        case 0xE28E:
            func_E28E(); break;
        case 0xE2CF:
            func_E2CF(); break;
        case 0xE2EF:
            func_E2EF(); break;
        case 0xE304:
            func_E304(); break;
        case 0xE2BF:
            func_E2BF(); break;
        case 0xE2C0:
            func_E2C0(); break;
        case 0xE300:
            func_E300(); break;
        case 0xE2A2:
            func_E2A2(); break;
        case 0xE2A3:
            func_E2A3(); break;
        case 0xE2B7:
            func_E2B7(); break;
        case 0xE2E6:
            func_E2E6(); break;
        case 0xE2DC:
            func_E2DC(); break;
        case 0xE2E0:
            func_E2E0(); break;
        case 0xE2E4:
            func_E2E4(); break;
        case 0xE2E8:
            func_E2E8(); break;
        case 0xE288:
            func_E288(); break;
        case 0xE2A5:
            func_E2A5(); break;
        case 0xE2FF:
            func_E2FF(); break;
        case 0xE294:
            func_E294(); break;
        case 0xE298:
            func_E298(); break;
        case 0xE302:
            func_E302(); break;
        case 0xE306:
            func_E306(); break;
        case 0xE2AE:
            func_E2AE(); break;
        case 0xE2E2:
            func_E2E2(); break;
        case 0xE308:
            func_E308(); break;
        case 0xE2EA:
            func_E2EA(); break;
        case 0xE31B:
            func_E31B(); break;
        case 0xE30D:
            func_E30D(); break;
        case 0xE309:
            func_E309(); break;
        case 0xE313:
            func_E313(); break;
        case 0xE30F:
            func_E30F(); break;
        case 0xE315:
            func_E315(); break;
        case 0xE319:
            func_E319(); break;
        case 0xE30B:
            func_E30B(); break;
        case 0xE317:
            func_E317(); break;
        case 0xE2D1:
            func_E2D1(); break;
        case 0xF646:
            func_F646(); break;
        case 0xE476:
            func_E476(); break;
        case 0xE47C:
            func_E47C(); break;
        case 0xE482:
            func_E482(); break;
        case 0xE5AF:
            func_E5AF(); break;
        case 0xE5B5:
            func_E5B5(); break;
        case 0xE5B1:
            func_E5B1(); break;
        case 0xF6A6:
            func_F6A6(); break;
        case 0xDEC8:
            func_DEC8(); break;
        case 0xE14C:
            func_E14C(); break;
        case 0xE0E8:
            func_E0E8(); break;
        case 0xE0AA:
            func_E0AA(); break;
        case 0xE020:
            func_E020(); break;
        case 0xE05D:
            func_E05D(); break;
        case 0xE02A:
            func_E02A(); break;
        case 0xE0CA:
            func_E0CA(); break;
        case 0xDF2A:
            func_DF2A(); break;
        case 0xE004:
            func_E004(); break;
        case 0xE087:
            func_E087(); break;
        case 0xE088:
            func_E088(); break;
        case 0xDEF0:
            func_DEF0(); break;
        case 0xDEF1:
            func_DEF1(); break;
        case 0xE1BA:
            func_E1BA(); break;
        case 0xDF5A:
            func_DF5A(); break;
        case 0xE048:
            func_E048(); break;
        case 0xDFF1:
            func_DFF1(); break;
        case 0xE0EA:
            func_E0EA(); break;
        case 0xE120:
            func_E120(); break;
        case 0xE0AD:
            func_E0AD(); break;
        case 0xDFC9:
            func_DFC9(); break;
        case 0xE08E:
            func_E08E(); break;
        case 0xE0A0:
            func_E0A0(); break;
        case 0xE0A2:
            func_E0A2(); break;
        case 0xDEF8:
            func_DEF8(); break;
        case 0xDF0F:
            func_DF0F(); break;
        case 0xE0FF:
            func_E0FF(); break;
        case 0xE039:
            func_E039(); break;
        case 0xDFC0:
            func_DFC0(); break;
        case 0xE00A:
            func_E00A(); break;
        case 0xDFB4:
            func_DFB4(); break;
        case 0xE0FC:
            func_E0FC(); break;
        case 0xE0FD:
            func_E0FD(); break;
        case 0xE180:
            func_E180(); break;
        case 0xE08C:
            func_E08C(); break;
        case 0xE0E1:
            func_E0E1(); break;
        case 0xDF21:
            func_DF21(); break;
        case 0xDF43:
            func_DF43(); break;
        case 0xE0BF:
            func_E0BF(); break;
        case 0xE127:
            func_E127(); break;
        case 0xE002:
            func_E002(); break;
        case 0xDFBE:
            func_DFBE(); break;
        case 0xDF3C:
            func_DF3C(); break;
        case 0xE00E:
            func_E00E(); break;
        case 0xE10D:
            func_E10D(); break;
        case 0xDFE4:
            func_DFE4(); break;
        case 0xE19A:
            func_E19A(); break;
        case 0xDFDE:
            func_DFDE(); break;
        case 0xE0DF:
            func_E0DF(); break;
        case 0xE0B2:
            func_E0B2(); break;
        case 0xE1E1:
            func_E1E1(); break;
        case 0xE1B0:
            func_E1B0(); break;
        case 0xE0B6:
            func_E0B6(); break;
        case 0xE1B8:
            func_E1B8(); break;
        case 0xDEDA:
            func_DEDA(); break;
        case 0xE1D2:
            func_E1D2(); break;
        case 0xE1DC:
            func_E1DC(); break;
        case 0xE1E3:
            func_E1E3(); break;
        case 0xE0E3:
            func_E0E3(); break;
        case 0xDEDC:
            func_DEDC(); break;
        case 0xE1D0:
            func_E1D0(); break;
        case 0xDF5E:
            func_DF5E(); break;
        case 0xDED9:
            func_DED9(); break;
        case 0xDFB0:
            func_DFB0(); break;
        case 0xDFDC:
            func_DFDC(); break;
        case 0xE090:
            func_E090(); break;
        case 0xE008:
            func_E008(); break;
        case 0xE03B:
            func_E03B(); break;
        case 0xE04C:
            func_E04C(); break;
        case 0xDF6E:
            func_DF6E(); break;
        case 0xE0F4:
            func_E0F4(); break;
        case 0xDF4C:
            func_DF4C(); break;
        case 0xE185:
            func_E185(); break;
        case 0xE1A5:
            func_E1A5(); break;
        case 0xDFC5:
            func_DFC5(); break;
        case 0xDFA5:
            func_DFA5(); break;
        case 0xE0C5:
            func_E0C5(); break;
        case 0xE11E:
            func_E11E(); break;
        case 0xE09C:
            func_E09C(); break;
        case 0xDF0E:
            func_DF0E(); break;
        case 0xE02E:
            func_E02E(); break;
        case 0xE10A:
            func_E10A(); break;
        case 0xE10C:
            func_E10C(); break;
        case 0xDF0A:
            func_DF0A(); break;
        case 0xE103:
            func_E103(); break;
        case 0xE006:
            func_E006(); break;
        case 0xDFA3:
            func_DFA3(); break;
        case 0xE018:
            func_E018(); break;
        case 0xE1D4:
            func_E1D4(); break;
        case 0xE028:
            func_E028(); break;
        case 0xE107:
            func_E107(); break;
        case 0xDFFF:
            func_DFFF(); break;
        case 0xE091:
            func_E091(); break;
        case 0xE16A:
            func_E16A(); break;
        case 0xDF57:
            func_DF57(); break;
        case 0xE057:
            func_E057(); break;
        case 0xE154:
            func_E154(); break;
        case 0xE0DD:
            func_E0DD(); break;
        case 0xDFE0:
            func_DFE0(); break;
        case 0xE1C4:
            func_E1C4(); break;
        case 0xE1C6:
            func_E1C6(); break;
        case 0xE1D8:
            func_E1D8(); break;
        case 0xDF48:
            func_DF48(); break;
        case 0xE0D5:
            func_E0D5(); break;
        case 0xE05B:
            func_E05B(); break;
        case 0xE066:
            func_E066(); break;
        case 0xE17C:
            func_E17C(); break;
        case 0xE014:
            func_E014(); break;
        case 0xE00C:
            func_E00C(); break;
        case 0xE0D0:
            func_E0D0(); break;
        case 0xE198:
            func_E198(); break;
        case 0xDF03:
            func_DF03(); break;
        case 0xE0FA:
            func_E0FA(); break;
        case 0xDFA9:
            func_DFA9(); break;
        case 0xE0C8:
            func_E0C8(); break;
        case 0xE1A9:
            func_E1A9(); break;
        case 0xE032:
            func_E032(); break;
        case 0xE030:
            func_E030(); break;
        case 0xE097:
            func_E097(); break;
        case 0xE1E9:
            func_E1E9(); break;
        case 0xE099:
            func_E099(); break;
        case 0xE010:
            func_E010(); break;
        case 0xE101:
            func_E101(); break;
        case 0xE137:
            func_E137(); break;
        case 0xE149:
            func_E149(); break;
        case 0xE1C0:
            func_E1C0(); break;
        case 0xE081:
            func_E081(); break;
        case 0xDEE8:
            func_DEE8(); break;
        case 0xE0EC:
            func_E0EC(); break;
        case 0xE147:
            func_E147(); break;
        case 0xE0A4:
            func_E0A4(); break;
        case 0xE024:
            func_E024(); break;
        case 0xE0B4:
            func_E0B4(); break;
        case 0xE083:
            func_E083(); break;
        case 0xE040:
            func_E040(); break;
        case 0xE0A8:
            func_E0A8(); break;
        case 0xE0B8:
            func_E0B8(); break;
        case 0xE034:
            func_E034(); break;
        case 0xE085:
            func_E085(); break;
        case 0xE022:
            func_E022(); break;
        case 0xE01B:
            func_E01B(); break;
        case 0xE143:
            func_E143(); break;
        case 0xE0B0:
            func_E0B0(); break;
        case 0xE036:
            func_E036(); break;
        case 0xE026:
            func_E026(); break;
        case 0xE043:
            func_E043(); break;
        case 0xE0A6:
            func_E0A6(); break;
        case 0xE129:
            func_E129(); break;
        case 0xE12B:
            func_E12B(); break;
        case 0xE17E:
            func_E17E(); break;
        case 0xDF70:
            func_DF70(); break;
        case 0xDF7E:
            func_DF7E(); break;
        case 0xE196:
            func_E196(); break;
        case 0xDF2C:
            func_DF2C(); break;
        case 0xE455:
            func_E455(); break;
        case 0xE45B:
            func_E45B(); break;
        case 0xCDE0:
            func_CDE0(); break;
        case 0xCE04:
            func_CE04(); break;
        case 0xCF55:
            func_CF55(); break;
        case 0xCF96:
            func_CF96(); break;
        case 0xCF6B:
            func_CF6B(); break;
        case 0xD02E:
            func_D02E(); break;
        case 0xE5B8:
            func_E5B8(); break;
        case 0xE7A5:
            func_E7A5(); break;
        case 0xE7F4:
            func_E7F4(); break;
        case 0xE7F5:
            func_E7F5(); break;
        case 0xE7ED:
            func_E7ED(); break;
        case 0xE7AD:
            func_E7AD(); break;
        case 0xE7EC:
            func_E7EC(); break;
        case 0xE7E8:
            func_E7E8(); break;
        case 0xE7B9:
            func_E7B9(); break;
        case 0xE7E2:
            func_E7E2(); break;
        case 0xE7C9:
            func_E7C9(); break;
        case 0xE7C0:
            func_E7C0(); break;
        case 0xE7F3:
            func_E7F3(); break;
        case 0xE7BB:
            func_E7BB(); break;
        case 0xE7FC:
            func_E7FC(); break;
        case 0xE7A9:
            func_E7A9(); break;
        case 0xA82B:
            switch (_bank) {
                case 3: func_A82B_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA656:
            switch (_bank) {
                case 3: func_A656_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA7ED:
            switch (_bank) {
                case 3: func_A7ED_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA7CA:
            switch (_bank) {
                case 3: func_A7CA_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA749:
            switch (_bank) {
                case 3: func_A749_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA762:
            switch (_bank) {
                case 3: func_A762_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA77C:
            switch (_bank) {
                case 3: func_A77C_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA79C:
            switch (_bank) {
                case 3: func_A79C_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9934:
            switch (_bank) {
                case 4: func_9934_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x999A:
            switch (_bank) {
                case 4: func_999A_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9798:
            switch (_bank) {
                case 6: func_9798_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8422:
            switch (_bank) {
                case 6: func_8422_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8384:
            switch (_bank) {
                case 6: func_8384_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9682:
            switch (_bank) {
                case 6: func_9682_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB682:
            switch (_bank) {
                case 6: func_B682_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC9CC:
            func_C9CC(); break;
        case 0xCA35:
            func_CA35(); break;
        case 0xCA3D:
            func_CA3D(); break;
        case 0xCA3E:
            func_CA3E(); break;
        case 0xCA42:
            func_CA42(); break;
        case 0xE990:
            func_E990(); break;
        case 0xD3FC:
            func_D3FC(); break;
        case 0x9B7B:
            switch (_bank) {
                case 4: func_9B7B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD656:
            func_D656(); break;
        case 0xD87C:
            func_D87C(); break;
        case 0xD8D0:
            func_D8D0(); break;
        case 0xD8E0:
            func_D8E0(); break;
        case 0xD8B0:
            func_D8B0(); break;
        case 0xD8A7:
            func_D8A7(); break;
        case 0xD8A2:
            func_D8A2(); break;
        case 0xD8BD:
            func_D8BD(); break;
        case 0xD8A4:
            func_D8A4(); break;
        case 0xD8C6:
            func_D8C6(); break;
        case 0xD8D2:
            func_D8D2(); break;
        case 0xD884:
            func_D884(); break;
        case 0xD889:
            func_D889(); break;
        case 0xD80B:
            func_D80B(); break;
        case 0xD8C4:
            func_D8C4(); break;
        case 0xD85C:
            func_D85C(); break;
        case 0xD695:
            func_D695(); break;
        case 0xD74B:
            func_D74B(); break;
        case 0xD782:
            func_D782(); break;
        case 0xD750:
            func_D750(); break;
        case 0xD6B3:
            func_D6B3(); break;
        case 0x92DB:
            switch (_bank) {
                case 0: func_92DB_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC407:
            func_C407(); break;
        case 0xE0A3:
            func_E0A3(); break;
        case 0xA0EF:
            switch (_bank) {
                case 6: func_A0EF_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x80EF:
            switch (_bank) {
                case 6: func_80EF_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE019:
            func_E019(); break;
        case 0xDAEE:
            func_DAEE(); break;
        case 0xE6C5:
            func_E6C5(); break;
        case 0xDE81:
            func_DE81(); break;
        case 0xD907:
            func_D907(); break;
        case 0xD065:
            func_D065(); break;
        case 0xCF94:
            func_CF94(); break;
        case 0xBB94:
            switch (_bank) {
                case 0: func_BB94_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC02D:
            func_C02D(); break;
        case 0xC05A:
            func_C05A(); break;
        case 0xBFA3:
            switch (_bank) {
                case 2: func_BFA3_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEB20:
            func_EB20(); break;
        case 0xE0A1:
            func_E0A1(); break;
        case 0xC22F:
            func_C22F(); break;
        case 0xFE5E:
            func_FE5E(); break;
        case 0xE6D6:
            func_E6D6(); break;
        case 0xE6D8:
            func_E6D8(); break;
        case 0xE6E1:
            func_E6E1(); break;
        case 0xE6E9:
            func_E6E9(); break;
        case 0xE6E5:
            func_E6E5(); break;
        case 0xE6E3:
            func_E6E3(); break;
        case 0xE31F:
            func_E31F(); break;
        case 0xE325:
            func_E325(); break;
        case 0xE32D:
            func_E32D(); break;
        case 0xE34C:
            func_E34C(); break;
        case 0xE343:
            func_E343(); break;
        case 0xE341:
            func_E341(); break;
        case 0xE350:
            func_E350(); break;
        case 0xE329:
            func_E329(); break;
        case 0xE332:
            func_E332(); break;
        case 0xE344:
            func_E344(); break;
        case 0xE336:
            func_E336(); break;
        case 0xE327:
            func_E327(); break;
        case 0xE322:
            func_E322(); break;
        case 0xE346:
            func_E346(); break;
        case 0xE348:
            func_E348(); break;
        case 0xE331:
            func_E331(); break;
        case 0xE338:
            func_E338(); break;
        case 0xE334:
            func_E334(); break;
        case 0xE351:
            func_E351(); break;
        case 0xE38E:
            func_E38E(); break;
        case 0xE38C:
            func_E38C(); break;
        case 0xE368:
            func_E368(); break;
        case 0xE394:
            func_E394(); break;
        case 0xE361:
            func_E361(); break;
        case 0xE380:
            func_E380(); break;
        case 0xE383:
            func_E383(); break;
        case 0xE385:
            func_E385(); break;
        case 0xE382:
            func_E382(); break;
        case 0xE369:
            func_E369(); break;
        case 0xE3AD:
            func_E3AD(); break;
        case 0xE3AF:
            func_E3AF(); break;
        case 0xE3B4:
            func_E3B4(); break;
        case 0xE3B5:
            func_E3B5(); break;
        case 0xE3D0:
            func_E3D0(); break;
        case 0xE3F5:
            func_E3F5(); break;
        case 0xE3F7:
            func_E3F7(); break;
        case 0xE3F3:
            func_E3F3(); break;
        case 0xE3E1:
            func_E3E1(); break;
        case 0xE3C9:
            func_E3C9(); break;
        case 0xE3E4:
            func_E3E4(); break;
        case 0xE403:
            func_E403(); break;
        case 0xE3BD:
            func_E3BD(); break;
        case 0xE40C:
            func_E40C(); break;
        case 0xE407:
            func_E407(); break;
        case 0xE40B:
            func_E40B(); break;
        case 0xE40F:
            func_E40F(); break;
        case 0xE3EC:
            func_E3EC(); break;
        case 0xE3D6:
            func_E3D6(); break;
        case 0xE3EA:
            func_E3EA(); break;
        case 0xE3FF:
            func_E3FF(); break;
        case 0xE3F0:
            func_E3F0(); break;
        case 0xE3B7:
            func_E3B7(); break;
        case 0xE3B9:
            func_E3B9(); break;
        case 0xE3BA:
            func_E3BA(); break;
        case 0xE3E8:
            func_E3E8(); break;
        case 0xE3BF:
            func_E3BF(); break;
        case 0xE3DC:
            func_E3DC(); break;
        case 0xE6EA:
            func_E6EA(); break;
        case 0xE6EE:
            func_E6EE(); break;
        case 0xE6F4:
            func_E6F4(); break;
        case 0xE6FC:
            func_E6FC(); break;
        case 0xE6EC:
            func_E6EC(); break;
        case 0xE702:
            func_E702(); break;
        case 0xE6F6:
            func_E6F6(); break;
        case 0xE71C:
            func_E71C(); break;
        case 0xE720:
            func_E720(); break;
        case 0xE72E:
            func_E72E(); break;
        case 0xE732:
            func_E732(); break;
        case 0xE734:
            func_E734(); break;
        case 0xE73A:
            func_E73A(); break;
        case 0xE750:
            func_E750(); break;
        case 0xE756:
            func_E756(); break;
        case 0xE74C:
            func_E74C(); break;
        case 0xE795:
            func_E795(); break;
        case 0xE78E:
            func_E78E(); break;
        case 0xE76B:
            func_E76B(); break;
        case 0xE41E:
            func_E41E(); break;
        case 0xE427:
            func_E427(); break;
        case 0xE44A:
            func_E44A(); break;
        case 0xE44C:
            func_E44C(); break;
        case 0xE452:
            func_E452(); break;
        case 0xE46B:
            func_E46B(); break;
        case 0xE46D:
            func_E46D(); break;
        case 0xE485:
            func_E485(); break;
        case 0xE486:
            func_E486(); break;
        case 0xE497:
            func_E497(); break;
        case 0xE48F:
            func_E48F(); break;
        case 0xE498:
            func_E498(); break;
        case 0xE493:
            func_E493(); break;
        case 0xE49D:
            func_E49D(); break;
        case 0xE4D0:
            func_E4D0(); break;
        case 0xE4A1:
            func_E4A1(); break;
        case 0xE4A4:
            func_E4A4(); break;
        case 0xE4C0:
            func_E4C0(); break;
        case 0xE4C4:
            func_E4C4(); break;
        case 0xE4A6:
            func_E4A6(); break;
        case 0xE4AE:
            func_E4AE(); break;
        case 0xE4C2:
            func_E4C2(); break;
        case 0xE4DD:
            func_E4DD(); break;
        case 0xE4F1:
            func_E4F1(); break;
        case 0xE4EB:
            func_E4EB(); break;
        case 0xE4E1:
            func_E4E1(); break;
        case 0xE4E3:
            func_E4E3(); break;
        case 0xE4E9:
            func_E4E9(); break;
        case 0xE4E5:
            func_E4E5(); break;
        case 0xE4FE:
            func_E4FE(); break;
        case 0xE500:
            func_E500(); break;
        case 0xE507:
            func_E507(); break;
        case 0xE520:
            func_E520(); break;
        case 0xE50D:
            func_E50D(); break;
        case 0xE502:
            func_E502(); break;
        case 0xE503:
            func_E503(); break;
        case 0xE505:
            func_E505(); break;
        case 0xE526:
            func_E526(); break;
        case 0xE527:
            func_E527(); break;
        case 0xE530:
            func_E530(); break;
        case 0xE539:
            func_E539(); break;
        case 0xE53D:
            func_E53D(); break;
        case 0xE54C:
            func_E54C(); break;
        case 0xE549:
            func_E549(); break;
        case 0xE543:
            func_E543(); break;
        case 0xE552:
            func_E552(); break;
        case 0xE547:
            func_E547(); break;
        case 0xE558:
            func_E558(); break;
        case 0xE562:
            func_E562(); break;
        case 0xE584:
            func_E584(); break;
        case 0xE583:
            func_E583(); break;
        case 0xE56C:
            func_E56C(); break;
        case 0xE586:
            func_E586(); break;
        case 0xE595:
            func_E595(); break;
        case 0xE5A5:
            func_E5A5(); break;
        case 0xE214:
            func_E214(); break;
        case 0xE273:
            func_E273(); break;
        case 0xE244:
            func_E244(); break;
        case 0xE24B:
            func_E24B(); break;
        case 0xE243:
            func_E243(); break;
        case 0xE225:
            func_E225(); break;
        case 0xE222:
            func_E222(); break;
        case 0xE220:
            func_E220(); break;
        case 0xE232:
            func_E232(); break;
        case 0xE247:
            func_E247(); break;
        case 0xE267:
            func_E267(); break;
        case 0xE26C:
            func_E26C(); break;
        case 0xE276:
            func_E276(); break;
        case 0xE257:
            func_E257(); break;
        case 0xE21D:
            func_E21D(); break;
        case 0xE237:
            func_E237(); break;
        case 0xE23F:
            func_E23F(); break;
        case 0xE239:
            func_E239(); break;
        case 0xE242:
            func_E242(); break;
        case 0xE22B:
            func_E22B(); break;
        case 0xE234:
            func_E234(); break;
        case 0xE7FD:
            func_E7FD(); break;
        case 0xE805:
            func_E805(); break;
        case 0xE801:
            func_E801(); break;
        case 0xE804:
            func_E804(); break;
        case 0xE803:
            func_E803(); break;
        case 0xE808:
            func_E808(); break;
        case 0xE5D4:
            func_E5D4(); break;
        case 0xE5D5:
            func_E5D5(); break;
        case 0xE5F0:
            func_E5F0(); break;
        case 0xE5E5:
            func_E5E5(); break;
        case 0xE5E3:
            func_E5E3(); break;
        case 0xE5E8:
            func_E5E8(); break;
        case 0xE5F3:
            func_E5F3(); break;
        case 0xE6CD:
            func_E6CD(); break;
        case 0xE6CF:
            func_E6CF(); break;
        case 0xE5F8:
            func_E5F8(); break;
        case 0xE603:
            func_E603(); break;
        case 0xE606:
            func_E606(); break;
        case 0xE601:
            func_E601(); break;
        case 0xE60D:
            func_E60D(); break;
        case 0xE60F:
            func_E60F(); break;
        case 0xE614:
            func_E614(); break;
        case 0xE617:
            func_E617(); break;
        case 0xE608:
            func_E608(); break;
        case 0xE60A:
            func_E60A(); break;
        case 0xE5FF:
            func_E5FF(); break;
        case 0xE618:
            func_E618(); break;
        case 0xE621:
            func_E621(); break;
        case 0xE62A:
            func_E62A(); break;
        case 0xE62B:
            func_E62B(); break;
        case 0xE61D:
            func_E61D(); break;
        case 0xE61F:
            func_E61F(); break;
        case 0xE62F:
            func_E62F(); break;
        case 0xE630:
            func_E630(); break;
        case 0xE634:
            func_E634(); break;
        case 0xE647:
            func_E647(); break;
        case 0xE640:
            func_E640(); break;
        case 0xE6BC:
            func_E6BC(); break;
        case 0xE6BF:
            func_E6BF(); break;
        case 0xE64C:
            func_E64C(); break;
        case 0xE652:
            func_E652(); break;
        case 0xE430:
            func_E430(); break;
        case 0xE444:
            func_E444(); break;
        case 0x8003:
            switch (_bank) {
                case 7: func_C003(); break;
                case 0: func_8003_b0(); break;
                case 1: func_8003_b1(); break;
                case 2: func_8003_b2(); break;
                case 4: func_8003_b4(); break;
                case 5: func_8003_b5(); break;
                case 6: func_8003_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE0BA:
            func_E0BA(); break;
        case 0x9ADA:
            switch (_bank) {
                case 4: func_9ADA_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B0D:
            switch (_bank) {
                case 4: func_9B0D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B2F:
            switch (_bank) {
                case 4: func_9B2F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A3C:
            switch (_bank) {
                case 4: func_9A3C_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8061:
            switch (_bank) {
                case 5: func_8061_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA061:
            switch (_bank) {
                case 5: func_A061_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x801E:
            switch (_bank) {
                case 5: func_801E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA584:
            switch (_bank) {
                case 5: func_A584_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA007:
            switch (_bank) {
                case 5: func_A007_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x830E:
            switch (_bank) {
                case 5: func_830E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA30E:
            switch (_bank) {
                case 5: func_A30E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x83D3:
            switch (_bank) {
                case 5: func_83D3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3D3:
            switch (_bank) {
                case 5: func_A3D3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8404:
            switch (_bank) {
                case 5: func_8404_b5(); break;
                case 1: func_8404_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA404:
            switch (_bank) {
                case 5: func_A404_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0AB:
            switch (_bank) {
                case 5: func_A0AB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8159:
            switch (_bank) {
                case 5: func_8159_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x815B:
            switch (_bank) {
                case 5: func_815B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x815D:
            switch (_bank) {
                case 5: func_815D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8160:
            switch (_bank) {
                case 5: func_8160_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA130:
            switch (_bank) {
                case 5: func_A130_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8523:
            switch (_bank) {
                case 5: func_8523_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8158:
            switch (_bank) {
                case 5: func_8158_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x815A:
            switch (_bank) {
                case 5: func_815A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x815C:
            switch (_bank) {
                case 5: func_815C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x815E:
            switch (_bank) {
                case 5: func_815E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE88A:
            func_E88A(); break;
        case 0xE8A8:
            func_E8A8(); break;
        case 0xE88E:
            func_E88E(); break;
        case 0xE8A1:
            func_E8A1(); break;
        case 0xE8B4:
            func_E8B4(); break;
        case 0xE8AC:
            func_E8AC(); break;
        case 0xE8A5:
            func_E8A5(); break;
        case 0xE898:
            func_E898(); break;
        case 0xE89F:
            func_E89F(); break;
        case 0xE894:
            func_E894(); break;
        case 0xE8A4:
            func_E8A4(); break;
        case 0xE880:
            func_E880(); break;
        case 0xE882:
            func_E882(); break;
        case 0xE889:
            func_E889(); break;
        case 0xE884:
            func_E884(); break;
        case 0xE886:
            func_E886(); break;
        case 0xE83F:
            func_E83F(); break;
        case 0xE8AA:
            func_E8AA(); break;
        case 0xEC51:
            func_EC51(); break;
        case 0xF9ED:
            func_F9ED(); break;
        case 0xF5CA:
            func_F5CA(); break;
        case 0xA32A:
            switch (_bank) {
                case 3: func_A32A_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE50:
            switch (_bank) {
                case 3: func_AE50_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE3E:
            switch (_bank) {
                case 3: func_AE3E_b3(); break;
                case 2: func_AE3E_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADF7:
            switch (_bank) {
                case 3: func_ADF7_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA8B:
            switch (_bank) {
                case 3: func_AA8B_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xABB9:
            switch (_bank) {
                case 3: func_ABB9_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE1DD:
            func_E1DD(); break;
        case 0xDF06:
            func_DF06(); break;
        case 0xDF59:
            func_DF59(); break;
        case 0xDF33:
            func_DF33(); break;
        case 0xE051:
            func_E051(); break;
        case 0xE072:
            func_E072(); break;
        case 0xE0BD:
            func_E0BD(); break;
        case 0xE18A:
            func_E18A(); break;
        case 0xE108:
            func_E108(); break;
        case 0xE192:
            func_E192(); break;
        case 0xE187:
            func_E187(); break;
        case 0xBAE5:
            switch (_bank) {
                case 0: func_BAE5_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB4A:
            switch (_bank) {
                case 0: func_BB4A_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x975E:
            switch (_bank) {
                case 6: func_975E_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEBEC:
            func_EBEC(); break;
        case 0x9BA4:
            switch (_bank) {
                case 4: func_9BA4_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9BB5:
            switch (_bank) {
                case 4: func_9BB5_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD7E5:
            func_D7E5(); break;
        case 0xD7E9:
            func_D7E9(); break;
        case 0x80E9:
            switch (_bank) {
                case 6: func_80E9_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x80A6:
            switch (_bank) {
                case 6: func_80A6_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xDFE3:
            func_DFE3(); break;
        case 0xBB84:
            switch (_bank) {
                case 0: func_BB84_b0(); break;
                case 2: func_BB84_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC015:
            func_C015(); break;
        case 0xC04E:
            func_C04E(); break;
        case 0xC05D:
            func_C05D(); break;
        case 0xE3DA:
            func_E3DA(); break;
        case 0xE401:
            func_E401(); break;
        case 0xE77E:
            func_E77E(); break;
        case 0xE61A:
            func_E61A(); break;
        case 0x801C:
            switch (_bank) {
                case 7: func_C01C(); break;
                case 5: func_801C_b5(); break;
                case 1: func_801C_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE8BD:
            func_E8BD(); break;
        case 0xE8E8:
            func_E8E8(); break;
        case 0xE8C8:
            func_E8C8(); break;
        case 0xE8CB:
            func_E8CB(); break;
        case 0xE8C1:
            func_E8C1(); break;
        case 0xE8CF:
            func_E8CF(); break;
        case 0xE8D0:
            func_E8D0(); break;
        case 0xE8D3:
            func_E8D3(); break;
        case 0xE8D4:
            func_E8D4(); break;
        case 0xE8F3:
            func_E8F3(); break;
        case 0xE8C3:
            func_E8C3(); break;
        case 0xE8E6:
            func_E8E6(); break;
        case 0xE8BF:
            func_E8BF(); break;
        case 0xE905:
            func_E905(); break;
        case 0xE8E0:
            func_E8E0(); break;
        case 0xE8DE:
            func_E8DE(); break;
        case 0xE8FB:
            func_E8FB(); break;
        case 0xE90B:
            func_E90B(); break;
        case 0xE911:
            func_E911(); break;
        case 0xE907:
            func_E907(); break;
        case 0xE8E2:
            func_E8E2(); break;
        case 0xE8FD:
            func_E8FD(); break;
        case 0xE8FF:
            func_E8FF(); break;
        case 0xE8F1:
            func_E8F1(); break;
        case 0xE903:
            func_E903(); break;
        case 0xE901:
            func_E901(); break;
        case 0xE909:
            func_E909(); break;
        case 0xE8EC:
            func_E8EC(); break;
        case 0xE90D:
            func_E90D(); break;
        case 0xE90F:
            func_E90F(); break;
        case 0xF749:
            func_F749(); break;
        case 0xFFDF:
            func_FFDF(); break;
        case 0xAB2C:
            switch (_bank) {
                case 3: func_AB2C_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC8F:
            switch (_bank) {
                case 3: func_AC8F_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xABE7:
            switch (_bank) {
                case 3: func_ABE7_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBAD5:
            switch (_bank) {
                case 0: func_BAD5_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9BD7:
            switch (_bank) {
                case 4: func_9BD7_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xDFAF:
            func_DFAF(); break;
        case 0xE913:
            func_E913(); break;
        case 0xDF36:
            func_DF36(); break;
        case 0xEB2C:
            func_EB2C(); break;
        case 0xEB5C:
            func_EB5C(); break;
        case 0xEB46:
            func_EB46(); break;
        case 0xEBFF:
            func_EBFF(); break;
        case 0xEAF6:
            func_EAF6(); break;
        case 0xEC87:
            func_EC87(); break;
        case 0xEF5F:
            func_EF5F(); break;
        case 0xEC56:
            func_EC56(); break;
        case 0xEF4B:
            func_EF4B(); break;
        case 0xEDDD:
            func_EDDD(); break;
        case 0xEF2A:
            func_EF2A(); break;
        case 0xEE6C:
            func_EE6C(); break;
        case 0xE709:
            func_E709(); break;
        case 0xEF42:
            func_EF42(); break;
        case 0xE5C0:
            func_E5C0(); break;
        case 0xD9A6:
            func_D9A6(); break;
        case 0xCB4D:
            func_CB4D(); break;
        case 0xCCCC:
            func_CCCC(); break;
        case 0xC521:
            func_C521(); break;
        case 0xC230:
            func_C230(); break;
        case 0xC84C:
            func_C84C(); break;
        case 0xC84D:
            func_C84D(); break;
        case 0xDEC9:
            func_DEC9(); break;
        case 0xFE5F:
            func_FE5F(); break;
        case 0xC0B2:
            func_C0B2(); break;
        case 0xD64D:
            func_D64D(); break;
        case 0xE6D7:
            func_E6D7(); break;
        case 0xE14D:
            func_E14D(); break;
        case 0xE320:
            func_E320(); break;
        case 0xE352:
            func_E352(); break;
        case 0xE396:
            func_E396(); break;
        case 0xDC4D:
            func_DC4D(); break;
        case 0xE3DD:
            func_E3DD(); break;
        case 0xEA4C:
            func_EA4C(); break;
        case 0xEA4D:
            func_EA4D(); break;
        case 0xE6EB:
            func_E6EB(); break;
        case 0xE71D:
            func_E71D(); break;
        case 0xE73B:
            func_E73B(); break;
        case 0xE7A6:
            func_E7A6(); break;
        case 0xE41F:
            func_E41F(); break;
        case 0xE428:
            func_E428(); break;
        case 0xE44B:
            func_E44B(); break;
        case 0xE456:
            func_E456(); break;
        case 0xE461:
            func_E461(); break;
        case 0xE46C:
            func_E46C(); break;
        case 0xE477:
            func_E477(); break;
        case 0xFE8E:
            func_FE8E(); break;
        case 0xE4C3:
            func_E4C3(); break;
        case 0xDD4C:
            func_DD4C(); break;
        case 0xE4DE:
            func_E4DE(); break;
        case 0xFE4C:
            func_FE4C(); break;
        case 0xE531:
            func_E531(); break;
        case 0xE53E:
            func_E53E(); break;
        case 0xE588:
            func_E588(); break;
        case 0xE596:
            func_E596(); break;
        case 0xE5B0:
            func_E5B0(); break;
        case 0xE215:
            func_E215(); break;
        case 0xFD4D:
            func_FD4D(); break;
        case 0xE7FE:
            func_E7FE(); break;
        case 0xD44D:
            func_D44D(); break;
        case 0xE6CE:
            func_E6CE(); break;
        case 0xF84C:
            func_F84C(); break;
        case 0xE5F9:
            func_E5F9(); break;
        case 0xE619:
            func_E619(); break;
        case 0xE635:
            func_E635(); break;
        case 0xE65B:
            func_E65B(); break;
        case 0xE6BD:
            func_E6BD(); break;
        case 0xE64D:
            func_E64D(); break;
        case 0xE431:
            func_E431(); break;
        case 0xE287:
            func_E287(); break;
        case 0xE6C3:
            func_E6C3(); break;
        case 0xF920:
            func_F920(); break;
        case 0xF921:
            func_F921(); break;
        case 0xFE05:
            func_FE05(); break;
        case 0xFC01:
            func_FC01(); break;
        case 0xC470:
            func_C470(); break;
        case 0xC906:
            func_C906(); break;
        case 0xC4B5:
            func_C4B5(); break;
        case 0xC918:
            func_C918(); break;
        case 0xC0CA:
            func_C0CA(); break;
        case 0xC916:
            func_C916(); break;
        case 0xD070:
            func_D070(); break;
        case 0xD071:
            func_D071(); break;
        case 0xF68D:
            func_F68D(); break;
        case 0xF68E:
            func_F68E(); break;
        case 0xD001:
            func_D001(); break;
        case 0xD002:
            func_D002(); break;
        case 0xE0E9:
            func_E0E9(); break;
        case 0xD006:
            func_D006(); break;
        case 0xD007:
            func_D007(); break;
        case 0xF9D1:
            func_F9D1(); break;
        case 0xC41F:
            func_C41F(); break;
        case 0xFCAD:
            func_FCAD(); break;
        case 0xF05D:
            func_F05D(); break;
        case 0xF05E:
            func_F05E(); break;
        case 0xFC8E:
            func_FC8E(); break;
        case 0xFC8F:
            func_FC8F(); break;
        case 0xC44A:
            func_C44A(); break;
        case 0xC44B:
            func_C44B(); break;
        case 0xCBBD:
            func_CBBD(); break;
        case 0xCFCB:
            func_CFCB(); break;
        case 0xCFCC:
            func_CFCC(); break;
        case 0xC4FB:
            func_C4FB(); break;
        case 0xC54C:
            func_C54C(); break;
        case 0xC530:
            func_C530(); break;
        case 0xC708:
            func_C708(); break;
        case 0xC727:
            func_C727(); break;
        case 0xE917:
            func_E917(); break;
        case 0xCD01:
            func_CD01(); break;
        case 0xFBAD:
            func_FBAD(); break;
        case 0xFBAE:
            func_FBAE(); break;
        case 0xD1B1:
            func_D1B1(); break;
        case 0xC694:
            func_C694(); break;
        case 0xD459:
            func_D459(); break;
        case 0xD573:
            func_D573(); break;
        case 0xD645:
            func_D645(); break;
        case 0xC93C:
            func_C93C(); break;
        case 0xD004:
            func_D004(); break;
        case 0xC904:
            func_C904(); break;
        case 0xCC3D:
            func_CC3D(); break;
        case 0xC94F:
            func_C94F(); break;
        case 0xF006:
            func_F006(); break;
        case 0xCA49:
            func_CA49(); break;
        case 0xCC90:
            func_CC90(); break;
        case 0xC421:
            func_C421(); break;
        case 0xDB34:
            func_DB34(); break;
        case 0xF020:
            func_F020(); break;
        case 0xF021:
            func_F021(); break;
        case 0xDCF1:
            func_DCF1(); break;
        case 0xDE75:
            func_DE75(); break;
        case 0xE620:
            func_E620(); break;
        case 0xD8E7:
            func_D8E7(); break;
        case 0xF621:
            func_F621(); break;
        case 0xD4F7:
            func_D4F7(); break;
        case 0xCFD8:
            func_CFD8(); break;
        case 0xD18E:
            func_D18E(); break;
        case 0xF011:
            func_F011(); break;
        case 0xD121:
            func_D121(); break;
        case 0xCDD2:
            func_CDD2(); break;
        case 0xC514:
            func_C514(); break;
        case 0xF038:
            func_F038(); break;
        case 0xF039:
            func_F039(); break;
        case 0xC58B:
            func_C58B(); break;
        case 0xC620:
            func_C620(); break;
        case 0xC2C7:
            func_C2C7(); break;
        case 0xFD29:
            func_FD29(); break;
        case 0xC1C9:
            func_C1C9(); break;
        case 0xC43F:
            func_C43F(); break;
        case 0xC5C5:
            func_C5C5(); break;
        case 0xD05F:
            func_D05F(); break;
        case 0xE021:
            func_E021(); break;
        case 0xC4E1:
            func_C4E1(); break;
        case 0xE05E:
            func_E05E(); break;
        case 0xD00B:
            func_D00B(); break;
        case 0xE602:
            func_E602(); break;
        case 0xFDAD:
            func_FDAD(); break;
        case 0xFDAE:
            func_FDAE(); break;
        case 0xFD8E:
            func_FD8E(); break;
        case 0xC456:
            func_C456(); break;
        case 0xD00C:
            func_D00C(); break;
        case 0xD012:
            func_D012(); break;
        case 0xC159:
            func_C159(); break;
        case 0xF03F:
            func_F03F(); break;
        case 0xF040:
            func_F040(); break;
        case 0xFB8D:
            func_FB8D(); break;
        case 0xFB8E:
            func_FB8E(); break;
        case 0xCE08:
            func_CE08(); break;
        case 0xC960:
            func_C960(); break;
        case 0xD737:
            func_D737(); break;
        case 0xC606:
            func_C606(); break;
        case 0xC607:
            func_C607(); break;
        case 0xC11F:
            func_C11F(); break;
        case 0xFAAD:
            func_FAAD(); break;
        case 0xFAAE:
            func_FAAE(); break;
        case 0xF58D:
            func_F58D(); break;
        case 0xF58E:
            func_F58E(); break;
        case 0xD620:
            func_D620(); break;
        case 0xD621:
            func_D621(); break;
        case 0xC5D7:
            func_C5D7(); break;
        case 0xC65C:
            func_C65C(); break;
        case 0xF036:
            func_F036(); break;
        case 0xFA8D:
            func_FA8D(); break;
        case 0xFA8E:
            func_FA8E(); break;
        case 0xFC1C:
            func_FC1C(); break;
        case 0xF01F:
            func_F01F(); break;
        case 0xC300:
            func_C300(); break;
        case 0xC463:
            func_C463(); break;
        case 0xD009:
            func_D009(); break;
        case 0xC64D:
            func_C64D(); break;
        case 0xC0C7:
            func_C0C7(); break;
        case 0xC12F:
            func_C12F(); break;
        case 0xC0A9:
            func_C0A9(); break;
        case 0xC0AA:
            func_C0AA(); break;
        case 0xFFAA:
            func_FFAA(); break;
        case 0xE87E:
            func_E87E(); break;
        case 0xD01A:
            func_D01A(); break;
        case 0xFFAF:
            func_FFAF(); break;
        case 0xCEA5:
            func_CEA5(); break;
        case 0xE806:
            func_E806(); break;
        case 0xD0E8:
            func_D0E8(); break;
        case 0xF7D0:
            func_F7D0(); break;
        case 0xF7D1:
            func_F7D1(); break;
        case 0xF7AD:
            func_F7AD(); break;
        case 0xF7AE:
            func_F7AE(); break;
        case 0xF510:
            func_F510(); break;
        case 0xF511:
            func_F511(); break;
        case 0xC82A:
            func_C82A(); break;
        case 0xCA04:
            func_CA04(); break;
        case 0xF710:
            func_F710(); break;
        case 0xF711:
            func_F711(); break;
        case 0xEFBD:
            func_EFBD(); break;
        case 0xDDEF:
            func_DDEF(); break;
        case 0xDDF0:
            func_DDF0(); break;
        case 0xC399:
            func_C399(); break;
        case 0xC39A:
            func_C39A(); break;
        case 0xF0BD:
            func_F0BD(); break;
        case 0xF0BE:
            func_F0BE(); break;
        case 0xDDF1:
            func_DDF1(); break;
        case 0xC499:
            func_C499(); break;
        case 0xF1BD:
            func_F1BD(); break;
        case 0xF1BE:
            func_F1BE(); break;
        case 0xDDF2:
            func_DDF2(); break;
        case 0xF2BD:
            func_F2BD(); break;
        case 0xF2BE:
            func_F2BE(); break;
        case 0xDDF3:
            func_DDF3(); break;
        case 0xE800:
            func_E800(); break;
        case 0xE8E9:
            func_E8E9(); break;
        case 0xE9D1:
            func_E9D1(); break;
        case 0xC760:
            func_C760(); break;
        case 0xCF19:
            func_CF19(); break;
        case 0xC57B:
            func_C57B(); break;
        case 0xC57C:
            func_C57C(); break;
        case 0xC57D:
            func_C57D(); break;
        case 0xC8C8:
            func_C8C8(); break;
        case 0xC0C8:
            func_C0C8(); break;
        case 0xD010:
            func_D010(); break;
        case 0xDBD0:
            func_DBD0(); break;
        case 0xFA10:
            func_FA10(); break;
        case 0xF050:
            func_F050(); break;
        case 0xF051:
            func_F051(); break;
        case 0xC951:
            func_C951(); break;
        case 0xEED0:
            func_EED0(); break;
        case 0xEED1:
            func_EED1(); break;
        case 0xEE0F:
            func_EE0F(); break;
        case 0xEE10:
            func_EE10(); break;
        case 0xF5EE:
            func_F5EE(); break;
        case 0xF5EF:
            func_F5EF(); break;
        case 0xCDC7:
            func_CDC7(); break;
        case 0xF5CD:
            func_F5CD(); break;
        case 0xF5CE:
            func_F5CE(); break;
        case 0xC947:
            func_C947(); break;
        case 0xE648:
            func_E648(); break;
        case 0xC946:
            func_C946(); break;
        case 0xE646:
            func_E646(); break;
        case 0xC86B:
            func_C86B(); break;
        case 0xC86C:
            func_C86C(); break;
        case 0xC801:
            func_C801(); break;
        case 0xF6D0:
            func_F6D0(); break;
        case 0xF6D1:
            func_F6D1(); break;
        case 0xC86E:
            func_C86E(); break;
        case 0xF05B:
            func_F05B(); break;
        case 0xF05C:
            func_F05C(); break;
        case 0xC6C9:
            func_C6C9(); break;
        case 0xF5D0:
            func_F5D0(); break;
        case 0xC807:
            func_C807(); break;
        case 0xE8C9:
            func_E8C9(); break;
        case 0xE807:
            func_E807(); break;
        case 0xF3D1:
            func_F3D1(); break;
        case 0xE6E8:
            func_E6E8(); break;
        case 0xC6E8:
            func_C6E8(); break;
        case 0xC6E9:
            func_C6E9(); break;
        case 0xE6F3:
            func_E6F3(); break;
        case 0xE605:
            func_E605(); break;
        case 0xC908:
            func_C908(); break;
        case 0xF002:
            func_F002(); break;
        case 0xF003:
            func_F003(); break;
        case 0xE8CA:
            func_E8CA(); break;
        case 0xF008:
            func_F008(); break;
        case 0xF009:
            func_F009(); break;
        case 0xC2F1:
            func_C2F1(); break;
        case 0xC819:
            func_C819(); break;
        case 0xE4D1:
            func_E4D1(); break;
        case 0xE6E4:
            func_E6E4(); break;
        case 0xE600:
            func_E600(); break;
        case 0xC738:
            func_C738(); break;
        case 0xC6C7:
            func_C6C7(); break;
        case 0xC9B5:
            func_C9B5(); break;
        case 0xC9C9:
            func_C9C9(); break;
        case 0xF001:
            func_F001(); break;
        case 0xC940:
            func_C940(); break;
        case 0xC809:
            func_C809(); break;
        case 0xE538:
            func_E538(); break;
        case 0xF521:
            func_F521(); break;
        case 0xC974:
            func_C974(); break;
        case 0xCC4C:
            func_CC4C(); break;
        case 0xC9CD:
            func_C9CD(); break;
        case 0xF00E:
            func_F00E(); break;
        case 0xE939:
            func_E939(); break;
        case 0xF0AA:
            func_F0AA(); break;
        case 0xF0AB:
            func_F0AB(); break;
        case 0xE60C:
            func_E60C(); break;
        case 0xCA00:
            func_CA00(); break;
        case 0xD0CB:
            func_D0CB(); break;
        case 0xF4D0:
            func_F4D0(); break;
        case 0xF4D1:
            func_F4D1(); break;
        case 0xC602:
            func_C602(); break;
        case 0xED38:
            func_ED38(); break;
        case 0xED39:
            func_ED39(); break;
        case 0xCA36:
            func_CA36(); break;
        case 0xFE82:
            func_FE82(); break;
        case 0xC870:
            func_C870(); break;
        case 0xC95C:
            func_C95C(); break;
        case 0xF000:
            func_F000(); break;
        case 0xC80D:
            func_C80D(); break;
        case 0xCA5A:
            func_CA5A(); break;
        case 0xCA7B:
            func_CA7B(); break;
        case 0xC952:
            func_C952(); break;
        case 0xE8C0:
            func_E8C0(); break;
        case 0xC08D:
            func_C08D(); break;
        case 0xC08E:
            func_C08E(); break;
        case 0xE029:
            func_E029(); break;
        case 0xC5E0:
            func_C5E0(); break;
        case 0xD033:
            func_D033(); break;
        case 0xCC61:
            func_CC61(); break;
        case 0xFEA6:
            func_FEA6(); break;
        case 0xFEA7:
            func_FEA7(); break;
        case 0xC6BD:
            func_C6BD(); break;
        case 0xC6BE:
            func_C6BE(); break;
        case 0xFEC6:
            func_FEC6(); break;
        case 0xE6BE:
            func_E6BE(); break;
        case 0xFEE6:
            func_FEE6(); break;
        case 0xE85A:
            func_E85A(); break;
        case 0xC982:
            func_C982(); break;
        case 0xF061:
            func_F061(); break;
        case 0xF062:
            func_F062(); break;
        case 0xF063:
            func_F063(); break;
        case 0xF810:
            func_F810(); break;
        case 0xF811:
            func_F811(); break;
        case 0xCD3E:
            func_CD3E(); break;
        case 0xE38D:
            func_E38D(); break;
        case 0xF007:
            func_F007(); break;
        case 0xEBA9:
            func_EBA9(); break;
        case 0xEBAA:
            func_EBAA(); break;
        case 0xCD9A:
            func_CD9A(); break;
        case 0xCD9B:
            func_CD9B(); break;
        case 0xCEB4:
            func_CEB4(); break;
        case 0xC954:
            func_C954(); break;
        case 0xC90A:
            func_C90A(); break;
        case 0xFA30:
            func_FA30(); break;
        case 0xEAA5:
            func_EAA5(); break;
        case 0xEAA6:
            func_EAA6(); break;
        case 0xCD6A:
            func_CD6A(); break;
        case 0xCF3A:
            func_CF3A(); break;
        case 0xCA26:
            func_CA26(); break;
        case 0xE6A9:
            func_E6A9(); break;
        case 0xEA8D:
            func_EA8D(); break;
        case 0xEA8E:
            func_EA8E(); break;
        case 0xC4A9:
            func_C4A9(); break;
        case 0xEAA9:
            func_EAA9(); break;
        case 0xEAAA:
            func_EAAA(); break;
        case 0xCFAC:
            func_CFAC(); break;
        case 0xCFAE:
            func_CFAE(); break;
        case 0xC902:
            func_C902(); break;
        case 0xD029:
            func_D029(); break;
        case 0xF03D:
            func_F03D(); break;
        case 0xD0AB:
            func_D0AB(); break;
        case 0xF004:
            func_F004(); break;
        case 0xC931:
            func_C931(); break;
        case 0xDD09:
            func_DD09(); break;
        case 0xCF9F:
            func_CF9F(); break;
        case 0xF0CF:
            func_F0CF(); break;
        case 0xF0D0:
            func_F0D0(); break;
        case 0xD0CF:
            func_D0CF(); break;
        case 0xCFA5:
            func_CFA5(); break;
        case 0xCFA6:
            func_CFA6(); break;
        case 0xCF6C:
            func_CF6C(); break;
        case 0xFBF0:
            func_FBF0(); break;
        case 0xFBF1:
            func_FBF1(); break;
        case 0xCF95:
            func_CF95(); break;
        case 0xE6D0:
            func_E6D0(); break;
        case 0xC74F:
            func_C74F(); break;
        case 0xC786:
            func_C786(); break;
        case 0xC7BE:
            func_C7BE(); break;
        case 0xC320:
            func_C320(); break;
        case 0xCFC3:
            func_CFC3(); break;
        case 0xCFC4:
            func_CFC4(); break;
        case 0xFB29:
            func_FB29(); break;
        case 0xFB2A:
            func_FB2A(); break;
        case 0xD0FC:
            func_D0FC(); break;
        case 0xF0A9:
            func_F0A9(); break;
        case 0xD0C9:
            func_D0C9(); break;
        case 0xFFCA:
            func_FFCA(); break;
        case 0xD0FF:
            func_D0FF(); break;
        case 0xD179:
            func_D179(); break;
        case 0xF8AA:
            func_F8AA(); break;
        case 0xD0B1:
            func_D0B1(); break;
        case 0xE604:
            func_E604(); break;
        case 0xE0C9:
            func_E0C9(); break;
        case 0xF44C:
            func_F44C(); break;
        case 0xF44D:
            func_F44D(); break;
        case 0xD0F5:
            func_D0F5(); break;
        case 0xD101:
            func_D101(); break;
        case 0xE60E:
            func_E60E(); break;
        case 0xD00E:
            func_D00E(); break;
        case 0xD0A0:
            func_D0A0(); break;
        case 0xE610:
            func_E610(); break;
        case 0xC609:
            func_C609(); break;
        case 0xD09A:
            func_D09A(); break;
        case 0xD06A:
            func_D06A(); break;
        case 0xF0EA:
            func_F0EA(); break;
        case 0xF0EB:
            func_F0EB(); break;
        case 0xE651:
            func_E651(); break;
        case 0xF00D:
            func_F00D(); break;
        case 0xD02F:
            func_D02F(); break;
        case 0xC805:
            func_C805(); break;
        case 0xC848:
            func_C848(); break;
        case 0xD066:
            func_D066(); break;
        case 0xC949:
            func_C949(); break;
        case 0xF092:
            func_F092(); break;
        case 0xF093:
            func_F093(); break;
        case 0xD452:
            func_D452(); break;
        case 0xD084:
            func_D084(); break;
        case 0xD085:
            func_D085(); break;
        case 0xD19C:
            func_D19C(); break;
        case 0xD19D:
            func_D19D(); break;
        case 0xD19E:
            func_D19E(); break;
        case 0xF92A:
            func_F92A(); break;
        case 0xF0F9:
            func_F0F9(); break;
        case 0xF0FA:
            func_F0FA(); break;
        case 0xC02A:
            func_C02A(); break;
        case 0xF0C0:
            func_F0C0(); break;
        case 0xF0C1:
            func_F0C1(); break;
        case 0xF0D4:
            func_F0D4(); break;
        case 0xD357:
            func_D357(); break;
        case 0xD054:
            func_D054(); break;
        case 0xF054:
            func_F054(); break;
        case 0xF055:
            func_F055(); break;
        case 0xE61C:
            func_E61C(); break;
        case 0xD32A:
            func_D32A(); break;
        case 0xF081:
            func_F081(); break;
        case 0xEEC9:
            func_EEC9(); break;
        case 0xEECA:
            func_EECA(); break;
        case 0xEEA9:
            func_EEA9(); break;
        case 0xEEAA:
            func_EEAA(); break;
        case 0xD07D:
            func_D07D(); break;
        case 0xE67D:
            func_E67D(); break;
        case 0xD41B:
            func_D41B(); break;
        case 0xE501:
            func_E501(); break;
        case 0xF0FF:
            func_F0FF(); break;
        case 0xF100:
            func_F100(); break;
        case 0xC61D:
            func_C61D(); break;
        case 0xFC4C:
            func_FC4C(); break;
        case 0xD3FD:
            func_D3FD(); break;
        case 0xF070:
            func_F070(); break;
        case 0xF05F:
            func_F05F(); break;
        case 0xF07D:
            func_F07D(); break;
        case 0xF07E:
            func_F07E(); break;
        case 0xC67D:
            func_C67D(); break;
        case 0xC601:
            func_C601(); break;
        case 0xF8D1:
            func_F8D1(); break;
        case 0xE80A:
            func_E80A(); break;
        case 0xF082:
            func_F082(); break;
        case 0xF083:
            func_F083(); break;
        case 0xF0C9:
            func_F0C9(); break;
        case 0xF0CA:
            func_F0CA(); break;
        case 0xF084:
            func_F084(); break;
        case 0xD089:
            func_D089(); break;
        case 0xD49E:
            func_D49E(); break;
        case 0xE61E:
            func_E61E(); break;
        case 0xF02A:
            func_F02A(); break;
        case 0xF1B0:
            func_F1B0(); break;
        case 0xF1B1:
            func_F1B1(); break;
        case 0xE94D:
            func_E94D(); break;
        case 0xD4EA:
            func_D4EA(); break;
        case 0xEAF0:
            func_EAF0(); break;
        case 0xEAF1:
            func_EAF1(); break;
        case 0xD52B:
            func_D52B(); break;
        case 0xD08F:
            func_D08F(); break;
        case 0xF07F:
            func_F07F(); break;
        case 0xC829:
            func_C829(); break;
        case 0xEF29:
            func_EF29(); break;
        case 0xD078:
            func_D078(); break;
        case 0xCC86:
            func_CC86(); break;
        case 0xDF29:
            func_DF29(); break;
        case 0xEE01:
            func_EE01(); break;
        case 0xD7BC:
            func_D7BC(); break;
        case 0xF74C:
            func_F74C(); break;
        case 0xF74D:
            func_F74D(); break;
        case 0xD6F8:
            func_D6F8(); break;
        case 0xC9D6:
            func_C9D6(); break;
        case 0xD6E7:
            func_D6E7(); break;
        case 0xFD38:
            func_FD38(); break;
        case 0xFD39:
            func_FD39(); break;
        case 0xE005:
            func_E005(); break;
        case 0xD2D1:
            func_D2D1(); break;
        case 0xF028:
            func_F028(); break;
        case 0xD042:
            func_D042(); break;
        case 0xD696:
            func_D696(); break;
        case 0xD79B:
            func_D79B(); break;
        case 0xD79C:
            func_D79C(); break;
        case 0xC685:
            func_C685(); break;
        case 0xD657:
            func_D657(); break;
        case 0xD87D:
            func_D87D(); break;
        case 0xD80C:
            func_D80C(); break;
        case 0xC44C:
            func_C44C(); break;
        case 0xD8C5:
            func_D8C5(); break;
        case 0xD878:
            func_D878(); break;
        case 0xD879:
            func_D879(); break;
        case 0xD85D:
            func_D85D(); break;
        case 0xD874:
            func_D874(); break;
        case 0xD875:
            func_D875(); break;
        case 0xE688:
            func_E688(); break;
        case 0xE54D:
            func_E54D(); break;
        case 0xD7EA:
            func_D7EA(); break;
        case 0xF0FD:
            func_F0FD(); break;
        case 0xF0FE:
            func_F0FE(); break;
        case 0xD5C5:
            func_D5C5(); break;
        case 0xF08F:
            func_F08F(); break;
        case 0xF090:
            func_F090(); break;
        case 0xF14C:
            func_F14C(); break;
        case 0xF14D:
            func_F14D(); break;
        case 0xD9F2:
            func_D9F2(); break;
        case 0xF0D2:
            func_F0D2(); break;
        case 0xC548:
            func_C548(); break;
        case 0xC549:
            func_C549(); break;
        case 0xF138:
            func_F138(); break;
        case 0xF139:
            func_F139(); break;
        case 0xC551:
            func_C551(); break;
        case 0xD043:
            func_D043(); break;
        case 0xDA96:
            func_DA96(); break;
        case 0xC9E5:
            func_C9E5(); break;
        case 0xC220:
            func_C220(); break;
        case 0xD965:
            func_D965(); break;
        case 0xDA33:
            func_DA33(); break;
        case 0xD98C:
            func_D98C(); break;
        case 0xC651:
            func_C651(); break;
        case 0xF6AD:
            func_F6AD(); break;
        case 0xF6AE:
            func_F6AE(); break;
        case 0xC604:
            func_C604(); break;
        case 0xD08B:
            func_D08B(); break;
        case 0xF690:
            func_F690(); break;
        case 0xF691:
            func_F691(); break;
        case 0xCAF6:
            func_CAF6(); break;
        case 0xF02E:
            func_F02E(); break;
        case 0xF02F:
            func_F02F(); break;
        case 0xF02B:
            func_F02B(); break;
        case 0xF02C:
            func_F02C(); break;
        case 0xF02D:
            func_F02D(); break;
        case 0xD02D:
            func_D02D(); break;
        case 0xD03F:
            func_D03F(); break;
        case 0xF94C:
            func_F94C(); break;
        case 0xF94D:
            func_F94D(); break;
        case 0xDB76:
            func_DB76(); break;
        case 0xC0E3:
            func_C0E3(); break;
        case 0xC0E4:
            func_C0E4(); break;
        case 0xC006:
            func_C006(); break;
        case 0xC007:
            func_C007(); break;
        case 0xC3BE:
            func_C3BE(); break;
        case 0xCA86:
            func_CA86(); break;
        case 0xC9F1:
            func_C9F1(); break;
        case 0xCB85:
            func_CB85(); break;
        case 0xDE6E:
            func_DE6E(); break;
        case 0xE1B9:
            func_E1B9(); break;
        case 0xDDE1:
            func_DDE1(); break;
        case 0xDDE2:
            func_DDE2(); break;
        case 0xCDDE:
            func_CDDE(); break;
        case 0xE2BA:
            func_E2BA(); break;
        case 0xDDE3:
            func_DDE3(); break;
        case 0xF095:
            func_F095(); break;
        case 0xF096:
            func_F096(); break;
        case 0xDCA2:
            func_DCA2(); break;
        case 0xC8DD:
            func_C8DD(); break;
        case 0xCBA5:
            func_CBA5(); break;
        case 0xC98B:
            func_C98B(); break;
        case 0xDCAD:
            func_DCAD(); break;
        case 0xECBE:
            func_ECBE(); break;
        case 0xDCEC:
            func_DCEC(); break;
        case 0xDCED:
            func_DCED(); break;
        case 0xC04D:
            func_C04D(); break;
        case 0xDDB1:
            func_DDB1(); break;
        case 0xD3A6:
            func_D3A6(); break;
        case 0xC9D4:
            func_C9D4(); break;
        case 0xDD55:
            func_DD55(); break;
        case 0xD551:
            func_D551(); break;
        case 0xDD71:
            func_DD71(); break;
        case 0xF03A:
            func_F03A(); break;
        case 0xE050:
            func_E050(); break;
        case 0xDD02:
            func_DD02(); break;
        case 0xDCFA:
            func_DCFA(); break;
        case 0xF56D:
            func_F56D(); break;
        case 0xF56E:
            func_F56E(); break;
        case 0xDDF5:
            func_DDF5(); break;
        case 0xFDDD:
            func_FDDD(); break;
        case 0xDDFD:
            func_DDFD(); break;
        case 0xDE35:
            func_DE35(); break;
        case 0xE1AC:
            func_E1AC(); break;
        case 0xDEA9:
            func_DEA9(); break;
        case 0xEA2C:
            func_EA2C(); break;
        case 0xEA2D:
            func_EA2D(); break;
        case 0xEA2E:
            func_EA2E(); break;
        case 0xE1DE:
            func_E1DE(); break;
        case 0xDF07:
            func_DF07(); break;
        case 0xDF34:
            func_DF34(); break;
        case 0xF4BD:
            func_F4BD(); break;
        case 0xF4BE:
            func_F4BE(); break;
        case 0xE1F4:
            func_E1F4(); break;
        case 0xE1F5:
            func_E1F5(); break;
        case 0xF0E1:
            func_F0E1(); break;
        case 0xC851:
            func_C851(); break;
        case 0xC91F:
            func_C91F(); break;
        case 0xFDA9:
            func_FDA9(); break;
        case 0xC8FD:
            func_C8FD(); break;
        case 0xE073:
            func_E073(); break;
        case 0xCF65:
            func_CF65(); break;
        case 0xE0BE:
            func_E0BE(); break;
        case 0xE18B:
            func_E18B(); break;
        case 0xE802:
            func_E802(); break;
        case 0xE109:
            func_E109(); break;
        case 0xE204:
            func_E204(); break;
        case 0xE205:
            func_E205(); break;
        case 0xD0E3:
            func_D0E3(); break;
        case 0xF106:
            func_F106(); break;
        case 0xF107:
            func_F107(); break;
        case 0xE193:
            func_E193(); break;
        case 0xC9E2:
            func_C9E2(); break;
        case 0xF729:
            func_F729(); break;
        case 0xF72A:
            func_F72A(); break;
        case 0xF0A1:
            func_F0A1(); break;
        case 0xD286:
            func_D286(); break;
        case 0xDE82:
            func_DE82(); break;
        case 0xF012:
            func_F012(); break;
        case 0xD016:
            func_D016(); break;
        case 0xF0A8:
            func_F0A8(); break;
        case 0xF0FB:
            func_F0FB(); break;
        case 0xCF84:
            func_CF84(); break;
        case 0xE293:
            func_E293(); break;
        case 0xD186:
            func_D186(); break;
        case 0xF110:
            func_F110(); break;
        case 0xF111:
            func_F111(); break;
        case 0xC50B:
            func_C50B(); break;
        case 0xEB10:
            func_EB10(); break;
        case 0xEB11:
            func_EB11(); break;
        case 0xC80B:
            func_C80B(); break;
        case 0xEDD0:
            func_EDD0(); break;
        case 0xEDD1:
            func_EDD1(); break;
        case 0xF0D1:
            func_F0D1(); break;
        case 0xDA4D:
            func_DA4D(); break;
        case 0xE3DB:
            func_E3DB(); break;
        case 0xD0DF:
            func_D0DF(); break;
        case 0xD0EF:
            func_D0EF(); break;
        case 0xD0A6:
            func_D0A6(); break;
        case 0xD0ED:
            func_D0ED(); break;
        case 0xD1A6:
            func_D1A6(); break;
        case 0xD1EE:
            func_D1EE(); break;
        case 0xD01C:
            func_D01C(); break;
        case 0xEC30:
            func_EC30(); break;
        case 0xEC31:
            func_EC31(); break;
        case 0xFE21:
            func_FE21(); break;
        case 0xE61B:
            func_E61B(); break;
        case 0xF6CA:
            func_F6CA(); break;
        case 0xF6CB:
            func_F6CB(); break;
        case 0xFCE0:
            func_FCE0(); break;
        case 0xD0FD:
            func_D0FD(); break;
        case 0xEFD0:
            func_EFD0(); break;
        case 0xE6C6:
            func_E6C6(); break;
        case 0xC88B:
            func_C88B(); break;
        case 0xF09E:
            func_F09E(); break;
        case 0xF09F:
            func_F09F(); break;
        case 0xF7C9:
            func_F7C9(); break;
        case 0xF7CA:
            func_F7CA(); break;
        case 0xC0BD:
            func_C0BD(); break;
        case 0xC09D:
            func_C09D(); break;
        case 0xC09E:
            func_C09E(); break;
        case 0xCE9D:
            func_CE9D(); break;
        case 0xD29E:
            func_D29E(); break;
        case 0xC29D:
            func_C29D(); break;
        case 0xC49D:
            func_C49D(); break;
        case 0xC49E:
            func_C49E(); break;
        case 0xE77F:
            func_E77F(); break;
        case 0xEA1E:
            func_EA1E(); break;
        case 0xC9A4:
            func_C9A4(); break;
        case 0xC57F:
            func_C57F(); break;
        case 0xC580:
            func_C580(); break;
        case 0xE88B:
            func_E88B(); break;
        case 0xC822:
            func_C822(); break;
        case 0xC823:
            func_C823(); break;
        case 0xE840:
            func_E840(); break;
        case 0xC50D:
            func_C50D(); break;
        case 0xE8AB:
            func_E8AB(); break;
        case 0xED10:
            func_ED10(); break;
        case 0xC0EE:
            func_C0EE(); break;
        case 0xFFC1:
            func_FFC1(); break;
        case 0xC060:
            func_C060(); break;
        case 0xC061:
            func_C061(); break;
        case 0xC504:
            func_C504(); break;
        case 0xC505:
            func_C505(); break;
        case 0xF0A2:
            func_F0A2(); break;
        case 0xE931:
            func_E931(); break;
        case 0xC0A2:
            func_C0A2(); break;
        case 0xC0A3:
            func_C0A3(); break;
        case 0xE3D1:
            func_E3D1(); break;
        case 0xDFF0:
            func_DFF0(); break;
        case 0xE914:
            func_E914(); break;
        case 0xEA02:
            func_EA02(); break;
        case 0xE98A:
            func_E98A(); break;
        case 0xC543:
            func_C543(); break;
        case 0xC53F:
            func_C53F(); break;
        case 0xC540:
            func_C540(); break;
        case 0xE615:
            func_E615(); break;
        case 0xE991:
            func_E991(); break;
        case 0xE6A2:
            func_E6A2(); break;
        case 0xEFF1:
            func_EFF1(); break;
        case 0xCA2F:
            func_CA2F(); break;
        case 0xEC1C:
            func_EC1C(); break;
        case 0xEC1D:
            func_EC1D(); break;
        case 0xEC9D:
            func_EC9D(); break;
        case 0xEC9E:
            func_EC9E(); break;
        case 0xEA88:
            func_EA88(); break;
        case 0xEA89:
            func_EA89(); break;
        case 0xCAEA:
            func_CAEA(); break;
        case 0xEACA:
            func_EACA(); break;
        case 0xEACB:
            func_EACB(); break;
        case 0xE0EB:
            func_E0EB(); break;
        case 0xEAE0:
            func_EAE0(); break;
        case 0xEAE1:
            func_EAE1(); break;
        case 0xEB78:
            func_EB78(); break;
        case 0xEB7B:
            func_EB7B(); break;
        case 0xEB7C:
            func_EB7C(); break;
        case 0xD5EB:
            func_D5EB(); break;
        case 0xECD5:
            func_ECD5(); break;
        case 0xECD6:
            func_ECD6(); break;
        case 0xEDB7:
            func_EDB7(); break;
        case 0xEDB8:
            func_EDB8(); break;
        case 0xEB92:
            func_EB92(); break;
        case 0xEE0E:
            func_EE0E(); break;
        case 0xEF6D:
            func_EF6D(); break;
        case 0xF00C:
            func_F00C(); break;
        case 0xEF9D:
            func_EF9D(); break;
        case 0xF042:
            func_F042(); break;
        case 0xF043:
            func_F043(); break;
        case 0xCEF0:
            func_CEF0(); break;
        case 0xF0CE:
            func_F0CE(); break;
        case 0xF293:
            func_F293(); break;
        case 0xD2F4:
            func_D2F4(); break;
        case 0xF3D2:
            func_F3D2(); break;
        case 0xF37C:
            func_F37C(); break;
        case 0xF3F4:
            func_F3F4(); break;
        case 0xF4AC:
            func_F4AC(); break;
        case 0xF4AD:
            func_F4AD(); break;
        case 0xE3F4:
            func_E3F4(); break;
        case 0xF4E3:
            func_F4E3(); break;
        case 0xF4E4:
            func_F4E4(); break;
        case 0xF4E7:
            func_F4E7(); break;
        case 0xF4E8:
            func_F4E8(); break;
        case 0xF7F4:
            func_F7F4(); break;
        case 0xF7F5:
            func_F7F5(); break;
        case 0xF4F7:
            func_F4F7(); break;
        case 0xF4F8:
            func_F4F8(); break;
        case 0xFAF5:
            func_FAF5(); break;
        case 0xEDFA:
            func_EDFA(); break;
        case 0xEDFB:
            func_EDFB(); break;
        case 0xF1B8:
            func_F1B8(); break;
        case 0xF1B9:
            func_F1B9(); break;
        case 0xEF7A:
            func_EF7A(); break;
        case 0xEF90:
            func_EF90(); break;
        case 0xF750:
            func_F750(); break;
        case 0xF776:
            func_F776(); break;
        case 0xEBF7:
            func_EBF7(); break;
        case 0xEBF8:
            func_EBF8(); break;
        case 0xEEEB:
            func_EEEB(); break;
        case 0xEEEC:
            func_EEEC(); break;
        case 0xF3EE:
            func_F3EE(); break;
        case 0xF3EF:
            func_F3EF(); break;
        case 0xEEF3:
            func_EEF3(); break;
        case 0xEEF4:
            func_EEF4(); break;
        case 0xEEF5:
            func_EEF5(); break;
        case 0xF7EF:
            func_F7EF(); break;
        case 0xEEF7:
            func_EEF7(); break;
        case 0xFEF8:
            func_FEF8(); break;
        case 0xF2FE:
            func_F2FE(); break;
        case 0xF302:
            func_F302(); break;
        case 0xF304:
            func_F304(); break;
        case 0xF561:
            func_F561(); break;
        case 0xF562:
            func_F562(); break;
        case 0xF25C:
            func_F25C(); break;
        case 0xF4D2:
            func_F4D2(); break;
        case 0xF4D3:
            func_F4D3(); break;
        case 0xEA8C:
            func_EA8C(); break;
        case 0xEA95:
            func_EA95(); break;
        case 0xEA96:
            func_EA96(); break;
        case 0xF6E5:
            func_F6E5(); break;
        case 0xF6E6:
            func_F6E6(); break;
        case 0xEAF7:
            func_EAF7(); break;
        case 0xF737:
            func_F737(); break;
        case 0xF738:
            func_F738(); break;
        case 0xEC57:
            func_EC57(); break;
        case 0xFBEC:
            func_FBEC(); break;
        case 0xEAFB:
            func_EAFB(); break;
        case 0xEAFC:
            func_EAFC(); break;
        case 0xEB1B:
            func_EB1B(); break;
        case 0xEB1C:
            func_EB1C(); break;
        case 0xEB4B:
            func_EB4B(); break;
        case 0xEB4C:
            func_EB4C(); break;
        case 0xEB66:
            func_EB66(); break;
        case 0xEB67:
            func_EB67(); break;
        case 0xF721:
            func_F721(); break;
        case 0xF6F7:
            func_F6F7(); break;
        case 0xF6F8:
            func_F6F8(); break;
        case 0xEB25:
            func_EB25(); break;
        case 0xEB26:
            func_EB26(); break;
        case 0xEB55:
            func_EB55(); break;
        case 0xEB56:
            func_EB56(); break;
        case 0xF74A:
            func_F74A(); break;
        case 0xCD21:
            func_CD21(); break;
        case 0xEB2D:
            func_EB2D(); break;
        case 0xFFA3:
            func_FFA3(); break;
        case 0xE121:
            func_E121(); break;
        case 0xEB5D:
            func_EB5D(); break;
        case 0xEB47:
            func_EB47(); break;
        case 0xEB7F:
            func_EB7F(); break;
        case 0xEB80:
            func_EB80(); break;
        case 0xF713:
            func_F713(); break;
        case 0xF714:
            func_F714(); break;
        case 0xEB88:
            func_EB88(); break;
        case 0xEB89:
            func_EB89(); break;
        case 0xEB9F:
            func_EB9F(); break;
        case 0xEBA0:
            func_EBA0(); break;
        case 0xEBB2:
            func_EBB2(); break;
        case 0xEBB3:
            func_EBB3(); break;
        case 0xEBB9:
            func_EBB9(); break;
        case 0xEBBA:
            func_EBBA(); break;
        case 0xEC60:
            func_EC60(); break;
        case 0xEC61:
            func_EC61(); break;
        case 0xEBF4:
            func_EBF4(); break;
        case 0xEC00:
            func_EC00(); break;
        case 0xC0AD:
            func_C0AD(); break;
        case 0xC0AE:
            func_C0AE(); break;
        case 0xE0AE:
            func_E0AE(); break;
        case 0xC2AE:
            func_C2AE(); break;
        case 0xDFCA:
            func_DFCA(); break;
        case 0xE08D:
            func_E08D(); break;
        case 0xEE8D:
            func_EE8D(); break;
        case 0xEE8E:
            func_EE8E(); break;
        case 0xDEAD:
            func_DEAD(); break;
        case 0xDAED:
            func_DAED(); break;
        case 0xEFA5:
            func_EFA5(); break;
        case 0xEC19:
            func_EC19(); break;
        case 0xC28E:
            func_C28E(); break;
        case 0xEC1A:
            func_EC1A(); break;
        case 0xEC1B:
            func_EC1B(); break;
        case 0xC48D:
            func_C48D(); break;
        case 0xCE8E:
            func_CE8E(); break;
        case 0xFFE6:
            func_FFE6(); break;
        case 0xEC2A:
            func_EC2A(); break;
        case 0xEC2B:
            func_EC2B(); break;
        case 0xEC46:
            func_EC46(); break;
        case 0xEC47:
            func_EC47(); break;
        case 0xEC40:
            func_EC40(); break;
        case 0xEC41:
            func_EC41(); break;
        case 0xEC74:
            func_EC74(); break;
        case 0xEC75:
            func_EC75(); break;
        case 0xEC7E:
            func_EC7E(); break;
        case 0xEC7F:
            func_EC7F(); break;
        case 0xF64C:
            func_F64C(); break;
        case 0xF64D:
            func_F64D(); break;
        case 0xEC88:
            func_EC88(); break;
        case 0xEF60:
            func_EF60(); break;
        case 0xECA1:
            func_ECA1(); break;
        case 0xECA2:
            func_ECA2(); break;
        case 0xECA9:
            func_ECA9(); break;
        case 0xECAA:
            func_ECAA(); break;
        case 0xC26E:
            func_C26E(); break;
        case 0xE28D:
            func_E28D(); break;
        case 0xC4AE:
            func_C4AE(); break;
        case 0xE48D:
            func_E48D(); break;
        case 0xE48E:
            func_E48E(); break;
        case 0xE9DE:
            func_E9DE(); break;
        case 0xECE9:
            func_ECE9(); break;
        case 0xECEA:
            func_ECEA(); break;
        case 0xF8F7:
            func_F8F7(); break;
        case 0xECF8:
            func_ECF8(); break;
        case 0xECF9:
            func_ECF9(); break;
        case 0xED02:
            func_ED02(); break;
        case 0xED03:
            func_ED03(); break;
        case 0xEDAC:
            func_EDAC(); break;
        case 0xEDAD:
            func_EDAD(); break;
        case 0xF71B:
            func_F71B(); break;
        case 0xED43:
            func_ED43(); break;
        case 0xED44:
            func_ED44(); break;
        case 0xED64:
            func_ED64(); break;
        case 0xED65:
            func_ED65(); break;
        case 0xEDA1:
            func_EDA1(); break;
        case 0xEDA2:
            func_EDA2(); break;
        case 0xC91E:
            func_C91E(); break;
        case 0xC921:
            func_C921(); break;
        case 0xEF4C:
            func_EF4C(); break;
        case 0xEDBF:
            func_EDBF(); break;
        case 0xEDC0:
            func_EDC0(); break;
        case 0xC8EE:
            func_C8EE(); break;
        case 0xEDC8:
            func_EDC8(); break;
        case 0xEDC9:
            func_EDC9(); break;
        case 0xE7EE:
            func_E7EE(); break;
        case 0xEDE7:
            func_EDE7(); break;
        case 0xEDE8:
            func_EDE8(); break;
        case 0xF746:
            func_F746(); break;
        case 0xF747:
            func_F747(); break;
        case 0xFD20:
            func_FD20(); break;
        case 0xFD21:
            func_FD21(); break;
        case 0xEE04:
            func_EE04(); break;
        case 0xEE05:
            func_EE05(); break;
        case 0xC8EF:
            func_C8EF(); break;
        case 0xEDDE:
            func_EDDE(); break;
        case 0xEE1C:
            func_EE1C(); break;
        case 0xEE1D:
            func_EE1D(); break;
        case 0xEE34:
            func_EE34(); break;
        case 0xEE35:
            func_EE35(); break;
        case 0xEE4D:
            func_EE4D(); break;
        case 0xEE4E:
            func_EE4E(); break;
        case 0xEE5B:
            func_EE5B(); break;
        case 0xEE5C:
            func_EE5C(); break;
        case 0xEF2B:
            func_EF2B(); break;
        case 0xD0F1:
            func_D0F1(); break;
        case 0xF8A2:
            func_F8A2(); break;
        case 0xECA0:
            func_ECA0(); break;
        case 0xF5A2:
            func_F5A2(); break;
        case 0xF5A3:
            func_F5A3(); break;
        case 0xE4A0:
            func_E4A0(); break;
        case 0xF960:
            func_F960(); break;
        case 0xF961:
            func_F961(); break;
        case 0xEEF9:
            func_EEF9(); break;
        case 0xEEFA:
            func_EEFA(); break;
        case 0xEF22:
            func_EF22(); break;
        case 0xEEFD:
            func_EEFD(); break;
        case 0xEF01:
            func_EF01(); break;
        case 0xEF02:
            func_EF02(); break;
        case 0xEF05:
            func_EF05(); break;
        case 0xE70A:
            func_E70A(); break;
        case 0xFCCA:
            func_FCCA(); break;
        case 0xF01A:
            func_F01A(); break;
        case 0xF01B:
            func_F01B(); break;
        case 0xE4F0:
            func_E4F0(); break;
        case 0xD6F0:
            func_D6F0(); break;
        case 0xEF71:
            func_EF71(); break;
        case 0xEF72:
            func_EF72(); break;
        case 0xEF7E:
            func_EF7E(); break;
        case 0xEF7F:
            func_EF7F(); break;
        case 0xEF94:
            func_EF94(); break;
        case 0xEF95:
            func_EF95(); break;
        case 0xEFB3:
            func_EFB3(); break;
        case 0xEFB4:
            func_EFB4(); break;
        case 0xC2F8:
            func_C2F8(); break;
        case 0xEFC2:
            func_EFC2(); break;
        case 0xCCF8:
            func_CCF8(); break;
        case 0xEFCC:
            func_EFCC(); break;
        case 0xEFDD:
            func_EFDD(); break;
        case 0xEFDE:
            func_EFDE(); break;
        case 0xEFF8:
            func_EFF8(); break;
        case 0xEFEF:
            func_EFEF(); break;
        case 0xEFFD:
            func_EFFD(); break;
        case 0xD0A9:
            func_D0A9(); break;
        case 0xF017:
            func_F017(); break;
        case 0xF018:
            func_F018(); break;
        case 0xECA3:
            func_ECA3(); break;
        case 0xFAA0:
            func_FAA0(); break;
        case 0xF04E:
            func_F04E(); break;
        case 0xF04F:
            func_F04F(); break;
        case 0xEC5B:
            func_EC5B(); break;
        case 0xEC5C:
            func_EC5C(); break;
        case 0xF067:
            func_F067(); break;
        case 0xC968:
            func_C968(); break;
        case 0xF0C5:
            func_F0C5(); break;
        case 0xF0C6:
            func_F0C6(); break;
        case 0xEC6A:
            func_EC6A(); break;
        case 0xEC6B:
            func_EC6B(); break;
        case 0xF734:
            func_F734(); break;
        case 0xF735:
            func_F735(); break;
        case 0xF0F8:
            func_F0F8(); break;
        case 0xEB00:
            func_EB00(); break;
        case 0xEB01:
            func_EB01(); break;
        case 0xF5AC:
            func_F5AC(); break;
        case 0xF5AD:
            func_F5AD(); break;
        case 0xF101:
            func_F101(); break;
        case 0xF102:
            func_F102(); break;
        case 0xF108:
            func_F108(); break;
        case 0xF132:
            func_F132(); break;
        case 0xC5EC:
            func_C5EC(); break;
        case 0xF19E:
            func_F19E(); break;
        case 0xF19F:
            func_F19F(); break;
        case 0xF149:
            func_F149(); break;
        case 0xF14A:
            func_F14A(); break;
        case 0xF725:
            func_F725(); break;
        case 0xF726:
            func_F726(); break;
        case 0xF181:
            func_F181(); break;
        case 0xF182:
            func_F182(); break;
        case 0xEEA0:
            func_EEA0(); break;
        case 0xEEA1:
            func_EEA1(); break;
        case 0xF6A0:
            func_F6A0(); break;
        case 0xF6A1:
            func_F6A1(); break;
        case 0xF0A3:
            func_F0A3(); break;
        case 0xFEA1:
            func_FEA1(); break;
        case 0xF172:
            func_F172(); break;
        case 0xF169:
            func_F169(); break;
        case 0xF16A:
            func_F16A(); break;
        case 0xEE11:
            func_EE11(); break;
        case 0xEE80:
            func_EE80(); break;
        case 0xEE81:
            func_EE81(); break;
        case 0xF1BA:
            func_F1BA(); break;
        case 0xF1BB:
            func_F1BB(); break;
        case 0xD5DE:
            func_D5DE(); break;
        case 0xF1D5:
            func_F1D5(); break;
        case 0xF1D6:
            func_F1D6(); break;
        case 0xEC65:
            func_EC65(); break;
        case 0xEC66:
            func_EC66(); break;
        case 0xE3F8:
            func_E3F8(); break;
        case 0xF1E3:
            func_F1E3(); break;
        case 0xF1E4:
            func_F1E4(); break;
        case 0xF1EB:
            func_F1EB(); break;
        case 0xF1EC:
            func_F1EC(); break;
        case 0xF3F1:
            func_F3F1(); break;
        case 0xF3F2:
            func_F3F2(); break;
        case 0xF1F3:
            func_F1F3(); break;
        case 0xF1F4:
            func_F1F4(); break;
        case 0xF23A:
            func_F23A(); break;
        case 0xF23B:
            func_F23B(); break;
        case 0xF257:
            func_F257(); break;
        case 0xF258:
            func_F258(); break;
        case 0xF242:
            func_F242(); break;
        case 0xF243:
            func_F243(); break;
        case 0xF55C:
            func_F55C(); break;
        case 0xF55D:
            func_F55D(); break;
        case 0xEEFF:
            func_EEFF(); break;
        case 0xEE06:
            func_EE06(); break;
        case 0xEE07:
            func_EE07(); break;
        case 0xCEFE:
            func_CEFE(); break;
        case 0xCEFF:
            func_CEFF(); break;
        case 0xD7D1:
            func_D7D1(); break;
        case 0xF200:
            func_F200(); break;
        case 0xF201:
            func_F201(); break;
        case 0xCE06:
            func_CE06(); break;
        case 0xC2EF:
            func_C2EF(); break;
        case 0xF260:
            func_F260(); break;
        case 0xF261:
            func_F261(); break;
        case 0xF26F:
            func_F26F(); break;
        case 0xF285:
            func_F285(); break;
        case 0xF286:
            func_F286(); break;
        case 0xF716:
            func_F716(); break;
        case 0xF2A3:
            func_F2A3(); break;
        case 0xF2A4:
            func_F2A4(); break;
        case 0xF2B3:
            func_F2B3(); break;
        case 0xF2B4:
            func_F2B4(); break;
        case 0xDAF3:
            func_DAF3(); break;
        case 0xF2DA:
            func_F2DA(); break;
        case 0xF2DB:
            func_F2DB(); break;
        case 0xF2EF:
            func_F2EF(); break;
        case 0xF2F0:
            func_F2F0(); break;
        case 0xF306:
            func_F306(); break;
        case 0xF307:
            func_F307(); break;
        case 0xF30A:
            func_F30A(); break;
        case 0xF30B:
            func_F30B(); break;
        case 0xF30E:
            func_F30E(); break;
        case 0xF342:
            func_F342(); break;
        case 0xF343:
            func_F343(); break;
        case 0xF16D:
            func_F16D(); break;
        case 0xF16E:
            func_F16E(); break;
        case 0xF350:
            func_F350(); break;
        case 0xF351:
            func_F351(); break;
        case 0xF361:
            func_F361(); break;
        case 0xF362:
            func_F362(); break;
        case 0xF36D:
            func_F36D(); break;
        case 0xF36E:
            func_F36E(); break;
        case 0xF370:
            func_F370(); break;
        case 0xF371:
            func_F371(); break;
        case 0xEEE5:
            func_EEE5(); break;
        case 0xEEE6:
            func_EEE6(); break;
        case 0xCEE5:
            func_CEE5(); break;
        case 0xCEE6:
            func_CEE6(); break;
        case 0xF380:
            func_F380(); break;
        case 0xF381:
            func_F381(); break;
        case 0xF39C:
            func_F39C(); break;
        case 0xF39D:
            func_F39D(); break;
        case 0xF3B9:
            func_F3B9(); break;
        case 0xF3BA:
            func_F3BA(); break;
        case 0xF70E:
            func_F70E(); break;
        case 0xF70F:
            func_F70F(); break;
        case 0xF3B0:
            func_F3B0(); break;
        case 0xF3B1:
            func_F3B1(); break;
        case 0xEC52:
            func_EC52(); break;
        case 0xD8EC:
            func_D8EC(); break;
        case 0xF3D8:
            func_F3D8(); break;
        case 0xF3D9:
            func_F3D9(); break;
        case 0xE8F4:
            func_E8F4(); break;
        case 0xF3E8:
            func_F3E8(); break;
        case 0xF3E9:
            func_F3E9(); break;
        case 0xF41B:
            func_F41B(); break;
        case 0xF41C:
            func_F41C(); break;
        case 0xF44E:
            func_F44E(); break;
        case 0xF49B:
            func_F49B(); break;
        case 0xF49C:
            func_F49C(); break;
        case 0xF48A:
            func_F48A(); break;
        case 0xF48B:
            func_F48B(); break;
        case 0xF46D:
            func_F46D(); break;
        case 0xF46E:
            func_F46E(); break;
        case 0xFCA2:
            func_FCA2(); break;
        case 0xF4A0:
            func_F4A0(); break;
        case 0xF4A1:
            func_F4A1(); break;
        case 0xEEAD:
            func_EEAD(); break;
        case 0xEEAE:
            func_EEAE(); break;
        case 0xF09A:
            func_F09A(); break;
        case 0xF09B:
            func_F09B(); break;
        case 0xCEF4:
            func_CEF4(); break;
        case 0xE2EE:
            func_E2EE(); break;
        case 0xF4B4:
            func_F4B4(); break;
        case 0xF4B5:
            func_F4B5(); break;
        case 0xC9EC:
            func_C9EC(); break;
        case 0xF4C9:
            func_F4C9(); break;
        case 0xF4CA:
            func_F4CA(); break;
        case 0xDAE6:
            func_DAE6(); break;
        case 0xF4DA:
            func_F4DA(); break;
        case 0xF4DB:
            func_F4DB(); break;
        case 0xF4EE:
            func_F4EE(); break;
        case 0xF4EF:
            func_F4EF(); break;
        case 0xF4EB:
            func_F4EB(); break;
        case 0xF4EC:
            func_F4EC(); break;
        case 0xF509:
            func_F509(); break;
        case 0xF50A:
            func_F50A(); break;
        case 0xF519:
            func_F519(); break;
        case 0xF51A:
            func_F51A(); break;
        case 0xF530:
            func_F530(); break;
        case 0xF531:
            func_F531(); break;
        case 0xF542:
            func_F542(); break;
        case 0xF543:
            func_F543(); break;
        case 0xF54F:
            func_F54F(); break;
        case 0xF550:
            func_F550(); break;
        case 0xF59D:
            func_F59D(); break;
        case 0xF59E:
            func_F59E(); break;
        case 0xF62C:
            func_F62C(); break;
        case 0xF62D:
            func_F62D(); break;
        case 0xF659:
            func_F659(); break;
        case 0xF65A:
            func_F65A(); break;
        case 0xF6AF:
            func_F6AF(); break;
        case 0xD8F7:
            func_D8F7(); break;
        case 0xF6D8:
            func_F6D8(); break;
        case 0xF6D9:
            func_F6D9(); break;
        case 0xF6EA:
            func_F6EA(); break;
        case 0xF6EB:
            func_F6EB(); break;
        case 0xFBF7:
            func_FBF7(); break;
        case 0xF6FB:
            func_F6FB(); break;
        case 0xF6FC:
            func_F6FC(); break;
        case 0xF5C7:
            func_F5C7(); break;
        case 0xF5C8:
            func_F5C8(); break;
        case 0xF4ED:
            func_F4ED(); break;
        case 0xF5F4:
            func_F5F4(); break;
        case 0xF5F5:
            func_F5F5(); break;
        case 0xF5BF:
            func_F5BF(); break;
        case 0xF5C0:
            func_F5C0(); break;
        case 0xF601:
            func_F601(); break;
        case 0xF5F0:
            func_F5F0(); break;
        case 0xF5F1:
            func_F5F1(); break;
        case 0xCA4C:
            func_CA4C(); break;
        case 0xF624:
            func_F624(); break;
        case 0xF625:
            func_F625(); break;
        case 0xF8A0:
            func_F8A0(); break;
        case 0xF8A1:
            func_F8A1(); break;
        case 0xF647:
            func_F647(); break;
        case 0xD165:
            func_D165(); break;
        case 0xF9C9:
            func_F9C9(); break;
        case 0xF9CA:
            func_F9CA(); break;
        case 0xCD04:
            func_CD04(); break;
        case 0xF6A7:
            func_F6A7(); break;
        case 0xF6E7:
            func_F6E7(); break;
        case 0xE277:
            func_E277(); break;
        case 0xE278:
            func_E278(); break;
        case 0xC080:
            func_C080(); break;
        case 0xC081:
            func_C081(); break;
        case 0xF756:
            func_F756(); break;
        case 0xF757:
            func_F757(); break;
        case 0xF765:
            func_F765(); break;
        case 0xF766:
            func_F766(); break;
        case 0xF794:
            func_F794(); break;
        case 0xF795:
            func_F795(); break;
        case 0xE1F7:
            func_E1F7(); break;
        case 0xE1F8:
            func_E1F8(); break;
        case 0xF7E1:
            func_F7E1(); break;
        case 0xF7E2:
            func_F7E2(); break;
        case 0xF7A9:
            func_F7A9(); break;
        case 0xF7AA:
            func_F7AA(); break;
        case 0xF7B5:
            func_F7B5(); break;
        case 0xF7B6:
            func_F7B6(); break;
        case 0xC1F8:
            func_C1F8(); break;
        case 0xF7C1:
            func_F7C1(); break;
        case 0xF7C2:
            func_F7C2(); break;
        case 0xD2F7:
            func_D2F7(); break;
        case 0xD2F8:
            func_D2F8(); break;
        case 0xF7D2:
            func_F7D2(); break;
        case 0xF7D3:
            func_F7D3(); break;
        case 0xDEF7:
            func_DEF7(); break;
        case 0xF7DE:
            func_F7DE(); break;
        case 0xF7DF:
            func_F7DF(); break;
        case 0xEFE5:
            func_EFE5(); break;
        case 0xEFE6:
            func_EFE6(); break;
        case 0xF7F0:
            func_F7F0(); break;
        case 0xDF10:
            func_DF10(); break;
        case 0xC0DF:
            func_C0DF(); break;
        case 0xFD00:
            func_FD00(); break;
        case 0xC000:
            func_C000(); break;
        case 0xC001:
            func_C001(); break;
        case 0xF400:
            func_F400(); break;
        case 0xF401:
            func_F401(); break;
        case 0xFFF4:
            func_FFF4(); break;
        case 0xFFF5:
            func_FFF5(); break;
        case 0xF4BB:
            func_F4BB(); break;
        case 0xF4BC:
            func_F4BC(); break;
        case 0xD42D:
            func_D42D(); break;
        case 0xFF00:
            func_FF00(); break;
        case 0xF7FC:
            func_F7FC(); break;
        case 0xF7FD:
            func_F7FD(); break;
        case 0xFFF7:
            func_FFF7(); break;
        case 0xFFF8:
            func_FFF8(); break;
        case 0xFFF0:
            func_FFF0(); break;
        case 0xFFF1:
            func_FFF1(); break;
        case 0xFE37:
            func_FE37(); break;
        case 0xE100:
            func_E100(); break;
        case 0xFAE0:
            func_FAE0(); break;
        case 0xFAE1:
            func_FAE1(); break;
        case 0xFAFA:
            func_FAFA(); break;
        case 0xC2AF:
            func_C2AF(); break;
        case 0xFE22:
            func_FE22(); break;
        case 0xC033:
            func_C033(); break;
        case 0xDDFF:
            func_DDFF(); break;
        case 0xFFDD:
            func_FFDD(); break;
        case 0xE038:
            func_E038(); break;
        case 0xFFE1:
            func_FFE1(); break;
        case 0xCF30:
            func_CF30(); break;
        case 0xCF31:
            func_CF31(); break;
        case 0xFFCF:
            func_FFCF(); break;
        case 0xFFD0:
            func_FFD0(); break;
        case 0xEFFF:
            func_EFFF(); break;
        case 0xCBEF:
            func_CBEF(); break;
        case 0xFD7E:
            func_FD7E(); break;
        case 0xF3F0:
            func_F3F0(); break;
        case 0xE000:
            func_E000(); break;
        case 0xE001:
            func_E001(); break;
        case 0xFC30:
            func_FC30(); break;
        case 0xCF20:
            func_CF20(); break;
        case 0xFB0D:
            func_FB0D(); break;
        case 0xF3C0:
            func_F3C0(); break;
        case 0xF3C1:
            func_F3C1(); break;
        case 0xFFFB:
            func_FFFB(); break;
        case 0xFFFC:
            func_FFFC(); break;
        case 0xF83F:
            func_F83F(); break;
        case 0xC03F:
            func_C03F(); break;
        case 0xC040:
            func_C040(); break;
        case 0xD3FF:
            func_D3FF(); break;
        case 0xC003:
            func_C003(); break;
        case 0xC004:
            func_C004(); break;
        case 0xFFC7:
            func_FFC7(); break;
        case 0xC073:
            func_C073(); break;
        case 0xC074:
            func_C074(); break;
        case 0xDFC1:
            func_DFC1(); break;
        case 0xC3E0:
            func_C3E0(); break;
        case 0xC06F:
            func_C06F(); break;
        case 0xC070:
            func_C070(); break;
        case 0xC74C:
            func_C74C(); break;
        case 0xE00B:
            func_E00B(); break;
        case 0xF1E0:
            func_F1E0(); break;
        case 0xF1E1:
            func_F1E1(); break;
        case 0xFC33:
            func_FC33(); break;
        case 0xF3FC:
            func_F3FC(); break;
        case 0xCCF3:
            func_CCF3(); break;
        case 0xF0CC:
            func_F0CC(); break;
        case 0xF0CD:
            func_F0CD(); break;
        case 0xF037:
            func_F037(); break;
        case 0xFC71:
            func_FC71(); break;
        case 0xDFB5:
            func_DFB5(); break;
        case 0xFCDF:
            func_FCDF(); break;
        case 0xF3E3:
            func_F3E3(); break;
        case 0xC1B4:
            func_C1B4(); break;
        case 0xF0C2:
            func_F0C2(); break;
        case 0xC383:
            func_C383(); break;
        case 0xC142:
            func_C142(); break;
        case 0xC143:
            func_C143(); break;
        case 0xCC00:
            func_CC00(); break;
        case 0xC309:
            func_C309(); break;
        case 0xC036:
            func_C036(); break;
        case 0xC037:
            func_C037(); break;
        case 0xF034:
            func_F034(); break;
        case 0xC3F1:
            func_C3F1(); break;
        case 0xFC0E:
            func_FC0E(); break;
        case 0xC2FD:
            func_C2FD(); break;
        case 0xC7C2:
            func_C7C2(); break;
        case 0xC00F:
            func_C00F(); break;
        case 0xF20B:
            func_F20B(); break;
        case 0xF20C:
            func_F20C(); break;
        case 0xC0F2:
            func_C0F2(); break;
        case 0xEF33:
            func_EF33(); break;
        case 0xEF34:
            func_EF34(); break;
        case 0xF327:
            func_F327(); break;
        case 0xF328:
            func_F328(); break;
        case 0xFC83:
            func_FC83(); break;
        case 0xC637:
            func_C637(); break;
        case 0xE38B:
            func_E38B(); break;
        case 0xCD23:
            func_CD23(); break;
        case 0xC330:
            func_C330(); break;
        case 0xCF0D:
            func_CF0D(); break;
        case 0xC13D:
            func_C13D(); break;
        case 0xE08B:
            func_E08B(); break;
        case 0xE0E0:
            func_E0E0(); break;
        case 0xEB03:
            func_EB03(); break;
        case 0xEB04:
            func_EB04(); break;
        case 0xC27D:
            func_C27D(); break;
        case 0xF38D:
            func_F38D(); break;
        case 0xC323:
            func_C323(); break;
        case 0xD0BD:
            func_D0BD(); break;
        case 0xCA33:
            func_CA33(); break;
        case 0xD534:
            func_D534(); break;
        case 0xF4D5:
            func_F4D5(); break;
        case 0xDE6B:
            func_DE6B(); break;
        case 0xDE6C:
            func_DE6C(); break;
        case 0xC0FD:
            func_C0FD(); break;
        case 0xF40F:
            func_F40F(); break;
        case 0xF410:
            func_F410(); break;
        case 0xFC2F:
            func_FC2F(); break;
        case 0xC1FF:
            func_C1FF(); break;
        case 0xFD01:
            func_FD01(); break;
        case 0xFFB7:
            func_FFB7(); break;
        case 0xFFB8:
            func_FFB8(); break;
        case 0xF74F:
            func_F74F(); break;
        case 0xF0FC:
            func_F0FC(); break;
        case 0xEF40:
            func_EF40(); break;
        case 0xEF41:
            func_EF41(); break;
        case 0xC008:
            func_C008(); break;
        case 0xD780:
            func_D780(); break;
        case 0xD781:
            func_D781(); break;
        case 0xCF01:
            func_CF01(); break;
        case 0xC01F:
            func_C01F(); break;
        case 0xC020:
            func_C020(); break;
        case 0xC0BF:
            func_C0BF(); break;
        case 0xC0C0:
            func_C0C0(); break;
        case 0xEDC7:
            func_EDC7(); break;
        case 0xC07F:
            func_C07F(); break;
        case 0xE74F:
            func_E74F(); break;
        case 0xF829:
            func_F829(); break;
        case 0xF82A:
            func_F82A(); break;
        case 0xC0F4:
            func_C0F4(); break;
        case 0xF529:
            func_F529(); break;
        case 0xCF15:
            func_CF15(); break;
        case 0xFC80:
            func_FC80(); break;
        case 0xC01C:
            func_C01C(); break;
        case 0xC01D:
            func_C01D(); break;
        case 0xD0BF:
            func_D0BF(); break;
        case 0xF0F0:
            func_F0F0(); break;
        case 0xF0F1:
            func_F0F1(); break;
        case 0xDF20:
            func_DF20(); break;
        case 0xF3FF:
            func_F3FF(); break;
        case 0xFFC4:
            func_FFC4(); break;
        case 0xF04D:
            func_F04D(); break;
        case 0xC082:
            func_C082(); break;
        case 0xC083:
            func_C083(); break;
        case 0xFC10:
            func_FC10(); break;
        case 0xC3FF:
            func_C3FF(); break;
        case 0xF4F0:
            func_F4F0(); break;
        case 0xF40B:
            func_F40B(); break;
        case 0xF40C:
            func_F40C(); break;
        case 0xF3F5:
            func_F3F5(); break;
        case 0xC3C0:
            func_C3C0(); break;
        case 0xC3C1:
            func_C3C1(); break;
        case 0xD0C3:
            func_D0C3(); break;
        case 0xD342:
            func_D342(); break;
        case 0xFFD3:
            func_FFD3(); break;
        case 0xCF7D:
            func_CF7D(); break;
        case 0xE03E:
            func_E03E(); break;
        case 0xE03F:
            func_E03F(); break;
        case 0xC0E1:
            func_C0E1(); break;
        case 0xF403:
            func_F403(); break;
        case 0xF404:
            func_F404(); break;
        case 0xF430:
            func_F430(); break;
        case 0xC3F4:
            func_C3F4(); break;
        case 0xC347:
            func_C347(); break;
        case 0xC348:
            func_C348(); break;
        case 0xFE7F:
            func_FE7F(); break;
        case 0xFE0F:
            func_FE0F(); break;
        case 0xFE10:
            func_FE10(); break;
        case 0xDF44:
            func_DF44(); break;
        case 0xE301:
            func_E301(); break;
        case 0xF434:
            func_F434(); break;
        case 0xF435:
            func_F435(); break;
        case 0xFE24:
            func_FE24(); break;
        case 0xFE25:
            func_FE25(); break;
        case 0xE80F:
            func_E80F(); break;
        case 0xF603:
            func_F603(); break;
        case 0xD834:
            func_D834(); break;
        case 0xF48C:
            func_F48C(); break;
        case 0xF0B0:
            func_F0B0(); break;
        case 0xF0B1:
            func_F0B1(); break;
        case 0xFC3E:
            func_FC3E(); break;
        case 0xF436:
            func_F436(); break;
        case 0xF437:
            func_F437(); break;
        case 0xDAE1:
            func_DAE1(); break;
        case 0xF9B6:
            func_F9B6(); break;
        case 0xF9B7:
            func_F9B7(); break;
        case 0xC2BF:
            func_C2BF(); break;
        case 0xF42D:
            func_F42D(); break;
        case 0xF42E:
            func_F42E(); break;
        case 0xD401:
            func_D401(); break;
        case 0xD8AF:
            func_D8AF(); break;
        case 0xFE2D:
            func_FE2D(); break;
        case 0xFE2E:
            func_FE2E(); break;
        case 0xDA9F:
            func_DA9F(); break;
        case 0xDD0E:
            func_DD0E(); break;
        case 0xD56A:
            func_D56A(); break;
        case 0xD56B:
            func_D56B(); break;
        case 0xF694:
            func_F694(); break;
        case 0xF695:
            func_F695(); break;
        case 0xF628:
            func_F628(); break;
        case 0xF629:
            func_F629(); break;
        case 0xC0F6:
            func_C0F6(); break;
        case 0xE128:
            func_E128(); break;
        case 0xDD97:
            func_DD97(); break;
        case 0xF68B:
            func_F68B(); break;
        case 0xF68C:
            func_F68C(); break;
        case 0xC894:
            func_C894(); break;
        case 0xF605:
            func_F605(); break;
        case 0xF606:
            func_F606(); break;
        case 0xC2AC:
            func_C2AC(); break;
        case 0xC92D:
            func_C92D(); break;
        case 0xDB50:
            func_DB50(); break;
        case 0xF22F:
            func_F22F(); break;
        case 0xF230:
            func_F230(); break;
        case 0xEAB6:
            func_EAB6(); break;
        case 0xEAB7:
            func_EAB7(); break;
        case 0xF29B:
            func_F29B(); break;
        case 0xD887:
            func_D887(); break;
        case 0xD5A2:
            func_D5A2(); break;
        case 0xF022:
            func_F022(); break;
        case 0xEFE7:
            func_EFE7(); break;
        case 0xFC43:
            func_FC43(); break;
        case 0xFDD0:
            func_FDD0(); break;
        case 0xEC20:
            func_EC20(); break;
        case 0xEC21:
            func_EC21(); break;
        case 0xFC94:
            func_FC94(); break;
        case 0xC880:
            func_C880(); break;
        case 0xC820:
            func_C820(); break;
        case 0xCAC9:
            func_CAC9(); break;
        case 0xF0F6:
            func_F0F6(); break;
        case 0xF0F7:
            func_F0F7(); break;
        case 0xD1F1:
            func_D1F1(); break;
        case 0xC002:
            func_C002(); break;
        case 0xF411:
            func_F411(); break;
        case 0xCA12:
            func_CA12(); break;
        case 0xC5F1:
            func_C5F1(); break;
        case 0xFC9F:
            func_FC9F(); break;
        case 0xEF4D:
            func_EF4D(); break;
        case 0xFDF0:
            func_FDF0(); break;
        case 0xFCAA:
            func_FCAA(); break;
        case 0xCAFA:
            func_CAFA(); break;
        case 0xC0A0:
            func_C0A0(); break;
        case 0xC0A1:
            func_C0A1(); break;
        case 0xCA21:
            func_CA21(); break;
        case 0xE629:
            func_E629(); break;
        case 0xD486:
            func_D486(); break;
        case 0xD4A6:
            func_D4A6(); break;
        case 0xC024:
            func_C024(); break;
        case 0xC224:
            func_C224(); break;
        case 0xC623:
            func_C623(); break;
        case 0xC724:
            func_C724(); break;
        case 0xC023:
            func_C023(); break;
        case 0xC127:
            func_C127(); break;
        case 0xC227:
            func_C227(); break;
        case 0xC427:
            func_C427(); break;
        case 0xC627:
            func_C627(); break;
        case 0xC728:
            func_C728(); break;
        case 0xFB10:
            func_FB10(); break;
        case 0xCAFC:
            func_CAFC(); break;
        case 0xCA10:
            func_CA10(); break;
        case 0xFBD0:
            func_FBD0(); break;
        case 0xFBD1:
            func_FBD1(); break;
        case 0xE6FB:
            func_E6FB(); break;
        case 0xCA02:
            func_CA02(); break;
        case 0xE665:
            func_E665(); break;
        case 0xE6AB:
            func_E6AB(); break;
        case 0xE467:
            func_E467(); break;
        case 0xE4C7:
            func_E4C7(); break;
        case 0xA060:
            switch (_bank) {
                case 7: func_E060(); break;
                case 0: func_A060_b0(); break;
                case 2: func_A060_b2(); break;
                case 3: func_A060_b3(); break;
                case 4: func_A060_b4(); break;
                case 5: func_A060_b5(); break;
                case 6: func_A060_b6(); break;
                case 1: func_A060_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xF8D6:
            func_F8D6(); break;
        case 0xF8B2:
            func_F8B2(); break;
        case 0xF90D:
            func_F90D(); break;
        case 0xC460:
            func_C460(); break;
        case 0xFB9B:
            func_FB9B(); break;
        case 0xE5A1:
            func_E5A1(); break;
        case 0xF03E:
            func_F03E(); break;
        case 0xF027:
            func_F027(); break;
        case 0xFA9F:
            func_FA9F(); break;
        case 0xF533:
            func_F533(); break;
        case 0xF54D:
            func_F54D(); break;
        case 0xC08F:
            func_C08F(); break;
        case 0xCFB7:
            func_CFB7(); break;
        case 0xC546:
            func_C546(); break;
        case 0xC556:
            func_C556(); break;
        case 0xEFE4:
            func_EFE4(); break;
        case 0xEFFE:
            func_EFFE(); break;
        case 0xF5C5:
            func_F5C5(); break;
        case 0xF041:
            func_F041(); break;
        case 0xC8FB:
            func_C8FB(); break;
        case 0xF47F:
            func_F47F(); break;
        case 0xA905:
            switch (_bank) {
                case 7: func_E905(); break;
                case 0: func_A905_b0(); break;
                case 1: func_A905_b1(); break;
                case 2: func_A905_b2(); break;
                case 3: func_A905_b3(); break;
                case 4: func_A905_b4(); break;
                case 5: func_A905_b5(); break;
                case 6: func_A905_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE674:
            func_E674(); break;
        case 0xCFD4:
            func_CFD4(); break;
        case 0xC78B:
            func_C78B(); break;
        case 0xF08D:
            func_F08D(); break;
        case 0xF929:
            func_F929(); break;
        case 0xF09D:
            func_F09D(); break;
        case 0xF0E5:
            func_F0E5(); break;
        case 0xF013:
            func_F013(); break;
        case 0xA9F7:
            switch (_bank) {
                case 1: func_A9F7_b1(); break;
                case 2: func_A9F7_b2(); break;
                case 3: func_A9F7_b3(); break;
                case 4: func_A9F7_b4(); break;
                case 5: func_A9F7_b5(); break;
                case 6: func_A9F7_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xD804:
            func_D804(); break;
        case 0xF076:
            func_F076(); break;
        case 0xDA20:
            func_DA20(); break;
        case 0xC1D9:
            func_C1D9(); break;
        case 0xF65C:
            func_F65C(); break;
        case 0xF942:
            func_F942(); break;
        case 0xF92F:
            func_F92F(); break;
        case 0xDC5D:
            func_DC5D(); break;
        case 0xDFF2:
            func_DFF2(); break;
        case 0xEA19:
            func_EA19(); break;
        case 0xEA0A:
            func_EA0A(); break;
        case 0xF0B4:
            func_F0B4(); break;
        case 0xE37D:
            func_E37D(); break;
        case 0xEBC7:
            func_EBC7(); break;
        case 0xEBE1:
            func_EBE1(); break;
        case 0xE690:
            func_E690(); break;
        case 0xF76B:
            func_F76B(); break;
        case 0x86E8:
            func_86E8_b7(); break;
        case 0xEC99:
            func_EC99(); break;
        case 0xF79F:
            func_F79F(); break;
        case 0xFAED:
            func_FAED(); break;
        case 0xF6DD:
            func_F6DD(); break;
        case 0xF8D3:
            func_F8D3(); break;
        case 0xF8E2:
            func_F8E2(); break;
        case 0xED11:
            func_ED11(); break;
        case 0xED4E:
            func_ED4E(); break;
        case 0xED6F:
            func_ED6F(); break;
        case 0xF590:
            func_F590(); break;
        case 0xEF56:
            func_EF56(); break;
        case 0xEF49:
            func_EF49(); break;
        case 0xEF63:
            func_EF63(); break;
        case 0xEFA6:
            func_EFA6(); break;
        case 0xF159:
            func_F159(); break;
        case 0xF24D:
            func_F24D(); break;
        case 0x8D20:
            switch (_bank) {
                case 7: func_CD20(); break;
                case 0: func_8D20_b0(); break;
                case 2: func_8D20_b2(); break;
                case 4: func_8D20_b4(); break;
                case 5: func_8D20_b5(); break;
                case 6: func_8D20_b6(); break;
                case 1: func_8D20_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEE78:
            func_EE78(); break;
        case 0xF5B9:
            func_F5B9(); break;
        case 0xF5FB:
            func_F5FB(); break;
        case 0xD10C:
            func_D10C(); break;
        case 0xF6EC:
            func_F6EC(); break;
        case 0xF706:
            func_F706(); break;
        case 0xF74E:
            func_F74E(); break;
        case 0xF75A:
            func_F75A(); break;
        case 0xF777:
            func_F777(); break;
        case 0x814C:
            switch (_bank) {
                case 7: func_C14C(); break;
                case 0: func_814C_b0(); break;
                case 1: func_814C_b1(); break;
                case 2: func_814C_b2(); break;
                case 4: func_814C_b4(); break;
                case 5: func_814C_b5(); break;
                case 6: func_814C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xF363:
            func_F363(); break;
        case 0xC057:
            func_C057(); break;
        case 0xDFAD:
            func_DFAD(); break;
        case 0xDFA4:
            func_DFA4(); break;
        case 0xF1C7:
            func_F1C7(); break;
        case 0xEEFE:
            func_EEFE(); break;
        case 0xB9C8:
            switch (_bank) {
                case 0: func_B9C8_b0(); break;
                case 1: func_B9C8_b1(); break;
                case 2: func_B9C8_b2(); break;
                case 3: func_B9C8_b3(); break;
                case 4: func_B9C8_b4(); break;
                case 6: func_B9C8_b6(); break;
                case 5: func_B9C8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE2A8:
            func_E2A8(); break;
        case 0xF20E:
            func_F20E(); break;
        case 0xFB08:
            func_FB08(); break;
        case 0xFB0F:
            func_FB0F(); break;
        case 0xFBB8:
            func_FBB8(); break;
        case 0xC989:
            func_C989(); break;
        case 0xC535:
            func_C535(); break;
        case 0xEF86:
            func_EF86(); break;
        case 0xA0B9:
            switch (_bank) {
                case 4: func_A0B9_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xFD23:
            func_FD23(); break;
        case 0x82FC:
            switch (_bank) {
                case 4: func_82FC_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9815:
            switch (_bank) {
                case 4: func_9815_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x982D:
            switch (_bank) {
                case 4: func_982D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9A5:
            switch (_bank) {
                case 5: func_A9A5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9BF:
            switch (_bank) {
                case 5: func_A9BF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9DB:
            switch (_bank) {
                case 5: func_A9DB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9F3:
            switch (_bank) {
                case 5: func_A9F3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xF71A:
            func_F71A(); break;
        case 0xED3A:
            func_ED3A(); break;
        case 0x8714:
            switch (_bank) {
                case 1: func_8714_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA714:
            switch (_bank) {
                case 1: func_A714_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x86CF:
            switch (_bank) {
                case 1: func_86CF_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA6CF:
            switch (_bank) {
                case 1: func_A6CF_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8875:
            switch (_bank) {
                case 1: func_8875_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA875:
            switch (_bank) {
                case 1: func_A875_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x861C:
            switch (_bank) {
                case 1: func_861C_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA61C:
            switch (_bank) {
                case 1: func_A61C_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85D1:
            switch (_bank) {
                case 1: func_85D1_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5D1:
            switch (_bank) {
                case 1: func_A5D1_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x86C8:
            switch (_bank) {
                case 1: func_86C8_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA6C8:
            switch (_bank) {
                case 1: func_A6C8_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85E8:
            switch (_bank) {
                case 1: func_85E8_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5E8:
            switch (_bank) {
                case 1: func_A5E8_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA53C:
            switch (_bank) {
                case 2: func_A53C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA54A:
            switch (_bank) {
                case 2: func_A54A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC063:
            func_C063(); break;
        case 0xC0A8:
            func_C0A8(); break;
        case 0xC084:
            func_C084(); break;
        case 0xC012:
            func_C012(); break;
        case 0xAE56:
            switch (_bank) {
                case 2: func_AE56_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC06C:
            func_C06C(); break;
        case 0xBFAE:
            switch (_bank) {
                case 2: func_BFAE_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC07B:
            func_C07B(); break;
        case 0xC069:
            func_C069(); break;
        case 0xB5A5:
            switch (_bank) {
                case 2: func_B5A5_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC048:
            func_C048(); break;
        case 0xC072:
            func_C072(); break;
        case 0xC066:
            func_C066(); break;
        case 0xAFB0:
            switch (_bank) {
                case 2: func_AFB0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC093:
            func_C093(); break;
        case 0xC01B:
            func_C01B(); break;
        case 0xC01E:
            func_C01E(); break;
        case 0xB5D3:
            switch (_bank) {
                case 2: func_B5D3_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEDD:
            switch (_bank) {
                case 2: func_AEDD_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC051:
            func_C051(); break;
        case 0xB59B:
            switch (_bank) {
                case 2: func_B59B_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB036:
            switch (_bank) {
                case 2: func_B036_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC09F:
            func_C09F(); break;
        case 0xB393:
            switch (_bank) {
                case 2: func_B393_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF29:
            switch (_bank) {
                case 2: func_AF29_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC039:
            func_C039(); break;
        case 0xB23F:
            switch (_bank) {
                case 2: func_B23F_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA03:
            switch (_bank) {
                case 2: func_BA03_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xCAB3:
            func_CAB3(); break;
        case 0xC0A5:
            func_C0A5(); break;
        case 0xB44A:
            switch (_bank) {
                case 2: func_B44A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB5C6:
            switch (_bank) {
                case 2: func_B5C6_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC0AB:
            func_C0AB(); break;
        case 0xB4D1:
            switch (_bank) {
                case 2: func_B4D1_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB5A0:
            switch (_bank) {
                case 2: func_B5A0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB120:
            switch (_bank) {
                case 2: func_B120_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB661:
            switch (_bank) {
                case 2: func_B661_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB66D:
            switch (_bank) {
                case 2: func_B66D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3CB:
            switch (_bank) {
                case 2: func_B3CB_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8CFC:
            switch (_bank) {
                case 0: func_8CFC_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8585:
            switch (_bank) {
                case 0: func_8585_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8013:
            switch (_bank) {
                case 4: func_8013_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9930:
            switch (_bank) {
                case 4: func_9930_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A0E:
            switch (_bank) {
                case 1: func_9A0E_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA0E:
            switch (_bank) {
                case 1: func_BA0E_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C69:
            switch (_bank) {
                case 1: func_9C69_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC69:
            switch (_bank) {
                case 1: func_BC69_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCAB:
            switch (_bank) {
                case 1: func_BCAB_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC71:
            switch (_bank) {
                case 1: func_BC71_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCBB:
            switch (_bank) {
                case 1: func_BCBB_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9373:
            switch (_bank) {
                case 1: func_9373_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB373:
            switch (_bank) {
                case 1: func_B373_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9259:
            switch (_bank) {
                case 1: func_9259_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB259:
            switch (_bank) {
                case 1: func_B259_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x91CC:
            switch (_bank) {
                case 1: func_91CC_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1CC:
            switch (_bank) {
                case 1: func_B1CC_b1(); break;
                case 2: func_B1CC_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2A5:
            switch (_bank) {
                case 1: func_B2A5_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB204:
            switch (_bank) {
                case 1: func_B204_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB20C:
            switch (_bank) {
                case 1: func_B20C_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC00C:
            func_C00C(); break;
        case 0xB96B:
            switch (_bank) {
                case 6: func_B96B_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8566:
            switch (_bank) {
                case 1: func_8566_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA566:
            switch (_bank) {
                case 1: func_A566_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85F7:
            switch (_bank) {
                case 1: func_85F7_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9293:
            switch (_bank) {
                case 1: func_9293_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5F7:
            switch (_bank) {
                case 1: func_A5F7_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x817F:
            switch (_bank) {
                case 1: func_817F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8690:
            switch (_bank) {
                case 1: func_8690_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x848F:
            switch (_bank) {
                case 1: func_848F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x843C:
            switch (_bank) {
                case 1: func_843C_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8458:
            switch (_bank) {
                case 1: func_8458_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x83EA:
            switch (_bank) {
                case 1: func_83EA_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x83FA:
            switch (_bank) {
                case 1: func_83FA_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8410:
            switch (_bank) {
                case 1: func_8410_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8450:
            switch (_bank) {
                case 1: func_8450_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85E1:
            switch (_bank) {
                case 1: func_85E1_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8502:
            switch (_bank) {
                case 7: func_C502(); break;
                case 1: func_8502_b1(); break;
                case 2: func_8502_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x856C:
            switch (_bank) {
                case 1: func_856C_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8C05:
            switch (_bank) {
                case 1: func_8C05_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8576:
            switch (_bank) {
                case 1: func_8576_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9020:
            switch (_bank) {
                case 1: func_9020_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8265:
            switch (_bank) {
                case 1: func_8265_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA17F:
            switch (_bank) {
                case 1: func_A17F_b1(); break;
                case 2: func_A17F_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC1BF:
            func_C1BF(); break;
        case 0x86FF:
            switch (_bank) {
                case 1: func_86FF_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8612:
            switch (_bank) {
                case 1: func_8612_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x857A:
            switch (_bank) {
                case 1: func_857A_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9BEF:
            switch (_bank) {
                case 1: func_9BEF_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8644:
            switch (_bank) {
                case 1: func_8644_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA644:
            switch (_bank) {
                case 1: func_A644_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x868F:
            switch (_bank) {
                case 1: func_868F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA68F:
            switch (_bank) {
                case 1: func_A68F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x880D:
            switch (_bank) {
                case 1: func_880D_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA80D:
            switch (_bank) {
                case 1: func_A80D_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8248:
            switch (_bank) {
                case 1: func_8248_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA248:
            switch (_bank) {
                case 1: func_A248_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x81F7:
            switch (_bank) {
                case 1: func_81F7_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA1F7:
            switch (_bank) {
                case 1: func_A1F7_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8291:
            switch (_bank) {
                case 1: func_8291_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA291:
            switch (_bank) {
                case 1: func_A291_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x83EB:
            switch (_bank) {
                case 1: func_83EB_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3EB:
            switch (_bank) {
                case 1: func_A3EB_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8353:
            switch (_bank) {
                case 1: func_8353_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA353:
            switch (_bank) {
                case 1: func_A353_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8264:
            switch (_bank) {
                case 1: func_8264_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA264:
            switch (_bank) {
                case 1: func_A264_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x82FF:
            switch (_bank) {
                case 1: func_82FF_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2FF:
            switch (_bank) {
                case 1: func_A2FF_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x82FB:
            switch (_bank) {
                case 1: func_82FB_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2FB:
            switch (_bank) {
                case 1: func_A2FB_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8774:
            switch (_bank) {
                case 1: func_8774_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA774:
            switch (_bank) {
                case 1: func_A774_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA6B8:
            switch (_bank) {
                case 1: func_A6B8_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x839A:
            switch (_bank) {
                case 1: func_839A_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA39A:
            switch (_bank) {
                case 1: func_A39A_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x84DC:
            switch (_bank) {
                case 1: func_84DC_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4DC:
            switch (_bank) {
                case 1: func_A4DC_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x84E0:
            switch (_bank) {
                case 1: func_84E0_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4E0:
            switch (_bank) {
                case 1: func_A4E0_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8412:
            switch (_bank) {
                case 1: func_8412_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA412:
            switch (_bank) {
                case 1: func_A412_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8819:
            switch (_bank) {
                case 1: func_8819_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA819:
            switch (_bank) {
                case 1: func_A819_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x886F:
            switch (_bank) {
                case 1: func_886F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA86F:
            switch (_bank) {
                case 1: func_A86F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x881E:
            switch (_bank) {
                case 1: func_881E_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA81E:
            switch (_bank) {
                case 1: func_A81E_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB43E:
            switch (_bank) {
                case 1: func_B43E_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9232:
            switch (_bank) {
                case 1: func_9232_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB232:
            switch (_bank) {
                case 1: func_B232_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x93D4:
            switch (_bank) {
                case 1: func_93D4_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3D4:
            switch (_bank) {
                case 1: func_B3D4_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3E6:
            switch (_bank) {
                case 1: func_B3E6_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x97CE:
            switch (_bank) {
                case 1: func_97CE_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x997F:
            switch (_bank) {
                case 1: func_997F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB97F:
            switch (_bank) {
                case 1: func_B97F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB996:
            switch (_bank) {
                case 1: func_B996_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB970:
            switch (_bank) {
                case 5: func_B970_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x86AC:
            switch (_bank) {
                case 1: func_86AC_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9BC7:
            switch (_bank) {
                case 1: func_9BC7_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9BD1:
            switch (_bank) {
                case 1: func_9BD1_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85DA:
            switch (_bank) {
                case 1: func_85DA_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8193:
            switch (_bank) {
                case 1: func_8193_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x818E:
            switch (_bank) {
                case 1: func_818E_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x84A5:
            switch (_bank) {
                case 1: func_84A5_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x93E6:
            switch (_bank) {
                case 1: func_93E6_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x83FF:
            switch (_bank) {
                case 1: func_83FF_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B71:
            switch (_bank) {
                case 1: func_9B71_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xF487:
            func_F487(); break;
        case 0xE410:
            func_E410(); break;
        case 0xEBE4:
            func_EBE4(); break;
        case 0xEBEB:
            func_EBEB(); break;
        case 0xE7EB:
            func_E7EB(); break;
        case 0xE8EB:
            func_E8EB(); break;
        case 0xEBE6:
            func_EBE6(); break;
        case 0xD484:
            func_D484(); break;
        case 0xC485:
            func_C485(); break;
        case 0xEC85:
            func_EC85(); break;
        case 0xC08B:
            func_C08B(); break;
        case 0xC2C2:
            func_C2C2(); break;
        case 0xC9C2:
            func_C9C2(); break;
        case 0xC7AC:
            func_C7AC(); break;
        case 0xEC8E:
            func_EC8E(); break;
        case 0xD98F:
            func_D98F(); break;
        case 0xF190:
            func_F190(); break;
        case 0xE191:
            func_E191(); break;
        case 0xF71D:
            func_F71D(); break;
        case 0xD3AB:
            func_D3AB(); break;
        case 0xC4C7:
            func_C4C7(); break;
        case 0xC4CB:
            func_C4CB(); break;
        case 0xC4C9:
            func_C4C9(); break;
        case 0xC3CB:
            func_C3CB(); break;
        case 0xD5BB:
            func_D5BB(); break;
        case 0xC101:
            func_C101(); break;
        case 0xC201:
            func_C201(); break;
        case 0xD59C:
            func_D59C(); break;
        case 0xD501:
            func_D501(); break;
        case 0xD390:
            func_D390(); break;
        case 0xD3B2:
            func_D3B2(); break;
        case 0xDAD9:
            func_DAD9(); break;
        case 0xDBDA:
            func_DBDA(); break;
        case 0xFB98:
            func_FB98(); break;
        case 0xEB99:
            func_EB99(); break;
        case 0xD6B4:
            func_D6B4(); break;
        case 0xD6B5:
            func_D6B5(); break;
        case 0xCAD9:
            func_CAD9(); break;
        case 0xC2CA:
            func_C2CA(); break;
        case 0xE7BD:
            func_E7BD(); break;
        case 0xE7E7:
            func_E7E7(); break;
        case 0xD8BF:
            func_D8BF(); break;
        case 0xC0E9:
            func_C0E9(); break;
        case 0xC1BD:
            func_C1BD(); break;
        case 0xE9C1:
            func_E9C1(); break;
        case 0xCA8E:
            func_CA8E(); break;
        case 0xE5CA:
            func_E5CA(); break;
        case 0xF2BF:
            func_F2BF(); break;
        case 0xF2E8:
            func_F2E8(); break;
        case 0xCCD1:
            func_CCD1(); break;
        case 0xCFC8:
            func_CFC8(); break;
        case 0xC8CD:
            func_C8CD(); break;
        case 0xD0CD:
            func_D0CD(); break;
        case 0xCD71:
            func_CD71(); break;
        case 0xCE72:
            func_CE72(); break;
        case 0xC19C:
            func_C19C(); break;
        case 0xE1AF:
            func_E1AF(); break;
        case 0xF39E:
            func_F39E(); break;
        case 0xDF9F:
            func_DF9F(); break;
        case 0xF7A0:
            func_F7A0(); break;
        case 0xD63B:
            func_D63B(); break;
        case 0xD63C:
            func_D63C(); break;
        case 0xE34B:
            func_E34B(); break;
        case 0xD641:
            func_D641(); break;
        case 0xD63E:
            func_D63E(); break;
        case 0xC746:
            func_C746(); break;
        case 0xF7A3:
            func_F7A3(); break;
        case 0xF56F:
            func_F56F(); break;
        case 0xF5DD:
            func_F5DD(); break;
        case 0xF570:
            func_F570(); break;
        case 0xD66E:
            func_D66E(); break;
        case 0xF441:
            func_F441(); break;
        case 0xC5A5:
            func_C5A5(); break;
        case 0xEDA5:
            func_EDA5(); break;
        case 0xCB61:
            func_CB61(); break;
        case 0xDAB3:
            func_DAB3(); break;
        case 0xE5E4:
            func_E5E4(); break;
        case 0xF1F0:
            func_F1F0(); break;
        case 0xE3E2:
            func_E3E2(); break;
        case 0xF2E7:
            func_F2E7(); break;
        case 0xD6D3:
            func_D6D3(); break;
        case 0xCF4A:
            func_CF4A(); break;
        case 0xD8B9:
            func_D8B9(); break;
        case 0xDCD9:
            func_DCD9(); break;
        case 0xFC17:
            func_FC17(); break;
        case 0xF5B2:
            func_F5B2(); break;
        case 0xC064:
            func_C064(); break;
        case 0xC5AE:
            func_C5AE(); break;
        case 0xF2AE:
            func_F2AE(); break;
        case 0xEEAF:
            func_EEAF(); break;
        case 0xF7AF:
            func_F7AF(); break;
        case 0xC1D2:
            func_C1D2(); break;
        case 0xEEC1:
            func_EEC1(); break;
        case 0xE6B3:
            func_E6B3(); break;
        case 0xD516:
            func_D516(); break;
        case 0xC10C:
            func_C10C(); break;
        case 0xC3B5:
            func_C3B5(); break;
        case 0xD5B5:
            func_D5B5(); break;
        case 0xE7B5:
            func_E7B5(); break;
        case 0xF0B5:
            func_F0B5(); break;
        case 0xCEB6:
            func_CEB6(); break;
        case 0xF2B6:
            func_F2B6(); break;
        case 0xFBB6:
            func_FBB6(); break;
        case 0xC108:
            func_C108(); break;
        case 0xF4B7:
            func_F4B7(); break;
        case 0xD8B8:
            func_D8B8(); break;
        case 0xEAB8:
            func_EAB8(); break;
        case 0xF3B8:
            func_F3B8(); break;
        case 0xFCB8:
            func_FCB8(); break;
        case 0xD5B9:
            func_D5B9(); break;
        case 0xDEB9:
            func_DEB9(); break;
        case 0xF0B9:
            func_F0B9(); break;
        case 0xF0F4:
            func_F0F4(); break;
        case 0xC8BA:
            func_C8BA(); break;
        case 0xEBD0:
            func_EBD0(); break;
        case 0xD58D:
            func_D58D(); break;
        case 0xEB6C:
            func_EB6C(); break;
        case 0xD7DF:
            func_D7DF(); break;
        case 0xD8D7:
            func_D8D7(); break;
        case 0xD2D3:
            func_D2D3(); break;
        case 0xD6D5:
            func_D6D5(); break;
        case 0xE5E2:
            func_E5E2(); break;
        case 0xE9E7:
            func_E9E7(); break;
        case 0xD214:
            func_D214(); break;
        case 0xECEC:
            func_ECEC(); break;
        case 0xCBC0:
            func_CBC0(); break;
        case 0xD7E4:
            func_D7E4(); break;
        case 0xD3D8:
            func_D3D8(); break;
        case 0xDFDD:
            func_DFDD(); break;
        case 0xE900:
            func_E900(); break;
        case 0xCBE9:
            func_CBE9(); break;
        case 0xC2FE:
            func_C2FE(); break;
        case 0xF5F3:
            func_F5F3(); break;
        case 0xF0F3:
            func_F0F3(); break;
        case 0xECF4:
            func_ECF4(); break;
        case 0xEDEC:
            func_EDEC(); break;
        case 0xEBEA:
            func_EBEA(); break;
        case 0xF7F6:
            func_F7F6(); break;
        case 0xCBC9:
            func_CBC9(); break;
        case 0xCF28:
            func_CF28(); break;
        case 0xDCE2:
            func_DCE2(); break;
        case 0xDAC8:
            func_DAC8(); break;
        case 0xDCE1:
            func_DCE1(); break;
        case 0xC10B:
            func_C10B(); break;
        case 0xCA27:
            func_CA27(); break;
        case 0xC6C6:
            func_C6C6(); break;
        case 0xC301:
            func_C301(); break;
        case 0xC401:
            func_C401(); break;
        case 0xC5C3:
            func_C5C3(); break;
        case 0xC502:
            func_C502(); break;
        case 0xC9CB:
            func_C9CB(); break;
        case 0xCBCC:
            func_CBCC(); break;
        case 0xCBCF:
            func_CBCF(); break;
        case 0xD5CE:
            func_D5CE(); break;
        case 0xD5D5:
            func_D5D5(); break;
        case 0xCBD5:
            func_CBD5(); break;
        case 0xD6C9:
            func_D6C9(); break;
        case 0xD3D6:
            func_D3D6(); break;
        case 0xDFD4:
            func_DFD4(); break;
        case 0xE3DF:
            func_E3DF(); break;
        case 0xDBDD:
            func_DBDD(); break;
        case 0xDDDE:
            func_DDDE(); break;
        case 0xDBDE:
            func_DBDE(); break;
        case 0xDFDB:
            func_DFDB(); break;
        case 0xD9DA:
            func_D9DA(); break;
        case 0xC2C9:
            func_C2C9(); break;
        case 0xCAB8:
            func_CAB8(); break;
        case 0xC0B7:
            func_C0B7(); break;
        case 0xC8B6:
            func_C8B6(); break;
        case 0xC80F:
            func_C80F(); break;
        case 0xC8BD:
            func_C8BD(); break;
        case 0xFDBC:
            func_FDBC(); break;
        case 0xFB66:
            func_FB66(); break;
        case 0xE5BE:
            func_E5BE(); break;
        case 0xC8C1:
            func_C8C1(); break;
        case 0xC8B8:
            func_C8B8(); break;
        case 0xCE00:
            func_CE00(); break;
        case 0xF0EF:
            func_F0EF(); break;
        case 0xF1ED:
            func_F1ED(); break;
        case 0xF2F3:
            func_F2F3(); break;
        case 0xEBF9:
            func_EBF9(); break;
        case 0xEC76:
            func_EC76(); break;
        case 0xF7F7:
            func_F7F7(); break;
        case 0xF7F8:
            func_F7F8(); break;
        case 0xF6FA:
            func_F6FA(); break;
        case 0xF5F6:
            func_F5F6(); break;
        case 0xF6F5:
            func_F6F5(); break;
        case 0xF6F4:
            func_F6F4(); break;
        case 0xF55F:
            func_F55F(); break;
        case 0xF5EA:
            func_F5EA(); break;
        case 0xF5A5:
            func_F5A5(); break;
        case 0xF55A:
            func_F55A(); break;
        case 0xF577:
            func_F577(); break;
        case 0xFF9B:
            func_FF9B(); break;
        case 0xEAAB:
            func_EAAB(); break;
        case 0xEAAE:
            func_EAAE(); break;
        case 0xFD55:
            func_FD55(); break;
        case 0xF5AA:
            func_F5AA(); break;
        case 0xDF77:
            func_DF77(); break;
        case 0xDD77:
            func_DD77(); break;
        case 0xF7DD:
            func_F7DD(); break;
        case 0xF5D5:
            func_F5D5(); break;
        case 0xDD75:
            func_DD75(); break;
        case 0xEABF:
            func_EABF(); break;
        case 0xDD00:
            func_DD00(); break;
        case 0xC0D8:
            func_C0D8(); break;
        case 0xECCF:
            func_ECCF(); break;
        case 0xEDED:
            func_EDED(); break;
        case 0xEDFC:
            func_EDFC(); break;
        case 0xECFC:
            func_ECFC(); break;
        case 0xEEFC:
            func_EEFC(); break;
        case 0xFAEF:
            func_FAEF(); break;
        case 0xD9FB:
            func_D9FB(); break;
        case 0xD9FD:
            func_D9FD(); break;
        case 0xFDDB:
            func_FDDB(); break;
        case 0xDADE:
            func_DADE(); break;
        case 0xDFF7:
            func_DFF7(); break;
        case 0xDFDF:
            func_DFDF(); break;
        case 0xFDDF:
            func_FDDF(); break;
        case 0xF6FD:
            func_F6FD(); break;
        case 0xFD0B:
            func_FD0B(); break;
        case 0xFD26:
            func_FD26(); break;
        case 0xFD28:
            func_FD28(); break;
        case 0xFD3B:
            func_FD3B(); break;
        case 0xFD34:
            func_FD34(); break;
        case 0xFD2E:
            func_FD2E(); break;
        case 0xFD71:
            func_FD71(); break;
        case 0xFC32:
            func_FC32(); break;
        case 0xFD4F:
            func_FD4F(); break;
        case 0xFE15:
            func_FE15(); break;
        case 0xFE19:
            func_FE19(); break;
        case 0xFE1A:
            func_FE1A(); break;
        case 0xD18B:
            func_D18B(); break;
        case 0xD8A5:
            func_D8A5(); break;
        case 0xFCBC:
            func_FCBC(); break;
        case 0xC016:
            func_C016(); break;
        case 0xEE19:
            func_EE19(); break;
        case 0xFCFD:
            func_FCFD(); break;
        case 0xFCC6:
            func_FCC6(); break;
        case 0xC5FC:
            func_C5FC(); break;
        case 0xC8AD:
            func_C8AD(); break;
        case 0xE0AB:
            func_E0AB(); break;
        case 0xFD04:
            func_FD04(); break;
        case 0xFC20:
            func_FC20(); break;
        case 0xFD47:
            func_FD47(); break;
        case 0xFD80:
            func_FD80(); break;
        case 0xFD82:
            func_FD82(); break;
        case 0xFCA7:
            func_FCA7(); break;
        case 0xEBFC:
            func_EBFC(); break;
        case 0xFDEB:
            func_FDEB(); break;
        case 0xFC16:
            func_FC16(); break;
        case 0xFC73:
            func_FC73(); break;
        case 0xFC91:
            func_FC91(); break;
        case 0xFC92:
            func_FC92(); break;
        case 0xFC97:
            func_FC97(); break;
        case 0xF5B0:
            func_F5B0(); break;
        case 0xFD07:
            func_FD07(); break;
        case 0xFD48:
            func_FD48(); break;
        case 0xFD4A:
            func_FD4A(); break;
        case 0xFC48:
            func_FC48(); break;
        case 0xFD66:
            func_FD66(); break;
        case 0xFD68:
            func_FD68(); break;
        case 0xFD6E:
            func_FD6E(); break;
        case 0xFD70:
            func_FD70(); break;
        case 0xDCDC:
            func_DCDC(); break;
        case 0xEE5A:
            func_EE5A(); break;
        case 0xF64E:
            func_F64E(); break;
        case 0xFE52:
            func_FE52(); break;
        case 0xECBC:
            func_ECBC(); break;
        case 0xF088:
            func_F088(); break;
        case 0xEDA9:
            func_EDA9(); break;
        case 0xCA99:
            func_CA99(); break;
        case 0xC009:
            func_C009(); break;
        case 0xC222:
            func_C222(); break;
        case 0xDD0A:
            func_DD0A(); break;
        case 0xE1F0:
            func_E1F0(); break;
        case 0xD2F0:
            func_D2F0(); break;
        case 0xECB9:
            func_ECB9(); break;
        case 0xE710:
            func_E710(); break;
        case 0xF086:
            func_F086(); break;
        case 0xF08A:
            func_F08A(); break;
        case 0xF049:
            func_F049(); break;
        case 0xE84C:
            func_E84C(); break;
        case 0xE007:
            func_E007(); break;
        case 0xCCA9:
            func_CCA9(); break;
        case 0xE4BD:
            func_E4BD(); break;
        case 0xDAF0:
            func_DAF0(); break;
        case 0xF6A9:
            func_F6A9(); break;
        case 0xF0E8:
            func_F0E8(); break;
        case 0xE011:
            func_E011(); break;
        case 0xE240:
            func_E240(); break;
        case 0xCA6A:
            func_CA6A(); break;
        case 0xCB2D:
            func_CB2D(); break;
        case 0xE52E:
            func_E52E(); break;
        case 0xCF4E:
            func_CF4E(); break;
        case 0xED13:
            func_ED13(); break;
        case 0xF204:
            func_F204(); break;
        case 0xEF25:
            func_EF25(); break;
        case 0xE908:
            func_E908(); break;
        case 0xDD48:
            func_DD48(); break;
        case 0xDF4D:
            func_DF4D(); break;
        case 0xF62A:
            func_F62A(); break;
        case 0xD261:
            func_D261(); break;
        case 0xD305:
            func_D305(); break;
        case 0xC825:
            func_C825(); break;
        case 0xC845:
            func_C845(); break;
        case 0xD746:
            func_D746(); break;
        case 0xDD4A:
            func_DD4A(); break;
        case 0xC569:
            func_C569(); break;
        case 0xEC8B:
            func_EC8B(); break;
        case 0xD590:
            func_D590(); break;
        case 0xFD90:
            func_FD90(); break;
        case 0xC0B4:
            func_C0B4(); break;
        case 0xC4C1:
            func_C4C1(); break;
        case 0xF223:
            func_F223(); break;
        case 0xFEB0:
            func_FEB0(); break;
        case 0xFEB2:
            func_FEB2(); break;
        case 0xFE08:
            func_FE08(); break;
        case 0xFE06:
            func_FE06(); break;
        case 0xEE20:
            func_EE20(); break;
        case 0xFEB8:
            func_FEB8(); break;
        case 0xF7B3:
            func_F7B3(); break;
        case 0xEA22:
            func_EA22(); break;
        case 0xF5C4:
            func_F5C4(); break;
        case 0xD3C4:
            func_D3C4(); break;
        case 0xE421:
            func_E421(); break;
        case 0xFC28:
            func_FC28(); break;
        case 0xCC91:
            func_CC91(); break;
        case 0xCC93:
            func_CC93(); break;
        case 0xEA97:
            func_EA97(); break;
        case 0xEA93:
            func_EA93(); break;
        case 0xCEF7:
            func_CEF7(); break;
        case 0xC9AC:
            func_C9AC(); break;
        case 0xD03E:
            func_D03E(); break;
        case 0xED85:
            func_ED85(); break;
        case 0xEB85:
            func_EB85(); break;
        case 0xEBA5:
            func_EBA5(); break;
        case 0xECA5:
            func_ECA5(); break;
        case 0xECE6:
            func_ECE6(); break;
        case 0xC915:
            func_C915(); break;
        case 0xE4F4:
            func_E4F4(); break;
        case 0xD5ED:
            func_D5ED(); break;
        case 0xE904:
            func_E904(); break;
        case 0xC99A:
            func_C99A(); break;
        case 0xC92B:
            func_C92B(); break;
        case 0xC993:
            func_C993(); break;
        case 0xEE60:
            func_EE60(); break;
        case 0xD6C6:
            func_D6C6(); break;
        case 0xE285:
            func_E285(); break;
        case 0xC5E2:
            func_C5E2(); break;
        case 0xE4A5:
            func_E4A5(); break;
        case 0xC97E:
            func_C97E(); break;
        case 0xC5DE:
            func_C5DE(); break;
        case 0xD985:
            func_D985(); break;
        case 0xDA85:
            func_DA85(); break;
        case 0xDC99:
            func_DC99(); break;
        case 0xEF10:
            func_EF10(); break;
        case 0xEB9E:
            func_EB9E(); break;
        case 0xF69E:
            func_F69E(); break;
        case 0xE19F:
            func_E19F(); break;
        case 0xED9F:
            func_ED9F(); break;
        case 0xF1FE:
            func_F1FE(); break;
        case 0xF70C:
            func_F70C(); break;
        case 0xF507:
            func_F507(); break;
        case 0xF609:
            func_F609(); break;
        case 0xEFFA:
            func_EFFA(); break;
        case 0xF5FE:
            func_F5FE(); break;
        case 0xEC10:
            func_EC10(); break;
        case 0xEE0D:
            func_EE0D(); break;
        case 0xF681:
            func_F681(); break;
        case 0xE682:
            func_E682(); break;
        case 0xDC83:
            func_DC83(); break;
        case 0xF483:
            func_F483(); break;
        case 0xF484:
            func_F484(); break;
        case 0xFC89:
            func_FC89(); break;
        case 0xD88A:
            func_D88A(); break;
        case 0xC4FF:
            func_C4FF(); break;
        case 0xE106:
            func_E106(); break;
        case 0xC22B:
            func_C22B(); break;
        case 0xC61A:
            func_C61A(); break;
        case 0xE10B:
            func_E10B(); break;
        case 0xC5FF:
            func_C5FF(); break;
        case 0xEC22:
            func_EC22(); break;
        case 0xDE8E:
            func_DE8E(); break;
        case 0xF21B:
            func_F21B(); break;
        case 0xC792:
            func_C792(); break;
        case 0xEC92:
            func_EC92(); break;
        case 0xEC93:
            func_EC93(); break;
        case 0xFD94:
            func_FD94(); break;
        case 0xD795:
            func_D795(); break;
        case 0xF895:
            func_F895(); break;
        case 0xEB96:
            func_EB96(); break;
        case 0xC397:
            func_C397(); break;
        case 0xD698:
            func_D698(); break;
        case 0xDD99:
            func_DD99(); break;
        case 0xC39C:
            func_C39C(); break;
        case 0xF49D:
            func_F49D(); break;
        case 0xD4FF:
            func_D4FF(); break;
        case 0xFF98:
            func_FF98(); break;
        case 0xC60F:
            func_C60F(); break;
        case 0xCF07:
            func_CF07(); break;
        case 0xD107:
            func_D107(); break;
        case 0xEC0B:
            func_EC0B(); break;
        case 0xEF0F:
            func_EF0F(); break;
        case 0xF103:
            func_F103(); break;
        case 0xF607:
            func_F607(); break;
        case 0xC362:
            func_C362(); break;
        case 0xC662:
            func_C662(); break;
        case 0xC762:
            func_C762(); break;
        case 0xC106:
            func_C106(); break;
        case 0xC70A:
            func_C70A(); break;
        case 0xD662:
            func_D662(); break;
        case 0xD762:
            func_D762(); break;
        case 0xCE0A:
            func_CE0A(); break;
        case 0xD902:
            func_D902(); break;
        case 0xF6FF:
            func_F6FF(); break;
        case 0xFFCC:
            func_FFCC(); break;
        case 0xD207:
            func_D207(); break;
        case 0xFFD2:
            func_FFD2(); break;
        case 0xCF0E:
            func_CF0E(); break;
        case 0xD60E:
            func_D60E(); break;
        case 0xED36:
            func_ED36(); break;
        case 0xEB3A:
            func_EB3A(); break;
        case 0xE632:
            func_E632(); break;
        case 0xEC36:
            func_EC36(); break;
        case 0xEE3A:
            func_EE3A(); break;
        case 0xE42E:
            func_E42E(); break;
        case 0xF206:
            func_F206(); break;
        case 0xE102:
            func_E102(); break;
        case 0xECFF:
            func_ECFF(); break;
        case 0xFFB1:
            func_FFB1(); break;
        case 0xE10E:
            func_E10E(); break;
        case 0xCC06:
            func_CC06(); break;
        case 0xC702:
            func_C702(); break;
        case 0xE30A:
            func_E30A(); break;
        case 0xE20A:
            func_E20A(); break;
        case 0xD203:
            func_D203(); break;
        case 0xD15B:
            func_D15B(); break;
        case 0xD303:
            func_D303(); break;
        case 0xDF0B:
            func_DF0B(); break;
        case 0xE906:
            func_E906(); break;
        case 0xEB0A:
            func_EB0A(); break;
        case 0xEC06:
            func_EC06(); break;
        case 0xED06:
            func_ED06(); break;
        case 0xEF0A:
            func_EF0A(); break;
        case 0xEBB6:
            func_EBB6(); break;
        case 0xE70E:
            func_E70E(); break;
        case 0xEB02:
            func_EB02(); break;
        case 0xDB0F:
            func_DB0F(); break;
        case 0xCA0C:
            func_CA0C(); break;
        case 0xE40D:
            func_E40D(); break;
        case 0xCD0A:
            func_CD0A(); break;
        case 0xE704:
            func_E704(); break;
        case 0xEB0D:
            func_EB0D(); break;
        case 0xEC08:
            func_EC08(); break;
        case 0xC20E:
            func_C20E(); break;
        case 0xC30F:
            func_C30F(); break;
        case 0xD50B:
            func_D50B(); break;
        case 0xD202:
            func_D202(); break;
        case 0xD906:
            func_D906(); break;
        case 0xDC06:
            func_DC06(); break;
        case 0xFE0A:
            func_FE0A(); break;
        case 0xEC8A:
            func_EC8A(); break;
        case 0xDA02:
            func_DA02(); break;
        case 0xED8A:
            func_ED8A(); break;
        case 0xEF5A:
            func_EF5A(); break;
        case 0xCD5B:
            func_CD5B(); break;
        case 0xE902:
            func_E902(); break;
        case 0xF48E:
            func_F48E(); break;
        case 0xF68A:
            func_F68A(); break;
        case 0xD30A:
            func_D30A(); break;
        case 0xEB0F:
            func_EB0F(); break;
        case 0xF10A:
            func_F10A(); break;
        case 0xF56B:
            func_F56B(); break;
        case 0xD1F6:
            func_D1F6(); break;
        case 0xEC07:
            func_EC07(); break;
        case 0xEF07:
            func_EF07(); break;
        case 0xE55B:
            func_E55B(); break;
        case 0xE406:
            func_E406(); break;
        case 0xEB0B:
            func_EB0B(); break;
        case 0xEE0B:
            func_EE0B(); break;
        case 0xC47B:
            func_C47B(); break;
        case 0xC647:
            func_C647(); break;
        case 0xF10B:
            func_F10B(); break;
        case 0xC25A:
            func_C25A(); break;
        case 0xD85A:
            func_D85A(); break;
        case 0xD20A:
            func_D20A(); break;
        case 0xD90A:
            func_D90A(); break;
        case 0xE706:
            func_E706(); break;
        case 0xED0A:
            func_ED0A(); break;
        case 0xDA5B:
            func_DA5B(); break;
        case 0xE003:
            func_E003(); break;
        case 0xCB5A:
            func_CB5A(); break;
        case 0xF70A:
            func_F70A(); break;
        case 0xF20F:
            func_F20F(); break;
        case 0xFE0B:
            func_FE0B(); break;
        case 0xF50B:
            func_F50B(); break;
        case 0xFE02:
            func_FE02(); break;
        case 0xFFEE:
            func_FFEE(); break;
        case 0xDA0F:
            func_DA0F(); break;
        case 0xEC0A:
            func_EC0A(); break;
        case 0xFA07:
            func_FA07(); break;
        case 0xF69F:
            func_F69F(); break;
        case 0xFB9F:
            func_FB9F(); break;
        case 0xC3A0:
            func_C3A0(); break;
        case 0xC6A0:
            func_C6A0(); break;
        case 0xE1A2:
            func_E1A2(); break;
        case 0xFBA2:
            func_FBA2(); break;
        case 0xC013:
            func_C013(); break;
        case 0xC210:
            func_C210(); break;
        case 0xD904:
            func_D904(); break;
        case 0xCF02:
            func_CF02(); break;
        case 0xCF82:
            func_CF82(); break;
        case 0xC4A3:
            func_C4A3(); break;
        case 0xE8A3:
            func_E8A3(); break;
        case 0xF1A3:
            func_F1A3(); break;
        case 0xC0A4:
            func_C0A4(); break;
        case 0xEDA4:
            func_EDA4(); break;
        case 0xF6A4:
            func_F6A4(); break;
        case 0xF709:
            func_F709(); break;
        case 0xE80C:
            func_E80C(); break;
        case 0xF50C:
            func_F50C(); break;
        case 0xFF99:
            func_FF99(); break;
        case 0xFFB6:
            func_FFB6(); break;
        case 0xF5A6:
            func_F5A6(); break;
        case 0xE7A8:
            func_E7A8(); break;
        case 0xC6A9:
            func_C6A9(); break;
        case 0xE5A9:
            func_E5A9(); break;
        case 0xFF9E:
            func_FF9E(); break;
        case 0xF1AC:
            func_F1AC(); break;
        case 0xF5AE:
            func_F5AE(); break;
        case 0xE1B7:
            func_E1B7(); break;
        case 0xFBB7:
            func_FBB7(); break;
        case 0xCDAE:
            func_CDAE(); break;
        case 0xCAAE:
            func_CAAE(); break;
        case 0xD320:
            func_D320(); break;
        case 0xFEA9:
            func_FEA9(); break;
        case 0xC7C0:
            func_C7C0(); break;
        case 0xCAB0:
            func_CAB0(); break;
        case 0xCCB9:
            func_CCB9(); break;
        case 0xEFB9:
            func_EFB9(); break;
        case 0xE6B1:
            func_E6B1(); break;
        case 0xEEB1:
            func_EEB1(); break;
        case 0xCAB2:
            func_CAB2(); break;
        case 0xC0B6:
            func_C0B6(); break;
        case 0xDBB0:
            func_DBB0(); break;
        case 0xC3B3:
            func_C3B3(); break;
        case 0xDDB4:
            func_DDB4(); break;
        case 0xCFB9:
            func_CFB9(); break;
        case 0xD7B5:
            func_D7B5(); break;
        case 0xF360:
            func_F360(); break;
        case 0xEFC0:
            func_EFC0(); break;
        case 0xC04B:
            func_C04B(); break;
        case 0xC075:
            func_C075(); break;
        case 0xC090:
            func_C090(); break;
        case 0xC027:
            func_C027(); break;
        case 0xF4BA:
            func_F4BA(); break;
        case 0xE9BB:
            func_E9BB(); break;
        case 0xF5BB:
            func_F5BB(); break;
        case 0xC4B9:
            func_C4B9(); break;
        case 0xEC4C:
            func_EC4C(); break;
        case 0xC096:
            func_C096(); break;
        case 0xD014:
            func_D014(); break;
        case 0xC099:
            func_C099(); break;
        case 0xC078:
            func_C078(); break;
        case 0xFBFE:
            func_FBFE(); break;
        case 0xE1EC:
            func_E1EC(); break;
        case 0xCE26:
            func_CE26(); break;
        case 0xE009:
            func_E009(); break;
        case 0xCE23:
            func_CE23(); break;
        case 0xF01E:
            func_F01E(); break;
        case 0xDF69:
            func_DF69(); break;
        case 0xC1D0:
            func_C1D0(); break;
        case 0xF098:
            func_F098(); break;
        case 0xEEBC:
            func_EEBC(); break;
        case 0xED20:
            func_ED20(); break;
        case 0xECD0:
            func_ECD0(); break;
        case 0xF210:
            func_F210(); break;
        case 0xE5BD:
            func_E5BD(); break;
        case 0xCEE8:
            func_CEE8(); break;
        case 0xF5C9:
            func_F5C9(); break;
        case 0xEE21:
            func_EE21(); break;
        case 0xF5E9:
            func_F5E9(); break;
        case 0xD0A8:
            func_D0A8(); break;
        case 0xDDD0:
            func_DDD0(); break;
        case 0xD4D0:
            func_D4D0(); break;
        case 0xEF83:
            func_EF83(); break;
        case 0xEA84:
            func_EA84(); break;
        case 0xE3A3:
            func_E3A3(); break;
        case 0xC591:
            func_C591(); break;
        case 0xDD91:
            func_DD91(); break;
        case 0xED91:
            func_ED91(); break;
        case 0xF191:
            func_F191(); break;
        case 0xCA08:
            func_CA08(); break;
        case 0xC508:
            func_C508(); break;
        case 0xD208:
            func_D208(); break;
        case 0xC0FF:
            func_C0FF(); break;
        case 0xFFD8:
            func_FFD8(); break;
        case 0xFE97:
            func_FE97(); break;
        case 0xF8B1:
            func_F8B1(); break;
        case 0xF1B2:
            func_F1B2(); break;
        case 0xD79A:
            func_D79A(); break;
        case 0xF69A:
            func_F69A(); break;
        case 0xF19B:
            func_F19B(); break;
        case 0xD307:
            func_D307(); break;
        case 0xEB9D:
            func_EB9D(); break;
        case 0xF1A1:
            func_F1A1(); break;
        case 0xDBA6:
            func_DBA6(); break;
        case 0xDCA8:
            func_DCA8(); break;
        case 0xD1AE:
            func_D1AE(); break;
        case 0xDCB6:
            func_DCB6(); break;
        case 0xEDFF:
            func_EDFF(); break;
        case 0xF240:
            func_F240(); break;
        case 0xF147:
            func_F147(); break;
        case 0xF36F:
            func_F36F(); break;
        case 0xE00F:
            func_E00F(); break;
        case 0xFF04:
            func_FF04(); break;
        case 0xE01E:
            func_E01E(); break;
        case 0xC38D:
            func_C38D(); break;
        case 0xF057:
            func_F057(); break;
        case 0xE26A:
            func_E26A(); break;
        case 0xF08B:
            func_F08B(); break;
        case 0xD49A:
            func_D49A(); break;
        case 0xF099:
            func_F099(); break;
        case 0xD5BD:
            func_D5BD(); break;
        case 0xE84A:
            func_E84A(); break;
        case 0xD03B:
            func_D03B(); break;
        case 0xC642:
            func_C642(); break;
        case 0xCCE6:
            func_CCE6(); break;
        case 0xED28:
            func_ED28(); break;
        case 0xEF30:
            func_EF30(); break;
        case 0xF09C:
            func_F09C(); break;
        case 0xEE9C:
            func_EE9C(); break;
        case 0xE3B3:
            func_E3B3(); break;
        case 0xC9B6:
            func_C9B6(); break;
        case 0xE7B7:
            func_E7B7(); break;
        case 0xF1B7:
            func_F1B7(); break;
        case 0xD702:
            func_D702(); break;
        case 0xD713:
            func_D713(); break;
        case 0xD715:
            func_D715(); break;
        case 0xE172:
            func_E172(); break;
        case 0xE38F:
            func_E38F(); break;
        case 0xE4BB:
            func_E4BB(); break;
        case 0xE4B9:
            func_E4B9(); break;
        case 0xE4BF:
            func_E4BF(); break;
        case 0xD7CF:
            func_D7CF(); break;
        case 0xE4D7:
            func_E4D7(); break;
        case 0xD7CB:
            func_D7CB(); break;
        case 0xE8E7:
            func_E8E7(); break;
        case 0xE5EA:
            func_E5EA(); break;
        case 0xF244:
            func_F244(); break;
        case 0xEC3F:
            func_EC3F(); break;
        case 0xE8EE:
            func_E8EE(); break;
        case 0xEBE8:
            func_EBE8(); break;
        case 0xEBEF:
            func_EBEF(); break;
        case 0xF23F:
            func_F23F(); break;
        case 0xE36C:
            func_E36C(); break;
        case 0xF16C:
            func_F16C(); break;
        case 0xF36C:
            func_F36C(); break;
        case 0xF46C:
            func_F46C(); break;
        case 0xF6E2:
            func_F6E2(); break;
        case 0xE2F6:
            func_E2F6(); break;
        case 0xEB6B:
            func_EB6B(); break;
        case 0xECEB:
            func_ECEB(); break;
        case 0xF76C:
            func_F76C(); break;
        case 0xED6C:
            func_ED6C(); break;
        case 0xE2F0:
            func_E2F0(); break;
        case 0xF96C:
            func_F96C(); break;
        case 0xE2FC:
            func_E2FC(); break;
        case 0xDCDB:
            func_DCDB(); break;
        case 0xDD3F:
            func_DD3F(); break;
        case 0xE044:
            func_E044(); break;
        case 0xD8DD:
            func_D8DD(); break;
        case 0xD5D9:
            func_D5D9(); break;
        case 0xDA28:
            func_DA28(); break;
        case 0xC417:
            func_C417(); break;
        case 0xC4C4:
            func_C4C4(); break;
        case 0xC2C4:
            func_C2C4(); break;
        case 0xC03C:
            func_C03C(); break;
        case 0xC01A:
            func_C01A(); break;
        case 0xD228:
            func_D228(); break;
        case 0xCB28:
            func_CB28(); break;
        case 0xE4FC:
            func_E4FC(); break;
        case 0xF2F1:
            func_F2F1(); break;
        case 0xFCF3:
            func_FCF3(); break;
        case 0xC1FC:
            func_C1FC(); break;
        case 0xE8FE:
            func_E8FE(); break;
        case 0xECFE:
            func_ECFE(); break;
        case 0xE3FE:
            func_E3FE(); break;
        case 0xC5E6:
            func_C5E6(); break;
        case 0xF6FE:
            func_F6FE(); break;
        case 0xFCB5:
            func_FCB5(); break;
        case 0xC0A7:
            func_C0A7(); break;
        case 0xFCC1:
            func_FCC1(); break;
        case 0xC9FC:
            func_C9FC(); break;
        case 0xFCC3:
            func_FCC3(); break;
        case 0xFEAF:
            func_FEAF(); break;
        case 0xFD61:
            func_FD61(); break;
        case 0xF2E9:
            func_F2E9(); break;
        case 0xF1EE:
            func_F1EE(); break;
        case 0xEB57:
            func_EB57(); break;
        case 0xF2EB:
            func_F2EB(); break;
        case 0xEAF8:
            func_EAF8(); break;
        case 0xF5F7:
            func_F5F7(); break;
        case 0xF2F5:
            func_F2F5(); break;
        case 0xF1E9:
            func_F1E9(); break;
        case 0xF4B2:
            func_F4B2(); break;
        case 0xE161:
            func_E161(); break;
        case 0xD9D7:
            func_D9D7(); break;
        case 0xDAD6:
            func_DAD6(); break;
        case 0xDC6F:
            func_DC6F(); break;
        case 0xD9DF:
            func_D9DF(); break;
        case 0xFCDB:
            func_FCDB(); break;
        case 0xF3D6:
            func_F3D6(); break;
        case 0xDCFC:
            func_DCFC(); break;
        case 0xF5FC:
            func_F5FC(); break;
        case 0xEF57:
            func_EF57(); break;
        case 0xD8FC:
            func_D8FC(); break;
        case 0xDCB0:
            func_DCB0(); break;
        case 0xDB53:
            func_DB53(); break;
        case 0xFCBD:
            func_FCBD(); break;
        case 0xFC57:
            func_FC57(); break;
        case 0xFD2C:
            func_FD2C(); break;
        case 0xFBB2:
            func_FBB2(); break;
        case 0xE6F9:
            func_E6F9(); break;
        case 0xE657:
            func_E657(); break;
        case 0xFDE5:
            func_FDE5(); break;
        case 0xFC7C:
            func_FC7C(); break;
        case 0xFD4B:
            func_FD4B(); break;
        case 0xFE5D:
            func_FE5D(); break;
        case 0xFC74:
            func_FC74(); break;
        case 0xFD42:
            func_FD42(); break;
        case 0xC74D:
            func_C74D(); break;
        case 0xFD45:
            func_FD45(); break;
        case 0xC72E:
            func_C72E(); break;
        case 0xC6B7:
            func_C6B7(); break;
        case 0xFD3D:
            func_FD3D(); break;
        case 0xC65D:
            func_C65D(); break;
        case 0xE1D7:
            func_E1D7(); break;
        case 0xFCFA:
            func_FCFA(); break;
        case 0xFCCB:
            func_FCCB(); break;
        case 0xDEFC:
            func_DEFC(); break;
        case 0xE8D7:
            func_E8D7(); break;
        case 0xCAFF:
            func_CAFF(); break;
        case 0xFD3E:
            func_FD3E(); break;
        case 0xFD36:
            func_FD36(); break;
        case 0xFD6C:
            func_FD6C(); break;
        case 0xE1CB:
            func_E1CB(); break;
        case 0xD7C2:
            func_D7C2(); break;
        case 0xC9C6:
            func_C9C6(); break;
        case 0xE0C6:
            func_E0C6(); break;
        case 0xC6D2:
            func_C6D2(); break;
        case 0xC6CD:
            func_C6CD(); break;
        case 0xD2E1:
            func_D2E1(); break;
        case 0xC6CF:
            func_C6CF(); break;
        case 0xC6D3:
            func_C6D3(); break;
        case 0xE1CD:
            func_E1CD(); break;
        case 0xDAD3:
            func_DAD3(); break;
        case 0xDAC6:
            func_DAC6(); break;
        case 0xE1D6:
            func_E1D6(); break;
        case 0xC6D5:
            func_C6D5(); break;
        case 0xC6D6:
            func_C6D6(); break;
        case 0xE7F0:
            func_E7F0(); break;
        case 0xFDE7:
            func_FDE7(); break;
        case 0xEAFD:
            func_EAFD(); break;
        case 0xEDEE:
            func_EDEE(); break;
        case 0xFDED:
            func_FDED(); break;
        case 0xFC51:
            func_FC51(); break;
        case 0xF425:
            func_F425(); break;
        case 0xFFD5:
            func_FFD5(); break;
        case 0xEEBB:
            func_EEBB(); break;
        case 0xFEAA:
            func_FEAA(); break;
        case 0xFEBA:
            func_FEBA(); break;
        case 0xD5AA:
            func_D5AA(); break;
        case 0xE8D2:
            func_E8D2(); break;
        case 0xDD81:
            func_DD81(); break;
        case 0xED81:
            func_ED81(); break;
        case 0xF2F2:
            func_F2F2(); break;
        case 0xC21F:
            func_C21F(); break;
        case 0xC7C8:
            func_C7C8(); break;
        case 0xE060:
            func_E060(); break;
        case 0xE067:
            func_E067(); break;
        case 0xCAC5:
            func_CAC5(); break;
        case 0xC6CA:
            func_C6CA(); break;
        case 0xE041:
            func_E041(); break;
        case 0xE224:
            func_E224(); break;
        case 0xEC28:
            func_EC28(); break;
        case 0xDF00:
            func_DF00(); break;
        case 0xD24F:
            func_D24F(); break;
        case 0xDC6B:
            func_DC6B(); break;
        case 0xD34F:
            func_D34F(); break;
        case 0xD44F:
            func_D44F(); break;
        case 0xE56B:
            func_E56B(); break;
        case 0xCA4B:
            func_CA4B(); break;
        case 0xE86B:
            func_E86B(); break;
        case 0xDFCE:
            func_DFCE(); break;
        case 0xD820:
            func_D820(); break;
        case 0xF2F6:
            func_F2F6(); break;
        case 0xE867:
            func_E867(); break;
        case 0xF4D8:
            func_F4D8(); break;
        case 0xEF28:
            func_EF28(); break;
        case 0xCCB6:
            func_CCB6(); break;
        case 0xF6E0:
            func_F6E0(); break;
        case 0xFB8B:
            func_FB8B(); break;
        case 0xD0A4:
            func_D0A4(); break;
        case 0xF1E6:
            func_F1E6(); break;
        case 0xDED1:
            func_DED1(); break;
        case 0xF1DE:
            func_F1DE(); break;
        case 0xFDC6:
            func_FDC6(); break;
        case 0xCFBF:
            func_CFBF(); break;
        case 0xEFEB:
            func_EFEB(); break;
        case 0xE5DD:
            func_E5DD(); break;
        case 0xD6C0:
            func_D6C0(); break;
        case 0xF024:
            func_F024(); break;
        case 0xC311:
            func_C311(); break;
        case 0xC3D1:
            func_C3D1(); break;
        case 0xC256:
            func_C256(); break;
        case 0xC345:
            func_C345(); break;
        case 0xC34D:
            func_C34D(); break;
        case 0xEE02:
            func_EE02(); break;
        case 0xD503:
            func_D503(); break;
        case 0xC351:
            func_C351(); break;
        case 0xCD1F:
            func_CD1F(); break;
        case 0xC5CD:
            func_C5CD(); break;
        case 0xC0FA:
            func_C0FA(); break;
        case 0xC1FB:
            func_C1FB(); break;
        case 0xC3DE:
            func_C3DE(); break;
        case 0xF203:
            func_F203(); break;
        case 0xEDA8:
            func_EDA8(); break;
        case 0xEC03:
            func_EC03(); break;
        case 0xEC02:
            func_EC02(); break;
        case 0xC266:
            func_C266(); break;
        case 0xC367:
            func_C367(); break;
        case 0xC27A:
            func_C27A(); break;
        case 0xC37B:
            func_C37B(); break;
        case 0xC35F:
            func_C35F(); break;
        case 0xC34F:
            func_C34F(); break;
        case 0xEA05:
            func_EA05(); break;
        case 0xC247:
            func_C247(); break;
        case 0xC257:
            func_C257(); break;
        case 0xC259:
            func_C259(); break;
        case 0xC15D:
            func_C15D(); break;
        case 0xC25C:
            func_C25C(); break;
        case 0xC35B:
            func_C35B(); break;
        case 0xC161:
            func_C161(); break;
        case 0xC265:
            func_C265(); break;
        case 0xC364:
            func_C364(); break;
        case 0xC174:
            func_C174(); break;
        case 0xC077:
            func_C077(); break;
        case 0xC279:
            func_C279(); break;
        case 0xC3AB:
            func_C3AB(); break;
        case 0xC3AD:
            func_C3AD(); break;
        case 0xC28A:
            func_C28A(); break;
        case 0xC38B:
            func_C38B(); break;
        case 0xC381:
            func_C381(); break;
        case 0xC589:
            func_C589(); break;
        case 0xC28F:
            func_C28F(); break;
        case 0xC33B:
            func_C33B(); break;
        case 0xC239:
            func_C239(); break;
        case 0xC384:
            func_C384(); break;
        case 0xC251:
            func_C251(); break;
        case 0xC371:
            func_C371(); break;
        case 0xC474:
            func_C474(); break;
        case 0xC156:
            func_C156(); break;
        case 0xC393:
            func_C393(); break;
        case 0xC24E:
            func_C24E(); break;
        case 0xC289:
            func_C289(); break;
        case 0xC38E:
            func_C38E(); break;
        case 0xCB03:
            func_CB03(); break;
        case 0xC56D:
            func_C56D(); break;
        case 0xC567:
            func_C567(); break;
        case 0xC479:
            func_C479(); break;
        case 0xE703:
            func_E703(); break;
        case 0xC29B:
            func_C29B(); break;
        case 0xC39E:
            func_C39E(); break;
        case 0xC0B0:
            func_C0B0(); break;
        case 0xC337:
            func_C337(); break;
        case 0xC34B:
            func_C34B(); break;
        case 0xC35E:
            func_C35E(); break;
        case 0xC25F:
            func_C25F(); break;
        case 0xC09C:
            func_C09C(); break;
        case 0xC2B7:
            func_C2B7(); break;
        case 0xC395:
            func_C395(); break;
        case 0xC3E9:
            func_C3E9(); break;
        case 0xC4C2:
            func_C4C2(); break;
        case 0xECB3:
            func_ECB3(); break;
        case 0xEEB3:
            func_EEB3(); break;
        case 0xC412:
            func_C412(); break;
        case 0xCBBA:
            func_CBBA(); break;
        case 0xEDBA:
            func_EDBA(); break;
        case 0xCEFA:
            func_CEFA(); break;
        case 0xCCFB:
            func_CCFB(); break;
        case 0xC3D8:
            func_C3D8(); break;
        case 0xE104:
            func_E104(); break;
        case 0xE844:
            func_E844(); break;
        case 0xEB44:
            func_EB44(); break;
        case 0xD4E0:
            func_D4E0(); break;
        case 0xD4E2:
            func_D4E2(); break;
        case 0xC235:
            func_C235(); break;
        case 0xC237:
            func_C237(); break;
        case 0xE246:
            func_E246(); break;
        case 0xEB05:
            func_EB05(); break;
        case 0xC2D1:
            func_C2D1(); break;
        case 0xF703:
            func_F703(); break;
        case 0xD504:
            func_D504(); break;
        case 0xC339:
            func_C339(); break;
        case 0xC14B:
            func_C14B(); break;
        case 0xC52D:
            func_C52D(); break;
        case 0xF202:
            func_F202(); break;
        case 0xC2B5:
            func_C2B5(); break;
        case 0xC3BA:
            func_C3BA(); break;
        case 0xC3F8:
            func_C3F8(); break;
        case 0xC2F4:
            func_C2F4(); break;
        case 0xC085:
            func_C085(); break;
        case 0xCC82:
            func_CC82(); break;
        case 0xC0CD:
            func_C0CD(); break;
        case 0xC18F:
            func_C18F(); break;
        case 0xEF03:
            func_EF03(); break;
        case 0xC481:
            func_C481(); break;
        case 0xC781:
            func_C781(); break;
        case 0xF288:
            func_F288(); break;
        case 0xF222:
            func_F222(); break;
        case 0xF2A6:
            func_F2A6(); break;
        case 0xE8F2:
            func_E8F2(); break;
        case 0xF485:
            func_F485(); break;
        case 0xDE80:
            func_DE80(); break;
        case 0xF3E6:
            func_F3E6(); break;
        case 0xF185:
            func_F185(); break;
        case 0xF1A5:
            func_F1A5(); break;
        case 0xC6D0:
            func_C6D0(); break;
        case 0xC5FA:
            func_C5FA(); break;
        case 0xF125:
            func_F125(); break;
        case 0xF4A4:
            func_F4A4(); break;
        case 0xF3A5:
            func_F3A5(); break;
        case 0xF565:
            func_F565(); break;
        case 0xF4A5:
            func_F4A5(); break;
        case 0xF0A5:
            func_F0A5(); break;
        case 0xF025:
            func_F025(); break;
        case 0xF065:
            func_F065(); break;
        case 0xF685:
            func_F685(); break;
        case 0xF66C:
            func_F66C(); break;
        case 0xF5A4:
            func_F5A4(); break;
        case 0xF525:
            func_F525(); break;
        case 0xF666:
            func_F666(); break;
        case 0xF665:
            func_F665(); break;
        case 0xF6A5:
            func_F6A5(); break;
        case 0xF165:
            func_F165(); break;
        case 0xFBA5:
            func_FBA5(); break;
        case 0xD3D0:
            func_D3D0(); break;
        case 0xFD84:
            func_FD84(); break;
        case 0xF5E5:
            func_F5E5(); break;
        case 0xC8F2:
            func_C8F2(); break;
        case 0xF7A5:
            func_F7A5(); break;
        case 0xF2B1:
            func_F2B1(); break;
        case 0xF7A4:
            func_F7A4(); break;
        case 0xF684:
            func_F684(); break;
        case 0xC6F7:
            func_C6F7(); break;
        case 0xF7C6:
            func_F7C6(); break;
        case 0xD0F7:
            func_D0F7(); break;
        case 0xF389:
            func_F389(); break;
        case 0xDB89:
            func_DB89(); break;
        case 0xDD8A:
            func_DD8A(); break;
        case 0xEB8E:
            func_EB8E(); break;
        case 0xE791:
            func_E791(); break;
        case 0xF493:
            func_F493(); break;
        case 0xEC94:
            func_EC94(); break;
        case 0xD495:
            func_D495(); break;
        case 0xEE95:
            func_EE95(); break;
        case 0xED18:
            func_ED18(); break;
        case 0xF229:
            func_F229(); break;
        case 0xF227:
            func_F227(); break;
        case 0xF2A5:
            func_F2A5(); break;
        case 0xED1A:
            func_ED1A(); break;
        case 0xE037:
            func_E037(); break;
        case 0xF2A0:
            func_F2A0(); break;
        case 0xEA27:
            func_EA27(); break;
        case 0xED00:
            func_ED00(); break;
        case 0xEB0E:
            func_EB0E(); break;
        case 0xEC09:
            func_EC09(); break;
        case 0xE910:
            func_E910(); break;
        case 0xF806:
            func_F806(); break;
        case 0xE084:
            func_E084(); break;
        case 0xE086:
            func_E086(); break;
        case 0xE922:
            func_E922(); break;
        case 0xED32:
            func_ED32(); break;
        case 0xE829:
            func_E829(); break;
        case 0xE027:
            func_E027(); break;
        case 0xEBA1:
            func_EBA1(); break;
        case 0xEC27:
            func_EC27(); break;
        case 0xFBE8:
            func_FBE8(); break;
        case 0xEB9A:
            func_EB9A(); break;
        case 0xE927:
            func_E927(); break;
        case 0xEB27:
            func_EB27(); break;
        case 0xEC9C:
            func_EC9C(); break;
        case 0xEC25:
            func_EC25(); break;
        case 0xE827:
            func_E827(); break;
        case 0xF19D:
            func_F19D(); break;
        case 0xF196:
            func_F196(); break;
        case 0xE200:
            func_E200(); break;
        case 0xE934:
            func_E934(); break;
        case 0xED80:
            func_ED80(); break;
        case 0xE30C:
            func_E30C(); break;
        case 0xE504:
            func_E504(); break;
        case 0xE39D:
            func_E39D(); break;
        case 0xDAE9:
            func_DAE9(); break;
        case 0xE90C:
            func_E90C(); break;
        case 0xF429:
            func_F429(); break;
        case 0xF330:
            func_F330(); break;
        case 0xEDA0:
            func_EDA0(); break;
        case 0xEA24:
            func_EA24(); break;
        case 0xED37:
            func_ED37(); break;
        case 0xE201:
            func_E201(); break;
        case 0xE924:
            func_E924(); break;
        case 0xEA0C:
            func_EA0C(); break;
        case 0xE9A2:
            func_E9A2(); break;
        case 0xF104:
            func_F104(); break;
        case 0xEDA3:
            func_EDA3(); break;
        case 0xE134:
            func_E134(); break;
        case 0xE942:
            func_E942(); break;
        case 0xED40:
            func_ED40(); break;
        case 0xEDEA:
            func_EDEA(); break;
        case 0xED29:
            func_ED29(); break;
        case 0xE506:
            func_E506(); break;
        case 0xE2E9:
            func_E2E9(); break;
        case 0xEB07:
            func_EB07(); break;
        case 0xF3EC:
            func_F3EC(); break;
        case 0xF0A4:
            func_F0A4(); break;
        case 0xF24E:
            func_F24E(); break;
        case 0xF237:
            func_F237(); break;
        case 0xE981:
            func_E981(); break;
        case 0xE281:
            func_E281(); break;
        case 0xEC42:
            func_EC42(); break;
        case 0xED49:
            func_ED49(); break;
        case 0xF21F:
            func_F21F(); break;
        case 0xF250:
            func_F250(); break;
        case 0xF249:
            func_F249(); break;
        case 0xF247:
            func_F247(); break;
        case 0xE210:
            func_E210(); break;
        case 0xECA7:
            func_ECA7(); break;
        case 0xF1A7:
            func_F1A7(); break;
        case 0xF3A1:
            func_F3A1(); break;
        case 0xF0A6:
            func_F0A6(); break;
        case 0xD205:
            func_D205(); break;
        case 0xE229:
            func_E229(); break;
        case 0xEA1B:
            func_EA1B(); break;
        case 0xE9AA:
            func_E9AA(); break;
        case 0xCDE9:
            func_CDE9(); break;
        case 0xEBC0:
            func_EBC0(); break;
        case 0xEC32:
            func_EC32(); break;
        case 0xFDE9:
            func_FDE9(); break;
        case 0xF3A0:
            func_F3A0(); break;
        case 0xFFAD:
            func_FFAD(); break;
        case 0xED0C:
            func_ED0C(); break;
        case 0xE96B:
            func_E96B(); break;
        case 0xE7E9:
            func_E7E9(); break;
        case 0xE851:
            func_E851(); break;
        case 0xEA2A:
            func_EA2A(); break;
        case 0xEC29:
            func_EC29(); break;
        case 0xEB24:
            func_EB24(); break;
        case 0xEB29:
            func_EB29(); break;
        case 0xEC24:
            func_EC24(); break;
        case 0xF105:
            func_F105(); break;
        case 0xF7F3:
            func_F7F3(); break;
        case 0xEB09:
            func_EB09(); break;
        case 0xF6E8:
            func_F6E8(); break;
        case 0xE0AF:
            func_E0AF(); break;
        case 0xEC23:
            func_EC23(); break;
        case 0xEC26:
            func_EC26(); break;
        case 0xEB18:
            func_EB18(); break;
        case 0xDBE9:
            func_DBE9(); break;
        case 0xF6E9:
            func_F6E9(); break;
        case 0xF0B2:
            func_F0B2(); break;
        case 0xF0B3:
            func_F0B3(); break;
        case 0xFFB4:
            func_FFB4(); break;
        case 0xEF20:
            func_EF20(); break;
        case 0xEC05:
            func_EC05(); break;
        case 0xEC04:
            func_EC04(); break;
        case 0xE02B:
            func_E02B(); break;
        case 0xEC33:
            func_EC33(); break;
        case 0xE82B:
            func_E82B(); break;
        case 0xE314:
            func_E314(); break;
        case 0xEBA3:
            func_EBA3(); break;
        case 0xE082:
            func_E082(); break;
        case 0xE110:
            func_E110(); break;
        case 0xED04:
            func_ED04(); break;
        case 0xF482:
            func_F482(); break;
        case 0xF097:
            func_F097(); break;
        case 0xF882:
            func_F882(); break;
        case 0xE9B9:
            func_E9B9(); break;
        case 0xEB81:
            func_EB81(); break;
        case 0xEC0C:
            func_EC0C(); break;
        case 0xFFBC:
            func_FFBC(); break;
        case 0xE925:
            func_E925(); break;
        case 0xE822:
            func_E822(); break;
        case 0xE0BB:
            func_E0BB(); break;
        case 0xE983:
            func_E983(); break;
        case 0xEB83:
            func_EB83(); break;
        case 0xEBBC:
            func_EBBC(); break;
        case 0xEC37:
            func_EC37(); break;
        case 0xE089:
            func_E089(); break;
        case 0xE0BC:
            func_E0BC(); break;
        case 0xE342:
            func_E342(); break;
        case 0xF183:
            func_F183(); break;
        case 0xE824:
            func_E824(); break;
        case 0xF3AC:
            func_F3AC(); break;
        case 0xF1AD:
            func_F1AD(); break;
        case 0xEC01:
            func_EC01(); break;
        case 0xE218:
            func_E218(); break;
        case 0xF744:
            func_F744(); break;
        case 0xEC34:
            func_EC34(); break;
        case 0xE92B:
            func_E92B(); break;
        case 0xE837:
            func_E837(); break;
        case 0xE330:
            func_E330(); break;
        case 0xE540:
            func_E540(); break;
        case 0xED14:
            func_ED14(); break;
        case 0xEBA7:
            func_EBA7(); break;
        case 0xFFA8:
            func_FFA8(); break;
        case 0xE580:
            func_E580(); break;
        case 0xF30C:
            func_F30C(); break;
        case 0xED27:
            func_ED27(); break;
        case 0xED83:
            func_ED83(); break;
        case 0xEC63:
            func_EC63(); break;
        case 0xF311:
            func_F311(); break;
        case 0xF432:
            func_F432(); break;
        case 0xEF82:
            func_EF82(); break;
        case 0xF382:
            func_F382(); break;
        case 0xEDF3:
            func_EDF3(); break;
        case 0xF308:
            func_F308(); break;
        case 0xF459:
            func_F459(); break;
        case 0xEC4B:
            func_EC4B(); break;
        case 0xEC48:
            func_EC48(); break;
        case 0xF452:
            func_F452(); break;
        case 0xF280:
            func_F280(); break;
        case 0xE537:
            func_E537(); break;
        case 0xF480:
            func_F480(); break;
        case 0xEC39:
            func_EC39(); break;
        case 0xE340:
            func_E340(); break;
        case 0xEDF4:
            func_EDF4(); break;
        case 0xF323:
            func_F323(); break;
        case 0xE90E:
            func_E90E(); break;
        case 0xEC0E:
            func_EC0E(); break;
        case 0xEC0D:
            func_EC0D(); break;
        case 0xEB40:
            func_EB40(); break;
        case 0xE820:
            func_E820(); break;
        case 0xECAE:
            func_ECAE(); break;
        case 0xE381:
            func_E381(); break;
        case 0xE00D:
            func_E00D(); break;
        case 0xED88:
            func_ED88(); break;
        case 0xE305:
            func_E305(); break;
        case 0xE349:
            func_E349(); break;
        case 0xE339:
            func_E339(); break;
        case 0xEC16:
            func_EC16(); break;
        case 0xEB15:
            func_EB15(); break;
        case 0xE818:
            func_E818(); break;
        case 0xE0B1:
            func_E0B1(); break;
        case 0xF44B:
            func_F44B(); break;
        case 0xEFEC:
            func_EFEC(); break;
        case 0xE483:
            func_E483(); break;
        case 0xE03A:
            func_E03A(); break;
        case 0xE279:
            func_E279(); break;
        case 0xED26:
            func_ED26(); break;
        case 0xF375:
            func_F375(); break;
        case 0xF376:
            func_F376(); break;
        case 0xF377:
            func_F377(); break;
        case 0xF42B:
            func_F42B(); break;
        case 0xED76:
            func_ED76(); break;
        case 0xED31:
            func_ED31(); break;
        case 0xF423:
            func_F423(); break;
        case 0xF324:
            func_F324(); break;
        case 0xF426:
            func_F426(); break;
        case 0xED23:
            func_ED23(); break;
        case 0xE374:
            func_E374(); break;
        case 0xE0C0:
            func_E0C0(); break;
        case 0xED78:
            func_ED78(); break;
        case 0xED08:
            func_ED08(); break;
        case 0xECB6:
            func_ECB6(); break;
        case 0xEC38:
            func_EC38(); break;
        case 0xF197:
            func_F197(); break;
        case 0xF1A9:
            func_F1A9(); break;
        case 0xECB7:
            func_ECB7(); break;
        case 0xE27B:
            func_E27B(); break;
        case 0xE17A:
            func_E17A(); break;
        case 0xEC3B:
            func_EC3B(); break;
        case 0xEB21:
            func_EB21(); break;
        case 0xF309:
            func_F309(); break;
        case 0xFFBD:
            func_FFBD(); break;
        case 0xE97C:
            func_E97C(); break;
        case 0xE098:
            func_E098(); break;
        case 0xE9BD:
            func_E9BD(); break;
        case 0xE928:
            func_E928(); break;
        case 0xE9FF:
            func_E9FF(); break;
        case 0xEABD:
            func_EABD(); break;
        case 0xF187:
            func_F187(); break;
        case 0xEBBF:
            func_EBBF(); break;
        case 0xE404:
            func_E404(); break;
        case 0xEC13:
            func_EC13(); break;
        case 0xE138:
            func_E138(); break;
        case 0xD647:
            func_D647(); break;
        case 0xD3CA:
            func_D3CA(); break;
        case 0xDF8A:
            func_DF8A(); break;
        case 0x88A9:
            switch (_bank) {
                case 0: func_88A9_b0(); break;
                case 1: func_88A9_b1(); break;
                case 2: func_88A9_b2(); break;
                case 4: func_88A9_b4(); break;
                case 5: func_88A9_b5(); break;
                case 6: func_88A9_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xFD17:
            func_FD17(); break;
        case 0xEA79:
            func_EA79(); break;
        case 0xEC3E:
            func_EC3E(); break;
        case 0xF88F:
            func_F88F(); break;
        case 0xDD7B:
            func_DD7B(); break;
        case 0xD8AD:
            func_D8AD(); break;
        case 0xE8B1:
            func_E8B1(); break;
        case 0xE963:
            func_E963(); break;
        case 0xE895:
            func_E895(); break;
        case 0xF6C9:
            func_F6C9(); break;
        case 0xFCC5:
            func_FCC5(); break;
        case 0xE4F2:
            func_E4F2(); break;
        case 0xE9CF:
            func_E9CF(); break;
        case 0xC285:
            func_C285(); break;
        case 0xF3CC:
            func_F3CC(); break;
        case 0xF297:
            func_F297(); break;
        case 0xE7FB:
            func_E7FB(); break;
        case 0xF129:
            func_F129(); break;
        case 0xF143:
            func_F143(); break;
        case 0xE8B3:
            func_E8B3(); break;
        case 0xF325:
            func_F325(); break;
        case 0xE0D6:
            func_E0D6(); break;
        case 0xF044:
            func_F044(); break;
        case 0xF151:
            func_F151(); break;
        case 0xE7C1:
            func_E7C1(); break;
        case 0xE324:
            func_E324(); break;
        case 0xE7C3:
            func_E7C3(); break;
        case 0xF431:
            func_F431(); break;
        case 0xE3AB:
            func_E3AB(); break;
        case 0x8870:
            switch (_bank) {
                case 1: func_8870_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x886C:
            switch (_bank) {
                case 6: func_886C_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB75:
            switch (_bank) {
                case 0: func_BB75_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8018:
            switch (_bank) {
                case 0: func_8018_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x83E0:
            switch (_bank) {
                case 0: func_83E0_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8754:
            switch (_bank) {
                case 0: func_8754_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8A7C:
            switch (_bank) {
                case 0: func_8A7C_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8AA4:
            switch (_bank) {
                case 0: func_8AA4_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8ACC:
            switch (_bank) {
                case 0: func_8ACC_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B20:
            switch (_bank) {
                case 0: func_8B20_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B48:
            switch (_bank) {
                case 0: func_8B48_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B70:
            switch (_bank) {
                case 0: func_8B70_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B98:
            switch (_bank) {
                case 0: func_8B98_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8BC0:
            switch (_bank) {
                case 0: func_8BC0_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8BE8:
            switch (_bank) {
                case 0: func_8BE8_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8C10:
            switch (_bank) {
                case 0: func_8C10_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D50:
            switch (_bank) {
                case 0: func_8D50_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D78:
            switch (_bank) {
                case 0: func_8D78_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8DA0:
            switch (_bank) {
                case 0: func_8DA0_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8DC8:
            switch (_bank) {
                case 0: func_8DC8_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8DF0:
            switch (_bank) {
                case 0: func_8DF0_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8E18:
            switch (_bank) {
                case 0: func_8E18_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9833:
            switch (_bank) {
                case 0: func_9833_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x985B:
            switch (_bank) {
                case 0: func_985B_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9883:
            switch (_bank) {
                case 0: func_9883_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98AB:
            switch (_bank) {
                case 0: func_98AB_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98D3:
            switch (_bank) {
                case 0: func_98D3_b0(); break;
                case 1: func_98D3_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98FB:
            switch (_bank) {
                case 0: func_98FB_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9923:
            switch (_bank) {
                case 0: func_9923_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBABD:
            switch (_bank) {
                case 0: func_BABD_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBABA:
            switch (_bank) {
                case 0: func_BABA_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBBA:
            switch (_bank) {
                case 0: func_BBBA_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E03:
            switch (_bank) {
                case 0: func_9E03_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E2B:
            switch (_bank) {
                case 0: func_9E2B_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E53:
            switch (_bank) {
                case 0: func_9E53_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E7B:
            switch (_bank) {
                case 0: func_9E7B_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0F7:
            switch (_bank) {
                case 0: func_A0F7_b0(); break;
                case 3: func_A0F7_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA11F:
            switch (_bank) {
                case 0: func_A11F_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA147:
            switch (_bank) {
                case 0: func_A147_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA16F:
            switch (_bank) {
                case 0: func_A16F_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3A7:
            switch (_bank) {
                case 0: func_A3A7_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3CF:
            switch (_bank) {
                case 0: func_A3CF_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3F7:
            switch (_bank) {
                case 0: func_A3F7_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8385:
            switch (_bank) {
                case 0: func_8385_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5C5:
            switch (_bank) {
                case 0: func_A5C5_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5ED:
            switch (_bank) {
                case 0: func_A5ED_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA615:
            switch (_bank) {
                case 0: func_A615_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA63D:
            switch (_bank) {
                case 0: func_A63D_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9B8:
            switch (_bank) {
                case 0: func_B9B8_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9B9:
            switch (_bank) {
                case 0: func_B9B9_b0(); break;
                case 1: func_B9B9_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA901:
            switch (_bank) {
                case 7: func_E901(); break;
                case 0: func_A901_b0(); break;
                case 1: func_A901_b1(); break;
                case 2: func_A901_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8504:
            switch (_bank) {
                case 7: func_C504(); break;
                case 0: func_8504_b0(); break;
                case 1: func_8504_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA606:
            switch (_bank) {
                case 7: func_E606(); break;
                case 0: func_A606_b0(); break;
                case 1: func_A606_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB105:
            switch (_bank) {
                case 0: func_B105_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D0B:
            switch (_bank) {
                case 0: func_8D0B_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8CC8:
            switch (_bank) {
                case 0: func_8CC8_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D29:
            switch (_bank) {
                case 0: func_8D29_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA58F:
            switch (_bank) {
                case 1: func_A58F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A99:
            switch (_bank) {
                case 1: func_9A99_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9490:
            switch (_bank) {
                case 1: func_9490_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9F9F:
            switch (_bank) {
                case 1: func_9F9F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9691:
            switch (_bank) {
                case 1: func_9691_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBFC0:
            switch (_bank) {
                case 1: func_BFC0_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBF00:
            switch (_bank) {
                case 1: func_BF00_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDBC:
            switch (_bank) {
                case 1: func_BDBC_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBEBD:
            switch (_bank) {
                case 1: func_BEBD_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4A3:
            switch (_bank) {
                case 1: func_A4A3_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD9C:
            switch (_bank) {
                case 1: func_AD9C_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3B3:
            switch (_bank) {
                case 1: func_B3B3_b1(); break;
                case 5: func_B3B3_b5(); break;
                case 2: func_B3B3_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4B5:
            switch (_bank) {
                case 1: func_B4B5_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB5B3:
            switch (_bank) {
                case 1: func_B5B3_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDBD:
            switch (_bank) {
                case 1: func_BDBD_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBFBD:
            switch (_bank) {
                case 1: func_BFBD_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0B0:
            switch (_bank) {
                case 1: func_A0B0_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2B0:
            switch (_bank) {
                case 1: func_A2B0_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA29D:
            switch (_bank) {
                case 1: func_A29D_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA080:
            switch (_bank) {
                case 1: func_A080_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFAF:
            switch (_bank) {
                case 1: func_AFAF_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5A6:
            switch (_bank) {
                case 1: func_A5A6_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x80AE:
            switch (_bank) {
                case 1: func_80AE_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x80B0:
            switch (_bank) {
                case 1: func_80B0_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA203:
            switch (_bank) {
                case 1: func_A203_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA006:
            switch (_bank) {
                case 7: func_E006(); break;
                case 1: func_A006_b1(); break;
                case 3: func_A006_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA034:
            switch (_bank) {
                case 1: func_A034_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8C20:
            switch (_bank) {
                case 1: func_8C20_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA28C:
            switch (_bank) {
                case 1: func_A28C_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB800:
            switch (_bank) {
                case 1: func_B800_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85A0:
            switch (_bank) {
                case 1: func_85A0_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8503:
            switch (_bank) {
                case 7: func_C503(); break;
                case 1: func_8503_b1(); break;
                case 2: func_8503_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA50A:
            switch (_bank) {
                case 1: func_A50A_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85E5:
            switch (_bank) {
                case 1: func_85E5_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85E2:
            switch (_bank) {
                case 1: func_85E2_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8500:
            switch (_bank) {
                case 1: func_8500_b1(); break;
                case 2: func_8500_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1C8:
            switch (_bank) {
                case 1: func_B1C8_b1(); break;
                case 2: func_B1C8_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA19F:
            switch (_bank) {
                case 1: func_A19F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0A7:
            switch (_bank) {
                case 1: func_A0A7_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x910E:
            switch (_bank) {
                case 1: func_910E_b1(); break;
                case 2: func_910E_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA34C:
            switch (_bank) {
                case 7: func_E34C(); break;
                case 1: func_A34C_b1(); break;
                case 3: func_A34C_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA201:
            switch (_bank) {
                case 7: func_E201(); break;
                case 1: func_A201_b1(); break;
                case 2: func_A201_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x838D:
            switch (_bank) {
                case 1: func_838D_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x879F:
            switch (_bank) {
                case 2: func_879F_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x87BC:
            switch (_bank) {
                case 2: func_87BC_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x87DB:
            switch (_bank) {
                case 2: func_87DB_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x87F5:
            switch (_bank) {
                case 2: func_87F5_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x88D9:
            switch (_bank) {
                case 2: func_88D9_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x88FA:
            switch (_bank) {
                case 2: func_88FA_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x891E:
            switch (_bank) {
                case 2: func_891E_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x897E:
            switch (_bank) {
                case 2: func_897E_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x899E:
            switch (_bank) {
                case 2: func_899E_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x89BB:
            switch (_bank) {
                case 2: func_89BB_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x89DE:
            switch (_bank) {
                case 2: func_89DE_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B2F:
            switch (_bank) {
                case 2: func_8B2F_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B4C:
            switch (_bank) {
                case 2: func_8B4C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B6A:
            switch (_bank) {
                case 2: func_8B6A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B8D:
            switch (_bank) {
                case 2: func_8B8D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x92E1:
            switch (_bank) {
                case 2: func_92E1_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x92EC:
            switch (_bank) {
                case 2: func_92EC_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x92F0:
            switch (_bank) {
                case 2: func_92F0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x92FB:
            switch (_bank) {
                case 2: func_92FB_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98F8:
            switch (_bank) {
                case 2: func_98F8_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9903:
            switch (_bank) {
                case 2: func_9903_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x990E:
            switch (_bank) {
                case 2: func_990E_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9919:
            switch (_bank) {
                case 2: func_9919_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x992E:
            switch (_bank) {
                case 2: func_992E_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9957:
            switch (_bank) {
                case 2: func_9957_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9986:
            switch (_bank) {
                case 2: func_9986_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99B1:
            switch (_bank) {
                case 2: func_99B1_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x87B0:
            switch (_bank) {
                case 2: func_87B0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA01E:
            switch (_bank) {
                case 2: func_A01E_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA021:
            switch (_bank) {
                case 2: func_A021_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA026:
            switch (_bank) {
                case 2: func_A026_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA02B:
            switch (_bank) {
                case 2: func_A02B_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA8A0:
            switch (_bank) {
                case 2: func_A8A0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4A0:
            switch (_bank) {
                case 7: func_F4A0(); break;
                case 2: func_B4A0_b2(); break;
                case 1: func_B4A0_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7A0:
            switch (_bank) {
                case 2: func_B7A0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA138:
            switch (_bank) {
                case 2: func_A138_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA13B:
            switch (_bank) {
                case 2: func_A13B_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA140:
            switch (_bank) {
                case 2: func_A140_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA143:
            switch (_bank) {
                case 2: func_A143_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA146:
            switch (_bank) {
                case 2: func_A146_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA149:
            switch (_bank) {
                case 2: func_A149_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA155:
            switch (_bank) {
                case 2: func_A155_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA158:
            switch (_bank) {
                case 2: func_A158_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA15B:
            switch (_bank) {
                case 2: func_A15B_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA15E:
            switch (_bank) {
                case 2: func_A15E_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA164:
            switch (_bank) {
                case 2: func_A164_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA16D:
            switch (_bank) {
                case 2: func_A16D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA173:
            switch (_bank) {
                case 2: func_A173_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA170:
            switch (_bank) {
                case 2: func_A170_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA176:
            switch (_bank) {
                case 2: func_A176_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA182:
            switch (_bank) {
                case 2: func_A182_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA185:
            switch (_bank) {
                case 2: func_A185_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA18A:
            switch (_bank) {
                case 2: func_A18A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA18D:
            switch (_bank) {
                case 2: func_A18D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA221:
            switch (_bank) {
                case 2: func_A221_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA224:
            switch (_bank) {
                case 2: func_A224_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA227:
            switch (_bank) {
                case 2: func_A227_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA22A:
            switch (_bank) {
                case 2: func_A22A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA22F:
            switch (_bank) {
                case 2: func_A22F_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA232:
            switch (_bank) {
                case 2: func_A232_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA235:
            switch (_bank) {
                case 2: func_A235_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA238:
            switch (_bank) {
                case 2: func_A238_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA23B:
            switch (_bank) {
                case 2: func_A23B_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA23E:
            switch (_bank) {
                case 2: func_A23E_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA241:
            switch (_bank) {
                case 2: func_A241_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA244:
            switch (_bank) {
                case 2: func_A244_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA247:
            switch (_bank) {
                case 2: func_A247_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2BF:
            switch (_bank) {
                case 2: func_A2BF_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2C2:
            switch (_bank) {
                case 2: func_A2C2_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2C7:
            switch (_bank) {
                case 2: func_A2C7_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2CC:
            switch (_bank) {
                case 2: func_A2CC_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2CF:
            switch (_bank) {
                case 2: func_A2CF_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2D2:
            switch (_bank) {
                case 2: func_A2D2_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2D5:
            switch (_bank) {
                case 2: func_A2D5_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB40D:
            switch (_bank) {
                case 2: func_B40D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB20D:
            switch (_bank) {
                case 2: func_B20D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB508:
            switch (_bank) {
                case 2: func_B508_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8800:
            switch (_bank) {
                case 2: func_8800_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85A3:
            switch (_bank) {
                case 2: func_85A3_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8EA3:
            switch (_bank) {
                case 2: func_8EA3_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x97A3:
            switch (_bank) {
                case 2: func_97A3_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0A3:
            switch (_bank) {
                case 2: func_A0A3_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADF5:
            switch (_bank) {
                case 2: func_ADF5_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1AF:
            switch (_bank) {
                case 2: func_B1AF_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1B5:
            switch (_bank) {
                case 2: func_B1B5_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB899:
            switch (_bank) {
                case 2: func_B899_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADDB:
            switch (_bank) {
                case 2: func_ADDB_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADFD:
            switch (_bank) {
                case 2: func_ADFD_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF0D:
            switch (_bank) {
                case 2: func_AF0D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFED:
            switch (_bank) {
                case 2: func_AFED_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1BB:
            switch (_bank) {
                case 2: func_B1BB_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB10B:
            switch (_bank) {
                case 2: func_B10B_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB13B:
            switch (_bank) {
                case 2: func_B13B_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0A9:
            switch (_bank) {
                case 2: func_B0A9_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB25F:
            switch (_bank) {
                case 2: func_B25F_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB79F:
            switch (_bank) {
                case 2: func_B79F_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB30C:
            switch (_bank) {
                case 2: func_B30C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB33A:
            switch (_bank) {
                case 2: func_B33A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB436:
            switch (_bank) {
                case 7: func_F436(); break;
                case 2: func_B436_b2(); break;
                case 1: func_B436_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB49F:
            switch (_bank) {
                case 2: func_B49F_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB50C:
            switch (_bank) {
                case 2: func_B50C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB547:
            switch (_bank) {
                case 2: func_B547_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB5F3:
            switch (_bank) {
                case 2: func_B5F3_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB6AA:
            switch (_bank) {
                case 2: func_B6AA_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB71D:
            switch (_bank) {
                case 2: func_B71D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB803:
            switch (_bank) {
                case 2: func_B803_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB80C:
            switch (_bank) {
                case 2: func_B80C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB83A:
            switch (_bank) {
                case 2: func_B83A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB852:
            switch (_bank) {
                case 2: func_B852_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB890:
            switch (_bank) {
                case 2: func_B890_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8A3:
            switch (_bank) {
                case 2: func_B8A3_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA5D:
            switch (_bank) {
                case 2: func_BA5D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA74:
            switch (_bank) {
                case 2: func_BA74_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x80A9:
            switch (_bank) {
                case 2: func_80A9_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4A9:
            switch (_bank) {
                case 2: func_A4A9_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB08:
            switch (_bank) {
                case 2: func_BB08_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB47:
            switch (_bank) {
                case 2: func_BB47_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB60:
            switch (_bank) {
                case 2: func_BB60_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB59:
            switch (_bank) {
                case 2: func_BB59_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC05:
            switch (_bank) {
                case 2: func_BC05_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDCB:
            switch (_bank) {
                case 2: func_BDCB_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8520:
            switch (_bank) {
                case 2: func_8520_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8539:
            switch (_bank) {
                case 2: func_8539_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8530:
            switch (_bank) {
                case 2: func_8530_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0E0:
            switch (_bank) {
                case 2: func_A0E0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB104:
            switch (_bank) {
                case 2: func_B104_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8550:
            switch (_bank) {
                case 2: func_8550_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8A4C:
            switch (_bank) {
                case 2: func_8A4C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0E1:
            switch (_bank) {
                case 2: func_A0E1_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85AC:
            switch (_bank) {
                case 2: func_85AC_b2(); break;
                case 6: func_85AC_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9CF:
            switch (_bank) {
                case 7: func_E9CF(); break;
                case 2: func_A9CF_b2(); break;
                case 6: func_A9CF_b6(); break;
                case 1: func_A9CF_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA02:
            switch (_bank) {
                case 2: func_AA02_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD91:
            switch (_bank) {
                case 3: func_AD91_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB191:
            switch (_bank) {
                case 3: func_B191_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB06:
            switch (_bank) {
                case 3: func_AB06_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA786:
            switch (_bank) {
                case 3: func_A786_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA81B:
            switch (_bank) {
                case 3: func_A81B_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBEF4:
            switch (_bank) {
                case 3: func_BEF4_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4AA:
            switch (_bank) {
                case 3: func_A4AA_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA115:
            switch (_bank) {
                case 3: func_A115_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA65C:
            switch (_bank) {
                case 3: func_A65C_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA73D:
            switch (_bank) {
                case 3: func_A73D_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA7BF:
            switch (_bank) {
                case 3: func_A7BF_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA814:
            switch (_bank) {
                case 3: func_A814_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9DC:
            switch (_bank) {
                case 3: func_A9DC_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA94:
            switch (_bank) {
                case 3: func_AA94_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3E5:
            switch (_bank) {
                case 3: func_A3E5_b3(); break;
                case 1: func_A3E5_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3F2:
            switch (_bank) {
                case 7: func_F3F2(); break;
                case 3: func_B3F2_b3(); break;
                case 1: func_B3F2_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9BF0:
            switch (_bank) {
                case 4: func_9BF0_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9BF1:
            switch (_bank) {
                case 4: func_9BF1_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9BFD:
            switch (_bank) {
                case 4: func_9BFD_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C03:
            switch (_bank) {
                case 4: func_9C03_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C23:
            switch (_bank) {
                case 4: func_9C23_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C32:
            switch (_bank) {
                case 4: func_9C32_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C47:
            switch (_bank) {
                case 4: func_9C47_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C5E:
            switch (_bank) {
                case 4: func_9C5E_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB659:
            switch (_bank) {
                case 4: func_B659_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB67B:
            switch (_bank) {
                case 4: func_B67B_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB69D:
            switch (_bank) {
                case 4: func_B69D_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB6A7:
            switch (_bank) {
                case 4: func_B6A7_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x989A:
            switch (_bank) {
                case 4: func_989A_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEAE:
            switch (_bank) {
                case 4: func_AEAE_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4B6:
            switch (_bank) {
                case 5: func_A4B6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4A4:
            switch (_bank) {
                case 5: func_A4A4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5A4:
            switch (_bank) {
                case 5: func_A5A4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA7A7:
            switch (_bank) {
                case 5: func_A7A7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7B6:
            switch (_bank) {
                case 5: func_B7B6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x911D:
            switch (_bank) {
                case 5: func_911D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA450:
            switch (_bank) {
                case 5: func_A450_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x85A9:
            switch (_bank) {
                case 6: func_85A9_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B76:
            switch (_bank) {
                case 0: func_8B76_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8BE0:
            switch (_bank) {
                case 0: func_8BE0_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8BE6:
            switch (_bank) {
                case 0: func_8BE6_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8DFC:
            switch (_bank) {
                case 0: func_8DFC_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBB6:
            switch (_bank) {
                case 0: func_BBB6_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8339:
            switch (_bank) {
                case 0: func_8339_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8CA2:
            switch (_bank) {
                case 0: func_8CA2_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA535:
            switch (_bank) {
                case 1: func_A535_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9662:
            switch (_bank) {
                case 1: func_9662_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9664:
            switch (_bank) {
                case 1: func_9664_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x963C:
            switch (_bank) {
                case 1: func_963C_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9640:
            switch (_bank) {
                case 1: func_9640_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x964C:
            switch (_bank) {
                case 1: func_964C_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9650:
            switch (_bank) {
                case 1: func_9650_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9658:
            switch (_bank) {
                case 1: func_9658_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DC8:
            switch (_bank) {
                case 1: func_9DC8_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDC8:
            switch (_bank) {
                case 1: func_BDC8_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDF4:
            switch (_bank) {
                case 1: func_BDF4_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB342:
            switch (_bank) {
                case 1: func_B342_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9436:
            switch (_bank) {
                case 1: func_9436_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA592:
            switch (_bank) {
                case 1: func_A592_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB48B:
            switch (_bank) {
                case 1: func_B48B_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9A9:
            switch (_bank) {
                case 1: func_A9A9_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8D3:
            switch (_bank) {
                case 1: func_B8D3_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98E7:
            switch (_bank) {
                case 1: func_98E7_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9E5:
            switch (_bank) {
                case 1: func_A9E5_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8E7:
            switch (_bank) {
                case 1: func_B8E7_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x94FC:
            switch (_bank) {
                case 1: func_94FC_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5A5:
            switch (_bank) {
                case 1: func_A5A5_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5A3:
            switch (_bank) {
                case 1: func_A5A3_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5E4:
            switch (_bank) {
                case 1: func_A5E4_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4FC:
            switch (_bank) {
                case 1: func_B4FC_b1(); break;
                case 2: func_B4FC_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB5B4:
            switch (_bank) {
                case 1: func_B5B4_b1(); break;
                case 2: func_B5B4_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB622:
            switch (_bank) {
                case 1: func_B622_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB5C1:
            switch (_bank) {
                case 1: func_B5C1_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB5E0:
            switch (_bank) {
                case 1: func_B5E0_b1(); break;
                case 2: func_B5E0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB511:
            switch (_bank) {
                case 1: func_B511_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB562:
            switch (_bank) {
                case 1: func_B562_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x970F:
            switch (_bank) {
                case 1: func_970F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB70F:
            switch (_bank) {
                case 1: func_B70F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A5F:
            switch (_bank) {
                case 1: func_9A5F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA5F:
            switch (_bank) {
                case 1: func_BA5F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBAB9:
            switch (_bank) {
                case 1: func_BAB9_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBAC7:
            switch (_bank) {
                case 1: func_BAC7_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBAB2:
            switch (_bank) {
                case 1: func_BAB2_b1(); break;
                case 2: func_BAB2_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A9D:
            switch (_bank) {
                case 1: func_9A9D_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA9D:
            switch (_bank) {
                case 1: func_BA9D_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D37:
            switch (_bank) {
                case 1: func_9D37_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD37:
            switch (_bank) {
                case 1: func_BD37_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D46:
            switch (_bank) {
                case 1: func_9D46_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD46:
            switch (_bank) {
                case 1: func_BD46_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D88:
            switch (_bank) {
                case 1: func_9D88_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD88:
            switch (_bank) {
                case 1: func_BD88_b1(); break;
                case 2: func_BD88_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DB7:
            switch (_bank) {
                case 1: func_9DB7_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDB7:
            switch (_bank) {
                case 1: func_BDB7_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9EA4:
            switch (_bank) {
                case 1: func_9EA4_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9EA6:
            switch (_bank) {
                case 1: func_9EA6_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0CD:
            switch (_bank) {
                case 2: func_A0CD_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0CC:
            switch (_bank) {
                case 2: func_A0CC_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0D0:
            switch (_bank) {
                case 2: func_A0D0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0F1:
            switch (_bank) {
                case 2: func_A0F1_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA104:
            switch (_bank) {
                case 2: func_A104_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA1E4:
            switch (_bank) {
                case 2: func_A1E4_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA286:
            switch (_bank) {
                case 2: func_A286_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA289:
            switch (_bank) {
                case 2: func_A289_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA290:
            switch (_bank) {
                case 2: func_A290_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA293:
            switch (_bank) {
                case 2: func_A293_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD79:
            switch (_bank) {
                case 2: func_AD79_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE21:
            switch (_bank) {
                case 2: func_AE21_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB31F:
            switch (_bank) {
                case 2: func_B31F_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB353:
            switch (_bank) {
                case 2: func_B353_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB967:
            switch (_bank) {
                case 2: func_B967_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD44:
            switch (_bank) {
                case 2: func_BD44_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD5B:
            switch (_bank) {
                case 2: func_BD5B_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBEA6:
            switch (_bank) {
                case 2: func_BEA6_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA953:
            switch (_bank) {
                case 2: func_A953_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB113:
            switch (_bank) {
                case 2: func_B113_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB387:
            switch (_bank) {
                case 2: func_B387_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xABA0:
            switch (_bank) {
                case 2: func_ABA0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEA0:
            switch (_bank) {
                case 2: func_AEA0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1A0:
            switch (_bank) {
                case 2: func_B1A0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB406:
            switch (_bank) {
                case 2: func_B406_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB60D:
            switch (_bank) {
                case 2: func_B60D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB608:
            switch (_bank) {
                case 2: func_B608_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB688:
            switch (_bank) {
                case 2: func_B688_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB80A:
            switch (_bank) {
                case 2: func_B80A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADCA:
            switch (_bank) {
                case 2: func_ADCA_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE69:
            switch (_bank) {
                case 2: func_AE69_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEEA:
            switch (_bank) {
                case 2: func_AEEA_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB31C:
            switch (_bank) {
                case 2: func_B31C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB336:
            switch (_bank) {
                case 2: func_B336_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB362:
            switch (_bank) {
                case 2: func_B362_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3E4:
            switch (_bank) {
                case 2: func_B3E4_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA57:
            switch (_bank) {
                case 2: func_BA57_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA6E:
            switch (_bank) {
                case 2: func_BA6E_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB42C:
            switch (_bank) {
                case 2: func_B42C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB69E:
            switch (_bank) {
                case 2: func_B69E_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEFB:
            switch (_bank) {
                case 2: func_AEFB_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE26:
            switch (_bank) {
                case 2: func_AE26_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE4A:
            switch (_bank) {
                case 2: func_AE4A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE7D:
            switch (_bank) {
                case 2: func_AE7D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE86:
            switch (_bank) {
                case 2: func_AE86_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEAB:
            switch (_bank) {
                case 2: func_AEAB_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEB0:
            switch (_bank) {
                case 2: func_AEB0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEB8:
            switch (_bank) {
                case 2: func_AEB8_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEC4:
            switch (_bank) {
                case 2: func_AEC4_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAECC:
            switch (_bank) {
                case 2: func_AECC_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEE2:
            switch (_bank) {
                case 2: func_AEE2_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9CD:
            switch (_bank) {
                case 2: func_B9CD_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9E6:
            switch (_bank) {
                case 2: func_B9E6_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF2E:
            switch (_bank) {
                case 2: func_AF2E_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF56:
            switch (_bank) {
                case 2: func_AF56_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF65:
            switch (_bank) {
                case 2: func_AF65_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB653:
            switch (_bank) {
                case 2: func_B653_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF72:
            switch (_bank) {
                case 2: func_AF72_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF83:
            switch (_bank) {
                case 2: func_AF83_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFFD:
            switch (_bank) {
                case 2: func_AFFD_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB007:
            switch (_bank) {
                case 2: func_B007_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB01B:
            switch (_bank) {
                case 2: func_B01B_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB025:
            switch (_bank) {
                case 2: func_B025_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9CA:
            switch (_bank) {
                case 2: func_B9CA_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB059:
            switch (_bank) {
                case 2: func_B059_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB08B:
            switch (_bank) {
                case 2: func_B08B_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0B6:
            switch (_bank) {
                case 2: func_B0B6_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0CC:
            switch (_bank) {
                case 2: func_B0CC_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0EF:
            switch (_bank) {
                case 2: func_B0EF_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9C5:
            switch (_bank) {
                case 2: func_B9C5_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB11A:
            switch (_bank) {
                case 2: func_B11A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA0C:
            switch (_bank) {
                case 2: func_BA0C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1DD:
            switch (_bank) {
                case 2: func_B1DD_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB14B:
            switch (_bank) {
                case 2: func_B14B_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB161:
            switch (_bank) {
                case 2: func_B161_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB171:
            switch (_bank) {
                case 2: func_B171_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB194:
            switch (_bank) {
                case 2: func_B194_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB19C:
            switch (_bank) {
                case 2: func_B19C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1EE:
            switch (_bank) {
                case 2: func_B1EE_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB201:
            switch (_bank) {
                case 2: func_B201_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB217:
            switch (_bank) {
                case 2: func_B217_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB230:
            switch (_bank) {
                case 2: func_B230_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB244:
            switch (_bank) {
                case 2: func_B244_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB267:
            switch (_bank) {
                case 2: func_B267_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB27C:
            switch (_bank) {
                case 2: func_B27C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB29A:
            switch (_bank) {
                case 2: func_B29A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2B0:
            switch (_bank) {
                case 2: func_B2B0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB617:
            switch (_bank) {
                case 2: func_B617_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2C0:
            switch (_bank) {
                case 2: func_B2C0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2CD:
            switch (_bank) {
                case 2: func_B2CD_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7A9:
            switch (_bank) {
                case 2: func_B7A9_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7B3:
            switch (_bank) {
                case 2: func_B7B3_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB36C:
            switch (_bank) {
                case 2: func_B36C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB398:
            switch (_bank) {
                case 2: func_B398_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB350:
            switch (_bank) {
                case 2: func_B350_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3C3:
            switch (_bank) {
                case 2: func_B3C3_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3D0:
            switch (_bank) {
                case 2: func_B3D0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3EE:
            switch (_bank) {
                case 2: func_B3EE_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB404:
            switch (_bank) {
                case 2: func_B404_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB40C:
            switch (_bank) {
                case 2: func_B40C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB41F:
            switch (_bank) {
                case 2: func_B41F_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB45C:
            switch (_bank) {
                case 2: func_B45C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB478:
            switch (_bank) {
                case 2: func_B478_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4A8:
            switch (_bank) {
                case 2: func_B4A8_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4B6:
            switch (_bank) {
                case 2: func_B4B6_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4CA:
            switch (_bank) {
                case 2: func_B4CA_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4DB:
            switch (_bank) {
                case 2: func_B4DB_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4F9:
            switch (_bank) {
                case 2: func_B4F9_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAECF:
            switch (_bank) {
                case 2: func_AECF_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB52A:
            switch (_bank) {
                case 2: func_B52A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB518:
            switch (_bank) {
                case 2: func_B518_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9D7:
            switch (_bank) {
                case 2: func_B9D7_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB550:
            switch (_bank) {
                case 2: func_B550_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB55D:
            switch (_bank) {
                case 2: func_B55D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB590:
            switch (_bank) {
                case 2: func_B590_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB570:
            switch (_bank) {
                case 2: func_B570_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB57D:
            switch (_bank) {
                case 2: func_B57D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB5CB:
            switch (_bank) {
                case 2: func_B5CB_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB602:
            switch (_bank) {
                case 2: func_B602_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB61C:
            switch (_bank) {
                case 2: func_B61C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB624:
            switch (_bank) {
                case 2: func_B624_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB633:
            switch (_bank) {
                case 2: func_B633_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB644:
            switch (_bank) {
                case 2: func_B644_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB6BA:
            switch (_bank) {
                case 2: func_B6BA_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB6D9:
            switch (_bank) {
                case 2: func_B6D9_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB6F2:
            switch (_bank) {
                case 2: func_B6F2_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB701:
            switch (_bank) {
                case 2: func_B701_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB726:
            switch (_bank) {
                case 2: func_B726_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB74C:
            switch (_bank) {
                case 2: func_B74C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB77F:
            switch (_bank) {
                case 2: func_B77F_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB762:
            switch (_bank) {
                case 2: func_B762_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB767:
            switch (_bank) {
                case 2: func_B767_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB773:
            switch (_bank) {
                case 2: func_B773_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7BD:
            switch (_bank) {
                case 2: func_B7BD_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7E1:
            switch (_bank) {
                case 2: func_B7E1_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7EF:
            switch (_bank) {
                case 2: func_B7EF_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB82F:
            switch (_bank) {
                case 2: func_B82F_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB843:
            switch (_bank) {
                case 2: func_B843_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB863:
            switch (_bank) {
                case 2: func_B863_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB86C:
            switch (_bank) {
                case 2: func_B86C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB87C:
            switch (_bank) {
                case 2: func_B87C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8AC:
            switch (_bank) {
                case 2: func_B8AC_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8B8:
            switch (_bank) {
                case 2: func_B8B8_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB951:
            switch (_bank) {
                case 2: func_B951_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB93D:
            switch (_bank) {
                case 2: func_B93D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB942:
            switch (_bank) {
                case 2: func_B942_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB947:
            switch (_bank) {
                case 2: func_B947_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB94C:
            switch (_bank) {
                case 2: func_B94C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA4A:
            switch (_bank) {
                case 2: func_BA4A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBAB8:
            switch (_bank) {
                case 2: func_BAB8_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBADA:
            switch (_bank) {
                case 2: func_BADA_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBAF4:
            switch (_bank) {
                case 2: func_BAF4_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9E9:
            switch (_bank) {
                case 2: func_B9E9_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9F5:
            switch (_bank) {
                case 2: func_B9F5_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9FA:
            switch (_bank) {
                case 2: func_B9FA_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB10D:
            switch (_bank) {
                case 2: func_B10D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA960:
            switch (_bank) {
                case 2: func_A960_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB28B:
            switch (_bank) {
                case 2: func_B28B_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB337:
            switch (_bank) {
                case 2: func_B337_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB363:
            switch (_bank) {
                case 2: func_B363_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBAB3:
            switch (_bank) {
                case 2: func_BAB3_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB01:
            switch (_bank) {
                case 2: func_BB01_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB925:
            switch (_bank) {
                case 2: func_B925_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB6E9:
            switch (_bank) {
                case 2: func_B6E9_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB69F:
            switch (_bank) {
                case 2: func_B69F_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB89A:
            switch (_bank) {
                case 2: func_B89A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB108:
            switch (_bank) {
                case 2: func_B108_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB84D:
            switch (_bank) {
                case 2: func_B84D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADD1:
            switch (_bank) {
                case 2: func_ADD1_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADE8:
            switch (_bank) {
                case 2: func_ADE8_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADE1:
            switch (_bank) {
                case 2: func_ADE1_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0F9:
            switch (_bank) {
                case 2: func_B0F9_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB103:
            switch (_bank) {
                case 2: func_B103_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1A9:
            switch (_bank) {
                case 2: func_B1A9_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2FA:
            switch (_bank) {
                case 2: func_B2FA_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3AB:
            switch (_bank) {
                case 2: func_B3AB_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB487:
            switch (_bank) {
                case 2: func_B487_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB502:
            switch (_bank) {
                case 2: func_B502_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB52F:
            switch (_bank) {
                case 2: func_B52F_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB5AA:
            switch (_bank) {
                case 2: func_B5AA_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB5DF:
            switch (_bank) {
                case 2: func_B5DF_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB6E8:
            switch (_bank) {
                case 2: func_B6E8_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB717:
            switch (_bank) {
                case 2: func_B717_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB732:
            switch (_bank) {
                case 2: func_B732_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB78D:
            switch (_bank) {
                case 2: func_B78D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7CD:
            switch (_bank) {
                case 2: func_B7CD_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7FB:
            switch (_bank) {
                case 2: func_B7FB_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB834:
            switch (_bank) {
                case 2: func_B834_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB84C:
            switch (_bank) {
                case 2: func_B84C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB85B:
            switch (_bank) {
                case 2: func_B85B_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB888:
            switch (_bank) {
                case 2: func_B888_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8CE:
            switch (_bank) {
                case 2: func_B8CE_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8EF:
            switch (_bank) {
                case 2: func_B8EF_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB915:
            switch (_bank) {
                case 2: func_B915_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA89:
            switch (_bank) {
                case 2: func_BA89_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBAA5:
            switch (_bank) {
                case 2: func_BAA5_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA976:
            switch (_bank) {
                case 2: func_A976_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA093:
            switch (_bank) {
                case 3: func_A093_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0A5:
            switch (_bank) {
                case 3: func_A0A5_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9AE:
            switch (_bank) {
                case 3: func_A9AE_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xE5D0:
            func_E5D0(); break;
        case 0x9C0C:
            switch (_bank) {
                case 4: func_9C0C_b4(); break;
                case 1: func_9C0C_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98B8:
            switch (_bank) {
                case 4: func_98B8_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA319:
            switch (_bank) {
                case 5: func_A319_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA320:
            switch (_bank) {
                case 5: func_A320_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA59D:
            switch (_bank) {
                case 6: func_A59D_b6(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x82CB:
            switch (_bank) {
                case 0: func_82CB_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x82D5:
            switch (_bank) {
                case 0: func_82D5_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x95E0:
            switch (_bank) {
                case 1: func_95E0_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x948B:
            switch (_bank) {
                case 1: func_948B_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9562:
            switch (_bank) {
                case 1: func_9562_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB63B:
            switch (_bank) {
                case 1: func_B63B_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A21:
            switch (_bank) {
                case 1: func_9A21_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9AB2:
            switch (_bank) {
                case 1: func_9AB2_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D35:
            switch (_bank) {
                case 1: func_9D35_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2B6:
            switch (_bank) {
                case 1: func_B2B6_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB020:
            switch (_bank) {
                case 1: func_B020_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBF98:
            switch (_bank) {
                case 1: func_BF98_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9236:
            switch (_bank) {
                case 1: func_9236_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB236:
            switch (_bank) {
                case 1: func_B236_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x941B:
            switch (_bank) {
                case 1: func_941B_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA047:
            switch (_bank) {
                case 1: func_A047_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA02D:
            switch (_bank) {
                case 1: func_A02D_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9CAB:
            switch (_bank) {
                case 1: func_9CAB_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9996:
            switch (_bank) {
                case 1: func_9996_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0A6:
            switch (_bank) {
                case 1: func_A0A6_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B9A:
            switch (_bank) {
                case 1: func_9B9A_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9B9C:
            switch (_bank) {
                case 1: func_9B9C_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4A1:
            switch (_bank) {
                case 1: func_A4A1_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2A1:
            switch (_bank) {
                case 1: func_A2A1_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA483:
            switch (_bank) {
                case 1: func_A483_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA28D:
            switch (_bank) {
                case 1: func_A28D_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x978E:
            switch (_bank) {
                case 1: func_978E_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9DA5:
            switch (_bank) {
                case 1: func_9DA5_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D8A:
            switch (_bank) {
                case 1: func_9D8A_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E9C:
            switch (_bank) {
                case 1: func_9E9C_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA509:
            switch (_bank) {
                case 1: func_A509_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA571:
            switch (_bank) {
                case 1: func_A571_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA2AE:
            switch (_bank) {
                case 1: func_A2AE_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9EBD:
            switch (_bank) {
                case 1: func_9EBD_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA550:
            switch (_bank) {
                case 1: func_A550_b1(); break;
                case 5: func_A550_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA261:
            switch (_bank) {
                case 1: func_A261_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA090:
            switch (_bank) {
                case 1: func_A090_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA295:
            switch (_bank) {
                case 1: func_A295_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA004:
            switch (_bank) {
                case 1: func_A004_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0A4:
            switch (_bank) {
                case 1: func_A0A4_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA205:
            switch (_bank) {
                case 1: func_A205_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9687:
            switch (_bank) {
                case 1: func_9687_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9685:
            switch (_bank) {
                case 1: func_9685_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x95C1:
            switch (_bank) {
                case 1: func_95C1_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9AC7:
            switch (_bank) {
                case 1: func_9AC7_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA07D:
            switch (_bank) {
                case 1: func_A07D_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E70:
            switch (_bank) {
                case 1: func_9E70_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9E72:
            switch (_bank) {
                case 1: func_9E72_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA097:
            switch (_bank) {
                case 1: func_A097_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9511:
            switch (_bank) {
                case 1: func_9511_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x963B:
            switch (_bank) {
                case 1: func_963B_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x96FE:
            switch (_bank) {
                case 1: func_96FE_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9F98:
            switch (_bank) {
                case 1: func_9F98_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x988C:
            switch (_bank) {
                case 1: func_988C_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x963F:
            switch (_bank) {
                case 1: func_963F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x96BC:
            switch (_bank) {
                case 1: func_96BC_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9A65:
            switch (_bank) {
                case 1: func_9A65_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x969A:
            switch (_bank) {
                case 1: func_969A_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA003:
            switch (_bank) {
                case 7: func_E003(); break;
                case 1: func_A003_b1(); break;
                case 3: func_A003_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA362:
            switch (_bank) {
                case 1: func_A362_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB41B:
            switch (_bank) {
                case 1: func_B41B_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB63F:
            switch (_bank) {
                case 1: func_B63F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x96E1:
            switch (_bank) {
                case 1: func_96E1_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB6E1:
            switch (_bank) {
                case 1: func_B6E1_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB706:
            switch (_bank) {
                case 1: func_B706_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x97B2:
            switch (_bank) {
                case 1: func_97B2_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7B2:
            switch (_bank) {
                case 1: func_B7B2_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7CE:
            switch (_bank) {
                case 1: func_B7CE_b1(); break;
                case 2: func_B7CE_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x97AB:
            switch (_bank) {
                case 1: func_97AB_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7AB:
            switch (_bank) {
                case 1: func_B7AB_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x97DF:
            switch (_bank) {
                case 1: func_97DF_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7DF:
            switch (_bank) {
                case 1: func_B7DF_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x988A:
            switch (_bank) {
                case 1: func_988A_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA6A5:
            switch (_bank) {
                case 1: func_A6A5_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA903:
            switch (_bank) {
                case 1: func_A903_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA900:
            switch (_bank) {
                case 1: func_A900_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA972:
            switch (_bank) {
                case 1: func_A972_b1(); break;
                case 3: func_A972_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA983:
            switch (_bank) {
                case 1: func_A983_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB88A:
            switch (_bank) {
                case 1: func_B88A_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8AF:
            switch (_bank) {
                case 1: func_B8AF_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8B7:
            switch (_bank) {
                case 1: func_B8B7_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8B9:
            switch (_bank) {
                case 1: func_B8B9_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8A7:
            switch (_bank) {
                case 1: func_B8A7_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB88C:
            switch (_bank) {
                case 1: func_B88C_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x996C:
            switch (_bank) {
                case 1: func_996C_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9F1:
            switch (_bank) {
                case 1: func_A9F1_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9FE:
            switch (_bank) {
                case 1: func_A9FE_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9F4:
            switch (_bank) {
                case 1: func_A9F4_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB96C:
            switch (_bank) {
                case 1: func_B96C_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBEB8:
            switch (_bank) {
                case 2: func_BEB8_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x828B:
            switch (_bank) {
                case 0: func_828B_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9D33:
            switch (_bank) {
                case 1: func_9D33_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9699:
            switch (_bank) {
                case 1: func_9699_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x969B:
            switch (_bank) {
                case 1: func_969B_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x96A8:
            switch (_bank) {
                case 1: func_96A8_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBEE8:
            switch (_bank) {
                case 2: func_BEE8_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBF85:
            switch (_bank) {
                case 2: func_BF85_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9694:
            switch (_bank) {
                case 1: func_9694_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8899:
            switch (_bank) {
                case 1: func_8899_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8524:
            switch (_bank) {
                case 1: func_8524_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8363:
            switch (_bank) {
                case 1: func_8363_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8128:
            switch (_bank) {
                case 1: func_8128_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8A7E:
            switch (_bank) {
                case 5: func_8A7E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B28:
            switch (_bank) {
                case 5: func_8B28_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8B5A:
            switch (_bank) {
                case 5: func_8B5A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8C1A:
            switch (_bank) {
                case 5: func_8C1A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8C70:
            switch (_bank) {
                case 5: func_8C70_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8C88:
            switch (_bank) {
                case 5: func_8C88_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D2E:
            switch (_bank) {
                case 5: func_8D2E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D7E:
            switch (_bank) {
                case 5: func_8D7E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8DD8:
            switch (_bank) {
                case 5: func_8DD8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8E00:
            switch (_bank) {
                case 5: func_8E00_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8E12:
            switch (_bank) {
                case 5: func_8E12_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8E28:
            switch (_bank) {
                case 5: func_8E28_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8E30:
            switch (_bank) {
                case 5: func_8E30_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8E34:
            switch (_bank) {
                case 5: func_8E34_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8E44:
            switch (_bank) {
                case 5: func_8E44_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8E54:
            switch (_bank) {
                case 5: func_8E54_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8E68:
            switch (_bank) {
                case 5: func_8E68_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8E8C:
            switch (_bank) {
                case 5: func_8E8C_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8EB2:
            switch (_bank) {
                case 5: func_8EB2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8EC4:
            switch (_bank) {
                case 5: func_8EC4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8501:
            switch (_bank) {
                case 5: func_8501_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x855A:
            switch (_bank) {
                case 5: func_855A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x852E:
            switch (_bank) {
                case 5: func_852E_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x84FE:
            switch (_bank) {
                case 5: func_84FE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8608:
            switch (_bank) {
                case 5: func_8608_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8633:
            switch (_bank) {
                case 5: func_8633_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8662:
            switch (_bank) {
                case 5: func_8662_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x86C6:
            switch (_bank) {
                case 5: func_86C6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x86EB:
            switch (_bank) {
                case 5: func_86EB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x86A5:
            switch (_bank) {
                case 5: func_86A5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8750:
            switch (_bank) {
                case 5: func_8750_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8793:
            switch (_bank) {
                case 5: func_8793_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x879A:
            switch (_bank) {
                case 5: func_879A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADCB:
            switch (_bank) {
                case 2: func_ADCB_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAE6A:
            switch (_bank) {
                case 2: func_AE6A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEEB:
            switch (_bank) {
                case 2: func_AEEB_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEEE:
            switch (_bank) {
                case 2: func_AEEE_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFC4:
            switch (_bank) {
                case 2: func_AFC4_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFC7:
            switch (_bank) {
                case 2: func_AFC7_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFA3:
            switch (_bank) {
                case 2: func_AFA3_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFA6:
            switch (_bank) {
                case 2: func_AFA6_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFDE:
            switch (_bank) {
                case 2: func_AFDE_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB07A:
            switch (_bank) {
                case 2: func_B07A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB126:
            switch (_bank) {
                case 2: func_B126_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1F8:
            switch (_bank) {
                case 2: func_B1F8_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB250:
            switch (_bank) {
                case 2: func_B250_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB31D:
            switch (_bank) {
                case 2: func_B31D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3E5:
            switch (_bank) {
                case 2: func_B3E5_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA10:
            switch (_bank) {
                case 2: func_BA10_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA29:
            switch (_bank) {
                case 2: func_BA29_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA86:
            switch (_bank) {
                case 2: func_BA86_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB6B:
            switch (_bank) {
                case 2: func_BB6B_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB6E:
            switch (_bank) {
                case 2: func_BB6E_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBD8:
            switch (_bank) {
                case 2: func_BBD8_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBDB:
            switch (_bank) {
                case 2: func_BBDB_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBE4:
            switch (_bank) {
                case 2: func_BBE4_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBE7:
            switch (_bank) {
                case 2: func_BBE7_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC00:
            switch (_bank) {
                case 2: func_BC00_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC4B:
            switch (_bank) {
                case 2: func_BC4B_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCFA:
            switch (_bank) {
                case 2: func_BCFA_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD03:
            switch (_bank) {
                case 2: func_BD03_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDC2:
            switch (_bank) {
                case 2: func_BDC2_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA58:
            switch (_bank) {
                case 2: func_BA58_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA6F:
            switch (_bank) {
                case 2: func_BA6F_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCE1:
            switch (_bank) {
                case 2: func_BCE1_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCE4:
            switch (_bank) {
                case 2: func_BCE4_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB40:
            switch (_bank) {
                case 2: func_BB40_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB52:
            switch (_bank) {
                case 2: func_BB52_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBFB6:
            switch (_bank) {
                case 7: func_FFB6(); break;
                case 2: func_BFB6_b2(); break;
                case 0: func_BFB6_b0(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8C9:
            switch (_bank) {
                case 2: func_B8C9_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8CF:
            switch (_bank) {
                case 2: func_B8CF_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8EA:
            switch (_bank) {
                case 2: func_B8EA_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB929:
            switch (_bank) {
                case 2: func_B929_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB92D:
            switch (_bank) {
                case 2: func_B92D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB931:
            switch (_bank) {
                case 2: func_B931_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB935:
            switch (_bank) {
                case 2: func_B935_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB938:
            switch (_bank) {
                case 2: func_B938_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB909:
            switch (_bank) {
                case 2: func_B909_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB90C:
            switch (_bank) {
                case 2: func_B90C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1AA:
            switch (_bank) {
                case 2: func_B1AA_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1B0:
            switch (_bank) {
                case 2: func_B1B0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1B6:
            switch (_bank) {
                case 2: func_B1B6_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB1B8:
            switch (_bank) {
                case 2: func_B1B8_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB42D:
            switch (_bank) {
                case 2: func_B42D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB488:
            switch (_bank) {
                case 2: func_B488_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB503:
            switch (_bank) {
                case 2: func_B503_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB530:
            switch (_bank) {
                case 2: func_B530_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB5AB:
            switch (_bank) {
                case 2: func_B5AB_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF4B:
            switch (_bank) {
                case 2: func_AF4B_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7D5:
            switch (_bank) {
                case 2: func_B7D5_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB85C:
            switch (_bank) {
                case 2: func_B85C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB733:
            switch (_bank) {
                case 2: func_B733_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAEFC:
            switch (_bank) {
                case 2: func_AEFC_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAF05:
            switch (_bank) {
                case 2: func_AF05_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3AC:
            switch (_bank) {
                case 2: func_B3AC_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB718:
            switch (_bank) {
                case 2: func_B718_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADE2:
            switch (_bank) {
                case 2: func_ADE2_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB0FA:
            switch (_bank) {
                case 2: func_B0FA_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB78E:
            switch (_bank) {
                case 2: func_B78E_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB794:
            switch (_bank) {
                case 2: func_B794_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB79A:
            switch (_bank) {
                case 2: func_B79A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7FC:
            switch (_bank) {
                case 2: func_B7FC_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB889:
            switch (_bank) {
                case 2: func_B889_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB835:
            switch (_bank) {
                case 2: func_B835_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2FB:
            switch (_bank) {
                case 2: func_B2FB_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB301:
            switch (_bank) {
                case 2: func_B301_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB307:
            switch (_bank) {
                case 2: func_B307_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9E7:
            switch (_bank) {
                case 2: func_B9E7_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA0D:
            switch (_bank) {
                case 2: func_BA0D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9C1:
            switch (_bank) {
                case 2: func_A9C1_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA84D:
            switch (_bank) {
                case 2: func_A84D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xEFC1:
            func_EFC1(); break;
        case 0xEFD1:
            func_EFD1(); break;
        case 0xEFC3:
            func_EFC3(); break;
        case 0xEFD6:
            func_EFD6(); break;
        case 0x8AC6:
            switch (_bank) {
                case 5: func_8AC6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8ADC:
            switch (_bank) {
                case 5: func_8ADC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8ADE:
            switch (_bank) {
                case 5: func_8ADE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8BD8:
            switch (_bank) {
                case 5: func_8BD8_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8BDA:
            switch (_bank) {
                case 5: func_8BDA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8C07:
            switch (_bank) {
                case 5: func_8C07_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D6B:
            switch (_bank) {
                case 5: func_8D6B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D84:
            switch (_bank) {
                case 5: func_8D84_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8E4A:
            switch (_bank) {
                case 5: func_8E4A_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x854F:
            switch (_bank) {
                case 5: func_854F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8783:
            switch (_bank) {
                case 5: func_8783_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAFB2:
            switch (_bank) {
                case 2: func_AFB2_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB062:
            switch (_bank) {
                case 2: func_B062_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB240:
            switch (_bank) {
                case 2: func_B240_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBEC:
            switch (_bank) {
                case 2: func_BBEC_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDB4:
            switch (_bank) {
                case 2: func_BDB4_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4F0:
            switch (_bank) {
                case 2: func_B4F0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4F2:
            switch (_bank) {
                case 2: func_B4F2_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD7D:
            switch (_bank) {
                case 2: func_AD7D_b2(); break;
                case 5: func_AD7D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD97:
            switch (_bank) {
                case 2: func_AD97_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB482:
            switch (_bank) {
                case 2: func_B482_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xC018:
            func_C018(); break;
        case 0xC021:
            func_C021(); break;
        case 0xC030:
            func_C030(); break;
        case 0xC045:
            func_C045(); break;
        case 0xC054:
            func_C054(); break;
        case 0xC087:
            func_C087(); break;
        case 0xC08A:
            func_C08A(); break;
        case 0xA01B:
            switch (_bank) {
                case 1: func_A01B_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA020:
            switch (_bank) {
                case 1: func_A020_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA01D:
            switch (_bank) {
                case 1: func_A01D_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA127:
            switch (_bank) {
                case 1: func_A127_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA523:
            switch (_bank) {
                case 1: func_A523_b1(); break;
                case 3: func_A523_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB170:
            switch (_bank) {
                case 1: func_B170_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB173:
            switch (_bank) {
                case 1: func_B173_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB176:
            switch (_bank) {
                case 1: func_B176_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB179:
            switch (_bank) {
                case 1: func_B179_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9A3:
            switch (_bank) {
                case 1: func_B9A3_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB9A5:
            switch (_bank) {
                case 1: func_B9A5_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBAF8:
            switch (_bank) {
                case 1: func_BAF8_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB00:
            switch (_bank) {
                case 1: func_BB00_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB0E:
            switch (_bank) {
                case 1: func_BB0E_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBE5:
            switch (_bank) {
                case 1: func_BBE5_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCE5:
            switch (_bank) {
                case 1: func_BCE5_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDBE:
            switch (_bank) {
                case 1: func_BDBE_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD00:
            switch (_bank) {
                case 1: func_BD00_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD51:
            switch (_bank) {
                case 1: func_BD51_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB934:
            switch (_bank) {
                case 1: func_B934_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC0C:
            switch (_bank) {
                case 1: func_BC0C_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC0F:
            switch (_bank) {
                case 1: func_BC0F_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB34D:
            switch (_bank) {
                case 1: func_B34D_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2AC:
            switch (_bank) {
                case 1: func_B2AC_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2BC:
            switch (_bank) {
                case 1: func_B2BC_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2EB:
            switch (_bank) {
                case 1: func_B2EB_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2F2:
            switch (_bank) {
                case 1: func_B2F2_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2F9:
            switch (_bank) {
                case 1: func_B2F9_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB324:
            switch (_bank) {
                case 1: func_B324_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB3EA:
            switch (_bank) {
                case 1: func_B3EA_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB496:
            switch (_bank) {
                case 1: func_B496_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4AA:
            switch (_bank) {
                case 1: func_B4AA_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4E9:
            switch (_bank) {
                case 1: func_B4E9_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4FB:
            switch (_bank) {
                case 1: func_B4FB_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB692:
            switch (_bank) {
                case 1: func_B692_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB6DF:
            switch (_bank) {
                case 1: func_B6DF_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB752:
            switch (_bank) {
                case 1: func_B752_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB837:
            switch (_bank) {
                case 1: func_B837_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB8F6:
            switch (_bank) {
                case 1: func_B8F6_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCD4:
            switch (_bank) {
                case 1: func_BCD4_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADD0:
            switch (_bank) {
                case 2: func_ADD0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADE7:
            switch (_bank) {
                case 2: func_ADE7_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADF2:
            switch (_bank) {
                case 2: func_ADF2_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB107:
            switch (_bank) {
                case 2: func_B107_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB300:
            switch (_bank) {
                case 2: func_B300_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB306:
            switch (_bank) {
                case 2: func_B306_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB320:
            switch (_bank) {
                case 2: func_B320_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB793:
            switch (_bank) {
                case 2: func_B793_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB799:
            switch (_bank) {
                case 2: func_B799_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA13:
            switch (_bank) {
                case 2: func_BA13_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA2E:
            switch (_bank) {
                case 2: func_BA2E_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC22:
            switch (_bank) {
                case 2: func_BC22_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE5A:
            switch (_bank) {
                case 2: func_BE5A_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA0F4:
            switch (_bank) {
                case 3: func_A0F4_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA191:
            switch (_bank) {
                case 3: func_A191_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA111:
            switch (_bank) {
                case 3: func_A111_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA193:
            switch (_bank) {
                case 3: func_A193_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3B1:
            switch (_bank) {
                case 3: func_A3B1_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3C9:
            switch (_bank) {
                case 3: func_A3C9_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3D7:
            switch (_bank) {
                case 3: func_A3D7_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA3EF:
            switch (_bank) {
                case 3: func_A3EF_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA991:
            switch (_bank) {
                case 3: func_A991_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA994:
            switch (_bank) {
                case 3: func_A994_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA41E:
            switch (_bank) {
                case 3: func_A41E_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA424:
            switch (_bank) {
                case 3: func_A424_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA42D:
            switch (_bank) {
                case 3: func_A42D_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA43A:
            switch (_bank) {
                case 3: func_A43A_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA441:
            switch (_bank) {
                case 3: func_A441_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA45C:
            switch (_bank) {
                case 3: func_A45C_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA462:
            switch (_bank) {
                case 3: func_A462_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA475:
            switch (_bank) {
                case 3: func_A475_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA49B:
            switch (_bank) {
                case 3: func_A49B_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4CE:
            switch (_bank) {
                case 3: func_A4CE_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4D2:
            switch (_bank) {
                case 3: func_A4D2_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4E3:
            switch (_bank) {
                case 3: func_A4E3_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4EA:
            switch (_bank) {
                case 3: func_A4EA_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA506:
            switch (_bank) {
                case 3: func_A506_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA541:
            switch (_bank) {
                case 3: func_A541_b3(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9812:
            switch (_bank) {
                case 4: func_9812_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98A6:
            switch (_bank) {
                case 4: func_98A6_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA4FD:
            switch (_bank) {
                case 5: func_A4FD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA500:
            switch (_bank) {
                case 5: func_A500_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA522:
            switch (_bank) {
                case 5: func_A522_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA52D:
            switch (_bank) {
                case 5: func_A52D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA53F:
            switch (_bank) {
                case 5: func_A53F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA559:
            switch (_bank) {
                case 5: func_A559_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA574:
            switch (_bank) {
                case 5: func_A574_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA594:
            switch (_bank) {
                case 5: func_A594_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5A0:
            switch (_bank) {
                case 5: func_A5A0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5A9:
            switch (_bank) {
                case 5: func_A5A9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5C0:
            switch (_bank) {
                case 5: func_A5C0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA5EC:
            switch (_bank) {
                case 5: func_A5EC_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA607:
            switch (_bank) {
                case 5: func_A607_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA632:
            switch (_bank) {
                case 5: func_A632_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA661:
            switch (_bank) {
                case 5: func_A661_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA686:
            switch (_bank) {
                case 5: func_A686_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA691:
            switch (_bank) {
                case 5: func_A691_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA6A4:
            switch (_bank) {
                case 5: func_A6A4_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA6A6:
            switch (_bank) {
                case 5: func_A6A6_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA6B7:
            switch (_bank) {
                case 5: func_A6B7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA6BE:
            switch (_bank) {
                case 5: func_A6BE_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA6C5:
            switch (_bank) {
                case 5: func_A6C5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA6EA:
            switch (_bank) {
                case 5: func_A6EA_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA70F:
            switch (_bank) {
                case 5: func_A70F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA72F:
            switch (_bank) {
                case 5: func_A72F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA74F:
            switch (_bank) {
                case 5: func_A74F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA76F:
            switch (_bank) {
                case 5: func_A76F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA78F:
            switch (_bank) {
                case 5: func_A78F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA792:
            switch (_bank) {
                case 5: func_A792_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA799:
            switch (_bank) {
                case 5: func_A799_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA7A0:
            switch (_bank) {
                case 5: func_A7A0_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA7D:
            switch (_bank) {
                case 5: func_AA7D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAA9D:
            switch (_bank) {
                case 5: func_AA9D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAABD:
            switch (_bank) {
                case 5: func_AABD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAADD:
            switch (_bank) {
                case 5: func_AADD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAAFD:
            switch (_bank) {
                case 5: func_AAFD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB09:
            switch (_bank) {
                case 5: func_AB09_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB27:
            switch (_bank) {
                case 5: func_AB27_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB45:
            switch (_bank) {
                case 5: func_AB45_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB4D:
            switch (_bank) {
                case 5: func_AB4D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB41:
            switch (_bank) {
                case 5: func_AB41_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA1B:
            switch (_bank) {
                case 5: func_BA1B_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA21:
            switch (_bank) {
                case 5: func_BA21_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBA3F:
            switch (_bank) {
                case 5: func_BA3F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB979:
            switch (_bank) {
                case 5: func_B979_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB2B2:
            switch (_bank) {
                case 5: func_B2B2_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7B7:
            switch (_bank) {
                case 5: func_B7B7_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB49:
            switch (_bank) {
                case 5: func_AB49_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB59:
            switch (_bank) {
                case 5: func_AB59_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB79:
            switch (_bank) {
                case 5: func_AB79_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAB8F:
            switch (_bank) {
                case 5: func_AB8F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xABA5:
            switch (_bank) {
                case 5: func_ABA5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xABD9:
            switch (_bank) {
                case 5: func_ABD9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xACB3:
            switch (_bank) {
                case 5: func_ACB3_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD2D:
            switch (_bank) {
                case 5: func_AD2D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD81:
            switch (_bank) {
                case 5: func_AD81_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD85:
            switch (_bank) {
                case 5: func_AD85_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xABC5:
            switch (_bank) {
                case 5: func_ABC5_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC19:
            switch (_bank) {
                case 5: func_AC19_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC6F:
            switch (_bank) {
                case 5: func_AC6F_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAC87:
            switch (_bank) {
                case 5: func_AC87_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xACAF:
            switch (_bank) {
                case 5: func_ACAF_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xACCB:
            switch (_bank) {
                case 5: func_ACCB_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xACF9:
            switch (_bank) {
                case 5: func_ACF9_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD13:
            switch (_bank) {
                case 5: func_AD13_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD57:
            switch (_bank) {
                case 5: func_AD57_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xAD9D:
            switch (_bank) {
                case 5: func_AD9D_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xADBD:
            switch (_bank) {
                case 5: func_ADBD_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9BE5:
            switch (_bank) {
                case 1: func_9BE5_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9CE5:
            switch (_bank) {
                case 1: func_9CE5_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x99A3:
            switch (_bank) {
                case 1: func_99A3_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9AF8:
            switch (_bank) {
                case 1: func_9AF8_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C63:
            switch (_bank) {
                case 1: func_9C63_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC63:
            switch (_bank) {
                case 1: func_BC63_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9CD4:
            switch (_bank) {
                case 1: func_9CD4_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB366:
            switch (_bank) {
                case 2: func_B366_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB4E8:
            switch (_bank) {
                case 2: func_B4E8_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB842:
            switch (_bank) {
                case 2: func_B842_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCA0:
            switch (_bank) {
                case 2: func_BCA0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE54:
            switch (_bank) {
                case 2: func_BE54_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBCE0:
            switch (_bank) {
                case 2: func_BCE0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBB1:
            switch (_bank) {
                case 2: func_BBB1_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBBC4:
            switch (_bank) {
                case 2: func_BBC4_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC2C:
            switch (_bank) {
                case 2: func_BC2C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC54:
            switch (_bank) {
                case 2: func_BC54_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC70:
            switch (_bank) {
                case 2: func_BC70_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC91:
            switch (_bank) {
                case 2: func_BC91_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC96:
            switch (_bank) {
                case 2: func_BC96_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD20:
            switch (_bank) {
                case 2: func_BD20_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD63:
            switch (_bank) {
                case 2: func_BD63_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD8E:
            switch (_bank) {
                case 2: func_BD8E_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBDE0:
            switch (_bank) {
                case 2: func_BDE0_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE00:
            switch (_bank) {
                case 2: func_BE00_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE25:
            switch (_bank) {
                case 2: func_BE25_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE4C:
            switch (_bank) {
                case 2: func_BE4C_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE55:
            switch (_bank) {
                case 2: func_BE55_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBC1D:
            switch (_bank) {
                case 2: func_BC1D_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD95:
            switch (_bank) {
                case 2: func_BD95_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBD98:
            switch (_bank) {
                case 2: func_BD98_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBE7B:
            switch (_bank) {
                case 2: func_BE7B_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x987F:
            switch (_bank) {
                case 4: func_987F_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x8D00:
            switch (_bank) {
                case 5: func_8D00_b5(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C08:
            switch (_bank) {
                case 1: func_9C08_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C18:
            switch (_bank) {
                case 1: func_9C18_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x9C1A:
            switch (_bank) {
                case 1: func_9C1A_b1(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xB7D9:
            switch (_bank) {
                case 2: func_B7D9_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xA9BE:
            switch (_bank) {
                case 2: func_A9BE_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB24:
            switch (_bank) {
                case 2: func_BB24_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0xBB95:
            switch (_bank) {
                case 2: func_BB95_b2(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        case 0x98A3:
            switch (_bank) {
                case 4: func_98A3_b4(); break;
                default: return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
            }
            break;
        default:
            return nes_interp_dispatch_bank(_cpu_addr, addr, _bank);
    }
    return 1;
}

/* Legacy entry: no caller-bank hint (JMP-indirect, interp, debug server).
 * Depth-counted so deferred JMP-tail targets get driven (see runtime.c). */
int call_by_address(uint16_t addr) { return nes_dispatch_call(addr, -1); }
