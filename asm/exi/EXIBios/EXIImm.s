lbl_80342D00:
/* 80342D00  7C 08 02 A6 */	mflr r0
/* 80342D04  90 01 00 04 */	stw r0, 4(r1)
/* 80342D08  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80342D0C  BF 21 00 24 */	stmw r25, 0x24(r1)
/* 80342D10  3B 43 00 00 */	addi r26, r3, 0
/* 80342D14  3B 64 00 00 */	addi r27, r4, 0
/* 80342D18  3B 85 00 00 */	addi r28, r5, 0
/* 80342D1C  3B A6 00 00 */	addi r29, r6, 0
/* 80342D20  3B 27 00 00 */	addi r25, r7, 0
/* 80342D24  54 64 30 32 */	slwi r4, r3, 6
/* 80342D28  3C 60 80 45 */	lis r3, Ecb@ha /* 0x8044C570@ha */
/* 80342D2C  38 03 C5 70 */	addi r0, r3, Ecb@l /* 0x8044C570@l */
/* 80342D30  7F E0 22 14 */	add r31, r0, r4
/* 80342D34  4B FF A9 C1 */	bl OSDisableInterrupts
/* 80342D38  7C 7E 1B 78 */	mr r30, r3
/* 80342D3C  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 80342D40  54 00 07 BF */	clrlwi. r0, r0, 0x1e
/* 80342D44  40 82 00 10 */	bne lbl_80342D54
/* 80342D48  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 80342D4C  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 80342D50  40 82 00 14 */	bne lbl_80342D64
lbl_80342D54:
/* 80342D54  7F C3 F3 78 */	mr r3, r30
/* 80342D58  4B FF A9 C5 */	bl OSRestoreInterrupts
/* 80342D5C  38 60 00 00 */	li r3, 0
/* 80342D60  48 00 01 E8 */	b lbl_80342F48
lbl_80342D64:
/* 80342D64  93 3F 00 04 */	stw r25, 4(r31)
/* 80342D68  80 1F 00 04 */	lwz r0, 4(r31)
/* 80342D6C  28 00 00 00 */	cmplwi r0, 0
/* 80342D70  41 82 00 28 */	beq lbl_80342D98
/* 80342D74  38 7A 00 00 */	addi r3, r26, 0
/* 80342D78  38 80 00 00 */	li r4, 0
/* 80342D7C  38 A0 00 01 */	li r5, 1
/* 80342D80  38 C0 00 00 */	li r6, 0
/* 80342D84  48 00 05 B1 */	bl EXIClearInterrupts
/* 80342D88  3C 60 00 20 */	lis r3, 0x20
/* 80342D8C  1C 1A 00 03 */	mulli r0, r26, 3
/* 80342D90  7C 63 04 30 */	srw r3, r3, r0
/* 80342D94  4B FF AD B1 */	bl __OSUnmaskInterrupts
lbl_80342D98:
/* 80342D98  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 80342D9C  60 00 00 02 */	ori r0, r0, 2
/* 80342DA0  90 1F 00 0C */	stw r0, 0xc(r31)
/* 80342DA4  28 1D 00 00 */	cmplwi r29, 0
/* 80342DA8  41 82 01 44 */	beq lbl_80342EEC
/* 80342DAC  38 00 00 00 */	li r0, 0
/* 80342DB0  38 80 00 00 */	li r4, 0
/* 80342DB4  7C 04 E0 00 */	cmpw r4, r28
/* 80342DB8  40 80 01 20 */	bge lbl_80342ED8
/* 80342DBC  38 DC FF F8 */	addi r6, r28, -8
/* 80342DC0  2C 1C 00 08 */	cmpwi r28, 8
/* 80342DC4  40 81 01 7C */	ble lbl_80342F40
/* 80342DC8  38 7B 00 00 */	addi r3, r27, 0
/* 80342DCC  38 A6 00 07 */	addi r5, r6, 7
/* 80342DD0  54 A5 E8 FE */	srwi r5, r5, 3
/* 80342DD4  7C A9 03 A6 */	mtctr r5
/* 80342DD8  2C 06 00 00 */	cmpwi r6, 0
/* 80342DDC  40 81 01 64 */	ble lbl_80342F40
lbl_80342DE0:
/* 80342DE0  88 C3 00 00 */	lbz r6, 0(r3)
/* 80342DE4  20 A4 00 03 */	subfic r5, r4, 3
/* 80342DE8  54 A5 18 38 */	slwi r5, r5, 3
/* 80342DEC  7C C5 28 30 */	slw r5, r6, r5
/* 80342DF0  7C 00 2B 78 */	or r0, r0, r5
/* 80342DF4  88 C3 00 01 */	lbz r6, 1(r3)
/* 80342DF8  38 A4 00 01 */	addi r5, r4, 1
/* 80342DFC  20 A5 00 03 */	subfic r5, r5, 3
/* 80342E00  54 A5 18 38 */	slwi r5, r5, 3
/* 80342E04  7C C5 28 30 */	slw r5, r6, r5
/* 80342E08  7C 00 2B 78 */	or r0, r0, r5
/* 80342E0C  88 C3 00 02 */	lbz r6, 2(r3)
/* 80342E10  38 A4 00 02 */	addi r5, r4, 2
/* 80342E14  20 A5 00 03 */	subfic r5, r5, 3
/* 80342E18  54 A5 18 38 */	slwi r5, r5, 3
/* 80342E1C  7C C5 28 30 */	slw r5, r6, r5
/* 80342E20  7C 00 2B 78 */	or r0, r0, r5
/* 80342E24  88 C3 00 03 */	lbz r6, 3(r3)
/* 80342E28  7C A4 00 D0 */	neg r5, r4
/* 80342E2C  54 A5 18 38 */	slwi r5, r5, 3
/* 80342E30  7C C5 28 30 */	slw r5, r6, r5
/* 80342E34  7C 00 2B 78 */	or r0, r0, r5
/* 80342E38  88 C3 00 04 */	lbz r6, 4(r3)
/* 80342E3C  38 A4 00 04 */	addi r5, r4, 4
/* 80342E40  20 A5 00 03 */	subfic r5, r5, 3
/* 80342E44  54 A5 18 38 */	slwi r5, r5, 3
/* 80342E48  7C C5 28 30 */	slw r5, r6, r5
/* 80342E4C  7C 00 2B 78 */	or r0, r0, r5
/* 80342E50  88 C3 00 05 */	lbz r6, 5(r3)
/* 80342E54  38 A4 00 05 */	addi r5, r4, 5
/* 80342E58  20 A5 00 03 */	subfic r5, r5, 3
/* 80342E5C  54 A5 18 38 */	slwi r5, r5, 3
/* 80342E60  7C C5 28 30 */	slw r5, r6, r5
/* 80342E64  7C 00 2B 78 */	or r0, r0, r5
/* 80342E68  88 C3 00 06 */	lbz r6, 6(r3)
/* 80342E6C  38 A4 00 06 */	addi r5, r4, 6
/* 80342E70  20 A5 00 03 */	subfic r5, r5, 3
/* 80342E74  54 A5 18 38 */	slwi r5, r5, 3
/* 80342E78  7C C5 28 30 */	slw r5, r6, r5
/* 80342E7C  7C 00 2B 78 */	or r0, r0, r5
/* 80342E80  88 C3 00 07 */	lbz r6, 7(r3)
/* 80342E84  38 A4 00 07 */	addi r5, r4, 7
/* 80342E88  20 A5 00 03 */	subfic r5, r5, 3
/* 80342E8C  54 A5 18 38 */	slwi r5, r5, 3
/* 80342E90  7C C5 28 30 */	slw r5, r6, r5
/* 80342E94  7C 00 2B 78 */	or r0, r0, r5
/* 80342E98  38 63 00 08 */	addi r3, r3, 8
/* 80342E9C  38 84 00 08 */	addi r4, r4, 8
/* 80342EA0  42 00 FF 40 */	bdnz lbl_80342DE0
/* 80342EA4  48 00 00 9C */	b lbl_80342F40
lbl_80342EA8:
/* 80342EA8  7C 64 E0 50 */	subf r3, r4, r28
/* 80342EAC  7C 69 03 A6 */	mtctr r3
/* 80342EB0  7C 04 E0 00 */	cmpw r4, r28
/* 80342EB4  40 80 00 24 */	bge lbl_80342ED8
lbl_80342EB8:
/* 80342EB8  88 A6 00 00 */	lbz r5, 0(r6)
/* 80342EBC  20 64 00 03 */	subfic r3, r4, 3
/* 80342EC0  54 63 18 38 */	slwi r3, r3, 3
/* 80342EC4  7C A3 18 30 */	slw r3, r5, r3
/* 80342EC8  7C 00 1B 78 */	or r0, r0, r3
/* 80342ECC  38 C6 00 01 */	addi r6, r6, 1
/* 80342ED0  38 84 00 01 */	addi r4, r4, 1
/* 80342ED4  42 00 FF E4 */	bdnz lbl_80342EB8
lbl_80342ED8:
/* 80342ED8  3C 60 CC 00 */	lis r3, 0xCC00 /* 0xCC006800@ha */
/* 80342EDC  38 83 68 00 */	addi r4, r3, 0x6800 /* 0xCC006800@l */
/* 80342EE0  1C 7A 00 14 */	mulli r3, r26, 0x14
/* 80342EE4  7C 64 1A 14 */	add r3, r4, r3
/* 80342EE8  90 03 00 10 */	stw r0, 0x10(r3)
lbl_80342EEC:
/* 80342EEC  93 7F 00 14 */	stw r27, 0x14(r31)
/* 80342EF0  28 1D 00 01 */	cmplwi r29, 1
/* 80342EF4  41 82 00 0C */	beq lbl_80342F00
/* 80342EF8  7F 80 E3 78 */	mr r0, r28
/* 80342EFC  48 00 00 08 */	b lbl_80342F04
lbl_80342F00:
/* 80342F00  38 00 00 00 */	li r0, 0
lbl_80342F04:
/* 80342F04  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80342F08  57 A0 10 3A */	slwi r0, r29, 2
/* 80342F0C  60 03 00 01 */	ori r3, r0, 1
/* 80342F10  38 1C FF FF */	addi r0, r28, -1
/* 80342F14  54 00 20 36 */	slwi r0, r0, 4
/* 80342F18  7C 64 03 78 */	or r4, r3, r0
/* 80342F1C  3C 60 CC 00 */	lis r3, 0xCC00 /* 0xCC006800@ha */
/* 80342F20  38 63 68 00 */	addi r3, r3, 0x6800 /* 0xCC006800@l */
/* 80342F24  1C 1A 00 14 */	mulli r0, r26, 0x14
/* 80342F28  7C 63 02 14 */	add r3, r3, r0
/* 80342F2C  90 83 00 0C */	stw r4, 0xc(r3)
/* 80342F30  7F C3 F3 78 */	mr r3, r30
/* 80342F34  4B FF A7 E9 */	bl OSRestoreInterrupts
/* 80342F38  38 60 00 01 */	li r3, 1
/* 80342F3C  48 00 00 0C */	b lbl_80342F48
lbl_80342F40:
/* 80342F40  7C DB 22 14 */	add r6, r27, r4
/* 80342F44  4B FF FF 64 */	b lbl_80342EA8
lbl_80342F48:
/* 80342F48  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80342F4C  BB 21 00 24 */	lmw r25, 0x24(r1)
/* 80342F50  38 21 00 40 */	addi r1, r1, 0x40
/* 80342F54  7C 08 03 A6 */	mtlr r0
/* 80342F58  4E 80 00 20 */	blr 
