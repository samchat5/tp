lbl_80BD0844:
/* 80BD0844  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BD0848  7C 08 02 A6 */	mflr r0
/* 80BD084C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BD0850  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80BD0854  7C 7F 1B 79 */	or. r31, r3, r3
/* 80BD0858  41 82 00 10 */	beq lbl_80BD0868
/* 80BD085C  7C 80 07 35 */	extsh. r0, r4
/* 80BD0860  40 81 00 08 */	ble lbl_80BD0868
/* 80BD0864  4B 6F E4 D9 */	bl __dl__FPv
lbl_80BD0868:
/* 80BD0868  7F E3 FB 78 */	mr r3, r31
/* 80BD086C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80BD0870  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BD0874  7C 08 03 A6 */	mtlr r0
/* 80BD0878  38 21 00 10 */	addi r1, r1, 0x10
/* 80BD087C  4E 80 00 20 */	blr 
