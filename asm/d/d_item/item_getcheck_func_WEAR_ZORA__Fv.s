lbl_80099CF8:
/* 80099CF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80099CFC  7C 08 02 A6 */	mflr r0
/* 80099D00  90 01 00 14 */	stw r0, 0x14(r1)
/* 80099D04  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80099D08  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80099D0C  38 63 00 CC */	addi r3, r3, 0xcc
/* 80099D10  38 80 00 31 */	li r4, 0x31
/* 80099D14  4B F9 A1 B5 */	bl isFirstBit__21dSv_player_get_item_cCFUc
/* 80099D18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80099D1C  7C 08 03 A6 */	mtlr r0
/* 80099D20  38 21 00 10 */	addi r1, r1, 0x10
/* 80099D24  4E 80 00 20 */	blr 
