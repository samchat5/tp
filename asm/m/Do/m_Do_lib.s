.include "macros.inc"

.section .text, "ax" # 8001513c


.global mDoLib_setResTimgObj
mDoLib_setResTimgObj:
/* 8001513C 0001207C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80015140 00012080  7C 08 02 A6 */	mflr r0
/* 80015144 00012084  90 01 00 44 */	stw r0, 0x44(r1)
/* 80015148 00012088  39 61 00 40 */	addi r11, r1, 0x40
/* 8001514C 0001208C  48 34 D0 91 */	bl _savegpr_29
/* 80015150 00012090  7C 7F 1B 78 */	mr r31, r3
/* 80015154 00012094  7C 9D 23 78 */	mr r29, r4
/* 80015158 00012098  7C BE 2B 78 */	mr r30, r5
/* 8001515C 0001209C  88 03 00 08 */	lbz r0, 8(r3)
/* 80015160 000120A0  28 00 00 00 */	cmplwi r0, 0
/* 80015164 000120A4  41 82 00 54 */	beq lbl_800151B8
/* 80015168 000120A8  7C C3 33 78 */	mr r3, r6
/* 8001516C 000120AC  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 80015170 000120B0  7C 9F 02 14 */	add r4, r31, r0
/* 80015174 000120B4  88 BF 00 09 */	lbz r5, 9(r31)
/* 80015178 000120B8  A0 DF 00 0A */	lhz r6, 0xa(r31)
/* 8001517C 000120BC  48 34 92 ED */	bl GXInitTlutObj
/* 80015180 000120C0  93 C1 00 08 */	stw r30, 8(r1)
/* 80015184 000120C4  7F A3 EB 78 */	mr r3, r29
/* 80015188 000120C8  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 8001518C 000120CC  7C 9F 02 14 */	add r4, r31, r0
/* 80015190 000120D0  A0 BF 00 02 */	lhz r5, 2(r31)
/* 80015194 000120D4  A0 DF 00 04 */	lhz r6, 4(r31)
/* 80015198 000120D8  88 FF 00 00 */	lbz r7, 0(r31)
/* 8001519C 000120DC  89 1F 00 06 */	lbz r8, 6(r31)
/* 800151A0 000120E0  89 3F 00 07 */	lbz r9, 7(r31)
/* 800151A4 000120E4  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 800151A8 000120E8  20 00 00 01 */	subfic r0, r0, 1
/* 800151AC 000120EC  54 0A 0F FE */	srwi r10, r0, 0x1f
/* 800151B0 000120F0  48 34 8E DD */	bl GXInitTexObjCI
/* 800151B4 000120F4  48 00 00 34 */	b lbl_800151E8
lbl_800151B8:
/* 800151B8 000120F8  7F A3 EB 78 */	mr r3, r29
/* 800151BC 000120FC  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 800151C0 00012100  7C 9F 02 14 */	add r4, r31, r0
/* 800151C4 00012104  A0 BF 00 02 */	lhz r5, 2(r31)
/* 800151C8 00012108  A0 DF 00 04 */	lhz r6, 4(r31)
/* 800151CC 0001210C  88 FF 00 00 */	lbz r7, 0(r31)
/* 800151D0 00012110  89 1F 00 06 */	lbz r8, 6(r31)
/* 800151D4 00012114  89 3F 00 07 */	lbz r9, 7(r31)
/* 800151D8 00012118  88 1F 00 18 */	lbz r0, 0x18(r31)
/* 800151DC 0001211C  20 00 00 01 */	subfic r0, r0, 1
/* 800151E0 00012120  54 0A 0F FE */	srwi r10, r0, 0x1f
/* 800151E4 00012124  48 34 8C 5D */	bl GXInitTexObj
lbl_800151E8:
/* 800151E8 00012128  7F A3 EB 78 */	mr r3, r29
/* 800151EC 0001212C  88 9F 00 14 */	lbz r4, 0x14(r31)
/* 800151F0 00012130  88 BF 00 15 */	lbz r5, 0x15(r31)
/* 800151F4 00012134  C0 42 81 70 */	lfs f2, lbl_80451B70-_SDA2_BASE_(r2)
/* 800151F8 00012138  88 1F 00 16 */	lbz r0, 0x16(r31)
/* 800151FC 0001213C  7C 00 07 74 */	extsb r0, r0
/* 80015200 00012140  C8 82 81 78 */	lfd f4, lbl_80451B78-_SDA2_BASE_(r2)
/* 80015204 00012144  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80015208 00012148  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001520C 0001214C  3C C0 43 30 */	lis r6, 0x4330
/* 80015210 00012150  90 C1 00 10 */	stw r6, 0x10(r1)
/* 80015214 00012154  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80015218 00012158  EC 00 20 28 */	fsubs f0, f0, f4
/* 8001521C 0001215C  EC 22 00 32 */	fmuls f1, f2, f0
/* 80015220 00012160  88 1F 00 17 */	lbz r0, 0x17(r31)
/* 80015224 00012164  7C 00 07 74 */	extsb r0, r0
/* 80015228 00012168  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8001522C 0001216C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80015230 00012170  90 C1 00 18 */	stw r6, 0x18(r1)
/* 80015234 00012174  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 80015238 00012178  EC 00 20 28 */	fsubs f0, f0, f4
/* 8001523C 0001217C  EC 42 00 32 */	fmuls f2, f2, f0
/* 80015240 00012180  C0 62 81 74 */	lfs f3, lbl_80451B74-_SDA2_BASE_(r2)
/* 80015244 00012184  A8 1F 00 1A */	lha r0, 0x1a(r31)
/* 80015248 00012188  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8001524C 0001218C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80015250 00012190  90 C1 00 20 */	stw r6, 0x20(r1)
/* 80015254 00012194  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80015258 00012198  EC 00 20 28 */	fsubs f0, f0, f4
/* 8001525C 0001219C  EC 63 00 32 */	fmuls f3, f3, f0
/* 80015260 000121A0  88 DF 00 12 */	lbz r6, 0x12(r31)
/* 80015264 000121A4  88 FF 00 11 */	lbz r7, 0x11(r31)
/* 80015268 000121A8  89 1F 00 13 */	lbz r8, 0x13(r31)
/* 8001526C 000121AC  48 34 8E 69 */	bl GXInitTexObjLOD
/* 80015270 000121B0  88 7F 00 08 */	lbz r3, 8(r31)
/* 80015274 000121B4  39 61 00 40 */	addi r11, r1, 0x40
/* 80015278 000121B8  48 34 CF B1 */	bl _restgpr_29
/* 8001527C 000121BC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80015280 000121C0  7C 08 03 A6 */	mtlr r0
/* 80015284 000121C4  38 21 00 40 */	addi r1, r1, 0x40
/* 80015288 000121C8  4E 80 00 20 */	blr 

.global mDoLib_clipper_NS_setup
mDoLib_clipper_NS_setup:
/* 8001528C 000121CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80015290 000121D0  7C 08 02 A6 */	mflr r0
/* 80015294 000121D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80015298 000121D8  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 8001529C 000121DC  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 800152A0 000121E0  FF E0 08 90 */	fmr f31, f1
/* 800152A4 000121E4  3C 60 80 3E */	lis r3, lbl_803DD8E4@ha
/* 800152A8 000121E8  38 63 D8 E4 */	addi r3, r3, lbl_803DD8E4@l
/* 800152AC 000121EC  D3 E3 00 4C */	stfs f31, 0x4c(r3)
/* 800152B0 000121F0  D0 43 00 50 */	stfs f2, 0x50(r3)
/* 800152B4 000121F4  D0 63 00 54 */	stfs f3, 0x54(r3)
/* 800152B8 000121F8  D0 83 00 58 */	stfs f4, 0x58(r3)
/* 800152BC 000121FC  D0 8D 86 F0 */	stfs f4, lbl_80450C70-_SDA_BASE_(r13)
/* 800152C0 00012200  48 25 E4 CD */	bl J3DUClipper_NS_calcViewFrustum
/* 800152C4 00012204  C0 02 81 80 */	lfs f0, lbl_80451B80-_SDA2_BASE_(r2)
/* 800152C8 00012208  EC 00 07 F2 */	fmuls f0, f0, f31
/* 800152CC 0001220C  FC 00 00 1E */	fctiwz f0, f0
/* 800152D0 00012210  D8 01 00 08 */	stfd f0, 8(r1)
/* 800152D4 00012214  80 01 00 0C */	lwz r0, 0xc(r1)
/* 800152D8 00012218  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 800152DC 0001221C  3C 60 80 44 */	lis r3, lbl_80439A20@ha
/* 800152E0 00012220  38 83 9A 20 */	addi r4, r3, lbl_80439A20@l
/* 800152E4 00012224  7C 64 02 14 */	add r3, r4, r0
/* 800152E8 00012228  C0 23 00 04 */	lfs f1, 4(r3)
/* 800152EC 0001222C  7C 04 04 2E */	lfsx f0, r4, r0
/* 800152F0 00012230  EC 01 00 24 */	fdivs f0, f1, f0
/* 800152F4 00012234  D0 0D 86 F4 */	stfs f0, lbl_80450C74-_SDA_BASE_(r13)
/* 800152F8 00012238  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 800152FC 0001223C  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 80015300 00012240  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80015304 00012244  7C 08 03 A6 */	mtlr r0
/* 80015308 00012248  38 21 00 20 */	addi r1, r1, 0x20
/* 8001530C 0001224C  4E 80 00 20 */	blr 

.global mDoLib_project
mDoLib_project:
/* 80015310 00012250  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80015314 00012254  7C 08 02 A6 */	mflr r0
/* 80015318 00012258  90 01 00 34 */	stw r0, 0x34(r1)
/* 8001531C 0001225C  39 61 00 30 */	addi r11, r1, 0x30
/* 80015320 00012260  48 34 CE BD */	bl _savegpr_29
/* 80015324 00012264  7C 7D 1B 78 */	mr r29, r3
/* 80015328 00012268  7C 9E 23 78 */	mr r30, r4
/* 8001532C 0001226C  3C 60 80 40 */	lis r3, lbl_804061C0@ha
/* 80015330 00012270  3B E3 61 C0 */	addi r31, r3, lbl_804061C0@l
/* 80015334 00012274  80 7F 61 B0 */	lwz r3, 0x61b0(r31)
/* 80015338 00012278  28 03 00 00 */	cmplwi r3, 0
/* 8001533C 0001227C  40 82 00 18 */	bne lbl_80015354
/* 80015340 00012280  C0 02 81 84 */	lfs f0, lbl_80451B84-_SDA2_BASE_(r2)
/* 80015344 00012284  D0 1E 00 00 */	stfs f0, 0(r30)
/* 80015348 00012288  D0 1E 00 04 */	stfs f0, 4(r30)
/* 8001534C 0001228C  D0 1E 00 08 */	stfs f0, 8(r30)
/* 80015350 00012290  48 00 01 84 */	b lbl_800154D4
lbl_80015354:
/* 80015354 00012294  38 63 01 A0 */	addi r3, r3, 0x1a0
/* 80015358 00012298  7F A4 EB 78 */	mr r4, r29
/* 8001535C 0001229C  38 A1 00 08 */	addi r5, r1, 8
/* 80015360 000122A0  48 33 1A 0D */	bl PSMTXMultVec
/* 80015364 000122A4  80 7F 61 B0 */	lwz r3, 0x61b0(r31)
/* 80015368 000122A8  C0 83 01 DC */	lfs f4, 0x1dc(r3)
/* 8001536C 000122AC  C0 3D 00 08 */	lfs f1, 8(r29)
/* 80015370 000122B0  C0 03 01 D8 */	lfs f0, 0x1d8(r3)
/* 80015374 000122B4  EC 61 00 32 */	fmuls f3, f1, f0
/* 80015378 000122B8  C0 3D 00 00 */	lfs f1, 0(r29)
/* 8001537C 000122BC  C0 03 01 D0 */	lfs f0, 0x1d0(r3)
/* 80015380 000122C0  EC 41 00 32 */	fmuls f2, f1, f0
/* 80015384 000122C4  C0 3D 00 04 */	lfs f1, 4(r29)
/* 80015388 000122C8  C0 03 01 D4 */	lfs f0, 0x1d4(r3)
/* 8001538C 000122CC  EC 01 00 32 */	fmuls f0, f1, f0
/* 80015390 000122D0  EC 02 00 2A */	fadds f0, f2, f0
/* 80015394 000122D4  EC 03 00 2A */	fadds f0, f3, f0
/* 80015398 000122D8  EC 44 00 2A */	fadds f2, f4, f0
/* 8001539C 000122DC  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 800153A0 000122E0  C0 02 81 84 */	lfs f0, lbl_80451B84-_SDA2_BASE_(r2)
/* 800153A4 000122E4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 800153A8 000122E8  4C 41 13 82 */	cror 2, 1, 2
/* 800153AC 000122EC  40 82 00 08 */	bne lbl_800153B4
/* 800153B0 000122F0  D0 01 00 10 */	stfs f0, 0x10(r1)
lbl_800153B4:
/* 800153B4 000122F4  C0 02 81 84 */	lfs f0, lbl_80451B84-_SDA2_BASE_(r2)
/* 800153B8 000122F8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 800153BC 000122FC  4C 40 13 82 */	cror 2, 0, 2
/* 800153C0 00012300  40 82 00 3C */	bne lbl_800153FC
/* 800153C4 00012304  FC 00 10 00 */	fcmpu cr0, f0, f2
/* 800153C8 00012308  40 82 00 18 */	bne lbl_800153E0
/* 800153CC 0001230C  C0 22 81 88 */	lfs f1, lbl_80451B88-_SDA2_BASE_(r2)
/* 800153D0 00012310  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 800153D4 00012314  EC 01 00 32 */	fmuls f0, f1, f0
/* 800153D8 00012318  D0 1E 00 08 */	stfs f0, 8(r30)
/* 800153DC 0001231C  48 00 00 18 */	b lbl_800153F4
lbl_800153E0:
/* 800153E0 00012320  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 800153E4 00012324  C0 02 81 8C */	lfs f0, lbl_80451B8C-_SDA2_BASE_(r2)
/* 800153E8 00012328  EC 00 10 24 */	fdivs f0, f0, f2
/* 800153EC 0001232C  EC 01 00 32 */	fmuls f0, f1, f0
/* 800153F0 00012330  D0 1E 00 08 */	stfs f0, 8(r30)
lbl_800153F4:
/* 800153F4 00012334  C0 62 81 88 */	lfs f3, lbl_80451B88-_SDA2_BASE_(r2)
/* 800153F8 00012338  48 00 00 18 */	b lbl_80015410
lbl_800153FC:
/* 800153FC 0001233C  C0 02 81 8C */	lfs f0, lbl_80451B8C-_SDA2_BASE_(r2)
/* 80015400 00012340  EC 60 10 24 */	fdivs f3, f0, f2
/* 80015404 00012344  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80015408 00012348  EC 00 00 F2 */	fmuls f0, f0, f3
/* 8001540C 0001234C  D0 1E 00 08 */	stfs f0, 8(r30)
lbl_80015410:
/* 80015410 00012350  3C 60 80 40 */	lis r3, lbl_804061C0@ha
/* 80015414 00012354  38 63 61 C0 */	addi r3, r3, lbl_804061C0@l
/* 80015418 00012358  80 63 61 AC */	lwz r3, 0x61ac(r3)
/* 8001541C 0001235C  C0 02 81 84 */	lfs f0, lbl_80451B84-_SDA2_BASE_(r2)
/* 80015420 00012360  C0 23 00 00 */	lfs f1, 0(r3)
/* 80015424 00012364  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80015428 00012368  41 82 00 2C */	beq lbl_80015454
/* 8001542C 0001236C  C0 42 81 8C */	lfs f2, lbl_80451B8C-_SDA2_BASE_(r2)
/* 80015430 00012370  C0 02 81 90 */	lfs f0, lbl_80451B90-_SDA2_BASE_(r2)
/* 80015434 00012374  EC 20 00 72 */	fmuls f1, f0, f1
/* 80015438 00012378  C0 03 00 08 */	lfs f0, 8(r3)
/* 8001543C 0001237C  EC 01 00 2A */	fadds f0, f1, f0
/* 80015440 00012380  EC 22 00 32 */	fmuls f1, f2, f0
/* 80015444 00012384  C0 02 81 94 */	lfs f0, lbl_80451B94-_SDA2_BASE_(r2)
/* 80015448 00012388  EC 81 00 28 */	fsubs f4, f1, f0
/* 8001544C 0001238C  C0 C2 81 98 */	lfs f6, lbl_80451B98-_SDA2_BASE_(r2)
/* 80015450 00012390  48 00 00 0C */	b lbl_8001545C
lbl_80015454:
/* 80015454 00012394  FC 80 08 90 */	fmr f4, f1
/* 80015458 00012398  C0 C3 00 08 */	lfs f6, 8(r3)
lbl_8001545C:
/* 8001545C 0001239C  C0 02 81 84 */	lfs f0, lbl_80451B84-_SDA2_BASE_(r2)
/* 80015460 000123A0  C0 23 00 04 */	lfs f1, 4(r3)
/* 80015464 000123A4  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 80015468 000123A8  41 82 00 2C */	beq lbl_80015494
/* 8001546C 000123AC  C0 42 81 8C */	lfs f2, lbl_80451B8C-_SDA2_BASE_(r2)
/* 80015470 000123B0  C0 02 81 90 */	lfs f0, lbl_80451B90-_SDA2_BASE_(r2)
/* 80015474 000123B4  EC 20 00 72 */	fmuls f1, f0, f1
/* 80015478 000123B8  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 8001547C 000123BC  EC 01 00 2A */	fadds f0, f1, f0
/* 80015480 000123C0  EC 22 00 32 */	fmuls f1, f2, f0
/* 80015484 000123C4  C0 02 81 9C */	lfs f0, lbl_80451B9C-_SDA2_BASE_(r2)
/* 80015488 000123C8  EC A1 00 28 */	fsubs f5, f1, f0
/* 8001548C 000123CC  C0 E2 81 A0 */	lfs f7, lbl_80451BA0-_SDA2_BASE_(r2)
/* 80015490 000123D0  48 00 00 0C */	b lbl_8001549C
lbl_80015494:
/* 80015494 000123D4  FC A0 08 90 */	fmr f5, f1
/* 80015498 000123D8  C0 E3 00 0C */	lfs f7, 0xc(r3)
lbl_8001549C:
/* 8001549C 000123DC  C0 42 81 8C */	lfs f2, lbl_80451B8C-_SDA2_BASE_(r2)
/* 800154A0 000123E0  C0 01 00 08 */	lfs f0, 8(r1)
/* 800154A4 000123E4  EC 00 00 F2 */	fmuls f0, f0, f3
/* 800154A8 000123E8  EC 02 00 2A */	fadds f0, f2, f0
/* 800154AC 000123EC  EC 06 00 32 */	fmuls f0, f6, f0
/* 800154B0 000123F0  EC 04 00 2A */	fadds f0, f4, f0
/* 800154B4 000123F4  D0 1E 00 00 */	stfs f0, 0(r30)
/* 800154B8 000123F8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 800154BC 000123FC  FC 00 18 50 */	fneg f0, f3
/* 800154C0 00012400  EC 01 00 32 */	fmuls f0, f1, f0
/* 800154C4 00012404  EC 02 00 2A */	fadds f0, f2, f0
/* 800154C8 00012408  EC 07 00 32 */	fmuls f0, f7, f0
/* 800154CC 0001240C  EC 05 00 2A */	fadds f0, f5, f0
/* 800154D0 00012410  D0 1E 00 04 */	stfs f0, 4(r30)
lbl_800154D4:
/* 800154D4 00012414  39 61 00 30 */	addi r11, r1, 0x30
/* 800154D8 00012418  48 34 CD 51 */	bl _restgpr_29
/* 800154DC 0001241C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 800154E0 00012420  7C 08 03 A6 */	mtlr r0
/* 800154E4 00012424  38 21 00 30 */	addi r1, r1, 0x30
/* 800154E8 00012428  4E 80 00 20 */	blr 

.global mDoLib_pos2camera
mDoLib_pos2camera:
/* 800154EC 0001242C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800154F0 00012430  7C 08 02 A6 */	mflr r0
/* 800154F4 00012434  90 01 00 14 */	stw r0, 0x14(r1)
/* 800154F8 00012438  7C 60 1B 78 */	mr r0, r3
/* 800154FC 0001243C  7C 85 23 78 */	mr r5, r4
/* 80015500 00012440  3C 60 80 40 */	lis r3, lbl_804061C0@ha
/* 80015504 00012444  38 63 61 C0 */	addi r3, r3, lbl_804061C0@l
/* 80015508 00012448  80 63 61 B0 */	lwz r3, 0x61b0(r3)
/* 8001550C 0001244C  28 03 00 00 */	cmplwi r3, 0
/* 80015510 00012450  40 82 00 18 */	bne lbl_80015528
/* 80015514 00012454  C0 02 81 84 */	lfs f0, lbl_80451B84-_SDA2_BASE_(r2)
/* 80015518 00012458  D0 05 00 00 */	stfs f0, 0(r5)
/* 8001551C 0001245C  D0 05 00 04 */	stfs f0, 4(r5)
/* 80015520 00012460  D0 05 00 08 */	stfs f0, 8(r5)
/* 80015524 00012464  48 00 00 10 */	b lbl_80015534
lbl_80015528:
/* 80015528 00012468  38 63 01 40 */	addi r3, r3, 0x140
/* 8001552C 0001246C  7C 04 03 78 */	mr r4, r0
/* 80015530 00012470  48 33 18 3D */	bl PSMTXMultVec
lbl_80015534:
/* 80015534 00012474  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80015538 00012478  7C 08 03 A6 */	mtlr r0
/* 8001553C 0001247C  38 21 00 10 */	addi r1, r1, 0x10
/* 80015540 00012480  4E 80 00 20 */	blr 
/* 80015544 00012484  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80015548 00012488  7C 08 02 A6 */	mflr r0
/* 8001554C 0001248C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80015550 00012490  3C 60 80 3A */	lis r3, lbl_803A3498@ha
/* 80015554 00012494  38 03 34 98 */	addi r0, r3, lbl_803A3498@l
/* 80015558 00012498  3C 60 80 3E */	lis r3, lbl_803DD8E4@ha
/* 8001555C 0001249C  94 03 D8 E4 */	stwu r0, lbl_803DD8E4@l(r3)
/* 80015560 000124A0  48 25 E2 19 */	bl J3DUClipper_NS_init
/* 80015564 000124A4  3C 60 80 3E */	lis r3, lbl_803DD8E4@ha
/* 80015568 000124A8  38 63 D8 E4 */	addi r3, r3, lbl_803DD8E4@l
.global J3DUClipper_NS_dtor
/* 8001556C 000124AC  3C 80 80 01 */	lis r4, J3DUClipper_NS_dtor@ha
.global J3DUClipper_NS_dtor
/* 80015570 000124B0  38 84 55 90 */	addi r4, r4, J3DUClipper_NS_dtor@l
/* 80015574 000124B4  3C A0 80 3E */	lis r5, lbl_803DD8D8@ha
/* 80015578 000124B8  38 A5 D8 D8 */	addi r5, r5, lbl_803DD8D8@l
/* 8001557C 000124BC  48 34 C6 A9 */	bl func_80361C24
/* 80015580 000124C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80015584 000124C4  7C 08 03 A6 */	mtlr r0
/* 80015588 000124C8  38 21 00 10 */	addi r1, r1, 0x10
/* 8001558C 000124CC  4E 80 00 20 */	blr 
.global J3DUClipper_NS_dtor
J3DUClipper_NS_dtor:
/* 80015590 000124D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80015594 000124D4  7C 08 02 A6 */	mflr r0
/* 80015598 000124D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001559C 000124DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800155A0 000124E0  7C 7F 1B 79 */	or. r31, r3, r3
/* 800155A4 000124E4  41 82 00 1C */	beq lbl_800155C0
/* 800155A8 000124E8  3C A0 80 3A */	lis r5, lbl_803A3498@ha
/* 800155AC 000124EC  38 05 34 98 */	addi r0, r5, lbl_803A3498@l
/* 800155B0 000124F0  90 1F 00 00 */	stw r0, 0(r31)
/* 800155B4 000124F4  7C 80 07 35 */	extsh. r0, r4
/* 800155B8 000124F8  40 81 00 08 */	ble lbl_800155C0
/* 800155BC 000124FC  48 2B 97 81 */	bl __dl
lbl_800155C0:
/* 800155C0 00012500  7F E3 FB 78 */	mr r3, r31
/* 800155C4 00012504  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800155C8 00012508  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800155CC 0001250C  7C 08 03 A6 */	mtlr r0
/* 800155D0 00012510  38 21 00 10 */	addi r1, r1, 0x10
/* 800155D4 00012514  4E 80 00 20 */	blr 

