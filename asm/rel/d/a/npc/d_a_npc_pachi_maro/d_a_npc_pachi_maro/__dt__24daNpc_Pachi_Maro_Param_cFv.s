lbl_80A9B820:
/* 80A9B820  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A9B824  7C 08 02 A6 */	mflr r0
/* 80A9B828  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A9B82C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80A9B830  7C 7F 1B 79 */	or. r31, r3, r3
/* 80A9B834  41 82 00 1C */	beq lbl_80A9B850
/* 80A9B838  3C A0 80 AA */	lis r5, __vt__24daNpc_Pachi_Maro_Param_c@ha /* 0x80A9C16C@ha */
/* 80A9B83C  38 05 C1 6C */	addi r0, r5, __vt__24daNpc_Pachi_Maro_Param_c@l /* 0x80A9C16C@l */
/* 80A9B840  90 1F 00 00 */	stw r0, 0(r31)
/* 80A9B844  7C 80 07 35 */	extsh. r0, r4
/* 80A9B848  40 81 00 08 */	ble lbl_80A9B850
/* 80A9B84C  4B 83 34 F1 */	bl __dl__FPv
lbl_80A9B850:
/* 80A9B850  7F E3 FB 78 */	mr r3, r31
/* 80A9B854  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80A9B858  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A9B85C  7C 08 03 A6 */	mtlr r0
/* 80A9B860  38 21 00 10 */	addi r1, r1, 0x10
/* 80A9B864  4E 80 00 20 */	blr 
