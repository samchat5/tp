lbl_806911AC:
/* 806911AC  3C 80 80 69 */	lis r4, lit_3788@ha /* 0x80694690@ha */
/* 806911B0  38 A4 46 90 */	addi r5, r4, lit_3788@l /* 0x80694690@l */
/* 806911B4  3C 80 80 69 */	lis r4, __vt__12daE_BU_HIO_c@ha /* 0x80694940@ha */
/* 806911B8  38 04 49 40 */	addi r0, r4, __vt__12daE_BU_HIO_c@l /* 0x80694940@l */
/* 806911BC  90 03 00 00 */	stw r0, 0(r3)
/* 806911C0  38 00 FF FF */	li r0, -1
/* 806911C4  98 03 00 04 */	stb r0, 4(r3)
/* 806911C8  C0 05 00 2C */	lfs f0, 0x2c(r5)
/* 806911CC  D0 03 00 08 */	stfs f0, 8(r3)
/* 806911D0  C0 25 00 30 */	lfs f1, 0x30(r5)
/* 806911D4  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 806911D8  C0 05 00 34 */	lfs f0, 0x34(r5)
/* 806911DC  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 806911E0  D0 23 00 14 */	stfs f1, 0x14(r3)
/* 806911E4  C0 05 00 38 */	lfs f0, 0x38(r5)
/* 806911E8  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 806911EC  4E 80 00 20 */	blr 
