lbl_80973FFC:
/* 80973FFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80974000  7C 08 02 A6 */	mflr r0
/* 80974004  90 01 00 14 */	stw r0, 0x14(r1)
/* 80974008  4B 7D E0 0D */	bl execute__8daNpcF_cFv
/* 8097400C  38 60 00 01 */	li r3, 1
/* 80974010  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80974014  7C 08 03 A6 */	mtlr r0
/* 80974018  38 21 00 10 */	addi r1, r1, 0x10
/* 8097401C  4E 80 00 20 */	blr 
