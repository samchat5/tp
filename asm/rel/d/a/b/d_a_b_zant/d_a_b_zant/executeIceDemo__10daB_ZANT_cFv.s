lbl_80645014:
/* 80645014  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80645018  7C 08 02 A6 */	mflr r0
/* 8064501C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80645020  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80645024  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80645028  7C 7E 1B 78 */	mr r30, r3
/* 8064502C  3C 60 80 65 */	lis r3, lit_3757@ha /* 0x8064EB1C@ha */
/* 80645030  3B E3 EB 1C */	addi r31, r3, lit_3757@l /* 0x8064EB1C@l */
/* 80645034  80 1E 06 DC */	lwz r0, 0x6dc(r30)
/* 80645038  2C 00 00 02 */	cmpwi r0, 2
/* 8064503C  41 82 01 90 */	beq lbl_806451CC
/* 80645040  40 80 00 14 */	bge lbl_80645054
/* 80645044  2C 00 00 00 */	cmpwi r0, 0
/* 80645048  41 82 00 18 */	beq lbl_80645060
/* 8064504C  40 80 00 FC */	bge lbl_80645148
/* 80645050  48 00 01 E4 */	b lbl_80645234
lbl_80645054:
/* 80645054  2C 00 00 64 */	cmpwi r0, 0x64
/* 80645058  41 82 00 38 */	beq lbl_80645090
/* 8064505C  48 00 01 D8 */	b lbl_80645234
lbl_80645060:
/* 80645060  C0 1F 01 34 */	lfs f0, 0x134(r31)
/* 80645064  D0 1E 04 D0 */	stfs f0, 0x4d0(r30)
/* 80645068  C0 1F 00 78 */	lfs f0, 0x78(r31)
/* 8064506C  D0 1E 04 D4 */	stfs f0, 0x4d4(r30)
/* 80645070  C0 1F 00 7C */	lfs f0, 0x7c(r31)
/* 80645074  D0 1E 04 D8 */	stfs f0, 0x4d8(r30)
/* 80645078  C0 1E 04 D0 */	lfs f0, 0x4d0(r30)
/* 8064507C  D0 1E 04 BC */	stfs f0, 0x4bc(r30)
/* 80645080  C0 1E 04 D4 */	lfs f0, 0x4d4(r30)
/* 80645084  D0 1E 04 C0 */	stfs f0, 0x4c0(r30)
/* 80645088  C0 1E 04 D8 */	lfs f0, 0x4d8(r30)
/* 8064508C  D0 1E 04 C4 */	stfs f0, 0x4c4(r30)
lbl_80645090:
/* 80645090  38 60 00 00 */	li r3, 0
/* 80645094  38 00 00 0B */	li r0, 0xb
/* 80645098  7C 09 03 A6 */	mtctr r0
lbl_8064509C:
/* 8064509C  38 83 1A 30 */	addi r4, r3, 0x1a30
/* 806450A0  7C 1E 20 2E */	lwzx r0, r30, r4
/* 806450A4  60 00 00 01 */	ori r0, r0, 1
/* 806450A8  7C 1E 21 2E */	stwx r0, r30, r4
/* 806450AC  38 63 01 38 */	addi r3, r3, 0x138
/* 806450B0  42 00 FF EC */	bdnz lbl_8064509C
/* 806450B4  38 60 00 00 */	li r3, 0
/* 806450B8  38 DF 00 40 */	addi r6, r31, 0x40
/* 806450BC  38 00 00 06 */	li r0, 6
/* 806450C0  7C 09 03 A6 */	mtctr r0
lbl_806450C4:
/* 806450C4  7C 06 18 2E */	lwzx r0, r6, r3
/* 806450C8  1C A0 01 38 */	mulli r5, r0, 0x138
/* 806450CC  38 85 0C C8 */	addi r4, r5, 0xcc8
/* 806450D0  7C 1E 20 2E */	lwzx r0, r30, r4
/* 806450D4  60 00 00 01 */	ori r0, r0, 1
/* 806450D8  7C 1E 21 2E */	stwx r0, r30, r4
/* 806450DC  38 85 0D 4C */	addi r4, r5, 0xd4c
/* 806450E0  7C 1E 20 2E */	lwzx r0, r30, r4
/* 806450E4  60 00 00 01 */	ori r0, r0, 1
/* 806450E8  7C 1E 21 2E */	stwx r0, r30, r4
/* 806450EC  7C 1E 20 2E */	lwzx r0, r30, r4
/* 806450F0  60 00 01 00 */	ori r0, r0, 0x100
/* 806450F4  7C 1E 21 2E */	stwx r0, r30, r4
/* 806450F8  38 63 00 04 */	addi r3, r3, 4
/* 806450FC  42 00 FF C8 */	bdnz lbl_806450C4
/* 80645100  7F C3 F3 78 */	mr r3, r30
/* 80645104  38 80 00 18 */	li r4, 0x18
/* 80645108  38 A0 00 00 */	li r5, 0
/* 8064510C  C0 3F 00 5C */	lfs f1, 0x5c(r31)
/* 80645110  C0 5F 00 0C */	lfs f2, 0xc(r31)
/* 80645114  4B FF 94 B1 */	bl setBck__10daB_ZANT_cFiUcff
/* 80645118  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 8064511C  D0 1E 05 2C */	stfs f0, 0x52c(r30)
/* 80645120  D0 1E 05 30 */	stfs f0, 0x530(r30)
/* 80645124  38 60 00 00 */	li r3, 0
/* 80645128  B0 7E 04 E8 */	sth r3, 0x4e8(r30)
/* 8064512C  B0 7E 04 E4 */	sth r3, 0x4e4(r30)
/* 80645130  90 7E 05 5C */	stw r3, 0x55c(r30)
/* 80645134  C0 1F 00 38 */	lfs f0, 0x38(r31)
/* 80645138  D0 1E 05 34 */	stfs f0, 0x534(r30)
/* 8064513C  38 00 00 01 */	li r0, 1
/* 80645140  90 1E 06 DC */	stw r0, 0x6dc(r30)
/* 80645144  98 7E 07 0E */	stb r3, 0x70e(r30)
lbl_80645148:
/* 80645148  80 7E 05 B4 */	lwz r3, 0x5b4(r30)
/* 8064514C  38 63 00 0C */	addi r3, r3, 0xc
/* 80645150  C0 3F 01 DC */	lfs f1, 0x1dc(r31)
/* 80645154  4B CE 32 D9 */	bl checkPass__12J3DFrameCtrlFf
/* 80645158  2C 03 00 00 */	cmpwi r3, 0
/* 8064515C  41 82 00 2C */	beq lbl_80645188
/* 80645160  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070430@ha */
/* 80645164  38 03 04 30 */	addi r0, r3, 0x0430 /* 0x00070430@l */
/* 80645168  90 01 00 08 */	stw r0, 8(r1)
/* 8064516C  38 7E 05 F0 */	addi r3, r30, 0x5f0
/* 80645170  38 81 00 08 */	addi r4, r1, 8
/* 80645174  38 A0 FF FF */	li r5, -1
/* 80645178  81 9E 05 F0 */	lwz r12, 0x5f0(r30)
/* 8064517C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80645180  7D 89 03 A6 */	mtctr r12
/* 80645184  4E 80 04 21 */	bctrl 
lbl_80645188:
/* 80645188  38 7E 06 C0 */	addi r3, r30, 0x6c0
/* 8064518C  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 80645190  C0 5F 00 AC */	lfs f2, 0xac(r31)
/* 80645194  4B C2 B5 AD */	bl cLib_chaseF__FPfff
/* 80645198  38 7E 06 C4 */	addi r3, r30, 0x6c4
/* 8064519C  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 806451A0  C0 5F 00 AC */	lfs f2, 0xac(r31)
/* 806451A4  4B C2 B5 9D */	bl cLib_chaseF__FPfff
/* 806451A8  80 7E 05 B4 */	lwz r3, 0x5b4(r30)
/* 806451AC  38 63 00 0C */	addi r3, r3, 0xc
/* 806451B0  C0 3F 01 EC */	lfs f1, 0x1ec(r31)
/* 806451B4  4B CE 32 79 */	bl checkPass__12J3DFrameCtrlFf
/* 806451B8  2C 03 00 00 */	cmpwi r3, 0
/* 806451BC  41 82 00 78 */	beq lbl_80645234
/* 806451C0  38 00 00 02 */	li r0, 2
/* 806451C4  90 1E 06 DC */	stw r0, 0x6dc(r30)
/* 806451C8  48 00 00 6C */	b lbl_80645234
lbl_806451CC:
/* 806451CC  38 7E 04 FC */	addi r3, r30, 0x4fc
/* 806451D0  C0 3F 01 98 */	lfs f1, 0x198(r31)
/* 806451D4  C0 5F 00 EC */	lfs f2, 0xec(r31)
/* 806451D8  4B C2 B5 69 */	bl cLib_chaseF__FPfff
/* 806451DC  80 7E 05 B4 */	lwz r3, 0x5b4(r30)
/* 806451E0  38 80 00 01 */	li r4, 1
/* 806451E4  88 03 00 11 */	lbz r0, 0x11(r3)
/* 806451E8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 806451EC  40 82 00 18 */	bne lbl_80645204
/* 806451F0  C0 3F 00 28 */	lfs f1, 0x28(r31)
/* 806451F4  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 806451F8  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 806451FC  41 82 00 08 */	beq lbl_80645204
/* 80645200  38 80 00 00 */	li r4, 0
lbl_80645204:
/* 80645204  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 80645208  41 82 00 2C */	beq lbl_80645234
/* 8064520C  7F C3 F3 78 */	mr r3, r30
/* 80645210  38 80 00 12 */	li r4, 0x12
/* 80645214  38 A0 00 02 */	li r5, 2
/* 80645218  C0 3F 00 5C */	lfs f1, 0x5c(r31)
/* 8064521C  C0 5F 00 0C */	lfs f2, 0xc(r31)
/* 80645220  4B FF 93 A5 */	bl setBck__10daB_ZANT_cFiUcff
/* 80645224  7F C3 F3 78 */	mr r3, r30
/* 80645228  38 80 00 0C */	li r4, 0xc
/* 8064522C  38 A0 00 03 */	li r5, 3
/* 80645230  4B FF 94 95 */	bl setActionMode__10daB_ZANT_cFii
lbl_80645234:
/* 80645234  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80645238  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8064523C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80645240  7C 08 03 A6 */	mtlr r0
/* 80645244  38 21 00 20 */	addi r1, r1, 0x20
/* 80645248  4E 80 00 20 */	blr 
