lbl_8019396C:
/* 8019396C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80193970  7C 08 02 A6 */	mflr r0
/* 80193974  90 01 00 34 */	stw r0, 0x34(r1)
/* 80193978  39 61 00 30 */	addi r11, r1, 0x30
/* 8019397C  48 1C E8 49 */	bl _savegpr_23
/* 80193980  7C 7E 1B 79 */	or. r30, r3, r3
/* 80193984  7C 9F 23 78 */	mr r31, r4
/* 80193988  41 82 01 EC */	beq lbl_80193B74
/* 8019398C  3C 60 80 3C */	lis r3, __vt__8dScope_c@ha /* 0x803BB6B4@ha */
/* 80193990  38 03 B6 B4 */	addi r0, r3, __vt__8dScope_c@l /* 0x803BB6B4@l */
/* 80193994  90 1E 00 00 */	stw r0, 0(r30)
/* 80193998  80 7E 00 04 */	lwz r3, 4(r30)
/* 8019399C  28 03 00 00 */	cmplwi r3, 0
/* 801939A0  41 82 00 24 */	beq lbl_801939C4
/* 801939A4  41 82 00 18 */	beq lbl_801939BC
/* 801939A8  38 80 00 01 */	li r4, 1
/* 801939AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801939B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801939B4  7D 89 03 A6 */	mtctr r12
/* 801939B8  4E 80 04 21 */	bctrl 
lbl_801939BC:
/* 801939BC  38 00 00 00 */	li r0, 0
/* 801939C0  90 1E 00 04 */	stw r0, 4(r30)
lbl_801939C4:
/* 801939C4  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 801939C8  28 03 00 00 */	cmplwi r3, 0
/* 801939CC  41 82 00 24 */	beq lbl_801939F0
/* 801939D0  41 82 00 18 */	beq lbl_801939E8
/* 801939D4  38 80 00 01 */	li r4, 1
/* 801939D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801939DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801939E0  7D 89 03 A6 */	mtctr r12
/* 801939E4  4E 80 04 21 */	bctrl 
lbl_801939E8:
/* 801939E8  38 00 00 00 */	li r0, 0
/* 801939EC  90 1E 00 0C */	stw r0, 0xc(r30)
lbl_801939F0:
/* 801939F0  3B 20 00 00 */	li r25, 0
/* 801939F4  3B 80 00 00 */	li r28, 0
/* 801939F8  7F 9B E3 78 */	mr r27, r28
lbl_801939FC:
/* 801939FC  3B 5C 00 14 */	addi r26, r28, 0x14
/* 80193A00  7C 7E D0 2E */	lwzx r3, r30, r26
/* 80193A04  28 03 00 00 */	cmplwi r3, 0
/* 80193A08  41 82 00 20 */	beq lbl_80193A28
/* 80193A0C  41 82 00 18 */	beq lbl_80193A24
/* 80193A10  38 80 00 01 */	li r4, 1
/* 80193A14  81 83 00 00 */	lwz r12, 0(r3)
/* 80193A18  81 8C 00 08 */	lwz r12, 8(r12)
/* 80193A1C  7D 89 03 A6 */	mtctr r12
/* 80193A20  4E 80 04 21 */	bctrl 
lbl_80193A24:
/* 80193A24  7F 7E D1 2E */	stwx r27, r30, r26
lbl_80193A28:
/* 80193A28  3B 39 00 01 */	addi r25, r25, 1
/* 80193A2C  2C 19 00 03 */	cmpwi r25, 3
/* 80193A30  3B 9C 00 04 */	addi r28, r28, 4
/* 80193A34  41 80 FF C8 */	blt lbl_801939FC
/* 80193A38  80 7E 00 08 */	lwz r3, 8(r30)
/* 80193A3C  28 03 00 00 */	cmplwi r3, 0
/* 80193A40  41 82 00 24 */	beq lbl_80193A64
/* 80193A44  41 82 00 18 */	beq lbl_80193A5C
/* 80193A48  38 80 00 01 */	li r4, 1
/* 80193A4C  81 83 00 00 */	lwz r12, 0(r3)
/* 80193A50  81 8C 00 08 */	lwz r12, 8(r12)
/* 80193A54  7D 89 03 A6 */	mtctr r12
/* 80193A58  4E 80 04 21 */	bctrl 
lbl_80193A5C:
/* 80193A5C  38 00 00 00 */	li r0, 0
/* 80193A60  90 1E 00 08 */	stw r0, 8(r30)
lbl_80193A64:
/* 80193A64  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 80193A68  28 03 00 00 */	cmplwi r3, 0
/* 80193A6C  41 82 00 24 */	beq lbl_80193A90
/* 80193A70  41 82 00 18 */	beq lbl_80193A88
/* 80193A74  38 80 00 01 */	li r4, 1
/* 80193A78  81 83 00 00 */	lwz r12, 0(r3)
/* 80193A7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80193A80  7D 89 03 A6 */	mtctr r12
/* 80193A84  4E 80 04 21 */	bctrl 
lbl_80193A88:
/* 80193A88  38 00 00 00 */	li r0, 0
/* 80193A8C  90 1E 00 10 */	stw r0, 0x10(r30)
lbl_80193A90:
/* 80193A90  3B 00 00 00 */	li r24, 0
/* 80193A94  3B A0 00 00 */	li r29, 0
lbl_80193A98:
/* 80193A98  3A E0 00 00 */	li r23, 0
/* 80193A9C  3B 80 00 00 */	li r28, 0
/* 80193AA0  7F 5E EA 14 */	add r26, r30, r29
/* 80193AA4  3B 60 00 00 */	li r27, 0
lbl_80193AA8:
/* 80193AA8  3B 3C 00 20 */	addi r25, r28, 0x20
/* 80193AAC  7C 7A C8 2E */	lwzx r3, r26, r25
/* 80193AB0  28 03 00 00 */	cmplwi r3, 0
/* 80193AB4  41 82 00 20 */	beq lbl_80193AD4
/* 80193AB8  41 82 00 18 */	beq lbl_80193AD0
/* 80193ABC  38 80 00 01 */	li r4, 1
/* 80193AC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80193AC4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80193AC8  7D 89 03 A6 */	mtctr r12
/* 80193ACC  4E 80 04 21 */	bctrl 
lbl_80193AD0:
/* 80193AD0  7F 7A C9 2E */	stwx r27, r26, r25
lbl_80193AD4:
/* 80193AD4  3A F7 00 01 */	addi r23, r23, 1
/* 80193AD8  2C 17 00 02 */	cmpwi r23, 2
/* 80193ADC  3B 9C 00 04 */	addi r28, r28, 4
/* 80193AE0  41 80 FF C8 */	blt lbl_80193AA8
/* 80193AE4  3B 18 00 01 */	addi r24, r24, 1
/* 80193AE8  2C 18 00 03 */	cmpwi r24, 3
/* 80193AEC  3B BD 00 08 */	addi r29, r29, 8
/* 80193AF0  41 80 FF A8 */	blt lbl_80193A98
/* 80193AF4  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 80193AF8  28 03 00 00 */	cmplwi r3, 0
/* 80193AFC  41 82 00 18 */	beq lbl_80193B14
/* 80193B00  38 80 00 01 */	li r4, 1
/* 80193B04  81 83 00 00 */	lwz r12, 0(r3)
/* 80193B08  81 8C 00 08 */	lwz r12, 8(r12)
/* 80193B0C  7D 89 03 A6 */	mtctr r12
/* 80193B10  4E 80 04 21 */	bctrl 
lbl_80193B14:
/* 80193B14  38 00 00 00 */	li r0, 0
/* 80193B18  90 1E 00 38 */	stw r0, 0x38(r30)
/* 80193B1C  80 7E 00 3C */	lwz r3, 0x3c(r30)
/* 80193B20  28 03 00 00 */	cmplwi r3, 0
/* 80193B24  41 82 00 18 */	beq lbl_80193B3C
/* 80193B28  38 80 00 01 */	li r4, 1
/* 80193B2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80193B30  81 8C 00 08 */	lwz r12, 8(r12)
/* 80193B34  7D 89 03 A6 */	mtctr r12
/* 80193B38  4E 80 04 21 */	bctrl 
lbl_80193B3C:
/* 80193B3C  38 00 00 00 */	li r0, 0
/* 80193B40  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 80193B44  3C 60 80 43 */	lis r3, g_meter2_info@ha /* 0x80430188@ha */
/* 80193B48  38 63 01 88 */	addi r3, r3, g_meter2_info@l /* 0x80430188@l */
/* 80193B4C  98 03 00 E7 */	stb r0, 0xe7(r3)
/* 80193B50  28 1E 00 00 */	cmplwi r30, 0
/* 80193B54  41 82 00 10 */	beq lbl_80193B64
/* 80193B58  3C 60 80 3C */	lis r3, __vt__11dMeterSub_c@ha /* 0x803BB6D4@ha */
/* 80193B5C  38 03 B6 D4 */	addi r0, r3, __vt__11dMeterSub_c@l /* 0x803BB6D4@l */
/* 80193B60  90 1E 00 00 */	stw r0, 0(r30)
lbl_80193B64:
/* 80193B64  7F E0 07 35 */	extsh. r0, r31
/* 80193B68  40 81 00 0C */	ble lbl_80193B74
/* 80193B6C  7F C3 F3 78 */	mr r3, r30
/* 80193B70  48 13 B1 CD */	bl __dl__FPv
lbl_80193B74:
/* 80193B74  7F C3 F3 78 */	mr r3, r30
/* 80193B78  39 61 00 30 */	addi r11, r1, 0x30
/* 80193B7C  48 1C E6 95 */	bl _restgpr_23
/* 80193B80  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80193B84  7C 08 03 A6 */	mtlr r0
/* 80193B88  38 21 00 30 */	addi r1, r1, 0x30
/* 80193B8C  4E 80 00 20 */	blr 
