lbl_80AFB6EC:
/* 80AFB6EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80AFB6F0  7C 08 02 A6 */	mflr r0
/* 80AFB6F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80AFB6F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80AFB6FC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80AFB700  41 82 00 10 */	beq lbl_80AFB710
/* 80AFB704  7C 80 07 35 */	extsh. r0, r4
/* 80AFB708  40 81 00 08 */	ble lbl_80AFB710
/* 80AFB70C  4B 7D 36 31 */	bl __dl__FPv
lbl_80AFB710:
/* 80AFB710  7F E3 FB 78 */	mr r3, r31
/* 80AFB714  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80AFB718  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80AFB71C  7C 08 03 A6 */	mtlr r0
/* 80AFB720  38 21 00 10 */	addi r1, r1, 0x10
/* 80AFB724  4E 80 00 20 */	blr 
