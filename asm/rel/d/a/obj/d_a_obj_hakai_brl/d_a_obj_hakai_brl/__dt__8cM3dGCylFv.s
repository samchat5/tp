lbl_80C1682C:
/* 80C1682C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C16830  7C 08 02 A6 */	mflr r0
/* 80C16834  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C16838  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C1683C  7C 7F 1B 79 */	or. r31, r3, r3
/* 80C16840  41 82 00 1C */	beq lbl_80C1685C
/* 80C16844  3C A0 80 C1 */	lis r5, __vt__8cM3dGCyl@ha /* 0x80C173F4@ha */
/* 80C16848  38 05 73 F4 */	addi r0, r5, __vt__8cM3dGCyl@l /* 0x80C173F4@l */
/* 80C1684C  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80C16850  7C 80 07 35 */	extsh. r0, r4
/* 80C16854  40 81 00 08 */	ble lbl_80C1685C
/* 80C16858  4B 6B 84 E5 */	bl __dl__FPv
lbl_80C1685C:
/* 80C1685C  7F E3 FB 78 */	mr r3, r31
/* 80C16860  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C16864  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C16868  7C 08 03 A6 */	mtlr r0
/* 80C1686C  38 21 00 10 */	addi r1, r1, 0x10
/* 80C16870  4E 80 00 20 */	blr 
