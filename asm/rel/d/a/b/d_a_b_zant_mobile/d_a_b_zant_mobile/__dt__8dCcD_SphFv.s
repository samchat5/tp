lbl_806524D4:
/* 806524D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 806524D8  7C 08 02 A6 */	mflr r0
/* 806524DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 806524E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 806524E4  93 C1 00 08 */	stw r30, 8(r1)
/* 806524E8  7C 7E 1B 79 */	or. r30, r3, r3
/* 806524EC  7C 9F 23 78 */	mr r31, r4
/* 806524F0  41 82 00 94 */	beq lbl_80652584
/* 806524F4  3C 60 80 3B */	lis r3, __vt__8dCcD_Sph@ha /* 0x803ABFC0@ha */
/* 806524F8  38 63 BF C0 */	addi r3, r3, __vt__8dCcD_Sph@l /* 0x803ABFC0@l */
/* 806524FC  90 7E 00 3C */	stw r3, 0x3c(r30)
/* 80652500  38 03 00 2C */	addi r0, r3, 0x2c
/* 80652504  90 1E 01 20 */	stw r0, 0x120(r30)
/* 80652508  38 03 00 84 */	addi r0, r3, 0x84
/* 8065250C  90 1E 01 34 */	stw r0, 0x134(r30)
/* 80652510  34 1E 01 04 */	addic. r0, r30, 0x104
/* 80652514  41 82 00 54 */	beq lbl_80652568
/* 80652518  3C 60 80 3C */	lis r3, __vt__12cCcD_SphAttr@ha /* 0x803C3540@ha */
/* 8065251C  38 63 35 40 */	addi r3, r3, __vt__12cCcD_SphAttr@l /* 0x803C3540@l */
/* 80652520  90 7E 01 20 */	stw r3, 0x120(r30)
/* 80652524  38 03 00 58 */	addi r0, r3, 0x58
/* 80652528  90 1E 01 34 */	stw r0, 0x134(r30)
/* 8065252C  34 1E 01 24 */	addic. r0, r30, 0x124
/* 80652530  41 82 00 10 */	beq lbl_80652540
/* 80652534  3C 60 80 65 */	lis r3, __vt__8cM3dGSph@ha /* 0x806528B0@ha */
/* 80652538  38 03 28 B0 */	addi r0, r3, __vt__8cM3dGSph@l /* 0x806528B0@l */
/* 8065253C  90 1E 01 34 */	stw r0, 0x134(r30)
lbl_80652540:
/* 80652540  34 1E 01 04 */	addic. r0, r30, 0x104
/* 80652544  41 82 00 24 */	beq lbl_80652568
/* 80652548  3C 60 80 3C */	lis r3, __vt__14cCcD_ShapeAttr@ha /* 0x803C36D0@ha */
/* 8065254C  38 03 36 D0 */	addi r0, r3, __vt__14cCcD_ShapeAttr@l /* 0x803C36D0@l */
/* 80652550  90 1E 01 20 */	stw r0, 0x120(r30)
/* 80652554  34 1E 01 04 */	addic. r0, r30, 0x104
/* 80652558  41 82 00 10 */	beq lbl_80652568
/* 8065255C  3C 60 80 65 */	lis r3, __vt__8cM3dGAab@ha /* 0x806528BC@ha */
/* 80652560  38 03 28 BC */	addi r0, r3, __vt__8cM3dGAab@l /* 0x806528BC@l */
/* 80652564  90 1E 01 1C */	stw r0, 0x11c(r30)
lbl_80652568:
/* 80652568  7F C3 F3 78 */	mr r3, r30
/* 8065256C  38 80 00 00 */	li r4, 0
/* 80652570  4B A3 1B 75 */	bl __dt__12dCcD_GObjInfFv
/* 80652574  7F E0 07 35 */	extsh. r0, r31
/* 80652578  40 81 00 0C */	ble lbl_80652584
/* 8065257C  7F C3 F3 78 */	mr r3, r30
/* 80652580  4B C7 C7 BD */	bl __dl__FPv
lbl_80652584:
/* 80652584  7F C3 F3 78 */	mr r3, r30
/* 80652588  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8065258C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80652590  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80652594  7C 08 03 A6 */	mtlr r0
/* 80652598  38 21 00 10 */	addi r1, r1, 0x10
/* 8065259C  4E 80 00 20 */	blr 
