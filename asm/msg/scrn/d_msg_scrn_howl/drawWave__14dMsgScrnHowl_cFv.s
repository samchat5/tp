lbl_80242198:
/* 80242198  94 21 FE A0 */	stwu r1, -0x160(r1)
/* 8024219C  7C 08 02 A6 */	mflr r0
/* 802421A0  90 01 01 64 */	stw r0, 0x164(r1)
/* 802421A4  DB E1 01 50 */	stfd f31, 0x150(r1)
/* 802421A8  F3 E1 01 58 */	psq_st f31, 344(r1), 0, 0 /* qr0 */
/* 802421AC  DB C1 01 40 */	stfd f30, 0x140(r1)
/* 802421B0  F3 C1 01 48 */	psq_st f30, 328(r1), 0, 0 /* qr0 */
/* 802421B4  DB A1 01 30 */	stfd f29, 0x130(r1)
/* 802421B8  F3 A1 01 38 */	psq_st f29, 312(r1), 0, 0 /* qr0 */
/* 802421BC  DB 81 01 20 */	stfd f28, 0x120(r1)
/* 802421C0  F3 81 01 28 */	psq_st f28, 296(r1), 0, 0 /* qr0 */
/* 802421C4  DB 61 01 10 */	stfd f27, 0x110(r1)
/* 802421C8  F3 61 01 18 */	psq_st f27, 280(r1), 0, 0 /* qr0 */
/* 802421CC  DB 41 01 00 */	stfd f26, 0x100(r1)
/* 802421D0  F3 41 01 08 */	psq_st f26, 264(r1), 0, 0 /* qr0 */
/* 802421D4  DB 21 00 F0 */	stfd f25, 0xf0(r1)
/* 802421D8  F3 21 00 F8 */	psq_st f25, 248(r1), 0, 0 /* qr0 */
/* 802421DC  DB 01 00 E0 */	stfd f24, 0xe0(r1)
/* 802421E0  F3 01 00 E8 */	psq_st f24, 232(r1), 0, 0 /* qr0 */
/* 802421E4  DA E1 00 D0 */	stfd f23, 0xd0(r1)
/* 802421E8  F2 E1 00 D8 */	psq_st f23, 216(r1), 0, 0 /* qr0 */
/* 802421EC  DA C1 00 C0 */	stfd f22, 0xc0(r1)
/* 802421F0  F2 C1 00 C8 */	psq_st f22, 200(r1), 0, 0 /* qr0 */
/* 802421F4  DA A1 00 B0 */	stfd f21, 0xb0(r1)
/* 802421F8  F2 A1 00 B8 */	psq_st f21, 184(r1), 0, 0 /* qr0 */
/* 802421FC  DA 81 00 A0 */	stfd f20, 0xa0(r1)
/* 80242200  F2 81 00 A8 */	psq_st f20, 168(r1), 0, 0 /* qr0 */
/* 80242204  DA 61 00 90 */	stfd f19, 0x90(r1)
/* 80242208  F2 61 00 98 */	psq_st f19, 152(r1), 0, 0 /* qr0 */
/* 8024220C  DA 41 00 80 */	stfd f18, 0x80(r1)
/* 80242210  F2 41 00 88 */	psq_st f18, 136(r1), 0, 0 /* qr0 */
/* 80242214  DA 21 00 70 */	stfd f17, 0x70(r1)
/* 80242218  F2 21 00 78 */	psq_st f17, 120(r1), 0, 0 /* qr0 */
/* 8024221C  39 61 00 70 */	addi r11, r1, 0x70
/* 80242220  48 11 FF 9D */	bl _savegpr_21
/* 80242224  7C 79 1B 78 */	mr r25, r3
/* 80242228  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8024222C  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80242230  83 E3 5F 50 */	lwz r31, 0x5f50(r3)
/* 80242234  80 79 00 C4 */	lwz r3, 0xc4(r25)
/* 80242238  48 01 20 B1 */	bl getGlobalPosX__8CPaneMgrFv
/* 8024223C  FF C0 08 90 */	fmr f30, f1
/* 80242240  AB D9 21 24 */	lha r30, 0x2124(r25)
/* 80242244  C3 A2 B2 50 */	lfs f29, lit_4427(r2)
/* 80242248  FF 80 E8 90 */	fmr f28, f29
/* 8024224C  FF 60 E8 90 */	fmr f27, f29
/* 80242250  FF 40 F0 90 */	fmr f26, f30
/* 80242254  57 C0 10 3A */	slwi r0, r30, 2
/* 80242258  7C 79 02 14 */	add r3, r25, r0
/* 8024225C  C3 23 01 80 */	lfs f25, 0x180(r3)
/* 80242260  3C 60 80 43 */	lis r3, g_MsgObject_HIO_c@ha /* 0x8043028C@ha */
/* 80242264  38 63 02 8C */	addi r3, r3, g_MsgObject_HIO_c@l /* 0x8043028C@l */
/* 80242268  AB A3 04 0C */	lha r29, 0x40c(r3)
/* 8024226C  A8 79 21 28 */	lha r3, 0x2128(r25)
/* 80242270  38 03 FF FF */	addi r0, r3, -1
/* 80242274  7F 9D 00 50 */	subf r28, r29, r0
/* 80242278  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8024227C  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80242280  80 63 5D B4 */	lwz r3, 0x5db4(r3)
/* 80242284  81 83 06 28 */	lwz r12, 0x628(r3)
/* 80242288  81 8C 02 98 */	lwz r12, 0x298(r12)
/* 8024228C  7D 89 03 A6 */	mtctr r12
/* 80242290  4E 80 04 21 */	bctrl 
/* 80242294  88 03 00 8C */	lbz r0, 0x8c(r3)
/* 80242298  20 00 00 1E */	subfic r0, r0, 0x1e
/* 8024229C  C8 22 B2 68 */	lfd f1, lit_4434(r2)
/* 802422A0  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 802422A4  90 01 00 34 */	stw r0, 0x34(r1)
/* 802422A8  3C 00 43 30 */	lis r0, 0x4330
/* 802422AC  90 01 00 30 */	stw r0, 0x30(r1)
/* 802422B0  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 802422B4  EC 20 08 28 */	fsubs f1, f0, f1
/* 802422B8  C0 02 B2 88 */	lfs f0, lit_4824(r2)
/* 802422BC  EF 01 00 24 */	fdivs f24, f1, f0
/* 802422C0  2C 1C 00 00 */	cmpwi r28, 0
/* 802422C4  40 80 00 08 */	bge lbl_802422CC
/* 802422C8  3B 80 00 00 */	li r28, 0
lbl_802422CC:
/* 802422CC  3B 60 00 00 */	li r27, 0
/* 802422D0  80 79 01 28 */	lwz r3, 0x128(r25)
/* 802422D4  80 19 01 2C */	lwz r0, 0x12c(r25)
/* 802422D8  90 61 00 24 */	stw r3, 0x24(r1)
/* 802422DC  90 01 00 28 */	stw r0, 0x28(r1)
/* 802422E0  80 19 01 30 */	lwz r0, 0x130(r25)
/* 802422E4  90 01 00 2C */	stw r0, 0x2c(r1)
/* 802422E8  80 79 01 40 */	lwz r3, 0x140(r25)
/* 802422EC  80 19 01 44 */	lwz r0, 0x144(r25)
/* 802422F0  90 61 00 18 */	stw r3, 0x18(r1)
/* 802422F4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 802422F8  80 19 01 48 */	lwz r0, 0x148(r25)
/* 802422FC  90 01 00 20 */	stw r0, 0x20(r1)
/* 80242300  C0 C1 00 28 */	lfs f6, 0x28(r1)
/* 80242304  C0 62 B2 60 */	lfs f3, lit_4431(r2)
/* 80242308  EC 06 18 24 */	fdivs f0, f6, f3
/* 8024230C  EC 00 18 24 */	fdivs f0, f0, f3
/* 80242310  C0 42 B2 8C */	lfs f2, lit_4825(r2)
/* 80242314  EC A0 10 28 */	fsubs f5, f0, f2
/* 80242318  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 8024231C  C0 02 B2 50 */	lfs f0, lit_4427(r2)
/* 80242320  EC 01 00 28 */	fsubs f0, f1, f0
/* 80242324  EC 00 18 24 */	fdivs f0, f0, f3
/* 80242328  EC 80 10 28 */	fsubs f4, f0, f2
/* 8024232C  D0 81 00 08 */	stfs f4, 8(r1)
/* 80242330  D0 A1 00 0C */	stfs f5, 0xc(r1)
/* 80242334  C0 42 B2 90 */	lfs f2, lit_4826(r2)
/* 80242338  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8024233C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80242340  EC 00 18 24 */	fdivs f0, f0, f3
/* 80242344  EC 02 00 2A */	fadds f0, f2, f0
/* 80242348  EC 04 00 2A */	fadds f0, f4, f0
/* 8024234C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80242350  C0 22 B2 94 */	lfs f1, lit_4827(r2)
/* 80242354  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80242358  EC 00 30 28 */	fsubs f0, f0, f6
/* 8024235C  EC 01 00 2A */	fadds f0, f1, f0
/* 80242360  EC 02 00 2A */	fadds f0, f2, f0
/* 80242364  EC 05 00 2A */	fadds f0, f5, f0
/* 80242368  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8024236C  7F E3 FB 78 */	mr r3, r31
/* 80242370  38 81 00 08 */	addi r4, r1, 8
/* 80242374  48 0A 6D 4D */	bl func_802E90C0
/* 80242378  7F E3 FB 78 */	mr r3, r31
/* 8024237C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80242380  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80242384  7D 89 03 A6 */	mtctr r12
/* 80242388  4E 80 04 21 */	bctrl 
/* 8024238C  38 80 00 01 */	li r4, 1
/* 80242390  88 19 27 98 */	lbz r0, 0x2798(r25)
/* 80242394  28 00 00 00 */	cmplwi r0, 0
/* 80242398  40 82 00 20 */	bne lbl_802423B8
/* 8024239C  A8 79 21 2A */	lha r3, 0x212a(r25)
/* 802423A0  A8 19 21 2C */	lha r0, 0x212c(r25)
/* 802423A4  7C 03 00 00 */	cmpw r3, r0
/* 802423A8  41 82 00 0C */	beq lbl_802423B4
/* 802423AC  B0 79 21 2C */	sth r3, 0x212c(r25)
/* 802423B0  48 00 00 08 */	b lbl_802423B8
lbl_802423B4:
/* 802423B4  38 80 00 00 */	li r4, 0
lbl_802423B8:
/* 802423B8  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 802423BC  41 82 03 5C */	beq lbl_80242718
/* 802423C0  3B 40 00 00 */	li r26, 0
/* 802423C4  3C 60 80 43 */	lis r3, g_MsgObject_HIO_c@ha /* 0x8043028C@ha */
/* 802423C8  3B E3 02 8C */	addi r31, r3, g_MsgObject_HIO_c@l /* 0x8043028C@l */
/* 802423CC  C3 E2 B2 58 */	lfs f31, lit_4429(r2)
/* 802423D0  48 00 01 CC */	b lbl_8024259C
lbl_802423D4:
/* 802423D4  FE E0 F0 90 */	fmr f23, f30
/* 802423D8  7F C4 07 34 */	extsh r4, r30
/* 802423DC  54 83 10 3A */	slwi r3, r4, 2
/* 802423E0  38 03 01 80 */	addi r0, r3, 0x180
/* 802423E4  7E D9 04 2E */	lfsx f22, r25, r0
/* 802423E8  54 83 08 3C */	slwi r3, r4, 1
/* 802423EC  38 03 1B 14 */	addi r0, r3, 0x1b14
/* 802423F0  7E F9 02 AE */	lhax r23, r25, r0
/* 802423F4  C0 19 19 80 */	lfs f0, 0x1980(r25)
/* 802423F8  EF DE 00 2A */	fadds f30, f30, f0
/* 802423FC  C0 19 19 84 */	lfs f0, 0x1984(r25)
/* 80242400  EF 7B 00 2A */	fadds f27, f27, f0
/* 80242404  FC 1B F8 40 */	fcmpo cr0, f27, f31
/* 80242408  40 81 00 08 */	ble lbl_80242410
/* 8024240C  FF 60 F8 90 */	fmr f27, f31
lbl_80242410:
/* 80242410  7F 23 CB 78 */	mr r3, r25
/* 80242414  7F C4 F3 78 */	mr r4, r30
/* 80242418  48 00 1B 41 */	bl addCount__14dMsgScrnHowl_cFs
/* 8024241C  7C 7E 1B 78 */	mr r30, r3
/* 80242420  7F C4 07 34 */	extsh r4, r30
/* 80242424  54 83 10 3A */	slwi r3, r4, 2
/* 80242428  38 03 01 80 */	addi r0, r3, 0x180
/* 8024242C  7C 19 04 2E */	lfsx f0, r25, r0
/* 80242430  54 83 08 3C */	slwi r3, r4, 1
/* 80242434  38 03 1B 14 */	addi r0, r3, 0x1b14
/* 80242438  7C 99 02 AE */	lhax r4, r25, r0
/* 8024243C  A8 79 21 28 */	lha r3, 0x2128(r25)
/* 80242440  38 03 FF FE */	addi r0, r3, -2
/* 80242444  7C 1A 00 00 */	cmpw r26, r0
/* 80242448  40 82 00 10 */	bne lbl_80242458
/* 8024244C  FF A0 F0 90 */	fmr f29, f30
/* 80242450  FF 80 00 90 */	fmr f28, f0
/* 80242454  7C 9B 23 78 */	mr r27, r4
lbl_80242458:
/* 80242458  A8 19 21 2A */	lha r0, 0x212a(r25)
/* 8024245C  2C 00 00 1E */	cmpwi r0, 0x1e
/* 80242460  41 80 01 38 */	blt lbl_80242598
/* 80242464  7C 1A E0 00 */	cmpw r26, r28
/* 80242468  41 80 01 30 */	blt lbl_80242598
/* 8024246C  2C 1A 00 1E */	cmpwi r26, 0x1e
/* 80242470  41 80 01 28 */	blt lbl_80242598
/* 80242474  C0 82 B2 50 */	lfs f4, lit_4427(r2)
/* 80242478  2C 17 00 00 */	cmpwi r23, 0
/* 8024247C  40 81 00 38 */	ble lbl_802424B4
/* 80242480  C8 62 B2 68 */	lfd f3, lit_4434(r2)
/* 80242484  6E E0 80 00 */	xoris r0, r23, 0x8000
/* 80242488  90 01 00 34 */	stw r0, 0x34(r1)
/* 8024248C  3C 60 43 30 */	lis r3, 0x4330
/* 80242490  90 61 00 30 */	stw r3, 0x30(r1)
/* 80242494  C8 21 00 30 */	lfd f1, 0x30(r1)
/* 80242498  EC 41 18 28 */	fsubs f2, f1, f3
/* 8024249C  6F A0 80 00 */	xoris r0, r29, 0x8000
/* 802424A0  90 01 00 3C */	stw r0, 0x3c(r1)
/* 802424A4  90 61 00 38 */	stw r3, 0x38(r1)
/* 802424A8  C8 21 00 38 */	lfd f1, 0x38(r1)
/* 802424AC  EC 21 18 28 */	fsubs f1, f1, f3
/* 802424B0  EC 82 08 24 */	fdivs f4, f2, f1
lbl_802424B4:
/* 802424B4  C0 22 B2 50 */	lfs f1, lit_4427(r2)
/* 802424B8  FC 18 08 40 */	fcmpo cr0, f24, f1
/* 802424BC  40 81 00 DC */	ble lbl_80242598
/* 802424C0  FC 04 08 40 */	fcmpo cr0, f4, f1
/* 802424C4  40 81 00 D4 */	ble lbl_80242598
/* 802424C8  C0 42 B2 78 */	lfs f2, lit_4563(r2)
/* 802424CC  C0 22 B2 74 */	lfs f1, lit_4562(r2)
/* 802424D0  EC 21 01 32 */	fmuls f1, f1, f4
/* 802424D4  EC 62 08 2A */	fadds f3, f2, f1
/* 802424D8  C0 42 B2 90 */	lfs f2, lit_4826(r2)
/* 802424DC  C0 3F 03 C4 */	lfs f1, 0x3c4(r31)
/* 802424E0  EC 22 00 72 */	fmuls f1, f2, f1
/* 802424E4  EC 61 00 F2 */	fmuls f3, f1, f3
/* 802424E8  FE A0 18 90 */	fmr f21, f3
/* 802424EC  FE 80 18 90 */	fmr f20, f3
/* 802424F0  C0 22 B2 58 */	lfs f1, lit_4429(r2)
/* 802424F4  EC 21 01 32 */	fmuls f1, f1, f4
/* 802424F8  EC 21 06 32 */	fmuls f1, f1, f24
/* 802424FC  FC 20 08 1E */	fctiwz f1, f1
/* 80242500  D8 21 00 38 */	stfd f1, 0x38(r1)
/* 80242504  82 C1 00 3C */	lwz r22, 0x3c(r1)
/* 80242508  56 C0 06 3F */	clrlwi. r0, r22, 0x18
/* 8024250C  41 82 00 8C */	beq lbl_80242598
/* 80242510  EC 5E B8 28 */	fsubs f2, f30, f23
/* 80242514  C0 22 B2 98 */	lfs f1, lit_4828(r2)
/* 80242518  EE 62 08 24 */	fdivs f19, f2, f1
/* 8024251C  EC 00 B0 28 */	fsubs f0, f0, f22
/* 80242520  EE 20 08 24 */	fdivs f17, f0, f1
/* 80242524  3A A0 00 00 */	li r21, 0
/* 80242528  3B 00 00 00 */	li r24, 0
/* 8024252C  C0 02 B2 70 */	lfs f0, lit_4561(r2)
/* 80242530  EE 43 00 32 */	fmuls f18, f3, f0
lbl_80242534:
/* 80242534  3A F8 01 08 */	addi r23, r24, 0x108
/* 80242538  7C 79 B8 2E */	lwzx r3, r25, r23
/* 8024253C  7E C4 B3 78 */	mr r4, r22
/* 80242540  81 83 00 00 */	lwz r12, 0(r3)
/* 80242544  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80242548  7D 89 03 A6 */	mtctr r12
/* 8024254C  4E 80 04 21 */	bctrl 
/* 80242550  7C 79 B8 2E */	lwzx r3, r25, r23
/* 80242554  EC 37 90 28 */	fsubs f1, f23, f18
/* 80242558  EC 56 90 28 */	fsubs f2, f22, f18
/* 8024255C  FC 60 A8 90 */	fmr f3, f21
/* 80242560  FC 80 A0 90 */	fmr f4, f20
/* 80242564  38 80 00 00 */	li r4, 0
/* 80242568  38 A0 00 00 */	li r5, 0
/* 8024256C  38 C0 00 00 */	li r6, 0
/* 80242570  81 83 00 00 */	lwz r12, 0(r3)
/* 80242574  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 80242578  7D 89 03 A6 */	mtctr r12
/* 8024257C  4E 80 04 21 */	bctrl 
/* 80242580  EE F7 98 2A */	fadds f23, f23, f19
/* 80242584  EE D6 88 2A */	fadds f22, f22, f17
/* 80242588  3A B5 00 01 */	addi r21, r21, 1
/* 8024258C  2C 15 00 05 */	cmpwi r21, 5
/* 80242590  3B 18 00 04 */	addi r24, r24, 4
/* 80242594  41 80 FF A0 */	blt lbl_80242534
lbl_80242598:
/* 80242598  3B 5A 00 01 */	addi r26, r26, 1
lbl_8024259C:
/* 8024259C  A8 79 21 28 */	lha r3, 0x2128(r25)
/* 802425A0  38 03 FF FF */	addi r0, r3, -1
/* 802425A4  7C 1A 00 00 */	cmpw r26, r0
/* 802425A8  41 80 FE 2C */	blt lbl_802423D4
/* 802425AC  C0 42 B2 50 */	lfs f2, lit_4427(r2)
/* 802425B0  FC 18 10 40 */	fcmpo cr0, f24, f2
/* 802425B4  40 81 01 64 */	ble lbl_80242718
/* 802425B8  C0 22 B2 90 */	lfs f1, lit_4826(r2)
/* 802425BC  C0 1F 03 C4 */	lfs f0, 0x3c4(r31)
/* 802425C0  EF E1 00 32 */	fmuls f31, f1, f0
/* 802425C4  FE 60 F8 90 */	fmr f19, f31
/* 802425C8  FC 20 10 90 */	fmr f1, f2
/* 802425CC  7C 60 07 35 */	extsh. r0, r3
/* 802425D0  41 82 00 4C */	beq lbl_8024261C
/* 802425D4  2C 1B 00 00 */	cmpwi r27, 0
/* 802425D8  40 81 00 38 */	ble lbl_80242610
/* 802425DC  C8 42 B2 68 */	lfd f2, lit_4434(r2)
/* 802425E0  6F 60 80 00 */	xoris r0, r27, 0x8000
/* 802425E4  90 01 00 3C */	stw r0, 0x3c(r1)
/* 802425E8  3C 60 43 30 */	lis r3, 0x4330
/* 802425EC  90 61 00 38 */	stw r3, 0x38(r1)
/* 802425F0  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 802425F4  EC 20 10 28 */	fsubs f1, f0, f2
/* 802425F8  6F A0 80 00 */	xoris r0, r29, 0x8000
/* 802425FC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80242600  90 61 00 30 */	stw r3, 0x30(r1)
/* 80242604  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 80242608  EC 00 10 28 */	fsubs f0, f0, f2
/* 8024260C  EC 21 00 24 */	fdivs f1, f1, f0
lbl_80242610:
/* 80242610  FE 20 E8 90 */	fmr f17, f29
/* 80242614  FE 40 E0 90 */	fmr f18, f28
/* 80242618  48 00 00 8C */	b lbl_802426A4
lbl_8024261C:
/* 8024261C  A8 79 21 34 */	lha r3, 0x2134(r25)
/* 80242620  38 03 00 01 */	addi r0, r3, 1
/* 80242624  B0 19 21 34 */	sth r0, 0x2134(r25)
/* 80242628  A8 19 21 34 */	lha r0, 0x2134(r25)
/* 8024262C  2C 00 00 1E */	cmpwi r0, 0x1e
/* 80242630  40 81 00 0C */	ble lbl_8024263C
/* 80242634  38 00 00 00 */	li r0, 0
/* 80242638  B0 19 21 34 */	sth r0, 0x2134(r25)
lbl_8024263C:
/* 8024263C  A8 19 21 34 */	lha r0, 0x2134(r25)
/* 80242640  2C 00 00 0F */	cmpwi r0, 0xf
/* 80242644  40 80 00 2C */	bge lbl_80242670
/* 80242648  C8 22 B2 68 */	lfd f1, lit_4434(r2)
/* 8024264C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80242650  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80242654  3C 00 43 30 */	lis r0, 0x4330
/* 80242658  90 01 00 38 */	stw r0, 0x38(r1)
/* 8024265C  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 80242660  EC 20 08 28 */	fsubs f1, f0, f1
/* 80242664  C0 02 B2 9C */	lfs f0, lit_4829(r2)
/* 80242668  EC 21 00 24 */	fdivs f1, f1, f0
/* 8024266C  48 00 00 30 */	b lbl_8024269C
lbl_80242670:
/* 80242670  C0 42 B2 88 */	lfs f2, lit_4824(r2)
/* 80242674  C8 22 B2 68 */	lfd f1, lit_4434(r2)
/* 80242678  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8024267C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80242680  3C 00 43 30 */	lis r0, 0x4330
/* 80242684  90 01 00 30 */	stw r0, 0x30(r1)
/* 80242688  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 8024268C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80242690  EC 22 00 28 */	fsubs f1, f2, f0
/* 80242694  C0 02 B2 9C */	lfs f0, lit_4829(r2)
/* 80242698  EC 21 00 24 */	fdivs f1, f1, f0
lbl_8024269C:
/* 8024269C  FE 20 D0 90 */	fmr f17, f26
/* 802426A0  FE 40 C8 90 */	fmr f18, f25
lbl_802426A4:
/* 802426A4  C0 02 B2 50 */	lfs f0, lit_4427(r2)
/* 802426A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802426AC  40 81 00 6C */	ble lbl_80242718
/* 802426B0  80 79 01 04 */	lwz r3, 0x104(r25)
/* 802426B4  C0 02 B2 58 */	lfs f0, lit_4429(r2)
/* 802426B8  EC 00 00 72 */	fmuls f0, f0, f1
/* 802426BC  EC 00 06 32 */	fmuls f0, f0, f24
/* 802426C0  FC 00 00 1E */	fctiwz f0, f0
/* 802426C4  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 802426C8  80 81 00 3C */	lwz r4, 0x3c(r1)
/* 802426CC  81 83 00 00 */	lwz r12, 0(r3)
/* 802426D0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 802426D4  7D 89 03 A6 */	mtctr r12
/* 802426D8  4E 80 04 21 */	bctrl 
/* 802426DC  80 79 01 04 */	lwz r3, 0x104(r25)
/* 802426E0  C0 42 B2 70 */	lfs f2, lit_4561(r2)
/* 802426E4  EC 13 00 B2 */	fmuls f0, f19, f2
/* 802426E8  EC 31 00 28 */	fsubs f1, f17, f0
/* 802426EC  EC 1F 00 B2 */	fmuls f0, f31, f2
/* 802426F0  EC 52 00 28 */	fsubs f2, f18, f0
/* 802426F4  FC 60 98 90 */	fmr f3, f19
/* 802426F8  FC 80 F8 90 */	fmr f4, f31
/* 802426FC  38 80 00 00 */	li r4, 0
/* 80242700  38 A0 00 00 */	li r5, 0
/* 80242704  38 C0 00 00 */	li r6, 0
/* 80242708  81 83 00 00 */	lwz r12, 0(r3)
/* 8024270C  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 80242710  7D 89 03 A6 */	mtctr r12
/* 80242714  4E 80 04 21 */	bctrl 
lbl_80242718:
/* 80242718  E3 E1 01 58 */	psq_l f31, 344(r1), 0, 0 /* qr0 */
/* 8024271C  CB E1 01 50 */	lfd f31, 0x150(r1)
/* 80242720  E3 C1 01 48 */	psq_l f30, 328(r1), 0, 0 /* qr0 */
/* 80242724  CB C1 01 40 */	lfd f30, 0x140(r1)
/* 80242728  E3 A1 01 38 */	psq_l f29, 312(r1), 0, 0 /* qr0 */
/* 8024272C  CB A1 01 30 */	lfd f29, 0x130(r1)
/* 80242730  E3 81 01 28 */	psq_l f28, 296(r1), 0, 0 /* qr0 */
/* 80242734  CB 81 01 20 */	lfd f28, 0x120(r1)
/* 80242738  E3 61 01 18 */	psq_l f27, 280(r1), 0, 0 /* qr0 */
/* 8024273C  CB 61 01 10 */	lfd f27, 0x110(r1)
/* 80242740  E3 41 01 08 */	psq_l f26, 264(r1), 0, 0 /* qr0 */
/* 80242744  CB 41 01 00 */	lfd f26, 0x100(r1)
/* 80242748  E3 21 00 F8 */	psq_l f25, 248(r1), 0, 0 /* qr0 */
/* 8024274C  CB 21 00 F0 */	lfd f25, 0xf0(r1)
/* 80242750  E3 01 00 E8 */	psq_l f24, 232(r1), 0, 0 /* qr0 */
/* 80242754  CB 01 00 E0 */	lfd f24, 0xe0(r1)
/* 80242758  E2 E1 00 D8 */	psq_l f23, 216(r1), 0, 0 /* qr0 */
/* 8024275C  CA E1 00 D0 */	lfd f23, 0xd0(r1)
/* 80242760  E2 C1 00 C8 */	psq_l f22, 200(r1), 0, 0 /* qr0 */
/* 80242764  CA C1 00 C0 */	lfd f22, 0xc0(r1)
/* 80242768  E2 A1 00 B8 */	psq_l f21, 184(r1), 0, 0 /* qr0 */
/* 8024276C  CA A1 00 B0 */	lfd f21, 0xb0(r1)
/* 80242770  E2 81 00 A8 */	psq_l f20, 168(r1), 0, 0 /* qr0 */
/* 80242774  CA 81 00 A0 */	lfd f20, 0xa0(r1)
/* 80242778  E2 61 00 98 */	psq_l f19, 152(r1), 0, 0 /* qr0 */
/* 8024277C  CA 61 00 90 */	lfd f19, 0x90(r1)
/* 80242780  E2 41 00 88 */	psq_l f18, 136(r1), 0, 0 /* qr0 */
/* 80242784  CA 41 00 80 */	lfd f18, 0x80(r1)
/* 80242788  E2 21 00 78 */	psq_l f17, 120(r1), 0, 0 /* qr0 */
/* 8024278C  CA 21 00 70 */	lfd f17, 0x70(r1)
/* 80242790  39 61 00 70 */	addi r11, r1, 0x70
/* 80242794  48 11 FA 75 */	bl _restgpr_21
/* 80242798  80 01 01 64 */	lwz r0, 0x164(r1)
/* 8024279C  7C 08 03 A6 */	mtlr r0
/* 802427A0  38 21 01 60 */	addi r1, r1, 0x160
/* 802427A4  4E 80 00 20 */	blr 
