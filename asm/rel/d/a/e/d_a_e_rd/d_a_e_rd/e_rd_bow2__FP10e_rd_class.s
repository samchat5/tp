lbl_80508334:
/* 80508334  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80508338  7C 08 02 A6 */	mflr r0
/* 8050833C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80508340  39 61 00 30 */	addi r11, r1, 0x30
/* 80508344  4B E5 9E 91 */	bl _savegpr_27
/* 80508348  7C 7C 1B 78 */	mr r28, r3
/* 8050834C  3C 80 80 52 */	lis r4, lit_4208@ha /* 0x80518584@ha */
/* 80508350  3B E4 85 84 */	addi r31, r4, lit_4208@l /* 0x80518584@l */
/* 80508354  4B FF C7 CD */	bl get_pla__FP10fopAc_ac_c
/* 80508358  7C 7E 1B 78 */	mr r30, r3
/* 8050835C  80 7C 05 D0 */	lwz r3, 0x5d0(r28)
/* 80508360  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 80508364  FC 00 00 1E */	fctiwz f0, f0
/* 80508368  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8050836C  83 61 00 14 */	lwz r27, 0x14(r1)
/* 80508370  3B A0 00 00 */	li r29, 0
/* 80508374  A8 1C 05 B4 */	lha r0, 0x5b4(r28)
/* 80508378  2C 00 00 01 */	cmpwi r0, 1
/* 8050837C  41 81 00 34 */	bgt lbl_805083B0
/* 80508380  C0 3C 09 78 */	lfs f1, 0x978(r28)
/* 80508384  C0 1C 09 80 */	lfs f0, 0x980(r28)
/* 80508388  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8050838C  40 80 00 20 */	bge lbl_805083AC
/* 80508390  7F 83 E3 78 */	mr r3, r28
/* 80508394  7F C4 F3 78 */	mr r4, r30
/* 80508398  4B FF D6 0D */	bl other_bg_check__FP10e_rd_classP10fopAc_ac_c
/* 8050839C  2C 03 00 00 */	cmpwi r3, 0
/* 805083A0  40 82 00 0C */	bne lbl_805083AC
/* 805083A4  38 00 00 02 */	li r0, 2
/* 805083A8  B0 1C 05 B4 */	sth r0, 0x5b4(r28)
lbl_805083AC:
/* 805083AC  3B A0 00 01 */	li r29, 1
lbl_805083B0:
/* 805083B0  A8 1C 05 B4 */	lha r0, 0x5b4(r28)
/* 805083B4  2C 00 00 03 */	cmpwi r0, 3
/* 805083B8  41 82 01 3C */	beq lbl_805084F4
/* 805083BC  40 80 00 1C */	bge lbl_805083D8
/* 805083C0  2C 00 00 01 */	cmpwi r0, 1
/* 805083C4  41 82 00 74 */	beq lbl_80508438
/* 805083C8  40 80 00 C0 */	bge lbl_80508488
/* 805083CC  2C 00 00 00 */	cmpwi r0, 0
/* 805083D0  40 80 00 18 */	bge lbl_805083E8
/* 805083D4  48 00 03 8C */	b lbl_80508760
lbl_805083D8:
/* 805083D8  2C 00 00 05 */	cmpwi r0, 5
/* 805083DC  41 82 02 A8 */	beq lbl_80508684
/* 805083E0  40 80 03 80 */	bge lbl_80508760
/* 805083E4  48 00 01 C4 */	b lbl_805085A8
lbl_805083E8:
/* 805083E8  A8 1C 09 90 */	lha r0, 0x990(r28)
/* 805083EC  2C 00 00 00 */	cmpwi r0, 0
/* 805083F0  40 82 03 70 */	bne lbl_80508760
/* 805083F4  7F 83 E3 78 */	mr r3, r28
/* 805083F8  38 80 00 1D */	li r4, 0x1d
/* 805083FC  C0 3F 00 58 */	lfs f1, 0x58(r31)
/* 80508400  38 A0 00 02 */	li r5, 2
/* 80508404  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80508408  4B FF C7 CD */	bl anm_init__FP10e_rd_classifUcf
/* 8050840C  38 00 00 01 */	li r0, 1
/* 80508410  B0 1C 05 B4 */	sth r0, 0x5b4(r28)
/* 80508414  C0 3F 00 E8 */	lfs f1, 0xe8(r31)
/* 80508418  4B D5 F5 3D */	bl cM_rndF__Ff
/* 8050841C  C0 1F 00 E4 */	lfs f0, 0xe4(r31)
/* 80508420  EC 00 08 2A */	fadds f0, f0, f1
/* 80508424  FC 00 00 1E */	fctiwz f0, f0
/* 80508428  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8050842C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80508430  B0 1C 09 90 */	sth r0, 0x990(r28)
/* 80508434  48 00 03 2C */	b lbl_80508760
lbl_80508438:
/* 80508438  A8 1C 09 90 */	lha r0, 0x990(r28)
/* 8050843C  2C 00 00 00 */	cmpwi r0, 0
/* 80508440  40 82 03 20 */	bne lbl_80508760
/* 80508444  7F 83 E3 78 */	mr r3, r28
/* 80508448  38 80 00 40 */	li r4, 0x40
/* 8050844C  C0 3F 00 58 */	lfs f1, 0x58(r31)
/* 80508450  38 A0 00 02 */	li r5, 2
/* 80508454  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80508458  4B FF C7 7D */	bl anm_init__FP10e_rd_classifUcf
/* 8050845C  C0 3F 00 00 */	lfs f1, 0(r31)
/* 80508460  4B D5 F4 F5 */	bl cM_rndF__Ff
/* 80508464  C0 1F 00 00 */	lfs f0, 0(r31)
/* 80508468  EC 00 08 2A */	fadds f0, f0, f1
/* 8050846C  FC 00 00 1E */	fctiwz f0, f0
/* 80508470  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80508474  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80508478  B0 1C 09 90 */	sth r0, 0x990(r28)
/* 8050847C  38 00 00 00 */	li r0, 0
/* 80508480  B0 1C 05 B4 */	sth r0, 0x5b4(r28)
/* 80508484  48 00 02 DC */	b lbl_80508760
lbl_80508488:
/* 80508488  7F 83 E3 78 */	mr r3, r28
/* 8050848C  38 80 00 39 */	li r4, 0x39
/* 80508490  C0 3F 00 54 */	lfs f1, 0x54(r31)
/* 80508494  38 A0 00 00 */	li r5, 0
/* 80508498  C0 5F 00 08 */	lfs f2, 8(r31)
/* 8050849C  4B FF C7 39 */	bl anm_init__FP10e_rd_classifUcf
/* 805084A0  80 7C 06 78 */	lwz r3, 0x678(r28)
/* 805084A4  38 80 00 07 */	li r4, 7
/* 805084A8  3C A0 80 40 */	lis r5, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 805084AC  38 A5 61 C0 */	addi r5, r5, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 805084B0  3C A5 00 02 */	addis r5, r5, 2
/* 805084B4  38 C0 00 80 */	li r6, 0x80
/* 805084B8  38 A5 C2 F8 */	addi r5, r5, -15624
/* 805084BC  4B B3 3E 31 */	bl getRes__14dRes_control_cFPCclP11dRes_info_ci
/* 805084C0  7C 64 1B 78 */	mr r4, r3
/* 805084C4  80 7C 06 98 */	lwz r3, 0x698(r28)
/* 805084C8  38 A0 00 00 */	li r5, 0
/* 805084CC  C0 3F 00 54 */	lfs f1, 0x54(r31)
/* 805084D0  C0 5F 00 D8 */	lfs f2, 0xd8(r31)
/* 805084D4  C0 7F 00 04 */	lfs f3, 4(r31)
/* 805084D8  C0 9F 00 60 */	lfs f4, 0x60(r31)
/* 805084DC  4B B0 89 95 */	bl setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff
/* 805084E0  38 00 00 03 */	li r0, 3
/* 805084E4  B0 1C 05 B4 */	sth r0, 0x5b4(r28)
/* 805084E8  C0 1F 00 04 */	lfs f0, 4(r31)
/* 805084EC  D0 1C 05 2C */	stfs f0, 0x52c(r28)
/* 805084F0  48 00 02 70 */	b lbl_80508760
lbl_805084F4:
/* 805084F4  38 00 00 04 */	li r0, 4
/* 805084F8  98 1C 09 C8 */	stb r0, 0x9c8(r28)
/* 805084FC  2C 1B 00 0A */	cmpwi r27, 0xa
/* 80508500  41 80 00 0C */	blt lbl_8050850C
/* 80508504  38 00 00 01 */	li r0, 1
/* 80508508  98 1C 09 A2 */	stb r0, 0x9a2(r28)
lbl_8050850C:
/* 8050850C  2C 1B 00 14 */	cmpwi r27, 0x14
/* 80508510  40 82 00 2C */	bne lbl_8050853C
/* 80508514  3C 00 00 08 */	lis r0, 8
/* 80508518  90 01 00 08 */	stw r0, 8(r1)
/* 8050851C  38 7C 05 D4 */	addi r3, r28, 0x5d4
/* 80508520  38 81 00 08 */	addi r4, r1, 8
/* 80508524  38 A0 00 00 */	li r5, 0
/* 80508528  38 C0 FF FF */	li r6, -1
/* 8050852C  81 9C 05 D4 */	lwz r12, 0x5d4(r28)
/* 80508530  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80508534  7D 89 03 A6 */	mtctr r12
/* 80508538  4E 80 04 21 */	bctrl 
lbl_8050853C:
/* 8050853C  80 7C 05 D0 */	lwz r3, 0x5d0(r28)
/* 80508540  38 80 00 01 */	li r4, 1
/* 80508544  88 03 00 11 */	lbz r0, 0x11(r3)
/* 80508548  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8050854C  40 82 00 18 */	bne lbl_80508564
/* 80508550  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80508554  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 80508558  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 8050855C  41 82 00 08 */	beq lbl_80508564
/* 80508560  38 80 00 00 */	li r4, 0
lbl_80508564:
/* 80508564  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80508568  41 82 01 F8 */	beq lbl_80508760
/* 8050856C  7F 83 E3 78 */	mr r3, r28
/* 80508570  38 80 00 3A */	li r4, 0x3a
/* 80508574  C0 3F 00 DC */	lfs f1, 0xdc(r31)
/* 80508578  38 A0 00 02 */	li r5, 2
/* 8050857C  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80508580  4B FF C6 55 */	bl anm_init__FP10e_rd_classifUcf
/* 80508584  C0 3F 00 58 */	lfs f1, 0x58(r31)
/* 80508588  4B D5 F3 CD */	bl cM_rndF__Ff
/* 8050858C  FC 00 08 1E */	fctiwz f0, f1
/* 80508590  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80508594  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80508598  B0 1C 09 90 */	sth r0, 0x990(r28)
/* 8050859C  38 00 00 04 */	li r0, 4
/* 805085A0  B0 1C 05 B4 */	sth r0, 0x5b4(r28)
/* 805085A4  48 00 01 BC */	b lbl_80508760
lbl_805085A8:
/* 805085A8  38 00 00 04 */	li r0, 4
/* 805085AC  98 1C 09 C8 */	stb r0, 0x9c8(r28)
/* 805085B0  A8 1C 09 90 */	lha r0, 0x990(r28)
/* 805085B4  2C 00 00 00 */	cmpwi r0, 0
/* 805085B8  40 82 00 C0 */	bne lbl_80508678
/* 805085BC  C0 3C 09 78 */	lfs f1, 0x978(r28)
/* 805085C0  C0 1C 09 80 */	lfs f0, 0x980(r28)
/* 805085C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 805085C8  41 81 00 18 */	bgt lbl_805085E0
/* 805085CC  7F 83 E3 78 */	mr r3, r28
/* 805085D0  7F C4 F3 78 */	mr r4, r30
/* 805085D4  4B FF D3 D1 */	bl other_bg_check__FP10e_rd_classP10fopAc_ac_c
/* 805085D8  2C 03 00 00 */	cmpwi r3, 0
/* 805085DC  41 82 00 14 */	beq lbl_805085F0
lbl_805085E0:
/* 805085E0  38 00 00 00 */	li r0, 0
/* 805085E4  B0 1C 05 B4 */	sth r0, 0x5b4(r28)
/* 805085E8  7F A3 EB 78 */	mr r3, r29
/* 805085EC  48 00 01 8C */	b lbl_80508778
lbl_805085F0:
/* 805085F0  4B D2 FC 3D */	bl getStatus__12dMsgObject_cFv
/* 805085F4  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 805085F8  20 60 00 01 */	subfic r3, r0, 1
/* 805085FC  30 03 FF FF */	addic r0, r3, -1
/* 80508600  7C 00 19 10 */	subfe r0, r0, r3
/* 80508604  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80508608  40 82 00 70 */	bne lbl_80508678
/* 8050860C  88 1C 09 A4 */	lbz r0, 0x9a4(r28)
/* 80508610  7C 00 07 75 */	extsb. r0, r0
/* 80508614  40 82 00 64 */	bne lbl_80508678
/* 80508618  7F 83 E3 78 */	mr r3, r28
/* 8050861C  38 80 00 38 */	li r4, 0x38
/* 80508620  C0 3F 00 08 */	lfs f1, 8(r31)
/* 80508624  38 A0 00 00 */	li r5, 0
/* 80508628  FC 40 08 90 */	fmr f2, f1
/* 8050862C  4B FF C5 A9 */	bl anm_init__FP10e_rd_classifUcf
/* 80508630  80 7C 06 78 */	lwz r3, 0x678(r28)
/* 80508634  38 80 00 0A */	li r4, 0xa
/* 80508638  3C A0 80 40 */	lis r5, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8050863C  38 A5 61 C0 */	addi r5, r5, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80508640  3C A5 00 02 */	addis r5, r5, 2
/* 80508644  38 C0 00 80 */	li r6, 0x80
/* 80508648  38 A5 C2 F8 */	addi r5, r5, -15624
/* 8050864C  4B B3 3C A1 */	bl getRes__14dRes_control_cFPCclP11dRes_info_ci
/* 80508650  7C 64 1B 78 */	mr r4, r3
/* 80508654  80 7C 06 98 */	lwz r3, 0x698(r28)
/* 80508658  38 A0 00 00 */	li r5, 0
/* 8050865C  C0 3F 00 08 */	lfs f1, 8(r31)
/* 80508660  FC 40 08 90 */	fmr f2, f1
/* 80508664  C0 7F 00 04 */	lfs f3, 4(r31)
/* 80508668  C0 9F 00 60 */	lfs f4, 0x60(r31)
/* 8050866C  4B B0 88 05 */	bl setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff
/* 80508670  38 00 00 05 */	li r0, 5
/* 80508674  B0 1C 05 B4 */	sth r0, 0x5b4(r28)
lbl_80508678:
/* 80508678  38 00 00 01 */	li r0, 1
/* 8050867C  98 1C 09 A2 */	stb r0, 0x9a2(r28)
/* 80508680  48 00 00 E0 */	b lbl_80508760
lbl_80508684:
/* 80508684  2C 1B 00 03 */	cmpwi r27, 3
/* 80508688  41 81 00 14 */	bgt lbl_8050869C
/* 8050868C  38 00 00 01 */	li r0, 1
/* 80508690  98 1C 09 A2 */	stb r0, 0x9a2(r28)
/* 80508694  38 00 00 04 */	li r0, 4
/* 80508698  98 1C 09 C8 */	stb r0, 0x9c8(r28)
lbl_8050869C:
/* 8050869C  2C 1B 00 02 */	cmpwi r27, 2
/* 805086A0  40 82 00 0C */	bne lbl_805086AC
/* 805086A4  38 00 00 01 */	li r0, 1
/* 805086A8  98 1C 09 A3 */	stb r0, 0x9a3(r28)
lbl_805086AC:
/* 805086AC  80 7C 05 D0 */	lwz r3, 0x5d0(r28)
/* 805086B0  38 80 00 01 */	li r4, 1
/* 805086B4  88 03 00 11 */	lbz r0, 0x11(r3)
/* 805086B8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 805086BC  40 82 00 18 */	bne lbl_805086D4
/* 805086C0  C0 3F 00 04 */	lfs f1, 4(r31)
/* 805086C4  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 805086C8  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 805086CC  41 82 00 08 */	beq lbl_805086D4
/* 805086D0  38 80 00 00 */	li r4, 0
lbl_805086D4:
/* 805086D4  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 805086D8  41 82 00 88 */	beq lbl_80508760
/* 805086DC  A8 1C 09 92 */	lha r0, 0x992(r28)
/* 805086E0  2C 00 00 00 */	cmpwi r0, 0
/* 805086E4  40 82 00 74 */	bne lbl_80508758
/* 805086E8  C0 3C 04 D4 */	lfs f1, 0x4d4(r28)
/* 805086EC  C0 1E 04 D4 */	lfs f0, 0x4d4(r30)
/* 805086F0  EC 01 00 28 */	fsubs f0, f1, f0
/* 805086F4  FC 00 02 10 */	fabs f0, f0
/* 805086F8  FC 20 00 18 */	frsp f1, f0
/* 805086FC  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 80508700  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80508704  40 80 00 54 */	bge lbl_80508758
/* 80508708  C0 5C 09 78 */	lfs f2, 0x978(r28)
/* 8050870C  3C 60 80 52 */	lis r3, l_HIO@ha /* 0x80519194@ha */
/* 80508710  38 63 91 94 */	addi r3, r3, l_HIO@l /* 0x80519194@l */
/* 80508714  C0 23 00 28 */	lfs f1, 0x28(r3)
/* 80508718  C0 1F 00 AC */	lfs f0, 0xac(r31)
/* 8050871C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80508720  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80508724  40 80 00 34 */	bge lbl_80508758
/* 80508728  7F 83 E3 78 */	mr r3, r28
/* 8050872C  C0 3F 00 E0 */	lfs f1, 0xe0(r31)
/* 80508730  4B FF D7 15 */	bl way_bg_check__FP10e_rd_classf
/* 80508734  2C 03 00 00 */	cmpwi r3, 0
/* 80508738  40 82 00 14 */	bne lbl_8050874C
/* 8050873C  38 00 00 05 */	li r0, 5
/* 80508740  B0 1C 09 72 */	sth r0, 0x972(r28)
/* 80508744  38 00 00 00 */	li r0, 0
/* 80508748  98 1C 12 95 */	stb r0, 0x1295(r28)
lbl_8050874C:
/* 8050874C  38 00 00 00 */	li r0, 0
/* 80508750  B0 1C 05 B4 */	sth r0, 0x5b4(r28)
/* 80508754  48 00 00 0C */	b lbl_80508760
lbl_80508758:
/* 80508758  38 00 00 00 */	li r0, 0
/* 8050875C  B0 1C 05 B4 */	sth r0, 0x5b4(r28)
lbl_80508760:
/* 80508760  38 7C 04 DE */	addi r3, r28, 0x4de
/* 80508764  A8 9C 09 7C */	lha r4, 0x97c(r28)
/* 80508768  38 A0 00 04 */	li r5, 4
/* 8050876C  38 C0 10 00 */	li r6, 0x1000
/* 80508770  4B D6 7E 99 */	bl cLib_addCalcAngleS2__FPssss
/* 80508774  7F A3 EB 78 */	mr r3, r29
lbl_80508778:
/* 80508778  39 61 00 30 */	addi r11, r1, 0x30
/* 8050877C  4B E5 9A A5 */	bl _restgpr_27
/* 80508780  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80508784  7C 08 03 A6 */	mtlr r0
/* 80508788  38 21 00 30 */	addi r1, r1, 0x30
/* 8050878C  4E 80 00 20 */	blr 
