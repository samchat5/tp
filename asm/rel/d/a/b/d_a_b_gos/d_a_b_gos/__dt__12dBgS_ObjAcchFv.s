lbl_806052B0:
/* 806052B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806052B4  7C 08 02 A6 */	mflr r0
/* 806052B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 806052BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806052C0  93 C1 00 08 */	stw r30, 8(r1)
/* 806052C4  7C 7E 1B 79 */	or. r30, r3, r3
/* 806052C8  7C 9F 23 78 */	mr r31, r4
/* 806052CC  41 82 00 38 */	beq lbl_80605304
/* 806052D0  3C 80 80 60 */	lis r4, __vt__12dBgS_ObjAcch@ha /* 0x806055CC@ha */
/* 806052D4  38 84 55 CC */	addi r4, r4, __vt__12dBgS_ObjAcch@l /* 0x806055CC@l */
/* 806052D8  90 9E 00 10 */	stw r4, 0x10(r30)
/* 806052DC  38 04 00 0C */	addi r0, r4, 0xc
/* 806052E0  90 1E 00 14 */	stw r0, 0x14(r30)
/* 806052E4  38 04 00 18 */	addi r0, r4, 0x18
/* 806052E8  90 1E 00 24 */	stw r0, 0x24(r30)
/* 806052EC  38 80 00 00 */	li r4, 0
/* 806052F0  4B A7 0C A5 */	bl __dt__9dBgS_AcchFv
/* 806052F4  7F E0 07 35 */	extsh. r0, r31
/* 806052F8  40 81 00 0C */	ble lbl_80605304
/* 806052FC  7F C3 F3 78 */	mr r3, r30
/* 80605300  4B CC 9A 3D */	bl __dl__FPv
lbl_80605304:
/* 80605304  7F C3 F3 78 */	mr r3, r30
/* 80605308  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8060530C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80605310  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80605314  7C 08 03 A6 */	mtlr r0
/* 80605318  38 21 00 10 */	addi r1, r1, 0x10
/* 8060531C  4E 80 00 20 */	blr 
