lbl_807144D4:
/* 807144D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 807144D8  7C 08 02 A6 */	mflr r0
/* 807144DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 807144E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 807144E4  7C 7F 1B 78 */	mr r31, r3
/* 807144E8  4B 90 47 F9 */	bl fopAc_IsActor__FPv
/* 807144EC  2C 03 00 00 */	cmpwi r3, 0
/* 807144F0  41 82 00 2C */	beq lbl_8071451C
/* 807144F4  A8 1F 00 08 */	lha r0, 8(r31)
/* 807144F8  2C 00 01 C5 */	cmpwi r0, 0x1c5
/* 807144FC  40 82 00 10 */	bne lbl_8071450C
/* 80714500  38 00 03 E8 */	li r0, 0x3e8
/* 80714504  B0 1F 05 62 */	sth r0, 0x562(r31)
/* 80714508  48 00 00 14 */	b lbl_8071451C
lbl_8071450C:
/* 8071450C  2C 00 01 C6 */	cmpwi r0, 0x1c6
/* 80714510  40 82 00 0C */	bne lbl_8071451C
/* 80714514  7F E3 FB 78 */	mr r3, r31
/* 80714518  4B 90 57 65 */	bl fopAcM_delete__FP10fopAc_ac_c
lbl_8071451C:
/* 8071451C  38 60 00 00 */	li r3, 0
/* 80714520  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80714524  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80714528  7C 08 03 A6 */	mtlr r0
/* 8071452C  38 21 00 10 */	addi r1, r1, 0x10
/* 80714530  4E 80 00 20 */	blr 
