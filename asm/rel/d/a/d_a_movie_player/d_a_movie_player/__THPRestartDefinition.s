lbl_808739A8:
/* 808739A8  38 00 00 01 */	li r0, 1
/* 808739AC  3C 60 80 88 */	lis r3, __THPInfo@ha /* 0x80879BC4@ha */
/* 808739B0  38 A3 9B C4 */	addi r5, r3, __THPInfo@l /* 0x80879BC4@l */
/* 808739B4  80 65 00 00 */	lwz r3, 0(r5)
/* 808739B8  98 03 06 A9 */	stb r0, 0x6a9(r3)
/* 808739BC  80 85 00 00 */	lwz r4, 0(r5)
/* 808739C0  80 64 06 9C */	lwz r3, 0x69c(r4)
/* 808739C4  38 03 00 02 */	addi r0, r3, 2
/* 808739C8  90 04 06 9C */	stw r0, 0x69c(r4)
/* 808739CC  80 C5 00 00 */	lwz r6, 0(r5)
/* 808739D0  80 86 06 9C */	lwz r4, 0x69c(r6)
/* 808739D4  88 64 00 00 */	lbz r3, 0(r4)
/* 808739D8  88 04 00 01 */	lbz r0, 1(r4)
/* 808739DC  50 60 44 2E */	rlwimi r0, r3, 8, 0x10, 0x17
/* 808739E0  B0 06 06 AA */	sth r0, 0x6aa(r6)
/* 808739E4  80 85 00 00 */	lwz r4, 0(r5)
/* 808739E8  80 64 06 9C */	lwz r3, 0x69c(r4)
/* 808739EC  38 03 00 02 */	addi r0, r3, 2
/* 808739F0  90 04 06 9C */	stw r0, 0x69c(r4)
/* 808739F4  80 65 00 00 */	lwz r3, 0(r5)
/* 808739F8  A0 03 06 AA */	lhz r0, 0x6aa(r3)
/* 808739FC  B0 03 06 AC */	sth r0, 0x6ac(r3)
/* 80873A00  4E 80 00 20 */	blr 
