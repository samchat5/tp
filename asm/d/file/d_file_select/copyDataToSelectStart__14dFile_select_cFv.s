lbl_8018801C:
/* 8018801C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80188020  7C 08 02 A6 */	mflr r0
/* 80188024  90 01 00 24 */	stw r0, 0x24(r1)
/* 80188028  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8018802C  7C 7F 1B 78 */	mr r31, r3
/* 80188030  38 00 00 6D */	li r0, 0x6d
/* 80188034  90 01 00 08 */	stw r0, 8(r1)
/* 80188038  80 6D 8D E8 */	lwz r3, mAudioMgrPtr__10Z2AudioMgr(r13)
/* 8018803C  38 81 00 08 */	addi r4, r1, 8
/* 80188040  38 A0 00 00 */	li r5, 0
/* 80188044  38 C0 00 00 */	li r6, 0
/* 80188048  38 E0 00 00 */	li r7, 0
/* 8018804C  C0 22 9F 40 */	lfs f1, lit_4611(r2)
/* 80188050  FC 40 08 90 */	fmr f2, f1
/* 80188054  C0 62 9F 44 */	lfs f3, lit_4612(r2)
/* 80188058  FC 80 18 90 */	fmr f4, f3
/* 8018805C  39 00 00 00 */	li r8, 0
/* 80188060  48 12 39 25 */	bl seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc
/* 80188064  7F E3 FB 78 */	mr r3, r31
/* 80188068  88 9F 02 6B */	lbz r4, 0x26b(r31)
/* 8018806C  48 00 08 E5 */	bl getCptoNum__14dFile_select_cFUc
/* 80188070  98 7F 02 6D */	stb r3, 0x26d(r31)
/* 80188074  80 7F 00 64 */	lwz r3, 0x64(r31)
/* 80188078  C0 22 9F 48 */	lfs f1, lit_4778(r2)
/* 8018807C  48 00 D2 25 */	bl setAlphaRate__16dSelect_cursor_cFf
/* 80188080  88 1F 02 6D */	lbz r0, 0x26d(r31)
/* 80188084  7C 7F 02 14 */	add r3, r31, r0
/* 80188088  88 03 02 58 */	lbz r0, 0x258(r3)
/* 8018808C  28 00 00 00 */	cmplwi r0, 0
/* 80188090  41 82 01 64 */	beq lbl_801881F4
/* 80188094  7F E3 FB 78 */	mr r3, r31
/* 80188098  38 80 00 46 */	li r4, 0x46
/* 8018809C  38 A0 00 00 */	li r5, 0
/* 801880A0  38 C0 00 00 */	li r6, 0
/* 801880A4  48 00 50 41 */	bl headerTxtSet__14dFile_select_cFUsUcUc
/* 801880A8  80 7F 00 6C */	lwz r3, 0x6c(r31)
/* 801880AC  48 00 A0 0D */	bl openInit__15dFile_warning_cFv
/* 801880B0  88 1F 02 65 */	lbz r0, 0x265(r31)
/* 801880B4  54 00 10 3A */	slwi r0, r0, 2
/* 801880B8  7C 7F 02 14 */	add r3, r31, r0
/* 801880BC  80 63 01 58 */	lwz r3, 0x158(r3)
/* 801880C0  80 63 00 04 */	lwz r3, 4(r3)
/* 801880C4  C0 02 9F 40 */	lfs f0, lit_4611(r2)
/* 801880C8  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 801880CC  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 801880D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801880D4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801880D8  7D 89 03 A6 */	mtctr r12
/* 801880DC  4E 80 04 21 */	bctrl 
/* 801880E0  38 80 00 00 */	li r4, 0
/* 801880E4  88 1F 02 65 */	lbz r0, 0x265(r31)
/* 801880E8  54 00 10 3A */	slwi r0, r0, 2
/* 801880EC  7C 7F 02 14 */	add r3, r31, r0
/* 801880F0  80 63 01 58 */	lwz r3, 0x158(r3)
/* 801880F4  B0 83 00 16 */	sth r4, 0x16(r3)
/* 801880F8  88 1F 02 65 */	lbz r0, 0x265(r31)
/* 801880FC  54 00 10 3A */	slwi r0, r0, 2
/* 80188100  7C 7F 02 14 */	add r3, r31, r0
/* 80188104  80 63 01 58 */	lwz r3, 0x158(r3)
/* 80188108  38 80 00 00 */	li r4, 0
/* 8018810C  81 83 00 00 */	lwz r12, 0(r3)
/* 80188110  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80188114  7D 89 03 A6 */	mtctr r12
/* 80188118  4E 80 04 21 */	bctrl 
/* 8018811C  88 1F 02 6D */	lbz r0, 0x26d(r31)
/* 80188120  54 00 10 3A */	slwi r0, r0, 2
/* 80188124  7C 7F 02 14 */	add r3, r31, r0
/* 80188128  80 63 01 58 */	lwz r3, 0x158(r3)
/* 8018812C  80 63 00 04 */	lwz r3, 4(r3)
/* 80188130  C0 02 9F 40 */	lfs f0, lit_4611(r2)
/* 80188134  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 80188138  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 8018813C  81 83 00 00 */	lwz r12, 0(r3)
/* 80188140  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80188144  7D 89 03 A6 */	mtctr r12
/* 80188148  4E 80 04 21 */	bctrl 
/* 8018814C  38 80 00 00 */	li r4, 0
/* 80188150  88 1F 02 6D */	lbz r0, 0x26d(r31)
/* 80188154  54 00 10 3A */	slwi r0, r0, 2
/* 80188158  7C 7F 02 14 */	add r3, r31, r0
/* 8018815C  80 63 01 58 */	lwz r3, 0x158(r3)
/* 80188160  B0 83 00 16 */	sth r4, 0x16(r3)
/* 80188164  88 1F 02 6D */	lbz r0, 0x26d(r31)
/* 80188168  54 00 10 3A */	slwi r0, r0, 2
/* 8018816C  7C 7F 02 14 */	add r3, r31, r0
/* 80188170  80 63 01 58 */	lwz r3, 0x158(r3)
/* 80188174  38 80 00 00 */	li r4, 0
/* 80188178  81 83 00 00 */	lwz r12, 0(r3)
/* 8018817C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 80188180  7D 89 03 A6 */	mtctr r12
/* 80188184  4E 80 04 21 */	bctrl 
/* 80188188  7F E3 FB 78 */	mr r3, r31
/* 8018818C  88 9F 02 6D */	lbz r4, 0x26d(r31)
/* 80188190  38 A0 00 00 */	li r5, 0
/* 80188194  38 C0 00 FF */	li r6, 0xff
/* 80188198  3C E0 80 43 */	lis r7, g_fsHIO@ha /* 0x8042C9EC@ha */
/* 8018819C  38 E7 C9 EC */	addi r7, r7, g_fsHIO@l /* 0x8042C9EC@l */
/* 801881A0  88 E7 00 08 */	lbz r7, 8(r7)
/* 801881A4  48 00 54 AD */	bl selectWakuAlpahAnmInit__14dFile_select_cFUcUcUcUc
/* 801881A8  7F E3 FB 78 */	mr r3, r31
/* 801881AC  38 80 0D 29 */	li r4, 0xd29
/* 801881B0  38 A0 0D 1F */	li r5, 0xd1f
/* 801881B4  4B FF FA 35 */	bl copySelMoveAnmInitSet__14dFile_select_cFii
/* 801881B8  38 00 00 00 */	li r0, 0
/* 801881BC  90 1F 01 FC */	stw r0, 0x1fc(r31)
/* 801881C0  90 1F 02 04 */	stw r0, 0x204(r31)
/* 801881C4  38 00 00 01 */	li r0, 1
/* 801881C8  98 1F 02 09 */	stb r0, 0x209(r31)
/* 801881CC  98 1F 03 B1 */	stb r0, 0x3b1(r31)
/* 801881D0  7F E3 FB 78 */	mr r3, r31
/* 801881D4  38 80 00 00 */	li r4, 0
/* 801881D8  48 00 51 C9 */	bl modoruTxtDispAnmInit__14dFile_select_cFUc
/* 801881DC  7F E3 FB 78 */	mr r3, r31
/* 801881E0  38 80 00 00 */	li r4, 0
/* 801881E4  48 00 53 15 */	bl ketteiTxtDispAnmInit__14dFile_select_cFUc
/* 801881E8  38 00 00 1D */	li r0, 0x1d
/* 801881EC  98 1F 02 6F */	stb r0, 0x26f(r31)
/* 801881F0  48 00 00 30 */	b lbl_80188220
lbl_801881F4:
/* 801881F4  7F E3 FB 78 */	mr r3, r31
/* 801881F8  38 80 04 73 */	li r4, 0x473
/* 801881FC  38 A0 04 7D */	li r5, 0x47d
/* 80188200  48 00 09 BD */	bl yesnoMenuMoveAnmInitSet__14dFile_select_cFii
/* 80188204  7F E3 FB 78 */	mr r3, r31
/* 80188208  38 80 00 45 */	li r4, 0x45
/* 8018820C  38 A0 00 00 */	li r5, 0
/* 80188210  38 C0 00 00 */	li r6, 0
/* 80188214  48 00 4E D1 */	bl headerTxtSet__14dFile_select_cFUsUcUc
/* 80188218  38 00 00 19 */	li r0, 0x19
/* 8018821C  98 1F 02 6F */	stb r0, 0x26f(r31)
lbl_80188220:
/* 80188220  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80188224  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80188228  7C 08 03 A6 */	mtlr r0
/* 8018822C  38 21 00 20 */	addi r1, r1, 0x20
/* 80188230  4E 80 00 20 */	blr 
