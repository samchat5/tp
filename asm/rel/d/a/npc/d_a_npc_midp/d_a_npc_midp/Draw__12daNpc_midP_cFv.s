lbl_80A71510:
/* 80A71510  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80A71514  7C 08 02 A6 */	mflr r0
/* 80A71518  90 01 00 24 */	stw r0, 0x24(r1)
/* 80A7151C  39 61 00 20 */	addi r11, r1, 0x20
/* 80A71520  4B 8F 0C BD */	bl _savegpr_29
/* 80A71524  7C 7D 1B 78 */	mr r29, r3
/* 80A71528  80 83 05 78 */	lwz r4, 0x578(r3)
/* 80A7152C  80 84 00 04 */	lwz r4, 4(r4)
/* 80A71530  83 E4 00 04 */	lwz r31, 4(r4)
/* 80A71534  83 C3 09 6C */	lwz r30, 0x96c(r3)
/* 80A71538  28 1E 00 00 */	cmplwi r30, 0
/* 80A7153C  41 82 00 24 */	beq lbl_80A71560
/* 80A71540  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 80A71544  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 80A71548  7D 89 03 A6 */	mtctr r12
/* 80A7154C  4E 80 04 21 */	bctrl 
/* 80A71550  80 9F 00 60 */	lwz r4, 0x60(r31)
/* 80A71554  54 60 13 BA */	rlwinm r0, r3, 2, 0xe, 0x1d
/* 80A71558  7C 64 00 2E */	lwzx r3, r4, r0
/* 80A7155C  93 C3 00 3C */	stw r30, 0x3c(r3)
lbl_80A71560:
/* 80A71560  83 DD 09 70 */	lwz r30, 0x970(r29)
/* 80A71564  28 1E 00 00 */	cmplwi r30, 0
/* 80A71568  41 82 00 28 */	beq lbl_80A71590
/* 80A7156C  7F A3 EB 78 */	mr r3, r29
/* 80A71570  81 9D 0E 3C */	lwz r12, 0xe3c(r29)
/* 80A71574  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80A71578  7D 89 03 A6 */	mtctr r12
/* 80A7157C  4E 80 04 21 */	bctrl 
/* 80A71580  80 9F 00 60 */	lwz r4, 0x60(r31)
/* 80A71584  54 60 13 BA */	rlwinm r0, r3, 2, 0xe, 0x1d
/* 80A71588  7C 64 00 2E */	lwzx r3, r4, r0
/* 80A7158C  93 C3 00 3C */	stw r30, 0x3c(r3)
lbl_80A71590:
/* 80A71590  7F A3 EB 78 */	mr r3, r29
/* 80A71594  38 80 00 00 */	li r4, 0
/* 80A71598  38 A0 00 00 */	li r5, 0
/* 80A7159C  C0 3D 0D E8 */	lfs f1, 0xde8(r29)
/* 80A715A0  38 C0 00 00 */	li r6, 0
/* 80A715A4  3C E0 80 A7 */	lis r7, lit_4186@ha /* 0x80A73A60@ha */
/* 80A715A8  C0 47 3A 60 */	lfs f2, lit_4186@l(r7)  /* 0x80A73A60@l */
/* 80A715AC  38 E0 00 01 */	li r7, 1
/* 80A715B0  39 00 00 00 */	li r8, 0
/* 80A715B4  39 20 00 00 */	li r9, 0
/* 80A715B8  4B 6D 72 B5 */	bl draw__8daNpcT_cFiifP11_GXColorS10fiii
/* 80A715BC  39 61 00 20 */	addi r11, r1, 0x20
/* 80A715C0  4B 8F 0C 69 */	bl _restgpr_29
/* 80A715C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80A715C8  7C 08 03 A6 */	mtlr r0
/* 80A715CC  38 21 00 20 */	addi r1, r1, 0x20
/* 80A715D0  4E 80 00 20 */	blr 
