lbl_80C21260:
/* 80C21260  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C21264  7C 08 02 A6 */	mflr r0
/* 80C21268  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C2126C  4B 45 76 E5 */	bl MoveBGExecute__16dBgS_MoveBgActorFv
/* 80C21270  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C21274  7C 08 03 A6 */	mtlr r0
/* 80C21278  38 21 00 10 */	addi r1, r1, 0x10
/* 80C2127C  4E 80 00 20 */	blr 
