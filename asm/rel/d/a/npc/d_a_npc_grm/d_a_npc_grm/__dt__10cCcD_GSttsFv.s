lbl_809D5DD8:
/* 809D5DD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809D5DDC  7C 08 02 A6 */	mflr r0
/* 809D5DE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 809D5DE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809D5DE8  7C 7F 1B 79 */	or. r31, r3, r3
/* 809D5DEC  41 82 00 1C */	beq lbl_809D5E08
/* 809D5DF0  3C A0 80 9D */	lis r5, __vt__10cCcD_GStts@ha /* 0x809D71BC@ha */
/* 809D5DF4  38 05 71 BC */	addi r0, r5, __vt__10cCcD_GStts@l /* 0x809D71BC@l */
/* 809D5DF8  90 1F 00 00 */	stw r0, 0(r31)
/* 809D5DFC  7C 80 07 35 */	extsh. r0, r4
/* 809D5E00  40 81 00 08 */	ble lbl_809D5E08
/* 809D5E04  4B 8F 8F 39 */	bl __dl__FPv
lbl_809D5E08:
/* 809D5E08  7F E3 FB 78 */	mr r3, r31
/* 809D5E0C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809D5E10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809D5E14  7C 08 03 A6 */	mtlr r0
/* 809D5E18  38 21 00 10 */	addi r1, r1, 0x10
/* 809D5E1C  4E 80 00 20 */	blr 
