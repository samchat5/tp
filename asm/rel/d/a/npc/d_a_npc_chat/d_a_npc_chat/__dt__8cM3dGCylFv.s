lbl_809809D0:
/* 809809D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809809D4  7C 08 02 A6 */	mflr r0
/* 809809D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 809809DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809809E0  7C 7F 1B 79 */	or. r31, r3, r3
/* 809809E4  41 82 00 1C */	beq lbl_80980A00
/* 809809E8  3C A0 80 99 */	lis r5, __vt__8cM3dGCyl@ha /* 0x8098BA44@ha */
/* 809809EC  38 05 BA 44 */	addi r0, r5, __vt__8cM3dGCyl@l /* 0x8098BA44@l */
/* 809809F0  90 1F 00 14 */	stw r0, 0x14(r31)
/* 809809F4  7C 80 07 35 */	extsh. r0, r4
/* 809809F8  40 81 00 08 */	ble lbl_80980A00
/* 809809FC  4B 94 E3 41 */	bl __dl__FPv
lbl_80980A00:
/* 80980A00  7F E3 FB 78 */	mr r3, r31
/* 80980A04  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80980A08  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80980A0C  7C 08 03 A6 */	mtlr r0
/* 80980A10  38 21 00 10 */	addi r1, r1, 0x10
/* 80980A14  4E 80 00 20 */	blr 
