lbl_803620AC:
/* 803620AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803620B0  3C 80 80 3A */	lis r4, __constants@h /* 0x803A2190@h */
/* 803620B4  60 84 21 90 */	ori r4, r4, __constants@l /* 0x803A2190@l */
/* 803620B8  38 60 00 00 */	li r3, 0
/* 803620BC  C8 04 00 00 */	lfd f0, 0(r4)
/* 803620C0  C8 64 00 08 */	lfd f3, 8(r4)
/* 803620C4  C8 84 00 10 */	lfd f4, 0x10(r4)
/* 803620C8  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 803620CC  FF 01 18 00 */	fcmpu cr6, f1, f3
/* 803620D0  41 80 00 30 */	blt lbl_80362100
/* 803620D4  38 63 FF FF */	addi r3, r3, -1
/* 803620D8  40 98 00 28 */	bge cr6, lbl_80362100
/* 803620DC  FF 81 20 00 */	fcmpu cr7, f1, f4
/* 803620E0  FC 40 08 90 */	fmr f2, f1
/* 803620E4  41 9C 00 08 */	blt cr7, lbl_803620EC
/* 803620E8  FC 41 20 28 */	fsub f2, f1, f4
lbl_803620EC:
/* 803620EC  FC 40 10 1E */	fctiwz f2, f2
/* 803620F0  D8 41 00 08 */	stfd f2, 8(r1)
/* 803620F4  80 61 00 0C */	lwz r3, 0xc(r1)
/* 803620F8  41 9C 00 08 */	blt cr7, lbl_80362100
/* 803620FC  3C 63 80 00 */	addis r3, r3, 0x8000
lbl_80362100:
/* 80362100  38 21 00 10 */	addi r1, r1, 0x10
/* 80362104  4E 80 00 20 */	blr 
