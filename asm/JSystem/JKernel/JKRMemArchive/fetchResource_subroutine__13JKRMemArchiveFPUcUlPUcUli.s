lbl_802D6F5C:
/* 802D6F5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D6F60  7C 08 02 A6 */	mflr r0
/* 802D6F64  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D6F68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D6F6C  7C 68 1B 78 */	mr r8, r3
/* 802D6F70  7C 9F 23 78 */	mr r31, r4
/* 802D6F74  2C 07 00 00 */	cmpwi r7, 0
/* 802D6F78  41 82 00 14 */	beq lbl_802D6F8C
/* 802D6F7C  41 80 00 80 */	blt lbl_802D6FFC
/* 802D6F80  2C 07 00 03 */	cmpwi r7, 3
/* 802D6F84  40 80 00 78 */	bge lbl_802D6FFC
/* 802D6F88  48 00 00 28 */	b lbl_802D6FB0
lbl_802D6F8C:
/* 802D6F8C  7C 1F 30 40 */	cmplw r31, r6
/* 802D6F90  40 81 00 08 */	ble lbl_802D6F98
/* 802D6F94  7C DF 33 78 */	mr r31, r6
lbl_802D6F98:
/* 802D6F98  7C A3 2B 78 */	mr r3, r5
/* 802D6F9C  7D 04 43 78 */	mr r4, r8
/* 802D6FA0  7F E5 FB 78 */	mr r5, r31
/* 802D6FA4  4B D2 C5 9D */	bl memcpy
/* 802D6FA8  7F E3 FB 78 */	mr r3, r31
/* 802D6FAC  48 00 00 70 */	b lbl_802D701C
lbl_802D6FB0:
/* 802D6FB0  88 E8 00 07 */	lbz r7, 7(r8)
/* 802D6FB4  88 88 00 06 */	lbz r4, 6(r8)
/* 802D6FB8  88 68 00 04 */	lbz r3, 4(r8)
/* 802D6FBC  88 08 00 05 */	lbz r0, 5(r8)
/* 802D6FC0  54 00 80 1E */	slwi r0, r0, 0x10
/* 802D6FC4  50 60 C0 0E */	rlwimi r0, r3, 0x18, 0, 7
/* 802D6FC8  50 80 44 2E */	rlwimi r0, r4, 8, 0x10, 0x17
/* 802D6FCC  7C E0 03 78 */	or r0, r7, r0
/* 802D6FD0  7C 1F 03 78 */	mr r31, r0
/* 802D6FD4  7C 00 30 40 */	cmplw r0, r6
/* 802D6FD8  40 81 00 08 */	ble lbl_802D6FE0
/* 802D6FDC  7C DF 33 78 */	mr r31, r6
lbl_802D6FE0:
/* 802D6FE0  7D 03 43 78 */	mr r3, r8
/* 802D6FE4  7C A4 2B 78 */	mr r4, r5
/* 802D6FE8  7F E5 FB 78 */	mr r5, r31
/* 802D6FEC  38 C0 00 00 */	li r6, 0
/* 802D6FF0  48 00 49 99 */	bl orderSync__9JKRDecompFPUcPUcUlUl
/* 802D6FF4  7F E3 FB 78 */	mr r3, r31
/* 802D6FF8  48 00 00 24 */	b lbl_802D701C
lbl_802D6FFC:
/* 802D6FFC  3C 60 80 3A */	lis r3, JKRMemArchive__stringBase0@ha /* 0x8039D160@ha */
/* 802D7000  38 63 D1 60 */	addi r3, r3, JKRMemArchive__stringBase0@l /* 0x8039D160@l */
/* 802D7004  38 80 02 D3 */	li r4, 0x2d3
/* 802D7008  38 A3 00 12 */	addi r5, r3, 0x12
/* 802D700C  38 C3 00 15 */	addi r6, r3, 0x15
/* 802D7010  4C C6 31 82 */	crclr 6
/* 802D7014  48 00 B1 E9 */	bl panic_f__12JUTExceptionFPCciPCce
/* 802D7018  38 60 00 00 */	li r3, 0
lbl_802D701C:
/* 802D701C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D7020  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D7024  7C 08 03 A6 */	mtlr r0
/* 802D7028  38 21 00 10 */	addi r1, r1, 0x10
/* 802D702C  4E 80 00 20 */	blr 
