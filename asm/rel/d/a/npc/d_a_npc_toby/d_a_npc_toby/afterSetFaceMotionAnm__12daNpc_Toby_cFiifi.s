lbl_80B2050C:
/* 80B2050C  2C 04 00 06 */	cmpwi r4, 6
/* 80B20510  41 82 00 50 */	beq lbl_80B20560
/* 80B20514  40 80 00 10 */	bge lbl_80B20524
/* 80B20518  2C 04 00 04 */	cmpwi r4, 4
/* 80B2051C  40 80 00 14 */	bge lbl_80B20530
/* 80B20520  48 00 00 40 */	b lbl_80B20560
lbl_80B20524:
/* 80B20524  2C 04 00 08 */	cmpwi r4, 8
/* 80B20528  40 80 00 38 */	bge lbl_80B20560
/* 80B2052C  48 00 00 18 */	b lbl_80B20544
lbl_80B20530:
/* 80B20530  3C 80 80 B2 */	lis r4, lit_4159@ha /* 0x80B24AAC@ha */
/* 80B20534  C0 04 4A AC */	lfs f0, lit_4159@l(r4)  /* 0x80B24AAC@l */
/* 80B20538  D0 03 06 1C */	stfs f0, 0x61c(r3)
/* 80B2053C  D0 03 06 38 */	stfs f0, 0x638(r3)
/* 80B20540  48 00 00 20 */	b lbl_80B20560
lbl_80B20544:
/* 80B20544  80 03 0D 98 */	lwz r0, 0xd98(r3)
/* 80B20548  54 00 07 32 */	rlwinm r0, r0, 0, 0x1c, 0x19
/* 80B2054C  90 03 0D 98 */	stw r0, 0xd98(r3)
/* 80B20550  C0 03 0F F8 */	lfs f0, 0xff8(r3)
/* 80B20554  D0 03 06 1C */	stfs f0, 0x61c(r3)
/* 80B20558  C0 03 0F F8 */	lfs f0, 0xff8(r3)
/* 80B2055C  D0 03 06 38 */	stfs f0, 0x638(r3)
lbl_80B20560:
/* 80B20560  38 60 00 01 */	li r3, 1
/* 80B20564  4E 80 00 20 */	blr 
