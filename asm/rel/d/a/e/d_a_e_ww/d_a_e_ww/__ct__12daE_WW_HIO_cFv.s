lbl_807E76EC:
/* 807E76EC  3C 80 80 7F */	lis r4, lit_3905@ha /* 0x807EF770@ha */
/* 807E76F0  38 A4 F7 70 */	addi r5, r4, lit_3905@l /* 0x807EF770@l */
/* 807E76F4  3C 80 80 7F */	lis r4, __vt__12daE_WW_HIO_c@ha /* 0x807EFB6C@ha */
/* 807E76F8  38 04 FB 6C */	addi r0, r4, __vt__12daE_WW_HIO_c@l /* 0x807EFB6C@l */
/* 807E76FC  90 03 00 00 */	stw r0, 0(r3)
/* 807E7700  38 00 FF FF */	li r0, -1
/* 807E7704  98 03 00 04 */	stb r0, 4(r3)
/* 807E7708  C0 05 00 08 */	lfs f0, 8(r5)
/* 807E770C  D0 03 00 08 */	stfs f0, 8(r3)
/* 807E7710  C0 05 00 2C */	lfs f0, 0x2c(r5)
/* 807E7714  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 807E7718  C0 05 00 30 */	lfs f0, 0x30(r5)
/* 807E771C  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 807E7720  C0 05 00 34 */	lfs f0, 0x34(r5)
/* 807E7724  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 807E7728  C0 25 00 38 */	lfs f1, 0x38(r5)
/* 807E772C  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 807E7730  C0 05 00 3C */	lfs f0, 0x3c(r5)
/* 807E7734  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 807E7738  D0 23 00 20 */	stfs f1, 0x20(r3)
/* 807E773C  38 00 00 00 */	li r0, 0
/* 807E7740  98 03 00 24 */	stb r0, 0x24(r3)
/* 807E7744  4E 80 00 20 */	blr 
