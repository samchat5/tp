lbl_8078A4DC:
/* 8078A4DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8078A4E0  7C 08 02 A6 */	mflr r0
/* 8078A4E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8078A4E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8078A4EC  7C 7F 1B 79 */	or. r31, r3, r3
/* 8078A4F0  41 82 00 10 */	beq lbl_8078A500
/* 8078A4F4  7C 80 07 35 */	extsh. r0, r4
/* 8078A4F8  40 81 00 08 */	ble lbl_8078A500
/* 8078A4FC  4B B4 48 41 */	bl __dl__FPv
lbl_8078A500:
/* 8078A500  7F E3 FB 78 */	mr r3, r31
/* 8078A504  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8078A508  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8078A50C  7C 08 03 A6 */	mtlr r0
/* 8078A510  38 21 00 10 */	addi r1, r1, 0x10
/* 8078A514  4E 80 00 20 */	blr 
