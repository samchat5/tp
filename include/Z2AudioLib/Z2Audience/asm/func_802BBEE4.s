/* 802BBEE4 002B8E24  94 21 FF 80 */ stwu r1, -0x80(r1)
/* 802BBEE8 002B8E28  7C 08 02 A6 */ mflr r0
/* 802BBEEC 002B8E2C  90 01 00 84 */ stw r0, 0x84(r1)
/* 802BBEF0 002B8E30  DB E1 00 70 */ stfd f31, 0x70(r1)
/* 802BBEF4 002B8E34  F3 E1 00 78 */ psq_st f31, 120(r1), 0, 0
/* 802BBEF8 002B8E38  DB C1 00 60 */ stfd f30, 0x60(r1)
/* 802BBEFC 002B8E3C  F3 C1 00 68 */ psq_st f30, 104(r1), 0, 0
/* 802BBF00 002B8E40  DB A1 00 50 */ stfd f29, 0x50(r1)
/* 802BBF04 002B8E44  F3 A1 00 58 */ psq_st f29, 88(r1), 0, 0
/* 802BBF08 002B8E48  DB 81 00 40 */ stfd f28, 0x40(r1)
/* 802BBF0C 002B8E4C  F3 81 00 48 */ psq_st f28, 72(r1), 0, 0
/* 802BBF10 002B8E50  39 61 00 40 */ addi r11, r1, 0x40
/* 802BBF14 002B8E54  48 0A 62 C9 */ bl _savegpr_29
/* 802BBF18 002B8E58  7C 9D 23 78 */ mr r29, r4
/* 802BBF1C 002B8E5C  7C BE 2B 78 */ mr r30, r5
/* 802BBF20 002B8E60  1C C6 00 38 */ mulli r6, r6, 0x38
/* 802BBF24 002B8E64  3B E6 00 2C */ addi r31, r6, 0x2c
/* 802BBF28 002B8E68  7F E3 FA 14 */ add r31, r3, r31
/* 802BBF2C 002B8E6C  A0 03 00 12 */ lhz r0, 0x12(r3)
/* 802BBF30 002B8E70  54 00 C7 3F */ rlwinm. r0, r0, 0x18, 0x1c, 0x1f
/* 802BBF34 002B8E74  40 82 00 10 */ bne lbl_802BBF44
/* 802BBF38 002B8E78  7F E3 FB 78 */ mr r3, r31
/* 802BBF3C 002B8E7C  4B FE 25 41 */ bl JASSoundParams_NS_combine
/* 802BBF40 002B8E80  48 00 02 8C */ b lbl_802BC1CC
lbl_802BBF44:
/* 802BBF44 002B8E84  C0 1F 00 28 */ lfs f0, 0x28(r31)
/* 802BBF48 002B8E88  C0 62 C0 A0 */ lfs f3, lbl_80455AA0-_SDA2_BASE_(r2)
/* 802BBF4C 002B8E8C  FC 00 18 40 */ fcmpo cr0, f0, f3
/* 802BBF50 002B8E90  40 80 00 28 */ bge lbl_802BBF78
/* 802BBF54 002B8E94  C0 02 C0 A4 */ lfs f0, lbl_80455AA4-_SDA2_BASE_(r2)
/* 802BBF58 002B8E98  D0 1F 00 28 */ stfs f0, 0x28(r31)
/* 802BBF5C 002B8E9C  C0 1E 00 0C */ lfs f0, 0xc(r30)
/* 802BBF60 002B8EA0  D0 1F 00 2C */ stfs f0, 0x2c(r31)
/* 802BBF64 002B8EA4  C0 1E 00 10 */ lfs f0, 0x10(r30)
/* 802BBF68 002B8EA8  D0 1F 00 30 */ stfs f0, 0x30(r31)
/* 802BBF6C 002B8EAC  7F E3 FB 78 */ mr r3, r31
/* 802BBF70 002B8EB0  4B FE 25 0D */ bl JASSoundParams_NS_combine
/* 802BBF74 002B8EB4  48 00 02 58 */ b lbl_802BC1CC
lbl_802BBF78:
/* 802BBF78 002B8EB8  C0 02 C0 A4 */ lfs f0, lbl_80455AA4-_SDA2_BASE_(r2)
/* 802BBF7C 002B8EBC  D0 01 00 08 */ stfs f0, 8(r1)
/* 802BBF80 002B8EC0  D0 01 00 10 */ stfs f0, 0x10(r1)
/* 802BBF84 002B8EC4  D0 61 00 0C */ stfs f3, 0xc(r1)
/* 802BBF88 002B8EC8  C0 42 C0 A8 */ lfs f2, lbl_80455AA8-_SDA2_BASE_(r2)
/* 802BBF8C 002B8ECC  D0 41 00 14 */ stfs f2, 0x14(r1)
/* 802BBF90 002B8ED0  D0 61 00 18 */ stfs f3, 0x18(r1)
/* 802BBF94 002B8ED4  C0 1E 00 04 */ lfs f0, 4(r30)
/* 802BBF98 002B8ED8  D0 01 00 0C */ stfs f0, 0xc(r1)
/* 802BBF9C 002B8EDC  C0 1E 00 08 */ lfs f0, 8(r30)
/* 802BBFA0 002B8EE0  D0 01 00 10 */ stfs f0, 0x10(r1)
/* 802BBFA4 002B8EE4  C0 3E 00 0C */ lfs f1, 0xc(r30)
/* 802BBFA8 002B8EE8  C0 1F 00 2C */ lfs f0, 0x2c(r31)
/* 802BBFAC 002B8EEC  EF E1 00 28 */ fsubs f31, f1, f0
/* 802BBFB0 002B8EF0  C0 3E 00 10 */ lfs f1, 0x10(r30)
/* 802BBFB4 002B8EF4  C0 1F 00 30 */ lfs f0, 0x30(r31)
/* 802BBFB8 002B8EF8  EF C1 00 28 */ fsubs f30, f1, f0
/* 802BBFBC 002B8EFC  EC 3F 07 F2 */ fmuls f1, f31, f31
/* 802BBFC0 002B8F00  EC 1E 07 B2 */ fmuls f0, f30, f30
/* 802BBFC4 002B8F04  EC 81 00 2A */ fadds f4, f1, f0
/* 802BBFC8 002B8F08  FC 04 18 40 */ fcmpo cr0, f4, f3
/* 802BBFCC 002B8F0C  4C 40 13 82 */ cror 2, 0, 2
/* 802BBFD0 002B8F10  40 82 00 08 */ bne lbl_802BBFD8
/* 802BBFD4 002B8F14  48 00 00 28 */ b lbl_802BBFFC
lbl_802BBFD8:
/* 802BBFD8 002B8F18  FC 00 20 34 */ frsqrte f0, f4
/* 802BBFDC 002B8F1C  FC 00 00 18 */ frsp f0, f0
/* 802BBFE0 002B8F20  EC 42 00 32 */ fmuls f2, f2, f0
/* 802BBFE4 002B8F24  C0 22 C0 B0 */ lfs f1, lbl_80455AB0-_SDA2_BASE_(r2)
/* 802BBFE8 002B8F28  EC 00 00 32 */ fmuls f0, f0, f0
/* 802BBFEC 002B8F2C  EC 04 00 32 */ fmuls f0, f4, f0
/* 802BBFF0 002B8F30  EC 01 00 28 */ fsubs f0, f1, f0
/* 802BBFF4 002B8F34  EC 02 00 32 */ fmuls f0, f2, f0
/* 802BBFF8 002B8F38  EC 84 00 32 */ fmuls f4, f4, f0
lbl_802BBFFC:
/* 802BBFFC 002B8F3C  C0 1E 00 00 */ lfs f0, 0(r30)
/* 802BC000 002B8F40  EF A0 01 32 */ fmuls f29, f0, f4
/* 802BC004 002B8F44  C3 82 C0 A4 */ lfs f28, lbl_80455AA4-_SDA2_BASE_(r2)
/* 802BC008 002B8F48  C8 22 C0 D0 */ lfd f1, lbl_80455AD0-_SDA2_BASE_(r2)
/* 802BC00C 002B8F4C  90 01 00 24 */ stw r0, 0x24(r1)
/* 802BC010 002B8F50  3C 00 43 30 */ lis r0, 0x4330
/* 802BC014 002B8F54  90 01 00 20 */ stw r0, 0x20(r1)
/* 802BC018 002B8F58  C8 01 00 20 */ lfd f0, 0x20(r1)
/* 802BC01C 002B8F5C  EC 20 08 28 */ fsubs f1, f0, f1
/* 802BC020 002B8F60  C0 42 C0 A0 */ lfs f2, lbl_80455AA0-_SDA2_BASE_(r2)
/* 802BC024 002B8F64  C0 62 C0 B4 */ lfs f3, lbl_80455AB4-_SDA2_BASE_(r2)
/* 802BC028 002B8F68  FC 80 E0 90 */ fmr f4, f28
/* 802BC02C 002B8F6C  C0 A2 C0 B8 */ lfs f5, lbl_80455AB8-_SDA2_BASE_(r2)
/* 802BC030 002B8F70  38 60 00 01 */ li r3, 1
/* 802BC034 002B8F74  4B FE D6 59 */ bl linearTransform__6Z2CalcFfffffb
/* 802BC038 002B8F78  FC A0 08 90 */ fmr f5, f1
/* 802BC03C 002B8F7C  C0 1E 00 00 */ lfs f0, 0(r30)
/* 802BC040 002B8F80  FC 00 28 40 */ fcmpo cr0, f0, f5
/* 802BC044 002B8F84  40 81 00 3C */ ble lbl_802BC080
/* 802BC048 002B8F88  C0 62 C0 BC */ lfs f3, lbl_80455ABC-_SDA2_BASE_(r2)
/* 802BC04C 002B8F8C  FC 1D 18 40 */ fcmpo cr0, f29, f3
/* 802BC050 002B8F90  40 81 00 30 */ ble lbl_802BC080
/* 802BC054 002B8F94  FC 20 E8 90 */ fmr f1, f29
/* 802BC058 002B8F98  C0 42 C0 B8 */ lfs f2, lbl_80455AB8-_SDA2_BASE_(r2)
/* 802BC05C 002B8F9C  C0 82 C0 C0 */ lfs f4, lbl_80455AC0-_SDA2_BASE_(r2)
/* 802BC060 002B8FA0  C0 C2 C0 A4 */ lfs f6, lbl_80455AA4-_SDA2_BASE_(r2)
/* 802BC064 002B8FA4  38 60 00 01 */ li r3, 1
/* 802BC068 002B8FA8  4B FE D6 8D */ bl getParamByExp__6Z2CalcFffffffQ26Z2Calc9CurveSign
/* 802BC06C 002B8FAC  FF 80 08 90 */ fmr f28, f1
/* 802BC070 002B8FB0  C0 02 C0 A0 */ lfs f0, lbl_80455AA0-_SDA2_BASE_(r2)
/* 802BC074 002B8FB4  FC 1C 00 40 */ fcmpo cr0, f28, f0
/* 802BC078 002B8FB8  40 80 00 08 */ bge lbl_802BC080
/* 802BC07C 002B8FBC  FF 80 00 90 */ fmr f28, f0
lbl_802BC080:
/* 802BC080 002B8FC0  C0 1F 00 28 */ lfs f0, 0x28(r31)
/* 802BC084 002B8FC4  EF 9C 00 28 */ fsubs f28, f28, f0
/* 802BC088 002B8FC8  C0 62 C0 A0 */ lfs f3, lbl_80455AA0-_SDA2_BASE_(r2)
/* 802BC08C 002B8FCC  FC 1C 18 40 */ fcmpo cr0, f28, f3
/* 802BC090 002B8FD0  40 81 00 24 */ ble lbl_802BC0B4
/* 802BC094 002B8FD4  FC 20 E2 10 */ fabs f1, f28
/* 802BC098 002B8FD8  C0 42 C0 A4 */ lfs f2, lbl_80455AA4-_SDA2_BASE_(r2)
/* 802BC09C 002B8FDC  C0 82 C0 C0 */ lfs f4, lbl_80455AC0-_SDA2_BASE_(r2)
/* 802BC0A0 002B8FE0  FC A0 20 90 */ fmr f5, f4
/* 802BC0A4 002B8FE4  C0 C2 C0 A8 */ lfs f6, lbl_80455AA8-_SDA2_BASE_(r2)
/* 802BC0A8 002B8FE8  38 60 00 01 */ li r3, 1
/* 802BC0AC 002B8FEC  4B FE D6 49 */ bl getParamByExp__6Z2CalcFffffffQ26Z2Calc9CurveSign
/* 802BC0B0 002B8FF0  48 00 00 20 */ b lbl_802BC0D0
lbl_802BC0B4:
/* 802BC0B4 002B8FF4  FC 20 E2 10 */ fabs f1, f28
/* 802BC0B8 002B8FF8  C0 42 C0 AC */ lfs f2, lbl_80455AAC-_SDA2_BASE_(r2)
/* 802BC0BC 002B8FFC  C0 82 C0 C0 */ lfs f4, lbl_80455AC0-_SDA2_BASE_(r2)
/* 802BC0C0 002B9000  C0 A2 C0 C4 */ lfs f5, lbl_80455AC4-_SDA2_BASE_(r2)
/* 802BC0C4 002B9004  C0 C2 C0 A8 */ lfs f6, lbl_80455AA8-_SDA2_BASE_(r2)
/* 802BC0C8 002B9008  38 60 00 01 */ li r3, 1
/* 802BC0CC 002B900C  4B FE D6 29 */ bl getParamByExp__6Z2CalcFffffffQ26Z2Calc9CurveSign
lbl_802BC0D0:
/* 802BC0D0 002B9010  C0 5F 00 28 */ lfs f2, 0x28(r31)
/* 802BC0D4 002B9014  EC 1C 00 72 */ fmuls f0, f28, f1
/* 802BC0D8 002B9018  EC 22 00 2A */ fadds f1, f2, f0
/* 802BC0DC 002B901C  C0 02 C0 A0 */ lfs f0, lbl_80455AA0-_SDA2_BASE_(r2)
/* 802BC0E0 002B9020  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 802BC0E4 002B9024  40 80 00 0C */ bge lbl_802BC0F0
/* 802BC0E8 002B9028  FC 20 00 90 */ fmr f1, f0
/* 802BC0EC 002B902C  48 00 00 14 */ b lbl_802BC100
lbl_802BC0F0:
/* 802BC0F0 002B9030  C0 02 C0 A4 */ lfs f0, lbl_80455AA4-_SDA2_BASE_(r2)
/* 802BC0F4 002B9034  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 802BC0F8 002B9038  40 81 00 08 */ ble lbl_802BC100
/* 802BC0FC 002B903C  FC 20 00 90 */ fmr f1, f0
lbl_802BC100:
/* 802BC100 002B9040  C0 1E 00 00 */ lfs f0, 0(r30)
/* 802BC104 002B9044  EC 00 00 72 */ fmuls f0, f0, f1
/* 802BC108 002B9048  D0 01 00 08 */ stfs f0, 8(r1)
/* 802BC10C 002B904C  D0 3F 00 28 */ stfs f1, 0x28(r31)
/* 802BC110 002B9050  FC 20 FA 10 */ fabs f1, f31
/* 802BC114 002B9054  C0 01 00 08 */ lfs f0, 8(r1)
/* 802BC118 002B9058  EC 20 00 72 */ fmuls f1, f0, f1
/* 802BC11C 002B905C  C0 42 C0 A4 */ lfs f2, lbl_80455AA4-_SDA2_BASE_(r2)
/* 802BC120 002B9060  C0 62 C0 A0 */ lfs f3, lbl_80455AA0-_SDA2_BASE_(r2)
/* 802BC124 002B9064  C0 82 C0 C0 */ lfs f4, lbl_80455AC0-_SDA2_BASE_(r2)
/* 802BC128 002B9068  C0 A2 C0 C4 */ lfs f5, lbl_80455AC4-_SDA2_BASE_(r2)
/* 802BC12C 002B906C  C0 C2 C0 C8 */ lfs f6, lbl_80455AC8-_SDA2_BASE_(r2)
/* 802BC130 002B9070  38 60 00 01 */ li r3, 1
/* 802BC134 002B9074  4B FE D5 C1 */ bl getParamByExp__6Z2CalcFffffffQ26Z2Calc9CurveSign
/* 802BC138 002B9078  FF 80 08 90 */ fmr f28, f1
/* 802BC13C 002B907C  FC 20 F2 10 */ fabs f1, f30
/* 802BC140 002B9080  C0 01 00 08 */ lfs f0, 8(r1)
/* 802BC144 002B9084  EC 20 00 72 */ fmuls f1, f0, f1
/* 802BC148 002B9088  C0 42 C0 A4 */ lfs f2, lbl_80455AA4-_SDA2_BASE_(r2)
/* 802BC14C 002B908C  C0 62 C0 A0 */ lfs f3, lbl_80455AA0-_SDA2_BASE_(r2)
/* 802BC150 002B9090  C0 82 C0 C0 */ lfs f4, lbl_80455AC0-_SDA2_BASE_(r2)
/* 802BC154 002B9094  C0 A2 C0 C4 */ lfs f5, lbl_80455AC4-_SDA2_BASE_(r2)
/* 802BC158 002B9098  C0 C2 C0 C8 */ lfs f6, lbl_80455AC8-_SDA2_BASE_(r2)
/* 802BC15C 002B909C  38 60 00 01 */ li r3, 1
/* 802BC160 002B90A0  4B FE D5 95 */ bl getParamByExp__6Z2CalcFffffffQ26Z2Calc9CurveSign
/* 802BC164 002B90A4  C0 02 C0 C8 */ lfs f0, lbl_80455AC8-_SDA2_BASE_(r2)
/* 802BC168 002B90A8  FC 1C 00 40 */ fcmpo cr0, f28, f0
/* 802BC16C 002B90AC  40 81 00 08 */ ble lbl_802BC174
/* 802BC170 002B90B0  FF 80 00 90 */ fmr f28, f0
lbl_802BC174:
/* 802BC174 002B90B4  C0 02 C0 C8 */ lfs f0, lbl_80455AC8-_SDA2_BASE_(r2)
/* 802BC178 002B90B8  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 802BC17C 002B90BC  40 81 00 08 */ ble lbl_802BC184
/* 802BC180 002B90C0  FC 20 00 90 */ fmr f1, f0
lbl_802BC184:
/* 802BC184 002B90C4  C0 5F 00 2C */ lfs f2, 0x2c(r31)
/* 802BC188 002B90C8  EC 1F 07 32 */ fmuls f0, f31, f28
/* 802BC18C 002B90CC  EC 02 00 2A */ fadds f0, f2, f0
/* 802BC190 002B90D0  D0 01 00 14 */ stfs f0, 0x14(r1)
/* 802BC194 002B90D4  C0 5F 00 30 */ lfs f2, 0x30(r31)
/* 802BC198 002B90D8  EC 1E 00 72 */ fmuls f0, f30, f1
/* 802BC19C 002B90DC  EC 02 00 2A */ fadds f0, f2, f0
/* 802BC1A0 002B90E0  D0 01 00 18 */ stfs f0, 0x18(r1)
/* 802BC1A4 002B90E4  38 61 00 08 */ addi r3, r1, 8
/* 802BC1A8 002B90E8  4B FE 22 09 */ bl JASSoundParams_NS_clamp
/* 802BC1AC 002B90EC  7F E3 FB 78 */ mr r3, r31
/* 802BC1B0 002B90F0  7F A4 EB 78 */ mr r4, r29
/* 802BC1B4 002B90F4  38 A1 00 08 */ addi r5, r1, 8
/* 802BC1B8 002B90F8  4B FE 22 C5 */ bl JASSoundParams_NS_combine
/* 802BC1BC 002B90FC  C0 01 00 14 */ lfs f0, 0x14(r1)
/* 802BC1C0 002B9100  D0 1F 00 2C */ stfs f0, 0x2c(r31)
/* 802BC1C4 002B9104  C0 01 00 18 */ lfs f0, 0x18(r1)
/* 802BC1C8 002B9108  D0 1F 00 30 */ stfs f0, 0x30(r31)
lbl_802BC1CC:
/* 802BC1CC 002B910C  E3 E1 00 78 */ psq_l f31, 120(r1), 0, 0
/* 802BC1D0 002B9110  CB E1 00 70 */ lfd f31, 0x70(r1)
/* 802BC1D4 002B9114  E3 C1 00 68 */ psq_l f30, 104(r1), 0, 0
/* 802BC1D8 002B9118  CB C1 00 60 */ lfd f30, 0x60(r1)
/* 802BC1DC 002B911C  E3 A1 00 58 */ psq_l f29, 88(r1), 0, 0
/* 802BC1E0 002B9120  CB A1 00 50 */ lfd f29, 0x50(r1)
/* 802BC1E4 002B9124  E3 81 00 48 */ psq_l f28, 72(r1), 0, 0
/* 802BC1E8 002B9128  CB 81 00 40 */ lfd f28, 0x40(r1)
/* 802BC1EC 002B912C  39 61 00 40 */ addi r11, r1, 0x40
/* 802BC1F0 002B9130  48 0A 60 39 */ bl _restgpr_29
/* 802BC1F4 002B9134  80 01 00 84 */ lwz r0, 0x84(r1)
/* 802BC1F8 002B9138  7C 08 03 A6 */ mtlr r0
/* 802BC1FC 002B913C  38 21 00 80 */ addi r1, r1, 0x80
/* 802BC200 002B9140  4E 80 00 20 */ blr
