lbl_8078164C:
/* 8078164C  3C 80 80 78 */	lis r4, lit_3658@ha /* 0x80784D68@ha */
/* 80781650  38 A4 4D 68 */	addi r5, r4, lit_3658@l /* 0x80784D68@l */
/* 80781654  3C 80 80 78 */	lis r4, __vt__12daE_SB_HIO_c@ha /* 0x80784F20@ha */
/* 80781658  38 04 4F 20 */	addi r0, r4, __vt__12daE_SB_HIO_c@l /* 0x80784F20@l */
/* 8078165C  90 03 00 00 */	stw r0, 0(r3)
/* 80781660  38 00 FF FF */	li r0, -1
/* 80781664  98 03 00 04 */	stb r0, 4(r3)
/* 80781668  C0 05 00 00 */	lfs f0, 0(r5)
/* 8078166C  D0 03 00 08 */	stfs f0, 8(r3)
/* 80781670  C0 05 00 04 */	lfs f0, 4(r5)
/* 80781674  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80781678  C0 25 00 08 */	lfs f1, 8(r5)
/* 8078167C  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 80781680  C0 05 00 0C */	lfs f0, 0xc(r5)
/* 80781684  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 80781688  C0 05 00 10 */	lfs f0, 0x10(r5)
/* 8078168C  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 80781690  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 80781694  C0 05 00 14 */	lfs f0, 0x14(r5)
/* 80781698  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8078169C  C0 05 00 18 */	lfs f0, 0x18(r5)
/* 807816A0  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 807816A4  C0 05 00 1C */	lfs f0, 0x1c(r5)
/* 807816A8  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 807816AC  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 807816B0  C0 05 00 20 */	lfs f0, 0x20(r5)
/* 807816B4  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 807816B8  38 00 10 00 */	li r0, 0x1000
/* 807816BC  B0 03 00 3C */	sth r0, 0x3c(r3)
/* 807816C0  B0 03 00 3E */	sth r0, 0x3e(r3)
/* 807816C4  C0 05 00 24 */	lfs f0, 0x24(r5)
/* 807816C8  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 807816CC  C0 05 00 28 */	lfs f0, 0x28(r5)
/* 807816D0  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 807816D4  4E 80 00 20 */	blr 
