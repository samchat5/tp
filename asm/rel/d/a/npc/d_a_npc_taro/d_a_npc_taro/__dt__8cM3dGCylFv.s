lbl_805706F4:
/* 805706F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805706F8  7C 08 02 A6 */	mflr r0
/* 805706FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80570700  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80570704  7C 7F 1B 79 */	or. r31, r3, r3
/* 80570708  41 82 00 1C */	beq lbl_80570724
/* 8057070C  3C A0 80 57 */	lis r5, __vt__8cM3dGCyl@ha /* 0x8057347C@ha */
/* 80570710  38 05 34 7C */	addi r0, r5, __vt__8cM3dGCyl@l /* 0x8057347C@l */
/* 80570714  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80570718  7C 80 07 35 */	extsh. r0, r4
/* 8057071C  40 81 00 08 */	ble lbl_80570724
/* 80570720  4B D5 E6 1D */	bl __dl__FPv
lbl_80570724:
/* 80570724  7F E3 FB 78 */	mr r3, r31
/* 80570728  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8057072C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80570730  7C 08 03 A6 */	mtlr r0
/* 80570734  38 21 00 10 */	addi r1, r1, 0x10
/* 80570738  4E 80 00 20 */	blr 
