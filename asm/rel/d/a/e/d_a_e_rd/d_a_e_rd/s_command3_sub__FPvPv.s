lbl_805082C8:
/* 805082C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 805082CC  7C 08 02 A6 */	mflr r0
/* 805082D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 805082D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 805082D8  93 C1 00 08 */	stw r30, 8(r1)
/* 805082DC  7C 7E 1B 78 */	mr r30, r3
/* 805082E0  7C 9F 23 78 */	mr r31, r4
/* 805082E4  4B B1 09 FD */	bl fopAc_IsActor__FPv
/* 805082E8  2C 03 00 00 */	cmpwi r3, 0
/* 805082EC  41 82 00 2C */	beq lbl_80508318
/* 805082F0  A8 1E 00 08 */	lha r0, 8(r30)
/* 805082F4  2C 00 01 D4 */	cmpwi r0, 0x1d4
/* 805082F8  40 82 00 20 */	bne lbl_80508318
/* 805082FC  7C 1E F8 40 */	cmplw r30, r31
/* 80508300  41 82 00 18 */	beq lbl_80508318
/* 80508304  A8 1E 09 72 */	lha r0, 0x972(r30)
/* 80508308  2C 00 00 19 */	cmpwi r0, 0x19
/* 8050830C  40 82 00 0C */	bne lbl_80508318
/* 80508310  7F C3 F3 78 */	mr r3, r30
/* 80508314  48 00 00 08 */	b lbl_8050831C
lbl_80508318:
/* 80508318  38 60 00 00 */	li r3, 0
lbl_8050831C:
/* 8050831C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80508320  83 C1 00 08 */	lwz r30, 8(r1)
/* 80508324  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80508328  7C 08 03 A6 */	mtlr r0
/* 8050832C  38 21 00 10 */	addi r1, r1, 0x10
/* 80508330  4E 80 00 20 */	blr 
