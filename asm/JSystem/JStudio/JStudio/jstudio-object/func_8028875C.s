lbl_8028875C:
/* 8028875C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80288760  7C 08 02 A6 */	mflr r0
/* 80288764  90 01 00 14 */	stw r0, 0x14(r1)
/* 80288768  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8028876C  93 C1 00 08 */	stw r30, 8(r1)
/* 80288770  7C 7E 1B 79 */	or. r30, r3, r3
/* 80288774  7C 9F 23 78 */	mr r31, r4
/* 80288778  41 82 00 28 */	beq lbl_802887A0
/* 8028877C  3C 80 80 3C */	lis r4, data_803C5690@ha /* 0x803C5690@ha */
/* 80288780  38 04 56 90 */	addi r0, r4, data_803C5690@l /* 0x803C5690@l */
/* 80288784  90 1E 00 00 */	stw r0, 0(r30)
/* 80288788  38 80 00 00 */	li r4, 0
/* 8028878C  4B FF D6 81 */	bl __dt__Q37JStudio14TVariableValue7TOutputFv
/* 80288790  7F E0 07 35 */	extsh. r0, r31
/* 80288794  40 81 00 0C */	ble lbl_802887A0
/* 80288798  7F C3 F3 78 */	mr r3, r30
/* 8028879C  48 04 65 A1 */	bl __dl__FPv
lbl_802887A0:
/* 802887A0  7F C3 F3 78 */	mr r3, r30
/* 802887A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802887A8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802887AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802887B0  7C 08 03 A6 */	mtlr r0
/* 802887B4  38 21 00 10 */	addi r1, r1, 0x10
/* 802887B8  4E 80 00 20 */	blr 
