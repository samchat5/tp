lbl_80D3A21C:
/* 80D3A21C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80D3A220  7C 08 02 A6 */	mflr r0
/* 80D3A224  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D3A228  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80D3A22C  7C 7F 1B 78 */	mr r31, r3
/* 80D3A230  4B 2D EA B1 */	bl fopAc_IsActor__FPv
/* 80D3A234  2C 03 00 00 */	cmpwi r3, 0
/* 80D3A238  41 82 00 18 */	beq lbl_80D3A250
/* 80D3A23C  A8 1F 00 08 */	lha r0, 8(r31)
/* 80D3A240  2C 00 01 B9 */	cmpwi r0, 0x1b9
/* 80D3A244  40 82 00 0C */	bne lbl_80D3A250
/* 80D3A248  7F E3 FB 78 */	mr r3, r31
/* 80D3A24C  48 00 00 08 */	b lbl_80D3A254
lbl_80D3A250:
/* 80D3A250  38 60 00 00 */	li r3, 0
lbl_80D3A254:
/* 80D3A254  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80D3A258  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80D3A25C  7C 08 03 A6 */	mtlr r0
/* 80D3A260  38 21 00 10 */	addi r1, r1, 0x10
/* 80D3A264  4E 80 00 20 */	blr 
