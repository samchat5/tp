lbl_80372D34:
/* 80372D34  7C 08 02 A6 */	mflr r0
/* 80372D38  90 01 00 04 */	stw r0, 4(r1)
/* 80372D3C  94 21 FF 88 */	stwu r1, -0x78(r1)
/* 80372D40  BF 01 00 58 */	stmw r24, 0x58(r1)
/* 80372D44  3B 43 00 00 */	addi r26, r3, 0
/* 80372D48  3B 64 00 00 */	addi r27, r4, 0
/* 80372D4C  4B FC A9 A9 */	bl OSDisableInterrupts
/* 80372D50  3B 83 00 00 */	addi r28, r3, 0
/* 80372D54  3F 20 CC 00 */	lis r25, 0xCC00 /* 0xCC006828@ha */
/* 80372D58  3F E0 40 00 */	lis r31, 0x4000
lbl_80372D5C:
/* 80372D5C  80 19 68 28 */	lwz r0, 0x6828(r25)  /* 0xCC006828@l */
/* 80372D60  3B D9 68 00 */	addi r30, r25, 0x6800
/* 80372D64  38 61 00 50 */	addi r3, r1, 0x50
/* 80372D68  70 00 04 05 */	andi. r0, r0, 0x405
/* 80372D6C  38 80 00 02 */	li r4, 2
/* 80372D70  38 A0 00 01 */	li r5, 1
/* 80372D74  60 00 00 C0 */	ori r0, r0, 0xc0
/* 80372D78  94 1E 00 28 */	stwu r0, 0x28(r30)
/* 80372D7C  93 E1 00 50 */	stw r31, 0x50(r1)
/* 80372D80  48 00 07 95 */	bl DBGEXIImm
/* 80372D84  7C 60 00 34 */	cntlzw r0, r3
/* 80372D88  54 18 D9 7E */	srwi r24, r0, 5
lbl_80372D8C:
/* 80372D8C  3B B9 68 00 */	addi r29, r25, 0x6800
/* 80372D90  84 1D 00 34 */	lwzu r0, 0x34(r29)
/* 80372D94  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80372D98  40 82 FF F4 */	bne lbl_80372D8C
/* 80372D9C  38 61 00 54 */	addi r3, r1, 0x54
/* 80372DA0  38 80 00 04 */	li r4, 4
/* 80372DA4  38 A0 00 00 */	li r5, 0
/* 80372DA8  48 00 07 6D */	bl DBGEXIImm
lbl_80372DAC:
/* 80372DAC  80 1D 00 00 */	lwz r0, 0(r29)
/* 80372DB0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80372DB4  40 82 FF F8 */	bne lbl_80372DAC
/* 80372DB8  80 1E 00 00 */	lwz r0, 0(r30)
/* 80372DBC  70 00 04 05 */	andi. r0, r0, 0x405
/* 80372DC0  90 1E 00 00 */	stw r0, 0(r30)
/* 80372DC4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80372DC8  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80372DCC  40 82 FF 90 */	bne lbl_80372D5C
/* 80372DD0  88 6D 85 70 */	lbz r3, data_80450AF0(r13)
/* 80372DD4  38 03 00 01 */	addi r0, r3, 1
/* 80372DD8  98 0D 85 70 */	stb r0, data_80450AF0(r13)
/* 80372DDC  88 0D 85 70 */	lbz r0, data_80450AF0(r13)
/* 80372DE0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80372DE4  41 82 00 0C */	beq lbl_80372DF0
/* 80372DE8  38 60 10 00 */	li r3, 0x1000
/* 80372DEC  48 00 00 08 */	b lbl_80372DF4
lbl_80372DF0:
/* 80372DF0  38 60 00 00 */	li r3, 0
lbl_80372DF4:
/* 80372DF4  38 1B 00 03 */	addi r0, r27, 3
/* 80372DF8  64 79 00 01 */	oris r25, r3, 1
/* 80372DFC  54 18 00 3A */	rlwinm r24, r0, 0, 0, 0x1d
/* 80372E00  63 39 C0 00 */	ori r25, r25, 0xc000
lbl_80372E04:
/* 80372E04  38 79 00 00 */	addi r3, r25, 0
/* 80372E08  38 9A 00 00 */	addi r4, r26, 0
/* 80372E0C  38 B8 00 00 */	addi r5, r24, 0
/* 80372E10  48 00 04 A1 */	bl DBGWrite
/* 80372E14  2C 03 00 00 */	cmpwi r3, 0
/* 80372E18  41 82 FF EC */	beq lbl_80372E04
/* 80372E1C  3F E0 40 00 */	lis r31, 0x4000
lbl_80372E20:
/* 80372E20  80 1E 00 00 */	lwz r0, 0(r30)
/* 80372E24  38 61 00 4C */	addi r3, r1, 0x4c
/* 80372E28  38 80 00 02 */	li r4, 2
/* 80372E2C  70 00 04 05 */	andi. r0, r0, 0x405
/* 80372E30  38 A0 00 01 */	li r5, 1
/* 80372E34  60 00 00 C0 */	ori r0, r0, 0xc0
/* 80372E38  90 1E 00 00 */	stw r0, 0(r30)
/* 80372E3C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80372E40  48 00 06 D5 */	bl DBGEXIImm
/* 80372E44  7C 60 00 34 */	cntlzw r0, r3
/* 80372E48  54 1A D9 7E */	srwi r26, r0, 5
lbl_80372E4C:
/* 80372E4C  80 1D 00 00 */	lwz r0, 0(r29)
/* 80372E50  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80372E54  40 82 FF F8 */	bne lbl_80372E4C
/* 80372E58  38 61 00 54 */	addi r3, r1, 0x54
/* 80372E5C  38 80 00 04 */	li r4, 4
/* 80372E60  38 A0 00 00 */	li r5, 0
/* 80372E64  48 00 06 B1 */	bl DBGEXIImm
lbl_80372E68:
/* 80372E68  80 1D 00 00 */	lwz r0, 0(r29)
/* 80372E6C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80372E70  40 82 FF F8 */	bne lbl_80372E68
/* 80372E74  80 1E 00 00 */	lwz r0, 0(r30)
/* 80372E78  70 00 04 05 */	andi. r0, r0, 0x405
/* 80372E7C  90 1E 00 00 */	stw r0, 0(r30)
/* 80372E80  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80372E84  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80372E88  40 82 FF 98 */	bne lbl_80372E20
/* 80372E8C  88 0D 85 70 */	lbz r0, data_80450AF0(r13)
/* 80372E90  54 00 80 1E */	slwi r0, r0, 0x10
/* 80372E94  64 00 1F 00 */	oris r0, r0, 0x1f00
/* 80372E98  7C 00 DB 78 */	or r0, r0, r27
/* 80372E9C  54 00 00 FE */	clrlwi r0, r0, 3
/* 80372EA0  64 18 C0 00 */	oris r24, r0, 0xc000
lbl_80372EA4:
/* 80372EA4  80 1E 00 00 */	lwz r0, 0(r30)
/* 80372EA8  38 61 00 44 */	addi r3, r1, 0x44
/* 80372EAC  38 80 00 04 */	li r4, 4
/* 80372EB0  70 00 04 05 */	andi. r0, r0, 0x405
/* 80372EB4  38 A0 00 01 */	li r5, 1
/* 80372EB8  60 00 00 C0 */	ori r0, r0, 0xc0
/* 80372EBC  90 1E 00 00 */	stw r0, 0(r30)
/* 80372EC0  93 01 00 44 */	stw r24, 0x44(r1)
/* 80372EC4  48 00 06 51 */	bl DBGEXIImm
/* 80372EC8  7C 60 00 34 */	cntlzw r0, r3
/* 80372ECC  54 03 D9 7E */	srwi r3, r0, 5
lbl_80372ED0:
/* 80372ED0  80 1D 00 00 */	lwz r0, 0(r29)
/* 80372ED4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80372ED8  40 82 FF F8 */	bne lbl_80372ED0
/* 80372EDC  80 1E 00 00 */	lwz r0, 0(r30)
/* 80372EE0  70 00 04 05 */	andi. r0, r0, 0x405
/* 80372EE4  2C 03 00 00 */	cmpwi r3, 0
/* 80372EE8  90 1E 00 00 */	stw r0, 0(r30)
/* 80372EEC  40 82 FF B8 */	bne lbl_80372EA4
/* 80372EF0  3F 60 40 00 */	lis r27, 0x4000
lbl_80372EF4:
/* 80372EF4  80 1E 00 00 */	lwz r0, 0(r30)
/* 80372EF8  38 61 00 3C */	addi r3, r1, 0x3c
/* 80372EFC  38 80 00 02 */	li r4, 2
/* 80372F00  70 00 04 05 */	andi. r0, r0, 0x405
/* 80372F04  38 A0 00 01 */	li r5, 1
/* 80372F08  60 00 00 C0 */	ori r0, r0, 0xc0
/* 80372F0C  90 1E 00 00 */	stw r0, 0(r30)
/* 80372F10  93 61 00 3C */	stw r27, 0x3c(r1)
/* 80372F14  48 00 06 01 */	bl DBGEXIImm
/* 80372F18  7C 60 00 34 */	cntlzw r0, r3
/* 80372F1C  54 1A D9 7E */	srwi r26, r0, 5
lbl_80372F20:
/* 80372F20  80 1D 00 00 */	lwz r0, 0(r29)
/* 80372F24  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80372F28  40 82 FF F8 */	bne lbl_80372F20
/* 80372F2C  38 61 00 54 */	addi r3, r1, 0x54
/* 80372F30  38 80 00 04 */	li r4, 4
/* 80372F34  38 A0 00 00 */	li r5, 0
/* 80372F38  48 00 05 DD */	bl DBGEXIImm
/* 80372F3C  7C 60 00 34 */	cntlzw r0, r3
/* 80372F40  54 00 D9 7E */	srwi r0, r0, 5
/* 80372F44  7F 43 03 78 */	or r3, r26, r0
lbl_80372F48:
/* 80372F48  80 1D 00 00 */	lwz r0, 0(r29)
/* 80372F4C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80372F50  40 82 FF F8 */	bne lbl_80372F48
/* 80372F54  80 1E 00 00 */	lwz r0, 0(r30)
/* 80372F58  70 00 04 05 */	andi. r0, r0, 0x405
/* 80372F5C  2C 03 00 00 */	cmpwi r3, 0
/* 80372F60  90 1E 00 00 */	stw r0, 0(r30)
/* 80372F64  40 82 FF 90 */	bne lbl_80372EF4
/* 80372F68  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80372F6C  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80372F70  40 82 FF 84 */	bne lbl_80372EF4
/* 80372F74  7F 83 E3 78 */	mr r3, r28
/* 80372F78  4B FC A7 A5 */	bl OSRestoreInterrupts
/* 80372F7C  BB 01 00 58 */	lmw r24, 0x58(r1)
/* 80372F80  38 60 00 00 */	li r3, 0
/* 80372F84  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 80372F88  38 21 00 78 */	addi r1, r1, 0x78
/* 80372F8C  7C 08 03 A6 */	mtlr r0
/* 80372F90  4E 80 00 20 */	blr 
