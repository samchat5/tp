lbl_80873A04:
/* 80873A04  3C 60 80 88 */	lis r3, lit_1109@ha /* 0x808795A0@ha */
/* 80873A08  38 63 95 A0 */	addi r3, r3, lit_1109@l /* 0x808795A0@l */
/* 80873A0C  80 A3 06 24 */	lwz r5, 0x624(r3)
/* 80873A10  80 05 06 9C */	lwz r0, 0x69c(r5)
/* 80873A14  54 06 00 3A */	rlwinm r6, r0, 0, 0, 0x1d
/* 80873A18  54 00 07 BE */	clrlwi r0, r0, 0x1e
/* 80873A1C  80 85 06 A4 */	lwz r4, 0x6a4(r5)
/* 80873A20  28 04 00 21 */	cmplwi r4, 0x21
/* 80873A24  41 82 00 18 */	beq lbl_80873A3C
/* 80873A28  20 00 00 03 */	subfic r0, r0, 3
/* 80873A2C  54 00 18 38 */	slwi r0, r0, 3
/* 80873A30  7C 00 20 50 */	subf r0, r0, r4
/* 80873A34  90 05 06 A4 */	stw r0, 0x6a4(r5)
/* 80873A38  48 00 00 10 */	b lbl_80873A48
lbl_80873A3C:
/* 80873A3C  54 04 18 38 */	slwi r4, r0, 3
/* 80873A40  38 04 00 01 */	addi r0, r4, 1
/* 80873A44  90 05 06 A4 */	stw r0, 0x6a4(r5)
lbl_80873A48:
/* 80873A48  80 83 06 24 */	lwz r4, 0x624(r3)
/* 80873A4C  90 C4 06 9C */	stw r6, 0x69c(r4)
/* 80873A50  80 06 00 00 */	lwz r0, 0(r6)
/* 80873A54  80 83 06 24 */	lwz r4, 0x624(r3)
/* 80873A58  90 04 06 A0 */	stw r0, 0x6a0(r4)
/* 80873A5C  39 20 00 00 */	li r9, 0
/* 80873A60  38 E0 00 00 */	li r7, 0
lbl_80873A64:
/* 80873A64  80 83 06 24 */	lwz r4, 0x624(r3)
/* 80873A68  88 84 06 A8 */	lbz r4, 0x6a8(r4)
/* 80873A6C  38 00 00 01 */	li r0, 1
/* 80873A70  7C 00 48 30 */	slw r0, r0, r9
/* 80873A74  7C 80 00 39 */	and. r0, r4, r0
/* 80873A78  41 82 01 18 */	beq lbl_80873B90
/* 80873A7C  39 40 00 00 */	li r10, 0
/* 80873A80  7C E6 3B 78 */	mr r6, r7
/* 80873A84  38 00 00 10 */	li r0, 0x10
/* 80873A88  7C 09 03 A6 */	mtctr r0
lbl_80873A8C:
/* 80873A8C  38 A0 00 FF */	li r5, 0xff
/* 80873A90  80 03 06 24 */	lwz r0, 0x624(r3)
/* 80873A94  7C 80 52 14 */	add r4, r0, r10
/* 80873A98  38 04 03 00 */	addi r0, r4, 0x300
/* 80873A9C  7C A7 01 AE */	stbx r5, r7, r0
/* 80873AA0  39 60 00 00 */	li r11, 0
/* 80873AA4  48 00 00 58 */	b lbl_80873AFC
lbl_80873AA8:
/* 80873AA8  20 0B 00 04 */	subfic r0, r11, 4
/* 80873AAC  7D 4C 04 30 */	srw r12, r10, r0
/* 80873AB0  81 03 06 24 */	lwz r8, 0x624(r3)
/* 80873AB4  7C 87 42 14 */	add r4, r7, r8
/* 80873AB8  55 60 10 3A */	slwi r0, r11, 2
/* 80873ABC  7C A4 02 14 */	add r5, r4, r0
/* 80873AC0  80 05 03 48 */	lwz r0, 0x348(r5)
/* 80873AC4  7C 0C 00 00 */	cmpw r12, r0
/* 80873AC8  41 81 00 30 */	bgt lbl_80873AF8
/* 80873ACC  80 84 03 40 */	lwz r4, 0x340(r4)
/* 80873AD0  80 05 03 90 */	lwz r0, 0x390(r5)
/* 80873AD4  7C 00 22 14 */	add r0, r0, r4
/* 80873AD8  7C 8C 00 AE */	lbzx r4, r12, r0
/* 80873ADC  38 08 03 00 */	addi r0, r8, 0x300
/* 80873AE0  7C 86 01 AE */	stbx r4, r6, r0
/* 80873AE4  38 AB 00 01 */	addi r5, r11, 1
/* 80873AE8  80 83 06 24 */	lwz r4, 0x624(r3)
/* 80873AEC  38 04 03 20 */	addi r0, r4, 0x320
/* 80873AF0  7C A6 01 AE */	stbx r5, r6, r0
/* 80873AF4  39 60 00 63 */	li r11, 0x63
lbl_80873AF8:
/* 80873AF8  39 6B 00 01 */	addi r11, r11, 1
lbl_80873AFC:
/* 80873AFC  28 0B 00 05 */	cmplwi r11, 5
/* 80873B00  41 80 FF A8 */	blt lbl_80873AA8
/* 80873B04  38 A0 00 FF */	li r5, 0xff
/* 80873B08  80 03 06 24 */	lwz r0, 0x624(r3)
/* 80873B0C  39 4A 00 01 */	addi r10, r10, 1
/* 80873B10  7C 80 52 14 */	add r4, r0, r10
/* 80873B14  38 04 03 00 */	addi r0, r4, 0x300
/* 80873B18  7C A7 01 AE */	stbx r5, r7, r0
/* 80873B1C  39 60 00 00 */	li r11, 0
/* 80873B20  38 C6 00 01 */	addi r6, r6, 1
/* 80873B24  48 00 00 58 */	b lbl_80873B7C
lbl_80873B28:
/* 80873B28  20 0B 00 04 */	subfic r0, r11, 4
/* 80873B2C  7D 4C 04 30 */	srw r12, r10, r0
/* 80873B30  81 03 06 24 */	lwz r8, 0x624(r3)
/* 80873B34  7C 87 42 14 */	add r4, r7, r8
/* 80873B38  55 60 10 3A */	slwi r0, r11, 2
/* 80873B3C  7C A4 02 14 */	add r5, r4, r0
/* 80873B40  80 05 03 48 */	lwz r0, 0x348(r5)
/* 80873B44  7C 0C 00 00 */	cmpw r12, r0
/* 80873B48  41 81 00 30 */	bgt lbl_80873B78
/* 80873B4C  80 84 03 40 */	lwz r4, 0x340(r4)
/* 80873B50  80 05 03 90 */	lwz r0, 0x390(r5)
/* 80873B54  7C 00 22 14 */	add r0, r0, r4
/* 80873B58  7C 8C 00 AE */	lbzx r4, r12, r0
/* 80873B5C  38 08 03 00 */	addi r0, r8, 0x300
/* 80873B60  7C 86 01 AE */	stbx r4, r6, r0
/* 80873B64  38 AB 00 01 */	addi r5, r11, 1
/* 80873B68  80 83 06 24 */	lwz r4, 0x624(r3)
/* 80873B6C  38 04 03 20 */	addi r0, r4, 0x320
/* 80873B70  7C A6 01 AE */	stbx r5, r6, r0
/* 80873B74  39 60 00 63 */	li r11, 0x63
lbl_80873B78:
/* 80873B78  39 6B 00 01 */	addi r11, r11, 1
lbl_80873B7C:
/* 80873B7C  28 0B 00 05 */	cmplwi r11, 5
/* 80873B80  41 80 FF A8 */	blt lbl_80873B28
/* 80873B84  38 C6 00 01 */	addi r6, r6, 1
/* 80873B88  39 4A 00 01 */	addi r10, r10, 1
/* 80873B8C  42 00 FF 00 */	bdnz lbl_80873A8C
lbl_80873B90:
/* 80873B90  39 29 00 01 */	addi r9, r9, 1
/* 80873B94  28 09 00 04 */	cmplwi r9, 4
/* 80873B98  38 E7 00 E0 */	addi r7, r7, 0xe0
/* 80873B9C  41 80 FE C8 */	blt lbl_80873A64
/* 80873BA0  80 83 06 24 */	lwz r4, 0x624(r3)
/* 80873BA4  88 04 06 87 */	lbz r0, 0x687(r4)
/* 80873BA8  54 06 08 3C */	slwi r6, r0, 1
/* 80873BAC  88 04 06 8D */	lbz r0, 0x68d(r4)
/* 80873BB0  54 07 08 3C */	slwi r7, r0, 1
/* 80873BB4  88 04 06 82 */	lbz r0, 0x682(r4)
/* 80873BB8  54 05 08 3C */	slwi r5, r0, 1
/* 80873BBC  39 05 00 01 */	addi r8, r5, 1
/* 80873BC0  88 04 06 88 */	lbz r0, 0x688(r4)
/* 80873BC4  54 05 08 3C */	slwi r5, r0, 1
/* 80873BC8  39 25 00 01 */	addi r9, r5, 1
/* 80873BCC  88 04 06 8E */	lbz r0, 0x68e(r4)
/* 80873BD0  54 05 08 3C */	slwi r5, r0, 1
/* 80873BD4  39 45 00 01 */	addi r10, r5, 1
/* 80873BD8  88 04 06 81 */	lbz r0, 0x681(r4)
/* 80873BDC  54 00 08 3C */	slwi r0, r0, 1
/* 80873BE0  1C A0 00 E0 */	mulli r5, r0, 0xe0
/* 80873BE4  38 05 03 00 */	addi r0, r5, 0x300
/* 80873BE8  7C 04 02 14 */	add r0, r4, r0
/* 80873BEC  90 03 04 A0 */	stw r0, 0x4a0(r3)
/* 80873BF0  1C A6 00 E0 */	mulli r5, r6, 0xe0
/* 80873BF4  38 05 03 00 */	addi r0, r5, 0x300
/* 80873BF8  7C 04 02 14 */	add r0, r4, r0
/* 80873BFC  90 03 04 A4 */	stw r0, 0x4a4(r3)
/* 80873C00  1C A7 00 E0 */	mulli r5, r7, 0xe0
/* 80873C04  38 05 03 00 */	addi r0, r5, 0x300
/* 80873C08  7C 04 02 14 */	add r0, r4, r0
/* 80873C0C  90 03 04 A8 */	stw r0, 0x4a8(r3)
/* 80873C10  1C A8 00 E0 */	mulli r5, r8, 0xe0
/* 80873C14  38 05 03 00 */	addi r0, r5, 0x300
/* 80873C18  7C 04 02 14 */	add r0, r4, r0
/* 80873C1C  90 03 04 AC */	stw r0, 0x4ac(r3)
/* 80873C20  1C A9 00 E0 */	mulli r5, r9, 0xe0
/* 80873C24  38 05 03 00 */	addi r0, r5, 0x300
/* 80873C28  7C 04 02 14 */	add r0, r4, r0
/* 80873C2C  90 03 04 B0 */	stw r0, 0x4b0(r3)
/* 80873C30  1C AA 00 E0 */	mulli r5, r10, 0xe0
/* 80873C34  38 05 03 00 */	addi r0, r5, 0x300
/* 80873C38  7C 04 02 14 */	add r0, r4, r0
/* 80873C3C  90 03 04 B4 */	stw r0, 0x4b4(r3)
/* 80873C40  4E 80 00 20 */	blr 
