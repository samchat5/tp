lbl_809587A0:
/* 809587A0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 809587A4  7C 08 02 A6 */	mflr r0
/* 809587A8  90 01 00 44 */	stw r0, 0x44(r1)
/* 809587AC  39 61 00 40 */	addi r11, r1, 0x40
/* 809587B0  4B A0 9A 19 */	bl _savegpr_24
/* 809587B4  7C 7C 1B 78 */	mr r28, r3
/* 809587B8  3C 80 80 96 */	lis r4, m__16daNpcAsh_Param_c@ha /* 0x8095D640@ha */
/* 809587BC  3B E4 D6 40 */	addi r31, r4, m__16daNpcAsh_Param_c@l /* 0x8095D640@l */
/* 809587C0  80 03 04 A0 */	lwz r0, 0x4a0(r3)
/* 809587C4  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 809587C8  40 82 00 1C */	bne lbl_809587E4
/* 809587CC  28 1C 00 00 */	cmplwi r28, 0
/* 809587D0  41 82 00 08 */	beq lbl_809587D8
/* 809587D4  4B FF FB 19 */	bl __ct__10daNpcAsh_cFv
lbl_809587D8:
/* 809587D8  80 1C 04 A0 */	lwz r0, 0x4a0(r28)
/* 809587DC  60 00 00 08 */	ori r0, r0, 8
/* 809587E0  90 1C 04 A0 */	stw r0, 0x4a0(r28)
lbl_809587E4:
/* 809587E4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 809587E8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 809587EC  3B C3 0F 38 */	addi r30, r3, 0xf38
/* 809587F0  3B 1E 3E C8 */	addi r24, r30, 0x3ec8
/* 809587F4  7F 03 C3 78 */	mr r3, r24
/* 809587F8  3C 80 80 96 */	lis r4, d_a_npc_ash__stringBase0@ha /* 0x8095D910@ha */
/* 809587FC  38 84 D9 10 */	addi r4, r4, d_a_npc_ash__stringBase0@l /* 0x8095D910@l */
/* 80958800  38 84 00 6C */	addi r4, r4, 0x6c
/* 80958804  4B A1 01 91 */	bl strcmp
/* 80958808  2C 03 00 00 */	cmpwi r3, 0
/* 8095880C  40 82 00 64 */	bne lbl_80958870
/* 80958810  38 60 00 00 */	li r3, 0
/* 80958814  4B 6D 41 69 */	bl getLayerNo__14dComIfG_play_cFi
/* 80958818  2C 03 00 04 */	cmpwi r3, 4
/* 8095881C  40 82 00 54 */	bne lbl_80958870
/* 80958820  38 60 01 69 */	li r3, 0x169
/* 80958824  4B 7F CE 11 */	bl daNpcF_chkEvtBit__FUl
/* 80958828  2C 03 00 00 */	cmpwi r3, 0
/* 8095882C  41 82 00 1C */	beq lbl_80958848
/* 80958830  38 60 01 0A */	li r3, 0x10a
/* 80958834  4B 7F CE 01 */	bl daNpcF_chkEvtBit__FUl
/* 80958838  2C 03 00 00 */	cmpwi r3, 0
/* 8095883C  40 82 00 0C */	bne lbl_80958848
/* 80958840  38 60 00 05 */	li r3, 5
/* 80958844  48 00 03 0C */	b lbl_80958B50
lbl_80958848:
/* 80958848  38 60 00 18 */	li r3, 0x18
/* 8095884C  38 80 00 4B */	li r4, 0x4b
/* 80958850  4B 6D 4E F1 */	bl dComIfGs_isStageSwitch__Fii
/* 80958854  2C 03 00 00 */	cmpwi r3, 0
/* 80958858  41 82 00 0C */	beq lbl_80958864
/* 8095885C  38 60 00 05 */	li r3, 5
/* 80958860  48 00 02 F0 */	b lbl_80958B50
lbl_80958864:
/* 80958864  38 00 00 00 */	li r0, 0
/* 80958868  98 1C 0F 60 */	stb r0, 0xf60(r28)
/* 8095886C  48 00 00 58 */	b lbl_809588C4
lbl_80958870:
/* 80958870  7F 03 C3 78 */	mr r3, r24
/* 80958874  3C 80 80 96 */	lis r4, d_a_npc_ash__stringBase0@ha /* 0x8095D910@ha */
/* 80958878  38 84 D9 10 */	addi r4, r4, d_a_npc_ash__stringBase0@l /* 0x8095D910@l */
/* 8095887C  38 84 00 74 */	addi r4, r4, 0x74
/* 80958880  4B A1 01 15 */	bl strcmp
/* 80958884  2C 03 00 00 */	cmpwi r3, 0
/* 80958888  40 82 00 3C */	bne lbl_809588C4
/* 8095888C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80958890  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80958894  38 63 09 58 */	addi r3, r3, 0x958
/* 80958898  38 80 00 14 */	li r4, 0x14
/* 8095889C  4B 6D BF C5 */	bl isSwitch__12dSv_memBit_cCFi
/* 809588A0  2C 03 00 00 */	cmpwi r3, 0
/* 809588A4  41 82 00 0C */	beq lbl_809588B0
/* 809588A8  38 60 00 05 */	li r3, 5
/* 809588AC  48 00 02 A4 */	b lbl_80958B50
lbl_809588B0:
/* 809588B0  80 1C 04 9C */	lwz r0, 0x49c(r28)
/* 809588B4  60 00 40 00 */	ori r0, r0, 0x4000
/* 809588B8  90 1C 04 9C */	stw r0, 0x49c(r28)
/* 809588BC  38 00 00 01 */	li r0, 1
/* 809588C0  98 1C 0F 60 */	stb r0, 0xf60(r28)
lbl_809588C4:
/* 809588C4  A8 1C 04 E4 */	lha r0, 0x4e4(r28)
/* 809588C8  B0 1C 0F 58 */	sth r0, 0xf58(r28)
/* 809588CC  3B A0 00 05 */	li r29, 5
/* 809588D0  3B 60 00 00 */	li r27, 0
/* 809588D4  3B 40 00 00 */	li r26, 0
/* 809588D8  3C 60 80 96 */	lis r3, l_arcNames@ha /* 0x8095DAC0@ha */
/* 809588DC  3B 03 DA C0 */	addi r24, r3, l_arcNames@l /* 0x8095DAC0@l */
/* 809588E0  3C 60 80 96 */	lis r3, l_loadRes_list@ha /* 0x8095DAB8@ha */
/* 809588E4  3B 23 DA B8 */	addi r25, r3, l_loadRes_list@l /* 0x8095DAB8@l */
/* 809588E8  48 00 00 30 */	b lbl_80958918
lbl_809588EC:
/* 809588EC  38 7A 0F 3C */	addi r3, r26, 0xf3c
/* 809588F0  7C 7C 1A 14 */	add r3, r28, r3
/* 809588F4  54 00 10 3A */	slwi r0, r0, 2
/* 809588F8  7C 98 00 2E */	lwzx r4, r24, r0
/* 809588FC  4B 6D 45 C1 */	bl dComIfG_resLoad__FP30request_of_phase_process_classPCc
/* 80958900  7C 7D 1B 78 */	mr r29, r3
/* 80958904  2C 1D 00 04 */	cmpwi r29, 4
/* 80958908  41 82 00 08 */	beq lbl_80958910
/* 8095890C  48 00 02 44 */	b lbl_80958B50
lbl_80958910:
/* 80958910  3B 7B 00 04 */	addi r27, r27, 4
/* 80958914  3B 5A 00 08 */	addi r26, r26, 8
lbl_80958918:
/* 80958918  88 9C 0F 60 */	lbz r4, 0xf60(r28)
/* 8095891C  54 80 15 BA */	rlwinm r0, r4, 2, 0x16, 0x1d
/* 80958920  7C 79 00 2E */	lwzx r3, r25, r0
/* 80958924  7C 03 D8 2E */	lwzx r0, r3, r27
/* 80958928  2C 00 00 00 */	cmpwi r0, 0
/* 8095892C  40 80 FF C0 */	bge lbl_809588EC
/* 80958930  2C 1D 00 04 */	cmpwi r29, 4
/* 80958934  40 82 02 18 */	bne lbl_80958B4C
/* 80958938  38 A0 00 00 */	li r5, 0
/* 8095893C  2C 04 00 01 */	cmpwi r4, 1
/* 80958940  41 82 00 1C */	beq lbl_8095895C
/* 80958944  40 80 00 1C */	bge lbl_80958960
/* 80958948  2C 04 00 00 */	cmpwi r4, 0
/* 8095894C  40 80 00 08 */	bge lbl_80958954
/* 80958950  48 00 00 10 */	b lbl_80958960
lbl_80958954:
/* 80958954  38 A0 42 10 */	li r5, 0x4210
/* 80958958  48 00 00 08 */	b lbl_80958960
lbl_8095895C:
/* 8095895C  38 A0 58 B0 */	li r5, 0x58b0
lbl_80958960:
/* 80958960  7F 83 E3 78 */	mr r3, r28
/* 80958964  3C 80 80 96 */	lis r4, createHeapCallBack__10daNpcAsh_cFP10fopAc_ac_c@ha /* 0x80959458@ha */
/* 80958968  38 84 94 58 */	addi r4, r4, createHeapCallBack__10daNpcAsh_cFP10fopAc_ac_c@l /* 0x80959458@l */
/* 8095896C  4B 6C 1B 45 */	bl fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl
/* 80958970  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80958974  40 82 00 0C */	bne lbl_80958980
/* 80958978  38 60 00 05 */	li r3, 5
/* 8095897C  48 00 01 D4 */	b lbl_80958B50
lbl_80958980:
/* 80958980  80 7C 05 68 */	lwz r3, 0x568(r28)
/* 80958984  80 63 00 04 */	lwz r3, 4(r3)
/* 80958988  38 03 00 24 */	addi r0, r3, 0x24
/* 8095898C  90 1C 05 04 */	stw r0, 0x504(r28)
/* 80958990  7F 83 E3 78 */	mr r3, r28
/* 80958994  C0 3F 00 6C */	lfs f1, 0x6c(r31)
/* 80958998  C0 5F 00 70 */	lfs f2, 0x70(r31)
/* 8095899C  FC 60 08 90 */	fmr f3, f1
/* 809589A0  C0 9F 00 74 */	lfs f4, 0x74(r31)
/* 809589A4  C0 BF 00 78 */	lfs f5, 0x78(r31)
/* 809589A8  FC C0 20 90 */	fmr f6, f4
/* 809589AC  4B 6C 1B 9D */	bl fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff
/* 809589B0  38 7C 0B 48 */	addi r3, r28, 0xb48
/* 809589B4  38 9C 04 D0 */	addi r4, r28, 0x4d0
/* 809589B8  38 BC 05 38 */	addi r5, r28, 0x538
/* 809589BC  38 C0 00 03 */	li r6, 3
/* 809589C0  38 E0 00 01 */	li r7, 1
/* 809589C4  4B 96 7B 6D */	bl init__10Z2CreatureFP3VecP3VecUcUc
/* 809589C8  38 7C 07 E4 */	addi r3, r28, 0x7e4
/* 809589CC  38 9F 00 00 */	addi r4, r31, 0
/* 809589D0  C0 24 00 1C */	lfs f1, 0x1c(r4)
/* 809589D4  C0 44 00 18 */	lfs f2, 0x18(r4)
/* 809589D8  4B 71 D5 81 */	bl SetWall__12dBgS_AcchCirFff
/* 809589DC  38 1C 04 E4 */	addi r0, r28, 0x4e4
/* 809589E0  90 01 00 08 */	stw r0, 8(r1)
/* 809589E4  38 7C 05 D0 */	addi r3, r28, 0x5d0
/* 809589E8  38 9C 04 D0 */	addi r4, r28, 0x4d0
/* 809589EC  38 BC 04 BC */	addi r5, r28, 0x4bc
/* 809589F0  7F 86 E3 78 */	mr r6, r28
/* 809589F4  38 E0 00 01 */	li r7, 1
/* 809589F8  39 1C 07 E4 */	addi r8, r28, 0x7e4
/* 809589FC  39 3C 04 F8 */	addi r9, r28, 0x4f8
/* 80958A00  39 5C 04 DC */	addi r10, r28, 0x4dc
/* 80958A04  4B 71 D8 45 */	bl Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz
/* 80958A08  80 1C 05 FC */	lwz r0, 0x5fc(r28)
/* 80958A0C  60 00 00 08 */	ori r0, r0, 8
/* 80958A10  90 1C 05 FC */	stw r0, 0x5fc(r28)
/* 80958A14  80 1C 05 FC */	lwz r0, 0x5fc(r28)
/* 80958A18  60 00 04 00 */	ori r0, r0, 0x400
/* 80958A1C  90 1C 05 FC */	stw r0, 0x5fc(r28)
/* 80958A20  38 7C 05 D0 */	addi r3, r28, 0x5d0
/* 80958A24  7F C4 F3 78 */	mr r4, r30
/* 80958A28  4B 71 E0 85 */	bl CrrPos__9dBgS_AcchFR4dBgS
/* 80958A2C  38 7C 07 A8 */	addi r3, r28, 0x7a8
/* 80958A30  38 9F 00 00 */	addi r4, r31, 0
/* 80958A34  C0 04 00 10 */	lfs f0, 0x10(r4)
/* 80958A38  FC 00 00 1E */	fctiwz f0, f0
/* 80958A3C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80958A40  80 81 00 14 */	lwz r4, 0x14(r1)
/* 80958A44  38 A0 00 00 */	li r5, 0
/* 80958A48  7F 86 E3 78 */	mr r6, r28
/* 80958A4C  4B 72 AE 15 */	bl Init__9dCcD_SttsFiiP10fopAc_ac_c
/* 80958A50  38 7C 0C B8 */	addi r3, r28, 0xcb8
/* 80958A54  3C 80 80 3B */	lis r4, mCcDCyl__8daNpcF_c@ha /* 0x803B37E0@ha */
/* 80958A58  38 84 37 E0 */	addi r4, r4, mCcDCyl__8daNpcF_c@l /* 0x803B37E0@l */
/* 80958A5C  4B 72 BE 59 */	bl Set__8dCcD_CylFRC11dCcD_SrcCyl
/* 80958A60  38 1C 07 A8 */	addi r0, r28, 0x7a8
/* 80958A64  90 1C 0C FC */	stw r0, 0xcfc(r28)
/* 80958A68  38 00 00 00 */	li r0, 0
/* 80958A6C  90 1C 0C E0 */	stw r0, 0xce0(r28)
/* 80958A70  90 1C 0C D0 */	stw r0, 0xcd0(r28)
/* 80958A74  88 1C 0F 60 */	lbz r0, 0xf60(r28)
/* 80958A78  28 00 00 00 */	cmplwi r0, 0
/* 80958A7C  40 82 00 30 */	bne lbl_80958AAC
/* 80958A80  38 7C 0D F4 */	addi r3, r28, 0xdf4
/* 80958A84  3C 80 80 3B */	lis r4, mCcDCyl__8daNpcF_c@ha /* 0x803B37E0@ha */
/* 80958A88  38 84 37 E0 */	addi r4, r4, mCcDCyl__8daNpcF_c@l /* 0x803B37E0@l */
/* 80958A8C  4B 72 BE 29 */	bl Set__8dCcD_CylFRC11dCcD_SrcCyl
/* 80958A90  38 1C 07 A8 */	addi r0, r28, 0x7a8
/* 80958A94  90 1C 0E 38 */	stw r0, 0xe38(r28)
/* 80958A98  38 00 00 00 */	li r0, 0
/* 80958A9C  90 1C 0E 1C */	stw r0, 0xe1c(r28)
/* 80958AA0  90 1C 0E 0C */	stw r0, 0xe0c(r28)
/* 80958AA4  38 00 00 19 */	li r0, 0x19
/* 80958AA8  90 1C 0E 20 */	stw r0, 0xe20(r28)
lbl_80958AAC:
/* 80958AAC  80 1C 06 AC */	lwz r0, 0x6ac(r28)
/* 80958AB0  90 1C 0A 44 */	stw r0, 0xa44(r28)
/* 80958AB4  80 1C 06 B0 */	lwz r0, 0x6b0(r28)
/* 80958AB8  90 1C 0A 48 */	stw r0, 0xa48(r28)
/* 80958ABC  80 1C 06 B4 */	lwz r0, 0x6b4(r28)
/* 80958AC0  90 1C 0A 4C */	stw r0, 0xa4c(r28)
/* 80958AC4  88 1C 06 B8 */	lbz r0, 0x6b8(r28)
/* 80958AC8  98 1C 0A 50 */	stb r0, 0xa50(r28)
/* 80958ACC  A0 1C 06 C0 */	lhz r0, 0x6c0(r28)
/* 80958AD0  B0 1C 0A 58 */	sth r0, 0xa58(r28)
/* 80958AD4  A0 1C 06 C2 */	lhz r0, 0x6c2(r28)
/* 80958AD8  B0 1C 0A 5A */	sth r0, 0xa5a(r28)
/* 80958ADC  80 1C 06 C4 */	lwz r0, 0x6c4(r28)
/* 80958AE0  90 1C 0A 5C */	stw r0, 0xa5c(r28)
/* 80958AE4  80 1C 06 C8 */	lwz r0, 0x6c8(r28)
/* 80958AE8  90 1C 0A 60 */	stw r0, 0xa60(r28)
/* 80958AEC  C0 1C 06 D0 */	lfs f0, 0x6d0(r28)
/* 80958AF0  D0 1C 0A 68 */	stfs f0, 0xa68(r28)
/* 80958AF4  C0 1C 06 D4 */	lfs f0, 0x6d4(r28)
/* 80958AF8  D0 1C 0A 6C */	stfs f0, 0xa6c(r28)
/* 80958AFC  C0 1C 06 D8 */	lfs f0, 0x6d8(r28)
/* 80958B00  D0 1C 0A 70 */	stfs f0, 0xa70(r28)
/* 80958B04  80 1C 06 DC */	lwz r0, 0x6dc(r28)
/* 80958B08  90 1C 0A 74 */	stw r0, 0xa74(r28)
/* 80958B0C  C0 1C 06 E0 */	lfs f0, 0x6e0(r28)
/* 80958B10  D0 1C 0A 78 */	stfs f0, 0xa78(r28)
/* 80958B14  80 1C 06 E4 */	lwz r0, 0x6e4(r28)
/* 80958B18  90 1C 0A 7C */	stw r0, 0xa7c(r28)
/* 80958B1C  C0 1C 06 68 */	lfs f0, 0x668(r28)
/* 80958B20  D0 1C 09 80 */	stfs f0, 0x980(r28)
/* 80958B24  7F 83 E3 78 */	mr r3, r28
/* 80958B28  4B 7F A2 5D */	bl setEnvTevColor__8daNpcF_cFv
/* 80958B2C  7F 83 E3 78 */	mr r3, r28
/* 80958B30  4B 7F A2 B1 */	bl setRoomNo__8daNpcF_cFv
/* 80958B34  80 7C 05 68 */	lwz r3, 0x568(r28)
/* 80958B38  4B 6B 86 B5 */	bl modelCalc__16mDoExt_McaMorfSOFv
/* 80958B3C  7F 83 E3 78 */	mr r3, r28
/* 80958B40  48 00 0D D1 */	bl reset__10daNpcAsh_cFv
/* 80958B44  7F 83 E3 78 */	mr r3, r28
/* 80958B48  48 00 05 B1 */	bl Execute__10daNpcAsh_cFv
lbl_80958B4C:
/* 80958B4C  7F A3 EB 78 */	mr r3, r29
lbl_80958B50:
/* 80958B50  39 61 00 40 */	addi r11, r1, 0x40
/* 80958B54  4B A0 96 C1 */	bl _restgpr_24
/* 80958B58  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80958B5C  7C 08 03 A6 */	mtlr r0
/* 80958B60  38 21 00 40 */	addi r1, r1, 0x40
/* 80958B64  4E 80 00 20 */	blr 
