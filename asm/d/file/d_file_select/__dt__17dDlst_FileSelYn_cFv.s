lbl_801911F4:
/* 801911F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801911F8  7C 08 02 A6 */	mflr r0
/* 801911FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80191200  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80191204  93 C1 00 08 */	stw r30, 8(r1)
/* 80191208  7C 7E 1B 79 */	or. r30, r3, r3
/* 8019120C  7C 9F 23 78 */	mr r31, r4
/* 80191210  41 82 00 40 */	beq lbl_80191250
/* 80191214  3C 60 80 3C */	lis r3, __vt__17dDlst_FileSelYn_c@ha /* 0x803BB378@ha */
/* 80191218  38 03 B3 78 */	addi r0, r3, __vt__17dDlst_FileSelYn_c@l /* 0x803BB378@l */
/* 8019121C  90 1E 00 00 */	stw r0, 0(r30)
/* 80191220  80 7E 00 04 */	lwz r3, 4(r30)
/* 80191224  28 03 00 00 */	cmplwi r3, 0
/* 80191228  41 82 00 18 */	beq lbl_80191240
/* 8019122C  38 80 00 01 */	li r4, 1
/* 80191230  81 83 00 00 */	lwz r12, 0(r3)
/* 80191234  81 8C 00 08 */	lwz r12, 8(r12)
/* 80191238  7D 89 03 A6 */	mtctr r12
/* 8019123C  4E 80 04 21 */	bctrl 
lbl_80191240:
/* 80191240  7F E0 07 35 */	extsh. r0, r31
/* 80191244  40 81 00 0C */	ble lbl_80191250
/* 80191248  7F C3 F3 78 */	mr r3, r30
/* 8019124C  48 13 DA F1 */	bl __dl__FPv
lbl_80191250:
/* 80191250  7F C3 F3 78 */	mr r3, r30
/* 80191254  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80191258  83 C1 00 08 */	lwz r30, 8(r1)
/* 8019125C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80191260  7C 08 03 A6 */	mtlr r0
/* 80191264  38 21 00 10 */	addi r1, r1, 0x10
/* 80191268  4E 80 00 20 */	blr 
