lbl_8031544C:
/* 8031544C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80315450  7C 08 02 A6 */	mflr r0
/* 80315454  90 01 00 24 */	stw r0, 0x24(r1)
/* 80315458  39 61 00 20 */	addi r11, r1, 0x20
/* 8031545C  48 04 CD 79 */	bl _savegpr_27
/* 80315460  7C 7F 1B 78 */	mr r31, r3
/* 80315464  80 0D 90 50 */	lwz r0, sOldVcdVatCmd__8J3DShape(r13)
/* 80315468  80 63 00 2C */	lwz r3, 0x2c(r3)
/* 8031546C  7C 00 18 40 */	cmplw r0, r3
/* 80315470  41 82 00 14 */	beq lbl_80315484
/* 80315474  38 80 00 C0 */	li r4, 0xc0
/* 80315478  48 04 AA 79 */	bl GXCallDisplayList
/* 8031547C  80 1F 00 2C */	lwz r0, 0x2c(r31)
/* 80315480  90 0D 90 50 */	stw r0, sOldVcdVatCmd__8J3DShape(r13)
lbl_80315484:
/* 80315484  88 0D 90 54 */	lbz r0, data_804515D4(r13)
/* 80315488  28 00 00 00 */	cmplwi r0, 0
/* 8031548C  41 82 00 60 */	beq lbl_803154EC
/* 80315490  88 1F 00 48 */	lbz r0, 0x48(r31)
/* 80315494  28 00 00 00 */	cmplwi r0, 0
/* 80315498  40 82 00 54 */	bne lbl_803154EC
/* 8031549C  80 BF 00 40 */	lwz r5, 0x40(r31)
/* 803154A0  38 80 00 08 */	li r4, 8
/* 803154A4  3C 60 CC 01 */	lis r3, 0xCC01 /* 0xCC008000@ha */
/* 803154A8  98 83 80 00 */	stb r4, 0x8000(r3)  /* 0xCC008000@l */
/* 803154AC  38 00 00 30 */	li r0, 0x30
/* 803154B0  98 03 80 00 */	stb r0, -0x8000(r3)
/* 803154B4  90 A3 80 00 */	stw r5, -0x8000(r3)
/* 803154B8  80 DF 00 44 */	lwz r6, 0x44(r31)
/* 803154BC  98 83 80 00 */	stb r4, -0x8000(r3)
/* 803154C0  38 00 00 40 */	li r0, 0x40
/* 803154C4  98 03 80 00 */	stb r0, -0x8000(r3)
/* 803154C8  90 C3 80 00 */	stw r6, -0x8000(r3)
/* 803154CC  38 00 00 10 */	li r0, 0x10
/* 803154D0  98 03 80 00 */	stb r0, -0x8000(r3)
/* 803154D4  38 00 00 01 */	li r0, 1
/* 803154D8  B0 03 80 00 */	sth r0, -0x8000(r3)
/* 803154DC  38 00 10 18 */	li r0, 0x1018
/* 803154E0  B0 03 80 00 */	sth r0, -0x8000(r3)
/* 803154E4  90 A3 80 00 */	stw r5, -0x8000(r3)
/* 803154E8  90 C3 80 00 */	stw r6, -0x8000(r3)
lbl_803154EC:
/* 803154EC  7F E3 FB 78 */	mr r3, r31
/* 803154F0  4B FF FE A9 */	bl setArrayAndBindPipeline__8J3DShapeCFv
/* 803154F4  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 803154F8  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 803154FC  40 82 00 6C */	bne lbl_80315568
/* 80315500  88 0D 90 31 */	lbz r0, struct_804515B0+0x1(r13)
/* 80315504  28 00 00 00 */	cmplwi r0, 0
/* 80315508  41 82 00 08 */	beq lbl_80315510
/* 8031550C  4B FF DB 9D */	bl resetMtxLoadCache__11J3DShapeMtxFv
lbl_80315510:
/* 80315510  A3 DF 00 0A */	lhz r30, 0xa(r31)
/* 80315514  3B 60 00 00 */	li r27, 0
/* 80315518  83 BF 00 38 */	lwz r29, 0x38(r31)
/* 8031551C  83 FF 00 3C */	lwz r31, 0x3c(r31)
/* 80315520  48 00 00 38 */	b lbl_80315558
lbl_80315524:
/* 80315524  57 7C 13 BA */	rlwinm r28, r27, 2, 0xe, 0x1d
/* 80315528  7C 7D E0 2E */	lwzx r3, r29, r28
/* 8031552C  28 03 00 00 */	cmplwi r3, 0
/* 80315530  41 82 00 14 */	beq lbl_80315544
/* 80315534  81 83 00 00 */	lwz r12, 0(r3)
/* 80315538  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 8031553C  7D 89 03 A6 */	mtctr r12
/* 80315540  4E 80 04 21 */	bctrl 
lbl_80315544:
/* 80315544  7C 7F E0 2E */	lwzx r3, r31, r28
/* 80315548  28 03 00 00 */	cmplwi r3, 0
/* 8031554C  41 82 00 08 */	beq lbl_80315554
/* 80315550  4B FF F5 85 */	bl draw__12J3DShapeDrawCFv
lbl_80315554:
/* 80315554  3B 7B 00 01 */	addi r27, r27, 1
lbl_80315558:
/* 80315558  57 60 04 3E */	clrlwi r0, r27, 0x10
/* 8031555C  7C 00 F0 40 */	cmplw r0, r30
/* 80315560  41 80 FF C4 */	blt lbl_80315524
/* 80315564  48 00 00 64 */	b lbl_803155C8
lbl_80315568:
/* 80315568  3C 60 80 43 */	lis r3, j3dSys@ha /* 0x80434AC8@ha */
/* 8031556C  3B C3 4A C8 */	addi r30, r3, j3dSys@l /* 0x80434AC8@l */
/* 80315570  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80315574  80 63 00 30 */	lwz r3, 0x30(r3)
/* 80315578  38 80 00 00 */	li r4, 0
/* 8031557C  4B FF A5 65 */	bl J3DFifoLoadPosMtxImm__FPA4_fUl
/* 80315580  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 80315584  80 63 00 30 */	lwz r3, 0x30(r3)
/* 80315588  38 80 00 00 */	li r4, 0
/* 8031558C  4B FF A5 D5 */	bl J3DFifoLoadNrmMtxImm__FPA4_fUl
/* 80315590  A0 1F 00 0A */	lhz r0, 0xa(r31)
/* 80315594  3B 60 00 00 */	li r27, 0
/* 80315598  83 DF 00 3C */	lwz r30, 0x3c(r31)
/* 8031559C  54 1F 04 3E */	clrlwi r31, r0, 0x10
/* 803155A0  48 00 00 1C */	b lbl_803155BC
lbl_803155A4:
/* 803155A4  57 60 13 BA */	rlwinm r0, r27, 2, 0xe, 0x1d
/* 803155A8  7C 7E 00 2E */	lwzx r3, r30, r0
/* 803155AC  28 03 00 00 */	cmplwi r3, 0
/* 803155B0  41 82 00 08 */	beq lbl_803155B8
/* 803155B4  4B FF F5 21 */	bl draw__12J3DShapeDrawCFv
lbl_803155B8:
/* 803155B8  3B 7B 00 01 */	addi r27, r27, 1
lbl_803155BC:
/* 803155BC  57 60 04 3E */	clrlwi r0, r27, 0x10
/* 803155C0  7C 00 F8 40 */	cmplw r0, r31
/* 803155C4  41 80 FF E0 */	blt lbl_803155A4
lbl_803155C8:
/* 803155C8  39 61 00 20 */	addi r11, r1, 0x20
/* 803155CC  48 04 CC 55 */	bl _restgpr_27
/* 803155D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803155D4  7C 08 03 A6 */	mtlr r0
/* 803155D8  38 21 00 20 */	addi r1, r1, 0x20
/* 803155DC  4E 80 00 20 */	blr 
