lbl_80C3C554:
/* 80C3C554  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C3C558  7C 08 02 A6 */	mflr r0
/* 80C3C55C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C3C560  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C3C564  93 C1 00 08 */	stw r30, 8(r1)
/* 80C3C568  7C 7E 1B 79 */	or. r30, r3, r3
/* 80C3C56C  7C 9F 23 78 */	mr r31, r4
/* 80C3C570  41 82 00 38 */	beq lbl_80C3C5A8
/* 80C3C574  3C 80 80 C4 */	lis r4, __vt__12dBgS_ObjAcch@ha /* 0x80C3C7D8@ha */
/* 80C3C578  38 84 C7 D8 */	addi r4, r4, __vt__12dBgS_ObjAcch@l /* 0x80C3C7D8@l */
/* 80C3C57C  90 9E 00 10 */	stw r4, 0x10(r30)
/* 80C3C580  38 04 00 0C */	addi r0, r4, 0xc
/* 80C3C584  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80C3C588  38 04 00 18 */	addi r0, r4, 0x18
/* 80C3C58C  90 1E 00 24 */	stw r0, 0x24(r30)
/* 80C3C590  38 80 00 00 */	li r4, 0
/* 80C3C594  4B 43 9A 01 */	bl __dt__9dBgS_AcchFv
/* 80C3C598  7F E0 07 35 */	extsh. r0, r31
/* 80C3C59C  40 81 00 0C */	ble lbl_80C3C5A8
/* 80C3C5A0  7F C3 F3 78 */	mr r3, r30
/* 80C3C5A4  4B 69 27 99 */	bl __dl__FPv
lbl_80C3C5A8:
/* 80C3C5A8  7F C3 F3 78 */	mr r3, r30
/* 80C3C5AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C3C5B0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80C3C5B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C3C5B8  7C 08 03 A6 */	mtlr r0
/* 80C3C5BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80C3C5C0  4E 80 00 20 */	blr 
