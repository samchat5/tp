lbl_806577DC:
/* 806577DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806577E0  7C 08 02 A6 */	mflr r0
/* 806577E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 806577E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806577EC  7C 7F 1B 79 */	or. r31, r3, r3
/* 806577F0  41 82 00 1C */	beq lbl_8065780C
/* 806577F4  3C A0 80 65 */	lis r5, __vt__Q211daCoach2D_c6c_list@ha /* 0x80657A60@ha */
/* 806577F8  38 05 7A 60 */	addi r0, r5, __vt__Q211daCoach2D_c6c_list@l /* 0x80657A60@l */
/* 806577FC  90 1F 00 00 */	stw r0, 0(r31)
/* 80657800  7C 80 07 35 */	extsh. r0, r4
/* 80657804  40 81 00 08 */	ble lbl_8065780C
/* 80657808  4B C7 75 35 */	bl __dl__FPv
lbl_8065780C:
/* 8065780C  7F E3 FB 78 */	mr r3, r31
/* 80657810  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80657814  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80657818  7C 08 03 A6 */	mtlr r0
/* 8065781C  38 21 00 10 */	addi r1, r1, 0x10
/* 80657820  4E 80 00 20 */	blr 
