lbl_80D4B164:
/* 80D4B164  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D4B168  7C 08 02 A6 */	mflr r0
/* 80D4B16C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D4B170  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80D4B174  7C 7F 1B 78 */	mr r31, r3
/* 80D4B178  4B 33 88 B1 */	bl __ct__12dCcD_GObjInfFv
/* 80D4B17C  3C 60 80 3C */	lis r3, __vt__14cCcD_ShapeAttr@ha /* 0x803C36D0@ha */
/* 80D4B180  38 03 36 D0 */	addi r0, r3, __vt__14cCcD_ShapeAttr@l /* 0x803C36D0@l */
/* 80D4B184  90 1F 01 20 */	stw r0, 0x120(r31)
/* 80D4B188  3C 60 80 D5 */	lis r3, __vt__8cM3dGAab@ha /* 0x80D4C678@ha */
/* 80D4B18C  38 03 C6 78 */	addi r0, r3, __vt__8cM3dGAab@l /* 0x80D4C678@l */
/* 80D4B190  90 1F 01 1C */	stw r0, 0x11c(r31)
/* 80D4B194  3C 60 80 D5 */	lis r3, __vt__8cM3dGCyl@ha /* 0x80D4C684@ha */
/* 80D4B198  38 03 C6 84 */	addi r0, r3, __vt__8cM3dGCyl@l /* 0x80D4C684@l */
/* 80D4B19C  90 1F 01 38 */	stw r0, 0x138(r31)
/* 80D4B1A0  3C 60 80 3C */	lis r3, __vt__12cCcD_CylAttr@ha /* 0x803C35A4@ha */
/* 80D4B1A4  38 63 35 A4 */	addi r3, r3, __vt__12cCcD_CylAttr@l /* 0x803C35A4@l */
/* 80D4B1A8  90 7F 01 20 */	stw r3, 0x120(r31)
/* 80D4B1AC  38 03 00 58 */	addi r0, r3, 0x58
/* 80D4B1B0  90 1F 01 38 */	stw r0, 0x138(r31)
/* 80D4B1B4  3C 60 80 3B */	lis r3, __vt__8dCcD_Cyl@ha /* 0x803AC050@ha */
/* 80D4B1B8  38 63 C0 50 */	addi r3, r3, __vt__8dCcD_Cyl@l /* 0x803AC050@l */
/* 80D4B1BC  90 7F 00 3C */	stw r3, 0x3c(r31)
/* 80D4B1C0  38 03 00 2C */	addi r0, r3, 0x2c
/* 80D4B1C4  90 1F 01 20 */	stw r0, 0x120(r31)
/* 80D4B1C8  38 03 00 84 */	addi r0, r3, 0x84
/* 80D4B1CC  90 1F 01 38 */	stw r0, 0x138(r31)
/* 80D4B1D0  7F E3 FB 78 */	mr r3, r31
/* 80D4B1D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80D4B1D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D4B1DC  7C 08 03 A6 */	mtlr r0
/* 80D4B1E0  38 21 00 10 */	addi r1, r1, 0x10
/* 80D4B1E4  4E 80 00 20 */	blr 
