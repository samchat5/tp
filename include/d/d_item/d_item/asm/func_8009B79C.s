/* 8009B79C 000986DC  38 80 00 00 */	li r4, 0
/* 8009B7A0 000986E0  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8009B7A4 000986E4  2C 00 00 D8 */	cmpwi r0, 0xd8
/* 8009B7A8 000986E8  40 80 00 14 */	bge lbl_8009B7BC
/* 8009B7AC 000986EC  2C 00 00 C0 */	cmpwi r0, 0xc0
/* 8009B7B0 000986F0  40 80 00 08 */	bge lbl_8009B7B8
/* 8009B7B4 000986F4  48 00 00 08 */	b lbl_8009B7BC
lbl_8009B7B8:
/* 8009B7B8 000986F8  38 80 00 01 */	li r4, 1
lbl_8009B7BC:
/* 8009B7BC 000986FC  7C 83 23 78 */	mr r3, r4
/* 8009B7C0 00098700  4E 80 00 20 */	blr 