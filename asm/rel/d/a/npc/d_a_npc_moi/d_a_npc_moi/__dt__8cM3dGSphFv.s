lbl_80A79F68:
/* 80A79F68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A79F6C  7C 08 02 A6 */	mflr r0
/* 80A79F70  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A79F74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80A79F78  7C 7F 1B 79 */	or. r31, r3, r3
/* 80A79F7C  41 82 00 1C */	beq lbl_80A79F98
/* 80A79F80  3C A0 80 A8 */	lis r5, __vt__8cM3dGSph@ha /* 0x80A7BEB8@ha */
/* 80A79F84  38 05 BE B8 */	addi r0, r5, __vt__8cM3dGSph@l /* 0x80A7BEB8@l */
/* 80A79F88  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80A79F8C  7C 80 07 35 */	extsh. r0, r4
/* 80A79F90  40 81 00 08 */	ble lbl_80A79F98
/* 80A79F94  4B 85 4D A9 */	bl __dl__FPv
lbl_80A79F98:
/* 80A79F98  7F E3 FB 78 */	mr r3, r31
/* 80A79F9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80A79FA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A79FA4  7C 08 03 A6 */	mtlr r0
/* 80A79FA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80A79FAC  4E 80 00 20 */	blr 
