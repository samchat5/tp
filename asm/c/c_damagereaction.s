.include "macros.inc"

.section .text, "ax" # 8001817c


/* 8001817C 000150BC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80018180 000150C0  A8 65 00 80 */	lha r3, 0x80(r5)
/* 80018184 000150C4  28 03 00 00 */	cmplwi r3, 0
/* 80018188 000150C8  41 82 01 14 */	beq lbl_8001829C
/* 8001818C 000150CC  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 80018190 000150D0  C0 42 81 A8 */	lfs f2, lbl_80451BA8-_SDA2_BASE_(r2)
/* 80018194 000150D4  C8 22 81 B8 */	lfd f1, lbl_80451BB8-_SDA2_BASE_(r2)
/* 80018198 000150D8  90 61 00 4C */	stw r3, 0x4c(r1)
/* 8001819C 000150DC  3C 00 43 30 */	lis r0, 0x4330
/* 800181A0 000150E0  90 01 00 48 */	stw r0, 0x48(r1)
/* 800181A4 000150E4  C8 01 00 48 */	lfd f0, 0x48(r1)
/* 800181A8 000150E8  EC 00 08 28 */	fsubs f0, f0, f1
/* 800181AC 000150EC  EC 02 00 28 */	fsubs f0, f2, f0
/* 800181B0 000150F0  EC A0 10 24 */	fdivs f5, f0, f2
/* 800181B4 000150F4  C0 02 81 AC */	lfs f0, lbl_80451BAC-_SDA2_BASE_(r2)
/* 800181B8 000150F8  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 800181BC 000150FC  40 80 00 08 */	bge lbl_800181C4
/* 800181C0 00015100  FC A0 00 90 */	fmr f5, f0
lbl_800181C4:
/* 800181C4 00015104  1C 03 00 0C */	mulli r0, r3, 0xc
/* 800181C8 00015108  7C 64 02 14 */	add r3, r4, r0
/* 800181CC 0001510C  E0 23 00 00 */	psq_l f1, 0(r3), 0, qr0
/* 800181D0 00015110  C0 03 00 08 */	lfs f0, 8(r3)
/* 800181D4 00015114  F0 21 00 38 */	psq_st f1, 56(r1), 0, qr0
/* 800181D8 00015118  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 800181DC 0001511C  C0 02 81 B0 */	lfs f0, lbl_80451BB0-_SDA2_BASE_(r2)
/* 800181E0 00015120  EC 60 01 72 */	fmuls f3, f0, f5
/* 800181E4 00015124  E0 01 80 40 */	psq_l f0, 64(r1), 1, qr0
/* 800181E8 00015128  10 21 00 D8 */	ps_muls0 f1, f1, f3
/* 800181EC 0001512C  F0 21 00 38 */	psq_st f1, 56(r1), 0, qr0
/* 800181F0 00015130  10 00 00 D8 */	ps_muls0 f0, f0, f3
/* 800181F4 00015134  F0 01 80 40 */	psq_st f0, 64(r1), 1, qr0
/* 800181F8 00015138  E0 44 00 00 */	psq_l f2, 0(r4), 0, qr0
/* 800181FC 0001513C  C0 04 00 08 */	lfs f0, 8(r4)
/* 80018200 00015140  F0 41 00 2C */	psq_st f2, 44(r1), 0, qr0
/* 80018204 00015144  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80018208 00015148  C0 02 81 B4 */	lfs f0, lbl_80451BB4-_SDA2_BASE_(r2)
/* 8001820C 0001514C  EC 80 01 72 */	fmuls f4, f0, f5
/* 80018210 00015150  E0 01 80 34 */	psq_l f0, 52(r1), 1, qr0
/* 80018214 00015154  10 62 01 18 */	ps_muls0 f3, f2, f4
/* 80018218 00015158  F0 61 00 2C */	psq_st f3, 44(r1), 0, qr0
/* 8001821C 0001515C  10 40 01 18 */	ps_muls0 f2, f0, f4
/* 80018220 00015160  F0 41 80 34 */	psq_st f2, 52(r1), 1, qr0
/* 80018224 00015164  C0 05 00 18 */	lfs f0, 0x18(r5)
/* 80018228 00015168  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8001822C 0001516C  C0 05 00 1C */	lfs f0, 0x1c(r5)
/* 80018230 00015170  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80018234 00015174  C0 05 00 20 */	lfs f0, 0x20(r5)
/* 80018238 00015178  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8001823C 0001517C  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 80018240 00015180  F0 21 00 08 */	psq_st f1, 8(r1), 0, qr0
/* 80018244 00015184  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80018248 00015188  10 21 18 2A */	ps_add f1, f1, f3
/* 8001824C 0001518C  F0 21 00 08 */	psq_st f1, 8(r1), 0, qr0
/* 80018250 00015190  E0 01 80 10 */	psq_l f0, 16(r1), 1, qr0
/* 80018254 00015194  10 00 10 2A */	ps_add f0, f0, f2
/* 80018258 00015198  F0 01 80 10 */	psq_st f0, 16(r1), 1, qr0
/* 8001825C 0001519C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80018260 000151A0  F0 21 00 14 */	psq_st f1, 20(r1), 0, qr0
/* 80018264 000151A4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80018268 000151A8  E0 01 00 20 */	psq_l f0, 32(r1), 0, qr0
/* 8001826C 000151AC  10 00 08 2A */	ps_add f0, f0, f1
/* 80018270 000151B0  F0 01 00 20 */	psq_st f0, 32(r1), 0, qr0
/* 80018274 000151B4  E0 21 80 28 */	psq_l f1, 40(r1), 1, qr0
/* 80018278 000151B8  E0 01 80 1C */	psq_l f0, 28(r1), 1, qr0
/* 8001827C 000151BC  10 01 00 2A */	ps_add f0, f1, f0
/* 80018280 000151C0  F0 01 80 28 */	psq_st f0, 40(r1), 1, qr0
/* 80018284 000151C4  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 80018288 000151C8  D0 05 00 18 */	stfs f0, 0x18(r5)
/* 8001828C 000151CC  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80018290 000151D0  D0 05 00 1C */	stfs f0, 0x1c(r5)
/* 80018294 000151D4  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 80018298 000151D8  D0 05 00 20 */	stfs f0, 0x20(r5)
lbl_8001829C:
/* 8001829C 000151DC  38 21 00 50 */	addi r1, r1, 0x50
/* 800182A0 000151E0  4E 80 00 20 */	blr 
/* 800182A4 000151E4  4E 80 00 20 */	blr 
/* 800182A8 000151E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800182AC 000151EC  7C 08 02 A6 */	mflr r0
/* 800182B0 000151F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800182B4 000151F4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 800182B8 000151F8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 800182BC 000151FC  88 03 4F AD */	lbz r0, 0x4fad(r3)
/* 800182C0 00015200  28 00 00 00 */	cmplwi r0, 0
/* 800182C4 00015204  41 82 00 50 */	beq lbl_80018314
/* 800182C8 00015208  80 63 5D B4 */	lwz r3, 0x5db4(r3)
/* 800182CC 0001520C  48 00 38 49 */	bl fopAcM_getTalkEventPartner
/* 800182D0 00015210  28 03 00 00 */	cmplwi r3, 0
/* 800182D4 00015214  41 82 00 40 */	beq lbl_80018314
/* 800182D8 00015218  A8 03 00 08 */	lha r0, 8(r3)
/* 800182DC 0001521C  2C 00 00 FF */	cmpwi r0, 0xff
/* 800182E0 00015220  41 82 00 2C */	beq lbl_8001830C
/* 800182E4 00015224  2C 00 02 C1 */	cmpwi r0, 0x2c1
/* 800182E8 00015228  41 82 00 24 */	beq lbl_8001830C
/* 800182EC 0001522C  2C 00 02 C4 */	cmpwi r0, 0x2c4
/* 800182F0 00015230  41 82 00 1C */	beq lbl_8001830C
/* 800182F4 00015234  2C 00 00 EC */	cmpwi r0, 0xec
/* 800182F8 00015238  41 82 00 14 */	beq lbl_8001830C
/* 800182FC 0001523C  2C 00 02 C3 */	cmpwi r0, 0x2c3
/* 80018300 00015240  41 82 00 0C */	beq lbl_8001830C
/* 80018304 00015244  2C 00 02 C7 */	cmpwi r0, 0x2c7
/* 80018308 00015248  40 82 00 0C */	bne lbl_80018314
lbl_8001830C:
/* 8001830C 0001524C  38 60 00 01 */	li r3, 1
/* 80018310 00015250  48 00 00 08 */	b lbl_80018318
lbl_80018314:
/* 80018314 00015254  38 60 00 00 */	li r3, 0
lbl_80018318:
/* 80018318 00015258  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001831C 0001525C  7C 08 03 A6 */	mtlr r0
/* 80018320 00015260  38 21 00 10 */	addi r1, r1, 0x10
/* 80018324 00015264  4E 80 00 20 */	blr 
.global JPTraceParticleCallBack4_NS_dtor
JPTraceParticleCallBack4_NS_dtor:
/* 80018328 00015268  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001832C 0001526C  7C 08 02 A6 */	mflr r0
/* 80018330 00015270  90 01 00 14 */	stw r0, 0x14(r1)
/* 80018334 00015274  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80018338 00015278  93 C1 00 08 */	stw r30, 8(r1)
/* 8001833C 0001527C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80018340 00015280  7C 9F 23 78 */	mr r31, r4
/* 80018344 00015284  41 82 00 28 */	beq lbl_8001836C
/* 80018348 00015288  3C 80 80 3A */	lis r4, lbl_803A3568@ha
/* 8001834C 0001528C  38 04 35 68 */	addi r0, r4, lbl_803A3568@l
/* 80018350 00015290  90 1E 00 00 */	stw r0, 0(r30)
/* 80018354 00015294  38 80 00 00 */	li r4, 0
/* 80018358 00015298  48 26 6C 4D */	bl JPAParticleCallBack_NS_dtor
/* 8001835C 0001529C  7F E0 07 35 */	extsh. r0, r31
/* 80018360 000152A0  40 81 00 0C */	ble lbl_8001836C
/* 80018364 000152A4  7F C3 F3 78 */	mr r3, r30
/* 80018368 000152A8  48 2B 69 D5 */	bl __dl__FPv
lbl_8001836C:
/* 8001836C 000152AC  7F C3 F3 78 */	mr r3, r30
/* 80018370 000152B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80018374 000152B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80018378 000152B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001837C 000152BC  7C 08 03 A6 */	mtlr r0
/* 80018380 000152C0  38 21 00 10 */	addi r1, r1, 0x10
/* 80018384 000152C4  4E 80 00 20 */	blr 
/* 80018388 000152C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001838C 000152CC  7C 08 02 A6 */	mflr r0
/* 80018390 000152D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80018394 000152D4  3C 60 80 3A */	lis r3, lbl_803A357C@ha
/* 80018398 000152D8  38 03 35 7C */	addi r0, r3, lbl_803A357C@l
/* 8001839C 000152DC  90 0D 87 24 */	stw r0, lbl_80450CA4-_SDA_BASE_(r13)
/* 800183A0 000152E0  3C 60 80 3A */	lis r3, lbl_803A3568@ha
/* 800183A4 000152E4  38 03 35 68 */	addi r0, r3, lbl_803A3568@l
/* 800183A8 000152E8  90 0D 87 24 */	stw r0, lbl_80450CA4-_SDA_BASE_(r13)
/* 800183AC 000152EC  38 6D 87 24 */	addi r3, r13, lbl_80450CA4-_SDA_BASE_
.global JPTraceParticleCallBack4_NS_dtor
/* 800183B0 000152F0  3C 80 80 02 */	lis r4, JPTraceParticleCallBack4_NS_dtor@ha
.global JPTraceParticleCallBack4_NS_dtor
/* 800183B4 000152F4  38 84 83 28 */	addi r4, r4, JPTraceParticleCallBack4_NS_dtor@l
/* 800183B8 000152F8  3C A0 80 3F */	lis r5, lbl_803F0F40@ha
/* 800183BC 000152FC  38 A5 0F 40 */	addi r5, r5, lbl_803F0F40@l
/* 800183C0 00015300  48 34 98 65 */	bl func_80361C24
/* 800183C4 00015304  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800183C8 00015308  7C 08 03 A6 */	mtlr r0
/* 800183CC 0001530C  38 21 00 10 */	addi r1, r1, 0x10
/* 800183D0 00015310  4E 80 00 20 */	blr 
/* 800183D4 00015314  4E 80 00 20 */	blr 
/* 800183D8 00015318  4E 80 00 20 */	blr 

