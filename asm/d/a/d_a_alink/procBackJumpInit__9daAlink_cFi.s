lbl_800C57A4:
/* 800C57A4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800C57A8  7C 08 02 A6 */	mflr r0
/* 800C57AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 800C57B0  39 61 00 20 */	addi r11, r1, 0x20
/* 800C57B4  48 29 CA 21 */	bl _savegpr_27
/* 800C57B8  7C 7E 1B 78 */	mr r30, r3
/* 800C57BC  7C 9B 23 78 */	mr r27, r4
/* 800C57C0  81 83 06 28 */	lwz r12, 0x628(r3)
/* 800C57C4  81 8C 01 88 */	lwz r12, 0x188(r12)
/* 800C57C8  7D 89 03 A6 */	mtctr r12
/* 800C57CC  4E 80 04 21 */	bctrl 
/* 800C57D0  7C 7D 1B 78 */	mr r29, r3
/* 800C57D4  7F C3 F3 78 */	mr r3, r30
/* 800C57D8  48 01 76 19 */	bl checkUpperGuardAnime__9daAlink_cCFv
/* 800C57DC  7C 7F 1B 78 */	mr r31, r3
/* 800C57E0  A0 1E 2F E8 */	lhz r0, 0x2fe8(r30)
/* 800C57E4  20 00 00 E6 */	subfic r0, r0, 0xe6
/* 800C57E8  7C 00 00 34 */	cntlzw r0, r0
/* 800C57EC  54 1C DE 3E */	rlwinm r28, r0, 0x1b, 0x18, 0x1f
/* 800C57F0  7F C3 F3 78 */	mr r3, r30
/* 800C57F4  38 80 00 12 */	li r4, 0x12
/* 800C57F8  4B FF C7 75 */	bl commonProcInit__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 800C57FC  2C 1B 00 00 */	cmpwi r27, 0
/* 800C5800  41 82 00 54 */	beq lbl_800C5854
/* 800C5804  7F C3 F3 78 */	mr r3, r30
/* 800C5808  38 80 00 26 */	li r4, 0x26
/* 800C580C  3C A0 80 39 */	lis r5, m__21daAlinkHIO_cutDown_c0@ha /* 0x8038DD44@ha */
/* 800C5810  38 A5 DD 44 */	addi r5, r5, m__21daAlinkHIO_cutDown_c0@l /* 0x8038DD44@l */
/* 800C5814  38 A5 00 50 */	addi r5, r5, 0x50
/* 800C5818  4B FE 78 DD */	bl setSingleAnimeParam__9daAlink_cFQ29daAlink_c11daAlink_ANMPC16daAlinkHIO_anm_c
/* 800C581C  3C 60 80 39 */	lis r3, m__21daAlinkHIO_cutDown_c0@ha /* 0x8038DD44@ha */
/* 800C5820  38 63 DD 44 */	addi r3, r3, m__21daAlinkHIO_cutDown_c0@l /* 0x8038DD44@l */
/* 800C5824  C0 03 00 6C */	lfs f0, 0x6c(r3)
/* 800C5828  D0 1E 33 98 */	stfs f0, 0x3398(r30)
/* 800C582C  C0 03 00 70 */	lfs f0, 0x70(r3)
/* 800C5830  D0 1E 04 FC */	stfs f0, 0x4fc(r30)
/* 800C5834  7F C3 F3 78 */	mr r3, r30
/* 800C5838  3C 80 00 01 */	lis r4, 0x0001 /* 0x00010095@ha */
/* 800C583C  38 84 00 95 */	addi r4, r4, 0x0095 /* 0x00010095@l */
/* 800C5840  81 9E 06 28 */	lwz r12, 0x628(r30)
/* 800C5844  81 8C 01 14 */	lwz r12, 0x114(r12)
/* 800C5848  7D 89 03 A6 */	mtctr r12
/* 800C584C  4E 80 04 21 */	bctrl 
/* 800C5850  48 00 00 4C */	b lbl_800C589C
lbl_800C5854:
/* 800C5854  7F C3 F3 78 */	mr r3, r30
/* 800C5858  38 80 00 26 */	li r4, 0x26
/* 800C585C  3C A0 80 39 */	lis r5, m__22daAlinkHIO_backJump_c0@ha /* 0x8038D82C@ha */
/* 800C5860  38 A5 D8 2C */	addi r5, r5, m__22daAlinkHIO_backJump_c0@l /* 0x8038D82C@l */
/* 800C5864  4B FE 78 91 */	bl setSingleAnimeParam__9daAlink_cFQ29daAlink_c11daAlink_ANMPC16daAlinkHIO_anm_c
/* 800C5868  3C 60 80 39 */	lis r3, m__22daAlinkHIO_backJump_c0@ha /* 0x8038D82C@ha */
/* 800C586C  38 63 D8 2C */	addi r3, r3, m__22daAlinkHIO_backJump_c0@l /* 0x8038D82C@l */
/* 800C5870  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 800C5874  D0 1E 33 98 */	stfs f0, 0x3398(r30)
/* 800C5878  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 800C587C  D0 1E 04 FC */	stfs f0, 0x4fc(r30)
/* 800C5880  7F C3 F3 78 */	mr r3, r30
/* 800C5884  3C 80 00 01 */	lis r4, 0x0001 /* 0x00010007@ha */
/* 800C5888  38 84 00 07 */	addi r4, r4, 0x0007 /* 0x00010007@l */
/* 800C588C  81 9E 06 28 */	lwz r12, 0x628(r30)
/* 800C5890  81 8C 01 14 */	lwz r12, 0x114(r12)
/* 800C5894  7D 89 03 A6 */	mtctr r12
/* 800C5898  4E 80 04 21 */	bctrl 
lbl_800C589C:
/* 800C589C  C0 1E 33 98 */	lfs f0, 0x3398(r30)
/* 800C58A0  D0 1E 34 78 */	stfs f0, 0x3478(r30)
/* 800C58A4  28 1D 00 00 */	cmplwi r29, 0
/* 800C58A8  41 82 00 1C */	beq lbl_800C58C4
/* 800C58AC  80 1E 31 A0 */	lwz r0, 0x31a0(r30)
/* 800C58B0  60 00 20 00 */	ori r0, r0, 0x2000
/* 800C58B4  90 1E 31 A0 */	stw r0, 0x31a0(r30)
/* 800C58B8  38 00 00 05 */	li r0, 5
/* 800C58BC  B0 1E 30 08 */	sth r0, 0x3008(r30)
/* 800C58C0  48 00 00 0C */	b lbl_800C58CC
lbl_800C58C4:
/* 800C58C4  38 00 00 00 */	li r0, 0
/* 800C58C8  B0 1E 30 08 */	sth r0, 0x3008(r30)
lbl_800C58CC:
/* 800C58CC  2C 1C 00 00 */	cmpwi r28, 0
/* 800C58D0  41 82 00 4C */	beq lbl_800C591C
/* 800C58D4  A8 7E 04 E6 */	lha r3, 0x4e6(r30)
/* 800C58D8  3C 63 00 01 */	addis r3, r3, 1
/* 800C58DC  38 03 80 00 */	addi r0, r3, -32768
/* 800C58E0  B0 1E 04 E6 */	sth r0, 0x4e6(r30)
/* 800C58E4  7F C3 F3 78 */	mr r3, r30
/* 800C58E8  38 80 00 00 */	li r4, 0
/* 800C58EC  38 A0 80 00 */	li r5, -32768
/* 800C58F0  38 C0 00 00 */	li r6, 0
/* 800C58F4  4B FE 82 85 */	bl setOldRootQuaternion__9daAlink_cFsss
/* 800C58F8  80 7E 20 60 */	lwz r3, 0x2060(r30)
/* 800C58FC  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 800C5900  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 800C5904  C0 02 95 1C */	lfs f0, lit_20991(r2)
/* 800C5908  EC 01 00 2A */	fadds f0, f1, f0
/* 800C590C  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 800C5910  80 1E 05 7C */	lwz r0, 0x57c(r30)
/* 800C5914  64 00 04 00 */	oris r0, r0, 0x400
/* 800C5918  90 1E 05 7C */	stw r0, 0x57c(r30)
lbl_800C591C:
/* 800C591C  A8 7E 04 E6 */	lha r3, 0x4e6(r30)
/* 800C5920  3C 63 00 01 */	addis r3, r3, 1
/* 800C5924  38 03 80 00 */	addi r0, r3, -32768
/* 800C5928  B0 1E 04 DE */	sth r0, 0x4de(r30)
/* 800C592C  38 00 00 02 */	li r0, 2
/* 800C5930  90 1E 31 98 */	stw r0, 0x3198(r30)
/* 800C5934  2C 1F 00 00 */	cmpwi r31, 0
/* 800C5938  41 82 00 10 */	beq lbl_800C5948
/* 800C593C  80 1E 05 70 */	lwz r0, 0x570(r30)
/* 800C5940  60 00 00 02 */	ori r0, r0, 2
/* 800C5944  90 1E 05 70 */	stw r0, 0x570(r30)
lbl_800C5948:
/* 800C5948  38 60 00 01 */	li r3, 1
/* 800C594C  39 61 00 20 */	addi r11, r1, 0x20
/* 800C5950  48 29 C8 D1 */	bl _restgpr_27
/* 800C5954  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800C5958  7C 08 03 A6 */	mtlr r0
/* 800C595C  38 21 00 20 */	addi r1, r1, 0x20
/* 800C5960  4E 80 00 20 */	blr 
