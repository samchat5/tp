lbl_809C947C:
/* 809C947C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809C9480  7C 08 02 A6 */	mflr r0
/* 809C9484  90 01 00 14 */	stw r0, 0x14(r1)
/* 809C9488  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809C948C  7C 7F 1B 79 */	or. r31, r3, r3
/* 809C9490  41 82 00 10 */	beq lbl_809C94A0
/* 809C9494  7C 80 07 35 */	extsh. r0, r4
/* 809C9498  40 81 00 08 */	ble lbl_809C94A0
/* 809C949C  4B 90 58 A1 */	bl __dl__FPv
lbl_809C94A0:
/* 809C94A0  7F E3 FB 78 */	mr r3, r31
/* 809C94A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809C94A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809C94AC  7C 08 03 A6 */	mtlr r0
/* 809C94B0  38 21 00 10 */	addi r1, r1, 0x10
/* 809C94B4  4E 80 00 20 */	blr 
