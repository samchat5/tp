lbl_8032F170:
/* 8032F170  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8032F174  38 80 00 00 */	li r4, 0
/* 8032F178  90 83 00 00 */	stw r4, 0(r3)
/* 8032F17C  90 83 00 04 */	stw r4, 4(r3)
/* 8032F180  90 83 00 08 */	stw r4, 8(r3)
/* 8032F184  90 83 00 0C */	stw r4, 0xc(r3)
/* 8032F188  90 83 00 10 */	stw r4, 0x10(r3)
/* 8032F18C  B0 83 00 14 */	sth r4, 0x14(r3)
/* 8032F190  38 00 00 01 */	li r0, 1
/* 8032F194  98 03 00 16 */	stb r0, 0x16(r3)
/* 8032F198  98 83 00 17 */	stb r4, 0x17(r3)
/* 8032F19C  38 C3 00 14 */	addi r6, r3, 0x14
/* 8032F1A0  3C 80 80 3A */	lis r4, j3dDefaultTransformInfo@ha /* 0x803A1E30@ha */
/* 8032F1A4  38 84 1E 30 */	addi r4, r4, j3dDefaultTransformInfo@l /* 0x803A1E30@l */
/* 8032F1A8  38 A4 FF FC */	addi r5, r4, -4
/* 8032F1AC  38 00 00 04 */	li r0, 4
/* 8032F1B0  7C 09 03 A6 */	mtctr r0
lbl_8032F1B4:
/* 8032F1B4  80 85 00 04 */	lwz r4, 4(r5)
/* 8032F1B8  84 05 00 08 */	lwzu r0, 8(r5)
/* 8032F1BC  90 86 00 04 */	stw r4, 4(r6)
/* 8032F1C0  94 06 00 08 */	stwu r0, 8(r6)
/* 8032F1C4  42 00 FF F0 */	bdnz lbl_8032F1B4
/* 8032F1C8  C0 02 CA A4 */	lfs f0, lit_1220(r2)
/* 8032F1CC  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 8032F1D0  38 00 00 00 */	li r0, 0
/* 8032F1D4  90 03 00 54 */	stw r0, 0x54(r3)
/* 8032F1D8  90 03 00 58 */	stw r0, 0x58(r3)
/* 8032F1DC  3C 80 80 3A */	lis r4, lit_1257@ha /* 0x803A2080@ha */
/* 8032F1E0  38 A4 20 80 */	addi r5, r4, lit_1257@l /* 0x803A2080@l */
/* 8032F1E4  80 85 00 00 */	lwz r4, 0(r5)
/* 8032F1E8  80 05 00 04 */	lwz r0, 4(r5)
/* 8032F1EC  90 81 00 14 */	stw r4, 0x14(r1)
/* 8032F1F0  90 01 00 18 */	stw r0, 0x18(r1)
/* 8032F1F4  80 05 00 08 */	lwz r0, 8(r5)
/* 8032F1F8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8032F1FC  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8032F200  D0 03 00 3C */	stfs f0, 0x3c(r3)
/* 8032F204  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8032F208  D0 03 00 40 */	stfs f0, 0x40(r3)
/* 8032F20C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8032F210  D0 03 00 44 */	stfs f0, 0x44(r3)
/* 8032F214  3C 80 80 3A */	lis r4, lit_1259@ha /* 0x803A208C@ha */
/* 8032F218  38 A4 20 8C */	addi r5, r4, lit_1259@l /* 0x803A208C@l */
/* 8032F21C  80 85 00 00 */	lwz r4, 0(r5)
/* 8032F220  80 05 00 04 */	lwz r0, 4(r5)
/* 8032F224  90 81 00 08 */	stw r4, 8(r1)
/* 8032F228  90 01 00 0C */	stw r0, 0xc(r1)
/* 8032F22C  80 05 00 08 */	lwz r0, 8(r5)
/* 8032F230  90 01 00 10 */	stw r0, 0x10(r1)
/* 8032F234  C0 01 00 08 */	lfs f0, 8(r1)
/* 8032F238  D0 03 00 48 */	stfs f0, 0x48(r3)
/* 8032F23C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8032F240  D0 03 00 4C */	stfs f0, 0x4c(r3)
/* 8032F244  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8032F248  D0 03 00 50 */	stfs f0, 0x50(r3)
/* 8032F24C  38 21 00 20 */	addi r1, r1, 0x20
/* 8032F250  4E 80 00 20 */	blr 
