lbl_8095CE10:
/* 8095CE10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8095CE14  7C 08 02 A6 */	mflr r0
/* 8095CE18  90 01 00 14 */	stw r0, 0x14(r1)
/* 8095CE1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8095CE20  93 C1 00 08 */	stw r30, 8(r1)
/* 8095CE24  7C 7E 1B 79 */	or. r30, r3, r3
/* 8095CE28  7C 9F 23 78 */	mr r31, r4
/* 8095CE2C  41 82 00 98 */	beq lbl_8095CEC4
/* 8095CE30  3C 60 80 96 */	lis r3, __vt__15daNpcF_Lookat_c@ha /* 0x8095DD20@ha */
/* 8095CE34  38 03 DD 20 */	addi r0, r3, __vt__15daNpcF_Lookat_c@l /* 0x8095DD20@l */
/* 8095CE38  90 1E 00 98 */	stw r0, 0x98(r30)
/* 8095CE3C  38 7E 00 7C */	addi r3, r30, 0x7c
/* 8095CE40  3C 80 80 96 */	lis r4, __dt__5csXyzFv@ha /* 0x8095CEE0@ha */
/* 8095CE44  38 84 CE E0 */	addi r4, r4, __dt__5csXyzFv@l /* 0x8095CEE0@l */
/* 8095CE48  38 A0 00 06 */	li r5, 6
/* 8095CE4C  38 C0 00 04 */	li r6, 4
/* 8095CE50  4B A0 4E 99 */	bl __destroy_arr
/* 8095CE54  38 7E 00 64 */	addi r3, r30, 0x64
/* 8095CE58  3C 80 80 96 */	lis r4, __dt__5csXyzFv@ha /* 0x8095CEE0@ha */
/* 8095CE5C  38 84 CE E0 */	addi r4, r4, __dt__5csXyzFv@l /* 0x8095CEE0@l */
/* 8095CE60  38 A0 00 06 */	li r5, 6
/* 8095CE64  38 C0 00 04 */	li r6, 4
/* 8095CE68  4B A0 4E 81 */	bl __destroy_arr
/* 8095CE6C  38 7E 00 4C */	addi r3, r30, 0x4c
/* 8095CE70  3C 80 80 96 */	lis r4, __dt__5csXyzFv@ha /* 0x8095CEE0@ha */
/* 8095CE74  38 84 CE E0 */	addi r4, r4, __dt__5csXyzFv@l /* 0x8095CEE0@l */
/* 8095CE78  38 A0 00 06 */	li r5, 6
/* 8095CE7C  38 C0 00 04 */	li r6, 4
/* 8095CE80  4B A0 4E 69 */	bl __destroy_arr
/* 8095CE84  38 7E 00 34 */	addi r3, r30, 0x34
/* 8095CE88  3C 80 80 96 */	lis r4, __dt__5csXyzFv@ha /* 0x8095CEE0@ha */
/* 8095CE8C  38 84 CE E0 */	addi r4, r4, __dt__5csXyzFv@l /* 0x8095CEE0@l */
/* 8095CE90  38 A0 00 06 */	li r5, 6
/* 8095CE94  38 C0 00 04 */	li r6, 4
/* 8095CE98  4B A0 4E 51 */	bl __destroy_arr
/* 8095CE9C  7F C3 F3 78 */	mr r3, r30
/* 8095CEA0  3C 80 80 96 */	lis r4, __dt__4cXyzFv@ha /* 0x8095CF20@ha */
/* 8095CEA4  38 84 CF 20 */	addi r4, r4, __dt__4cXyzFv@l /* 0x8095CF20@l */
/* 8095CEA8  38 A0 00 0C */	li r5, 0xc
/* 8095CEAC  38 C0 00 04 */	li r6, 4
/* 8095CEB0  4B A0 4E 39 */	bl __destroy_arr
/* 8095CEB4  7F E0 07 35 */	extsh. r0, r31
/* 8095CEB8  40 81 00 0C */	ble lbl_8095CEC4
/* 8095CEBC  7F C3 F3 78 */	mr r3, r30
/* 8095CEC0  4B 97 1E 7D */	bl __dl__FPv
lbl_8095CEC4:
/* 8095CEC4  7F C3 F3 78 */	mr r3, r30
/* 8095CEC8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8095CECC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8095CED0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8095CED4  7C 08 03 A6 */	mtlr r0
/* 8095CED8  38 21 00 10 */	addi r1, r1, 0x10
/* 8095CEDC  4E 80 00 20 */	blr 
