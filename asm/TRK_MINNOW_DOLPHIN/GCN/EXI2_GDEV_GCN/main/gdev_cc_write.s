lbl_803729E4:
/* 803729E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803729E8  7C 08 02 A6 */	mflr r0
/* 803729EC  3C A0 80 3A */	lis r5, lit_318@ha /* 0x803A2DF0@ha */
/* 803729F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 803729F4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803729F8  3B E5 2D F0 */	addi r31, r5, lit_318@l /* 0x803A2DF0@l */
/* 803729FC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80372A00  7C 9E 23 78 */	mr r30, r4
/* 80372A04  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80372A08  7C 7D 1B 78 */	mr r29, r3
/* 80372A0C  80 0D 94 48 */	lwz r0, gIsInitialized(r13)
/* 80372A10  2C 00 00 00 */	cmpwi r0, 0
/* 80372A14  40 82 00 1C */	bne lbl_80372A30
/* 80372A18  38 9F 00 00 */	addi r4, r31, 0
/* 80372A1C  38 60 00 08 */	li r3, 8
/* 80372A20  4C C6 31 82 */	crclr 6
/* 80372A24  48 00 02 31 */	bl MWTRACE
/* 80372A28  38 60 D8 EF */	li r3, -10001
/* 80372A2C  48 00 00 5C */	b lbl_80372A88
lbl_80372A30:
/* 80372A30  7C 65 1B 78 */	mr r5, r3
/* 80372A34  7C 86 23 78 */	mr r6, r4
/* 80372A38  38 9F 00 14 */	addi r4, r31, 0x14
/* 80372A3C  38 60 00 08 */	li r3, 8
/* 80372A40  4C C6 31 82 */	crclr 6
/* 80372A44  48 00 02 11 */	bl MWTRACE
/* 80372A48  48 00 00 34 */	b lbl_80372A7C
lbl_80372A4C:
/* 80372A4C  7F C5 F3 78 */	mr r5, r30
/* 80372A50  38 9F 00 40 */	addi r4, r31, 0x40
/* 80372A54  38 60 00 01 */	li r3, 1
/* 80372A58  4C C6 31 82 */	crclr 6
/* 80372A5C  48 00 01 F9 */	bl MWTRACE
/* 80372A60  7F A3 EB 78 */	mr r3, r29
/* 80372A64  7F C4 F3 78 */	mr r4, r30
/* 80372A68  48 00 02 CD */	bl DBWrite
/* 80372A6C  2C 03 00 00 */	cmpwi r3, 0
/* 80372A70  41 82 00 14 */	beq lbl_80372A84
/* 80372A74  7F BD 1A 14 */	add r29, r29, r3
/* 80372A78  7F C3 F0 50 */	subf r30, r3, r30
lbl_80372A7C:
/* 80372A7C  2C 1E 00 00 */	cmpwi r30, 0
/* 80372A80  41 81 FF CC */	bgt lbl_80372A4C
lbl_80372A84:
/* 80372A84  38 60 00 00 */	li r3, 0
lbl_80372A88:
/* 80372A88  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80372A8C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80372A90  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80372A94  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80372A98  7C 08 03 A6 */	mtlr r0
/* 80372A9C  38 21 00 20 */	addi r1, r1, 0x20
/* 80372AA0  4E 80 00 20 */	blr 
