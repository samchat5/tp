lbl_804990DC:
/* 804990DC  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 804990E0  7C 08 02 A6 */	mflr r0
/* 804990E4  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 804990E8  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 804990EC  F3 E1 00 98 */	psq_st f31, 152(r1), 0, 0 /* qr0 */
/* 804990F0  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 804990F4  F3 C1 00 88 */	psq_st f30, 136(r1), 0, 0 /* qr0 */
/* 804990F8  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 804990FC  F3 A1 00 78 */	psq_st f29, 120(r1), 0, 0 /* qr0 */
/* 80499100  39 61 00 70 */	addi r11, r1, 0x70
/* 80499104  4B EC 90 C9 */	bl _savegpr_25
/* 80499108  7C 7A 1B 78 */	mr r26, r3
/* 8049910C  3C 60 80 4A */	lis r3, lit_3627@ha /* 0x80499A6C@ha */
/* 80499110  3B C3 9A 6C */	addi r30, r3, lit_3627@l /* 0x80499A6C@l */
/* 80499114  3C 60 80 43 */	lis r3, g_env_light@ha /* 0x8042CA54@ha */
/* 80499118  3B E3 CA 54 */	addi r31, r3, g_env_light@l /* 0x8042CA54@l */
/* 8049911C  83 7F 0E 74 */	lwz r27, 0xe74(r31)
/* 80499120  A9 5F 10 CC */	lha r10, 0x10cc(r31)
/* 80499124  A9 3F 10 CA */	lha r9, 0x10ca(r31)
/* 80499128  A9 1F 10 C8 */	lha r8, 0x10c8(r31)
/* 8049912C  A8 FF 10 C4 */	lha r7, 0x10c4(r31)
/* 80499130  A8 DF 10 C2 */	lha r6, 0x10c2(r31)
/* 80499134  A8 BF 10 C0 */	lha r5, 0x10c0(r31)
/* 80499138  A8 9F 10 E4 */	lha r4, 0x10e4(r31)
/* 8049913C  A8 7F 10 E0 */	lha r3, 0x10e0(r31)
/* 80499140  A8 1F 10 E2 */	lha r0, 0x10e2(r31)
/* 80499144  7C 00 22 14 */	add r0, r0, r4
/* 80499148  7C 00 2A 14 */	add r0, r0, r5
/* 8049914C  7C 00 32 14 */	add r0, r0, r6
/* 80499150  7C 00 3A 14 */	add r0, r0, r7
/* 80499154  7C 00 42 14 */	add r0, r0, r8
/* 80499158  7C 00 4A 14 */	add r0, r0, r9
/* 8049915C  7C 00 52 14 */	add r0, r0, r10
/* 80499160  7C 03 02 15 */	add. r0, r3, r0
/* 80499164  40 82 00 0C */	bne lbl_80499170
/* 80499168  38 60 00 01 */	li r3, 1
/* 8049916C  48 00 06 4C */	b lbl_804997B8
lbl_80499170:
/* 80499170  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80499174  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80499178  83 83 5D 74 */	lwz r28, 0x5d74(r3)
/* 8049917C  4B BC 19 65 */	bl dKyw_get_wind_vec__Fv
/* 80499180  7C 79 1B 78 */	mr r25, r3
/* 80499184  4B BC 19 6D */	bl dKyw_get_wind_pow__Fv
/* 80499188  FF E0 08 90 */	fmr f31, f1
/* 8049918C  C0 19 00 00 */	lfs f0, 0(r25)
/* 80499190  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80499194  C0 19 00 04 */	lfs f0, 4(r25)
/* 80499198  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8049919C  C0 19 00 08 */	lfs f0, 8(r25)
/* 804991A0  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 804991A4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 804991A8  3B 23 61 C0 */	addi r25, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 804991AC  38 79 4E 20 */	addi r3, r25, 0x4e20
/* 804991B0  81 99 4E 20 */	lwz r12, 0x4e20(r25)
/* 804991B4  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 804991B8  7D 89 03 A6 */	mtctr r12
/* 804991BC  4E 80 04 21 */	bctrl 
/* 804991C0  C0 1C 00 D8 */	lfs f0, 0xd8(r28)
/* 804991C4  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 804991C8  C0 1C 00 DC */	lfs f0, 0xdc(r28)
/* 804991CC  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 804991D0  C0 1C 00 E0 */	lfs f0, 0xe0(r28)
/* 804991D4  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 804991D8  C0 1C 00 E4 */	lfs f0, 0xe4(r28)
/* 804991DC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 804991E0  C0 1C 00 E8 */	lfs f0, 0xe8(r28)
/* 804991E4  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 804991E8  C0 1C 00 EC */	lfs f0, 0xec(r28)
/* 804991EC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 804991F0  C0 1E 00 04 */	lfs f0, 4(r30)
/* 804991F4  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 804991F8  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 804991FC  38 61 00 38 */	addi r3, r1, 0x38
/* 80499200  38 81 00 2C */	addi r4, r1, 0x2c
/* 80499204  38 A1 00 20 */	addi r5, r1, 0x20
/* 80499208  4B BC 25 59 */	bl dKyr_get_vectle_calc__FP4cXyzP4cXyzP4cXyz
/* 8049920C  C0 3E 00 04 */	lfs f1, 4(r30)
/* 80499210  FC 40 08 90 */	fmr f2, f1
/* 80499214  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80499218  FC 60 00 50 */	fneg f3, f0
/* 8049921C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80499220  FC 80 00 50 */	fneg f4, f0
/* 80499224  C0 A1 00 20 */	lfs f5, 0x20(r1)
/* 80499228  C0 C1 00 28 */	lfs f6, 0x28(r1)
/* 8049922C  4B DC F6 69 */	bl cM3d_VectorProduct2d__Fffffff
/* 80499230  C0 1E 00 38 */	lfs f0, 0x38(r30)
/* 80499234  EF C0 00 72 */	fmuls f30, f0, f1
/* 80499238  EF BE 07 F2 */	fmuls f29, f30, f31
/* 8049923C  38 79 4E 00 */	addi r3, r25, 0x4e00
/* 80499240  3C 80 80 4A */	lis r4, d_a_vrbox2__stringBase0@ha /* 0x80499AC4@ha */
/* 80499244  38 84 9A C4 */	addi r4, r4, d_a_vrbox2__stringBase0@l /* 0x80499AC4@l */
/* 80499248  38 84 00 10 */	addi r4, r4, 0x10
/* 8049924C  4B EC F7 49 */	bl strcmp
/* 80499250  2C 03 00 00 */	cmpwi r3, 0
/* 80499254  40 82 00 14 */	bne lbl_80499268
/* 80499258  4B BC 18 89 */	bl dKyw_get_wind_vec__Fv
/* 8049925C  C0 1E 00 3C */	lfs f0, 0x3c(r30)
/* 80499260  EC 00 F8 2A */	fadds f0, f0, f31
/* 80499264  EF BE 00 32 */	fmuls f29, f30, f0
lbl_80499268:
/* 80499268  80 7A 05 6C */	lwz r3, 0x56c(r26)
/* 8049926C  83 23 00 04 */	lwz r25, 4(r3)
/* 80499270  80 79 00 60 */	lwz r3, 0x60(r25)
/* 80499274  83 83 00 00 */	lwz r28, 0(r3)
/* 80499278  28 1C 00 00 */	cmplwi r28, 0
/* 8049927C  41 82 00 B4 */	beq lbl_80499330
/* 80499280  80 7C 00 24 */	lwz r3, 0x24(r28)
/* 80499284  38 80 00 00 */	li r4, 0
/* 80499288  81 83 00 00 */	lwz r12, 0(r3)
/* 8049928C  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 80499290  7D 89 03 A6 */	mtctr r12
/* 80499294  4E 80 04 21 */	bctrl 
/* 80499298  80 7C 00 28 */	lwz r3, 0x28(r28)
/* 8049929C  38 80 00 00 */	li r4, 0
/* 804992A0  81 83 00 00 */	lwz r12, 0(r3)
/* 804992A4  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 804992A8  7D 89 03 A6 */	mtctr r12
/* 804992AC  4E 80 04 21 */	bctrl 
/* 804992B0  28 03 00 00 */	cmplwi r3, 0
/* 804992B4  41 82 00 2C */	beq lbl_804992E0
/* 804992B8  80 7C 00 28 */	lwz r3, 0x28(r28)
/* 804992BC  38 80 00 00 */	li r4, 0
/* 804992C0  81 83 00 00 */	lwz r12, 0(r3)
/* 804992C4  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 804992C8  7D 89 03 A6 */	mtctr r12
/* 804992CC  4E 80 04 21 */	bctrl 
/* 804992D0  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 804992D4  EC 00 E8 2A */	fadds f0, f0, f29
/* 804992D8  D4 03 00 1C */	stfsu f0, 0x1c(r3)
/* 804992DC  4B FF F7 9D */	bl texScrollCheck__FRf
lbl_804992E0:
/* 804992E0  80 7C 00 28 */	lwz r3, 0x28(r28)
/* 804992E4  38 80 00 01 */	li r4, 1
/* 804992E8  81 83 00 00 */	lwz r12, 0(r3)
/* 804992EC  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 804992F0  7D 89 03 A6 */	mtctr r12
/* 804992F4  4E 80 04 21 */	bctrl 
/* 804992F8  28 03 00 00 */	cmplwi r3, 0
/* 804992FC  41 82 00 34 */	beq lbl_80499330
/* 80499300  80 7C 00 28 */	lwz r3, 0x28(r28)
/* 80499304  38 80 00 01 */	li r4, 1
/* 80499308  81 83 00 00 */	lwz r12, 0(r3)
/* 8049930C  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80499310  7D 89 03 A6 */	mtctr r12
/* 80499314  4E 80 04 21 */	bctrl 
/* 80499318  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8049931C  C0 1E 00 40 */	lfs f0, 0x40(r30)
/* 80499320  EC 00 07 72 */	fmuls f0, f0, f29
/* 80499324  EC 01 00 2A */	fadds f0, f1, f0
/* 80499328  D4 03 00 1C */	stfsu f0, 0x1c(r3)
/* 8049932C  4B FF F7 4D */	bl texScrollCheck__FRf
lbl_80499330:
/* 80499330  80 79 00 60 */	lwz r3, 0x60(r25)
/* 80499334  83 23 00 04 */	lwz r25, 4(r3)
/* 80499338  28 19 00 00 */	cmplwi r25, 0
/* 8049933C  41 82 00 A4 */	beq lbl_804993E0
/* 80499340  80 79 00 28 */	lwz r3, 0x28(r25)
/* 80499344  38 80 00 00 */	li r4, 0
/* 80499348  81 83 00 00 */	lwz r12, 0(r3)
/* 8049934C  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80499350  7D 89 03 A6 */	mtctr r12
/* 80499354  4E 80 04 21 */	bctrl 
/* 80499358  28 03 00 00 */	cmplwi r3, 0
/* 8049935C  41 82 00 34 */	beq lbl_80499390
/* 80499360  80 79 00 28 */	lwz r3, 0x28(r25)
/* 80499364  38 80 00 00 */	li r4, 0
/* 80499368  81 83 00 00 */	lwz r12, 0(r3)
/* 8049936C  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 80499370  7D 89 03 A6 */	mtctr r12
/* 80499374  4E 80 04 21 */	bctrl 
/* 80499378  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 8049937C  C0 1E 00 44 */	lfs f0, 0x44(r30)
/* 80499380  EC 00 07 72 */	fmuls f0, f0, f29
/* 80499384  EC 01 00 2A */	fadds f0, f1, f0
/* 80499388  D4 03 00 1C */	stfsu f0, 0x1c(r3)
/* 8049938C  4B FF F6 ED */	bl texScrollCheck__FRf
lbl_80499390:
/* 80499390  80 79 00 28 */	lwz r3, 0x28(r25)
/* 80499394  38 80 00 01 */	li r4, 1
/* 80499398  81 83 00 00 */	lwz r12, 0(r3)
/* 8049939C  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 804993A0  7D 89 03 A6 */	mtctr r12
/* 804993A4  4E 80 04 21 */	bctrl 
/* 804993A8  28 03 00 00 */	cmplwi r3, 0
/* 804993AC  41 82 00 34 */	beq lbl_804993E0
/* 804993B0  80 79 00 28 */	lwz r3, 0x28(r25)
/* 804993B4  38 80 00 01 */	li r4, 1
/* 804993B8  81 83 00 00 */	lwz r12, 0(r3)
/* 804993BC  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 804993C0  7D 89 03 A6 */	mtctr r12
/* 804993C4  4E 80 04 21 */	bctrl 
/* 804993C8  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 804993CC  C0 1E 00 48 */	lfs f0, 0x48(r30)
/* 804993D0  EC 00 07 72 */	fmuls f0, f0, f29
/* 804993D4  EC 01 00 2A */	fadds f0, f1, f0
/* 804993D8  D4 03 00 1C */	stfsu f0, 0x1c(r3)
/* 804993DC  4B FF F6 9D */	bl texScrollCheck__FRf
lbl_804993E0:
/* 804993E0  80 7A 05 6C */	lwz r3, 0x56c(r26)
/* 804993E4  83 A3 00 04 */	lwz r29, 4(r3)
/* 804993E8  80 7D 00 60 */	lwz r3, 0x60(r29)
/* 804993EC  83 83 00 00 */	lwz r28, 0(r3)
/* 804993F0  28 1C 00 00 */	cmplwi r28, 0
/* 804993F4  41 82 00 BC */	beq lbl_804994B0
/* 804993F8  80 7C 00 24 */	lwz r3, 0x24(r28)
/* 804993FC  38 80 00 00 */	li r4, 0
/* 80499400  81 83 00 00 */	lwz r12, 0(r3)
/* 80499404  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 80499408  7D 89 03 A6 */	mtctr r12
/* 8049940C  4E 80 04 21 */	bctrl 
/* 80499410  7F 83 E3 78 */	mr r3, r28
/* 80499414  81 9C 00 00 */	lwz r12, 0(r28)
/* 80499418  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8049941C  7D 89 03 A6 */	mtctr r12
/* 80499420  4E 80 04 21 */	bctrl 
/* 80499424  3C 60 80 43 */	lis r3, g_env_light@ha /* 0x8042CA54@ha */
/* 80499428  3B 23 CA 54 */	addi r25, r3, g_env_light@l /* 0x8042CA54@l */
/* 8049942C  A8 19 10 D0 */	lha r0, 0x10d0(r25)
/* 80499430  98 01 00 08 */	stb r0, 8(r1)
/* 80499434  A8 19 10 D2 */	lha r0, 0x10d2(r25)
/* 80499438  98 01 00 09 */	stb r0, 9(r1)
/* 8049943C  A8 19 10 D4 */	lha r0, 0x10d4(r25)
/* 80499440  98 01 00 0A */	stb r0, 0xa(r1)
/* 80499444  A8 19 10 CE */	lha r0, 0x10ce(r25)
/* 80499448  98 01 00 0B */	stb r0, 0xb(r1)
/* 8049944C  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 80499450  38 80 00 00 */	li r4, 0
/* 80499454  38 A1 00 08 */	addi r5, r1, 8
/* 80499458  81 83 00 00 */	lwz r12, 0(r3)
/* 8049945C  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 80499460  7D 89 03 A6 */	mtctr r12
/* 80499464  4E 80 04 21 */	bctrl 
/* 80499468  3C 60 80 43 */	lis r3, g_env_light@ha /* 0x8042CA54@ha */
/* 8049946C  38 63 CA 54 */	addi r3, r3, g_env_light@l /* 0x8042CA54@l */
/* 80499470  A8 03 10 D8 */	lha r0, 0x10d8(r3)
/* 80499474  B0 01 00 0C */	sth r0, 0xc(r1)
/* 80499478  A8 03 10 DA */	lha r0, 0x10da(r3)
/* 8049947C  B0 01 00 0E */	sth r0, 0xe(r1)
/* 80499480  A8 03 10 DC */	lha r0, 0x10dc(r3)
/* 80499484  B0 01 00 10 */	sth r0, 0x10(r1)
/* 80499488  A8 19 10 CE */	lha r0, 0x10ce(r25)
/* 8049948C  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80499490  B0 01 00 12 */	sth r0, 0x12(r1)
/* 80499494  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 80499498  38 80 00 00 */	li r4, 0
/* 8049949C  38 A1 00 0C */	addi r5, r1, 0xc
/* 804994A0  81 83 00 00 */	lwz r12, 0(r3)
/* 804994A4  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 804994A8  7D 89 03 A6 */	mtctr r12
/* 804994AC  4E 80 04 21 */	bctrl 
lbl_804994B0:
/* 804994B0  80 7D 00 60 */	lwz r3, 0x60(r29)
/* 804994B4  83 23 00 04 */	lwz r25, 4(r3)
/* 804994B8  28 19 00 00 */	cmplwi r25, 0
/* 804994BC  41 82 00 B8 */	beq lbl_80499574
/* 804994C0  80 79 00 24 */	lwz r3, 0x24(r25)
/* 804994C4  38 80 00 00 */	li r4, 0
/* 804994C8  81 83 00 00 */	lwz r12, 0(r3)
/* 804994CC  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 804994D0  7D 89 03 A6 */	mtctr r12
/* 804994D4  4E 80 04 21 */	bctrl 
/* 804994D8  7F 23 CB 78 */	mr r3, r25
/* 804994DC  81 99 00 00 */	lwz r12, 0(r25)
/* 804994E0  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 804994E4  7D 89 03 A6 */	mtctr r12
/* 804994E8  4E 80 04 21 */	bctrl 
/* 804994EC  3C 60 80 43 */	lis r3, g_env_light@ha /* 0x8042CA54@ha */
/* 804994F0  3B 83 CA 54 */	addi r28, r3, g_env_light@l /* 0x8042CA54@l */
/* 804994F4  A8 1C 10 D0 */	lha r0, 0x10d0(r28)
/* 804994F8  98 01 00 08 */	stb r0, 8(r1)
/* 804994FC  A8 1C 10 D2 */	lha r0, 0x10d2(r28)
/* 80499500  98 01 00 09 */	stb r0, 9(r1)
/* 80499504  A8 1C 10 D4 */	lha r0, 0x10d4(r28)
/* 80499508  98 01 00 0A */	stb r0, 0xa(r1)
/* 8049950C  A8 1C 10 CE */	lha r0, 0x10ce(r28)
/* 80499510  98 01 00 0B */	stb r0, 0xb(r1)
/* 80499514  80 79 00 2C */	lwz r3, 0x2c(r25)
/* 80499518  38 80 00 00 */	li r4, 0
/* 8049951C  38 A1 00 08 */	addi r5, r1, 8
/* 80499520  81 83 00 00 */	lwz r12, 0(r3)
/* 80499524  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 80499528  7D 89 03 A6 */	mtctr r12
/* 8049952C  4E 80 04 21 */	bctrl 
/* 80499530  3C 60 80 43 */	lis r3, g_env_light@ha /* 0x8042CA54@ha */
/* 80499534  38 63 CA 54 */	addi r3, r3, g_env_light@l /* 0x8042CA54@l */
/* 80499538  A8 03 10 D8 */	lha r0, 0x10d8(r3)
/* 8049953C  B0 01 00 0C */	sth r0, 0xc(r1)
/* 80499540  A8 03 10 DA */	lha r0, 0x10da(r3)
/* 80499544  B0 01 00 0E */	sth r0, 0xe(r1)
/* 80499548  A8 03 10 DC */	lha r0, 0x10dc(r3)
/* 8049954C  B0 01 00 10 */	sth r0, 0x10(r1)
/* 80499550  A8 1C 10 CE */	lha r0, 0x10ce(r28)
/* 80499554  B0 01 00 12 */	sth r0, 0x12(r1)
/* 80499558  80 79 00 2C */	lwz r3, 0x2c(r25)
/* 8049955C  38 80 00 00 */	li r4, 0
/* 80499560  38 A1 00 0C */	addi r5, r1, 0xc
/* 80499564  81 83 00 00 */	lwz r12, 0(r3)
/* 80499568  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 8049956C  7D 89 03 A6 */	mtctr r12
/* 80499570  4E 80 04 21 */	bctrl 
lbl_80499574:
/* 80499574  80 7A 05 98 */	lwz r3, 0x598(r26)
/* 80499578  80 63 00 04 */	lwz r3, 4(r3)
/* 8049957C  80 63 00 60 */	lwz r3, 0x60(r3)
/* 80499580  83 23 00 00 */	lwz r25, 0(r3)
/* 80499584  28 19 00 00 */	cmplwi r25, 0
/* 80499588  41 82 00 74 */	beq lbl_804995FC
/* 8049958C  80 79 00 24 */	lwz r3, 0x24(r25)
/* 80499590  38 80 00 00 */	li r4, 0
/* 80499594  81 83 00 00 */	lwz r12, 0(r3)
/* 80499598  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8049959C  7D 89 03 A6 */	mtctr r12
/* 804995A0  4E 80 04 21 */	bctrl 
/* 804995A4  7F 23 CB 78 */	mr r3, r25
/* 804995A8  81 99 00 00 */	lwz r12, 0(r25)
/* 804995AC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 804995B0  7D 89 03 A6 */	mtctr r12
/* 804995B4  4E 80 04 21 */	bctrl 
/* 804995B8  A8 1F 10 E0 */	lha r0, 0x10e0(r31)
/* 804995BC  B0 01 00 0C */	sth r0, 0xc(r1)
/* 804995C0  A8 1F 10 E2 */	lha r0, 0x10e2(r31)
/* 804995C4  B0 01 00 0E */	sth r0, 0xe(r1)
/* 804995C8  A8 1F 10 E4 */	lha r0, 0x10e4(r31)
/* 804995CC  B0 01 00 10 */	sth r0, 0x10(r1)
/* 804995D0  3C 60 80 43 */	lis r3, g_env_light@ha /* 0x8042CA54@ha */
/* 804995D4  38 63 CA 54 */	addi r3, r3, g_env_light@l /* 0x8042CA54@l */
/* 804995D8  A8 03 10 E6 */	lha r0, 0x10e6(r3)
/* 804995DC  B0 01 00 12 */	sth r0, 0x12(r1)
/* 804995E0  80 79 00 2C */	lwz r3, 0x2c(r25)
/* 804995E4  38 80 00 00 */	li r4, 0
/* 804995E8  38 A1 00 0C */	addi r5, r1, 0xc
/* 804995EC  81 83 00 00 */	lwz r12, 0(r3)
/* 804995F0  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 804995F4  7D 89 03 A6 */	mtctr r12
/* 804995F8  4E 80 04 21 */	bctrl 
lbl_804995FC:
/* 804995FC  28 1B 00 00 */	cmplwi r27, 0
/* 80499600  41 82 01 B4 */	beq lbl_804997B4
/* 80499604  80 7A 05 74 */	lwz r3, 0x574(r26)
/* 80499608  83 83 00 04 */	lwz r28, 4(r3)
/* 8049960C  3B A0 00 00 */	li r29, 0
/* 80499610  3C 60 80 43 */	lis r3, g_env_light@ha /* 0x8042CA54@ha */
/* 80499614  3B 43 CA 54 */	addi r26, r3, g_env_light@l /* 0x8042CA54@l */
lbl_80499618:
/* 80499618  80 7C 00 60 */	lwz r3, 0x60(r28)
/* 8049961C  57 A0 13 BA */	rlwinm r0, r29, 2, 0xe, 0x1d
/* 80499620  7F 23 00 2E */	lwzx r25, r3, r0
/* 80499624  28 19 00 00 */	cmplwi r25, 0
/* 80499628  41 82 01 80 */	beq lbl_804997A8
/* 8049962C  80 79 00 24 */	lwz r3, 0x24(r25)
/* 80499630  38 80 00 00 */	li r4, 0
/* 80499634  81 83 00 00 */	lwz r12, 0(r3)
/* 80499638  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 8049963C  7D 89 03 A6 */	mtctr r12
/* 80499640  4E 80 04 21 */	bctrl 
/* 80499644  7F 23 CB 78 */	mr r3, r25
/* 80499648  81 99 00 00 */	lwz r12, 0(r25)
/* 8049964C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 80499650  7D 89 03 A6 */	mtctr r12
/* 80499654  4E 80 04 21 */	bctrl 
/* 80499658  88 1B 00 70 */	lbz r0, 0x70(r27)
/* 8049965C  B0 01 00 0C */	sth r0, 0xc(r1)
/* 80499660  88 1B 00 71 */	lbz r0, 0x71(r27)
/* 80499664  B0 01 00 0E */	sth r0, 0xe(r1)
/* 80499668  88 1B 00 72 */	lbz r0, 0x72(r27)
/* 8049966C  B0 01 00 10 */	sth r0, 0x10(r1)
/* 80499670  88 1B 00 74 */	lbz r0, 0x74(r27)
/* 80499674  98 01 00 08 */	stb r0, 8(r1)
/* 80499678  88 1B 00 75 */	lbz r0, 0x75(r27)
/* 8049967C  98 01 00 09 */	stb r0, 9(r1)
/* 80499680  88 1B 00 76 */	lbz r0, 0x76(r27)
/* 80499684  98 01 00 0A */	stb r0, 0xa(r1)
/* 80499688  88 1B 00 77 */	lbz r0, 0x77(r27)
/* 8049968C  98 01 00 0B */	stb r0, 0xb(r1)
/* 80499690  2C 1D 00 01 */	cmpwi r29, 1
/* 80499694  40 82 00 80 */	bne lbl_80499714
/* 80499698  C0 3A 12 44 */	lfs f1, 0x1244(r26)
/* 8049969C  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 804996A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804996A4  41 81 00 10 */	bgt lbl_804996B4
/* 804996A8  C0 1E 00 4C */	lfs f0, 0x4c(r30)
/* 804996AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 804996B0  40 80 00 20 */	bge lbl_804996D0
lbl_804996B4:
/* 804996B4  38 7B 00 64 */	addi r3, r27, 0x64
/* 804996B8  C0 3E 00 00 */	lfs f1, 0(r30)
/* 804996BC  C0 5E 00 20 */	lfs f2, 0x20(r30)
/* 804996C0  C0 7E 00 50 */	lfs f3, 0x50(r30)
/* 804996C4  C0 9E 00 54 */	lfs f4, 0x54(r30)
/* 804996C8  4B DD 62 B5 */	bl cLib_addCalc__FPfffff
/* 804996CC  48 00 00 1C */	b lbl_804996E8
lbl_804996D0:
/* 804996D0  38 7B 00 64 */	addi r3, r27, 0x64
/* 804996D4  C0 3E 00 04 */	lfs f1, 4(r30)
/* 804996D8  C0 5E 00 20 */	lfs f2, 0x20(r30)
/* 804996DC  C0 7E 00 50 */	lfs f3, 0x50(r30)
/* 804996E0  C0 9E 00 54 */	lfs f4, 0x54(r30)
/* 804996E4  4B DD 62 99 */	bl cLib_addCalc__FPfffff
lbl_804996E8:
/* 804996E8  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 804996EC  C0 1B 00 64 */	lfs f0, 0x64(r27)
/* 804996F0  EC 21 00 32 */	fmuls f1, f1, f0
/* 804996F4  C0 1B 00 60 */	lfs f0, 0x60(r27)
/* 804996F8  EC 01 00 32 */	fmuls f0, f1, f0
/* 804996FC  FC 00 00 1E */	fctiwz f0, f0
/* 80499700  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 80499704  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 80499708  B0 01 00 12 */	sth r0, 0x12(r1)
/* 8049970C  98 01 00 0B */	stb r0, 0xb(r1)
/* 80499710  48 00 00 60 */	b lbl_80499770
lbl_80499714:
/* 80499714  2C 1D 00 02 */	cmpwi r29, 2
/* 80499718  40 82 00 38 */	bne lbl_80499750
/* 8049971C  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 80499720  C0 1B 00 60 */	lfs f0, 0x60(r27)
/* 80499724  EC 41 00 32 */	fmuls f2, f1, f0
/* 80499728  C0 3E 00 00 */	lfs f1, 0(r30)
/* 8049972C  C0 1B 00 64 */	lfs f0, 0x64(r27)
/* 80499730  EC 01 00 28 */	fsubs f0, f1, f0
/* 80499734  EC 02 00 32 */	fmuls f0, f2, f0
/* 80499738  FC 00 00 1E */	fctiwz f0, f0
/* 8049973C  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 80499740  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 80499744  B0 01 00 12 */	sth r0, 0x12(r1)
/* 80499748  98 01 00 0B */	stb r0, 0xb(r1)
/* 8049974C  48 00 00 24 */	b lbl_80499770
lbl_80499750:
/* 80499750  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 80499754  C0 1B 00 60 */	lfs f0, 0x60(r27)
/* 80499758  EC 01 00 32 */	fmuls f0, f1, f0
/* 8049975C  FC 00 00 1E */	fctiwz f0, f0
/* 80499760  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 80499764  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 80499768  B0 01 00 12 */	sth r0, 0x12(r1)
/* 8049976C  98 01 00 0B */	stb r0, 0xb(r1)
lbl_80499770:
/* 80499770  80 79 00 2C */	lwz r3, 0x2c(r25)
/* 80499774  38 80 00 00 */	li r4, 0
/* 80499778  38 A1 00 0C */	addi r5, r1, 0xc
/* 8049977C  81 83 00 00 */	lwz r12, 0(r3)
/* 80499780  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 80499784  7D 89 03 A6 */	mtctr r12
/* 80499788  4E 80 04 21 */	bctrl 
/* 8049978C  80 79 00 2C */	lwz r3, 0x2c(r25)
/* 80499790  38 80 00 00 */	li r4, 0
/* 80499794  38 A1 00 08 */	addi r5, r1, 8
/* 80499798  81 83 00 00 */	lwz r12, 0(r3)
/* 8049979C  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 804997A0  7D 89 03 A6 */	mtctr r12
/* 804997A4  4E 80 04 21 */	bctrl 
lbl_804997A8:
/* 804997A8  3B BD 00 01 */	addi r29, r29, 1
/* 804997AC  2C 1D 00 03 */	cmpwi r29, 3
/* 804997B0  41 80 FE 68 */	blt lbl_80499618
lbl_804997B4:
/* 804997B4  38 60 00 01 */	li r3, 1
lbl_804997B8:
/* 804997B8  E3 E1 00 98 */	psq_l f31, 152(r1), 0, 0 /* qr0 */
/* 804997BC  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 804997C0  E3 C1 00 88 */	psq_l f30, 136(r1), 0, 0 /* qr0 */
/* 804997C4  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 804997C8  E3 A1 00 78 */	psq_l f29, 120(r1), 0, 0 /* qr0 */
/* 804997CC  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 804997D0  39 61 00 70 */	addi r11, r1, 0x70
/* 804997D4  4B EC 8A 45 */	bl _restgpr_25
/* 804997D8  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 804997DC  7C 08 03 A6 */	mtlr r0
/* 804997E0  38 21 00 A0 */	addi r1, r1, 0xa0
/* 804997E4  4E 80 00 20 */	blr 
