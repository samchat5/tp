lbl_804E5BF8:
/* 804E5BF8  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 804E5BFC  7C 08 02 A6 */	mflr r0
/* 804E5C00  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 804E5C04  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 804E5C08  93 C1 00 98 */	stw r30, 0x98(r1)
/* 804E5C0C  7C 9E 23 78 */	mr r30, r4
/* 804E5C10  7C 7F 1B 78 */	mr r31, r3
/* 804E5C14  38 61 00 20 */	addi r3, r1, 0x20
/* 804E5C18  4B B9 20 51 */	bl __ct__11dBgS_LinChkFv
/* 804E5C1C  C0 1E 00 00 */	lfs f0, 0(r30)
/* 804E5C20  D0 01 00 08 */	stfs f0, 8(r1)
/* 804E5C24  C0 3E 00 04 */	lfs f1, 4(r30)
/* 804E5C28  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 804E5C2C  C0 1E 00 08 */	lfs f0, 8(r30)
/* 804E5C30  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 804E5C34  3C 60 80 4F */	lis r3, lit_3789@ha /* 0x804EE8AC@ha */
/* 804E5C38  C0 03 E8 AC */	lfs f0, lit_3789@l(r3)  /* 0x804EE8AC@l */
/* 804E5C3C  EC 01 00 2A */	fadds f0, f1, f0
/* 804E5C40  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 804E5C44  C0 1F 04 D0 */	lfs f0, 0x4d0(r31)
/* 804E5C48  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 804E5C4C  C0 1F 04 D4 */	lfs f0, 0x4d4(r31)
/* 804E5C50  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 804E5C54  C0 1F 04 D8 */	lfs f0, 0x4d8(r31)
/* 804E5C58  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 804E5C5C  C0 1F 05 3C */	lfs f0, 0x53c(r31)
/* 804E5C60  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 804E5C64  38 61 00 20 */	addi r3, r1, 0x20
/* 804E5C68  38 81 00 14 */	addi r4, r1, 0x14
/* 804E5C6C  38 A1 00 08 */	addi r5, r1, 8
/* 804E5C70  7F E6 FB 78 */	mr r6, r31
/* 804E5C74  4B B9 20 F1 */	bl Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c
/* 804E5C78  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 804E5C7C  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 804E5C80  38 63 0F 38 */	addi r3, r3, 0xf38
/* 804E5C84  38 81 00 20 */	addi r4, r1, 0x20
/* 804E5C88  4B B8 E7 2D */	bl LineCross__4cBgSFP11cBgS_LinChk
/* 804E5C8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804E5C90  41 82 00 18 */	beq lbl_804E5CA8
/* 804E5C94  38 61 00 20 */	addi r3, r1, 0x20
/* 804E5C98  38 80 FF FF */	li r4, -1
/* 804E5C9C  4B B9 20 41 */	bl __dt__11dBgS_LinChkFv
/* 804E5CA0  38 60 00 01 */	li r3, 1
/* 804E5CA4  48 00 00 14 */	b lbl_804E5CB8
lbl_804E5CA8:
/* 804E5CA8  38 61 00 20 */	addi r3, r1, 0x20
/* 804E5CAC  38 80 FF FF */	li r4, -1
/* 804E5CB0  4B B9 20 2D */	bl __dt__11dBgS_LinChkFv
/* 804E5CB4  38 60 00 00 */	li r3, 0
lbl_804E5CB8:
/* 804E5CB8  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 804E5CBC  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 804E5CC0  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 804E5CC4  7C 08 03 A6 */	mtlr r0
/* 804E5CC8  38 21 00 A0 */	addi r1, r1, 0xa0
/* 804E5CCC  4E 80 00 20 */	blr 
