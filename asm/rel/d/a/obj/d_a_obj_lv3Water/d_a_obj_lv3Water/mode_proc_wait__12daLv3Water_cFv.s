lbl_80C596F4:
/* 80C596F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C596F8  7C 08 02 A6 */	mflr r0
/* 80C596FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C59700  88 83 06 02 */	lbz r4, 0x602(r3)
/* 80C59704  88 03 06 03 */	lbz r0, 0x603(r3)
/* 80C59708  7C 04 00 40 */	cmplw r4, r0
/* 80C5970C  41 82 00 38 */	beq lbl_80C59744
/* 80C59710  A8 03 04 E4 */	lha r0, 0x4e4(r3)
/* 80C59714  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 80C59718  2C 04 00 FF */	cmpwi r4, 0xff
/* 80C5971C  41 82 00 18 */	beq lbl_80C59734
/* 80C59720  38 63 05 A8 */	addi r3, r3, 0x5a8
/* 80C59724  38 A0 00 FF */	li r5, 0xff
/* 80C59728  38 C0 00 01 */	li r6, 1
/* 80C5972C  4B 3E F2 15 */	bl orderEvent__17dEvLib_callback_cFiii
/* 80C59730  48 00 00 14 */	b lbl_80C59744
lbl_80C59734:
/* 80C59734  81 83 05 9C */	lwz r12, 0x59c(r3)
/* 80C59738  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80C5973C  7D 89 03 A6 */	mtctr r12
/* 80C59740  4E 80 04 21 */	bctrl 
lbl_80C59744:
/* 80C59744  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C59748  7C 08 03 A6 */	mtlr r0
/* 80C5974C  38 21 00 10 */	addi r1, r1, 0x10
/* 80C59750  4E 80 00 20 */	blr 
