lbl_80573FBC:
/* 80573FBC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80573FC0  7C 08 02 A6 */	mflr r0
/* 80573FC4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80573FC8  39 61 00 20 */	addi r11, r1, 0x20
/* 80573FCC  4B DE E2 11 */	bl _savegpr_29
/* 80573FD0  7C 7D 1B 78 */	mr r29, r3
/* 80573FD4  83 C3 09 6C */	lwz r30, 0x96c(r3)
/* 80573FD8  28 1E 00 00 */	cmplwi r30, 0
/* 80573FDC  41 82 00 30 */	beq lbl_8057400C
/* 80573FE0  80 9D 05 78 */	lwz r4, 0x578(r29)
/* 80573FE4  80 84 00 04 */	lwz r4, 4(r4)
/* 80573FE8  83 E4 00 04 */	lwz r31, 4(r4)
/* 80573FEC  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 80573FF0  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 80573FF4  7D 89 03 A6 */	mtctr r12
/* 80573FF8  4E 80 04 21 */	bctrl 
/* 80573FFC  80 9F 00 60 */	lwz r4, 0x60(r31)
/* 80574000  54 60 13 BA */	rlwinm r0, r3, 2, 0xe, 0x1d
/* 80574004  7C 64 00 2E */	lwzx r3, r4, r0
/* 80574008  93 C3 00 3C */	stw r30, 0x3c(r3)
lbl_8057400C:
/* 8057400C  7F A3 EB 78 */	mr r3, r29
/* 80574010  38 80 00 00 */	li r4, 0
/* 80574014  38 A0 00 00 */	li r5, 0
/* 80574018  3C C0 80 57 */	lis r6, m__17daNpc_Tkj_Param_c@ha /* 0x80576598@ha */
/* 8057401C  38 C6 65 98 */	addi r6, r6, m__17daNpc_Tkj_Param_c@l /* 0x80576598@l */
/* 80574020  C0 26 00 0C */	lfs f1, 0xc(r6)
/* 80574024  38 C0 00 00 */	li r6, 0
/* 80574028  3C E0 80 57 */	lis r7, lit_4487@ha /* 0x80576644@ha */
/* 8057402C  C0 47 66 44 */	lfs f2, lit_4487@l(r7)  /* 0x80576644@l */
/* 80574030  38 E0 00 00 */	li r7, 0
/* 80574034  39 00 00 00 */	li r8, 0
/* 80574038  39 20 00 00 */	li r9, 0
/* 8057403C  4B BD 48 31 */	bl draw__8daNpcT_cFiifP11_GXColorS10fiii
/* 80574040  39 61 00 20 */	addi r11, r1, 0x20
/* 80574044  4B DE E1 E5 */	bl _restgpr_29
/* 80574048  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8057404C  7C 08 03 A6 */	mtlr r0
/* 80574050  38 21 00 20 */	addi r1, r1, 0x20
/* 80574054  4E 80 00 20 */	blr 
