lbl_8054A724:
/* 8054A724  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8054A728  7C 08 02 A6 */	mflr r0
/* 8054A72C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8054A730  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8054A734  7C 7F 1B 78 */	mr r31, r3
/* 8054A738  7F E5 FB 78 */	mr r5, r31
/* 8054A73C  4B DF C9 55 */	bl PSVECAdd
/* 8054A740  7F E3 FB 78 */	mr r3, r31
/* 8054A744  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8054A748  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8054A74C  7C 08 03 A6 */	mtlr r0
/* 8054A750  38 21 00 10 */	addi r1, r1, 0x10
/* 8054A754  4E 80 00 20 */	blr 
