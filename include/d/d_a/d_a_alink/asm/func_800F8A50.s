/* 800F8A50 000F5990  94 21 FF C0 */ stwu r1, -0x40(r1)
/* 800F8A54 000F5994  7C 08 02 A6 */ mflr r0
/* 800F8A58 000F5998  90 01 00 44 */ stw r0, 0x44(r1)
/* 800F8A5C 000F599C  39 61 00 40 */ addi r11, r1, 0x40
/* 800F8A60 000F59A0  48 26 97 7D */ bl _savegpr_29
/* 800F8A64 000F59A4  7C 7D 1B 78 */ mr r29, r3
/* 800F8A68 000F59A8  7C 9E 23 78 */ mr r30, r4
/* 800F8A6C 000F59AC  7C BF 2B 78 */ mr r31, r5
/* 800F8A70 000F59B0  38 61 00 14 */ addi r3, r1, 0x14
/* 800F8A74 000F59B4  48 16 E0 71 */ bl __pl__4cXyzCFRC3Vec
/* 800F8A78 000F59B8  C0 01 00 14 */ lfs f0, 0x14(r1)
/* 800F8A7C 000F59BC  D0 01 00 20 */ stfs f0, 0x20(r1)
/* 800F8A80 000F59C0  C0 01 00 18 */ lfs f0, 0x18(r1)
/* 800F8A84 000F59C4  D0 01 00 24 */ stfs f0, 0x24(r1)
/* 800F8A88 000F59C8  C0 01 00 1C */ lfs f0, 0x1c(r1)
/* 800F8A8C 000F59CC  D0 01 00 28 */ stfs f0, 0x28(r1)
/* 800F8A90 000F59D0  7F A3 EB 78 */ mr r3, r29
/* 800F8A94 000F59D4  38 81 00 20 */ addi r4, r1, 0x20
/* 800F8A98 000F59D8  4B FF FF 49 */ bl daAlink_c_NS_checkNotCrawlStand
/* 800F8A9C 000F59DC  2C 03 00 00 */ cmpwi r3, 0
/* 800F8AA0 000F59E0  41 82 00 0C */ beq lbl_800F8AAC
/* 800F8AA4 000F59E4  38 60 00 01 */ li r3, 1
/* 800F8AA8 000F59E8  48 00 00 40 */ b lbl_800F8AE8
lbl_800F8AAC:
/* 800F8AAC 000F59EC  38 61 00 08 */ addi r3, r1, 8
/* 800F8AB0 000F59F0  7F C4 F3 78 */ mr r4, r30
/* 800F8AB4 000F59F4  7F E5 FB 78 */ mr r5, r31
/* 800F8AB8 000F59F8  48 16 E0 7D */ bl __mi__4cXyzCFRC3Vec
/* 800F8ABC 000F59FC  C0 01 00 08 */ lfs f0, 8(r1)
/* 800F8AC0 000F5A00  D0 01 00 20 */ stfs f0, 0x20(r1)
/* 800F8AC4 000F5A04  C0 01 00 0C */ lfs f0, 0xc(r1)
/* 800F8AC8 000F5A08  D0 01 00 24 */ stfs f0, 0x24(r1)
/* 800F8ACC 000F5A0C  C0 01 00 10 */ lfs f0, 0x10(r1)
/* 800F8AD0 000F5A10  D0 01 00 28 */ stfs f0, 0x28(r1)
/* 800F8AD4 000F5A14  7F A3 EB 78 */ mr r3, r29
/* 800F8AD8 000F5A18  38 81 00 20 */ addi r4, r1, 0x20
/* 800F8ADC 000F5A1C  4B FF FF 05 */ bl daAlink_c_NS_checkNotCrawlStand
/* 800F8AE0 000F5A20  30 03 FF FF */ addic r0, r3, -1
/* 800F8AE4 000F5A24  7C 60 19 10 */ subfe r3, r0, r3
lbl_800F8AE8:
/* 800F8AE8 000F5A28  39 61 00 40 */ addi r11, r1, 0x40
/* 800F8AEC 000F5A2C  48 26 97 3D */ bl _restgpr_29
/* 800F8AF0 000F5A30  80 01 00 44 */ lwz r0, 0x44(r1)
/* 800F8AF4 000F5A34  7C 08 03 A6 */ mtlr r0
/* 800F8AF8 000F5A38  38 21 00 40 */ addi r1, r1, 0x40
/* 800F8AFC 000F5A3C  4E 80 00 20 */ blr
