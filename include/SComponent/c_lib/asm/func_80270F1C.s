/* 80270F1C 0026DE5C  94 21 FF C0 */ stwu r1, -0x40(r1)
/* 80270F20 0026DE60  7C 08 02 A6 */ mflr r0
/* 80270F24 0026DE64  90 01 00 44 */ stw r0, 0x44(r1)
/* 80270F28 0026DE68  80 6D 81 E8 */ lwz r3, lbl_80450768-_SDA_BASE_(r13)
/* 80270F2C 0026DE6C  38 81 00 08 */ addi r4, r1, 8
/* 80270F30 0026DE70  48 0D 55 81 */ bl PSMTXCopy
/* 80270F34 0026DE74  80 6D 81 E8 */ lwz r3, lbl_80450768-_SDA_BASE_(r13)
/* 80270F38 0026DE78  38 83 00 30 */ addi r4, r3, 0x30
/* 80270F3C 0026DE7C  90 8D 81 E8 */ stw r4, lbl_80450768-_SDA_BASE_(r13)
/* 80270F40 0026DE80  38 61 00 08 */ addi r3, r1, 8
/* 80270F44 0026DE84  48 0D 55 6D */ bl PSMTXCopy
/* 80270F48 0026DE88  80 01 00 44 */ lwz r0, 0x44(r1)
/* 80270F4C 0026DE8C  7C 08 03 A6 */ mtlr r0
/* 80270F50 0026DE90  38 21 00 40 */ addi r1, r1, 0x40
/* 80270F54 0026DE94  4E 80 00 20 */ blr