lbl_800565EC:
/* 800565EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800565F0  7C 08 02 A6 */	mflr r0
/* 800565F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 800565F8  80 66 00 00 */	lwz r3, 0(r6)
/* 800565FC  80 06 00 04 */	lwz r0, 4(r6)
/* 80056600  90 61 00 08 */	stw r3, 8(r1)
/* 80056604  90 01 00 0C */	stw r0, 0xc(r1)
/* 80056608  80 06 00 08 */	lwz r0, 8(r6)
/* 8005660C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80056610  3C 60 80 43 */	lis r3, j3dSys@ha /* 0x80434AC8@ha */
/* 80056614  38 63 4A C8 */	addi r3, r3, j3dSys@l /* 0x80434AC8@l */
/* 80056618  C0 42 86 28 */	lfs f2, lit_4270(r2)
/* 8005661C  E0 21 00 08 */	psq_l f1, 8(r1), 0, 0 /* qr0 */
/* 80056620  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80056624  E0 83 00 20 */	psq_l f4, 32(r3), 0, 0 /* qr0 */
/* 80056628  E0 63 00 28 */	psq_l f3, 40(r3), 0, 0 /* qr0 */
/* 8005662C  10 00 14 20 */	ps_merge00 f0, f0, f2
/* 80056630  10 81 01 32 */	ps_mul f4, f1, f4
/* 80056634  10 60 20 FA */	ps_madd f3, f0, f3, f4
/* 80056638  10 63 18 D4 */	ps_sum0 f3, f3, f3, f3
/* 8005663C  FC 60 18 50 */	fneg f3, f3
/* 80056640  80 C4 00 04 */	lwz r6, 4(r4)
/* 80056644  C8 22 86 18 */	lfd f1, lit_4076(r2)
/* 80056648  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 8005664C  3C 00 43 30 */	lis r0, 0x4330
/* 80056650  90 01 00 18 */	stw r0, 0x18(r1)
/* 80056654  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 80056658  EC 20 08 28 */	fsubs f1, f0, f1
/* 8005665C  C0 02 86 CC */	lfs f0, lit_5747(r2)
/* 80056660  EC 20 08 24 */	fdivs f1, f0, f1
/* 80056664  EC 02 08 2A */	fadds f0, f2, f1
/* 80056668  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 8005666C  40 80 00 34 */	bge lbl_800566A0
/* 80056670  C0 02 86 64 */	lfs f0, lit_5130(r2)
/* 80056674  EC 00 08 28 */	fsubs f0, f0, f1
/* 80056678  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 8005667C  40 81 00 18 */	ble lbl_80056694
/* 80056680  EC 03 08 24 */	fdivs f0, f3, f1
/* 80056684  FC 00 00 1E */	fctiwz f0, f0
/* 80056688  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8005668C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80056690  48 00 00 14 */	b lbl_800566A4
lbl_80056694:
/* 80056694  38 06 FF FF */	addi r0, r6, -1
/* 80056698  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 8005669C  48 00 00 08 */	b lbl_800566A4
lbl_800566A0:
/* 800566A0  38 00 00 00 */	li r0, 0
lbl_800566A4:
/* 800566A4  54 03 04 3E */	clrlwi r3, r0, 0x10
/* 800566A8  38 06 FF FF */	addi r0, r6, -1
/* 800566AC  7C 03 00 50 */	subf r0, r3, r0
/* 800566B0  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 800566B4  7C 83 23 78 */	mr r3, r4
/* 800566B8  7C A4 2B 78 */	mr r4, r5
/* 800566BC  7C 05 03 78 */	mr r5, r0
/* 800566C0  48 2C ED CD */	bl entryImm__13J3DDrawBufferFP9J3DPacketUs
/* 800566C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800566C8  7C 08 03 A6 */	mtlr r0
/* 800566CC  38 21 00 20 */	addi r1, r1, 0x20
/* 800566D0  4E 80 00 20 */	blr 
