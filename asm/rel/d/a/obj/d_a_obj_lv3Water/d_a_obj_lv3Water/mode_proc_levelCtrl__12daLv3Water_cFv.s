lbl_80C597FC:
/* 80C597FC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80C59800  7C 08 02 A6 */	mflr r0
/* 80C59804  90 01 00 24 */	stw r0, 0x24(r1)
/* 80C59808  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80C5980C  7C 7F 1B 78 */	mr r31, r3
/* 80C59810  88 63 06 04 */	lbz r3, 0x604(r3)
/* 80C59814  28 03 00 00 */	cmplwi r3, 0
/* 80C59818  41 82 00 10 */	beq lbl_80C59828
/* 80C5981C  38 03 FF FF */	addi r0, r3, -1
/* 80C59820  98 1F 06 04 */	stb r0, 0x604(r31)
/* 80C59824  48 00 00 84 */	b lbl_80C598A8
lbl_80C59828:
/* 80C59828  88 7F 06 01 */	lbz r3, 0x601(r31)
/* 80C5982C  88 9F 06 00 */	lbz r4, 0x600(r31)
/* 80C59830  88 BF 06 02 */	lbz r5, 0x602(r31)
/* 80C59834  4B 3C 69 2D */	bl fopMsgM_valueIncrease__FiiUc
/* 80C59838  88 1F 06 02 */	lbz r0, 0x602(r31)
/* 80C5983C  28 00 00 00 */	cmplwi r0, 0
/* 80C59840  40 82 00 10 */	bne lbl_80C59850
/* 80C59844  3C 60 80 C6 */	lis r3, lit_3737@ha /* 0x80C5A014@ha */
/* 80C59848  C0 03 A0 14 */	lfs f0, lit_3737@l(r3)  /* 0x80C5A014@l */
/* 80C5984C  EC 20 08 28 */	fsubs f1, f0, f1
lbl_80C59850:
/* 80C59850  88 7F 06 00 */	lbz r3, 0x600(r31)
/* 80C59854  38 03 00 01 */	addi r0, r3, 1
/* 80C59858  98 1F 06 00 */	stb r0, 0x600(r31)
/* 80C5985C  88 7F 06 00 */	lbz r3, 0x600(r31)
/* 80C59860  88 1F 06 01 */	lbz r0, 0x601(r31)
/* 80C59864  7C 03 00 40 */	cmplw r3, r0
/* 80C59868  41 80 00 2C */	blt lbl_80C59894
/* 80C5986C  88 1F 06 02 */	lbz r0, 0x602(r31)
/* 80C59870  3C 60 80 C6 */	lis r3, lit_4080@ha /* 0x80C5A058@ha */
/* 80C59874  C8 23 A0 58 */	lfd f1, lit_4080@l(r3)  /* 0x80C5A058@l */
/* 80C59878  90 01 00 0C */	stw r0, 0xc(r1)
/* 80C5987C  3C 00 43 30 */	lis r0, 0x4330
/* 80C59880  90 01 00 08 */	stw r0, 8(r1)
/* 80C59884  C8 01 00 08 */	lfd f0, 8(r1)
/* 80C59888  EC 20 08 28 */	fsubs f1, f0, f1
/* 80C5988C  38 00 00 00 */	li r0, 0
/* 80C59890  98 1F 05 F8 */	stb r0, 0x5f8(r31)
lbl_80C59894:
/* 80C59894  C0 5F 04 AC */	lfs f2, 0x4ac(r31)
/* 80C59898  C0 1F 05 FC */	lfs f0, 0x5fc(r31)
/* 80C5989C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80C598A0  EC 02 00 2A */	fadds f0, f2, f0
/* 80C598A4  D0 1F 04 D4 */	stfs f0, 0x4d4(r31)
lbl_80C598A8:
/* 80C598A8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80C598AC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80C598B0  7C 08 03 A6 */	mtlr r0
/* 80C598B4  38 21 00 20 */	addi r1, r1, 0x20
/* 80C598B8  4E 80 00 20 */	blr 
