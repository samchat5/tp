lbl_80256210:
/* 80256210  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80256214  7C 08 02 A6 */	mflr r0
/* 80256218  90 01 00 14 */	stw r0, 0x14(r1)
/* 8025621C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80256220  7C 7F 1B 78 */	mr r31, r3
/* 80256224  38 7F 02 0C */	addi r3, r31, 0x20c
/* 80256228  48 00 23 7D */	bl func_802585A4
/* 8025622C  7F E3 FB 78 */	mr r3, r31
/* 80256230  88 1F 02 08 */	lbz r0, 0x208(r31)
/* 80256234  1C A0 00 0C */	mulli r5, r0, 0xc
/* 80256238  3C 80 80 3C */	lis r4, l_execFunc@ha /* 0x803C2F04@ha */
/* 8025623C  38 04 2F 04 */	addi r0, r4, l_execFunc@l /* 0x803C2F04@l */
/* 80256240  7D 80 2A 14 */	add r12, r0, r5
/* 80256244  48 10 BE 41 */	bl __ptmf_scall
/* 80256248  60 00 00 00 */	nop 
/* 8025624C  38 60 00 01 */	li r3, 1
/* 80256250  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80256254  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80256258  7C 08 03 A6 */	mtlr r0
/* 8025625C  38 21 00 10 */	addi r1, r1, 0x10
/* 80256260  4E 80 00 20 */	blr 
