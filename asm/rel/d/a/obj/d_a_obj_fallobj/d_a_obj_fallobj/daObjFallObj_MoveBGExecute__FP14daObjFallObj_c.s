lbl_80BE4A24:
/* 80BE4A24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BE4A28  7C 08 02 A6 */	mflr r0
/* 80BE4A2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BE4A30  4B 49 3F 21 */	bl MoveBGExecute__16dBgS_MoveBgActorFv
/* 80BE4A34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BE4A38  7C 08 03 A6 */	mtlr r0
/* 80BE4A3C  38 21 00 10 */	addi r1, r1, 0x10
/* 80BE4A40  4E 80 00 20 */	blr 
