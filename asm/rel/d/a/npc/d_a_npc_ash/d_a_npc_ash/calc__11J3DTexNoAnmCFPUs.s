lbl_8095BCC0:
/* 8095BCC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8095BCC4  7C 08 02 A6 */	mflr r0
/* 8095BCC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8095BCCC  7C 66 1B 78 */	mr r6, r3
/* 8095BCD0  7C 85 23 78 */	mr r5, r4
/* 8095BCD4  80 63 00 08 */	lwz r3, 8(r3)
/* 8095BCD8  A0 86 00 04 */	lhz r4, 4(r6)
/* 8095BCDC  4B 9C F2 75 */	bl getTexNo__16J3DAnmTexPatternCFUsPUs
/* 8095BCE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8095BCE4  7C 08 03 A6 */	mtlr r0
/* 8095BCE8  38 21 00 10 */	addi r1, r1, 0x10
/* 8095BCEC  4E 80 00 20 */	blr 
