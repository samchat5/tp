lbl_809B3094:
/* 809B3094  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809B3098  7C 08 02 A6 */	mflr r0
/* 809B309C  90 01 00 14 */	stw r0, 0x14(r1)
/* 809B30A0  7C 60 1B 78 */	mr r0, r3
/* 809B30A4  2C 04 00 00 */	cmpwi r4, 0
/* 809B30A8  40 82 00 30 */	bne lbl_809B30D8
/* 809B30AC  3C 60 80 43 */	lis r3, j3dSys@ha /* 0x80434AC8@ha */
/* 809B30B0  38 63 4A C8 */	addi r3, r3, j3dSys@l /* 0x80434AC8@l */
/* 809B30B4  80 A3 00 38 */	lwz r5, 0x38(r3)
/* 809B30B8  80 65 00 14 */	lwz r3, 0x14(r5)
/* 809B30BC  28 03 00 00 */	cmplwi r3, 0
/* 809B30C0  41 82 00 18 */	beq lbl_809B30D8
/* 809B30C4  7C 04 03 78 */	mr r4, r0
/* 809B30C8  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 809B30CC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 809B30D0  7D 89 03 A6 */	mtctr r12
/* 809B30D4  4E 80 04 21 */	bctrl 
lbl_809B30D8:
/* 809B30D8  38 60 00 01 */	li r3, 1
/* 809B30DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809B30E0  7C 08 03 A6 */	mtlr r0
/* 809B30E4  38 21 00 10 */	addi r1, r1, 0x10
/* 809B30E8  4E 80 00 20 */	blr 
