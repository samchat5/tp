/* 800A7ABC 000A49FC  94 21 FF B0 */ stwu r1, -0x50(r1)
/* 800A7AC0 000A4A00  7C 08 02 A6 */ mflr r0
/* 800A7AC4 000A4A04  90 01 00 54 */ stw r0, 0x54(r1)
/* 800A7AC8 000A4A08  93 E1 00 4C */ stw r31, 0x4c(r1)
/* 800A7ACC 000A4A0C  93 C1 00 48 */ stw r30, 0x48(r1)
/* 800A7AD0 000A4A10  7C 7E 1B 78 */ mr r30, r3
/* 800A7AD4 000A4A14  C0 63 04 D8 */ lfs f3, 0x4d8(r3)
/* 800A7AD8 000A4A18  C0 43 04 D4 */ lfs f2, 0x4d4(r3)
/* 800A7ADC 000A4A1C  C0 22 92 98 */ lfs f1, lbl_80452C98-_SDA2_BASE_(r2)
/* 800A7AE0 000A4A20  C0 03 05 98 */ lfs f0, 0x598(r3)
/* 800A7AE4 000A4A24  EC 01 00 32 */ fmuls f0, f1, f0
/* 800A7AE8 000A4A28  EC 22 00 2A */ fadds f1, f2, f0
/* 800A7AEC 000A4A2C  C0 03 04 D0 */ lfs f0, 0x4d0(r3)
/* 800A7AF0 000A4A30  D0 01 00 30 */ stfs f0, 0x30(r1)
/* 800A7AF4 000A4A34  D0 21 00 34 */ stfs f1, 0x34(r1)
/* 800A7AF8 000A4A38  D0 61 00 38 */ stfs f3, 0x38(r1)
/* 800A7AFC 000A4A3C  38 61 00 18 */ addi r3, r1, 0x18
/* 800A7B00 000A4A40  3C A0 80 39 */ lis r5, lbl_8038D664@ha
/* 800A7B04 000A4A44  3B E5 D6 64 */ addi r31, r5, lbl_8038D664@l
/* 800A7B08 000A4A48  C0 3F 00 2C */ lfs f1, 0x2c(r31)
/* 800A7B0C 000A4A4C  48 1B F0 79 */ bl __ml__4cXyzCFf
/* 800A7B10 000A4A50  38 61 00 0C */ addi r3, r1, 0xc
/* 800A7B14 000A4A54  38 81 00 30 */ addi r4, r1, 0x30
/* 800A7B18 000A4A58  38 A1 00 18 */ addi r5, r1, 0x18
/* 800A7B1C 000A4A5C  48 1B F0 19 */ bl __mi__4cXyzCFRC3Vec
/* 800A7B20 000A4A60  C0 01 00 0C */ lfs f0, 0xc(r1)
/* 800A7B24 000A4A64  D0 01 00 24 */ stfs f0, 0x24(r1)
/* 800A7B28 000A4A68  C0 01 00 10 */ lfs f0, 0x10(r1)
/* 800A7B2C 000A4A6C  D0 01 00 28 */ stfs f0, 0x28(r1)
/* 800A7B30 000A4A70  C0 01 00 14 */ lfs f0, 0x14(r1)
/* 800A7B34 000A4A74  D0 01 00 2C */ stfs f0, 0x2c(r1)
/* 800A7B38 000A4A78  7F C3 F3 78 */ mr r3, r30
/* 800A7B3C 000A4A7C  38 81 00 30 */ addi r4, r1, 0x30
/* 800A7B40 000A4A80  38 A1 00 24 */ addi r5, r1, 0x24
/* 800A7B44 000A4A84  4B FF A6 55 */ bl daAlink_c_NS_commonLineCheck
/* 800A7B48 000A4A88  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800A7B4C 000A4A8C  41 82 01 48 */ beq lbl_800A7C94
/* 800A7B50 000A4A90  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800A7B54 000A4A94  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800A7B58 000A4A98  38 63 0F 38 */ addi r3, r3, 0xf38
/* 800A7B5C 000A4A9C  38 9E 1B 5C */ addi r4, r30, 0x1b5c
/* 800A7B60 000A4AA0  4B FC D2 A1 */ bl dBgS_NS_GetWallCode
/* 800A7B64 000A4AA4  2C 03 00 0A */ cmpwi r3, 0xa
/* 800A7B68 000A4AA8  41 82 01 2C */ beq lbl_800A7C94
/* 800A7B6C 000A4AAC  38 9E 1B 78 */ addi r4, r30, 0x1b78
/* 800A7B70 000A4AB0  38 61 00 30 */ addi r3, r1, 0x30
/* 800A7B74 000A4AB4  48 29 F8 29 */ bl PSVECSquareDistance
/* 800A7B78 000A4AB8  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800A7B7C 000A4ABC  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800A7B80 000A4AC0  40 81 00 58 */ ble lbl_800A7BD8
/* 800A7B84 000A4AC4  FC 00 08 34 */ frsqrte f0, f1
/* 800A7B88 000A4AC8  C8 82 92 E8 */ lfd f4, lbl_80452CE8-_SDA2_BASE_(r2)
/* 800A7B8C 000A4ACC  FC 44 00 32 */ fmul f2, f4, f0
/* 800A7B90 000A4AD0  C8 62 92 F0 */ lfd f3, lbl_80452CF0-_SDA2_BASE_(r2)
/* 800A7B94 000A4AD4  FC 00 00 32 */ fmul f0, f0, f0
/* 800A7B98 000A4AD8  FC 01 00 32 */ fmul f0, f1, f0
/* 800A7B9C 000A4ADC  FC 03 00 28 */ fsub f0, f3, f0
/* 800A7BA0 000A4AE0  FC 02 00 32 */ fmul f0, f2, f0
/* 800A7BA4 000A4AE4  FC 44 00 32 */ fmul f2, f4, f0
/* 800A7BA8 000A4AE8  FC 00 00 32 */ fmul f0, f0, f0
/* 800A7BAC 000A4AEC  FC 01 00 32 */ fmul f0, f1, f0
/* 800A7BB0 000A4AF0  FC 03 00 28 */ fsub f0, f3, f0
/* 800A7BB4 000A4AF4  FC 02 00 32 */ fmul f0, f2, f0
/* 800A7BB8 000A4AF8  FC 44 00 32 */ fmul f2, f4, f0
/* 800A7BBC 000A4AFC  FC 00 00 32 */ fmul f0, f0, f0
/* 800A7BC0 000A4B00  FC 01 00 32 */ fmul f0, f1, f0
/* 800A7BC4 000A4B04  FC 03 00 28 */ fsub f0, f3, f0
/* 800A7BC8 000A4B08  FC 02 00 32 */ fmul f0, f2, f0
/* 800A7BCC 000A4B0C  FC 21 00 32 */ fmul f1, f1, f0
/* 800A7BD0 000A4B10  FC 20 08 18 */ frsp f1, f1
/* 800A7BD4 000A4B14  48 00 00 88 */ b lbl_800A7C5C
lbl_800A7BD8:
/* 800A7BD8 000A4B18  C8 02 92 F8 */ lfd f0, lbl_80452CF8-_SDA2_BASE_(r2)
/* 800A7BDC 000A4B1C  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800A7BE0 000A4B20  40 80 00 10 */ bge lbl_800A7BF0
/* 800A7BE4 000A4B24  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 800A7BE8 000A4B28  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
/* 800A7BEC 000A4B2C  48 00 00 70 */ b lbl_800A7C5C
lbl_800A7BF0:
/* 800A7BF0 000A4B30  D0 21 00 08 */ stfs f1, 8(r1)
/* 800A7BF4 000A4B34  80 81 00 08 */ lwz r4, 8(r1)
/* 800A7BF8 000A4B38  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 800A7BFC 000A4B3C  3C 00 7F 80 */ lis r0, 0x7f80
/* 800A7C00 000A4B40  7C 03 00 00 */ cmpw r3, r0
/* 800A7C04 000A4B44  41 82 00 14 */ beq lbl_800A7C18
/* 800A7C08 000A4B48  40 80 00 40 */ bge lbl_800A7C48
/* 800A7C0C 000A4B4C  2C 03 00 00 */ cmpwi r3, 0
/* 800A7C10 000A4B50  41 82 00 20 */ beq lbl_800A7C30
/* 800A7C14 000A4B54  48 00 00 34 */ b lbl_800A7C48
lbl_800A7C18:
/* 800A7C18 000A4B58  54 80 02 7F */ clrlwi. r0, r4, 9
/* 800A7C1C 000A4B5C  41 82 00 0C */ beq lbl_800A7C28
/* 800A7C20 000A4B60  38 00 00 01 */ li r0, 1
/* 800A7C24 000A4B64  48 00 00 28 */ b lbl_800A7C4C
lbl_800A7C28:
/* 800A7C28 000A4B68  38 00 00 02 */ li r0, 2
/* 800A7C2C 000A4B6C  48 00 00 20 */ b lbl_800A7C4C
lbl_800A7C30:
/* 800A7C30 000A4B70  54 80 02 7F */ clrlwi. r0, r4, 9
/* 800A7C34 000A4B74  41 82 00 0C */ beq lbl_800A7C40
/* 800A7C38 000A4B78  38 00 00 05 */ li r0, 5
/* 800A7C3C 000A4B7C  48 00 00 10 */ b lbl_800A7C4C
lbl_800A7C40:
/* 800A7C40 000A4B80  38 00 00 03 */ li r0, 3
/* 800A7C44 000A4B84  48 00 00 08 */ b lbl_800A7C4C
lbl_800A7C48:
/* 800A7C48 000A4B88  38 00 00 04 */ li r0, 4
lbl_800A7C4C:
/* 800A7C4C 000A4B8C  2C 00 00 01 */ cmpwi r0, 1
/* 800A7C50 000A4B90  40 82 00 0C */ bne lbl_800A7C5C
/* 800A7C54 000A4B94  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 800A7C58 000A4B98  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
lbl_800A7C5C:
/* 800A7C5C 000A4B9C  3C 60 80 39 */ lis r3, lbl_8038D664@ha
/* 800A7C60 000A4BA0  38 63 D6 64 */ addi r3, r3, lbl_8038D664@l
/* 800A7C64 000A4BA4  C0 63 00 30 */ lfs f3, 0x30(r3)
/* 800A7C68 000A4BA8  C0 42 92 B8 */ lfs f2, lbl_80452CB8-_SDA2_BASE_(r2)
/* 800A7C6C 000A4BAC  C0 1F 00 2C */ lfs f0, 0x2c(r31)
/* 800A7C70 000A4BB0  EC 00 18 28 */ fsubs f0, f0, f3
/* 800A7C74 000A4BB4  EC 42 00 24 */ fdivs f2, f2, f0
/* 800A7C78 000A4BB8  EC 01 18 28 */ fsubs f0, f1, f3
/* 800A7C7C 000A4BBC  EC 22 00 32 */ fmuls f1, f2, f0
/* 800A7C80 000A4BC0  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800A7C84 000A4BC4  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800A7C88 000A4BC8  40 80 00 10 */ bge lbl_800A7C98
/* 800A7C8C 000A4BCC  FC 20 00 90 */ fmr f1, f0
/* 800A7C90 000A4BD0  48 00 00 08 */ b lbl_800A7C98
lbl_800A7C94:
/* 800A7C94 000A4BD4  C0 22 92 B8 */ lfs f1, lbl_80452CB8-_SDA2_BASE_(r2)
lbl_800A7C98:
/* 800A7C98 000A4BD8  83 E1 00 4C */ lwz r31, 0x4c(r1)
/* 800A7C9C 000A4BDC  83 C1 00 48 */ lwz r30, 0x48(r1)
/* 800A7CA0 000A4BE0  80 01 00 54 */ lwz r0, 0x54(r1)
/* 800A7CA4 000A4BE4  7C 08 03 A6 */ mtlr r0
/* 800A7CA8 000A4BE8  38 21 00 50 */ addi r1, r1, 0x50
/* 800A7CAC 000A4BEC  4E 80 00 20 */ blr
