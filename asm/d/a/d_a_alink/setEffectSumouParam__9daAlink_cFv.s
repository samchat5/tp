lbl_80121004:
/* 80121004  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 80121008  7C 08 02 A6 */	mflr r0
/* 8012100C  90 01 00 74 */	stw r0, 0x74(r1)
/* 80121010  39 61 00 70 */	addi r11, r1, 0x70
/* 80121014  48 24 11 AD */	bl _savegpr_22
/* 80121018  7C 7D 1B 78 */	mr r29, r3
/* 8012101C  3C 60 80 39 */	lis r3, lit_3757@ha /* 0x8038D658@ha */
/* 80121020  3B 03 D6 58 */	addi r24, r3, lit_3757@l /* 0x8038D658@l */
/* 80121024  3B C0 00 00 */	li r30, 0
/* 80121028  3B 80 00 00 */	li r28, 0
/* 8012102C  3C 60 80 3B */	lis r3, m_typeFourData__8dPaPoF_c@ha /* 0x803A86D0@ha */
/* 80121030  3B 23 86 D0 */	addi r25, r3, m_typeFourData__8dPaPoF_c@l /* 0x803A86D0@l */
/* 80121034  3C 60 80 3B */	lis r3, m_emitterFourData__8dPaPoF_c@ha /* 0x803A8748@ha */
/* 80121038  3B 43 87 48 */	addi r26, r3, m_emitterFourData__8dPaPoF_c@l /* 0x803A8748@l */
lbl_8012103C:
/* 8012103C  3B E0 00 00 */	li r31, 0
/* 80121040  7E F9 E2 14 */	add r23, r25, r28
/* 80121044  7E DA E2 14 */	add r22, r26, r28
lbl_80121048:
/* 80121048  38 7D 2E 54 */	addi r3, r29, 0x2e54
/* 8012104C  7F E4 FB 78 */	mr r4, r31
/* 80121050  7E EC BB 78 */	mr r12, r23
/* 80121054  48 24 10 31 */	bl __ptmf_scall
/* 80121058  60 00 00 00 */	nop 
/* 8012105C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80121060  40 82 01 2C */	bne lbl_8012118C
/* 80121064  38 7D 2E 54 */	addi r3, r29, 0x2e54
/* 80121068  7F E4 FB 78 */	mr r4, r31
/* 8012106C  38 A0 00 00 */	li r5, 0
/* 80121070  7E CC B3 78 */	mr r12, r22
/* 80121074  48 24 10 11 */	bl __ptmf_scall
/* 80121078  60 00 00 00 */	nop 
/* 8012107C  7C 7B 1B 79 */	or. r27, r3, r3
/* 80121080  41 82 01 0C */	beq lbl_8012118C
/* 80121084  A0 1D 2F E8 */	lhz r0, 0x2fe8(r29)
/* 80121088  28 00 00 D4 */	cmplwi r0, 0xd4
/* 8012108C  40 82 00 38 */	bne lbl_801210C4
/* 80121090  38 78 45 B4 */	addi r3, r24, 0x45b4
/* 80121094  E0 03 00 00 */	psq_l f0, 0(r3), 0, 0 /* qr0 */
/* 80121098  C0 43 00 08 */	lfs f2, 8(r3)
/* 8012109C  F0 01 00 30 */	psq_st f0, 48(r1), 0, 0 /* qr0 */
/* 801210A0  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 801210A4  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 801210A8  D0 3B 00 98 */	stfs f1, 0x98(r27)
/* 801210AC  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 801210B0  D0 1B 00 9C */	stfs f0, 0x9c(r27)
/* 801210B4  D0 5B 00 A0 */	stfs f2, 0xa0(r27)
/* 801210B8  D0 3B 00 B0 */	stfs f1, 0xb0(r27)
/* 801210BC  D0 1B 00 B4 */	stfs f0, 0xb4(r27)
/* 801210C0  48 00 00 CC */	b lbl_8012118C
lbl_801210C4:
/* 801210C4  28 00 00 D3 */	cmplwi r0, 0xd3
/* 801210C8  40 82 00 38 */	bne lbl_80121100
/* 801210CC  38 78 45 CC */	addi r3, r24, 0x45cc
/* 801210D0  E0 03 00 00 */	psq_l f0, 0(r3), 0, 0 /* qr0 */
/* 801210D4  C0 43 00 08 */	lfs f2, 8(r3)
/* 801210D8  F0 01 00 24 */	psq_st f0, 36(r1), 0, 0 /* qr0 */
/* 801210DC  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 801210E0  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 801210E4  D0 3B 00 98 */	stfs f1, 0x98(r27)
/* 801210E8  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 801210EC  D0 1B 00 9C */	stfs f0, 0x9c(r27)
/* 801210F0  D0 5B 00 A0 */	stfs f2, 0xa0(r27)
/* 801210F4  D0 3B 00 B0 */	stfs f1, 0xb0(r27)
/* 801210F8  D0 1B 00 B4 */	stfs f0, 0xb4(r27)
/* 801210FC  48 00 00 90 */	b lbl_8012118C
lbl_80121100:
/* 80121100  28 00 00 D0 */	cmplwi r0, 0xd0
/* 80121104  41 82 00 0C */	beq lbl_80121110
/* 80121108  28 00 00 D1 */	cmplwi r0, 0xd1
/* 8012110C  40 82 00 50 */	bne lbl_8012115C
lbl_80121110:
/* 80121110  80 1D 31 98 */	lwz r0, 0x3198(r29)
/* 80121114  2C 00 01 43 */	cmpwi r0, 0x143
/* 80121118  41 82 00 0C */	beq lbl_80121124
/* 8012111C  2C 00 01 42 */	cmpwi r0, 0x142
/* 80121120  40 82 00 3C */	bne lbl_8012115C
lbl_80121124:
/* 80121124  38 7D 1A 60 */	addi r3, r29, 0x1a60
/* 80121128  7F E4 FB 78 */	mr r4, r31
/* 8012112C  38 A1 00 14 */	addi r5, r1, 0x14
/* 80121130  38 C1 00 10 */	addi r6, r1, 0x10
/* 80121134  38 E1 00 08 */	addi r7, r1, 8
/* 80121138  39 01 00 0C */	addi r8, r1, 0xc
/* 8012113C  4B F2 BE 55 */	bl getPolyColor__13dPa_control_cFR13cBgS_PolyInfoiP8_GXColorP8_GXColorPUcPf
/* 80121140  88 61 00 08 */	lbz r3, 8(r1)
/* 80121144  88 1B 00 BB */	lbz r0, 0xbb(r27)
/* 80121148  7C 03 00 40 */	cmplw r3, r0
/* 8012114C  40 82 00 40 */	bne lbl_8012118C
/* 80121150  54 60 FE 7E */	rlwinm r0, r3, 0x1f, 0x19, 0x1f
/* 80121154  98 1B 00 BB */	stb r0, 0xbb(r27)
/* 80121158  48 00 00 34 */	b lbl_8012118C
lbl_8012115C:
/* 8012115C  38 78 45 C0 */	addi r3, r24, 0x45c0
/* 80121160  E0 03 00 00 */	psq_l f0, 0(r3), 0, 0 /* qr0 */
/* 80121164  C0 43 00 08 */	lfs f2, 8(r3)
/* 80121168  F0 01 00 18 */	psq_st f0, 24(r1), 0, 0 /* qr0 */
/* 8012116C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 80121170  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80121174  D0 3B 00 98 */	stfs f1, 0x98(r27)
/* 80121178  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8012117C  D0 1B 00 9C */	stfs f0, 0x9c(r27)
/* 80121180  D0 5B 00 A0 */	stfs f2, 0xa0(r27)
/* 80121184  D0 3B 00 B0 */	stfs f1, 0xb0(r27)
/* 80121188  D0 1B 00 B4 */	stfs f0, 0xb4(r27)
lbl_8012118C:
/* 8012118C  3B FF 00 01 */	addi r31, r31, 1
/* 80121190  2C 1F 00 02 */	cmpwi r31, 2
/* 80121194  41 80 FE B4 */	blt lbl_80121048
/* 80121198  3B DE 00 01 */	addi r30, r30, 1
/* 8012119C  2C 1E 00 05 */	cmpwi r30, 5
/* 801211A0  3B 9C 00 0C */	addi r28, r28, 0xc
/* 801211A4  41 80 FE 98 */	blt lbl_8012103C
/* 801211A8  39 61 00 70 */	addi r11, r1, 0x70
/* 801211AC  48 24 10 61 */	bl _restgpr_22
/* 801211B0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801211B4  7C 08 03 A6 */	mtlr r0
/* 801211B8  38 21 00 70 */	addi r1, r1, 0x70
/* 801211BC  4E 80 00 20 */	blr 
