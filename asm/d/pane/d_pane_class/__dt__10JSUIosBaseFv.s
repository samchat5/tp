lbl_80255388:
/* 80255388  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8025538C  7C 08 02 A6 */	mflr r0
/* 80255390  90 01 00 14 */	stw r0, 0x14(r1)
/* 80255394  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80255398  7C 7F 1B 79 */	or. r31, r3, r3
/* 8025539C  41 82 00 1C */	beq lbl_802553B8
/* 802553A0  3C A0 80 3C */	lis r5, __vt__10JSUIosBase@ha /* 0x803C2DF8@ha */
/* 802553A4  38 05 2D F8 */	addi r0, r5, __vt__10JSUIosBase@l /* 0x803C2DF8@l */
/* 802553A8  90 1F 00 00 */	stw r0, 0(r31)
/* 802553AC  7C 80 07 35 */	extsh. r0, r4
/* 802553B0  40 81 00 08 */	ble lbl_802553B8
/* 802553B4  48 07 99 89 */	bl __dl__FPv
lbl_802553B8:
/* 802553B8  7F E3 FB 78 */	mr r3, r31
/* 802553BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802553C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802553C4  7C 08 03 A6 */	mtlr r0
/* 802553C8  38 21 00 10 */	addi r1, r1, 0x10
/* 802553CC  4E 80 00 20 */	blr 
