lbl_8009AD24:
/* 8009AD24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009AD28  7C 08 02 A6 */	mflr r0
/* 8009AD2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009AD30  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8009AD34  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 8009AD38  38 63 00 9C */	addi r3, r3, 0x9c
/* 8009AD3C  38 80 00 9C */	li r4, 0x9c
/* 8009AD40  4B F9 89 A1 */	bl checkBottle__17dSv_player_item_cFUc
/* 8009AD44  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8009AD48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009AD4C  7C 08 03 A6 */	mtlr r0
/* 8009AD50  38 21 00 10 */	addi r1, r1, 0x10
/* 8009AD54  4E 80 00 20 */	blr 
