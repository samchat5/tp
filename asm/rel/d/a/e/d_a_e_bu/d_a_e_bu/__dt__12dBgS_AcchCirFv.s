lbl_8069411C:
/* 8069411C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80694120  7C 08 02 A6 */	mflr r0
/* 80694124  90 01 00 14 */	stw r0, 0x14(r1)
/* 80694128  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8069412C  93 C1 00 08 */	stw r30, 8(r1)
/* 80694130  7C 7E 1B 79 */	or. r30, r3, r3
/* 80694134  7C 9F 23 78 */	mr r31, r4
/* 80694138  41 82 00 38 */	beq lbl_80694170
/* 8069413C  3C 60 80 69 */	lis r3, __vt__12dBgS_AcchCir@ha /* 0x806948E0@ha */
/* 80694140  38 03 48 E0 */	addi r0, r3, __vt__12dBgS_AcchCir@l /* 0x806948E0@l */
/* 80694144  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80694148  38 7E 00 14 */	addi r3, r30, 0x14
/* 8069414C  38 80 FF FF */	li r4, -1
/* 80694150  4B BD AD C9 */	bl __dt__8cM3dGCirFv
/* 80694154  7F C3 F3 78 */	mr r3, r30
/* 80694158  38 80 00 00 */	li r4, 0
/* 8069415C  4B BD 3F 55 */	bl __dt__13cBgS_PolyInfoFv
/* 80694160  7F E0 07 35 */	extsh. r0, r31
/* 80694164  40 81 00 0C */	ble lbl_80694170
/* 80694168  7F C3 F3 78 */	mr r3, r30
/* 8069416C  4B C3 AB D1 */	bl __dl__FPv
lbl_80694170:
/* 80694170  7F C3 F3 78 */	mr r3, r30
/* 80694174  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80694178  83 C1 00 08 */	lwz r30, 8(r1)
/* 8069417C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80694180  7C 08 03 A6 */	mtlr r0
/* 80694184  38 21 00 10 */	addi r1, r1, 0x10
/* 80694188  4E 80 00 20 */	blr 
