lbl_800D20FC:
/* 800D20FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800D2100  7C 08 02 A6 */	mflr r0
/* 800D2104  90 01 00 14 */	stw r0, 0x14(r1)
/* 800D2108  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800D210C  7C 7F 1B 78 */	mr r31, r3
/* 800D2110  80 03 05 74 */	lwz r0, 0x574(r3)
/* 800D2114  54 00 01 8D */	rlwinm. r0, r0, 0, 6, 6
/* 800D2118  41 82 00 18 */	beq lbl_800D2130
/* 800D211C  3C 60 80 39 */	lis r3, m__22daAlinkHIO_wlAttack_c0@ha /* 0x8038F7A4@ha */
/* 800D2120  38 63 F7 A4 */	addi r3, r3, m__22daAlinkHIO_wlAttack_c0@l /* 0x8038F7A4@l */
/* 800D2124  A8 03 00 16 */	lha r0, 0x16(r3)
/* 800D2128  B0 1F 30 7E */	sth r0, 0x307e(r31)
/* 800D212C  48 00 00 14 */	b lbl_800D2140
lbl_800D2130:
/* 800D2130  3C 60 80 39 */	lis r3, m__17daAlinkHIO_cut_c0@ha /* 0x8038DE8C@ha */
/* 800D2134  38 63 DE 8C */	addi r3, r3, m__17daAlinkHIO_cut_c0@l /* 0x8038DE8C@l */
/* 800D2138  A8 03 00 52 */	lha r0, 0x52(r3)
/* 800D213C  B0 1F 30 7E */	sth r0, 0x307e(r31)
lbl_800D2140:
/* 800D2140  88 1F 05 69 */	lbz r0, 0x569(r31)
/* 800D2144  28 00 00 04 */	cmplwi r0, 4
/* 800D2148  41 82 00 2C */	beq lbl_800D2174
/* 800D214C  88 1F 2F CE */	lbz r0, 0x2fce(r31)
/* 800D2150  28 00 00 00 */	cmplwi r0, 0
/* 800D2154  40 82 00 20 */	bne lbl_800D2174
/* 800D2158  7F E3 FB 78 */	mr r3, r31
/* 800D215C  4B FE 05 5D */	bl swordSwingTrigger__9daAlink_cFv
/* 800D2160  2C 03 00 00 */	cmpwi r3, 0
/* 800D2164  41 82 00 10 */	beq lbl_800D2174
/* 800D2168  80 1F 05 78 */	lwz r0, 0x578(r31)
/* 800D216C  60 00 00 02 */	ori r0, r0, 2
/* 800D2170  90 1F 05 78 */	stw r0, 0x578(r31)
lbl_800D2174:
/* 800D2174  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800D2178  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800D217C  7C 08 03 A6 */	mtlr r0
/* 800D2180  38 21 00 10 */	addi r1, r1, 0x10
/* 800D2184  4E 80 00 20 */	blr 
