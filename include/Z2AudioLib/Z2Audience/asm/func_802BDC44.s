/* 802BDC44 002BAB84  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 802BDC48 002BAB88  7C 08 02 A6 */ mflr r0
/* 802BDC4C 002BAB8C  90 01 00 14 */ stw r0, 0x14(r1)
/* 802BDC50 002BAB90  54 80 10 3A */ slwi r0, r4, 2
/* 802BDC54 002BAB94  7C 83 02 14 */ add r4, r3, r0
/* 802BDC58 002BAB98  C0 04 00 0C */ lfs f0, 0xc(r4)
/* 802BDC5C 002BAB9C  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 802BDC60 002BABA0  40 81 00 1C */ ble lbl_802BDC7C
/* 802BDC64 002BABA4  54 A0 06 3F */ clrlwi. r0, r5, 0x18
/* 802BDC68 002BABA8  41 82 00 0C */ beq lbl_802BDC74
/* 802BDC6C 002BABAC  38 60 FF FF */ li r3, -1
/* 802BDC70 002BABB0  48 00 00 30 */ b lbl_802BDCA0
lbl_802BDC74:
/* 802BDC74 002BABB4  80 63 00 70 */ lwz r3, 0x70(r3)
/* 802BDC78 002BABB8  48 00 00 28 */ b lbl_802BDCA0
lbl_802BDC7C:
/* 802BDC7C 002BABBC  C0 03 00 48 */ lfs f0, 0x48(r3)
/* 802BDC80 002BABC0  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 802BDC84 002BABC4  40 80 00 0C */ bge lbl_802BDC90
/* 802BDC88 002BABC8  38 60 00 00 */ li r3, 0
/* 802BDC8C 002BABCC  48 00 00 14 */ b lbl_802BDCA0
lbl_802BDC90:
/* 802BDC90 002BABD0  C0 44 00 B8 */ lfs f2, 0xb8(r4)
/* 802BDC94 002BABD4  EC 01 00 28 */ fsubs f0, f1, f0
/* 802BDC98 002BABD8  EC 22 00 32 */ fmuls f1, f2, f0
/* 802BDC9C 002BABDC  48 0A 44 11 */ bl func_803620AC
lbl_802BDCA0:
/* 802BDCA0 002BABE0  80 01 00 14 */ lwz r0, 0x14(r1)
/* 802BDCA4 002BABE4  7C 08 03 A6 */ mtlr r0
/* 802BDCA8 002BABE8  38 21 00 10 */ addi r1, r1, 0x10
/* 802BDCAC 002BABEC  4E 80 00 20 */ blr
