lbl_80B73564:
/* 80B73564  3C 80 80 3A */	lis r4, __ptmf_null@ha /* 0x803A2180@ha */
/* 80B73568  38 A4 21 80 */	addi r5, r4, __ptmf_null@l /* 0x803A2180@l */
/* 80B7356C  80 85 00 00 */	lwz r4, 0(r5)
/* 80B73570  80 05 00 04 */	lwz r0, 4(r5)
/* 80B73574  90 83 0F 84 */	stw r4, 0xf84(r3)
/* 80B73578  90 03 0F 88 */	stw r0, 0xf88(r3)
/* 80B7357C  80 05 00 08 */	lwz r0, 8(r5)
/* 80B73580  90 03 0F 8C */	stw r0, 0xf8c(r3)
/* 80B73584  3C 80 80 B7 */	lis r4, lit_4842@ha /* 0x80B74E50@ha */
/* 80B73588  38 A4 4E 50 */	addi r5, r4, lit_4842@l /* 0x80B74E50@l */
/* 80B7358C  80 85 00 00 */	lwz r4, 0(r5)
/* 80B73590  80 05 00 04 */	lwz r0, 4(r5)
/* 80B73594  90 83 0F 84 */	stw r4, 0xf84(r3)
/* 80B73598  90 03 0F 88 */	stw r0, 0xf88(r3)
/* 80B7359C  80 05 00 08 */	lwz r0, 8(r5)
/* 80B735A0  90 03 0F 8C */	stw r0, 0xf8c(r3)
/* 80B735A4  38 60 00 01 */	li r3, 1
/* 80B735A8  4E 80 00 20 */	blr 
