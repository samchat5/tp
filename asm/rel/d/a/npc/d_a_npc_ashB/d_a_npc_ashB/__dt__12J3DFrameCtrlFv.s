lbl_80961FE0:
/* 80961FE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80961FE4  7C 08 02 A6 */	mflr r0
/* 80961FE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80961FEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80961FF0  7C 7F 1B 79 */	or. r31, r3, r3
/* 80961FF4  41 82 00 1C */	beq lbl_80962010
/* 80961FF8  3C A0 80 96 */	lis r5, __vt__12J3DFrameCtrl@ha /* 0x80962724@ha */
/* 80961FFC  38 05 27 24 */	addi r0, r5, __vt__12J3DFrameCtrl@l /* 0x80962724@l */
/* 80962000  90 1F 00 00 */	stw r0, 0(r31)
/* 80962004  7C 80 07 35 */	extsh. r0, r4
/* 80962008  40 81 00 08 */	ble lbl_80962010
/* 8096200C  4B 96 CD 31 */	bl __dl__FPv
lbl_80962010:
/* 80962010  7F E3 FB 78 */	mr r3, r31
/* 80962014  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80962018  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8096201C  7C 08 03 A6 */	mtlr r0
/* 80962020  38 21 00 10 */	addi r1, r1, 0x10
/* 80962024  4E 80 00 20 */	blr 
