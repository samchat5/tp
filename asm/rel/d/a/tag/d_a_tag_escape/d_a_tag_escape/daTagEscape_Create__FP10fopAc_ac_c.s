lbl_80D587D8:
/* 80D587D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D587DC  7C 08 02 A6 */	mflr r0
/* 80D587E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D587E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80D587E8  7C 7F 1B 78 */	mr r31, r3
/* 80D587EC  80 03 04 A0 */	lwz r0, 0x4a0(r3)
/* 80D587F0  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 80D587F4  40 82 00 1C */	bne lbl_80D58810
/* 80D587F8  28 1F 00 00 */	cmplwi r31, 0
/* 80D587FC  41 82 00 08 */	beq lbl_80D58804
/* 80D58800  4B 2C 03 65 */	bl __ct__10fopAc_ac_cFv
lbl_80D58804:
/* 80D58804  80 1F 04 A0 */	lwz r0, 0x4a0(r31)
/* 80D58808  60 00 00 08 */	ori r0, r0, 8
/* 80D5880C  90 1F 04 A0 */	stw r0, 0x4a0(r31)
lbl_80D58810:
/* 80D58810  38 60 00 04 */	li r3, 4
/* 80D58814  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80D58818  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D5881C  7C 08 03 A6 */	mtlr r0
/* 80D58820  38 21 00 10 */	addi r1, r1, 0x10
/* 80D58824  4E 80 00 20 */	blr 
