lbl_802383D0:
/* 802383D0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 802383D4  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 802383D8  80 63 5D BC */	lwz r3, 0x5dbc(r3)
/* 802383DC  80 63 01 54 */	lwz r3, 0x154(r3)
/* 802383E0  4E 80 00 20 */	blr 
