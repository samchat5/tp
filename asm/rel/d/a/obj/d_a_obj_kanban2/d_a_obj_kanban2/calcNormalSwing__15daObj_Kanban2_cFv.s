lbl_80582F40:
/* 80582F40  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80582F44  7C 08 02 A6 */	mflr r0
/* 80582F48  90 01 00 64 */	stw r0, 0x64(r1)
/* 80582F4C  39 61 00 60 */	addi r11, r1, 0x60
/* 80582F50  4B DD F2 81 */	bl _savegpr_26
/* 80582F54  7C 7B 1B 78 */	mr r27, r3
/* 80582F58  3C 60 80 58 */	lis r3, lit_3970@ha /* 0x80585620@ha */
/* 80582F5C  3B E3 56 20 */	addi r31, r3, lit_3970@l /* 0x80585620@l */
/* 80582F60  3B C0 00 00 */	li r30, 0
/* 80582F64  3B A0 00 00 */	li r29, 0
/* 80582F68  80 1B 06 1C */	lwz r0, 0x61c(r27)
/* 80582F6C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80582F70  41 82 02 78 */	beq lbl_805831E8
/* 80582F74  38 7B 08 84 */	addi r3, r27, 0x884
/* 80582F78  4B B0 16 E1 */	bl ChkCoHit__12dCcD_GObjInfFv
/* 80582F7C  28 03 00 00 */	cmplwi r3, 0
/* 80582F80  41 82 02 68 */	beq lbl_805831E8
/* 80582F84  38 7B 08 84 */	addi r3, r27, 0x884
/* 80582F88  4B B0 17 69 */	bl GetCoHitObj__12dCcD_GObjInfFv
/* 80582F8C  4B CE 0A BD */	bl GetAc__8cCcD_ObjFv
/* 80582F90  A8 03 00 08 */	lha r0, 8(r3)
/* 80582F94  2C 00 00 EE */	cmpwi r0, 0xee
/* 80582F98  40 82 02 50 */	bne lbl_805831E8
/* 80582F9C  C0 1B 04 D0 */	lfs f0, 0x4d0(r27)
/* 80582FA0  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80582FA4  C0 3B 04 D4 */	lfs f1, 0x4d4(r27)
/* 80582FA8  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 80582FAC  C0 1B 04 D8 */	lfs f0, 0x4d8(r27)
/* 80582FB0  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80582FB4  80 7B 06 1C */	lwz r3, 0x61c(r27)
/* 80582FB8  70 60 0F 0F */	andi. r0, r3, 0xf0f
/* 80582FBC  41 82 00 14 */	beq lbl_80582FD0
/* 80582FC0  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80582FC4  EC 01 00 2A */	fadds f0, f1, f0
/* 80582FC8  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80582FCC  48 00 00 18 */	b lbl_80582FE4
lbl_80582FD0:
/* 80582FD0  70 60 30 F0 */	andi. r0, r3, 0x30f0
/* 80582FD4  41 82 00 10 */	beq lbl_80582FE4
/* 80582FD8  C0 1F 00 80 */	lfs f0, 0x80(r31)
/* 80582FDC  EC 01 00 2A */	fadds f0, f1, f0
/* 80582FE0  D0 01 00 20 */	stfs f0, 0x20(r1)
lbl_80582FE4:
/* 80582FE4  38 9B 08 48 */	addi r4, r27, 0x848
/* 80582FE8  38 61 00 1C */	addi r3, r1, 0x1c
/* 80582FEC  7C 65 1B 78 */	mr r5, r3
/* 80582FF0  4B DC 40 A1 */	bl PSVECAdd
/* 80582FF4  38 7B 04 D0 */	addi r3, r27, 0x4d0
/* 80582FF8  38 81 00 1C */	addi r4, r1, 0x1c
/* 80582FFC  4B CE DC 79 */	bl cLib_targetAngleX__FPC4cXyzPC4cXyz
/* 80583000  7C 63 00 D0 */	neg r3, r3
/* 80583004  38 03 40 00 */	addi r0, r3, 0x4000
/* 80583008  7C 1A 07 34 */	extsh r26, r0
/* 8058300C  38 7B 04 D0 */	addi r3, r27, 0x4d0
/* 80583010  38 81 00 1C */	addi r4, r1, 0x1c
/* 80583014  4B CE DB F1 */	bl cLib_targetAngleY__FPC3VecPC3Vec
/* 80583018  C8 3F 00 78 */	lfd f1, 0x78(r31)
/* 8058301C  6F 40 80 00 */	xoris r0, r26, 0x8000
/* 80583020  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80583024  3C 00 43 30 */	lis r0, 0x4330
/* 80583028  90 01 00 28 */	stw r0, 0x28(r1)
/* 8058302C  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 80583030  EC 00 08 28 */	fsubs f0, f0, f1
/* 80583034  3C 80 80 44 */	lis r4, sincosTable___5JMath@ha /* 0x80439A20@ha */
/* 80583038  38 84 9A 20 */	addi r4, r4, sincosTable___5JMath@l /* 0x80439A20@l */
/* 8058303C  54 60 04 38 */	rlwinm r0, r3, 0, 0x10, 0x1c
/* 80583040  7C 64 02 14 */	add r3, r4, r0
/* 80583044  C0 23 00 04 */	lfs f1, 4(r3)
/* 80583048  EC 00 00 72 */	fmuls f0, f0, f1
/* 8058304C  FC 00 00 1E */	fctiwz f0, f0
/* 80583050  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80583054  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 80583058  C0 1F 00 84 */	lfs f0, 0x84(r31)
/* 8058305C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80583060  FC 00 02 10 */	fabs f0, f0
/* 80583064  FC 00 00 18 */	frsp f0, f0
/* 80583068  FC 00 00 1E */	fctiwz f0, f0
/* 8058306C  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 80583070  83 81 00 3C */	lwz r28, 0x3c(r1)
/* 80583074  7F A3 07 34 */	extsh r3, r29
/* 80583078  4B DE 20 59 */	bl abs
/* 8058307C  7F 9E 07 34 */	extsh r30, r28
/* 80583080  7C 03 F0 00 */	cmpw r3, r30
/* 80583084  40 81 00 F4 */	ble lbl_80583178
/* 80583088  7F 43 D3 78 */	mr r3, r26
/* 8058308C  4B DE 20 45 */	bl abs
/* 80583090  2C 03 08 00 */	cmpwi r3, 0x800
/* 80583094  40 81 00 E4 */	ble lbl_80583178
/* 80583098  88 1B 06 27 */	lbz r0, 0x627(r27)
/* 8058309C  28 00 00 14 */	cmplwi r0, 0x14
/* 805830A0  41 80 00 C0 */	blt lbl_80583160
/* 805830A4  80 7B 06 1C */	lwz r3, 0x61c(r27)
/* 805830A8  70 64 15 C3 */	andi. r4, r3, 0x15c3
/* 805830AC  38 00 EA 3C */	li r0, -5572
/* 805830B0  7C 60 00 38 */	and r0, r3, r0
/* 805830B4  90 1B 06 1C */	stw r0, 0x61c(r27)
/* 805830B8  41 82 00 24 */	beq lbl_805830DC
/* 805830BC  80 1B 04 E4 */	lwz r0, 0x4e4(r27)
/* 805830C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 805830C4  A0 1B 04 E8 */	lhz r0, 0x4e8(r27)
/* 805830C8  B0 01 00 18 */	sth r0, 0x18(r1)
/* 805830CC  7F 63 DB 78 */	mr r3, r27
/* 805830D0  64 84 80 00 */	oris r4, r4, 0x8000
/* 805830D4  38 A1 00 14 */	addi r5, r1, 0x14
/* 805830D8  4B FF E8 E5 */	bl createBreakParts__15daObj_Kanban2_cFUl5csXyz
lbl_805830DC:
/* 805830DC  80 7B 06 1C */	lwz r3, 0x61c(r27)
/* 805830E0  70 7A 2A 3C */	andi. r26, r3, 0x2a3c
/* 805830E4  38 00 D5 C3 */	li r0, -10813
/* 805830E8  7C 60 00 38 */	and r0, r3, r0
/* 805830EC  90 1B 06 1C */	stw r0, 0x61c(r27)
/* 805830F0  7F 63 DB 78 */	mr r3, r27
/* 805830F4  4B FF F9 75 */	bl setCullMtx__15daObj_Kanban2_cFv
/* 805830F8  28 1A 00 00 */	cmplwi r26, 0
/* 805830FC  41 82 00 64 */	beq lbl_80583160
/* 80583100  3C 60 00 08 */	lis r3, 0x0008 /* 0x000800E4@ha */
/* 80583104  38 03 00 E4 */	addi r0, r3, 0x00E4 /* 0x000800E4@l */
/* 80583108  90 01 00 08 */	stw r0, 8(r1)
/* 8058310C  3C 60 80 45 */	lis r3, mAudioMgrPtr__10Z2AudioMgr@ha /* 0x80451368@ha */
/* 80583110  38 63 13 68 */	addi r3, r3, mAudioMgrPtr__10Z2AudioMgr@l /* 0x80451368@l */
/* 80583114  80 63 00 00 */	lwz r3, 0(r3)
/* 80583118  38 81 00 08 */	addi r4, r1, 8
/* 8058311C  38 BB 04 D0 */	addi r5, r27, 0x4d0
/* 80583120  38 C0 00 00 */	li r6, 0
/* 80583124  38 E0 00 00 */	li r7, 0
/* 80583128  C0 3F 00 00 */	lfs f1, 0(r31)
/* 8058312C  FC 40 08 90 */	fmr f2, f1
/* 80583130  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 80583134  FC 80 18 90 */	fmr f4, f3
/* 80583138  39 00 00 00 */	li r8, 0
/* 8058313C  4B D2 88 49 */	bl seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc
/* 80583140  80 1B 04 E4 */	lwz r0, 0x4e4(r27)
/* 80583144  90 01 00 0C */	stw r0, 0xc(r1)
/* 80583148  A0 1B 04 E8 */	lhz r0, 0x4e8(r27)
/* 8058314C  B0 01 00 10 */	sth r0, 0x10(r1)
/* 80583150  7F 63 DB 78 */	mr r3, r27
/* 80583154  67 44 80 00 */	oris r4, r26, 0x8000
/* 80583158  38 A1 00 0C */	addi r5, r1, 0xc
/* 8058315C  4B FF E8 61 */	bl createBreakParts__15daObj_Kanban2_cFUl5csXyz
lbl_80583160:
/* 80583160  7F A0 07 35 */	extsh. r0, r29
/* 80583164  40 80 00 10 */	bge lbl_80583174
/* 80583168  7C 1E 00 D0 */	neg r0, r30
/* 8058316C  7C 1D 07 34 */	extsh r29, r0
/* 80583170  48 00 00 08 */	b lbl_80583178
lbl_80583174:
/* 80583174  7F 9D E3 78 */	mr r29, r28
lbl_80583178:
/* 80583178  88 1B 06 26 */	lbz r0, 0x626(r27)
/* 8058317C  28 00 00 00 */	cmplwi r0, 0
/* 80583180  40 82 00 0C */	bne lbl_8058318C
/* 80583184  B3 BB 06 24 */	sth r29, 0x624(r27)
/* 80583188  48 00 00 5C */	b lbl_805831E4
lbl_8058318C:
/* 8058318C  A8 7B 06 24 */	lha r3, 0x624(r27)
/* 80583190  7C 60 07 35 */	extsh. r0, r3
/* 80583194  40 80 00 0C */	bge lbl_805831A0
/* 80583198  7F A0 07 35 */	extsh. r0, r29
/* 8058319C  41 81 00 14 */	bgt lbl_805831B0
lbl_805831A0:
/* 805831A0  7C 60 07 35 */	extsh. r0, r3
/* 805831A4  40 81 00 3C */	ble lbl_805831E0
/* 805831A8  7F A0 07 35 */	extsh. r0, r29
/* 805831AC  40 80 00 34 */	bge lbl_805831E0
lbl_805831B0:
/* 805831B0  7C 1D 18 50 */	subf r0, r29, r3
/* 805831B4  7C 03 07 34 */	extsh r3, r0
/* 805831B8  4B DE 1F 19 */	bl abs
/* 805831BC  2C 03 10 00 */	cmpwi r3, 0x1000
/* 805831C0  40 80 00 0C */	bge lbl_805831CC
/* 805831C4  B3 BB 06 24 */	sth r29, 0x624(r27)
/* 805831C8  48 00 00 1C */	b lbl_805831E4
lbl_805831CC:
/* 805831CC  AB BB 06 24 */	lha r29, 0x624(r27)
/* 805831D0  88 7B 06 27 */	lbz r3, 0x627(r27)
/* 805831D4  38 03 00 0A */	addi r0, r3, 0xa
/* 805831D8  98 1B 06 27 */	stb r0, 0x627(r27)
/* 805831DC  48 00 00 08 */	b lbl_805831E4
lbl_805831E0:
/* 805831E0  B3 BB 06 24 */	sth r29, 0x624(r27)
lbl_805831E4:
/* 805831E4  3B C0 00 01 */	li r30, 1
lbl_805831E8:
/* 805831E8  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 805831EC  41 82 00 70 */	beq lbl_8058325C
/* 805831F0  88 1B 06 27 */	lbz r0, 0x627(r27)
/* 805831F4  28 00 00 1E */	cmplwi r0, 0x1e
/* 805831F8  40 80 00 4C */	bge lbl_80583244
/* 805831FC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80583200  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80583204  80 63 5D AC */	lwz r3, 0x5dac(r3)
/* 80583208  C0 23 05 2C */	lfs f1, 0x52c(r3)
/* 8058320C  C0 1F 00 30 */	lfs f0, 0x30(r31)
/* 80583210  EC 01 00 24 */	fdivs f0, f1, f0
/* 80583214  FC 00 00 1E */	fctiwz f0, f0
/* 80583218  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 8058321C  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 80583220  2C 03 00 01 */	cmpwi r3, 1
/* 80583224  40 80 00 08 */	bge lbl_8058322C
/* 80583228  38 60 00 01 */	li r3, 1
lbl_8058322C:
/* 8058322C  2C 03 00 0A */	cmpwi r3, 0xa
/* 80583230  40 81 00 08 */	ble lbl_80583238
/* 80583234  38 60 00 0A */	li r3, 0xa
lbl_80583238:
/* 80583238  88 1B 06 27 */	lbz r0, 0x627(r27)
/* 8058323C  7C 00 1A 14 */	add r0, r0, r3
/* 80583240  98 1B 06 27 */	stb r0, 0x627(r27)
lbl_80583244:
/* 80583244  38 7B 04 E4 */	addi r3, r27, 0x4e4
/* 80583248  7F A4 EB 78 */	mr r4, r29
/* 8058324C  38 A0 00 08 */	li r5, 8
/* 80583250  38 C0 04 00 */	li r6, 0x400
/* 80583254  4B CE D3 B5 */	bl cLib_addCalcAngleS2__FPssss
/* 80583258  48 00 00 F0 */	b lbl_80583348
lbl_8058325C:
/* 8058325C  38 60 00 00 */	li r3, 0
/* 80583260  98 7B 06 27 */	stb r3, 0x627(r27)
/* 80583264  88 1B 06 26 */	lbz r0, 0x626(r27)
/* 80583268  28 00 00 00 */	cmplwi r0, 0
/* 8058326C  41 82 00 54 */	beq lbl_805832C0
/* 80583270  B0 7B 05 E8 */	sth r3, 0x5e8(r27)
/* 80583274  A8 1B 06 24 */	lha r0, 0x624(r27)
/* 80583278  2C 00 08 00 */	cmpwi r0, 0x800
/* 8058327C  40 80 00 24 */	bge lbl_805832A0
/* 80583280  7C 00 07 35 */	extsh. r0, r0
/* 80583284  40 81 00 10 */	ble lbl_80583294
/* 80583288  C0 1F 00 88 */	lfs f0, 0x88(r31)
/* 8058328C  D0 1B 05 FC */	stfs f0, 0x5fc(r27)
/* 80583290  48 00 00 30 */	b lbl_805832C0
lbl_80583294:
/* 80583294  C0 1F 00 8C */	lfs f0, 0x8c(r31)
/* 80583298  D0 1B 05 FC */	stfs f0, 0x5fc(r27)
/* 8058329C  48 00 00 24 */	b lbl_805832C0
lbl_805832A0:
/* 805832A0  C8 3F 00 78 */	lfd f1, 0x78(r31)
/* 805832A4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 805832A8  90 01 00 3C */	stw r0, 0x3c(r1)
/* 805832AC  3C 00 43 30 */	lis r0, 0x4330
/* 805832B0  90 01 00 38 */	stw r0, 0x38(r1)
/* 805832B4  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 805832B8  EC 00 08 28 */	fsubs f0, f0, f1
/* 805832BC  D0 1B 05 FC */	stfs f0, 0x5fc(r27)
lbl_805832C0:
/* 805832C0  C0 1B 05 FC */	lfs f0, 0x5fc(r27)
/* 805832C4  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 805832C8  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 805832CC  41 82 00 7C */	beq lbl_80583348
/* 805832D0  38 7B 05 FC */	addi r3, r27, 0x5fc
/* 805832D4  C0 5F 00 5C */	lfs f2, 0x5c(r31)
/* 805832D8  4B CE D4 69 */	bl cLib_chaseF__FPfff
/* 805832DC  A8 7B 05 E8 */	lha r3, 0x5e8(r27)
/* 805832E0  38 03 20 00 */	addi r0, r3, 0x2000
/* 805832E4  B0 1B 05 E8 */	sth r0, 0x5e8(r27)
/* 805832E8  A8 1B 05 E8 */	lha r0, 0x5e8(r27)
/* 805832EC  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 805832F0  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha /* 0x80439A20@ha */
/* 805832F4  38 83 9A 20 */	addi r4, r3, sincosTable___5JMath@l /* 0x80439A20@l */
/* 805832F8  7C 24 04 2E */	lfsx f1, r4, r0
/* 805832FC  C0 1B 05 FC */	lfs f0, 0x5fc(r27)
/* 80583300  EC 20 00 72 */	fmuls f1, f0, f1
/* 80583304  A8 1B 05 EA */	lha r0, 0x5ea(r27)
/* 80583308  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 8058330C  7C 64 02 14 */	add r3, r4, r0
/* 80583310  C0 03 00 04 */	lfs f0, 4(r3)
/* 80583314  EC 01 00 32 */	fmuls f0, f1, f0
/* 80583318  FC 00 00 1E */	fctiwz f0, f0
/* 8058331C  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 80583320  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 80583324  B0 1B 04 E4 */	sth r0, 0x4e4(r27)
/* 80583328  A8 1B 05 EA */	lha r0, 0x5ea(r27)
/* 8058332C  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 80583330  7C 04 04 2E */	lfsx f0, r4, r0
/* 80583334  EC 01 00 32 */	fmuls f0, f1, f0
/* 80583338  FC 00 00 1E */	fctiwz f0, f0
/* 8058333C  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80583340  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80583344  B0 1B 04 E8 */	sth r0, 0x4e8(r27)
lbl_80583348:
/* 80583348  9B DB 06 26 */	stb r30, 0x626(r27)
/* 8058334C  39 61 00 60 */	addi r11, r1, 0x60
/* 80583350  4B DD EE CD */	bl _restgpr_26
/* 80583354  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80583358  7C 08 03 A6 */	mtlr r0
/* 8058335C  38 21 00 60 */	addi r1, r1, 0x60
/* 80583360  4E 80 00 20 */	blr 
