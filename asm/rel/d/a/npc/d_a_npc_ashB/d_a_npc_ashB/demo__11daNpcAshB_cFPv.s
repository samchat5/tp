lbl_809602E0:
/* 809602E0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 809602E4  7C 08 02 A6 */	mflr r0
/* 809602E8  90 01 00 34 */	stw r0, 0x34(r1)
/* 809602EC  39 61 00 30 */	addi r11, r1, 0x30
/* 809602F0  4B A0 1E E5 */	bl _savegpr_27
/* 809602F4  7C 7C 1B 78 */	mr r28, r3
/* 809602F8  3C 80 80 96 */	lis r4, cNullVec__6Z2Calc@ha /* 0x80962418@ha */
/* 809602FC  3B C4 24 18 */	addi r30, r4, cNullVec__6Z2Calc@l /* 0x80962418@l */
/* 80960300  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80960304  3B E4 61 C0 */	addi r31, r4, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80960308  3B BF 4F F8 */	addi r29, r31, 0x4ff8
/* 8096030C  A0 03 0D E8 */	lhz r0, 0xde8(r3)
/* 80960310  2C 00 00 02 */	cmpwi r0, 2
/* 80960314  41 82 00 60 */	beq lbl_80960374
/* 80960318  40 80 01 94 */	bge lbl_809604AC
/* 8096031C  2C 00 00 00 */	cmpwi r0, 0
/* 80960320  41 82 00 0C */	beq lbl_8096032C
/* 80960324  48 00 01 88 */	b lbl_809604AC
/* 80960328  48 00 01 84 */	b lbl_809604AC
lbl_8096032C:
/* 8096032C  38 80 00 06 */	li r4, 6
/* 80960330  3C A0 80 96 */	lis r5, lit_4837@ha /* 0x80962388@ha */
/* 80960334  C0 25 23 88 */	lfs f1, lit_4837@l(r5)  /* 0x80962388@l */
/* 80960338  81 83 0B 44 */	lwz r12, 0xb44(r3)
/* 8096033C  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80960340  7D 89 03 A6 */	mtctr r12
/* 80960344  4E 80 04 21 */	bctrl 
/* 80960348  7F 83 E3 78 */	mr r3, r28
/* 8096034C  38 80 00 00 */	li r4, 0
/* 80960350  3C A0 80 96 */	lis r5, lit_4837@ha /* 0x80962388@ha */
/* 80960354  C0 25 23 88 */	lfs f1, lit_4837@l(r5)  /* 0x80962388@l */
/* 80960358  38 A0 00 00 */	li r5, 0
/* 8096035C  81 9C 0B 44 */	lwz r12, 0xb44(r28)
/* 80960360  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80960364  7D 89 03 A6 */	mtctr r12
/* 80960368  4E 80 04 21 */	bctrl 
/* 8096036C  38 00 00 02 */	li r0, 2
/* 80960370  B0 1C 0D E8 */	sth r0, 0xde8(r28)
lbl_80960374:
/* 80960374  88 1F 4F AD */	lbz r0, 0x4fad(r31)
/* 80960378  28 00 00 00 */	cmplwi r0, 0
/* 8096037C  41 82 01 30 */	beq lbl_809604AC
/* 80960380  A0 1C 00 F8 */	lhz r0, 0xf8(r28)
/* 80960384  28 00 00 01 */	cmplwi r0, 1
/* 80960388  41 82 01 24 */	beq lbl_809604AC
/* 8096038C  7F A3 EB 78 */	mr r3, r29
/* 80960390  80 9E 01 88 */	lwz r4, 0x188(r30)
/* 80960394  38 A0 00 00 */	li r5, 0
/* 80960398  38 C0 00 00 */	li r6, 0
/* 8096039C  4B 6E 77 81 */	bl getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci
/* 809603A0  2C 03 FF FF */	cmpwi r3, -1
/* 809603A4  41 82 00 40 */	beq lbl_809603E4
/* 809603A8  7C 7B 1B 78 */	mr r27, r3
/* 809603AC  93 7C 09 2C */	stw r27, 0x92c(r28)
/* 809603B0  7F 83 E3 78 */	mr r3, r28
/* 809603B4  7F 64 DB 78 */	mr r4, r27
/* 809603B8  A0 1C 09 E6 */	lhz r0, 0x9e6(r28)
/* 809603BC  1C 00 00 0C */	mulli r0, r0, 0xc
/* 809603C0  39 9E 01 98 */	addi r12, r30, 0x198
/* 809603C4  7D 8C 02 14 */	add r12, r12, r0
/* 809603C8  4B A0 1C BD */	bl __ptmf_scall
/* 809603CC  60 00 00 00 */	nop 
/* 809603D0  2C 03 00 00 */	cmpwi r3, 0
/* 809603D4  41 82 00 10 */	beq lbl_809603E4
/* 809603D8  7F A3 EB 78 */	mr r3, r29
/* 809603DC  7F 64 DB 78 */	mr r4, r27
/* 809603E0  4B 6E 7D 9D */	bl cutEnd__16dEvent_manager_cFi
lbl_809603E4:
/* 809603E4  A0 1C 00 F8 */	lhz r0, 0xf8(r28)
/* 809603E8  28 00 00 02 */	cmplwi r0, 2
/* 809603EC  40 82 00 C0 */	bne lbl_809604AC
/* 809603F0  A8 9C 09 D4 */	lha r4, 0x9d4(r28)
/* 809603F4  2C 04 FF FF */	cmpwi r4, -1
/* 809603F8  41 82 00 B4 */	beq lbl_809604AC
/* 809603FC  7F A3 EB 78 */	mr r3, r29
/* 80960400  4B 6E 76 79 */	bl endCheck__16dEvent_manager_cFs
/* 80960404  2C 03 00 00 */	cmpwi r3, 0
/* 80960408  41 82 00 A4 */	beq lbl_809604AC
/* 8096040C  38 7F 4E C8 */	addi r3, r31, 0x4ec8
/* 80960410  4B 6E 20 59 */	bl reset__14dEvt_control_cFv
/* 80960414  38 00 00 00 */	li r0, 0
/* 80960418  B0 1C 09 E6 */	sth r0, 0x9e6(r28)
/* 8096041C  38 00 FF FF */	li r0, -1
/* 80960420  B0 1C 09 D4 */	sth r0, 0x9d4(r28)
/* 80960424  80 7E 02 14 */	lwz r3, 0x214(r30)
/* 80960428  80 1E 02 18 */	lwz r0, 0x218(r30)
/* 8096042C  90 61 00 08 */	stw r3, 8(r1)
/* 80960430  90 01 00 0C */	stw r0, 0xc(r1)
/* 80960434  80 1E 02 1C */	lwz r0, 0x21c(r30)
/* 80960438  90 01 00 10 */	stw r0, 0x10(r1)
/* 8096043C  38 00 00 03 */	li r0, 3
/* 80960440  B0 1C 0D E8 */	sth r0, 0xde8(r28)
/* 80960444  38 7C 0D C4 */	addi r3, r28, 0xdc4
/* 80960448  4B A0 1B D1 */	bl __ptmf_test
/* 8096044C  2C 03 00 00 */	cmpwi r3, 0
/* 80960450  41 82 00 18 */	beq lbl_80960468
/* 80960454  7F 83 E3 78 */	mr r3, r28
/* 80960458  38 80 00 00 */	li r4, 0
/* 8096045C  39 9C 0D C4 */	addi r12, r28, 0xdc4
/* 80960460  4B A0 1C 25 */	bl __ptmf_scall
/* 80960464  60 00 00 00 */	nop 
lbl_80960468:
/* 80960468  38 00 00 00 */	li r0, 0
/* 8096046C  B0 1C 0D E8 */	sth r0, 0xde8(r28)
/* 80960470  80 61 00 08 */	lwz r3, 8(r1)
/* 80960474  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80960478  90 7C 0D C4 */	stw r3, 0xdc4(r28)
/* 8096047C  90 1C 0D C8 */	stw r0, 0xdc8(r28)
/* 80960480  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80960484  90 1C 0D CC */	stw r0, 0xdcc(r28)
/* 80960488  38 7C 0D C4 */	addi r3, r28, 0xdc4
/* 8096048C  4B A0 1B 8D */	bl __ptmf_test
/* 80960490  2C 03 00 00 */	cmpwi r3, 0
/* 80960494  41 82 00 18 */	beq lbl_809604AC
/* 80960498  7F 83 E3 78 */	mr r3, r28
/* 8096049C  38 80 00 00 */	li r4, 0
/* 809604A0  39 9C 0D C4 */	addi r12, r28, 0xdc4
/* 809604A4  4B A0 1B E1 */	bl __ptmf_scall
/* 809604A8  60 00 00 00 */	nop 
lbl_809604AC:
/* 809604AC  38 60 00 01 */	li r3, 1
/* 809604B0  39 61 00 30 */	addi r11, r1, 0x30
/* 809604B4  4B A0 1D 6D */	bl _restgpr_27
/* 809604B8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 809604BC  7C 08 03 A6 */	mtlr r0
/* 809604C0  38 21 00 30 */	addi r1, r1, 0x30
/* 809604C4  4E 80 00 20 */	blr 
