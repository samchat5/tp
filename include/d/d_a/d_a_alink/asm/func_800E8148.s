/* 800E8148 000E5088  94 21 FF B0 */ stwu r1, -0x50(r1)
/* 800E814C 000E508C  7C 08 02 A6 */ mflr r0
/* 800E8150 000E5090  90 01 00 54 */ stw r0, 0x54(r1)
/* 800E8154 000E5094  DB E1 00 40 */ stfd f31, 0x40(r1)
/* 800E8158 000E5098  F3 E1 00 48 */ psq_st f31, 72(r1), 0, 0
/* 800E815C 000E509C  DB C1 00 30 */ stfd f30, 0x30(r1)
/* 800E8160 000E50A0  F3 C1 00 38 */ psq_st f30, 56(r1), 0, 0
/* 800E8164 000E50A4  93 E1 00 2C */ stw r31, 0x2c(r1)
/* 800E8168 000E50A8  7C 7F 1B 78 */ mr r31, r3
/* 800E816C 000E50AC  A8 03 04 E6 */ lha r0, 0x4e6(r3)
/* 800E8170 000E50B0  54 00 04 38 */ rlwinm r0, r0, 0, 0x10, 0x1c
/* 800E8174 000E50B4  3C 80 80 44 */ lis r4, lbl_80439A20@ha
/* 800E8178 000E50B8  38 84 9A 20 */ addi r4, r4, lbl_80439A20@l
/* 800E817C 000E50BC  7F C4 04 2E */ lfsx f30, r4, r0
/* 800E8180 000E50C0  7C 84 02 14 */ add r4, r4, r0
/* 800E8184 000E50C4  C3 E4 00 04 */ lfs f31, 4(r4)
/* 800E8188 000E50C8  C0 83 04 D0 */ lfs f4, 0x4d0(r3)
/* 800E818C 000E50CC  D0 81 00 14 */ stfs f4, 0x14(r1)
/* 800E8190 000E50D0  C0 23 04 D4 */ lfs f1, 0x4d4(r3)
/* 800E8194 000E50D4  C0 0D 81 10 */ lfs f0, lbl_80450690-_SDA_BASE_(r13)
/* 800E8198 000E50D8  EC 61 00 2A */ fadds f3, f1, f0
/* 800E819C 000E50DC  D0 61 00 18 */ stfs f3, 0x18(r1)
/* 800E81A0 000E50E0  C0 43 04 D8 */ lfs f2, 0x4d8(r3)
/* 800E81A4 000E50E4  D0 41 00 1C */ stfs f2, 0x1c(r1)
/* 800E81A8 000E50E8  C0 22 94 80 */ lfs f1, lbl_80452E80-_SDA2_BASE_(r2)
/* 800E81AC 000E50EC  EC 01 07 B2 */ fmuls f0, f1, f30
/* 800E81B0 000E50F0  EC 04 00 28 */ fsubs f0, f4, f0
/* 800E81B4 000E50F4  D0 01 00 08 */ stfs f0, 8(r1)
/* 800E81B8 000E50F8  D0 61 00 0C */ stfs f3, 0xc(r1)
/* 800E81BC 000E50FC  EC 01 07 F2 */ fmuls f0, f1, f31
/* 800E81C0 000E5100  EC 02 00 28 */ fsubs f0, f2, f0
/* 800E81C4 000E5104  D0 01 00 10 */ stfs f0, 0x10(r1)
/* 800E81C8 000E5108  38 81 00 14 */ addi r4, r1, 0x14
/* 800E81CC 000E510C  38 A1 00 08 */ addi r5, r1, 8
/* 800E81D0 000E5110  4B FB 9F C9 */ bl daAlink_c_NS_commonLineCheck
/* 800E81D4 000E5114  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800E81D8 000E5118  41 82 00 0C */ beq lbl_800E81E4
/* 800E81DC 000E511C  38 60 00 01 */ li r3, 1
/* 800E81E0 000E5120  48 00 00 94 */ b lbl_800E8274
lbl_800E81E4:
/* 800E81E4 000E5124  C0 22 94 84 */ lfs f1, lbl_80452E84-_SDA2_BASE_(r2)
/* 800E81E8 000E5128  C0 1F 04 D4 */ lfs f0, 0x4d4(r31)
/* 800E81EC 000E512C  EC 01 00 2A */ fadds f0, f1, f0
/* 800E81F0 000E5130  D0 01 00 18 */ stfs f0, 0x18(r1)
/* 800E81F4 000E5134  D0 01 00 0C */ stfs f0, 0xc(r1)
/* 800E81F8 000E5138  7F E3 FB 78 */ mr r3, r31
/* 800E81FC 000E513C  38 81 00 14 */ addi r4, r1, 0x14
/* 800E8200 000E5140  38 A1 00 08 */ addi r5, r1, 8
/* 800E8204 000E5144  4B FB 9F 95 */ bl daAlink_c_NS_commonLineCheck
/* 800E8208 000E5148  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800E820C 000E514C  41 82 00 0C */ beq lbl_800E8218
/* 800E8210 000E5150  38 60 00 01 */ li r3, 1
/* 800E8214 000E5154  48 00 00 60 */ b lbl_800E8274
lbl_800E8218:
/* 800E8218 000E5158  C0 21 00 08 */ lfs f1, 8(r1)
/* 800E821C 000E515C  C0 42 94 88 */ lfs f2, lbl_80452E88-_SDA2_BASE_(r2)
/* 800E8220 000E5160  EC 02 07 B2 */ fmuls f0, f2, f30
/* 800E8224 000E5164  EC 01 00 2A */ fadds f0, f1, f0
/* 800E8228 000E5168  D0 01 00 08 */ stfs f0, 8(r1)
/* 800E822C 000E516C  C0 21 00 10 */ lfs f1, 0x10(r1)
/* 800E8230 000E5170  EC 02 07 F2 */ fmuls f0, f2, f31
/* 800E8234 000E5174  EC 01 00 2A */ fadds f0, f1, f0
/* 800E8238 000E5178  D0 01 00 10 */ stfs f0, 0x10(r1)
/* 800E823C 000E517C  38 7F 1D 08 */ addi r3, r31, 0x1d08
/* 800E8240 000E5180  38 81 00 08 */ addi r4, r1, 8
/* 800E8244 000E5184  48 17 FA E5 */ bl SetPos__11cBgS_GndChkFPC4cXyz
/* 800E8248 000E5188  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800E824C 000E518C  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800E8250 000E5190  38 63 0F 38 */ addi r3, r3, 0xf38
/* 800E8254 000E5194  38 9F 1D 08 */ addi r4, r31, 0x1d08
/* 800E8258 000E5198  4B F8 C2 49 */ bl cBgS_NS_GroundCross
/* 800E825C 000E519C  C0 1F 04 D4 */ lfs f0, 0x4d4(r31)
/* 800E8260 000E51A0  EC 21 00 28 */ fsubs f1, f1, f0
/* 800E8264 000E51A4  C0 0D 81 14 */ lfs f0, lbl_80450694-_SDA_BASE_(r13)
/* 800E8268 000E51A8  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800E826C 000E51AC  7C 00 00 26 */ mfcr r0
/* 800E8270 000E51B0  54 03 0F FE */ srwi r3, r0, 0x1f
lbl_800E8274:
/* 800E8274 000E51B4  E3 E1 00 48 */ psq_l f31, 72(r1), 0, 0
/* 800E8278 000E51B8  CB E1 00 40 */ lfd f31, 0x40(r1)
/* 800E827C 000E51BC  E3 C1 00 38 */ psq_l f30, 56(r1), 0, 0
/* 800E8280 000E51C0  CB C1 00 30 */ lfd f30, 0x30(r1)
/* 800E8284 000E51C4  83 E1 00 2C */ lwz r31, 0x2c(r1)
/* 800E8288 000E51C8  80 01 00 54 */ lwz r0, 0x54(r1)
/* 800E828C 000E51CC  7C 08 03 A6 */ mtlr r0
/* 800E8290 000E51D0  38 21 00 50 */ addi r1, r1, 0x50
/* 800E8294 000E51D4  4E 80 00 20 */ blr
