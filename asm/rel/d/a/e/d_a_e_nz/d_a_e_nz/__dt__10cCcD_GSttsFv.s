lbl_8072BC40:
/* 8072BC40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8072BC44  7C 08 02 A6 */	mflr r0
/* 8072BC48  90 01 00 14 */	stw r0, 0x14(r1)
/* 8072BC4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8072BC50  7C 7F 1B 79 */	or. r31, r3, r3
/* 8072BC54  41 82 00 1C */	beq lbl_8072BC70
/* 8072BC58  3C A0 80 73 */	lis r5, __vt__10cCcD_GStts@ha /* 0x8072C380@ha */
/* 8072BC5C  38 05 C3 80 */	addi r0, r5, __vt__10cCcD_GStts@l /* 0x8072C380@l */
/* 8072BC60  90 1F 00 00 */	stw r0, 0(r31)
/* 8072BC64  7C 80 07 35 */	extsh. r0, r4
/* 8072BC68  40 81 00 08 */	ble lbl_8072BC70
/* 8072BC6C  4B BA 30 D1 */	bl __dl__FPv
lbl_8072BC70:
/* 8072BC70  7F E3 FB 78 */	mr r3, r31
/* 8072BC74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8072BC78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8072BC7C  7C 08 03 A6 */	mtlr r0
/* 8072BC80  38 21 00 10 */	addi r1, r1, 0x10
/* 8072BC84  4E 80 00 20 */	blr 
