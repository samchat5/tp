lbl_80326134:
/* 80326134  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80326138  7C 08 02 A6 */	mflr r0
/* 8032613C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80326140  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80326144  7C 7F 1B 79 */	or. r31, r3, r3
/* 80326148  41 82 00 1C */	beq lbl_80326164
/* 8032614C  3C A0 80 3D */	lis r5, __vt__13J3DShapeTable@ha /* 0x803CED08@ha */
/* 80326150  38 05 ED 08 */	addi r0, r5, __vt__13J3DShapeTable@l /* 0x803CED08@l */
/* 80326154  90 1F 00 00 */	stw r0, 0(r31)
/* 80326158  7C 80 07 35 */	extsh. r0, r4
/* 8032615C  40 81 00 08 */	ble lbl_80326164
/* 80326160  4B FA 8B DD */	bl __dl__FPv
lbl_80326164:
/* 80326164  7F E3 FB 78 */	mr r3, r31
/* 80326168  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8032616C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80326170  7C 08 03 A6 */	mtlr r0
/* 80326174  38 21 00 10 */	addi r1, r1, 0x10
/* 80326178  4E 80 00 20 */	blr 
