/* 802C7CF4 002C4C34  94 21 FF C0 */ stwu r1, -0x40(r1)
/* 802C7CF8 002C4C38  7C 08 02 A6 */ mflr r0
/* 802C7CFC 002C4C3C  90 01 00 44 */ stw r0, 0x44(r1)
/* 802C7D00 002C4C40  DB E1 00 30 */ stfd f31, 0x30(r1)
/* 802C7D04 002C4C44  F3 E1 00 38 */ psq_st f31, 56(r1), 0, 0
/* 802C7D08 002C4C48  DB C1 00 20 */ stfd f30, 0x20(r1)
/* 802C7D0C 002C4C4C  F3 C1 00 28 */ psq_st f30, 40(r1), 0, 0
/* 802C7D10 002C4C50  93 E1 00 1C */ stw r31, 0x1c(r1)
/* 802C7D14 002C4C54  93 C1 00 18 */ stw r30, 0x18(r1)
/* 802C7D18 002C4C58  7C 7E 1B 78 */ mr r30, r3
/* 802C7D1C 002C4C5C  7C 9F 23 78 */ mr r31, r4
/* 802C7D20 002C4C60  88 03 00 7C */ lbz r0, 0x7c(r3)
/* 802C7D24 002C4C64  7C 00 07 75 */ extsb. r0, r0
/* 802C7D28 002C4C68  40 80 00 88 */ bge lbl_802C7DB0
/* 802C7D2C 002C4C6C  C0 22 C4 2C */ lfs f1, lbl_80455E2C-_SDA2_BASE_(r2)
/* 802C7D30 002C4C70  C0 42 BE 20 */ lfs f2, lbl_80455820-_SDA2_BASE_(r2)
/* 802C7D34 002C4C74  C0 62 BE 24 */ lfs f3, lbl_80455824-_SDA2_BASE_(r2)
/* 802C7D38 002C4C78  4B FE 1A DD */ bl getRandom__6Z2CalcFfff
/* 802C7D3C 002C4C7C  C0 02 C3 60 */ lfs f0, lbl_80455D60-_SDA2_BASE_(r2)
/* 802C7D40 002C4C80  EF C1 00 2A */ fadds f30, f1, f0
/* 802C7D44 002C4C84  C0 22 C4 2C */ lfs f1, lbl_80455E2C-_SDA2_BASE_(r2)
/* 802C7D48 002C4C88  C0 42 BE 20 */ lfs f2, lbl_80455820-_SDA2_BASE_(r2)
/* 802C7D4C 002C4C8C  C0 62 BE 24 */ lfs f3, lbl_80455824-_SDA2_BASE_(r2)
/* 802C7D50 002C4C90  4B FE 1A C5 */ bl getRandom__6Z2CalcFfff
/* 802C7D54 002C4C94  C0 02 C3 60 */ lfs f0, lbl_80455D60-_SDA2_BASE_(r2)
/* 802C7D58 002C4C98  EC 81 00 2A */ fadds f4, f1, f0
/* 802C7D5C 002C4C9C  3C 60 00 09 */ lis r3, 0x0009002A@ha
/* 802C7D60 002C4CA0  38 03 00 2A */ addi r0, r3, 0x0009002A@l
/* 802C7D64 002C4CA4  90 01 00 0C */ stw r0, 0xc(r1)
/* 802C7D68 002C4CA8  38 7E 01 18 */ addi r3, r30, 0x118
/* 802C7D6C 002C4CAC  38 81 00 0C */ addi r4, r1, 0xc
/* 802C7D70 002C4CB0  7F E0 07 74 */ extsb r0, r31
/* 802C7D74 002C4CB4  C8 22 C4 20 */ lfd f1, lbl_80455E20-_SDA2_BASE_(r2)
/* 802C7D78 002C4CB8  6C 00 80 00 */ xoris r0, r0, 0x8000
/* 802C7D7C 002C4CBC  90 01 00 14 */ stw r0, 0x14(r1)
/* 802C7D80 002C4CC0  3C 00 43 30 */ lis r0, 0x4330
/* 802C7D84 002C4CC4  90 01 00 10 */ stw r0, 0x10(r1)
/* 802C7D88 002C4CC8  C8 01 00 10 */ lfd f0, 0x10(r1)
/* 802C7D8C 002C4CCC  EC 20 08 28 */ fsubs f1, f0, f1
/* 802C7D90 002C4CD0  C0 02 C3 F4 */ lfs f0, lbl_80455DF4-_SDA2_BASE_(r2)
/* 802C7D94 002C4CD4  EC 21 00 24 */ fdivs f1, f1, f0
/* 802C7D98 002C4CD8  C0 42 C3 44 */ lfs f2, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C7D9C 002C4CDC  FC 60 F0 90 */ fmr f3, f30
/* 802C7DA0 002C4CE0  FC A0 10 90 */ fmr f5, f2
/* 802C7DA4 002C4CE4  38 A0 00 00 */ li r5, 0
/* 802C7DA8 002C4CE8  4B FF DB 61 */ bl Z2EnvSeBase_NS_startEnvSe
/* 802C7DAC 002C4CEC  48 00 00 94 */ b lbl_802C7E40
lbl_802C7DB0:
/* 802C7DB0 002C4CF0  C0 1E 00 68 */ lfs f0, 0x68(r30)
/* 802C7DB4 002C4CF4  C3 C2 C3 44 */ lfs f30, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C7DB8 002C4CF8  FC 00 F0 40 */ fcmpo cr0, f0, f30
/* 802C7DBC 002C4CFC  40 81 00 08 */ ble lbl_802C7DC4
/* 802C7DC0 002C4D00  48 00 00 18 */ b lbl_802C7DD8
lbl_802C7DC4:
/* 802C7DC4 002C4D04  C3 C2 C3 48 */ lfs f30, lbl_80455D48-_SDA2_BASE_(r2)
/* 802C7DC8 002C4D08  FC 00 F0 40 */ fcmpo cr0, f0, f30
/* 802C7DCC 002C4D0C  40 80 00 08 */ bge lbl_802C7DD4
/* 802C7DD0 002C4D10  48 00 00 08 */ b lbl_802C7DD8
lbl_802C7DD4:
/* 802C7DD4 002C4D14  FF C0 00 90 */ fmr f30, f0
lbl_802C7DD8:
/* 802C7DD8 002C4D18  3C 60 00 09 */ lis r3, 0x0009002C@ha
/* 802C7DDC 002C4D1C  38 03 00 2C */ addi r0, r3, 0x0009002C@l
/* 802C7DE0 002C4D20  90 01 00 08 */ stw r0, 8(r1)
/* 802C7DE4 002C4D24  38 7E 00 64 */ addi r3, r30, 0x64
/* 802C7DE8 002C4D28  4B FE 6F D9 */ bl getDolbyPower__12Z2MultiSeMgrFv
/* 802C7DEC 002C4D2C  FF E0 08 90 */ fmr f31, f1
/* 802C7DF0 002C4D30  38 7E 00 64 */ addi r3, r30, 0x64
/* 802C7DF4 002C4D34  4B FE 6E ED */ bl getPanPower__12Z2MultiSeMgrFv
/* 802C7DF8 002C4D38  FC 60 08 90 */ fmr f3, f1
/* 802C7DFC 002C4D3C  38 7E 01 18 */ addi r3, r30, 0x118
/* 802C7E00 002C4D40  38 81 00 08 */ addi r4, r1, 8
/* 802C7E04 002C4D44  7F E0 07 74 */ extsb r0, r31
/* 802C7E08 002C4D48  C8 22 C4 20 */ lfd f1, lbl_80455E20-_SDA2_BASE_(r2)
/* 802C7E0C 002C4D4C  6C 00 80 00 */ xoris r0, r0, 0x8000
/* 802C7E10 002C4D50  90 01 00 14 */ stw r0, 0x14(r1)
/* 802C7E14 002C4D54  3C 00 43 30 */ lis r0, 0x4330
/* 802C7E18 002C4D58  90 01 00 10 */ stw r0, 0x10(r1)
/* 802C7E1C 002C4D5C  C8 01 00 10 */ lfd f0, 0x10(r1)
/* 802C7E20 002C4D60  EC 20 08 28 */ fsubs f1, f0, f1
/* 802C7E24 002C4D64  C0 02 C3 F4 */ lfs f0, lbl_80455DF4-_SDA2_BASE_(r2)
/* 802C7E28 002C4D68  EC 21 00 24 */ fdivs f1, f1, f0
/* 802C7E2C 002C4D6C  FC 40 F0 90 */ fmr f2, f30
/* 802C7E30 002C4D70  FC 80 F8 90 */ fmr f4, f31
/* 802C7E34 002C4D74  C0 A2 C3 44 */ lfs f5, lbl_80455D44-_SDA2_BASE_(r2)
/* 802C7E38 002C4D78  38 A0 00 00 */ li r5, 0
/* 802C7E3C 002C4D7C  4B FF DA CD */ bl Z2EnvSeBase_NS_startEnvSe
lbl_802C7E40:
/* 802C7E40 002C4D80  E3 E1 00 38 */ psq_l f31, 56(r1), 0, 0
/* 802C7E44 002C4D84  CB E1 00 30 */ lfd f31, 0x30(r1)
/* 802C7E48 002C4D88  E3 C1 00 28 */ psq_l f30, 40(r1), 0, 0
/* 802C7E4C 002C4D8C  CB C1 00 20 */ lfd f30, 0x20(r1)
/* 802C7E50 002C4D90  83 E1 00 1C */ lwz r31, 0x1c(r1)
/* 802C7E54 002C4D94  83 C1 00 18 */ lwz r30, 0x18(r1)
/* 802C7E58 002C4D98  80 01 00 44 */ lwz r0, 0x44(r1)
/* 802C7E5C 002C4D9C  7C 08 03 A6 */ mtlr r0
/* 802C7E60 002C4DA0  38 21 00 40 */ addi r1, r1, 0x40
/* 802C7E64 002C4DA4  4E 80 00 20 */ blr
