lbl_8070320C:
/* 8070320C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80703210  7C 08 02 A6 */	mflr r0
/* 80703214  90 01 00 34 */	stw r0, 0x34(r1)
/* 80703218  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8070321C  7C 7F 1B 78 */	mr r31, r3
/* 80703220  80 63 05 B4 */	lwz r3, 0x5b4(r3)
/* 80703224  80 63 00 04 */	lwz r3, 4(r3)
/* 80703228  80 63 00 84 */	lwz r3, 0x84(r3)
/* 8070322C  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80703230  38 63 00 30 */	addi r3, r3, 0x30
/* 80703234  3C 80 80 45 */	lis r4, calc_mtx@ha /* 0x80450768@ha */
/* 80703238  38 84 07 68 */	addi r4, r4, calc_mtx@l /* 0x80450768@l */
/* 8070323C  80 84 00 00 */	lwz r4, 0(r4)
/* 80703240  4B C4 32 71 */	bl PSMTXCopy
/* 80703244  3C 60 80 70 */	lis r3, lit_3904@ha /* 0x80705AFC@ha */
/* 80703248  C0 03 5A FC */	lfs f0, lit_3904@l(r3)  /* 0x80705AFC@l */
/* 8070324C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80703250  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80703254  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80703258  38 61 00 14 */	addi r3, r1, 0x14
/* 8070325C  38 81 00 08 */	addi r4, r1, 8
/* 80703260  4B B6 DC 8D */	bl MtxPosition__FP4cXyzP4cXyz
/* 80703264  38 7F 0E C4 */	addi r3, r31, 0xec4
/* 80703268  38 9F 0E D8 */	addi r4, r31, 0xed8
/* 8070326C  38 A1 00 08 */	addi r5, r1, 8
/* 80703270  38 C0 00 00 */	li r6, 0
/* 80703274  3C E0 80 70 */	lis r7, lit_5003@ha /* 0x80705BC8@ha */
/* 80703278  C0 27 5B C8 */	lfs f1, lit_5003@l(r7)  /* 0x80705BC8@l */
/* 8070327C  38 FF 01 0C */	addi r7, r31, 0x10c
/* 80703280  39 00 00 01 */	li r8, 1
/* 80703284  4B 91 9D 9D */	bl fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci
/* 80703288  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8070328C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80703290  7C 08 03 A6 */	mtlr r0
/* 80703294  38 21 00 30 */	addi r1, r1, 0x30
/* 80703298  4E 80 00 20 */	blr 
