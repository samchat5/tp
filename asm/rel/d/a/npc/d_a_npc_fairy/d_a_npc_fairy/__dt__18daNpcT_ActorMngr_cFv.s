lbl_809B88A0:
/* 809B88A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809B88A4  7C 08 02 A6 */	mflr r0
/* 809B88A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 809B88AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809B88B0  7C 7F 1B 79 */	or. r31, r3, r3
/* 809B88B4  41 82 00 1C */	beq lbl_809B88D0
/* 809B88B8  3C A0 80 9C */	lis r5, __vt__18daNpcT_ActorMngr_c@ha /* 0x809BA304@ha */
/* 809B88BC  38 05 A3 04 */	addi r0, r5, __vt__18daNpcT_ActorMngr_c@l /* 0x809BA304@l */
/* 809B88C0  90 1F 00 04 */	stw r0, 4(r31)
/* 809B88C4  7C 80 07 35 */	extsh. r0, r4
/* 809B88C8  40 81 00 08 */	ble lbl_809B88D0
/* 809B88CC  4B 91 64 71 */	bl __dl__FPv
lbl_809B88D0:
/* 809B88D0  7F E3 FB 78 */	mr r3, r31
/* 809B88D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 809B88D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 809B88DC  7C 08 03 A6 */	mtlr r0
/* 809B88E0  38 21 00 10 */	addi r1, r1, 0x10
/* 809B88E4  4E 80 00 20 */	blr 
