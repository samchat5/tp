lbl_80510734:
/* 80510734  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80510738  7C 08 02 A6 */	mflr r0
/* 8051073C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80510740  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 80510744  F3 E1 00 48 */	psq_st f31, 72(r1), 0, 0 /* qr0 */
/* 80510748  39 61 00 40 */	addi r11, r1, 0x40
/* 8051074C  4B E5 1A 81 */	bl _savegpr_25
/* 80510750  7C 7A 1B 78 */	mr r26, r3
/* 80510754  3C 60 80 52 */	lis r3, lit_4208@ha /* 0x80518584@ha */
/* 80510758  3B E3 85 84 */	addi r31, r3, lit_4208@l /* 0x80518584@l */
/* 8051075C  80 BA 05 D0 */	lwz r5, 0x5d0(r26)
/* 80510760  C0 05 00 1C */	lfs f0, 0x1c(r5)
/* 80510764  FC 00 00 1E */	fctiwz f0, f0
/* 80510768  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 8051076C  83 C1 00 1C */	lwz r30, 0x1c(r1)
/* 80510770  C3 FA 09 80 */	lfs f31, 0x980(r26)
/* 80510774  3B A0 40 00 */	li r29, 0x4000
/* 80510778  3B 80 00 00 */	li r28, 0
/* 8051077C  88 9A 09 A1 */	lbz r4, 0x9a1(r26)
/* 80510780  2C 04 00 01 */	cmpwi r4, 1
/* 80510784  41 82 00 14 */	beq lbl_80510798
/* 80510788  3C 60 80 52 */	lis r3, struct_805191E4+0x0@ha /* 0x805191E4@ha */
/* 8051078C  A8 03 91 E4 */	lha r0, struct_805191E4+0x0@l(r3)  /* 0x805191E4@l */
/* 80510790  2C 00 00 00 */	cmpwi r0, 0
/* 80510794  41 82 00 30 */	beq lbl_805107C4
lbl_80510798:
/* 80510798  7C 80 07 74 */	extsb r0, r4
/* 8051079C  2C 00 00 01 */	cmpwi r0, 1
/* 805107A0  40 82 00 0C */	bne lbl_805107AC
/* 805107A4  3B 80 00 01 */	li r28, 1
/* 805107A8  48 00 00 14 */	b lbl_805107BC
lbl_805107AC:
/* 805107AC  A8 1A 09 70 */	lha r0, 0x970(r26)
/* 805107B0  54 00 07 3F */	clrlwi. r0, r0, 0x1c
/* 805107B4  40 82 00 08 */	bne lbl_805107BC
/* 805107B8  3B 80 00 01 */	li r28, 1
lbl_805107BC:
/* 805107BC  C3 FF 00 88 */	lfs f31, 0x88(r31)
/* 805107C0  3B A0 7F FF */	li r29, 0x7fff
lbl_805107C4:
/* 805107C4  3B 60 00 00 */	li r27, 0
/* 805107C8  A8 1A 05 B4 */	lha r0, 0x5b4(r26)
/* 805107CC  28 00 00 0B */	cmplwi r0, 0xb
/* 805107D0  41 81 02 20 */	bgt lbl_805109F0
/* 805107D4  3C 60 80 52 */	lis r3, lit_8916@ha /* 0x80518CF8@ha */
/* 805107D8  38 63 8C F8 */	addi r3, r3, lit_8916@l /* 0x80518CF8@l */
/* 805107DC  54 00 10 3A */	slwi r0, r0, 2
/* 805107E0  7C 03 00 2E */	lwzx r0, r3, r0
/* 805107E4  7C 09 03 A6 */	mtctr r0
/* 805107E8  4E 80 04 20 */	bctr 
lbl_805107EC:
/* 805107EC  C0 3F 00 00 */	lfs f1, 0(r31)
/* 805107F0  4B D5 71 65 */	bl cM_rndF__Ff
/* 805107F4  C0 1F 00 AC */	lfs f0, 0xac(r31)
/* 805107F8  EC 00 08 2A */	fadds f0, f0, f1
/* 805107FC  FC 00 00 1E */	fctiwz f0, f0
/* 80510800  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80510804  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80510808  B0 1A 09 90 */	sth r0, 0x990(r26)
/* 8051080C  7F 43 D3 78 */	mr r3, r26
/* 80510810  38 80 00 3F */	li r4, 0x3f
/* 80510814  C0 3F 00 58 */	lfs f1, 0x58(r31)
/* 80510818  38 A0 00 02 */	li r5, 2
/* 8051081C  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80510820  4B FF 43 B5 */	bl anm_init__FP10e_rd_classifUcf
/* 80510824  38 00 00 01 */	li r0, 1
/* 80510828  B0 1A 05 B4 */	sth r0, 0x5b4(r26)
/* 8051082C  48 00 01 C4 */	b lbl_805109F0
lbl_80510830:
/* 80510830  2C 1C 00 00 */	cmpwi r28, 0
/* 80510834  40 82 00 10 */	bne lbl_80510844
/* 80510838  A8 1A 09 90 */	lha r0, 0x990(r26)
/* 8051083C  2C 00 00 00 */	cmpwi r0, 0
/* 80510840  40 82 01 B0 */	bne lbl_805109F0
lbl_80510844:
/* 80510844  7F 43 D3 78 */	mr r3, r26
/* 80510848  38 80 00 3D */	li r4, 0x3d
/* 8051084C  C0 3F 00 54 */	lfs f1, 0x54(r31)
/* 80510850  38 A0 00 00 */	li r5, 0
/* 80510854  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80510858  4B FF 43 7D */	bl anm_init__FP10e_rd_classifUcf
/* 8051085C  38 00 00 02 */	li r0, 2
/* 80510860  B0 1A 05 B4 */	sth r0, 0x5b4(r26)
/* 80510864  48 00 01 8C */	b lbl_805109F0
lbl_80510868:
/* 80510868  38 60 00 01 */	li r3, 1
/* 8051086C  88 05 00 11 */	lbz r0, 0x11(r5)
/* 80510870  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80510874  40 82 00 18 */	bne lbl_8051088C
/* 80510878  C0 3F 00 04 */	lfs f1, 4(r31)
/* 8051087C  C0 05 00 18 */	lfs f0, 0x18(r5)
/* 80510880  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 80510884  41 82 00 08 */	beq lbl_8051088C
/* 80510888  38 60 00 00 */	li r3, 0
lbl_8051088C:
/* 8051088C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80510890  41 82 00 0C */	beq lbl_8051089C
/* 80510894  38 00 00 00 */	li r0, 0
/* 80510898  B0 1A 05 B4 */	sth r0, 0x5b4(r26)
lbl_8051089C:
/* 8051089C  88 1A 04 E2 */	lbz r0, 0x4e2(r26)
/* 805108A0  7C 00 07 75 */	extsb. r0, r0
/* 805108A4  40 82 00 28 */	bne lbl_805108CC
/* 805108A8  2C 1C 00 00 */	cmpwi r28, 0
/* 805108AC  41 82 00 10 */	beq lbl_805108BC
/* 805108B0  7F 43 D3 78 */	mr r3, r26
/* 805108B4  7F A4 EB 78 */	mr r4, r29
/* 805108B8  4B FF 5B 75 */	bl wb_check__FP10e_rd_classs
lbl_805108BC:
/* 805108BC  C0 3A 09 78 */	lfs f1, 0x978(r26)
/* 805108C0  C0 1F 01 20 */	lfs f0, 0x120(r31)
/* 805108C4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 805108C8  41 81 02 4C */	bgt lbl_80510B14
lbl_805108CC:
/* 805108CC  2C 1E 00 3C */	cmpwi r30, 0x3c
/* 805108D0  40 81 01 20 */	ble lbl_805109F0
/* 805108D4  2C 1E 00 C8 */	cmpwi r30, 0xc8
/* 805108D8  40 80 01 18 */	bge lbl_805109F0
/* 805108DC  A8 1A 09 70 */	lha r0, 0x970(r26)
/* 805108E0  54 00 07 7F */	clrlwi. r0, r0, 0x1d
/* 805108E4  41 82 00 0C */	beq lbl_805108F0
/* 805108E8  2C 1C 00 00 */	cmpwi r28, 0
/* 805108EC  41 82 01 04 */	beq lbl_805109F0
lbl_805108F0:
/* 805108F0  7F 43 D3 78 */	mr r3, r26
/* 805108F4  FC 20 F8 90 */	fmr f1, f31
/* 805108F8  7F A4 EB 78 */	mr r4, r29
/* 805108FC  4B FF 5C D9 */	bl pl_check__FP10e_rd_classfs
/* 80510900  2C 03 00 00 */	cmpwi r3, 0
/* 80510904  41 82 00 EC */	beq lbl_805109F0
/* 80510908  3B 60 00 01 */	li r27, 1
/* 8051090C  48 00 00 E4 */	b lbl_805109F0
lbl_80510910:
/* 80510910  A8 1A 09 90 */	lha r0, 0x990(r26)
/* 80510914  2C 00 00 00 */	cmpwi r0, 0
/* 80510918  40 82 00 D8 */	bne lbl_805109F0
/* 8051091C  3B 60 00 01 */	li r27, 1
/* 80510920  48 00 00 D0 */	b lbl_805109F0
lbl_80510924:
/* 80510924  7F 43 D3 78 */	mr r3, r26
/* 80510928  38 80 00 3B */	li r4, 0x3b
/* 8051092C  C0 3F 00 54 */	lfs f1, 0x54(r31)
/* 80510930  38 A0 00 00 */	li r5, 0
/* 80510934  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80510938  4B FF 42 9D */	bl anm_init__FP10e_rd_classifUcf
/* 8051093C  38 00 00 0B */	li r0, 0xb
/* 80510940  B0 1A 05 B4 */	sth r0, 0x5b4(r26)
/* 80510944  C0 1A 04 D0 */	lfs f0, 0x4d0(r26)
/* 80510948  D0 01 00 08 */	stfs f0, 8(r1)
/* 8051094C  C0 1A 04 D4 */	lfs f0, 0x4d4(r26)
/* 80510950  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80510954  C0 1A 04 D8 */	lfs f0, 0x4d8(r26)
/* 80510958  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8051095C  38 61 00 08 */	addi r3, r1, 8
/* 80510960  38 80 00 64 */	li r4, 0x64
/* 80510964  28 1A 00 00 */	cmplwi r26, 0
/* 80510968  41 82 00 0C */	beq lbl_80510974
/* 8051096C  80 BA 00 04 */	lwz r5, 4(r26)
/* 80510970  48 00 00 08 */	b lbl_80510978
lbl_80510974:
/* 80510974  38 A0 FF FF */	li r5, -1
lbl_80510978:
/* 80510978  38 C0 00 03 */	li r6, 3
/* 8051097C  4B C9 78 45 */	bl dKy_Sound_set__F4cXyziUii
/* 80510980  38 00 00 14 */	li r0, 0x14
/* 80510984  3C 60 80 52 */	lis r3, struct_805191E4+0x0@ha /* 0x805191E4@ha */
/* 80510988  B0 03 91 E4 */	sth r0, struct_805191E4+0x0@l(r3)  /* 0x805191E4@l */
/* 8051098C  48 00 00 64 */	b lbl_805109F0
lbl_80510990:
/* 80510990  38 7A 04 DE */	addi r3, r26, 0x4de
/* 80510994  A8 9A 09 7C */	lha r4, 0x97c(r26)
/* 80510998  38 A0 00 02 */	li r5, 2
/* 8051099C  38 C0 08 00 */	li r6, 0x800
/* 805109A0  4B D5 FC 69 */	bl cLib_addCalcAngleS2__FPssss
/* 805109A4  80 7A 05 D0 */	lwz r3, 0x5d0(r26)
/* 805109A8  38 80 00 01 */	li r4, 1
/* 805109AC  88 03 00 11 */	lbz r0, 0x11(r3)
/* 805109B0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 805109B4  40 82 00 18 */	bne lbl_805109CC
/* 805109B8  C0 3F 00 04 */	lfs f1, 4(r31)
/* 805109BC  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 805109C0  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 805109C4  41 82 00 08 */	beq lbl_805109CC
/* 805109C8  38 80 00 00 */	li r4, 0
lbl_805109CC:
/* 805109CC  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 805109D0  41 82 00 20 */	beq lbl_805109F0
/* 805109D4  38 00 00 03 */	li r0, 3
/* 805109D8  B0 1A 09 72 */	sth r0, 0x972(r26)
/* 805109DC  38 00 FF F6 */	li r0, -10
/* 805109E0  B0 1A 05 B4 */	sth r0, 0x5b4(r26)
/* 805109E4  38 00 00 3C */	li r0, 0x3c
/* 805109E8  B0 1A 09 90 */	sth r0, 0x990(r26)
/* 805109EC  48 00 01 28 */	b lbl_80510B14
lbl_805109F0:
/* 805109F0  A8 1A 05 B4 */	lha r0, 0x5b4(r26)
/* 805109F4  2C 00 00 05 */	cmpwi r0, 5
/* 805109F8  40 80 00 5C */	bge lbl_80510A54
/* 805109FC  3B 20 00 00 */	li r25, 0
/* 80510A00  3B 80 00 00 */	li r28, 0
/* 80510A04  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80510A08  3B A3 61 C0 */	addi r29, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
lbl_80510A0C:
/* 80510A0C  3B DC 0D 58 */	addi r30, r28, 0xd58
/* 80510A10  7F DA F2 14 */	add r30, r26, r30
/* 80510A14  7F C3 F3 78 */	mr r3, r30
/* 80510A18  4B B7 3C 41 */	bl ChkCoHit__12dCcD_GObjInfFv
/* 80510A1C  28 03 00 00 */	cmplwi r3, 0
/* 80510A20  41 82 00 24 */	beq lbl_80510A44
/* 80510A24  7F C3 F3 78 */	mr r3, r30
/* 80510A28  4B B7 3C C9 */	bl GetCoHitObj__12dCcD_GObjInfFv
/* 80510A2C  4B D5 30 1D */	bl GetAc__8cCcD_ObjFv
/* 80510A30  80 1D 5D AC */	lwz r0, 0x5dac(r29)
/* 80510A34  7C 00 18 40 */	cmplw r0, r3
/* 80510A38  40 82 00 0C */	bne lbl_80510A44
/* 80510A3C  3B 60 00 02 */	li r27, 2
/* 80510A40  48 00 00 14 */	b lbl_80510A54
lbl_80510A44:
/* 80510A44  3B 39 00 01 */	addi r25, r25, 1
/* 80510A48  2C 19 00 02 */	cmpwi r25, 2
/* 80510A4C  3B 9C 01 38 */	addi r28, r28, 0x138
/* 80510A50  40 81 FF BC */	ble lbl_80510A0C
lbl_80510A54:
/* 80510A54  A8 1A 05 B4 */	lha r0, 0x5b4(r26)
/* 80510A58  2C 00 00 0A */	cmpwi r0, 0xa
/* 80510A5C  40 80 00 90 */	bge lbl_80510AEC
/* 80510A60  7F 60 07 74 */	extsb r0, r27
/* 80510A64  2C 00 00 01 */	cmpwi r0, 1
/* 80510A68  40 82 00 3C */	bne lbl_80510AA4
/* 80510A6C  3C 60 80 52 */	lis r3, struct_805191E4+0x0@ha /* 0x805191E4@ha */
/* 80510A70  A8 03 91 E4 */	lha r0, struct_805191E4+0x0@l(r3)  /* 0x805191E4@l */
/* 80510A74  2C 00 00 00 */	cmpwi r0, 0
/* 80510A78  40 82 00 10 */	bne lbl_80510A88
/* 80510A7C  38 00 00 0A */	li r0, 0xa
/* 80510A80  B0 1A 05 B4 */	sth r0, 0x5b4(r26)
/* 80510A84  48 00 00 68 */	b lbl_80510AEC
lbl_80510A88:
/* 80510A88  38 00 00 03 */	li r0, 3
/* 80510A8C  B0 1A 09 72 */	sth r0, 0x972(r26)
/* 80510A90  38 00 FF F6 */	li r0, -10
/* 80510A94  B0 1A 05 B4 */	sth r0, 0x5b4(r26)
/* 80510A98  38 00 00 3C */	li r0, 0x3c
/* 80510A9C  B0 1A 09 90 */	sth r0, 0x990(r26)
/* 80510AA0  48 00 00 4C */	b lbl_80510AEC
lbl_80510AA4:
/* 80510AA4  2C 00 00 02 */	cmpwi r0, 2
/* 80510AA8  40 82 00 44 */	bne lbl_80510AEC
/* 80510AAC  38 00 00 05 */	li r0, 5
/* 80510AB0  B0 1A 05 B4 */	sth r0, 0x5b4(r26)
/* 80510AB4  7F 43 D3 78 */	mr r3, r26
/* 80510AB8  38 80 00 1D */	li r4, 0x1d
/* 80510ABC  C0 3F 00 BC */	lfs f1, 0xbc(r31)
/* 80510AC0  38 A0 00 02 */	li r5, 2
/* 80510AC4  C0 5F 00 FC */	lfs f2, 0xfc(r31)
/* 80510AC8  4B FF 41 0D */	bl anm_init__FP10e_rd_classifUcf
/* 80510ACC  C0 3F 00 58 */	lfs f1, 0x58(r31)
/* 80510AD0  4B D5 6E 85 */	bl cM_rndF__Ff
/* 80510AD4  C0 1F 00 CC */	lfs f0, 0xcc(r31)
/* 80510AD8  EC 00 08 2A */	fadds f0, f0, f1
/* 80510ADC  FC 00 00 1E */	fctiwz f0, f0
/* 80510AE0  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80510AE4  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80510AE8  B0 1A 09 90 */	sth r0, 0x990(r26)
lbl_80510AEC:
/* 80510AEC  C0 3A 09 80 */	lfs f1, 0x980(r26)
/* 80510AF0  C0 1F 01 54 */	lfs f0, 0x154(r31)
/* 80510AF4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80510AF8  4C 41 13 82 */	cror 2, 1, 2
/* 80510AFC  40 82 00 18 */	bne lbl_80510B14
/* 80510B00  38 00 00 18 */	li r0, 0x18
/* 80510B04  B0 1A 09 72 */	sth r0, 0x972(r26)
/* 80510B08  38 00 00 00 */	li r0, 0
/* 80510B0C  B0 1A 05 B4 */	sth r0, 0x5b4(r26)
/* 80510B10  B0 1A 09 90 */	sth r0, 0x990(r26)
lbl_80510B14:
/* 80510B14  E3 E1 00 48 */	psq_l f31, 72(r1), 0, 0 /* qr0 */
/* 80510B18  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 80510B1C  39 61 00 40 */	addi r11, r1, 0x40
/* 80510B20  4B E5 16 F9 */	bl _restgpr_25
/* 80510B24  80 01 00 54 */	lwz r0, 0x54(r1)
/* 80510B28  7C 08 03 A6 */	mtlr r0
/* 80510B2C  38 21 00 50 */	addi r1, r1, 0x50
/* 80510B30  4E 80 00 20 */	blr 
