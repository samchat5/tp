lbl_809585C8:
/* 809585C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809585CC  7C 08 02 A6 */	mflr r0
/* 809585D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 809585D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809585D8  7C 7F 1B 79 */	or. r31, r3, r3
/* 809585DC  41 82 00 1C */	beq lbl_809585F8
/* 809585E0  3C A0 80 96 */	lis r5, __vt__8cM3dGAab@ha /* 0x8095DD08@ha */
/* 809585E4  38 05 DD 08 */	addi r0, r5, __vt__8cM3dGAab@l /* 0x8095DD08@l */
/* 809585E8  90 1F 00 18 */	stw r0, 0x18(r31)
/* 809585EC  7C 80 07 35 */	extsh. r0, r4
/* 809585F0  40 81 00 08 */	ble lbl_809585F8
/* 809585F4  4B 97 67 49 */	bl __dl__FPv
lbl_809585F8:
/* 809585F8  7F E3 FB 78 */	mr r3, r31
/* 809585FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80958600  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80958604  7C 08 03 A6 */	mtlr r0
/* 80958608  38 21 00 10 */	addi r1, r1, 0x10
/* 8095860C  4E 80 00 20 */	blr 
