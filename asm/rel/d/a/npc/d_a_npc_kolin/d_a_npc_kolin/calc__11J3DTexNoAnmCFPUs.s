lbl_8055913C:
/* 8055913C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80559140  7C 08 02 A6 */	mflr r0
/* 80559144  90 01 00 14 */	stw r0, 0x14(r1)
/* 80559148  7C 66 1B 78 */	mr r6, r3
/* 8055914C  7C 85 23 78 */	mr r5, r4
/* 80559150  80 63 00 08 */	lwz r3, 8(r3)
/* 80559154  A0 86 00 04 */	lhz r4, 4(r6)
/* 80559158  4B DD 1D F9 */	bl getTexNo__16J3DAnmTexPatternCFUsPUs
/* 8055915C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80559160  7C 08 03 A6 */	mtlr r0
/* 80559164  38 21 00 10 */	addi r1, r1, 0x10
/* 80559168  4E 80 00 20 */	blr 
