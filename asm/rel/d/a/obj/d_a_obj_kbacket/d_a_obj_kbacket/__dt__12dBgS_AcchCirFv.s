lbl_805864C8:
/* 805864C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805864CC  7C 08 02 A6 */	mflr r0
/* 805864D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 805864D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 805864D8  93 C1 00 08 */	stw r30, 8(r1)
/* 805864DC  7C 7E 1B 79 */	or. r30, r3, r3
/* 805864E0  7C 9F 23 78 */	mr r31, r4
/* 805864E4  41 82 00 38 */	beq lbl_8058651C
/* 805864E8  3C 60 80 58 */	lis r3, __vt__12dBgS_AcchCir@ha /* 0x80587F90@ha */
/* 805864EC  38 03 7F 90 */	addi r0, r3, __vt__12dBgS_AcchCir@l /* 0x80587F90@l */
/* 805864F0  90 1E 00 0C */	stw r0, 0xc(r30)
/* 805864F4  38 7E 00 14 */	addi r3, r30, 0x14
/* 805864F8  38 80 FF FF */	li r4, -1
/* 805864FC  4B CE 8A 1D */	bl __dt__8cM3dGCirFv
/* 80586500  7F C3 F3 78 */	mr r3, r30
/* 80586504  38 80 00 00 */	li r4, 0
/* 80586508  4B CE 1B A9 */	bl __dt__13cBgS_PolyInfoFv
/* 8058650C  7F E0 07 35 */	extsh. r0, r31
/* 80586510  40 81 00 0C */	ble lbl_8058651C
/* 80586514  7F C3 F3 78 */	mr r3, r30
/* 80586518  4B D4 88 25 */	bl __dl__FPv
lbl_8058651C:
/* 8058651C  7F C3 F3 78 */	mr r3, r30
/* 80586520  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80586524  83 C1 00 08 */	lwz r30, 8(r1)
/* 80586528  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8058652C  7C 08 03 A6 */	mtlr r0
/* 80586530  38 21 00 10 */	addi r1, r1, 0x10
/* 80586534  4E 80 00 20 */	blr 
