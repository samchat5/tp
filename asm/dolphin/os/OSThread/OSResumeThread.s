lbl_803417B4:
/* 803417B4  7C 08 02 A6 */	mflr r0
/* 803417B8  90 01 00 04 */	stw r0, 4(r1)
/* 803417BC  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 803417C0  93 E1 00 24 */	stw r31, 0x24(r1)
/* 803417C4  93 C1 00 20 */	stw r30, 0x20(r1)
/* 803417C8  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 803417CC  7C 7D 1B 78 */	mr r29, r3
/* 803417D0  4B FF BF 25 */	bl OSDisableInterrupts
/* 803417D4  80 9D 02 CC */	lwz r4, 0x2cc(r29)
/* 803417D8  3B E3 00 00 */	addi r31, r3, 0
/* 803417DC  38 04 FF FF */	addi r0, r4, -1
/* 803417E0  90 1D 02 CC */	stw r0, 0x2cc(r29)
/* 803417E4  7C 9E 23 78 */	mr r30, r4
/* 803417E8  80 1D 02 CC */	lwz r0, 0x2cc(r29)
/* 803417EC  2C 00 00 00 */	cmpwi r0, 0
/* 803417F0  40 80 00 10 */	bge lbl_80341800
/* 803417F4  38 00 00 00 */	li r0, 0
/* 803417F8  90 1D 02 CC */	stw r0, 0x2cc(r29)
/* 803417FC  48 00 02 18 */	b lbl_80341A14
lbl_80341800:
/* 80341800  40 82 02 14 */	bne lbl_80341A14
/* 80341804  A0 1D 02 C8 */	lhz r0, 0x2c8(r29)
/* 80341808  2C 00 00 04 */	cmpwi r0, 4
/* 8034180C  41 82 00 B8 */	beq lbl_803418C4
/* 80341810  40 80 01 F0 */	bge lbl_80341A00
/* 80341814  2C 00 00 01 */	cmpwi r0, 1
/* 80341818  41 82 00 08 */	beq lbl_80341820
/* 8034181C  48 00 01 E4 */	b lbl_80341A00
lbl_80341820:
/* 80341820  80 1D 02 D4 */	lwz r0, 0x2d4(r29)
/* 80341824  80 7D 02 F4 */	lwz r3, 0x2f4(r29)
/* 80341828  48 00 00 24 */	b lbl_8034184C
lbl_8034182C:
/* 8034182C  80 83 00 00 */	lwz r4, 0(r3)
/* 80341830  28 04 00 00 */	cmplwi r4, 0
/* 80341834  41 82 00 14 */	beq lbl_80341848
/* 80341838  80 84 02 D0 */	lwz r4, 0x2d0(r4)
/* 8034183C  7C 04 00 00 */	cmpw r4, r0
/* 80341840  40 80 00 08 */	bge lbl_80341848
/* 80341844  7C 80 23 78 */	mr r0, r4
lbl_80341848:
/* 80341848  80 63 00 10 */	lwz r3, 0x10(r3)
lbl_8034184C:
/* 8034184C  28 03 00 00 */	cmplwi r3, 0
/* 80341850  40 82 FF DC */	bne lbl_8034182C
/* 80341854  90 1D 02 D0 */	stw r0, 0x2d0(r29)
/* 80341858  3C 60 80 45 */	lis r3, RunQueue@ha /* 0x8044BB78@ha */
/* 8034185C  38 03 BB 78 */	addi r0, r3, RunQueue@l /* 0x8044BB78@l */
/* 80341860  80 7D 02 D0 */	lwz r3, 0x2d0(r29)
/* 80341864  54 63 18 38 */	slwi r3, r3, 3
/* 80341868  7C 00 1A 14 */	add r0, r0, r3
/* 8034186C  90 1D 02 DC */	stw r0, 0x2dc(r29)
/* 80341870  80 9D 02 DC */	lwz r4, 0x2dc(r29)
/* 80341874  80 64 00 04 */	lwz r3, 4(r4)
/* 80341878  28 03 00 00 */	cmplwi r3, 0
/* 8034187C  40 82 00 0C */	bne lbl_80341888
/* 80341880  93 A4 00 00 */	stw r29, 0(r4)
/* 80341884  48 00 00 08 */	b lbl_8034188C
lbl_80341888:
/* 80341888  93 A3 02 E0 */	stw r29, 0x2e0(r3)
lbl_8034188C:
/* 8034188C  90 7D 02 E4 */	stw r3, 0x2e4(r29)
/* 80341890  38 00 00 00 */	li r0, 0
/* 80341894  38 60 00 01 */	li r3, 1
/* 80341898  90 1D 02 E0 */	stw r0, 0x2e0(r29)
/* 8034189C  80 9D 02 DC */	lwz r4, 0x2dc(r29)
/* 803418A0  93 A4 00 04 */	stw r29, 4(r4)
/* 803418A4  80 1D 02 D0 */	lwz r0, 0x2d0(r29)
/* 803418A8  80 8D 91 40 */	lwz r4, RunQueueBits(r13)
/* 803418AC  20 00 00 1F */	subfic r0, r0, 0x1f
/* 803418B0  7C 60 00 30 */	slw r0, r3, r0
/* 803418B4  7C 80 03 78 */	or r0, r4, r0
/* 803418B8  90 0D 91 40 */	stw r0, RunQueueBits(r13)
/* 803418BC  90 6D 91 44 */	stw r3, RunQueueHint(r13)
/* 803418C0  48 00 01 40 */	b lbl_80341A00
lbl_803418C4:
/* 803418C4  80 9D 02 E0 */	lwz r4, 0x2e0(r29)
/* 803418C8  80 BD 02 E4 */	lwz r5, 0x2e4(r29)
/* 803418CC  28 04 00 00 */	cmplwi r4, 0
/* 803418D0  40 82 00 10 */	bne lbl_803418E0
/* 803418D4  80 7D 02 DC */	lwz r3, 0x2dc(r29)
/* 803418D8  90 A3 00 04 */	stw r5, 4(r3)
/* 803418DC  48 00 00 08 */	b lbl_803418E4
lbl_803418E0:
/* 803418E0  90 A4 02 E4 */	stw r5, 0x2e4(r4)
lbl_803418E4:
/* 803418E4  28 05 00 00 */	cmplwi r5, 0
/* 803418E8  40 82 00 10 */	bne lbl_803418F8
/* 803418EC  80 7D 02 DC */	lwz r3, 0x2dc(r29)
/* 803418F0  90 83 00 00 */	stw r4, 0(r3)
/* 803418F4  48 00 00 08 */	b lbl_803418FC
lbl_803418F8:
/* 803418F8  90 85 02 E0 */	stw r4, 0x2e0(r5)
lbl_803418FC:
/* 803418FC  80 1D 02 D4 */	lwz r0, 0x2d4(r29)
/* 80341900  80 7D 02 F4 */	lwz r3, 0x2f4(r29)
/* 80341904  48 00 00 24 */	b lbl_80341928
lbl_80341908:
/* 80341908  80 83 00 00 */	lwz r4, 0(r3)
/* 8034190C  28 04 00 00 */	cmplwi r4, 0
/* 80341910  41 82 00 14 */	beq lbl_80341924
/* 80341914  80 84 02 D0 */	lwz r4, 0x2d0(r4)
/* 80341918  7C 04 00 00 */	cmpw r4, r0
/* 8034191C  40 80 00 08 */	bge lbl_80341924
/* 80341920  7C 80 23 78 */	mr r0, r4
lbl_80341924:
/* 80341924  80 63 00 10 */	lwz r3, 0x10(r3)
lbl_80341928:
/* 80341928  28 03 00 00 */	cmplwi r3, 0
/* 8034192C  40 82 FF DC */	bne lbl_80341908
/* 80341930  90 1D 02 D0 */	stw r0, 0x2d0(r29)
/* 80341934  80 9D 02 DC */	lwz r4, 0x2dc(r29)
/* 80341938  80 A4 00 00 */	lwz r5, 0(r4)
/* 8034193C  48 00 00 08 */	b lbl_80341944
lbl_80341940:
/* 80341940  80 A5 02 E0 */	lwz r5, 0x2e0(r5)
lbl_80341944:
/* 80341944  28 05 00 00 */	cmplwi r5, 0
/* 80341948  41 82 00 14 */	beq lbl_8034195C
/* 8034194C  80 65 02 D0 */	lwz r3, 0x2d0(r5)
/* 80341950  80 1D 02 D0 */	lwz r0, 0x2d0(r29)
/* 80341954  7C 03 00 00 */	cmpw r3, r0
/* 80341958  40 81 FF E8 */	ble lbl_80341940
lbl_8034195C:
/* 8034195C  28 05 00 00 */	cmplwi r5, 0
/* 80341960  40 82 00 34 */	bne lbl_80341994
/* 80341964  80 64 00 04 */	lwz r3, 4(r4)
/* 80341968  28 03 00 00 */	cmplwi r3, 0
/* 8034196C  40 82 00 0C */	bne lbl_80341978
/* 80341970  93 A4 00 00 */	stw r29, 0(r4)
/* 80341974  48 00 00 08 */	b lbl_8034197C
lbl_80341978:
/* 80341978  93 A3 02 E0 */	stw r29, 0x2e0(r3)
lbl_8034197C:
/* 8034197C  90 7D 02 E4 */	stw r3, 0x2e4(r29)
/* 80341980  38 00 00 00 */	li r0, 0
/* 80341984  90 1D 02 E0 */	stw r0, 0x2e0(r29)
/* 80341988  80 7D 02 DC */	lwz r3, 0x2dc(r29)
/* 8034198C  93 A3 00 04 */	stw r29, 4(r3)
/* 80341990  48 00 00 2C */	b lbl_803419BC
lbl_80341994:
/* 80341994  90 BD 02 E0 */	stw r5, 0x2e0(r29)
/* 80341998  80 65 02 E4 */	lwz r3, 0x2e4(r5)
/* 8034199C  93 A5 02 E4 */	stw r29, 0x2e4(r5)
/* 803419A0  28 03 00 00 */	cmplwi r3, 0
/* 803419A4  90 7D 02 E4 */	stw r3, 0x2e4(r29)
/* 803419A8  40 82 00 10 */	bne lbl_803419B8
/* 803419AC  80 7D 02 DC */	lwz r3, 0x2dc(r29)
/* 803419B0  93 A3 00 00 */	stw r29, 0(r3)
/* 803419B4  48 00 00 08 */	b lbl_803419BC
lbl_803419B8:
/* 803419B8  93 A3 02 E0 */	stw r29, 0x2e0(r3)
lbl_803419BC:
/* 803419BC  80 7D 02 F0 */	lwz r3, 0x2f0(r29)
/* 803419C0  28 03 00 00 */	cmplwi r3, 0
/* 803419C4  41 82 00 3C */	beq lbl_80341A00
/* 803419C8  83 A3 00 08 */	lwz r29, 8(r3)
lbl_803419CC:
/* 803419CC  80 1D 02 CC */	lwz r0, 0x2cc(r29)
/* 803419D0  2C 00 00 00 */	cmpwi r0, 0
/* 803419D4  41 81 00 2C */	bgt lbl_80341A00
/* 803419D8  7F A3 EB 78 */	mr r3, r29
/* 803419DC  4B FF F3 D1 */	bl __OSGetEffectivePriority
/* 803419E0  80 1D 02 D0 */	lwz r0, 0x2d0(r29)
/* 803419E4  38 83 00 00 */	addi r4, r3, 0
/* 803419E8  7C 00 20 00 */	cmpw r0, r4
/* 803419EC  41 82 00 14 */	beq lbl_80341A00
/* 803419F0  7F A3 EB 78 */	mr r3, r29
/* 803419F4  4B FF F3 F5 */	bl SetEffectivePriority
/* 803419F8  7C 7D 1B 79 */	or. r29, r3, r3
/* 803419FC  40 82 FF D0 */	bne lbl_803419CC
lbl_80341A00:
/* 80341A00  80 0D 91 44 */	lwz r0, RunQueueHint(r13)
/* 80341A04  2C 00 00 00 */	cmpwi r0, 0
/* 80341A08  41 82 00 0C */	beq lbl_80341A14
/* 80341A0C  38 60 00 00 */	li r3, 0
/* 80341A10  4B FF F5 E9 */	bl SelectThread
lbl_80341A14:
/* 80341A14  7F E3 FB 78 */	mr r3, r31
/* 80341A18  4B FF BD 05 */	bl OSRestoreInterrupts
/* 80341A1C  7F C3 F3 78 */	mr r3, r30
/* 80341A20  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80341A24  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 80341A28  83 C1 00 20 */	lwz r30, 0x20(r1)
/* 80341A2C  83 A1 00 1C */	lwz r29, 0x1c(r1)
/* 80341A30  38 21 00 28 */	addi r1, r1, 0x28
/* 80341A34  7C 08 03 A6 */	mtlr r0
/* 80341A38  4E 80 00 20 */	blr 
