lbl_800791D4:
/* 800791D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800791D8  7C 08 02 A6 */	mflr r0
/* 800791DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800791E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800791E4  7C 7F 1B 79 */	or. r31, r3, r3
/* 800791E8  41 82 00 1C */	beq lbl_80079204
/* 800791EC  3C A0 80 3B */	lis r5, __vt__11cBgW_RwgElm@ha /* 0x803ABCB8@ha */
/* 800791F0  38 05 BC B8 */	addi r0, r5, __vt__11cBgW_RwgElm@l /* 0x803ABCB8@l */
/* 800791F4  90 1F 00 04 */	stw r0, 4(r31)
/* 800791F8  7C 80 07 35 */	extsh. r0, r4
/* 800791FC  40 81 00 08 */	ble lbl_80079204
/* 80079200  48 25 5B 3D */	bl __dl__FPv
lbl_80079204:
/* 80079204  7F E3 FB 78 */	mr r3, r31
/* 80079208  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8007920C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80079210  7C 08 03 A6 */	mtlr r0
/* 80079214  38 21 00 10 */	addi r1, r1, 0x10
/* 80079218  4E 80 00 20 */	blr 
