lbl_80BC3890:
/* 80BC3890  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BC3894  7C 08 02 A6 */	mflr r0
/* 80BC3898  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BC389C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80BC38A0  7C 7F 1B 79 */	or. r31, r3, r3
/* 80BC38A4  41 82 00 1C */	beq lbl_80BC38C0
/* 80BC38A8  3C A0 80 BC */	lis r5, __vt__8cM3dGAab@ha /* 0x80BC41C4@ha */
/* 80BC38AC  38 05 41 C4 */	addi r0, r5, __vt__8cM3dGAab@l /* 0x80BC41C4@l */
/* 80BC38B0  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80BC38B4  7C 80 07 35 */	extsh. r0, r4
/* 80BC38B8  40 81 00 08 */	ble lbl_80BC38C0
/* 80BC38BC  4B 70 B4 81 */	bl __dl__FPv
lbl_80BC38C0:
/* 80BC38C0  7F E3 FB 78 */	mr r3, r31
/* 80BC38C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80BC38C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BC38CC  7C 08 03 A6 */	mtlr r0
/* 80BC38D0  38 21 00 10 */	addi r1, r1, 0x10
/* 80BC38D4  4E 80 00 20 */	blr 
