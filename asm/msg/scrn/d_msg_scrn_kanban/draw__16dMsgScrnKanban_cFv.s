lbl_80245618:
/* 80245618  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8024561C  7C 08 02 A6 */	mflr r0
/* 80245620  90 01 00 14 */	stw r0, 0x14(r1)
/* 80245624  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80245628  93 C1 00 08 */	stw r30, 8(r1)
/* 8024562C  7C 7E 1B 78 */	mr r30, r3
/* 80245630  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80245634  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80245638  83 E3 5F 50 */	lwz r31, 0x5f50(r3)
/* 8024563C  7F E3 FB 78 */	mr r3, r31
/* 80245640  81 9F 00 00 */	lwz r12, 0(r31)
/* 80245644  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80245648  7D 89 03 A6 */	mtctr r12
/* 8024564C  4E 80 04 21 */	bctrl 
/* 80245650  80 7E 00 04 */	lwz r3, 4(r30)
/* 80245654  C0 22 B2 C0 */	lfs f1, lit_3944(r2)
/* 80245658  FC 40 08 90 */	fmr f2, f1
/* 8024565C  7F E4 FB 78 */	mr r4, r31
/* 80245660  48 0B 38 75 */	bl draw__9J2DScreenFffPC14J2DGrafContext
/* 80245664  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 80245668  38 80 00 00 */	li r4, 0
/* 8024566C  C0 22 B2 C0 */	lfs f1, lit_3944(r2)
/* 80245670  FC 40 08 90 */	fmr f2, f1
/* 80245674  C0 62 B2 C4 */	lfs f3, lit_3945(r2)
/* 80245678  81 83 00 00 */	lwz r12, 0(r3)
/* 8024567C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80245680  7D 89 03 A6 */	mtctr r12
/* 80245684  4E 80 04 21 */	bctrl 
/* 80245688  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8024568C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80245690  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80245694  7C 08 03 A6 */	mtlr r0
/* 80245698  38 21 00 10 */	addi r1, r1, 0x10
/* 8024569C  4E 80 00 20 */	blr 
