lbl_8068539C:
/* 8068539C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806853A0  7C 08 02 A6 */	mflr r0
/* 806853A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 806853A8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806853AC  7C 7F 1B 79 */	or. r31, r3, r3
/* 806853B0  41 82 00 1C */	beq lbl_806853CC
/* 806853B4  3C A0 80 68 */	lis r5, __vt__13daE_Bee_HIO_c@ha /* 0x80685624@ha */
/* 806853B8  38 05 56 24 */	addi r0, r5, __vt__13daE_Bee_HIO_c@l /* 0x80685624@l */
/* 806853BC  90 1F 00 00 */	stw r0, 0(r31)
/* 806853C0  7C 80 07 35 */	extsh. r0, r4
/* 806853C4  40 81 00 08 */	ble lbl_806853CC
/* 806853C8  4B C4 99 75 */	bl __dl__FPv
lbl_806853CC:
/* 806853CC  7F E3 FB 78 */	mr r3, r31
/* 806853D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 806853D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806853D8  7C 08 03 A6 */	mtlr r0
/* 806853DC  38 21 00 10 */	addi r1, r1, 0x10
/* 806853E0  4E 80 00 20 */	blr 
