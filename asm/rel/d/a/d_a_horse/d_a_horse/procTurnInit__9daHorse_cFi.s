lbl_80842878:
/* 80842878  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8084287C  7C 08 02 A6 */	mflr r0
/* 80842880  90 01 00 34 */	stw r0, 0x34(r1)
/* 80842884  39 61 00 30 */	addi r11, r1, 0x30
/* 80842888  4B B1 F9 55 */	bl _savegpr_29
/* 8084288C  7C 7D 1B 78 */	mr r29, r3
/* 80842890  7C 9E 23 78 */	mr r30, r4
/* 80842894  3C 80 80 84 */	lis r4, lit_3894@ha /* 0x808454AC@ha */
/* 80842898  3B E4 54 AC */	addi r31, r4, lit_3894@l /* 0x808454AC@l */
/* 8084289C  80 03 17 4C */	lwz r0, 0x174c(r3)
/* 808428A0  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 808428A4  41 82 00 14 */	beq lbl_808428B8
/* 808428A8  C0 1F 01 50 */	lfs f0, 0x150(r31)
/* 808428AC  D0 1D 05 2C */	stfs f0, 0x52c(r29)
/* 808428B0  38 60 00 00 */	li r3, 0
/* 808428B4  48 00 01 E4 */	b lbl_80842A98
lbl_808428B8:
/* 808428B8  3C 80 80 84 */	lis r4, lit_9802@ha /* 0x808459F4@ha */
/* 808428BC  38 A4 59 F4 */	addi r5, r4, lit_9802@l /* 0x808459F4@l */
/* 808428C0  80 85 00 00 */	lwz r4, 0(r5)
/* 808428C4  80 05 00 04 */	lwz r0, 4(r5)
/* 808428C8  90 9D 18 A4 */	stw r4, 0x18a4(r29)
/* 808428CC  90 1D 18 A8 */	stw r0, 0x18a8(r29)
/* 808428D0  80 05 00 08 */	lwz r0, 8(r5)
/* 808428D4  90 1D 18 AC */	stw r0, 0x18ac(r29)
/* 808428D8  38 00 00 03 */	li r0, 3
/* 808428DC  98 1D 16 B4 */	stb r0, 0x16b4(r29)
/* 808428E0  4B FF E3 C5 */	bl resetNeckAnime__9daHorse_cFv
/* 808428E4  7F A3 EB 78 */	mr r3, r29
/* 808428E8  38 80 00 14 */	li r4, 0x14
/* 808428EC  38 DF 00 20 */	addi r6, r31, 0x20
/* 808428F0  C0 26 00 7C */	lfs f1, 0x7c(r6)
/* 808428F4  C0 5F 01 50 */	lfs f2, 0x150(r31)
/* 808428F8  38 A0 FF FF */	li r5, -1
/* 808428FC  C0 66 00 80 */	lfs f3, 0x80(r6)
/* 80842900  38 C0 00 00 */	li r6, 0
/* 80842904  4B FF 79 09 */	bl setSingleAnime__9daHorse_cFUsffsfi
/* 80842908  C0 1F 03 80 */	lfs f0, 0x380(r31)
/* 8084290C  D0 1D 17 74 */	stfs f0, 0x1774(r29)
/* 80842910  C0 1F 03 84 */	lfs f0, 0x384(r31)
/* 80842914  D0 1D 17 78 */	stfs f0, 0x1778(r29)
/* 80842918  38 7F 00 20 */	addi r3, r31, 0x20
/* 8084291C  C0 03 00 88 */	lfs f0, 0x88(r3)
/* 80842920  D0 1D 17 7C */	stfs f0, 0x177c(r29)
/* 80842924  C0 1F 02 C0 */	lfs f0, 0x2c0(r31)
/* 80842928  D0 1D 17 80 */	stfs f0, 0x1780(r29)
/* 8084292C  C0 1F 03 88 */	lfs f0, 0x388(r31)
/* 80842930  D0 1D 17 84 */	stfs f0, 0x1784(r29)
/* 80842934  C0 1F 01 50 */	lfs f0, 0x150(r31)
/* 80842938  D0 1D 05 2C */	stfs f0, 0x52c(r29)
/* 8084293C  38 00 00 00 */	li r0, 0
/* 80842940  B0 1D 17 1A */	sth r0, 0x171a(r29)
/* 80842944  A8 1D 04 E6 */	lha r0, 0x4e6(r29)
/* 80842948  B0 1D 17 1C */	sth r0, 0x171c(r29)
/* 8084294C  A8 1D 04 E6 */	lha r0, 0x4e6(r29)
/* 80842950  B0 1D 04 DE */	sth r0, 0x4de(r29)
/* 80842954  80 9D 17 44 */	lwz r4, 0x1744(r29)
/* 80842958  3C 60 DF FF */	lis r3, 0xDFFF /* 0xDFFEF7F7@ha */
/* 8084295C  38 03 F7 F7 */	addi r0, r3, 0xF7F7 /* 0xDFFEF7F7@l */
/* 80842960  7C 80 00 38 */	and r0, r4, r0
/* 80842964  90 1D 17 44 */	stw r0, 0x1744(r29)
/* 80842968  A8 7D 04 E6 */	lha r3, 0x4e6(r29)
/* 8084296C  3C 63 00 01 */	addis r3, r3, 1
/* 80842970  38 03 80 00 */	addi r0, r3, -32768
/* 80842974  B0 1D 17 1E */	sth r0, 0x171e(r29)
/* 80842978  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8084297C  38 83 61 C0 */	addi r4, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80842980  88 04 4F AD */	lbz r0, 0x4fad(r4)
/* 80842984  28 00 00 00 */	cmplwi r0, 0
/* 80842988  40 82 00 24 */	bne lbl_808429AC
/* 8084298C  80 1D 17 44 */	lwz r0, 0x1744(r29)
/* 80842990  54 00 01 4B */	rlwinm. r0, r0, 0, 5, 5
/* 80842994  40 82 00 18 */	bne lbl_808429AC
/* 80842998  A8 7D 17 0A */	lha r3, 0x170a(r29)
/* 8084299C  3C 63 00 01 */	addis r3, r3, 1
/* 808429A0  38 03 80 00 */	addi r0, r3, -32768
/* 808429A4  B0 1D 17 0A */	sth r0, 0x170a(r29)
/* 808429A8  48 00 00 18 */	b lbl_808429C0
lbl_808429AC:
/* 808429AC  80 1D 17 44 */	lwz r0, 0x1744(r29)
/* 808429B0  54 00 01 4B */	rlwinm. r0, r0, 0, 5, 5
/* 808429B4  41 82 00 0C */	beq lbl_808429C0
/* 808429B8  A8 1D 04 E6 */	lha r0, 0x4e6(r29)
/* 808429BC  B0 1D 17 1E */	sth r0, 0x171e(r29)
lbl_808429C0:
/* 808429C0  88 04 4F AD */	lbz r0, 0x4fad(r4)
/* 808429C4  28 00 00 00 */	cmplwi r0, 0
/* 808429C8  40 82 00 10 */	bne lbl_808429D8
/* 808429CC  80 1D 17 44 */	lwz r0, 0x1744(r29)
/* 808429D0  54 00 01 88 */	rlwinm r0, r0, 0, 6, 4
/* 808429D4  90 1D 17 44 */	stw r0, 0x1744(r29)
lbl_808429D8:
/* 808429D8  93 DD 17 30 */	stw r30, 0x1730(r29)
/* 808429DC  80 1D 17 30 */	lwz r0, 0x1730(r29)
/* 808429E0  2C 00 00 00 */	cmpwi r0, 0
/* 808429E4  41 82 00 40 */	beq lbl_80842A24
/* 808429E8  C0 3F 02 B8 */	lfs f1, 0x2b8(r31)
/* 808429EC  4B A2 4F A1 */	bl cM_rndFX__Ff
/* 808429F0  A8 1D 04 E6 */	lha r0, 0x4e6(r29)
/* 808429F4  C8 5F 01 80 */	lfd f2, 0x180(r31)
/* 808429F8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 808429FC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80842A00  3C 00 43 30 */	lis r0, 0x4330
/* 80842A04  90 01 00 08 */	stw r0, 8(r1)
/* 80842A08  C8 01 00 08 */	lfd f0, 8(r1)
/* 80842A0C  EC 00 10 28 */	fsubs f0, f0, f2
/* 80842A10  EC 00 08 2A */	fadds f0, f0, f1
/* 80842A14  FC 00 00 1E */	fctiwz f0, f0
/* 80842A18  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80842A1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80842A20  B0 1D 17 1E */	sth r0, 0x171e(r29)
lbl_80842A24:
/* 80842A24  38 00 00 00 */	li r0, 0
/* 80842A28  B0 1D 17 20 */	sth r0, 0x1720(r29)
/* 80842A2C  C0 3F 02 A0 */	lfs f1, 0x2a0(r31)
/* 80842A30  4B A2 4F 25 */	bl cM_rndF__Ff
/* 80842A34  C0 1F 02 A0 */	lfs f0, 0x2a0(r31)
/* 80842A38  EC 00 08 2A */	fadds f0, f0, f1
/* 80842A3C  FC 00 00 1E */	fctiwz f0, f0
/* 80842A40  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80842A44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80842A48  B0 1D 17 0C */	sth r0, 0x170c(r29)
/* 80842A4C  38 00 00 02 */	li r0, 2
/* 80842A50  98 1D 16 B7 */	stb r0, 0x16b7(r29)
/* 80842A54  7F A3 EB 78 */	mr r3, r29
/* 80842A58  4B FF 8B 21 */	bl acceptPlayerRide__9daHorse_cFv
/* 80842A5C  38 60 00 01 */	li r3, 1
/* 80842A60  98 7D 0E A7 */	stb r3, 0xea7(r29)
/* 80842A64  38 00 00 03 */	li r0, 3
/* 80842A68  98 1D 0E A6 */	stb r0, 0xea6(r29)
/* 80842A6C  38 00 00 02 */	li r0, 2
/* 80842A70  98 1D 0E 44 */	stb r0, 0xe44(r29)
/* 80842A74  C0 3D 17 58 */	lfs f1, 0x1758(r29)
/* 80842A78  C0 1F 01 CC */	lfs f0, 0x1cc(r31)
/* 80842A7C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80842A80  40 81 00 0C */	ble lbl_80842A8C
/* 80842A84  B0 7D 17 22 */	sth r3, 0x1722(r29)
/* 80842A88  48 00 00 0C */	b lbl_80842A94
lbl_80842A8C:
/* 80842A8C  38 00 00 00 */	li r0, 0
/* 80842A90  B0 1D 17 22 */	sth r0, 0x1722(r29)
lbl_80842A94:
/* 80842A94  38 60 00 01 */	li r3, 1
lbl_80842A98:
/* 80842A98  39 61 00 30 */	addi r11, r1, 0x30
/* 80842A9C  4B B1 F7 8D */	bl _restgpr_29
/* 80842AA0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80842AA4  7C 08 03 A6 */	mtlr r0
/* 80842AA8  38 21 00 30 */	addi r1, r1, 0x30
/* 80842AAC  4E 80 00 20 */	blr 
