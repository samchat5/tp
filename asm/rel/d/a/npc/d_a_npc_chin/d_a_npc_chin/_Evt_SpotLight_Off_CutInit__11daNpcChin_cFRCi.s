lbl_80990D44:
/* 80990D44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80990D48  7C 08 02 A6 */	mflr r0
/* 80990D4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80990D50  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80990D54  7C 7F 1B 78 */	mr r31, r3
/* 80990D58  80 04 00 00 */	lwz r0, 0(r4)
/* 80990D5C  2C 00 00 0A */	cmpwi r0, 0xa
/* 80990D60  41 82 00 08 */	beq lbl_80990D68
/* 80990D64  48 00 00 60 */	b lbl_80990DC4
lbl_80990D68:
/* 80990D68  38 80 00 0E */	li r4, 0xe
/* 80990D6C  3C A0 80 99 */	lis r5, lit_4627@ha /* 0x809919A4@ha */
/* 80990D70  C0 25 19 A4 */	lfs f1, lit_4627@l(r5)  /* 0x809919A4@l */
/* 80990D74  81 83 0B 44 */	lwz r12, 0xb44(r3)
/* 80990D78  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 80990D7C  7D 89 03 A6 */	mtctr r12
/* 80990D80  4E 80 04 21 */	bctrl 
/* 80990D84  7F E3 FB 78 */	mr r3, r31
/* 80990D88  38 80 00 00 */	li r4, 0
/* 80990D8C  3C A0 80 99 */	lis r5, lit_4627@ha /* 0x809919A4@ha */
/* 80990D90  C0 25 19 A4 */	lfs f1, lit_4627@l(r5)  /* 0x809919A4@l */
/* 80990D94  38 A0 00 00 */	li r5, 0
/* 80990D98  81 9F 0B 44 */	lwz r12, 0xb44(r31)
/* 80990D9C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80990DA0  7D 89 03 A6 */	mtctr r12
/* 80990DA4  4E 80 04 21 */	bctrl 
/* 80990DA8  38 00 00 00 */	li r0, 0
/* 80990DAC  98 1F 0E 6C */	stb r0, 0xe6c(r31)
/* 80990DB0  3C 60 80 99 */	lis r3, lit_3885@ha /* 0x8099197C@ha */
/* 80990DB4  C0 03 19 7C */	lfs f0, lit_3885@l(r3)  /* 0x8099197C@l */
/* 80990DB8  D0 1F 0E 40 */	stfs f0, 0xe40(r31)
/* 80990DBC  38 00 00 0A */	li r0, 0xa
/* 80990DC0  90 1F 0D F8 */	stw r0, 0xdf8(r31)
lbl_80990DC4:
/* 80990DC4  38 60 00 01 */	li r3, 1
/* 80990DC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80990DCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80990DD0  7C 08 03 A6 */	mtlr r0
/* 80990DD4  38 21 00 10 */	addi r1, r1, 0x10
/* 80990DD8  4E 80 00 20 */	blr 
