lbl_80992F10:
/* 80992F10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80992F14  7C 08 02 A6 */	mflr r0
/* 80992F18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80992F1C  7C 60 1B 78 */	mr r0, r3
/* 80992F20  2C 04 00 00 */	cmpwi r4, 0
/* 80992F24  40 82 00 30 */	bne lbl_80992F54
/* 80992F28  3C 60 80 43 */	lis r3, j3dSys@ha /* 0x80434AC8@ha */
/* 80992F2C  38 63 4A C8 */	addi r3, r3, j3dSys@l /* 0x80434AC8@l */
/* 80992F30  80 A3 00 38 */	lwz r5, 0x38(r3)
/* 80992F34  80 65 00 14 */	lwz r3, 0x14(r5)
/* 80992F38  28 03 00 00 */	cmplwi r3, 0
/* 80992F3C  41 82 00 18 */	beq lbl_80992F54
/* 80992F40  7C 04 03 78 */	mr r4, r0
/* 80992F44  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 80992F48  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80992F4C  7D 89 03 A6 */	mtctr r12
/* 80992F50  4E 80 04 21 */	bctrl 
lbl_80992F54:
/* 80992F54  38 60 00 01 */	li r3, 1
/* 80992F58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80992F5C  7C 08 03 A6 */	mtlr r0
/* 80992F60  38 21 00 10 */	addi r1, r1, 0x10
/* 80992F64  4E 80 00 20 */	blr 
