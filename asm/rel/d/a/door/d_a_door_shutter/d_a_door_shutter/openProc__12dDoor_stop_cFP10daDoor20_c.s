lbl_80466458:
/* 80466458  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8046645C  7C 08 02 A6 */	mflr r0
/* 80466460  90 01 00 24 */	stw r0, 0x24(r1)
/* 80466464  39 61 00 20 */	addi r11, r1, 0x20
/* 80466468  4B EF BD 75 */	bl _savegpr_29
/* 8046646C  7C 7D 1B 78 */	mr r29, r3
/* 80466470  7C 9E 23 78 */	mr r30, r4
/* 80466474  3C 60 80 46 */	lis r3, lit_4018@ha /* 0x80466820@ha */
/* 80466478  3B E3 68 20 */	addi r31, r3, lit_4018@l /* 0x80466820@l */
/* 8046647C  88 1D 00 0B */	lbz r0, 0xb(r29)
/* 80466480  28 00 00 00 */	cmplwi r0, 0
/* 80466484  40 82 00 0C */	bne lbl_80466490
/* 80466488  38 60 00 01 */	li r3, 1
/* 8046648C  48 00 00 44 */	b lbl_804664D0
lbl_80466490:
/* 80466490  38 7E 05 2C */	addi r3, r30, 0x52c
/* 80466494  C0 3F 00 68 */	lfs f1, 0x68(r31)
/* 80466498  C0 5F 00 B4 */	lfs f2, 0xb4(r31)
/* 8046649C  4B E0 A2 A5 */	bl cLib_chaseF__FPfff
/* 804664A0  38 7D 00 04 */	addi r3, r29, 4
/* 804664A4  C0 3F 00 78 */	lfs f1, 0x78(r31)
/* 804664A8  C0 5E 05 2C */	lfs f2, 0x52c(r30)
/* 804664AC  4B E0 A2 95 */	bl cLib_chaseF__FPfff
/* 804664B0  2C 03 00 00 */	cmpwi r3, 0
/* 804664B4  41 82 00 18 */	beq lbl_804664CC
/* 804664B8  38 00 00 00 */	li r0, 0
/* 804664BC  98 1D 00 0B */	stb r0, 0xb(r29)
/* 804664C0  98 1D 00 08 */	stb r0, 8(r29)
/* 804664C4  38 60 00 02 */	li r3, 2
/* 804664C8  48 00 00 08 */	b lbl_804664D0
lbl_804664CC:
/* 804664CC  38 60 00 00 */	li r3, 0
lbl_804664D0:
/* 804664D0  39 61 00 20 */	addi r11, r1, 0x20
/* 804664D4  4B EF BD 55 */	bl _restgpr_29
/* 804664D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804664DC  7C 08 03 A6 */	mtlr r0
/* 804664E0  38 21 00 20 */	addi r1, r1, 0x20
/* 804664E4  4E 80 00 20 */	blr 
