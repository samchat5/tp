lbl_80C04DCC:
/* 80C04DCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C04DD0  7C 08 02 A6 */	mflr r0
/* 80C04DD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C04DD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C04DDC  7C 7F 1B 79 */	or. r31, r3, r3
/* 80C04DE0  41 82 00 1C */	beq lbl_80C04DFC
/* 80C04DE4  3C A0 80 C1 */	lis r5, __vt__8cM3dGSph@ha /* 0x80C10858@ha */
/* 80C04DE8  38 05 08 58 */	addi r0, r5, __vt__8cM3dGSph@l /* 0x80C10858@l */
/* 80C04DEC  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80C04DF0  7C 80 07 35 */	extsh. r0, r4
/* 80C04DF4  40 81 00 08 */	ble lbl_80C04DFC
/* 80C04DF8  4B 6C 9F 45 */	bl __dl__FPv
lbl_80C04DFC:
/* 80C04DFC  7F E3 FB 78 */	mr r3, r31
/* 80C04E00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C04E04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C04E08  7C 08 03 A6 */	mtlr r0
/* 80C04E0C  38 21 00 10 */	addi r1, r1, 0x10
/* 80C04E10  4E 80 00 20 */	blr 
