lbl_8001645C:
/* 8001645C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80016460  7C 08 02 A6 */	mflr r0
/* 80016464  90 01 00 14 */	stw r0, 0x14(r1)
/* 80016468  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8001646C  93 C1 00 08 */	stw r30, 8(r1)
/* 80016470  7C 7E 1B 79 */	or. r30, r3, r3
/* 80016474  7C 9F 23 78 */	mr r31, r4
/* 80016478  41 82 00 28 */	beq lbl_800164A0
/* 8001647C  3C 80 80 3A */	lis r4, __vt__21mDoDvdThd_toMainRam_c@ha /* 0x803A34A8@ha */
/* 80016480  38 04 34 A8 */	addi r0, r4, __vt__21mDoDvdThd_toMainRam_c@l /* 0x803A34A8@l */
/* 80016484  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80016488  38 80 00 00 */	li r4, 0
/* 8001648C  4B FF F4 71 */	bl __dt__19mDoDvdThd_command_cFv
/* 80016490  7F E0 07 35 */	extsh. r0, r31
/* 80016494  40 81 00 0C */	ble lbl_800164A0
/* 80016498  7F C3 F3 78 */	mr r3, r30
/* 8001649C  48 2B 88 A1 */	bl __dl__FPv
lbl_800164A0:
/* 800164A0  7F C3 F3 78 */	mr r3, r30
/* 800164A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800164A8  83 C1 00 08 */	lwz r30, 8(r1)
/* 800164AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800164B0  7C 08 03 A6 */	mtlr r0
/* 800164B4  38 21 00 10 */	addi r1, r1, 0x10
/* 800164B8  4E 80 00 20 */	blr 
