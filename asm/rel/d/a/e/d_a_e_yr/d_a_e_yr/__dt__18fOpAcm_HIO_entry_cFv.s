lbl_80828338:
/* 80828338  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8082833C  7C 08 02 A6 */	mflr r0
/* 80828340  90 01 00 14 */	stw r0, 0x14(r1)
/* 80828344  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80828348  7C 7F 1B 79 */	or. r31, r3, r3
/* 8082834C  41 82 00 30 */	beq lbl_8082837C
/* 80828350  3C 60 80 83 */	lis r3, __vt__18fOpAcm_HIO_entry_c@ha /* 0x80828D8C@ha */
/* 80828354  38 03 8D 8C */	addi r0, r3, __vt__18fOpAcm_HIO_entry_c@l /* 0x80828D8C@l */
/* 80828358  90 1F 00 00 */	stw r0, 0(r31)
/* 8082835C  41 82 00 10 */	beq lbl_8082836C
/* 80828360  3C 60 80 83 */	lis r3, __vt__14mDoHIO_entry_c@ha /* 0x80828D98@ha */
/* 80828364  38 03 8D 98 */	addi r0, r3, __vt__14mDoHIO_entry_c@l /* 0x80828D98@l */
/* 80828368  90 1F 00 00 */	stw r0, 0(r31)
lbl_8082836C:
/* 8082836C  7C 80 07 35 */	extsh. r0, r4
/* 80828370  40 81 00 0C */	ble lbl_8082837C
/* 80828374  7F E3 FB 78 */	mr r3, r31
/* 80828378  4B AA 69 C5 */	bl __dl__FPv
lbl_8082837C:
/* 8082837C  7F E3 FB 78 */	mr r3, r31
/* 80828380  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80828384  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80828388  7C 08 03 A6 */	mtlr r0
/* 8082838C  38 21 00 10 */	addi r1, r1, 0x10
/* 80828390  4E 80 00 20 */	blr 
