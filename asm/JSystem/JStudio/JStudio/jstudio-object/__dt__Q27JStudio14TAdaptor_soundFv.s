lbl_80287B3C:
/* 80287B3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80287B40  7C 08 02 A6 */	mflr r0
/* 80287B44  90 01 00 14 */	stw r0, 0x14(r1)
/* 80287B48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80287B4C  93 C1 00 08 */	stw r30, 8(r1)
/* 80287B50  7C 7E 1B 79 */	or. r30, r3, r3
/* 80287B54  7C 9F 23 78 */	mr r31, r4
/* 80287B58  41 82 00 28 */	beq lbl_80287B80
/* 80287B5C  3C 80 80 3C */	lis r4, __vt__Q27JStudio14TAdaptor_sound@ha /* 0x803C535C@ha */
/* 80287B60  38 04 53 5C */	addi r0, r4, __vt__Q27JStudio14TAdaptor_sound@l /* 0x803C535C@l */
/* 80287B64  90 1E 00 00 */	stw r0, 0(r30)
/* 80287B68  38 80 00 00 */	li r4, 0
/* 80287B6C  4B FF E4 65 */	bl __dt__Q27JStudio8TAdaptorFv
/* 80287B70  7F E0 07 35 */	extsh. r0, r31
/* 80287B74  40 81 00 0C */	ble lbl_80287B80
/* 80287B78  7F C3 F3 78 */	mr r3, r30
/* 80287B7C  48 04 71 C1 */	bl __dl__FPv
lbl_80287B80:
/* 80287B80  7F C3 F3 78 */	mr r3, r30
/* 80287B84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80287B88  83 C1 00 08 */	lwz r30, 8(r1)
/* 80287B8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80287B90  7C 08 03 A6 */	mtlr r0
/* 80287B94  38 21 00 10 */	addi r1, r1, 0x10
/* 80287B98  4E 80 00 20 */	blr 
