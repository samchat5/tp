lbl_80355854:
/* 80355854  7C 08 02 A6 */	mflr r0
/* 80355858  90 01 00 04 */	stw r0, 4(r1)
/* 8035585C  94 21 FF D8 */	stwu r1, -0x28(r1)
/* 80355860  93 E1 00 24 */	stw r31, 0x24(r1)
/* 80355864  3B E3 00 00 */	addi r31, r3, 0
/* 80355868  3C 60 80 45 */	lis r3, __CARDBlock@ha /* 0x8044CBC0@ha */
/* 8035586C  93 C1 00 20 */	stw r30, 0x20(r1)
/* 80355870  1C BF 01 10 */	mulli r5, r31, 0x110
/* 80355874  93 A1 00 1C */	stw r29, 0x1c(r1)
/* 80355878  38 03 CB C0 */	addi r0, r3, __CARDBlock@l /* 0x8044CBC0@l */
/* 8035587C  7C 9D 23 79 */	or. r29, r4, r4
/* 80355880  7F C0 2A 14 */	add r30, r0, r5
/* 80355884  41 80 00 3C */	blt lbl_803558C0
/* 80355888  80 BE 00 84 */	lwz r5, 0x84(r30)
/* 8035588C  3C 60 80 35 */	lis r3, WriteCallback@ha /* 0x80355784@ha */
/* 80355890  80 1E 00 80 */	lwz r0, 0x80(r30)
/* 80355894  38 E3 57 84 */	addi r7, r3, WriteCallback@l /* 0x80355784@l */
/* 80355898  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 8035589C  7C 00 28 50 */	subf r0, r0, r5
/* 803558A0  54 00 9B 7E */	srwi r0, r0, 0xd
/* 803558A4  7C 83 01 D6 */	mullw r4, r3, r0
/* 803558A8  38 C5 00 00 */	addi r6, r5, 0
/* 803558AC  38 7F 00 00 */	addi r3, r31, 0
/* 803558B0  38 A0 20 00 */	li r5, 0x2000
/* 803558B4  4B FF FA F9 */	bl __CARDWrite
/* 803558B8  7C 7D 1B 79 */	or. r29, r3, r3
/* 803558BC  40 80 00 44 */	bge lbl_80355900
lbl_803558C0:
/* 803558C0  80 1E 00 D0 */	lwz r0, 0xd0(r30)
/* 803558C4  28 00 00 00 */	cmplwi r0, 0
/* 803558C8  40 82 00 10 */	bne lbl_803558D8
/* 803558CC  38 7E 00 00 */	addi r3, r30, 0
/* 803558D0  38 9D 00 00 */	addi r4, r29, 0
/* 803558D4  4B FF E3 99 */	bl __CARDPutControlBlock
lbl_803558D8:
/* 803558D8  80 1E 00 D8 */	lwz r0, 0xd8(r30)
/* 803558DC  28 00 00 00 */	cmplwi r0, 0
/* 803558E0  7C 0C 03 78 */	mr r12, r0
/* 803558E4  41 82 00 1C */	beq lbl_80355900
/* 803558E8  38 00 00 00 */	li r0, 0
/* 803558EC  7D 88 03 A6 */	mtlr r12
/* 803558F0  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 803558F4  38 7F 00 00 */	addi r3, r31, 0
/* 803558F8  38 9D 00 00 */	addi r4, r29, 0
/* 803558FC  4E 80 00 21 */	blrl 
lbl_80355900:
/* 80355900  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80355904  83 E1 00 24 */	lwz r31, 0x24(r1)
/* 80355908  83 C1 00 20 */	lwz r30, 0x20(r1)
/* 8035590C  83 A1 00 1C */	lwz r29, 0x1c(r1)
/* 80355910  38 21 00 28 */	addi r1, r1, 0x28
/* 80355914  7C 08 03 A6 */	mtlr r0
/* 80355918  4E 80 00 20 */	blr 
