lbl_80C03C1C:
/* 80C03C1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C03C20  7C 08 02 A6 */	mflr r0
/* 80C03C24  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C03C28  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C03C2C  7C 7F 1B 78 */	mr r31, r3
/* 80C03C30  2C 04 00 00 */	cmpwi r4, 0
/* 80C03C34  41 82 00 14 */	beq lbl_80C03C48
/* 80C03C38  38 80 00 05 */	li r4, 5
/* 80C03C3C  C0 3F 0A 94 */	lfs f1, 0xa94(r31)
/* 80C03C40  4B FF D7 71 */	bl setBaseAnm__11daObj_GrA_cFif
/* 80C03C44  48 00 00 60 */	b lbl_80C03CA4
lbl_80C03C48:
/* 80C03C48  80 9F 07 54 */	lwz r4, 0x754(r31)
/* 80C03C4C  38 A0 00 01 */	li r5, 1
/* 80C03C50  88 04 00 11 */	lbz r0, 0x11(r4)
/* 80C03C54  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80C03C58  40 82 00 1C */	bne lbl_80C03C74
/* 80C03C5C  3C 60 80 C1 */	lis r3, lit_4333@ha /* 0x80C0FB98@ha */
/* 80C03C60  C0 23 FB 98 */	lfs f1, lit_4333@l(r3)  /* 0x80C0FB98@l */
/* 80C03C64  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 80C03C68  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80C03C6C  41 82 00 08 */	beq lbl_80C03C74
/* 80C03C70  38 A0 00 00 */	li r5, 0
lbl_80C03C74:
/* 80C03C74  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 80C03C78  41 82 00 2C */	beq lbl_80C03CA4
/* 80C03C7C  7F E3 FB 78 */	mr r3, r31
/* 80C03C80  38 80 00 00 */	li r4, 0
/* 80C03C84  3C A0 80 C1 */	lis r5, m__17daObj_GrA_Param_c@ha /* 0x80C0FA7C@ha */
/* 80C03C88  38 A5 FA 7C */	addi r5, r5, m__17daObj_GrA_Param_c@l /* 0x80C0FA7C@l */
/* 80C03C8C  C0 25 00 0C */	lfs f1, 0xc(r5)
/* 80C03C90  4B FF DA FD */	bl setBaseMotion__11daObj_GrA_cFif
/* 80C03C94  7F E3 FB 78 */	mr r3, r31
/* 80C03C98  38 80 00 00 */	li r4, 0
/* 80C03C9C  C0 3F 0A 94 */	lfs f1, 0xa94(r31)
/* 80C03CA0  4B FF D7 11 */	bl setBaseAnm__11daObj_GrA_cFif
lbl_80C03CA4:
/* 80C03CA4  38 60 00 01 */	li r3, 1
/* 80C03CA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C03CAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C03CB0  7C 08 03 A6 */	mtlr r0
/* 80C03CB4  38 21 00 10 */	addi r1, r1, 0x10
/* 80C03CB8  4E 80 00 20 */	blr 
