lbl_80023098:
/* 80023098  3C C0 80 3A */	lis r6, l_fpcNdRq_Queue@ha /* 0x803A3A38@ha */
/* 8002309C  38 C6 3A 38 */	addi r6, r6, l_fpcNdRq_Queue@l /* 0x803A3A38@l */
/* 800230A0  80 C6 00 00 */	lwz r6, 0(r6)
/* 800230A4  48 00 00 5C */	b lbl_80023100
lbl_800230A8:
/* 800230A8  80 E6 00 0C */	lwz r7, 0xc(r6)
/* 800230AC  80 07 00 40 */	lwz r0, 0x40(r7)
/* 800230B0  2C 00 00 02 */	cmpwi r0, 2
/* 800230B4  40 82 00 38 */	bne lbl_800230EC
/* 800230B8  80 07 00 44 */	lwz r0, 0x44(r7)
/* 800230BC  7C 00 18 40 */	cmplw r0, r3
/* 800230C0  40 82 00 2C */	bne lbl_800230EC
/* 800230C4  80 67 00 54 */	lwz r3, 0x54(r7)
/* 800230C8  3C 03 00 01 */	addis r0, r3, 1
/* 800230CC  28 00 FF FE */	cmplwi r0, 0xfffe
/* 800230D0  40 82 00 14 */	bne lbl_800230E4
/* 800230D4  B0 87 00 58 */	sth r4, 0x58(r7)
/* 800230D8  90 A7 00 5C */	stw r5, 0x5c(r7)
/* 800230DC  38 60 00 01 */	li r3, 1
/* 800230E0  4E 80 00 20 */	blr 
lbl_800230E4:
/* 800230E4  38 60 00 00 */	li r3, 0
/* 800230E8  4E 80 00 20 */	blr 
lbl_800230EC:
/* 800230EC  28 06 00 00 */	cmplwi r6, 0
/* 800230F0  41 82 00 0C */	beq lbl_800230FC
/* 800230F4  80 C6 00 08 */	lwz r6, 8(r6)
/* 800230F8  48 00 00 08 */	b lbl_80023100
lbl_800230FC:
/* 800230FC  38 C0 00 00 */	li r6, 0
lbl_80023100:
/* 80023100  28 06 00 00 */	cmplwi r6, 0
/* 80023104  40 82 FF A4 */	bne lbl_800230A8
/* 80023108  38 60 00 00 */	li r3, 0
/* 8002310C  4E 80 00 20 */	blr 
