lbl_8096D80C:
/* 8096D80C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8096D810  7C 08 02 A6 */	mflr r0
/* 8096D814  90 01 00 24 */	stw r0, 0x24(r1)
/* 8096D818  39 61 00 20 */	addi r11, r1, 0x20
/* 8096D81C  4B 9F 49 C1 */	bl _savegpr_29
/* 8096D820  7C 7D 1B 78 */	mr r29, r3
/* 8096D824  83 C3 09 6C */	lwz r30, 0x96c(r3)
/* 8096D828  28 1E 00 00 */	cmplwi r30, 0
/* 8096D82C  41 82 00 30 */	beq lbl_8096D85C
/* 8096D830  80 9D 05 78 */	lwz r4, 0x578(r29)
/* 8096D834  80 84 00 04 */	lwz r4, 4(r4)
/* 8096D838  83 E4 00 04 */	lwz r31, 4(r4)
/* 8096D83C  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 8096D840  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 8096D844  7D 89 03 A6 */	mtctr r12
/* 8096D848  4E 80 04 21 */	bctrl 
/* 8096D84C  80 9F 00 60 */	lwz r4, 0x60(r31)
/* 8096D850  54 60 13 BA */	rlwinm r0, r3, 2, 0xe, 0x1d
/* 8096D854  7C 64 00 2E */	lwzx r3, r4, r0
/* 8096D858  93 C3 00 3C */	stw r30, 0x3c(r3)
lbl_8096D85C:
/* 8096D85C  7F A3 EB 78 */	mr r3, r29
/* 8096D860  38 80 00 00 */	li r4, 0
/* 8096D864  38 A0 00 00 */	li r5, 0
/* 8096D868  C0 3D 0D E8 */	lfs f1, 0xde8(r29)
/* 8096D86C  38 C0 00 00 */	li r6, 0
/* 8096D870  3C E0 80 97 */	lis r7, lit_4521@ha /* 0x80972938@ha */
/* 8096D874  C0 47 29 38 */	lfs f2, lit_4521@l(r7)  /* 0x80972938@l */
/* 8096D878  38 E0 00 00 */	li r7, 0
/* 8096D87C  39 00 00 00 */	li r8, 0
/* 8096D880  39 20 00 00 */	li r9, 0
/* 8096D884  4B 7D AF E9 */	bl draw__8daNpcT_cFiifP11_GXColorS10fiii
/* 8096D888  39 61 00 20 */	addi r11, r1, 0x20
/* 8096D88C  4B 9F 49 9D */	bl _restgpr_29
/* 8096D890  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8096D894  7C 08 03 A6 */	mtlr r0
/* 8096D898  38 21 00 20 */	addi r1, r1, 0x20
/* 8096D89C  4E 80 00 20 */	blr 
