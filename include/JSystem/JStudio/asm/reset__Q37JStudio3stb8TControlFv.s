/* 80289404 00286344  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 80289408 00286348  7C 08 02 A6 */	mflr r0
/* 8028940C 0028634C  90 01 00 54 */	stw r0, 0x54(r1)
/* 80289410 00286350  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80289414 00286354  7C 7F 1B 78 */	mr r31, r3
/* 80289418 00286358  38 00 00 00 */	li r0, 0
/* 8028941C 0028635C  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80289420 00286360  38 7F 00 20 */	addi r3, r31, 0x20
/* 80289424 00286364  38 80 00 00 */	li r4, 0
/* 80289428 00286368  4B FF F7 A9 */	bl reset__Q37JStudio3stb7TObjectFPCv
/* 8028942C 0028636C  38 1F 00 14 */	addi r0, r31, 0x14
/* 80289430 00286370  90 01 00 24 */	stw r0, 0x24(r1)
/* 80289434 00286374  90 01 00 20 */	stw r0, 0x20(r1)
/* 80289438 00286378  90 01 00 34 */	stw r0, 0x34(r1)
/* 8028943C 0028637C  90 01 00 30 */	stw r0, 0x30(r1)
/* 80289440 00286380  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 80289444 00286384  90 61 00 1C */	stw r3, 0x1c(r1)
/* 80289448 00286388  90 61 00 18 */	stw r3, 0x18(r1)
/* 8028944C 0028638C  90 61 00 2C */	stw r3, 0x2c(r1)
/* 80289450 00286390  90 61 00 28 */	stw r3, 0x28(r1)
/* 80289454 00286394  90 61 00 38 */	stw r3, 0x38(r1)
/* 80289458 00286398  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8028945C 0028639C  48 00 00 1C */	b lbl_80289478
lbl_80289460:
/* 80289460 002863A0  80 81 00 38 */	lwz r4, 0x38(r1)
/* 80289464 002863A4  38 64 FF F4 */	addi r3, r4, -12
/* 80289468 002863A8  80 04 00 00 */	lwz r0, 0(r4)
/* 8028946C 002863AC  90 01 00 38 */	stw r0, 0x38(r1)
/* 80289470 002863B0  38 80 00 00 */	li r4, 0
/* 80289474 002863B4  4B FF F7 5D */	bl reset__Q37JStudio3stb7TObjectFPCv
lbl_80289478:
/* 80289478 002863B8  80 61 00 3C */	lwz r3, 0x3c(r1)
/* 8028947C 002863BC  90 61 00 14 */	stw r3, 0x14(r1)
/* 80289480 002863C0  80 01 00 38 */	lwz r0, 0x38(r1)
/* 80289484 002863C4  90 01 00 10 */	stw r0, 0x10(r1)
/* 80289488 002863C8  90 61 00 0C */	stw r3, 0xc(r1)
/* 8028948C 002863CC  90 01 00 08 */	stw r0, 8(r1)
/* 80289490 002863D0  7C 00 18 50 */	subf r0, r0, r3
/* 80289494 002863D4  7C 00 00 34 */	cntlzw r0, r0
/* 80289498 002863D8  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 8028949C 002863DC  41 82 FF C4 */	beq lbl_80289460
/* 802894A0 002863E0  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802894A4 002863E4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802894A8 002863E8  7C 08 03 A6 */	mtlr r0
/* 802894AC 002863EC  38 21 00 50 */	addi r1, r1, 0x50
/* 802894B0 002863F0  4E 80 00 20 */	blr 