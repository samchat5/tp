lbl_8073301C:
/* 8073301C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80733020  7C 08 02 A6 */	mflr r0
/* 80733024  90 01 00 24 */	stw r0, 0x24(r1)
/* 80733028  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8073302C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80733030  7C 7F 1B 78 */	mr r31, r3
/* 80733034  3C 60 80 73 */	lis r3, lit_3911@ha /* 0x80735B28@ha */
/* 80733038  3B C3 5B 28 */	addi r30, r3, lit_3911@l /* 0x80735B28@l */
/* 8073303C  A8 1F 04 E6 */	lha r0, 0x4e6(r31)
/* 80733040  B0 1F 06 D4 */	sth r0, 0x6d4(r31)
/* 80733044  80 1F 06 B0 */	lwz r0, 0x6b0(r31)
/* 80733048  2C 00 00 01 */	cmpwi r0, 1
/* 8073304C  41 82 00 CC */	beq lbl_80733118
/* 80733050  40 80 00 10 */	bge lbl_80733060
/* 80733054  2C 00 00 00 */	cmpwi r0, 0
/* 80733058  40 80 00 14 */	bge lbl_8073306C
/* 8073305C  48 00 01 58 */	b lbl_807331B4
lbl_80733060:
/* 80733060  2C 00 00 03 */	cmpwi r0, 3
/* 80733064  40 80 01 50 */	bge lbl_807331B4
/* 80733068  48 00 00 E8 */	b lbl_80733150
lbl_8073306C:
/* 8073306C  3C 60 00 07 */	lis r3, 0x0007 /* 0x000701A5@ha */
/* 80733070  38 03 01 A5 */	addi r0, r3, 0x01A5 /* 0x000701A5@l */
/* 80733074  90 01 00 08 */	stw r0, 8(r1)
/* 80733078  38 7F 05 C4 */	addi r3, r31, 0x5c4
/* 8073307C  38 81 00 08 */	addi r4, r1, 8
/* 80733080  38 A0 FF FF */	li r5, -1
/* 80733084  81 9F 05 C4 */	lwz r12, 0x5c4(r31)
/* 80733088  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8073308C  7D 89 03 A6 */	mtctr r12
/* 80733090  4E 80 04 21 */	bctrl 
/* 80733094  7F E3 FB 78 */	mr r3, r31
/* 80733098  38 80 00 15 */	li r4, 0x15
/* 8073309C  4B FF B2 81 */	bl checkBck__8daE_OC_cFi
/* 807330A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 807330A4  40 82 00 18 */	bne lbl_807330BC
/* 807330A8  7F E3 FB 78 */	mr r3, r31
/* 807330AC  38 80 00 13 */	li r4, 0x13
/* 807330B0  4B FF B2 6D */	bl checkBck__8daE_OC_cFi
/* 807330B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 807330B8  41 82 00 10 */	beq lbl_807330C8
lbl_807330BC:
/* 807330BC  38 00 00 01 */	li r0, 1
/* 807330C0  90 1F 06 B0 */	stw r0, 0x6b0(r31)
/* 807330C4  48 00 00 48 */	b lbl_8073310C
lbl_807330C8:
/* 807330C8  7F E3 FB 78 */	mr r3, r31
/* 807330CC  38 80 00 0C */	li r4, 0xc
/* 807330D0  4B FF B2 4D */	bl checkBck__8daE_OC_cFi
/* 807330D4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 807330D8  40 82 00 2C */	bne lbl_80733104
/* 807330DC  7F E3 FB 78 */	mr r3, r31
/* 807330E0  38 80 00 0C */	li r4, 0xc
/* 807330E4  38 A0 00 00 */	li r5, 0
/* 807330E8  C0 3E 00 04 */	lfs f1, 4(r30)
/* 807330EC  C0 5E 00 08 */	lfs f2, 8(r30)
/* 807330F0  4B FF B1 85 */	bl setBck__8daE_OC_cFiUcff
/* 807330F4  C0 3F 04 D4 */	lfs f1, 0x4d4(r31)
/* 807330F8  C0 1E 01 50 */	lfs f0, 0x150(r30)
/* 807330FC  EC 01 00 2A */	fadds f0, f1, f0
/* 80733100  D0 1F 04 D4 */	stfs f0, 0x4d4(r31)
lbl_80733104:
/* 80733104  38 00 00 02 */	li r0, 2
/* 80733108  90 1F 06 B0 */	stw r0, 0x6b0(r31)
lbl_8073310C:
/* 8073310C  38 00 00 64 */	li r0, 0x64
/* 80733110  B0 1F 06 C0 */	sth r0, 0x6c0(r31)
/* 80733114  48 00 00 A0 */	b lbl_807331B4
lbl_80733118:
/* 80733118  A8 7F 06 BC */	lha r3, 0x6bc(r31)
/* 8073311C  7C 60 07 35 */	extsh. r0, r3
/* 80733120  41 82 00 30 */	beq lbl_80733150
/* 80733124  A8 1F 06 D8 */	lha r0, 0x6d8(r31)
/* 80733128  7C 00 1A 14 */	add r0, r0, r3
/* 8073312C  B0 1F 06 D8 */	sth r0, 0x6d8(r31)
/* 80733130  38 7F 06 BC */	addi r3, r31, 0x6bc
/* 80733134  38 80 00 00 */	li r4, 0
/* 80733138  38 A0 00 64 */	li r5, 0x64
/* 8073313C  4B B3 DA 55 */	bl cLib_chaseAngleS__FPsss
/* 80733140  38 7F 04 E4 */	addi r3, r31, 0x4e4
/* 80733144  38 80 C0 00 */	li r4, -16384
/* 80733148  38 A0 04 00 */	li r5, 0x400
/* 8073314C  4B B3 DA 45 */	bl cLib_chaseAngleS__FPsss
lbl_80733150:
/* 80733150  38 7F 05 2C */	addi r3, r31, 0x52c
/* 80733154  C0 3E 00 04 */	lfs f1, 4(r30)
/* 80733158  C0 5E 01 00 */	lfs f2, 0x100(r30)
/* 8073315C  4B B3 D5 E5 */	bl cLib_chaseF__FPfff
/* 80733160  A8 1F 06 C0 */	lha r0, 0x6c0(r31)
/* 80733164  2C 00 00 00 */	cmpwi r0, 0
/* 80733168  40 82 00 4C */	bne lbl_807331B4
/* 8073316C  7F E3 FB 78 */	mr r3, r31
/* 80733170  4B 8E 6B 0D */	bl fopAcM_delete__FP10fopAc_ac_c
/* 80733174  88 9F 06 E0 */	lbz r4, 0x6e0(r31)
/* 80733178  28 04 00 FF */	cmplwi r4, 0xff
/* 8073317C  41 82 00 38 */	beq lbl_807331B4
/* 80733180  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80733184  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80733188  88 1F 04 E2 */	lbz r0, 0x4e2(r31)
/* 8073318C  7C 05 07 74 */	extsb r5, r0
/* 80733190  4B 90 21 D1 */	bl isSwitch__10dSv_info_cCFii
/* 80733194  2C 03 00 00 */	cmpwi r3, 0
/* 80733198  40 82 00 1C */	bne lbl_807331B4
/* 8073319C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 807331A0  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 807331A4  88 9F 06 E0 */	lbz r4, 0x6e0(r31)
/* 807331A8  88 1F 04 E2 */	lbz r0, 0x4e2(r31)
/* 807331AC  7C 05 07 74 */	extsb r5, r0
/* 807331B0  4B 90 20 51 */	bl onSwitch__10dSv_info_cFii
lbl_807331B4:
/* 807331B4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 807331B8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 807331BC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 807331C0  7C 08 03 A6 */	mtlr r0
/* 807331C4  38 21 00 20 */	addi r1, r1, 0x20
/* 807331C8  4E 80 00 20 */	blr 
