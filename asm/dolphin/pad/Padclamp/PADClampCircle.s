lbl_8034E1A8:
/* 8034E1A8  7C 08 02 A6 */	mflr r0
/* 8034E1AC  3C 80 80 3A */	lis r4, ClampRegion@ha /* 0x803A2170@ha */
/* 8034E1B0  90 01 00 04 */	stw r0, 4(r1)
/* 8034E1B4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8034E1B8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8034E1BC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8034E1C0  3B C0 00 00 */	li r30, 0
/* 8034E1C4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8034E1C8  3B A3 00 00 */	addi r29, r3, 0
/* 8034E1CC  93 81 00 10 */	stw r28, 0x10(r1)
/* 8034E1D0  3B 84 21 70 */	addi r28, r4, ClampRegion@l /* 0x803A2170@l */
/* 8034E1D4  3B FC 00 01 */	addi r31, r28, 1
lbl_8034E1D8:
/* 8034E1D8  88 1D 00 0A */	lbz r0, 0xa(r29)
/* 8034E1DC  7C 00 07 75 */	extsb. r0, r0
/* 8034E1E0  40 82 00 A4 */	bne lbl_8034E284
/* 8034E1E4  88 BC 00 08 */	lbz r5, 8(r28)
/* 8034E1E8  38 7D 00 02 */	addi r3, r29, 2
/* 8034E1EC  88 DC 00 02 */	lbz r6, 2(r28)
/* 8034E1F0  38 9D 00 03 */	addi r4, r29, 3
/* 8034E1F4  4B FF FC F9 */	bl ClampCircle
/* 8034E1F8  88 BC 00 09 */	lbz r5, 9(r28)
/* 8034E1FC  38 7D 00 04 */	addi r3, r29, 4
/* 8034E200  88 DC 00 05 */	lbz r6, 5(r28)
/* 8034E204  38 9D 00 05 */	addi r4, r29, 5
/* 8034E208  4B FF FC E5 */	bl ClampCircle
/* 8034E20C  88 9D 00 06 */	lbz r4, 6(r29)
/* 8034E210  88 1C 00 00 */	lbz r0, 0(r28)
/* 8034E214  88 7F 00 00 */	lbz r3, 0(r31)
/* 8034E218  7C 04 00 40 */	cmplw r4, r0
/* 8034E21C  41 81 00 10 */	bgt lbl_8034E22C
/* 8034E220  38 00 00 00 */	li r0, 0
/* 8034E224  98 1D 00 06 */	stb r0, 6(r29)
/* 8034E228  48 00 00 20 */	b lbl_8034E248
lbl_8034E22C:
/* 8034E22C  7C 03 20 40 */	cmplw r3, r4
/* 8034E230  40 80 00 08 */	bge lbl_8034E238
/* 8034E234  98 7D 00 06 */	stb r3, 6(r29)
lbl_8034E238:
/* 8034E238  88 7C 00 00 */	lbz r3, 0(r28)
/* 8034E23C  88 1D 00 06 */	lbz r0, 6(r29)
/* 8034E240  7C 03 00 50 */	subf r0, r3, r0
/* 8034E244  98 1D 00 06 */	stb r0, 6(r29)
lbl_8034E248:
/* 8034E248  88 9D 00 07 */	lbz r4, 7(r29)
/* 8034E24C  88 1C 00 00 */	lbz r0, 0(r28)
/* 8034E250  88 7F 00 00 */	lbz r3, 0(r31)
/* 8034E254  7C 04 00 40 */	cmplw r4, r0
/* 8034E258  41 81 00 10 */	bgt lbl_8034E268
/* 8034E25C  38 00 00 00 */	li r0, 0
/* 8034E260  98 1D 00 07 */	stb r0, 7(r29)
/* 8034E264  48 00 00 20 */	b lbl_8034E284
lbl_8034E268:
/* 8034E268  7C 03 20 40 */	cmplw r3, r4
/* 8034E26C  40 80 00 08 */	bge lbl_8034E274
/* 8034E270  98 7D 00 07 */	stb r3, 7(r29)
lbl_8034E274:
/* 8034E274  88 7C 00 00 */	lbz r3, 0(r28)
/* 8034E278  88 1D 00 07 */	lbz r0, 7(r29)
/* 8034E27C  7C 03 00 50 */	subf r0, r3, r0
/* 8034E280  98 1D 00 07 */	stb r0, 7(r29)
lbl_8034E284:
/* 8034E284  3B DE 00 01 */	addi r30, r30, 1
/* 8034E288  2C 1E 00 04 */	cmpwi r30, 4
/* 8034E28C  3B BD 00 0C */	addi r29, r29, 0xc
/* 8034E290  41 80 FF 48 */	blt lbl_8034E1D8
/* 8034E294  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8034E298  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8034E29C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8034E2A0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8034E2A4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8034E2A8  38 21 00 20 */	addi r1, r1, 0x20
/* 8034E2AC  7C 08 03 A6 */	mtlr r0
/* 8034E2B0  4E 80 00 20 */	blr 
