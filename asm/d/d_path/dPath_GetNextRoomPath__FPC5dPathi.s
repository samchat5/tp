lbl_80051898:
/* 80051898  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8005189C  7C 08 02 A6 */	mflr r0
/* 800518A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800518A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800518A8  7C 7F 1B 78 */	mr r31, r3
/* 800518AC  2C 04 FF FF */	cmpwi r4, -1
/* 800518B0  40 82 00 20 */	bne lbl_800518D0
/* 800518B4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 800518B8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 800518BC  85 83 4E 20 */	lwzu r12, 0x4e20(r3)
/* 800518C0  81 8C 00 E4 */	lwz r12, 0xe4(r12)
/* 800518C4  7D 89 03 A6 */	mtctr r12
/* 800518C8  4E 80 04 21 */	bctrl 
/* 800518CC  48 00 00 34 */	b lbl_80051900
lbl_800518D0:
/* 800518D0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 800518D4  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 800518D8  38 63 4E C4 */	addi r3, r3, 0x4ec4
/* 800518DC  4B FD 2A A9 */	bl getStatusRoomDt__20dStage_roomControl_cFi
/* 800518E0  28 03 00 00 */	cmplwi r3, 0
/* 800518E4  40 82 00 0C */	bne lbl_800518F0
/* 800518E8  38 60 00 00 */	li r3, 0
/* 800518EC  48 00 00 5C */	b lbl_80051948
lbl_800518F0:
/* 800518F0  81 83 00 00 */	lwz r12, 0(r3)
/* 800518F4  81 8C 00 E4 */	lwz r12, 0xe4(r12)
/* 800518F8  7D 89 03 A6 */	mtctr r12
/* 800518FC  4E 80 04 21 */	bctrl 
lbl_80051900:
/* 80051900  A0 9F 00 02 */	lhz r4, 2(r31)
/* 80051904  28 03 00 00 */	cmplwi r3, 0
/* 80051908  41 82 00 10 */	beq lbl_80051918
/* 8005190C  3C 04 00 00 */	addis r0, r4, 0
/* 80051910  28 00 FF FF */	cmplwi r0, 0xffff
/* 80051914  40 82 00 0C */	bne lbl_80051920
lbl_80051918:
/* 80051918  38 60 00 00 */	li r3, 0
/* 8005191C  48 00 00 2C */	b lbl_80051948
lbl_80051920:
/* 80051920  2C 04 00 00 */	cmpwi r4, 0
/* 80051924  41 80 00 10 */	blt lbl_80051934
/* 80051928  80 03 00 00 */	lwz r0, 0(r3)
/* 8005192C  7C 04 00 00 */	cmpw r4, r0
/* 80051930  41 80 00 0C */	blt lbl_8005193C
lbl_80051934:
/* 80051934  38 60 00 00 */	li r3, 0
/* 80051938  48 00 00 10 */	b lbl_80051948
lbl_8005193C:
/* 8005193C  80 63 00 04 */	lwz r3, 4(r3)
/* 80051940  1C 04 00 0C */	mulli r0, r4, 0xc
/* 80051944  7C 63 02 14 */	add r3, r3, r0
lbl_80051948:
/* 80051948  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8005194C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80051950  7C 08 03 A6 */	mtlr r0
/* 80051954  38 21 00 10 */	addi r1, r1, 0x10
/* 80051958  4E 80 00 20 */	blr 
