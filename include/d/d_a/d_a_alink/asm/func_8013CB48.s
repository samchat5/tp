/* 8013CB48 00139A88  94 21 FF D0 */ stwu r1, -0x30(r1)
/* 8013CB4C 00139A8C  7C 08 02 A6 */ mflr r0
/* 8013CB50 00139A90  90 01 00 34 */ stw r0, 0x34(r1)
/* 8013CB54 00139A94  DB E1 00 20 */ stfd f31, 0x20(r1)
/* 8013CB58 00139A98  F3 E1 00 28 */ psq_st f31, 40(r1), 0, 0
/* 8013CB5C 00139A9C  39 61 00 20 */ addi r11, r1, 0x20
/* 8013CB60 00139AA0  48 22 56 7D */ bl _savegpr_29
/* 8013CB64 00139AA4  7C 7D 1B 78 */ mr r29, r3
/* 8013CB68 00139AA8  7C 9E 23 78 */ mr r30, r4
/* 8013CB6C 00139AAC  38 80 01 35 */ li r4, 0x135
/* 8013CB70 00139AB0  4B F8 53 FD */ bl daAlink_c_NS_commonProcInit
/* 8013CB74 00139AB4  2C 1E 00 02 */ cmpwi r30, 2
/* 8013CB78 00139AB8  41 82 00 1C */ beq lbl_8013CB94
/* 8013CB7C 00139ABC  2C 1E 00 04 */ cmpwi r30, 4
/* 8013CB80 00139AC0  40 82 00 28 */ bne lbl_8013CBA8
/* 8013CB84 00139AC4  48 12 AC E9 */ bl cM_rnd__Fv
/* 8013CB88 00139AC8  C0 02 92 98 */ lfs f0, lbl_80452C98-_SDA2_BASE_(r2)
/* 8013CB8C 00139ACC  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 8013CB90 00139AD0  40 80 00 18 */ bge lbl_8013CBA8
lbl_8013CB94:
/* 8013CB94 00139AD4  3B E0 00 76 */ li r31, 0x76
/* 8013CB98 00139AD8  80 1D 05 78 */ lwz r0, 0x578(r29)
/* 8013CB9C 00139ADC  60 00 00 20 */ ori r0, r0, 0x20
/* 8013CBA0 00139AE0  90 1D 05 78 */ stw r0, 0x578(r29)
/* 8013CBA4 00139AE4  48 00 00 14 */ b lbl_8013CBB8
lbl_8013CBA8:
/* 8013CBA8 00139AE8  3B E0 00 77 */ li r31, 0x77
/* 8013CBAC 00139AEC  80 1D 05 78 */ lwz r0, 0x578(r29)
/* 8013CBB0 00139AF0  54 00 06 F2 */ rlwinm r0, r0, 0, 0x1b, 0x19
/* 8013CBB4 00139AF4  90 1D 05 78 */ stw r0, 0x578(r29)
lbl_8013CBB8:
/* 8013CBB8 00139AF8  2C 1E 00 04 */ cmpwi r30, 4
/* 8013CBBC 00139AFC  40 82 00 0C */ bne lbl_8013CBC8
/* 8013CBC0 00139B00  C3 E2 92 C0 */ lfs f31, lbl_80452CC0-_SDA2_BASE_(r2)
/* 8013CBC4 00139B04  48 00 00 08 */ b lbl_8013CBCC
lbl_8013CBC8:
/* 8013CBC8 00139B08  C3 E2 92 C4 */ lfs f31, lbl_80452CC4-_SDA2_BASE_(r2)
lbl_8013CBCC:
/* 8013CBCC 00139B0C  7F A3 EB 78 */ mr r3, r29
/* 8013CBD0 00139B10  7F E4 FB 78 */ mr r4, r31
/* 8013CBD4 00139B14  3C A0 80 39 */ lis r5, lbl_8038F748@ha
/* 8013CBD8 00139B18  38 C5 F7 48 */ addi r6, r5, lbl_8038F748@l
/* 8013CBDC 00139B1C  C0 26 00 2C */ lfs f1, 0x2c(r6)
/* 8013CBE0 00139B20  FC 40 F8 90 */ fmr f2, f31
/* 8013CBE4 00139B24  38 A0 FF FF */ li r5, -1
/* 8013CBE8 00139B28  C0 66 00 30 */ lfs f3, 0x30(r6)
/* 8013CBEC 00139B2C  4B FE CB 19 */ bl daAlink_c_NS_setSingleAnimeWolf
/* 8013CBF0 00139B30  7F A3 EB 78 */ mr r3, r29
/* 8013CBF4 00139B34  7F E4 FB 78 */ mr r4, r31
/* 8013CBF8 00139B38  FC 20 F8 90 */ fmr f1, f31
/* 8013CBFC 00139B3C  4B FF C9 B9 */ bl daAlink_c_NS_setWolfEnemyThrowUpperAnime
/* 8013CC00 00139B40  3C 60 80 42 */ lis r3, lbl_8042561C@ha
/* 8013CC04 00139B44  C4 03 56 1C */ lfsu f0, lbl_8042561C@l(r3)
/* 8013CC08 00139B48  D0 1D 35 88 */ stfs f0, 0x3588(r29)
/* 8013CC0C 00139B4C  C0 03 00 04 */ lfs f0, 4(r3)
/* 8013CC10 00139B50  D0 1D 35 8C */ stfs f0, 0x358c(r29)
/* 8013CC14 00139B54  C0 03 00 08 */ lfs f0, 8(r3)
/* 8013CC18 00139B58  D0 1D 35 90 */ stfs f0, 0x3590(r29)
/* 8013CC1C 00139B5C  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 8013CC20 00139B60  D0 1D 33 98 */ stfs f0, 0x3398(r29)
/* 8013CC24 00139B64  D0 1D 04 FC */ stfs f0, 0x4fc(r29)
/* 8013CC28 00139B68  38 00 00 0D */ li r0, 0xd
/* 8013CC2C 00139B6C  98 1D 2F 99 */ stb r0, 0x2f99(r29)
/* 8013CC30 00139B70  A8 1D 04 E6 */ lha r0, 0x4e6(r29)
/* 8013CC34 00139B74  B0 1D 04 DE */ sth r0, 0x4de(r29)
/* 8013CC38 00139B78  38 60 00 01 */ li r3, 1
/* 8013CC3C 00139B7C  E3 E1 00 28 */ psq_l f31, 40(r1), 0, 0
/* 8013CC40 00139B80  CB E1 00 20 */ lfd f31, 0x20(r1)
/* 8013CC44 00139B84  39 61 00 20 */ addi r11, r1, 0x20
/* 8013CC48 00139B88  48 22 55 E1 */ bl _restgpr_29
/* 8013CC4C 00139B8C  80 01 00 34 */ lwz r0, 0x34(r1)
/* 8013CC50 00139B90  7C 08 03 A6 */ mtlr r0
/* 8013CC54 00139B94  38 21 00 30 */ addi r1, r1, 0x30
/* 8013CC58 00139B98  4E 80 00 20 */ blr