lbl_80878914:
/* 80878914  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80878918  7C 08 02 A6 */	mflr r0
/* 8087891C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80878920  38 80 00 00 */	li r4, 0
/* 80878924  4B A5 5B DD */	bl free__7JKRHeapFPvP7JKRHeap
/* 80878928  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8087892C  7C 08 03 A6 */	mtlr r0
/* 80878930  38 21 00 10 */	addi r1, r1, 0x10
/* 80878934  4E 80 00 20 */	blr 
