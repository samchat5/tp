lbl_80A22258:
/* 80A22258  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A2225C  7C 08 02 A6 */	mflr r0
/* 80A22260  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A22264  38 00 00 00 */	li r0, 0
/* 80A22268  98 03 14 67 */	stb r0, 0x1467(r3)
/* 80A2226C  4B 72 FD A9 */	bl execute__8daNpcF_cFv
/* 80A22270  38 60 00 01 */	li r3, 1
/* 80A22274  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A22278  7C 08 03 A6 */	mtlr r0
/* 80A2227C  38 21 00 10 */	addi r1, r1, 0x10
/* 80A22280  4E 80 00 20 */	blr 
