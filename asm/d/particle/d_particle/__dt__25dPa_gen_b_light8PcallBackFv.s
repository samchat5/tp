lbl_8004FDAC:
/* 8004FDAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8004FDB0  7C 08 02 A6 */	mflr r0
/* 8004FDB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8004FDB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8004FDBC  93 C1 00 08 */	stw r30, 8(r1)
/* 8004FDC0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8004FDC4  7C 9F 23 78 */	mr r31, r4
/* 8004FDC8  41 82 00 28 */	beq lbl_8004FDF0
/* 8004FDCC  3C 80 80 3B */	lis r4, __vt__25dPa_gen_b_light8PcallBack@ha /* 0x803A83D8@ha */
/* 8004FDD0  38 04 83 D8 */	addi r0, r4, __vt__25dPa_gen_b_light8PcallBack@l /* 0x803A83D8@l */
/* 8004FDD4  90 1E 00 00 */	stw r0, 0(r30)
/* 8004FDD8  38 80 00 00 */	li r4, 0
/* 8004FDDC  48 22 F1 C9 */	bl __dt__19JPAParticleCallBackFv
/* 8004FDE0  7F E0 07 35 */	extsh. r0, r31
/* 8004FDE4  40 81 00 0C */	ble lbl_8004FDF0
/* 8004FDE8  7F C3 F3 78 */	mr r3, r30
/* 8004FDEC  48 27 EF 51 */	bl __dl__FPv
lbl_8004FDF0:
/* 8004FDF0  7F C3 F3 78 */	mr r3, r30
/* 8004FDF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8004FDF8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8004FDFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8004FE00  7C 08 03 A6 */	mtlr r0
/* 8004FE04  38 21 00 10 */	addi r1, r1, 0x10
/* 8004FE08  4E 80 00 20 */	blr 
