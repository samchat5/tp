/* 802C05B0 002BD4F0  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 802C05B4 002BD4F4  7C 08 02 A6 */ mflr r0
/* 802C05B8 002BD4F8  90 01 00 24 */ stw r0, 0x24(r1)
/* 802C05BC 002BD4FC  39 61 00 20 */ addi r11, r1, 0x20
/* 802C05C0 002BD500  48 0A 1C 1D */ bl _savegpr_29
/* 802C05C4 002BD504  7C 7D 1B 78 */ mr r29, r3
/* 802C05C8 002BD508  7C DE 33 78 */ mr r30, r6
/* 802C05CC 002BD50C  7D 3F 4B 78 */ mr r31, r9
/* 802C05D0 002BD510  7C E6 3B 78 */ mr r6, r7
/* 802C05D4 002BD514  7D 07 43 78 */ mr r7, r8
/* 802C05D8 002BD518  4B FF FF 59 */ bl Z2Creature_NS_init
/* 802C05DC 002BD51C  28 1E 00 00 */ cmplwi r30, 0
/* 802C05E0 002BD520  41 82 00 20 */ beq lbl_802C0600
/* 802C05E4 002BD524  38 7D 00 70 */ addi r3, r29, 0x70
/* 802C05E8 002BD528  7F C4 F3 78 */ mr r4, r30
/* 802C05EC 002BD52C  7F E5 FB 78 */ mr r5, r31
/* 802C05F0 002BD530  81 9D 00 80 */ lwz r12, 0x80(r29)
/* 802C05F4 002BD534  81 8C 00 14 */ lwz r12, 0x14(r12)
/* 802C05F8 002BD538  7D 89 03 A6 */ mtctr r12
/* 802C05FC 002BD53C  4E 80 04 21 */ bctrl
lbl_802C0600:
/* 802C0600 002BD540  39 61 00 20 */ addi r11, r1, 0x20
/* 802C0604 002BD544  48 0A 1C 25 */ bl _restgpr_29
/* 802C0608 002BD548  80 01 00 24 */ lwz r0, 0x24(r1)
/* 802C060C 002BD54C  7C 08 03 A6 */ mtlr r0
/* 802C0610 002BD550  38 21 00 20 */ addi r1, r1, 0x20
/* 802C0614 002BD554  4E 80 00 20 */ blr