lbl_804D5838:
/* 804D5838  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804D583C  7C 08 02 A6 */	mflr r0
/* 804D5840  90 01 00 14 */	stw r0, 0x14(r1)
/* 804D5844  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804D5848  7C 7F 1B 78 */	mr r31, r3
/* 804D584C  88 03 04 E2 */	lbz r0, 0x4e2(r3)
/* 804D5850  7C 03 07 74 */	extsb r3, r0
/* 804D5854  4B B4 71 C9 */	bl fopAcM_myRoomSearchEnemy__FSc
/* 804D5858  28 03 00 00 */	cmplwi r3, 0
/* 804D585C  40 82 00 14 */	bne lbl_804D5870
/* 804D5860  38 00 00 02 */	li r0, 2
/* 804D5864  98 1F 05 68 */	stb r0, 0x568(r31)
/* 804D5868  38 00 00 41 */	li r0, 0x41
/* 804D586C  B0 1F 05 6A */	sth r0, 0x56a(r31)
lbl_804D5870:
/* 804D5870  38 60 00 01 */	li r3, 1
/* 804D5874  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804D5878  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804D587C  7C 08 03 A6 */	mtlr r0
/* 804D5880  38 21 00 10 */	addi r1, r1, 0x10
/* 804D5884  4E 80 00 20 */	blr 
