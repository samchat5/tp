/* 802BDA44 002BA984  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 802BDA48 002BA988  7C 08 02 A6 */ mflr r0
/* 802BDA4C 002BA98C  90 01 00 24 */ stw r0, 0x24(r1)
/* 802BDA50 002BA990  93 E1 00 1C */ stw r31, 0x1c(r1)
/* 802BDA54 002BA994  93 C1 00 18 */ stw r30, 0x18(r1)
/* 802BDA58 002BA998  7C 7E 1B 78 */ mr r30, r3
/* 802BDA5C 002BA99C  7C BF 2B 78 */ mr r31, r5
/* 802BDA60 002BA9A0  80 64 00 00 */ lwz r3, 0(r4)
/* 802BDA64 002BA9A4  80 04 00 04 */ lwz r0, 4(r4)
/* 802BDA68 002BA9A8  90 61 00 08 */ stw r3, 8(r1)
/* 802BDA6C 002BA9AC  90 01 00 0C */ stw r0, 0xc(r1)
/* 802BDA70 002BA9B0  80 04 00 08 */ lwz r0, 8(r4)
/* 802BDA74 002BA9B4  90 01 00 10 */ stw r0, 0x10(r1)
/* 802BDA78 002BA9B8  C0 02 C0 A0 */ lfs f0, lbl_80455AA0-_SDA2_BASE_(r2)
/* 802BDA7C 002BA9BC  D0 01 00 0C */ stfs f0, 0xc(r1)
/* 802BDA80 002BA9C0  38 61 00 08 */ addi r3, r1, 8
/* 802BDA84 002BA9C4  48 08 96 CD */ bl PSVECMag
/* 802BDA88 002BA9C8  C0 02 C0 C0 */ lfs f0, lbl_80455AC0-_SDA2_BASE_(r2)
/* 802BDA8C 002BA9CC  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 802BDA90 002BA9D0  40 80 00 0C */ bge lbl_802BDA9C
/* 802BDA94 002BA9D4  C0 22 C0 A8 */ lfs f1, lbl_80455AA8-_SDA2_BASE_(r2)
/* 802BDA98 002BA9D8  48 00 00 94 */ b lbl_802BDB2C
lbl_802BDA9C:
/* 802BDA9C 002BA9DC  C0 C2 C0 A8 */ lfs f6, lbl_80455AA8-_SDA2_BASE_(r2)
/* 802BDAA0 002BA9E0  C0 5E 00 64 */ lfs f2, 0x64(r30)
/* 802BDAA4 002BA9E4  C0 01 00 08 */ lfs f0, 8(r1)
/* 802BDAA8 002BA9E8  EC 00 08 24 */ fdivs f0, f0, f1
/* 802BDAAC 002BA9EC  EC 02 00 32 */ fmuls f0, f2, f0
/* 802BDAB0 002BA9F0  EC 26 00 2A */ fadds f1, f6, f0
/* 802BDAB4 002BA9F4  C0 01 00 10 */ lfs f0, 0x10(r1)
/* 802BDAB8 002BA9F8  C0 42 C0 A0 */ lfs f2, lbl_80455AA0-_SDA2_BASE_(r2)
/* 802BDABC 002BA9FC  FC 00 10 40 */ fcmpo cr0, f0, f2
/* 802BDAC0 002BAA00  4C 40 13 82 */ cror 2, 0, 2
/* 802BDAC4 002BAA04  40 82 00 44 */ bne lbl_802BDB08
/* 802BDAC8 002BAA08  1C 1F 00 74 */ mulli r0, r31, 0x74
/* 802BDACC 002BAA0C  7C 7E 02 14 */ add r3, r30, r0
/* 802BDAD0 002BAA10  C0 83 01 88 */ lfs f4, 0x188(r3)
/* 802BDAD4 002BAA14  FC 01 30 40 */ fcmpo cr0, f1, f6
/* 802BDAD8 002BAA18  40 80 00 18 */ bge lbl_802BDAF0
/* 802BDADC 002BAA1C  FC 60 30 90 */ fmr f3, f6
/* 802BDAE0 002BAA20  FC A0 10 90 */ fmr f5, f2
/* 802BDAE4 002BAA24  38 60 00 01 */ li r3, 1
/* 802BDAE8 002BAA28  4B FE BC 0D */ bl getParamByExp__6Z2CalcFffffffQ26Z2Calc9CurveSign
/* 802BDAEC 002BAA2C  48 00 00 1C */ b lbl_802BDB08
lbl_802BDAF0:
/* 802BDAF0 002BAA30  FC 40 30 90 */ fmr f2, f6
/* 802BDAF4 002BAA34  C0 62 C0 A4 */ lfs f3, lbl_80455AA4-_SDA2_BASE_(r2)
/* 802BDAF8 002BAA38  FC A0 30 90 */ fmr f5, f6
/* 802BDAFC 002BAA3C  FC C0 18 90 */ fmr f6, f3
/* 802BDB00 002BAA40  38 60 00 00 */ li r3, 0
/* 802BDB04 002BAA44  4B FE BB F1 */ bl getParamByExp__6Z2CalcFffffffQ26Z2Calc9CurveSign
lbl_802BDB08:
/* 802BDB08 002BAA48  C0 02 C0 A4 */ lfs f0, lbl_80455AA4-_SDA2_BASE_(r2)
/* 802BDB0C 002BAA4C  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 802BDB10 002BAA50  40 81 00 0C */ ble lbl_802BDB1C
/* 802BDB14 002BAA54  FC 20 00 90 */ fmr f1, f0
/* 802BDB18 002BAA58  48 00 00 14 */ b lbl_802BDB2C
lbl_802BDB1C:
/* 802BDB1C 002BAA5C  C0 02 C0 A0 */ lfs f0, lbl_80455AA0-_SDA2_BASE_(r2)
/* 802BDB20 002BAA60  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 802BDB24 002BAA64  40 80 00 08 */ bge lbl_802BDB2C
/* 802BDB28 002BAA68  FC 20 00 90 */ fmr f1, f0
lbl_802BDB2C:
/* 802BDB2C 002BAA6C  83 E1 00 1C */ lwz r31, 0x1c(r1)
/* 802BDB30 002BAA70  83 C1 00 18 */ lwz r30, 0x18(r1)
/* 802BDB34 002BAA74  80 01 00 24 */ lwz r0, 0x24(r1)
/* 802BDB38 002BAA78  7C 08 03 A6 */ mtlr r0
/* 802BDB3C 002BAA7C  38 21 00 20 */ addi r1, r1, 0x20
/* 802BDB40 002BAA80  4E 80 00 20 */ blr
