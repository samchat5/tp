lbl_806591BC:
/* 806591BC  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 806591C0  7C 08 02 A6 */	mflr r0
/* 806591C4  90 01 00 74 */	stw r0, 0x74(r1)
/* 806591C8  39 61 00 70 */	addi r11, r1, 0x70
/* 806591CC  4B D0 90 05 */	bl _savegpr_26
/* 806591D0  7C 7E 1B 78 */	mr r30, r3
/* 806591D4  3C 60 80 66 */	lis r3, cNullVec__6Z2Calc@ha /* 0x80662F58@ha */
/* 806591D8  3B E3 2F 58 */	addi r31, r3, cNullVec__6Z2Calc@l /* 0x80662F58@l */
/* 806591DC  38 7E 08 00 */	addi r3, r30, 0x800
/* 806591E0  4B A2 A6 51 */	bl Move__10dCcD_GSttsFv
/* 806591E4  88 1E 0C A5 */	lbz r0, 0xca5(r30)
/* 806591E8  28 00 00 00 */	cmplwi r0, 0
/* 806591EC  40 82 02 58 */	bne lbl_80659444
/* 806591F0  80 7E 0C 80 */	lwz r3, 0xc80(r30)
/* 806591F4  2C 03 00 00 */	cmpwi r3, 0
/* 806591F8  41 82 00 10 */	beq lbl_80659208
/* 806591FC  38 03 FF FF */	addi r0, r3, -1
/* 80659200  90 1E 0C 80 */	stw r0, 0xc80(r30)
/* 80659204  48 00 02 40 */	b lbl_80659444
lbl_80659208:
/* 80659208  3B 60 00 00 */	li r27, 0
/* 8065920C  3B 40 00 00 */	li r26, 0
/* 80659210  3B A0 00 00 */	li r29, 0
lbl_80659214:
/* 80659214  3B 9D 08 60 */	addi r28, r29, 0x860
/* 80659218  7F 9E E2 14 */	add r28, r30, r28
/* 8065921C  7F 83 E3 78 */	mr r3, r28
/* 80659220  4B A2 B2 41 */	bl ChkTgHit__12dCcD_GObjInfFv
/* 80659224  28 03 00 00 */	cmplwi r3, 0
/* 80659228  41 82 00 14 */	beq lbl_8065923C
/* 8065922C  7F 83 E3 78 */	mr r3, r28
/* 80659230  4B A2 B2 C9 */	bl GetTgHitObj__12dCcD_GObjInfFv
/* 80659234  7C 7B 1B 78 */	mr r27, r3
/* 80659238  48 00 00 14 */	b lbl_8065924C
lbl_8065923C:
/* 8065923C  3B 5A 00 01 */	addi r26, r26, 1
/* 80659240  2C 1A 00 03 */	cmpwi r26, 3
/* 80659244  3B BD 01 38 */	addi r29, r29, 0x138
/* 80659248  41 80 FF CC */	blt lbl_80659214
lbl_8065924C:
/* 8065924C  28 1B 00 00 */	cmplwi r27, 0
/* 80659250  41 82 01 F4 */	beq lbl_80659444
/* 80659254  38 00 00 0A */	li r0, 0xa
/* 80659258  90 1E 0C 80 */	stw r0, 0xc80(r30)
/* 8065925C  80 7F 00 E4 */	lwz r3, 0xe4(r31)
/* 80659260  80 1F 00 E8 */	lwz r0, 0xe8(r31)
/* 80659264  90 61 00 44 */	stw r3, 0x44(r1)
/* 80659268  90 01 00 48 */	stw r0, 0x48(r1)
/* 8065926C  80 1F 00 EC */	lwz r0, 0xec(r31)
/* 80659270  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80659274  7F C3 F3 78 */	mr r3, r30
/* 80659278  38 81 00 44 */	addi r4, r1, 0x44
/* 8065927C  4B FF FE 6D */	bl checkProcess__7daCow_cFM7daCow_cFPCvPv_v
/* 80659280  2C 03 00 00 */	cmpwi r3, 0
/* 80659284  41 82 00 60 */	beq lbl_806592E4
/* 80659288  88 1E 0C 9F */	lbz r0, 0xc9f(r30)
/* 8065928C  28 00 00 08 */	cmplwi r0, 8
/* 80659290  40 82 01 78 */	bne lbl_80659408
/* 80659294  88 1E 0C 61 */	lbz r0, 0xc61(r30)
/* 80659298  28 00 00 00 */	cmplwi r0, 0
/* 8065929C  40 82 01 6C */	bne lbl_80659408
/* 806592A0  80 9B 00 10 */	lwz r4, 0x10(r27)
/* 806592A4  3C 60 00 48 */	lis r3, 0x0048 /* 0x00482022@ha */
/* 806592A8  38 03 20 22 */	addi r0, r3, 0x2022 /* 0x00482022@l */
/* 806592AC  7C 80 00 39 */	and. r0, r4, r0
/* 806592B0  41 82 00 10 */	beq lbl_806592C0
/* 806592B4  38 00 00 96 */	li r0, 0x96
/* 806592B8  90 1E 0C 8C */	stw r0, 0xc8c(r30)
/* 806592BC  48 00 00 10 */	b lbl_806592CC
lbl_806592C0:
/* 806592C0  80 7E 0C 8C */	lwz r3, 0xc8c(r30)
/* 806592C4  38 03 00 3C */	addi r0, r3, 0x3c
/* 806592C8  90 1E 0C 8C */	stw r0, 0xc8c(r30)
lbl_806592CC:
/* 806592CC  80 1E 0C 8C */	lwz r0, 0xc8c(r30)
/* 806592D0  2C 00 00 96 */	cmpwi r0, 0x96
/* 806592D4  41 80 01 34 */	blt lbl_80659408
/* 806592D8  38 00 00 05 */	li r0, 5
/* 806592DC  98 1E 0C 61 */	stb r0, 0xc61(r30)
/* 806592E0  48 00 01 28 */	b lbl_80659408
lbl_806592E4:
/* 806592E4  80 7F 00 F0 */	lwz r3, 0xf0(r31)
/* 806592E8  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 806592EC  90 61 00 38 */	stw r3, 0x38(r1)
/* 806592F0  90 01 00 3C */	stw r0, 0x3c(r1)
/* 806592F4  80 1F 00 F8 */	lwz r0, 0xf8(r31)
/* 806592F8  90 01 00 40 */	stw r0, 0x40(r1)
/* 806592FC  7F C3 F3 78 */	mr r3, r30
/* 80659300  38 81 00 38 */	addi r4, r1, 0x38
/* 80659304  4B FF FD E5 */	bl checkProcess__7daCow_cFM7daCow_cFPCvPv_v
/* 80659308  2C 03 00 00 */	cmpwi r3, 0
/* 8065930C  41 82 00 10 */	beq lbl_8065931C
/* 80659310  38 00 00 C8 */	li r0, 0xc8
/* 80659314  90 1E 0C 98 */	stw r0, 0xc98(r30)
/* 80659318  48 00 00 F0 */	b lbl_80659408
lbl_8065931C:
/* 8065931C  80 9B 00 10 */	lwz r4, 0x10(r27)
/* 80659320  3C 60 00 48 */	lis r3, 0x0048 /* 0x00482022@ha */
/* 80659324  38 03 20 22 */	addi r0, r3, 0x2022 /* 0x00482022@l */
/* 80659328  7C 80 00 39 */	and. r0, r4, r0
/* 8065932C  41 82 00 30 */	beq lbl_8065935C
/* 80659330  80 7F 00 FC */	lwz r3, 0xfc(r31)
/* 80659334  80 1F 01 00 */	lwz r0, 0x100(r31)
/* 80659338  90 61 00 2C */	stw r3, 0x2c(r1)
/* 8065933C  90 01 00 30 */	stw r0, 0x30(r1)
/* 80659340  80 1F 01 04 */	lwz r0, 0x104(r31)
/* 80659344  90 01 00 34 */	stw r0, 0x34(r1)
/* 80659348  7F C3 F3 78 */	mr r3, r30
/* 8065934C  38 81 00 2C */	addi r4, r1, 0x2c
/* 80659350  38 A0 00 00 */	li r5, 0
/* 80659354  4B FF FD C1 */	bl setProcess__7daCow_cFM7daCow_cFPCvPv_vi
/* 80659358  48 00 00 B0 */	b lbl_80659408
lbl_8065935C:
/* 8065935C  80 7E 0C 8C */	lwz r3, 0xc8c(r30)
/* 80659360  38 03 00 3C */	addi r0, r3, 0x3c
/* 80659364  90 1E 0C 8C */	stw r0, 0xc8c(r30)
/* 80659368  80 1E 0C 8C */	lwz r0, 0xc8c(r30)
/* 8065936C  2C 00 00 96 */	cmpwi r0, 0x96
/* 80659370  41 80 00 30 */	blt lbl_806593A0
/* 80659374  80 7F 01 08 */	lwz r3, 0x108(r31)
/* 80659378  80 1F 01 0C */	lwz r0, 0x10c(r31)
/* 8065937C  90 61 00 20 */	stw r3, 0x20(r1)
/* 80659380  90 01 00 24 */	stw r0, 0x24(r1)
/* 80659384  80 1F 01 10 */	lwz r0, 0x110(r31)
/* 80659388  90 01 00 28 */	stw r0, 0x28(r1)
/* 8065938C  7F C3 F3 78 */	mr r3, r30
/* 80659390  38 81 00 20 */	addi r4, r1, 0x20
/* 80659394  38 A0 00 00 */	li r5, 0
/* 80659398  4B FF FD 7D */	bl setProcess__7daCow_cFM7daCow_cFPCvPv_vi
/* 8065939C  48 00 00 6C */	b lbl_80659408
lbl_806593A0:
/* 806593A0  38 00 00 5A */	li r0, 0x5a
/* 806593A4  90 1E 0C 88 */	stw r0, 0xc88(r30)
/* 806593A8  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 806593AC  80 1F 01 18 */	lwz r0, 0x118(r31)
/* 806593B0  90 61 00 14 */	stw r3, 0x14(r1)
/* 806593B4  90 01 00 18 */	stw r0, 0x18(r1)
/* 806593B8  80 1F 01 1C */	lwz r0, 0x11c(r31)
/* 806593BC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 806593C0  7F C3 F3 78 */	mr r3, r30
/* 806593C4  38 81 00 14 */	addi r4, r1, 0x14
/* 806593C8  4B FF FD 21 */	bl checkProcess__7daCow_cFM7daCow_cFPCvPv_v
/* 806593CC  2C 03 00 00 */	cmpwi r3, 0
/* 806593D0  40 82 00 38 */	bne lbl_80659408
/* 806593D4  3C 60 80 66 */	lis r3, lit_3998@ha /* 0x80662DC8@ha */
/* 806593D8  C0 03 2D C8 */	lfs f0, lit_3998@l(r3)  /* 0x80662DC8@l */
/* 806593DC  D0 1E 05 2C */	stfs f0, 0x52c(r30)
/* 806593E0  80 7F 01 20 */	lwz r3, 0x120(r31)
/* 806593E4  80 1F 01 24 */	lwz r0, 0x124(r31)
/* 806593E8  90 61 00 08 */	stw r3, 8(r1)
/* 806593EC  90 01 00 0C */	stw r0, 0xc(r1)
/* 806593F0  80 1F 01 28 */	lwz r0, 0x128(r31)
/* 806593F4  90 01 00 10 */	stw r0, 0x10(r1)
/* 806593F8  7F C3 F3 78 */	mr r3, r30
/* 806593FC  38 81 00 08 */	addi r4, r1, 8
/* 80659400  38 A0 00 00 */	li r5, 0
/* 80659404  4B FF FD 11 */	bl setProcess__7daCow_cFM7daCow_cFPCvPv_vi
lbl_80659408:
/* 80659408  38 7E 08 60 */	addi r3, r30, 0x860
/* 8065940C  81 9E 08 9C */	lwz r12, 0x89c(r30)
/* 80659410  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80659414  7D 89 03 A6 */	mtctr r12
/* 80659418  4E 80 04 21 */	bctrl 
/* 8065941C  38 7E 09 98 */	addi r3, r30, 0x998
/* 80659420  81 9E 09 D4 */	lwz r12, 0x9d4(r30)
/* 80659424  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80659428  7D 89 03 A6 */	mtctr r12
/* 8065942C  4E 80 04 21 */	bctrl 
/* 80659430  38 7E 0A D0 */	addi r3, r30, 0xad0
/* 80659434  81 9E 0B 0C */	lwz r12, 0xb0c(r30)
/* 80659438  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 8065943C  7D 89 03 A6 */	mtctr r12
/* 80659440  4E 80 04 21 */	bctrl 
lbl_80659444:
/* 80659444  39 61 00 70 */	addi r11, r1, 0x70
/* 80659448  4B D0 8D D5 */	bl _restgpr_26
/* 8065944C  80 01 00 74 */	lwz r0, 0x74(r1)
/* 80659450  7C 08 03 A6 */	mtlr r0
/* 80659454  38 21 00 70 */	addi r1, r1, 0x70
/* 80659458  4E 80 00 20 */	blr 
