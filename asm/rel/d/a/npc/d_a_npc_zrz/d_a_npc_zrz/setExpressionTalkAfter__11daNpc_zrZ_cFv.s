lbl_80B97128:
/* 80B97128  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80B9712C  7C 08 02 A6 */	mflr r0
/* 80B97130  90 01 00 14 */	stw r0, 0x14(r1)
/* 80B97134  38 80 00 01 */	li r4, 1
/* 80B97138  3C A0 80 BA */	lis r5, lit_4991@ha /* 0x80B9B0A4@ha */
/* 80B9713C  C0 25 B0 A4 */	lfs f1, lit_4991@l(r5)  /* 0x80B9B0A4@l */
/* 80B97140  81 83 0B 44 */	lwz r12, 0xb44(r3)
/* 80B97144  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80B97148  7D 89 03 A6 */	mtctr r12
/* 80B9714C  4E 80 04 21 */	bctrl 
/* 80B97150  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80B97154  7C 08 03 A6 */	mtlr r0
/* 80B97158  38 21 00 10 */	addi r1, r1, 0x10
/* 80B9715C  4E 80 00 20 */	blr 
