lbl_805675B8:
/* 805675B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 805675BC  7C 08 02 A6 */	mflr r0
/* 805675C0  90 01 00 24 */	stw r0, 0x24(r1)
/* 805675C4  39 61 00 20 */	addi r11, r1, 0x20
/* 805675C8  4B DF AC 15 */	bl _savegpr_29
/* 805675CC  7C 7D 1B 78 */	mr r29, r3
/* 805675D0  3B C0 00 1F */	li r30, 0x1f
/* 805675D4  80 83 0B 58 */	lwz r4, 0xb58(r3)
/* 805675D8  28 04 00 0E */	cmplwi r4, 0xe
/* 805675DC  41 81 00 58 */	bgt lbl_80567634
/* 805675E0  3C 60 80 57 */	lis r3, lit_5233@ha /* 0x80572CE0@ha */
/* 805675E4  38 63 2C E0 */	addi r3, r3, lit_5233@l /* 0x80572CE0@l */
/* 805675E8  54 80 10 3A */	slwi r0, r4, 2
/* 805675EC  7C 03 00 2E */	lwzx r0, r3, r0
/* 805675F0  7C 09 03 A6 */	mtctr r0
/* 805675F4  4E 80 04 20 */	bctr 
lbl_805675F8:
/* 805675F8  3B C0 00 12 */	li r30, 0x12
/* 805675FC  48 00 00 38 */	b lbl_80567634
lbl_80567600:
/* 80567600  3B C0 00 13 */	li r30, 0x13
/* 80567604  48 00 00 30 */	b lbl_80567634
lbl_80567608:
/* 80567608  3B C0 00 14 */	li r30, 0x14
/* 8056760C  48 00 00 28 */	b lbl_80567634
lbl_80567610:
/* 80567610  3B C0 00 15 */	li r30, 0x15
/* 80567614  48 00 00 20 */	b lbl_80567634
lbl_80567618:
/* 80567618  3B C0 00 16 */	li r30, 0x16
/* 8056761C  48 00 00 18 */	b lbl_80567634
lbl_80567620:
/* 80567620  3B C0 00 18 */	li r30, 0x18
/* 80567624  48 00 00 10 */	b lbl_80567634
lbl_80567628:
/* 80567628  3B C0 00 1A */	li r30, 0x1a
/* 8056762C  48 00 00 08 */	b lbl_80567634
lbl_80567630:
/* 80567630  3B C0 00 1B */	li r30, 0x1b
lbl_80567634:
/* 80567634  2C 1E 00 00 */	cmpwi r30, 0
/* 80567638  41 80 00 2C */	blt lbl_80567664
/* 8056763C  7C 1E 20 00 */	cmpw r30, r4
/* 80567640  41 82 00 24 */	beq lbl_80567664
/* 80567644  83 FD 0B 5C */	lwz r31, 0xb5c(r29)
/* 80567648  38 7D 0B 50 */	addi r3, r29, 0xb50
/* 8056764C  4B BD E2 4D */	bl initialize__22daNpcT_MotionSeqMngr_cFv
/* 80567650  93 FD 0B 5C */	stw r31, 0xb5c(r29)
/* 80567654  93 DD 0B 58 */	stw r30, 0xb58(r29)
/* 80567658  3C 60 80 57 */	lis r3, lit_5232@ha /* 0x805717D0@ha */
/* 8056765C  C0 03 17 D0 */	lfs f0, lit_5232@l(r3)  /* 0x805717D0@l */
/* 80567660  D0 1D 0B 68 */	stfs f0, 0xb68(r29)
lbl_80567664:
/* 80567664  39 61 00 20 */	addi r11, r1, 0x20
/* 80567668  4B DF AB C1 */	bl _restgpr_29
/* 8056766C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80567670  7C 08 03 A6 */	mtlr r0
/* 80567674  38 21 00 20 */	addi r1, r1, 0x20
/* 80567678  4E 80 00 20 */	blr 
