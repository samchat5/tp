lbl_807211CC:
/* 807211CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 807211D0  7C 08 02 A6 */	mflr r0
/* 807211D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 807211D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 807211DC  93 C1 00 08 */	stw r30, 8(r1)
/* 807211E0  7C 7E 1B 78 */	mr r30, r3
/* 807211E4  3C 80 80 72 */	lis r4, lit_3789@ha /* 0x80722C3C@ha */
/* 807211E8  3B E4 2C 3C */	addi r31, r4, lit_3789@l /* 0x80722C3C@l */
/* 807211EC  A8 03 06 70 */	lha r0, 0x670(r3)
/* 807211F0  2C 00 00 01 */	cmpwi r0, 1
/* 807211F4  41 82 00 60 */	beq lbl_80721254
/* 807211F8  40 80 00 A8 */	bge lbl_807212A0
/* 807211FC  2C 00 00 00 */	cmpwi r0, 0
/* 80721200  40 80 00 08 */	bge lbl_80721208
/* 80721204  48 00 00 9C */	b lbl_807212A0
lbl_80721208:
/* 80721208  88 1E 04 99 */	lbz r0, 0x499(r30)
/* 8072120C  2C 00 00 01 */	cmpwi r0, 1
/* 80721210  40 82 00 1C */	bne lbl_8072122C
/* 80721214  38 80 00 05 */	li r4, 5
/* 80721218  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 8072121C  38 A0 00 02 */	li r5, 2
/* 80721220  C0 5F 00 5C */	lfs f2, 0x5c(r31)
/* 80721224  4B FF E8 21 */	bl anm_init__FP10e_mm_classifUcf
/* 80721228  48 00 00 18 */	b lbl_80721240
lbl_8072122C:
/* 8072122C  38 80 00 05 */	li r4, 5
/* 80721230  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 80721234  38 A0 00 02 */	li r5, 2
/* 80721238  C0 5F 00 08 */	lfs f2, 8(r31)
/* 8072123C  4B FF E8 09 */	bl anm_init__FP10e_mm_classifUcf
lbl_80721240:
/* 80721240  38 00 00 01 */	li r0, 1
/* 80721244  B0 1E 06 70 */	sth r0, 0x670(r30)
/* 80721248  38 00 00 1E */	li r0, 0x1e
/* 8072124C  B0 1E 06 9C */	sth r0, 0x69c(r30)
/* 80721250  48 00 00 50 */	b lbl_807212A0
lbl_80721254:
/* 80721254  A8 1E 06 9C */	lha r0, 0x69c(r30)
/* 80721258  2C 00 00 00 */	cmpwi r0, 0
/* 8072125C  40 82 00 44 */	bne lbl_807212A0
/* 80721260  80 7E 05 B8 */	lwz r3, 0x5b8(r30)
/* 80721264  38 80 00 01 */	li r4, 1
/* 80721268  88 03 00 11 */	lbz r0, 0x11(r3)
/* 8072126C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80721270  40 82 00 18 */	bne lbl_80721288
/* 80721274  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80721278  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 8072127C  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80721280  41 82 00 08 */	beq lbl_80721288
/* 80721284  38 80 00 00 */	li r4, 0
lbl_80721288:
/* 80721288  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 8072128C  40 82 00 14 */	bne lbl_807212A0
/* 80721290  38 00 00 01 */	li r0, 1
/* 80721294  B0 1E 06 6E */	sth r0, 0x66e(r30)
/* 80721298  38 00 00 00 */	li r0, 0
/* 8072129C  B0 1E 06 70 */	sth r0, 0x670(r30)
lbl_807212A0:
/* 807212A0  38 7E 05 2C */	addi r3, r30, 0x52c
/* 807212A4  C0 3F 00 08 */	lfs f1, 8(r31)
/* 807212A8  C0 5F 00 50 */	lfs f2, 0x50(r31)
/* 807212AC  4B B4 E7 D5 */	bl cLib_addCalc0__FPfff
/* 807212B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 807212B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 807212B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 807212BC  7C 08 03 A6 */	mtlr r0
/* 807212C0  38 21 00 10 */	addi r1, r1, 0x10
/* 807212C4  4E 80 00 20 */	blr 
