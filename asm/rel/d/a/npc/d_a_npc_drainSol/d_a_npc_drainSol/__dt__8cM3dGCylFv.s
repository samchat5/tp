lbl_809ADF18:
/* 809ADF18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809ADF1C  7C 08 02 A6 */	mflr r0
/* 809ADF20  90 01 00 14 */	stw r0, 0x14(r1)
/* 809ADF24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809ADF28  7C 7F 1B 79 */	or. r31, r3, r3
/* 809ADF2C  41 82 00 1C */	beq lbl_809ADF48
/* 809ADF30  3C A0 80 9B */	lis r5, __vt__8cM3dGCyl@ha /* 0x809AFC10@ha */
/* 809ADF34  38 05 FC 10 */	addi r0, r5, __vt__8cM3dGCyl@l /* 0x809AFC10@l */
/* 809ADF38  90 1F 00 14 */	stw r0, 0x14(r31)
/* 809ADF3C  7C 80 07 35 */	extsh. r0, r4
/* 809ADF40  40 81 00 08 */	ble lbl_809ADF48
/* 809ADF44  4B 92 0D F9 */	bl __dl__FPv
lbl_809ADF48:
/* 809ADF48  7F E3 FB 78 */	mr r3, r31
/* 809ADF4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809ADF50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809ADF54  7C 08 03 A6 */	mtlr r0
/* 809ADF58  38 21 00 10 */	addi r1, r1, 0x10
/* 809ADF5C  4E 80 00 20 */	blr 
