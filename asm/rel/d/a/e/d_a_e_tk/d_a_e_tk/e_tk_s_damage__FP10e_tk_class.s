lbl_807B92C4:
/* 807B92C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 807B92C8  7C 08 02 A6 */	mflr r0
/* 807B92CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 807B92D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 807B92D4  7C 7F 1B 78 */	mr r31, r3
/* 807B92D8  3C 80 80 7C */	lis r4, lit_3762@ha /* 0x807BA26C@ha */
/* 807B92DC  38 C4 A2 6C */	addi r6, r4, lit_3762@l /* 0x807BA26C@l */
/* 807B92E0  A8 03 06 78 */	lha r0, 0x678(r3)
/* 807B92E4  2C 00 00 01 */	cmpwi r0, 1
/* 807B92E8  41 82 00 34 */	beq lbl_807B931C
/* 807B92EC  40 80 00 54 */	bge lbl_807B9340
/* 807B92F0  2C 00 00 00 */	cmpwi r0, 0
/* 807B92F4  40 80 00 08 */	bge lbl_807B92FC
/* 807B92F8  48 00 00 48 */	b lbl_807B9340
lbl_807B92FC:
/* 807B92FC  38 80 00 06 */	li r4, 6
/* 807B9300  C0 26 00 4C */	lfs f1, 0x4c(r6)
/* 807B9304  38 A0 00 00 */	li r5, 0
/* 807B9308  C0 46 00 30 */	lfs f2, 0x30(r6)
/* 807B930C  4B FF EF 29 */	bl anm_init__FP10e_tk_classifUcf
/* 807B9310  38 00 00 01 */	li r0, 1
/* 807B9314  B0 1F 06 78 */	sth r0, 0x678(r31)
/* 807B9318  48 00 00 28 */	b lbl_807B9340
lbl_807B931C:
/* 807B931C  80 7F 05 C4 */	lwz r3, 0x5c4(r31)
/* 807B9320  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 807B9324  C0 06 00 0C */	lfs f0, 0xc(r6)
/* 807B9328  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 807B932C  40 81 00 14 */	ble lbl_807B9340
/* 807B9330  38 00 00 01 */	li r0, 1
/* 807B9334  B0 1F 06 76 */	sth r0, 0x676(r31)
/* 807B9338  38 00 00 03 */	li r0, 3
/* 807B933C  B0 1F 06 78 */	sth r0, 0x678(r31)
lbl_807B9340:
/* 807B9340  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 807B9344  80 01 00 14 */	lwz r0, 0x14(r1)
/* 807B9348  7C 08 03 A6 */	mtlr r0
/* 807B934C  38 21 00 10 */	addi r1, r1, 0x10
/* 807B9350  4E 80 00 20 */	blr 
