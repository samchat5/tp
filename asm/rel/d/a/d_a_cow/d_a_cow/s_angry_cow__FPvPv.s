lbl_80659814:
/* 80659814  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80659818  7C 08 02 A6 */	mflr r0
/* 8065981C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80659820  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80659824  93 C1 00 08 */	stw r30, 8(r1)
/* 80659828  7C 7E 1B 78 */	mr r30, r3
/* 8065982C  7C 9F 23 78 */	mr r31, r4
/* 80659830  4B 9B F4 B1 */	bl fopAc_IsActor__FPv
/* 80659834  2C 03 00 00 */	cmpwi r3, 0
/* 80659838  41 82 00 80 */	beq lbl_806598B8
/* 8065983C  28 1E 00 00 */	cmplwi r30, 0
/* 80659840  41 82 00 0C */	beq lbl_8065984C
/* 80659844  80 7E 00 04 */	lwz r3, 4(r30)
/* 80659848  48 00 00 08 */	b lbl_80659850
lbl_8065984C:
/* 8065984C  38 60 FF FF */	li r3, -1
lbl_80659850:
/* 80659850  4B 9C 88 E9 */	bl fpcM_IsCreating__FUi
/* 80659854  2C 03 00 00 */	cmpwi r3, 0
/* 80659858  40 82 00 60 */	bne lbl_806598B8
/* 8065985C  A8 1E 00 08 */	lha r0, 8(r30)
/* 80659860  2C 00 01 06 */	cmpwi r0, 0x106
/* 80659864  40 82 00 54 */	bne lbl_806598B8
/* 80659868  7C 1E F8 40 */	cmplw r30, r31
/* 8065986C  41 82 00 4C */	beq lbl_806598B8
/* 80659870  7F C3 F3 78 */	mr r3, r30
/* 80659874  48 00 37 49 */	bl isAngry__7daCow_cFv
/* 80659878  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8065987C  40 82 00 14 */	bne lbl_80659890
/* 80659880  7F C3 F3 78 */	mr r3, r30
/* 80659884  48 00 37 B9 */	bl isGuardFad__7daCow_cFv
/* 80659888  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8065988C  41 82 00 2C */	beq lbl_806598B8
lbl_80659890:
/* 80659890  7F C3 F3 78 */	mr r3, r30
/* 80659894  7F E4 FB 78 */	mr r4, r31
/* 80659898  4B 9C 0F 49 */	bl fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c
/* 8065989C  3C 60 80 66 */	lis r3, lit_4446@ha /* 0x80662E00@ha */
/* 806598A0  C0 03 2E 00 */	lfs f0, lit_4446@l(r3)  /* 0x80662E00@l */
/* 806598A4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806598A8  40 80 00 10 */	bge lbl_806598B8
/* 806598AC  38 00 00 01 */	li r0, 1
/* 806598B0  3C 60 80 66 */	lis r3, m_angry_cow@ha /* 0x806634FC@ha */
/* 806598B4  B0 03 34 FC */	sth r0, m_angry_cow@l(r3)  /* 0x806634FC@l */
lbl_806598B8:
/* 806598B8  38 60 00 00 */	li r3, 0
/* 806598BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 806598C0  83 C1 00 08 */	lwz r30, 8(r1)
/* 806598C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 806598C8  7C 08 03 A6 */	mtlr r0
/* 806598CC  38 21 00 10 */	addi r1, r1, 0x10
/* 806598D0  4E 80 00 20 */	blr 
