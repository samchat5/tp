lbl_801502EC:
/* 801502EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801502F0  7C 08 02 A6 */	mflr r0
/* 801502F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801502F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801502FC  93 C1 00 08 */	stw r30, 8(r1)
/* 80150300  7C 7E 1B 79 */	or. r30, r3, r3
/* 80150304  7C 9F 23 78 */	mr r31, r4
/* 80150308  41 82 00 98 */	beq lbl_801503A0
/* 8015030C  3C 60 80 3B */	lis r3, __vt__18daBaseNpc_lookat_c@ha /* 0x803B3A14@ha */
/* 80150310  38 03 3A 14 */	addi r0, r3, __vt__18daBaseNpc_lookat_c@l /* 0x803B3A14@l */
/* 80150314  90 1E 00 00 */	stw r0, 0(r30)
/* 80150318  38 7E 00 7C */	addi r3, r30, 0x7c
/* 8015031C  3C 80 80 02 */	lis r4, __dt__5csXyzFv@ha /* 0x80018BD0@ha */
/* 80150320  38 84 8B D0 */	addi r4, r4, __dt__5csXyzFv@l /* 0x80018BD0@l */
/* 80150324  38 A0 00 06 */	li r5, 6
/* 80150328  38 C0 00 04 */	li r6, 4
/* 8015032C  48 21 19 BD */	bl __destroy_arr
/* 80150330  38 7E 00 64 */	addi r3, r30, 0x64
/* 80150334  3C 80 80 02 */	lis r4, __dt__5csXyzFv@ha /* 0x80018BD0@ha */
/* 80150338  38 84 8B D0 */	addi r4, r4, __dt__5csXyzFv@l /* 0x80018BD0@l */
/* 8015033C  38 A0 00 06 */	li r5, 6
/* 80150340  38 C0 00 04 */	li r6, 4
/* 80150344  48 21 19 A5 */	bl __destroy_arr
/* 80150348  38 7E 00 34 */	addi r3, r30, 0x34
/* 8015034C  3C 80 80 01 */	lis r4, __dt__4cXyzFv@ha /* 0x80009184@ha */
/* 80150350  38 84 91 84 */	addi r4, r4, __dt__4cXyzFv@l /* 0x80009184@l */
/* 80150354  38 A0 00 0C */	li r5, 0xc
/* 80150358  38 C0 00 04 */	li r6, 4
/* 8015035C  48 21 19 8D */	bl __destroy_arr
/* 80150360  38 7E 00 1C */	addi r3, r30, 0x1c
/* 80150364  3C 80 80 02 */	lis r4, __dt__5csXyzFv@ha /* 0x80018BD0@ha */
/* 80150368  38 84 8B D0 */	addi r4, r4, __dt__5csXyzFv@l /* 0x80018BD0@l */
/* 8015036C  38 A0 00 06 */	li r5, 6
/* 80150370  38 C0 00 04 */	li r6, 4
/* 80150374  48 21 19 75 */	bl __destroy_arr
/* 80150378  38 7E 00 04 */	addi r3, r30, 4
/* 8015037C  3C 80 80 02 */	lis r4, __dt__5csXyzFv@ha /* 0x80018BD0@ha */
/* 80150380  38 84 8B D0 */	addi r4, r4, __dt__5csXyzFv@l /* 0x80018BD0@l */
/* 80150384  38 A0 00 06 */	li r5, 6
/* 80150388  38 C0 00 04 */	li r6, 4
/* 8015038C  48 21 19 5D */	bl __destroy_arr
/* 80150390  7F E0 07 35 */	extsh. r0, r31
/* 80150394  40 81 00 0C */	ble lbl_801503A0
/* 80150398  7F C3 F3 78 */	mr r3, r30
/* 8015039C  48 17 E9 A1 */	bl __dl__FPv
lbl_801503A0:
/* 801503A0  7F C3 F3 78 */	mr r3, r30
/* 801503A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801503A8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801503AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801503B0  7C 08 03 A6 */	mtlr r0
/* 801503B4  38 21 00 10 */	addi r1, r1, 0x10
/* 801503B8  4E 80 00 20 */	blr 
