lbl_8021BB6C:
/* 8021BB6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8021BB70  7C 08 02 A6 */	mflr r0
/* 8021BB74  90 01 00 14 */	stw r0, 0x14(r1)
/* 8021BB78  3C 80 80 43 */	lis r4, g_meter2_info@ha /* 0x80430188@ha */
/* 8021BB7C  38 84 01 88 */	addi r4, r4, g_meter2_info@l /* 0x80430188@l */
/* 8021BB80  A0 04 00 B0 */	lhz r0, 0xb0(r4)
/* 8021BB84  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8021BB88  41 82 00 18 */	beq lbl_8021BBA0
/* 8021BB8C  48 00 00 29 */	bl getCanoeFishing__13dMeter2Draw_cFv
/* 8021BB90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8021BB94  41 82 00 0C */	beq lbl_8021BBA0
/* 8021BB98  38 60 00 01 */	li r3, 1
/* 8021BB9C  48 00 00 08 */	b lbl_8021BBA4
lbl_8021BBA0:
/* 8021BBA0  38 60 00 00 */	li r3, 0
lbl_8021BBA4:
/* 8021BBA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8021BBA8  7C 08 03 A6 */	mtlr r0
/* 8021BBAC  38 21 00 10 */	addi r1, r1, 0x10
/* 8021BBB0  4E 80 00 20 */	blr 
