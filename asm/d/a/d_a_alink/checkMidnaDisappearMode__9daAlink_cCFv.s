lbl_801371A0:
/* 801371A0  38 A0 00 00 */	li r5, 0
/* 801371A4  A0 03 2F E8 */	lhz r0, 0x2fe8(r3)
/* 801371A8  28 00 01 33 */	cmplwi r0, 0x133
/* 801371AC  41 82 00 44 */	beq lbl_801371F0
/* 801371B0  80 03 05 74 */	lwz r0, 0x574(r3)
/* 801371B4  54 00 01 8D */	rlwinm. r0, r0, 0, 6, 6
/* 801371B8  41 82 00 3C */	beq lbl_801371F4
/* 801371BC  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 801371C0  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 801371C4  80 84 5F 18 */	lwz r4, 0x5f18(r4)
/* 801371C8  54 80 01 09 */	rlwinm. r0, r4, 0, 4, 4
/* 801371CC  41 82 00 28 */	beq lbl_801371F4
/* 801371D0  54 80 06 F7 */	rlwinm. r0, r4, 0, 0x1b, 0x1b
/* 801371D4  40 82 00 20 */	bne lbl_801371F4
/* 801371D8  80 63 27 EC */	lwz r3, 0x27ec(r3)
/* 801371DC  28 03 00 00 */	cmplwi r3, 0
/* 801371E0  41 82 00 10 */	beq lbl_801371F0
/* 801371E4  80 03 05 5C */	lwz r0, 0x55c(r3)
/* 801371E8  54 00 02 11 */	rlwinm. r0, r0, 0, 8, 8
/* 801371EC  40 82 00 08 */	bne lbl_801371F4
lbl_801371F0:
/* 801371F0  38 A0 00 01 */	li r5, 1
lbl_801371F4:
/* 801371F4  54 A3 06 3E */	clrlwi r3, r5, 0x18
/* 801371F8  4E 80 00 20 */	blr 
