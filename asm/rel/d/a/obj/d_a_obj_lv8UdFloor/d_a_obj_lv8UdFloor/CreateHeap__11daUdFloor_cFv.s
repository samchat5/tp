lbl_80C8BE64:
/* 80C8BE64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C8BE68  7C 08 02 A6 */	mflr r0
/* 80C8BE6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C8BE70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C8BE74  7C 7F 1B 78 */	mr r31, r3
/* 80C8BE78  88 03 05 BB */	lbz r0, 0x5bb(r3)
/* 80C8BE7C  54 00 10 3A */	slwi r0, r0, 2
/* 80C8BE80  3C 60 80 C9 */	lis r3, l_resNameIdx@ha /* 0x80C8CC64@ha */
/* 80C8BE84  38 63 CC 64 */	addi r3, r3, l_resNameIdx@l /* 0x80C8CC64@l */
/* 80C8BE88  7C 63 00 2E */	lwzx r3, r3, r0
/* 80C8BE8C  3C 80 80 C9 */	lis r4, l_bmdIdx@ha /* 0x80C8CBF4@ha */
/* 80C8BE90  38 84 CB F4 */	addi r4, r4, l_bmdIdx@l /* 0x80C8CBF4@l */
/* 80C8BE94  7C 84 00 2E */	lwzx r4, r4, r0
/* 80C8BE98  3C A0 80 40 */	lis r5, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80C8BE9C  38 A5 61 C0 */	addi r5, r5, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80C8BEA0  3C A5 00 02 */	addis r5, r5, 2
/* 80C8BEA4  38 C0 00 80 */	li r6, 0x80
/* 80C8BEA8  38 A5 C2 F8 */	addi r5, r5, -15624
/* 80C8BEAC  4B 3B 04 41 */	bl getRes__14dRes_control_cFPCclP11dRes_info_ci
/* 80C8BEB0  3C 80 00 08 */	lis r4, 8
/* 80C8BEB4  3C A0 11 00 */	lis r5, 0x1100 /* 0x11000084@ha */
/* 80C8BEB8  38 A5 00 84 */	addi r5, r5, 0x0084 /* 0x11000084@l */
/* 80C8BEBC  4B 38 8D 99 */	bl mDoExt_J3DModel__create__FP12J3DModelDataUlUl
/* 80C8BEC0  90 7F 05 A8 */	stw r3, 0x5a8(r31)
/* 80C8BEC4  80 7F 05 A8 */	lwz r3, 0x5a8(r31)
/* 80C8BEC8  30 03 FF FF */	addic r0, r3, -1
/* 80C8BECC  7C 60 19 10 */	subfe r3, r0, r3
/* 80C8BED0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C8BED4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C8BED8  7C 08 03 A6 */	mtlr r0
/* 80C8BEDC  38 21 00 10 */	addi r1, r1, 0x10
/* 80C8BEE0  4E 80 00 20 */	blr 
