lbl_8068039C:
/* 8068039C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 806803A0  7C 08 02 A6 */	mflr r0
/* 806803A4  90 01 00 44 */	stw r0, 0x44(r1)
/* 806803A8  39 61 00 40 */	addi r11, r1, 0x40
/* 806803AC  4B CE 1E 31 */	bl _savegpr_29
/* 806803B0  7C 7E 1B 78 */	mr r30, r3
/* 806803B4  3C 80 80 68 */	lis r4, lit_3947@ha /* 0x806823BC@ha */
/* 806803B8  3B E4 23 BC */	addi r31, r4, lit_3947@l /* 0x806823BC@l */
/* 806803BC  A8 03 06 74 */	lha r0, 0x674(r3)
/* 806803C0  2C 00 00 02 */	cmpwi r0, 2
/* 806803C4  41 82 01 20 */	beq lbl_806804E4
/* 806803C8  40 80 00 14 */	bge lbl_806803DC
/* 806803CC  2C 00 00 00 */	cmpwi r0, 0
/* 806803D0  41 82 00 18 */	beq lbl_806803E8
/* 806803D4  40 80 00 30 */	bge lbl_80680404
/* 806803D8  48 00 02 9C */	b lbl_80680674
lbl_806803DC:
/* 806803DC  2C 00 00 04 */	cmpwi r0, 4
/* 806803E0  40 80 02 94 */	bge lbl_80680674
/* 806803E4  48 00 01 68 */	b lbl_8068054C
lbl_806803E8:
/* 806803E8  38 80 00 06 */	li r4, 6
/* 806803EC  C0 3F 00 60 */	lfs f1, 0x60(r31)
/* 806803F0  38 A0 00 02 */	li r5, 2
/* 806803F4  C0 5F 00 08 */	lfs f2, 8(r31)
/* 806803F8  4B FF E9 99 */	bl anm_init__FP10e_ba_classifUcf
/* 806803FC  38 00 00 01 */	li r0, 1
/* 80680400  B0 1E 06 74 */	sth r0, 0x674(r30)
lbl_80680404:
/* 80680404  A8 1E 06 70 */	lha r0, 0x670(r30)
/* 80680408  54 00 06 FF */	clrlwi. r0, r0, 0x1b
/* 8068040C  40 82 00 40 */	bne lbl_8068044C
/* 80680410  C0 3F 00 08 */	lfs f1, 8(r31)
/* 80680414  4B BE 75 41 */	bl cM_rndF__Ff
/* 80680418  C0 1F 00 5C */	lfs f0, 0x5c(r31)
/* 8068041C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80680420  40 80 00 2C */	bge lbl_8068044C
/* 80680424  3C 60 00 07 */	lis r3, 0x0007 /* 0x000700B3@ha */
/* 80680428  38 03 00 B3 */	addi r0, r3, 0x00B3 /* 0x000700B3@l */
/* 8068042C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80680430  38 7E 05 C8 */	addi r3, r30, 0x5c8
/* 80680434  38 81 00 0C */	addi r4, r1, 0xc
/* 80680438  38 A0 FF FF */	li r5, -1
/* 8068043C  81 9E 05 C8 */	lwz r12, 0x5c8(r30)
/* 80680440  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80680444  7D 89 03 A6 */	mtctr r12
/* 80680448  4E 80 04 21 */	bctrl 
lbl_8068044C:
/* 8068044C  88 7E 05 BD */	lbz r3, 0x5bd(r30)
/* 80680450  88 1E 05 BE */	lbz r0, 0x5be(r30)
/* 80680454  7C 03 02 14 */	add r0, r3, r0
/* 80680458  98 1E 05 BD */	stb r0, 0x5bd(r30)
/* 8068045C  88 BE 05 BD */	lbz r5, 0x5bd(r30)
/* 80680460  7C A3 07 74 */	extsb r3, r5
/* 80680464  80 9E 05 C0 */	lwz r4, 0x5c0(r30)
/* 80680468  A0 04 00 00 */	lhz r0, 0(r4)
/* 8068046C  7C 00 07 74 */	extsb r0, r0
/* 80680470  7C 03 00 00 */	cmpw r3, r0
/* 80680474  41 80 00 5C */	blt lbl_806804D0
/* 80680478  88 04 00 05 */	lbz r0, 5(r4)
/* 8068047C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80680480  41 82 00 10 */	beq lbl_80680490
/* 80680484  38 00 00 00 */	li r0, 0
/* 80680488  98 1E 05 BD */	stb r0, 0x5bd(r30)
/* 8068048C  48 00 00 1C */	b lbl_806804A8
lbl_80680490:
/* 80680490  38 00 FF FF */	li r0, -1
/* 80680494  98 1E 05 BE */	stb r0, 0x5be(r30)
/* 80680498  80 7E 05 C0 */	lwz r3, 0x5c0(r30)
/* 8068049C  A0 63 00 00 */	lhz r3, 0(r3)
/* 806804A0  38 03 FF FE */	addi r0, r3, -2
/* 806804A4  98 1E 05 BD */	stb r0, 0x5bd(r30)
lbl_806804A8:
/* 806804A8  80 7E 05 C0 */	lwz r3, 0x5c0(r30)
/* 806804AC  A0 63 00 02 */	lhz r3, 2(r3)
/* 806804B0  3C 03 00 00 */	addis r0, r3, 0
/* 806804B4  28 00 FF FF */	cmplwi r0, 0xffff
/* 806804B8  41 82 00 2C */	beq lbl_806804E4
/* 806804BC  88 1E 04 E2 */	lbz r0, 0x4e2(r30)
/* 806804C0  7C 04 07 74 */	extsb r4, r0
/* 806804C4  4B 9D 13 29 */	bl dPath_GetRoomPath__Fii
/* 806804C8  90 7E 05 C0 */	stw r3, 0x5c0(r30)
/* 806804CC  48 00 00 18 */	b lbl_806804E4
lbl_806804D0:
/* 806804D0  7C A0 07 75 */	extsb. r0, r5
/* 806804D4  40 80 00 10 */	bge lbl_806804E4
/* 806804D8  38 00 00 01 */	li r0, 1
/* 806804DC  98 1E 05 BE */	stb r0, 0x5be(r30)
/* 806804E0  98 1E 05 BD */	stb r0, 0x5bd(r30)
lbl_806804E4:
/* 806804E4  38 00 00 03 */	li r0, 3
/* 806804E8  B0 1E 06 74 */	sth r0, 0x674(r30)
/* 806804EC  80 7E 05 C0 */	lwz r3, 0x5c0(r30)
/* 806804F0  83 A3 00 08 */	lwz r29, 8(r3)
/* 806804F4  88 1E 05 BD */	lbz r0, 0x5bd(r30)
/* 806804F8  7C 00 07 74 */	extsb r0, r0
/* 806804FC  54 00 20 36 */	slwi r0, r0, 4
/* 80680500  7F BD 02 14 */	add r29, r29, r0
/* 80680504  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80680508  D0 1E 06 90 */	stfs f0, 0x690(r30)
/* 8068050C  C0 3F 00 74 */	lfs f1, 0x74(r31)
/* 80680510  4B BE 74 7D */	bl cM_rndFX__Ff
/* 80680514  C0 1D 00 04 */	lfs f0, 4(r29)
/* 80680518  EC 00 08 2A */	fadds f0, f0, f1
/* 8068051C  D0 1E 06 78 */	stfs f0, 0x678(r30)
/* 80680520  C0 3F 00 74 */	lfs f1, 0x74(r31)
/* 80680524  4B BE 74 69 */	bl cM_rndFX__Ff
/* 80680528  C0 1D 00 08 */	lfs f0, 8(r29)
/* 8068052C  EC 00 08 2A */	fadds f0, f0, f1
/* 80680530  D0 1E 06 7C */	stfs f0, 0x67c(r30)
/* 80680534  C0 3F 00 74 */	lfs f1, 0x74(r31)
/* 80680538  4B BE 74 55 */	bl cM_rndFX__Ff
/* 8068053C  C0 1D 00 0C */	lfs f0, 0xc(r29)
/* 80680540  EC 00 08 2A */	fadds f0, f0, f1
/* 80680544  D0 1E 06 80 */	stfs f0, 0x680(r30)
/* 80680548  48 00 01 2C */	b lbl_80680674
lbl_8068054C:
/* 8068054C  38 61 00 10 */	addi r3, r1, 0x10
/* 80680550  38 9E 06 78 */	addi r4, r30, 0x678
/* 80680554  38 BE 04 D0 */	addi r5, r30, 0x4d0
/* 80680558  4B BE 65 DD */	bl __mi__4cXyzCFRC3Vec
/* 8068055C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80680560  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80680564  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80680568  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8068056C  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80680570  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80680574  38 61 00 1C */	addi r3, r1, 0x1c
/* 80680578  4B CC 6B C1 */	bl PSVECSquareMag
/* 8068057C  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80680580  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80680584  40 81 00 58 */	ble lbl_806805DC
/* 80680588  FC 00 08 34 */	frsqrte f0, f1
/* 8068058C  C8 9F 00 10 */	lfd f4, 0x10(r31)
/* 80680590  FC 44 00 32 */	fmul f2, f4, f0
/* 80680594  C8 7F 00 18 */	lfd f3, 0x18(r31)
/* 80680598  FC 00 00 32 */	fmul f0, f0, f0
/* 8068059C  FC 01 00 32 */	fmul f0, f1, f0
/* 806805A0  FC 03 00 28 */	fsub f0, f3, f0
/* 806805A4  FC 02 00 32 */	fmul f0, f2, f0
/* 806805A8  FC 44 00 32 */	fmul f2, f4, f0
/* 806805AC  FC 00 00 32 */	fmul f0, f0, f0
/* 806805B0  FC 01 00 32 */	fmul f0, f1, f0
/* 806805B4  FC 03 00 28 */	fsub f0, f3, f0
/* 806805B8  FC 02 00 32 */	fmul f0, f2, f0
/* 806805BC  FC 44 00 32 */	fmul f2, f4, f0
/* 806805C0  FC 00 00 32 */	fmul f0, f0, f0
/* 806805C4  FC 01 00 32 */	fmul f0, f1, f0
/* 806805C8  FC 03 00 28 */	fsub f0, f3, f0
/* 806805CC  FC 02 00 32 */	fmul f0, f2, f0
/* 806805D0  FC 21 00 32 */	fmul f1, f1, f0
/* 806805D4  FC 20 08 18 */	frsp f1, f1
/* 806805D8  48 00 00 88 */	b lbl_80680660
lbl_806805DC:
/* 806805DC  C8 1F 00 20 */	lfd f0, 0x20(r31)
/* 806805E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806805E4  40 80 00 10 */	bge lbl_806805F4
/* 806805E8  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 806805EC  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 806805F0  48 00 00 70 */	b lbl_80680660
lbl_806805F4:
/* 806805F4  D0 21 00 08 */	stfs f1, 8(r1)
/* 806805F8  80 81 00 08 */	lwz r4, 8(r1)
/* 806805FC  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 80680600  3C 00 7F 80 */	lis r0, 0x7f80
/* 80680604  7C 03 00 00 */	cmpw r3, r0
/* 80680608  41 82 00 14 */	beq lbl_8068061C
/* 8068060C  40 80 00 40 */	bge lbl_8068064C
/* 80680610  2C 03 00 00 */	cmpwi r3, 0
/* 80680614  41 82 00 20 */	beq lbl_80680634
/* 80680618  48 00 00 34 */	b lbl_8068064C
lbl_8068061C:
/* 8068061C  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80680620  41 82 00 0C */	beq lbl_8068062C
/* 80680624  38 00 00 01 */	li r0, 1
/* 80680628  48 00 00 28 */	b lbl_80680650
lbl_8068062C:
/* 8068062C  38 00 00 02 */	li r0, 2
/* 80680630  48 00 00 20 */	b lbl_80680650
lbl_80680634:
/* 80680634  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80680638  41 82 00 0C */	beq lbl_80680644
/* 8068063C  38 00 00 05 */	li r0, 5
/* 80680640  48 00 00 10 */	b lbl_80680650
lbl_80680644:
/* 80680644  38 00 00 03 */	li r0, 3
/* 80680648  48 00 00 08 */	b lbl_80680650
lbl_8068064C:
/* 8068064C  38 00 00 04 */	li r0, 4
lbl_80680650:
/* 80680650  2C 00 00 01 */	cmpwi r0, 1
/* 80680654  40 82 00 0C */	bne lbl_80680660
/* 80680658  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 8068065C  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_80680660:
/* 80680660  C0 1F 00 84 */	lfs f0, 0x84(r31)
/* 80680664  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80680668  40 80 00 0C */	bge lbl_80680674
/* 8068066C  38 00 00 01 */	li r0, 1
/* 80680670  B0 1E 06 74 */	sth r0, 0x674(r30)
lbl_80680674:
/* 80680674  3C 60 80 68 */	lis r3, l_HIO@ha /* 0x80682648@ha */
/* 80680678  38 63 26 48 */	addi r3, r3, l_HIO@l /* 0x80682648@l */
/* 8068067C  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 80680680  38 7E 05 2C */	addi r3, r30, 0x52c
/* 80680684  C0 5F 00 08 */	lfs f2, 8(r31)
/* 80680688  C0 1F 00 64 */	lfs f0, 0x64(r31)
/* 8068068C  EC 60 00 72 */	fmuls f3, f0, f1
/* 80680690  4B BE F3 AD */	bl cLib_addCalc2__FPffff
/* 80680694  7F C3 F3 78 */	mr r3, r30
/* 80680698  4B FF EE AD */	bl fly_move__FP10e_ba_class
/* 8068069C  39 61 00 40 */	addi r11, r1, 0x40
/* 806806A0  4B CE 1B 89 */	bl _restgpr_29
/* 806806A4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 806806A8  7C 08 03 A6 */	mtlr r0
/* 806806AC  38 21 00 40 */	addi r1, r1, 0x40
/* 806806B0  4E 80 00 20 */	blr 
