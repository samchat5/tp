lbl_80281918:
/* 80281918  3C 80 80 45 */	lis r4, __float_nan@ha /* 0x80450AE0@ha */
/* 8028191C  C0 04 0A E0 */	lfs f0, __float_nan@l(r4)  /* 0x80450AE0@l */
/* 80281920  D8 03 00 00 */	stfd f0, 0(r3)
/* 80281924  C8 03 00 00 */	lfd f0, 0(r3)
/* 80281928  D8 03 00 08 */	stfd f0, 8(r3)
/* 8028192C  C8 03 00 00 */	lfd f0, 0(r3)
/* 80281930  D8 03 00 10 */	stfd f0, 0x10(r3)
/* 80281934  38 00 00 00 */	li r0, 0
/* 80281938  98 03 00 18 */	stb r0, 0x18(r3)
/* 8028193C  98 03 00 19 */	stb r0, 0x19(r3)
/* 80281940  90 03 00 30 */	stw r0, 0x30(r3)
/* 80281944  90 03 00 34 */	stw r0, 0x34(r3)
/* 80281948  4E 80 00 20 */	blr 
