lbl_80614228:
/* 80614228  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8061422C  7C 08 02 A6 */	mflr r0
/* 80614230  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80614234  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 80614238  F3 E1 00 98 */	psq_st f31, 152(r1), 0, 0 /* qr0 */
/* 8061423C  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 80614240  F3 C1 00 88 */	psq_st f30, 136(r1), 0, 0 /* qr0 */
/* 80614244  39 61 00 80 */	addi r11, r1, 0x80
/* 80614248  4B D4 DF 85 */	bl _savegpr_25
/* 8061424C  7C 7D 1B 78 */	mr r29, r3
/* 80614250  3C 80 80 62 */	lis r4, lit_3772@ha /* 0x8061AD84@ha */
/* 80614254  3B E4 AD 84 */	addi r31, r4, lit_3772@l /* 0x8061AD84@l */
/* 80614258  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8061425C  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80614260  80 84 5D AC */	lwz r4, 0x5dac(r4)
/* 80614264  C3 FF 00 3C */	lfs f31, 0x3c(r31)
/* 80614268  3B C0 03 00 */	li r30, 0x300
/* 8061426C  A8 03 47 54 */	lha r0, 0x4754(r3)
/* 80614270  2C 00 00 03 */	cmpwi r0, 3
/* 80614274  41 82 01 E4 */	beq lbl_80614458
/* 80614278  40 80 00 1C */	bge lbl_80614294
/* 8061427C  2C 00 00 01 */	cmpwi r0, 1
/* 80614280  41 82 00 74 */	beq lbl_806142F4
/* 80614284  40 80 01 20 */	bge lbl_806143A4
/* 80614288  2C 00 00 00 */	cmpwi r0, 0
/* 8061428C  40 80 00 14 */	bge lbl_806142A0
/* 80614290  48 00 03 F8 */	b lbl_80614688
lbl_80614294:
/* 80614294  2C 00 00 0A */	cmpwi r0, 0xa
/* 80614298  41 82 03 90 */	beq lbl_80614628
/* 8061429C  48 00 03 EC */	b lbl_80614688
lbl_806142A0:
/* 806142A0  38 00 00 01 */	li r0, 1
/* 806142A4  B0 1D 47 54 */	sth r0, 0x4754(r29)
/* 806142A8  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 806142AC  D0 3D 47 58 */	stfs f1, 0x4758(r29)
/* 806142B0  C0 1F 00 C4 */	lfs f0, 0xc4(r31)
/* 806142B4  D0 1D 47 5C */	stfs f0, 0x475c(r29)
/* 806142B8  C0 1F 00 C8 */	lfs f0, 0xc8(r31)
/* 806142BC  D0 1D 47 60 */	stfs f0, 0x4760(r29)
/* 806142C0  38 00 00 64 */	li r0, 0x64
/* 806142C4  B0 1D 47 78 */	sth r0, 0x4778(r29)
/* 806142C8  C0 1F 00 54 */	lfs f0, 0x54(r31)
/* 806142CC  D0 1D 5D 04 */	stfs f0, 0x5d04(r29)
/* 806142D0  38 00 00 96 */	li r0, 0x96
/* 806142D4  B0 1D 5D 0C */	sth r0, 0x5d0c(r29)
/* 806142D8  38 00 00 03 */	li r0, 3
/* 806142DC  90 1D 5D D8 */	stw r0, 0x5dd8(r29)
/* 806142E0  38 80 00 17 */	li r4, 0x17
/* 806142E4  38 A0 00 00 */	li r5, 0
/* 806142E8  C0 5F 00 00 */	lfs f2, 0(r31)
/* 806142EC  4B FF C2 D1 */	bl anm_init__FP10b_ob_classifUcf
/* 806142F0  48 00 03 98 */	b lbl_80614688
lbl_806142F4:
/* 806142F4  80 7D 05 C0 */	lwz r3, 0x5c0(r29)
/* 806142F8  38 80 00 01 */	li r4, 1
/* 806142FC  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80614300  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80614304  40 82 00 18 */	bne lbl_8061431C
/* 80614308  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 8061430C  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80614310  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80614314  41 82 00 08 */	beq lbl_8061431C
/* 80614318  38 80 00 00 */	li r4, 0
lbl_8061431C:
/* 8061431C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80614320  41 82 00 1C */	beq lbl_8061433C
/* 80614324  7F A3 EB 78 */	mr r3, r29
/* 80614328  38 80 00 1B */	li r4, 0x1b
/* 8061432C  C0 3F 00 64 */	lfs f1, 0x64(r31)
/* 80614330  38 A0 00 02 */	li r5, 2
/* 80614334  C0 5F 00 00 */	lfs f2, 0(r31)
/* 80614338  4B FF C2 85 */	bl anm_init__FP10b_ob_classifUcf
lbl_8061433C:
/* 8061433C  A8 1D 47 78 */	lha r0, 0x4778(r29)
/* 80614340  2C 00 00 00 */	cmpwi r0, 0
/* 80614344  40 82 03 44 */	bne lbl_80614688
/* 80614348  38 00 00 02 */	li r0, 2
/* 8061434C  B0 1D 47 54 */	sth r0, 0x4754(r29)
/* 80614350  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 80614354  D0 1D 47 58 */	stfs f0, 0x4758(r29)
/* 80614358  C0 1F 00 CC */	lfs f0, 0xcc(r31)
/* 8061435C  D0 1D 47 5C */	stfs f0, 0x475c(r29)
/* 80614360  C0 1F 00 D0 */	lfs f0, 0xd0(r31)
/* 80614364  D0 1D 47 60 */	stfs f0, 0x4760(r29)
/* 80614368  38 00 00 96 */	li r0, 0x96
/* 8061436C  B0 1D 47 78 */	sth r0, 0x4778(r29)
/* 80614370  C0 1F 00 D4 */	lfs f0, 0xd4(r31)
/* 80614374  D0 1D 5C 84 */	stfs f0, 0x5c84(r29)
/* 80614378  C0 1F 00 D8 */	lfs f0, 0xd8(r31)
/* 8061437C  D0 1D 5C 88 */	stfs f0, 0x5c88(r29)
/* 80614380  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 80614384  D0 1D 5C 8C */	stfs f0, 0x5c8c(r29)
/* 80614388  7F A3 EB 78 */	mr r3, r29
/* 8061438C  38 80 00 17 */	li r4, 0x17
/* 80614390  C0 3F 00 64 */	lfs f1, 0x64(r31)
/* 80614394  38 A0 00 00 */	li r5, 0
/* 80614398  C0 5F 00 00 */	lfs f2, 0(r31)
/* 8061439C  4B FF C2 21 */	bl anm_init__FP10b_ob_classifUcf
/* 806143A0  48 00 02 E8 */	b lbl_80614688
lbl_806143A4:
/* 806143A4  C0 1F 00 DC */	lfs f0, 0xdc(r31)
/* 806143A8  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 806143AC  C0 1F 00 E0 */	lfs f0, 0xe0(r31)
/* 806143B0  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 806143B4  C0 1F 00 E4 */	lfs f0, 0xe4(r31)
/* 806143B8  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 806143BC  7C 83 23 78 */	mr r3, r4
/* 806143C0  38 81 00 44 */	addi r4, r1, 0x44
/* 806143C4  38 A0 27 10 */	li r5, 0x2710
/* 806143C8  38 C0 00 00 */	li r6, 0
/* 806143CC  81 83 06 28 */	lwz r12, 0x628(r3)
/* 806143D0  81 8C 01 54 */	lwz r12, 0x154(r12)
/* 806143D4  7D 89 03 A6 */	mtctr r12
/* 806143D8  4E 80 04 21 */	bctrl 
/* 806143DC  A8 1D 47 78 */	lha r0, 0x4778(r29)
/* 806143E0  2C 00 00 00 */	cmpwi r0, 0
/* 806143E4  40 82 02 A4 */	bne lbl_80614688
/* 806143E8  38 00 00 03 */	li r0, 3
/* 806143EC  B0 1D 47 54 */	sth r0, 0x4754(r29)
/* 806143F0  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 806143F4  D0 1D 47 58 */	stfs f0, 0x4758(r29)
/* 806143F8  C0 1F 00 E8 */	lfs f0, 0xe8(r31)
/* 806143FC  D0 1D 47 5C */	stfs f0, 0x475c(r29)
/* 80614400  C0 1F 00 EC */	lfs f0, 0xec(r31)
/* 80614404  D0 1D 47 60 */	stfs f0, 0x4760(r29)
/* 80614408  38 00 00 78 */	li r0, 0x78
/* 8061440C  B0 1D 47 78 */	sth r0, 0x4778(r29)
/* 80614410  C0 1F 00 F0 */	lfs f0, 0xf0(r31)
/* 80614414  D0 1D 5C 84 */	stfs f0, 0x5c84(r29)
/* 80614418  C0 1F 00 F4 */	lfs f0, 0xf4(r31)
/* 8061441C  D0 1D 5C 88 */	stfs f0, 0x5c88(r29)
/* 80614420  C0 1F 00 F8 */	lfs f0, 0xf8(r31)
/* 80614424  D0 1D 5C 8C */	stfs f0, 0x5c8c(r29)
/* 80614428  38 00 00 2A */	li r0, 0x2a
/* 8061442C  B0 1D 5C 80 */	sth r0, 0x5c80(r29)
/* 80614430  38 00 00 00 */	li r0, 0
/* 80614434  B0 1D 5C 82 */	sth r0, 0x5c82(r29)
/* 80614438  B0 1D 5D 0C */	sth r0, 0x5d0c(r29)
/* 8061443C  7F A3 EB 78 */	mr r3, r29
/* 80614440  38 80 00 17 */	li r4, 0x17
/* 80614444  C0 3F 00 64 */	lfs f1, 0x64(r31)
/* 80614448  38 A0 00 00 */	li r5, 0
/* 8061444C  C0 5F 00 00 */	lfs f2, 0(r31)
/* 80614450  4B FF C1 6D */	bl anm_init__FP10b_ob_classifUcf
/* 80614454  48 00 02 34 */	b lbl_80614688
lbl_80614458:
/* 80614458  80 1D 4D B8 */	lwz r0, 0x4db8(r29)
/* 8061445C  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 80614460  41 82 02 28 */	beq lbl_80614688
/* 80614464  A8 1D 47 78 */	lha r0, 0x4778(r29)
/* 80614468  2C 00 00 00 */	cmpwi r0, 0
/* 8061446C  40 82 02 1C */	bne lbl_80614688
/* 80614470  38 80 00 14 */	li r4, 0x14
/* 80614474  C0 3F 00 4C */	lfs f1, 0x4c(r31)
/* 80614478  38 A0 00 00 */	li r5, 0
/* 8061447C  C0 5F 00 00 */	lfs f2, 0(r31)
/* 80614480  4B FF C1 3D */	bl anm_init__FP10b_ob_classifUcf
/* 80614484  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 80614488  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8061448C  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80614490  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 80614494  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 80614498  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8061449C  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 806144A0  38 63 5B D4 */	addi r3, r3, 0x5bd4
/* 806144A4  38 80 00 08 */	li r4, 8
/* 806144A8  38 A0 00 1F */	li r5, 0x1f
/* 806144AC  38 C1 00 38 */	addi r6, r1, 0x38
/* 806144B0  4B A5 B5 75 */	bl StartShock__12dVibration_cFii4cXyz
/* 806144B4  3C 60 00 08 */	lis r3, 0x0008 /* 0x0008000B@ha */
/* 806144B8  38 03 00 0B */	addi r0, r3, 0x000B /* 0x0008000B@l */
/* 806144BC  90 01 00 28 */	stw r0, 0x28(r1)
/* 806144C0  3C 60 80 45 */	lis r3, mAudioMgrPtr__10Z2AudioMgr@ha /* 0x80451368@ha */
/* 806144C4  38 63 13 68 */	addi r3, r3, mAudioMgrPtr__10Z2AudioMgr@l /* 0x80451368@l */
/* 806144C8  80 63 00 00 */	lwz r3, 0(r3)
/* 806144CC  38 81 00 28 */	addi r4, r1, 0x28
/* 806144D0  38 A0 00 00 */	li r5, 0
/* 806144D4  38 C0 00 00 */	li r6, 0
/* 806144D8  38 E0 00 00 */	li r7, 0
/* 806144DC  C0 3F 00 00 */	lfs f1, 0(r31)
/* 806144E0  FC 40 08 90 */	fmr f2, f1
/* 806144E4  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 806144E8  FC 80 18 90 */	fmr f4, f3
/* 806144EC  39 00 00 00 */	li r8, 0
/* 806144F0  4B C9 74 95 */	bl seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc
/* 806144F4  38 00 00 0A */	li r0, 0xa
/* 806144F8  B0 1D 47 54 */	sth r0, 0x4754(r29)
/* 806144FC  C0 1F 00 70 */	lfs f0, 0x70(r31)
/* 80614500  D0 1D 5C E4 */	stfs f0, 0x5ce4(r29)
/* 80614504  38 60 00 00 */	li r3, 0
/* 80614508  B0 7D 47 78 */	sth r3, 0x4778(r29)
/* 8061450C  38 00 10 00 */	li r0, 0x1000
/* 80614510  B0 1D 04 DC */	sth r0, 0x4dc(r29)
/* 80614514  B0 7D 47 64 */	sth r3, 0x4764(r29)
/* 80614518  B0 7D 47 66 */	sth r3, 0x4766(r29)
/* 8061451C  38 00 00 32 */	li r0, 0x32
/* 80614520  B0 1D 5D 08 */	sth r0, 0x5d08(r29)
/* 80614524  38 80 00 01 */	li r4, 1
/* 80614528  3C 60 80 62 */	lis r3, moveSW2@ha /* 0x8061B504@ha */
/* 8061452C  90 83 B5 04 */	stw r4, moveSW2@l(r3)  /* 0x8061B504@l */
/* 80614530  38 00 00 2B */	li r0, 0x2b
/* 80614534  B0 1D 5C 80 */	sth r0, 0x5c80(r29)
/* 80614538  B0 9D 5C 82 */	sth r4, 0x5c82(r29)
/* 8061453C  38 00 00 D7 */	li r0, 0xd7
/* 80614540  B0 01 00 20 */	sth r0, 0x20(r1)
/* 80614544  3C 60 80 02 */	lis r3, fpcSch_JudgeForPName__FPvPv@ha /* 0x80023578@ha */
/* 80614548  38 63 35 78 */	addi r3, r3, fpcSch_JudgeForPName__FPvPv@l /* 0x80023578@l */
/* 8061454C  38 81 00 20 */	addi r4, r1, 0x20
/* 80614550  4B A0 52 A9 */	bl fopAcIt_Judge__FPFPvPv_PvPv
/* 80614554  38 00 00 01 */	li r0, 1
/* 80614558  B0 03 05 84 */	sth r0, 0x584(r3)
/* 8061455C  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 80614560  D0 1D 04 A8 */	stfs f0, 0x4a8(r29)
/* 80614564  C0 1F 00 FC */	lfs f0, 0xfc(r31)
/* 80614568  D0 1D 04 AC */	stfs f0, 0x4ac(r29)
/* 8061456C  C0 1F 01 00 */	lfs f0, 0x100(r31)
/* 80614570  D0 1D 04 B0 */	stfs f0, 0x4b0(r29)
/* 80614574  3B 20 00 00 */	li r25, 0
/* 80614578  3B 80 00 00 */	li r28, 0
/* 8061457C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80614580  3B 43 61 C0 */	addi r26, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80614584  3C 60 80 62 */	lis r3, iso_eff_5401@ha /* 0x8061B0C4@ha */
/* 80614588  3B 63 B0 C4 */	addi r27, r3, iso_eff_5401@l /* 0x8061B0C4@l */
lbl_8061458C:
/* 8061458C  80 7A 5D 3C */	lwz r3, 0x5d3c(r26)
/* 80614590  38 80 00 00 */	li r4, 0
/* 80614594  90 81 00 08 */	stw r4, 8(r1)
/* 80614598  38 00 FF FF */	li r0, -1
/* 8061459C  90 01 00 0C */	stw r0, 0xc(r1)
/* 806145A0  90 81 00 10 */	stw r4, 0x10(r1)
/* 806145A4  90 81 00 14 */	stw r4, 0x14(r1)
/* 806145A8  90 81 00 18 */	stw r4, 0x18(r1)
/* 806145AC  38 80 00 00 */	li r4, 0
/* 806145B0  7C BB E2 2E */	lhzx r5, r27, r28
/* 806145B4  38 DD 04 A8 */	addi r6, r29, 0x4a8
/* 806145B8  38 E0 00 00 */	li r7, 0
/* 806145BC  39 00 00 00 */	li r8, 0
/* 806145C0  39 20 00 00 */	li r9, 0
/* 806145C4  39 40 00 FF */	li r10, 0xff
/* 806145C8  C0 3F 00 00 */	lfs f1, 0(r31)
/* 806145CC  4B A3 84 C5 */	bl set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf
/* 806145D0  3B 39 00 01 */	addi r25, r25, 1
/* 806145D4  2C 19 00 05 */	cmpwi r25, 5
/* 806145D8  3B 9C 00 02 */	addi r28, r28, 2
/* 806145DC  41 80 FF B0 */	blt lbl_8061458C
/* 806145E0  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070372@ha */
/* 806145E4  38 03 03 72 */	addi r0, r3, 0x0372 /* 0x00070372@l */
/* 806145E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 806145EC  3C 60 80 45 */	lis r3, mAudioMgrPtr__10Z2AudioMgr@ha /* 0x80451368@ha */
/* 806145F0  38 63 13 68 */	addi r3, r3, mAudioMgrPtr__10Z2AudioMgr@l /* 0x80451368@l */
/* 806145F4  80 63 00 00 */	lwz r3, 0(r3)
/* 806145F8  38 81 00 24 */	addi r4, r1, 0x24
/* 806145FC  38 BD 04 A8 */	addi r5, r29, 0x4a8
/* 80614600  38 C0 00 00 */	li r6, 0
/* 80614604  38 E0 00 00 */	li r7, 0
/* 80614608  C0 3F 00 00 */	lfs f1, 0(r31)
/* 8061460C  FC 40 08 90 */	fmr f2, f1
/* 80614610  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 80614614  FC 80 18 90 */	fmr f4, f3
/* 80614618  39 00 00 00 */	li r8, 0
/* 8061461C  4B C9 73 69 */	bl seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc
/* 80614620  C3 FF 00 0C */	lfs f31, 0xc(r31)
/* 80614624  48 00 00 64 */	b lbl_80614688
lbl_80614628:
/* 80614628  38 7D 04 D0 */	addi r3, r29, 0x4d0
/* 8061462C  C0 3D 47 58 */	lfs f1, 0x4758(r29)
/* 80614630  C0 5F 01 04 */	lfs f2, 0x104(r31)
/* 80614634  C0 7F 00 5C */	lfs f3, 0x5c(r31)
/* 80614638  4B C5 B4 05 */	bl cLib_addCalc2__FPffff
/* 8061463C  38 7D 04 D4 */	addi r3, r29, 0x4d4
/* 80614640  C0 3F 00 E8 */	lfs f1, 0xe8(r31)
/* 80614644  C0 5F 01 04 */	lfs f2, 0x104(r31)
/* 80614648  C0 7F 00 5C */	lfs f3, 0x5c(r31)
/* 8061464C  4B C5 B3 F1 */	bl cLib_addCalc2__FPffff
/* 80614650  38 7D 04 D8 */	addi r3, r29, 0x4d8
/* 80614654  C0 3F 01 08 */	lfs f1, 0x108(r31)
/* 80614658  C0 5F 01 04 */	lfs f2, 0x104(r31)
/* 8061465C  C0 7F 00 5C */	lfs f3, 0x5c(r31)
/* 80614660  4B C5 B3 DD */	bl cLib_addCalc2__FPffff
/* 80614664  C3 FF 00 0C */	lfs f31, 0xc(r31)
/* 80614668  A8 7D 47 50 */	lha r3, 0x4750(r29)
/* 8061466C  38 03 FF FF */	addi r0, r3, -1
/* 80614670  B0 1D 47 50 */	sth r0, 0x4750(r29)
/* 80614674  38 7D 04 E0 */	addi r3, r29, 0x4e0
/* 80614678  38 80 40 00 */	li r4, 0x4000
/* 8061467C  38 A0 00 20 */	li r5, 0x20
/* 80614680  38 C0 00 80 */	li r6, 0x80
/* 80614684  4B C5 BF 85 */	bl cLib_addCalcAngleS2__FPssss
lbl_80614688:
/* 80614688  38 A0 00 00 */	li r5, 0
/* 8061468C  3B 20 00 00 */	li r25, 0
/* 80614690  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80614694  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 80614698  40 81 00 D0 */	ble lbl_80614768
/* 8061469C  38 61 00 2C */	addi r3, r1, 0x2c
/* 806146A0  38 9D 47 58 */	addi r4, r29, 0x4758
/* 806146A4  38 BD 04 D0 */	addi r5, r29, 0x4d0
/* 806146A8  4B C5 24 8D */	bl __mi__4cXyzCFRC3Vec
/* 806146AC  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 806146B0  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 806146B4  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 806146B8  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 806146BC  C0 41 00 34 */	lfs f2, 0x34(r1)
/* 806146C0  D0 41 00 4C */	stfs f2, 0x4c(r1)
/* 806146C4  EC 61 00 72 */	fmuls f3, f1, f1
/* 806146C8  EC 02 00 B2 */	fmuls f0, f2, f2
/* 806146CC  EF C3 00 2A */	fadds f30, f3, f0
/* 806146D0  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 806146D4  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 806146D8  40 81 00 0C */	ble lbl_806146E4
/* 806146DC  FC 00 F0 34 */	frsqrte f0, f30
/* 806146E0  EF C0 07 B2 */	fmuls f30, f0, f30
lbl_806146E4:
/* 806146E4  4B C5 2F 91 */	bl cM_atan2s__Fff
/* 806146E8  B0 7D 47 66 */	sth r3, 0x4766(r29)
/* 806146EC  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 806146F0  FC 40 F0 90 */	fmr f2, f30
/* 806146F4  4B C5 2F 81 */	bl cM_atan2s__Fff
/* 806146F8  7C 03 00 D0 */	neg r0, r3
/* 806146FC  B0 1D 47 64 */	sth r0, 0x4764(r29)
/* 80614700  C0 1F 00 4C */	lfs f0, 0x4c(r31)
/* 80614704  EC 40 07 B2 */	fmuls f2, f0, f30
/* 80614708  C0 1F 01 0C */	lfs f0, 0x10c(r31)
/* 8061470C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80614710  40 81 00 08 */	ble lbl_80614718
/* 80614714  FC 40 00 90 */	fmr f2, f0
lbl_80614718:
/* 80614718  A8 9D 47 50 */	lha r4, 0x4750(r29)
/* 8061471C  1C 04 05 14 */	mulli r0, r4, 0x514
/* 80614720  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 80614724  3C 60 80 44 */	lis r3, sincosTable___5JMath@ha /* 0x80439A20@ha */
/* 80614728  38 63 9A 20 */	addi r3, r3, sincosTable___5JMath@l /* 0x80439A20@l */
/* 8061472C  7C 03 04 2E */	lfsx f0, r3, r0
/* 80614730  EC 02 00 32 */	fmuls f0, f2, f0
/* 80614734  FC 00 00 1E */	fctiwz f0, f0
/* 80614738  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 8061473C  80 A1 00 54 */	lwz r5, 0x54(r1)
/* 80614740  1C 04 04 4C */	mulli r0, r4, 0x44c
/* 80614744  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 80614748  7C 23 04 2E */	lfsx f1, r3, r0
/* 8061474C  C0 1F 00 50 */	lfs f0, 0x50(r31)
/* 80614750  EC 02 00 32 */	fmuls f0, f2, f0
/* 80614754  EC 00 00 72 */	fmuls f0, f0, f1
/* 80614758  FC 00 00 1E */	fctiwz f0, f0
/* 8061475C  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 80614760  83 21 00 5C */	lwz r25, 0x5c(r1)
/* 80614764  48 00 00 08 */	b lbl_8061476C
lbl_80614768:
/* 80614768  3B C0 00 20 */	li r30, 0x20
lbl_8061476C:
/* 8061476C  38 7D 04 DE */	addi r3, r29, 0x4de
/* 80614770  A8 1D 47 66 */	lha r0, 0x4766(r29)
/* 80614774  7C 00 2A 14 */	add r0, r0, r5
/* 80614778  7C 04 07 34 */	extsh r4, r0
/* 8061477C  38 A0 00 10 */	li r5, 0x10
/* 80614780  38 C0 03 00 */	li r6, 0x300
/* 80614784  4B C5 BE 85 */	bl cLib_addCalcAngleS2__FPssss
/* 80614788  38 7D 04 DC */	addi r3, r29, 0x4dc
/* 8061478C  A8 1D 47 64 */	lha r0, 0x4764(r29)
/* 80614790  7C 00 CA 14 */	add r0, r0, r25
/* 80614794  7C 04 07 34 */	extsh r4, r0
/* 80614798  38 A0 00 20 */	li r5, 0x20
/* 8061479C  7F C6 F3 78 */	mr r6, r30
/* 806147A0  4B C5 BE 69 */	bl cLib_addCalcAngleS2__FPssss
/* 806147A4  D3 FD 05 2C */	stfs f31, 0x52c(r29)
/* 806147A8  38 60 00 04 */	li r3, 4
/* 806147AC  E3 E1 00 98 */	psq_l f31, 152(r1), 0, 0 /* qr0 */
/* 806147B0  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 806147B4  E3 C1 00 88 */	psq_l f30, 136(r1), 0, 0 /* qr0 */
/* 806147B8  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 806147BC  39 61 00 80 */	addi r11, r1, 0x80
/* 806147C0  4B D4 DA 59 */	bl _restgpr_25
/* 806147C4  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 806147C8  7C 08 03 A6 */	mtlr r0
/* 806147CC  38 21 00 A0 */	addi r1, r1, 0xa0
/* 806147D0  4E 80 00 20 */	blr 
