lbl_8069A7B4:
/* 8069A7B4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8069A7B8  7C 08 02 A6 */	mflr r0
/* 8069A7BC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8069A7C0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8069A7C4  7C 7F 1B 79 */	or. r31, r3, r3
/* 8069A7C8  41 82 00 1C */	beq lbl_8069A7E4
/* 8069A7CC  3C A0 80 6A */	lis r5, __vt__8cM3dGSph@ha /* 0x8069A9B0@ha */
/* 8069A7D0  38 05 A9 B0 */	addi r0, r5, __vt__8cM3dGSph@l /* 0x8069A9B0@l */
/* 8069A7D4  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8069A7D8  7C 80 07 35 */	extsh. r0, r4
/* 8069A7DC  40 81 00 08 */	ble lbl_8069A7E4
/* 8069A7E0  4B C3 45 5D */	bl __dl__FPv
lbl_8069A7E4:
/* 8069A7E4  7F E3 FB 78 */	mr r3, r31
/* 8069A7E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8069A7EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8069A7F0  7C 08 03 A6 */	mtlr r0
/* 8069A7F4  38 21 00 10 */	addi r1, r1, 0x10
/* 8069A7F8  4E 80 00 20 */	blr 
