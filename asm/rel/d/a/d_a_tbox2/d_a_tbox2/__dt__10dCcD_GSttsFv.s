lbl_804971F0:
/* 804971F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804971F4  7C 08 02 A6 */	mflr r0
/* 804971F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 804971FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80497200  7C 7F 1B 79 */	or. r31, r3, r3
/* 80497204  41 82 00 30 */	beq lbl_80497234
/* 80497208  3C 60 80 4A */	lis r3, __vt__10dCcD_GStts@ha /* 0x804983C4@ha */
/* 8049720C  38 03 83 C4 */	addi r0, r3, __vt__10dCcD_GStts@l /* 0x804983C4@l */
/* 80497210  90 1F 00 00 */	stw r0, 0(r31)
/* 80497214  41 82 00 10 */	beq lbl_80497224
/* 80497218  3C 60 80 4A */	lis r3, __vt__10cCcD_GStts@ha /* 0x804983B8@ha */
/* 8049721C  38 03 83 B8 */	addi r0, r3, __vt__10cCcD_GStts@l /* 0x804983B8@l */
/* 80497220  90 1F 00 00 */	stw r0, 0(r31)
lbl_80497224:
/* 80497224  7C 80 07 35 */	extsh. r0, r4
/* 80497228  40 81 00 0C */	ble lbl_80497234
/* 8049722C  7F E3 FB 78 */	mr r3, r31
/* 80497230  4B E3 7B 0D */	bl __dl__FPv
lbl_80497234:
/* 80497234  7F E3 FB 78 */	mr r3, r31
/* 80497238  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8049723C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80497240  7C 08 03 A6 */	mtlr r0
/* 80497244  38 21 00 10 */	addi r1, r1, 0x10
/* 80497248  4E 80 00 20 */	blr 
