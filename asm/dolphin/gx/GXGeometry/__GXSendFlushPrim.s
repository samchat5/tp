lbl_8035C834:
/* 8035C834  80 62 CB 80 */	lwz r3, __GXData(r2)
/* 8035C838  38 00 00 98 */	li r0, 0x98
/* 8035C83C  3C A0 CC 01 */	lis r5, 0xCC01 /* 0xCC008000@ha */
/* 8035C840  A0 C3 00 04 */	lhz r6, 4(r3)
/* 8035C844  38 80 00 00 */	li r4, 0
/* 8035C848  A0 63 00 06 */	lhz r3, 6(r3)
/* 8035C84C  7C E6 19 D6 */	mullw r7, r6, r3
/* 8035C850  98 05 80 00 */	stb r0, 0x8000(r5)  /* 0xCC008000@l */
/* 8035C854  B0 C5 80 00 */	sth r6, -0x8000(r5)
/* 8035C858  38 67 00 03 */	addi r3, r7, 3
/* 8035C85C  28 07 00 00 */	cmplwi r7, 0
/* 8035C860  54 63 F0 BE */	srwi r3, r3, 2
/* 8035C864  40 81 00 48 */	ble lbl_8035C8AC
/* 8035C868  54 60 E8 FF */	rlwinm. r0, r3, 0x1d, 3, 0x1f
/* 8035C86C  7C 09 03 A6 */	mtctr r0
/* 8035C870  41 82 00 30 */	beq lbl_8035C8A0
lbl_8035C874:
/* 8035C874  90 85 80 00 */	stw r4, -0x8000(r5)
/* 8035C878  90 85 80 00 */	stw r4, -0x8000(r5)
/* 8035C87C  90 85 80 00 */	stw r4, -0x8000(r5)
/* 8035C880  90 85 80 00 */	stw r4, -0x8000(r5)
/* 8035C884  90 85 80 00 */	stw r4, -0x8000(r5)
/* 8035C888  90 85 80 00 */	stw r4, -0x8000(r5)
/* 8035C88C  90 85 80 00 */	stw r4, -0x8000(r5)
/* 8035C890  90 85 80 00 */	stw r4, -0x8000(r5)
/* 8035C894  42 00 FF E0 */	bdnz lbl_8035C874
/* 8035C898  70 63 00 07 */	andi. r3, r3, 7
/* 8035C89C  41 82 00 10 */	beq lbl_8035C8AC
lbl_8035C8A0:
/* 8035C8A0  7C 69 03 A6 */	mtctr r3
lbl_8035C8A4:
/* 8035C8A4  90 85 80 00 */	stw r4, -0x8000(r5)
/* 8035C8A8  42 00 FF FC */	bdnz lbl_8035C8A4
lbl_8035C8AC:
/* 8035C8AC  80 62 CB 80 */	lwz r3, __GXData(r2)
/* 8035C8B0  38 00 00 01 */	li r0, 1
/* 8035C8B4  B0 03 00 02 */	sth r0, 2(r3)
/* 8035C8B8  4E 80 00 20 */	blr 
