lbl_80780840:
/* 80780840  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80780844  7C 08 02 A6 */	mflr r0
/* 80780848  90 01 00 14 */	stw r0, 0x14(r1)
/* 8078084C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80780850  7C 7F 1B 79 */	or. r31, r3, r3
/* 80780854  41 82 00 1C */	beq lbl_80780870
/* 80780858  3C A0 80 78 */	lis r5, __vt__12daE_S1_HIO_c@ha /* 0x80781328@ha */
/* 8078085C  38 05 13 28 */	addi r0, r5, __vt__12daE_S1_HIO_c@l /* 0x80781328@l */
/* 80780860  90 1F 00 00 */	stw r0, 0(r31)
/* 80780864  7C 80 07 35 */	extsh. r0, r4
/* 80780868  40 81 00 08 */	ble lbl_80780870
/* 8078086C  4B B4 E4 D1 */	bl __dl__FPv
lbl_80780870:
/* 80780870  7F E3 FB 78 */	mr r3, r31
/* 80780874  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80780878  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8078087C  7C 08 03 A6 */	mtlr r0
/* 80780880  38 21 00 10 */	addi r1, r1, 0x10
/* 80780884  4E 80 00 20 */	blr 
