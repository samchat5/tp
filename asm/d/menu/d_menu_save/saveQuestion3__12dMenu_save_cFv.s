lbl_801F1644:
/* 801F1644  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F1648  7C 08 02 A6 */	mflr r0
/* 801F164C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F1650  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F1654  7C 7F 1B 78 */	mr r31, r3
/* 801F1658  38 00 00 01 */	li r0, 1
/* 801F165C  98 03 01 B0 */	stb r0, 0x1b0(r3)
/* 801F1660  3C 60 80 43 */	lis r3, g_msHIO@ha /* 0x8042E84C@ha */
/* 801F1664  38 63 E8 4C */	addi r3, r3, g_msHIO@l /* 0x8042E84C@l */
/* 801F1668  88 03 00 0B */	lbz r0, 0xb(r3)
/* 801F166C  98 1F 01 BD */	stb r0, 0x1bd(r31)
/* 801F1670  88 9F 01 BD */	lbz r4, 0x1bd(r31)
/* 801F1674  80 6D 8C 40 */	lwz r3, sManager__10JFWDisplay(r13)
/* 801F1678  80 63 00 04 */	lwz r3, 4(r3)
/* 801F167C  28 03 00 00 */	cmplwi r3, 0
/* 801F1680  41 82 00 14 */	beq lbl_801F1694
/* 801F1684  81 83 00 00 */	lwz r12, 0(r3)
/* 801F1688  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801F168C  7D 89 03 A6 */	mtctr r12
/* 801F1690  4E 80 04 21 */	bctrl 
lbl_801F1694:
/* 801F1694  38 00 00 00 */	li r0, 0
/* 801F1698  98 1F 21 A0 */	stb r0, 0x21a0(r31)
/* 801F169C  38 00 00 04 */	li r0, 4
/* 801F16A0  98 1F 01 B2 */	stb r0, 0x1b2(r31)
/* 801F16A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F16A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F16AC  7C 08 03 A6 */	mtlr r0
/* 801F16B0  38 21 00 10 */	addi r1, r1, 0x10
/* 801F16B4  4E 80 00 20 */	blr 
