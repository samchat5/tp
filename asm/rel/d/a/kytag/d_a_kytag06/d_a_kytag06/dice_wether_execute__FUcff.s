lbl_80857918:
/* 80857918  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8085791C  7C 08 02 A6 */	mflr r0
/* 80857920  90 01 00 44 */	stw r0, 0x44(r1)
/* 80857924  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80857928  F3 E1 00 38 */	psq_st f31, 56(r1), 0, 0 /* qr0 */
/* 8085792C  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 80857930  F3 C1 00 28 */	psq_st f30, 40(r1), 0, 0 /* qr0 */
/* 80857934  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 80857938  F3 A1 00 18 */	psq_st f29, 24(r1), 0, 0 /* qr0 */
/* 8085793C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80857940  FF A0 08 90 */	fmr f29, f1
/* 80857944  FF C0 10 90 */	fmr f30, f2
/* 80857948  3C 80 80 43 */	lis r4, g_env_light@ha /* 0x8042CA54@ha */
/* 8085794C  3B E4 CA 54 */	addi r31, r4, g_env_light@l /* 0x8042CA54@l */
/* 80857950  98 7F 12 C9 */	stb r3, 0x12c9(r31)
/* 80857954  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80857958  28 00 00 FF */	cmplwi r0, 0xff
/* 8085795C  41 82 00 50 */	beq lbl_808579AC
/* 80857960  4B A0 FF F5 */	bl cM_rndF__Ff
/* 80857964  FF E0 08 90 */	fmr f31, f1
/* 80857968  FC 20 E8 90 */	fmr f1, f29
/* 8085796C  4B A0 FF E9 */	bl cM_rndF__Ff
/* 80857970  EC 1E E8 2A */	fadds f0, f30, f29
/* 80857974  EC 00 08 2A */	fadds f0, f0, f1
/* 80857978  EC 20 F8 2A */	fadds f1, f0, f31
/* 8085797C  D0 3F 11 D8 */	stfs f1, 0x11d8(r31)
/* 80857980  3C 60 80 86 */	lis r3, lit_3740@ha /* 0x80859E78@ha */
/* 80857984  C0 03 9E 78 */	lfs f0, lit_3740@l(r3)  /* 0x80859E78@l */
/* 80857988  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8085798C  4C 41 13 82 */	cror 2, 1, 2
/* 80857990  40 82 00 0C */	bne lbl_8085799C
/* 80857994  EC 01 00 28 */	fsubs f0, f1, f0
/* 80857998  D0 1F 11 D8 */	stfs f0, 0x11d8(r31)
lbl_8085799C:
/* 8085799C  80 7F 12 98 */	lwz r3, 0x1298(r31)
/* 808579A0  38 03 00 01 */	addi r0, r3, 1
/* 808579A4  90 1F 12 98 */	stw r0, 0x1298(r31)
/* 808579A8  48 00 00 18 */	b lbl_808579C0
lbl_808579AC:
/* 808579AC  38 00 00 00 */	li r0, 0
/* 808579B0  98 1F 12 C9 */	stb r0, 0x12c9(r31)
/* 808579B4  88 7F 12 CA */	lbz r3, 0x12ca(r31)
/* 808579B8  38 03 00 01 */	addi r0, r3, 1
/* 808579BC  98 1F 12 CA */	stb r0, 0x12ca(r31)
lbl_808579C0:
/* 808579C0  E3 E1 00 38 */	psq_l f31, 56(r1), 0, 0 /* qr0 */
/* 808579C4  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 808579C8  E3 C1 00 28 */	psq_l f30, 40(r1), 0, 0 /* qr0 */
/* 808579CC  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 808579D0  E3 A1 00 18 */	psq_l f29, 24(r1), 0, 0 /* qr0 */
/* 808579D4  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 808579D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 808579DC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 808579E0  7C 08 03 A6 */	mtlr r0
/* 808579E4  38 21 00 40 */	addi r1, r1, 0x40
/* 808579E8  4E 80 00 20 */	blr 
