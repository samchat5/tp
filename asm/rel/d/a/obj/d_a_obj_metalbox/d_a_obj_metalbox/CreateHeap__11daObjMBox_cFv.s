lbl_80592FD4:
/* 80592FD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80592FD8  7C 08 02 A6 */	mflr r0
/* 80592FDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80592FE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80592FE4  7C 7F 1B 78 */	mr r31, r3
/* 80592FE8  3C 60 80 59 */	lis r3, l_arcName@ha /* 0x8059347C@ha */
/* 80592FEC  38 63 34 7C */	addi r3, r3, l_arcName@l /* 0x8059347C@l */
/* 80592FF0  80 63 00 00 */	lwz r3, 0(r3)
/* 80592FF4  38 80 00 04 */	li r4, 4
/* 80592FF8  3C A0 80 40 */	lis r5, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80592FFC  38 A5 61 C0 */	addi r5, r5, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80593000  3C A5 00 02 */	addis r5, r5, 2
/* 80593004  38 C0 00 80 */	li r6, 0x80
/* 80593008  38 A5 C2 F8 */	addi r5, r5, -15624
/* 8059300C  4B AA 92 E1 */	bl getRes__14dRes_control_cFPCclP11dRes_info_ci
/* 80593010  3C 80 00 08 */	lis r4, 8
/* 80593014  3C A0 11 00 */	lis r5, 0x1100 /* 0x11000084@ha */
/* 80593018  38 A5 00 84 */	addi r5, r5, 0x0084 /* 0x11000084@l */
/* 8059301C  4B A8 1C 39 */	bl mDoExt_J3DModel__create__FP12J3DModelDataUlUl
/* 80593020  90 7F 05 A8 */	stw r3, 0x5a8(r31)
/* 80593024  80 7F 05 A8 */	lwz r3, 0x5a8(r31)
/* 80593028  30 03 FF FF */	addic r0, r3, -1
/* 8059302C  7C 60 19 10 */	subfe r3, r0, r3
/* 80593030  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80593034  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80593038  7C 08 03 A6 */	mtlr r0
/* 8059303C  38 21 00 10 */	addi r1, r1, 0x10
/* 80593040  4E 80 00 20 */	blr 
