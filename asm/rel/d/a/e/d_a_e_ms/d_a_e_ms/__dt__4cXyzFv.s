lbl_807294B4:
/* 807294B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 807294B8  7C 08 02 A6 */	mflr r0
/* 807294BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 807294C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 807294C4  7C 7F 1B 79 */	or. r31, r3, r3
/* 807294C8  41 82 00 10 */	beq lbl_807294D8
/* 807294CC  7C 80 07 35 */	extsh. r0, r4
/* 807294D0  40 81 00 08 */	ble lbl_807294D8
/* 807294D4  4B BA 58 69 */	bl __dl__FPv
lbl_807294D8:
/* 807294D8  7F E3 FB 78 */	mr r3, r31
/* 807294DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 807294E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 807294E4  7C 08 03 A6 */	mtlr r0
/* 807294E8  38 21 00 10 */	addi r1, r1, 0x10
/* 807294EC  4E 80 00 20 */	blr 
