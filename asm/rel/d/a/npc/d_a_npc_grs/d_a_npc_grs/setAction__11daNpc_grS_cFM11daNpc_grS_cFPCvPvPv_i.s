lbl_809E631C:
/* 809E631C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809E6320  7C 08 02 A6 */	mflr r0
/* 809E6324  90 01 00 14 */	stw r0, 0x14(r1)
/* 809E6328  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809E632C  93 C1 00 08 */	stw r30, 8(r1)
/* 809E6330  7C 7E 1B 78 */	mr r30, r3
/* 809E6334  7C 9F 23 78 */	mr r31, r4
/* 809E6338  38 00 00 03 */	li r0, 3
/* 809E633C  B0 03 0E 12 */	sth r0, 0xe12(r3)
/* 809E6340  38 7E 0D D8 */	addi r3, r30, 0xdd8
/* 809E6344  4B 97 BC D5 */	bl __ptmf_test
/* 809E6348  2C 03 00 00 */	cmpwi r3, 0
/* 809E634C  41 82 00 18 */	beq lbl_809E6364
/* 809E6350  7F C3 F3 78 */	mr r3, r30
/* 809E6354  38 80 00 00 */	li r4, 0
/* 809E6358  39 9E 0D D8 */	addi r12, r30, 0xdd8
/* 809E635C  4B 97 BD 29 */	bl __ptmf_scall
/* 809E6360  60 00 00 00 */	nop 
lbl_809E6364:
/* 809E6364  38 00 00 00 */	li r0, 0
/* 809E6368  B0 1E 0E 12 */	sth r0, 0xe12(r30)
/* 809E636C  80 7F 00 00 */	lwz r3, 0(r31)
/* 809E6370  80 1F 00 04 */	lwz r0, 4(r31)
/* 809E6374  90 7E 0D D8 */	stw r3, 0xdd8(r30)
/* 809E6378  90 1E 0D DC */	stw r0, 0xddc(r30)
/* 809E637C  80 1F 00 08 */	lwz r0, 8(r31)
/* 809E6380  90 1E 0D E0 */	stw r0, 0xde0(r30)
/* 809E6384  38 7E 0D D8 */	addi r3, r30, 0xdd8
/* 809E6388  4B 97 BC 91 */	bl __ptmf_test
/* 809E638C  2C 03 00 00 */	cmpwi r3, 0
/* 809E6390  41 82 00 18 */	beq lbl_809E63A8
/* 809E6394  7F C3 F3 78 */	mr r3, r30
/* 809E6398  38 80 00 00 */	li r4, 0
/* 809E639C  39 9E 0D D8 */	addi r12, r30, 0xdd8
/* 809E63A0  4B 97 BC E5 */	bl __ptmf_scall
/* 809E63A4  60 00 00 00 */	nop 
lbl_809E63A8:
/* 809E63A8  38 60 00 01 */	li r3, 1
/* 809E63AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809E63B0  83 C1 00 08 */	lwz r30, 8(r1)
/* 809E63B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809E63B8  7C 08 03 A6 */	mtlr r0
/* 809E63BC  38 21 00 10 */	addi r1, r1, 0x10
/* 809E63C0  4E 80 00 20 */	blr 
