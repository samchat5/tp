/* 800DA82C 000D776C  94 21 FF A0 */ stwu r1, -0x60(r1)
/* 800DA830 000D7770  7C 08 02 A6 */ mflr r0
/* 800DA834 000D7774  90 01 00 64 */ stw r0, 0x64(r1)
/* 800DA838 000D7778  39 61 00 60 */ addi r11, r1, 0x60
/* 800DA83C 000D777C  48 28 79 8D */ bl _savegpr_24
/* 800DA840 000D7780  7C 78 1B 78 */ mr r24, r3
/* 800DA844 000D7784  7C 99 23 78 */ mr r25, r4
/* 800DA848 000D7788  7C BA 2B 78 */ mr r26, r5
/* 800DA84C 000D778C  7C DB 33 78 */ mr r27, r6
/* 800DA850 000D7790  7C FC 3B 78 */ mr r28, r7
/* 800DA854 000D7794  A0 03 2F E8 */ lhz r0, 0x2fe8(r3)
/* 800DA858 000D7798  28 00 01 5A */ cmplwi r0, 0x15a
/* 800DA85C 000D779C  40 82 00 0C */ bne lbl_800DA868
/* 800DA860 000D77A0  38 60 00 00 */ li r3, 0
/* 800DA864 000D77A4  48 00 03 AC */ b lbl_800DAC10
lbl_800DA868:
/* 800DA868 000D77A8  3C 60 80 3A */ lis r3, lbl_803A37C0@ha
/* 800DA86C 000D77AC  38 03 37 C0 */ addi r0, r3, lbl_803A37C0@l
/* 800DA870 000D77B0  90 01 00 34 */ stw r0, 0x34(r1)
/* 800DA874 000D77B4  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800DA878 000D77B8  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800DA87C 000D77BC  3B C3 0F 38 */ addi r30, r3, 0xf38
/* 800DA880 000D77C0  7F C3 F3 78 */ mr r3, r30
/* 800DA884 000D77C4  38 98 1B 5C */ addi r4, r24, 0x1b5c
/* 800DA888 000D77C8  38 A1 00 24 */ addi r5, r1, 0x24
/* 800DA88C 000D77CC  4B F9 9E B9 */ bl cBgS_NS_GetTriPla
/* 800DA890 000D77D0  38 61 00 24 */ addi r3, r1, 0x24
/* 800DA894 000D77D4  48 18 C8 95 */ bl cXyz_NS_atan2sX_Z
/* 800DA898 000D77D8  7C 7D 1B 78 */ mr r29, r3
/* 800DA89C 000D77DC  2C 19 00 00 */ cmpwi r25, 0
/* 800DA8A0 000D77E0  41 80 00 30 */ blt lbl_800DA8D0
/* 800DA8A4 000D77E4  C0 21 00 28 */ lfs f1, 0x28(r1)
/* 800DA8A8 000D77E8  48 18 D9 69 */ bl cBgW_CheckBWall
/* 800DA8AC 000D77EC  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800DA8B0 000D77F0  41 82 00 20 */ beq lbl_800DA8D0
/* 800DA8B4 000D77F4  7F A3 EB 78 */ mr r3, r29
/* 800DA8B8 000D77F8  A8 98 04 DE */ lha r4, 0x4de(r24)
/* 800DA8BC 000D77FC  38 04 80 00 */ addi r0, r4, -32768
/* 800DA8C0 000D7800  7C 04 07 34 */ extsh r4, r0
/* 800DA8C4 000D7804  48 19 65 61 */ bl cLib_distanceAngleS
/* 800DA8C8 000D7808  2C 03 15 55 */ cmpwi r3, 0x1555
/* 800DA8CC 000D780C  40 81 00 18 */ ble lbl_800DA8E4
lbl_800DA8D0:
/* 800DA8D0 000D7810  3C 60 80 3A */ lis r3, lbl_803A37C0@ha
/* 800DA8D4 000D7814  38 03 37 C0 */ addi r0, r3, lbl_803A37C0@l
/* 800DA8D8 000D7818  90 01 00 34 */ stw r0, 0x34(r1)
/* 800DA8DC 000D781C  38 60 00 00 */ li r3, 0
/* 800DA8E0 000D7820  48 00 03 30 */ b lbl_800DAC10
lbl_800DA8E4:
/* 800DA8E4 000D7824  7F 03 C3 78 */ mr r3, r24
/* 800DA8E8 000D7828  38 80 01 5A */ li r4, 0x15a
/* 800DA8EC 000D782C  4B FE 76 81 */ bl daAlink_c_NS_commonProcInit
/* 800DA8F0 000D7830  C0 01 00 24 */ lfs f0, 0x24(r1)
/* 800DA8F4 000D7834  D0 01 00 0C */ stfs f0, 0xc(r1)
/* 800DA8F8 000D7838  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800DA8FC 000D783C  D0 01 00 10 */ stfs f0, 0x10(r1)
/* 800DA900 000D7840  C0 01 00 2C */ lfs f0, 0x2c(r1)
/* 800DA904 000D7844  D0 01 00 14 */ stfs f0, 0x14(r1)
/* 800DA908 000D7848  38 61 00 0C */ addi r3, r1, 0xc
/* 800DA90C 000D784C  48 26 C8 2D */ bl PSVECSquareMag
/* 800DA910 000D7850  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800DA914 000D7854  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800DA918 000D7858  40 81 00 58 */ ble lbl_800DA970
/* 800DA91C 000D785C  FC 00 08 34 */ frsqrte f0, f1
/* 800DA920 000D7860  C8 82 92 E8 */ lfd f4, lbl_80452CE8-_SDA2_BASE_(r2)
/* 800DA924 000D7864  FC 44 00 32 */ fmul f2, f4, f0
/* 800DA928 000D7868  C8 62 92 F0 */ lfd f3, lbl_80452CF0-_SDA2_BASE_(r2)
/* 800DA92C 000D786C  FC 00 00 32 */ fmul f0, f0, f0
/* 800DA930 000D7870  FC 01 00 32 */ fmul f0, f1, f0
/* 800DA934 000D7874  FC 03 00 28 */ fsub f0, f3, f0
/* 800DA938 000D7878  FC 02 00 32 */ fmul f0, f2, f0
/* 800DA93C 000D787C  FC 44 00 32 */ fmul f2, f4, f0
/* 800DA940 000D7880  FC 00 00 32 */ fmul f0, f0, f0
/* 800DA944 000D7884  FC 01 00 32 */ fmul f0, f1, f0
/* 800DA948 000D7888  FC 03 00 28 */ fsub f0, f3, f0
/* 800DA94C 000D788C  FC 02 00 32 */ fmul f0, f2, f0
/* 800DA950 000D7890  FC 44 00 32 */ fmul f2, f4, f0
/* 800DA954 000D7894  FC 00 00 32 */ fmul f0, f0, f0
/* 800DA958 000D7898  FC 01 00 32 */ fmul f0, f1, f0
/* 800DA95C 000D789C  FC 03 00 28 */ fsub f0, f3, f0
/* 800DA960 000D78A0  FC 02 00 32 */ fmul f0, f2, f0
/* 800DA964 000D78A4  FC 41 00 32 */ fmul f2, f1, f0
/* 800DA968 000D78A8  FC 40 10 18 */ frsp f2, f2
/* 800DA96C 000D78AC  48 00 00 90 */ b lbl_800DA9FC
lbl_800DA970:
/* 800DA970 000D78B0  C8 02 92 F8 */ lfd f0, lbl_80452CF8-_SDA2_BASE_(r2)
/* 800DA974 000D78B4  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800DA978 000D78B8  40 80 00 10 */ bge lbl_800DA988
/* 800DA97C 000D78BC  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 800DA980 000D78C0  C0 43 0A E0 */ lfs f2, lbl_80450AE0@l(r3)
/* 800DA984 000D78C4  48 00 00 78 */ b lbl_800DA9FC
lbl_800DA988:
/* 800DA988 000D78C8  D0 21 00 08 */ stfs f1, 8(r1)
/* 800DA98C 000D78CC  80 81 00 08 */ lwz r4, 8(r1)
/* 800DA990 000D78D0  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 800DA994 000D78D4  3C 00 7F 80 */ lis r0, 0x7f80
/* 800DA998 000D78D8  7C 03 00 00 */ cmpw r3, r0
/* 800DA99C 000D78DC  41 82 00 14 */ beq lbl_800DA9B0
/* 800DA9A0 000D78E0  40 80 00 40 */ bge lbl_800DA9E0
/* 800DA9A4 000D78E4  2C 03 00 00 */ cmpwi r3, 0
/* 800DA9A8 000D78E8  41 82 00 20 */ beq lbl_800DA9C8
/* 800DA9AC 000D78EC  48 00 00 34 */ b lbl_800DA9E0
lbl_800DA9B0:
/* 800DA9B0 000D78F0  54 80 02 7F */ clrlwi. r0, r4, 9
/* 800DA9B4 000D78F4  41 82 00 0C */ beq lbl_800DA9C0
/* 800DA9B8 000D78F8  38 00 00 01 */ li r0, 1
/* 800DA9BC 000D78FC  48 00 00 28 */ b lbl_800DA9E4
lbl_800DA9C0:
/* 800DA9C0 000D7900  38 00 00 02 */ li r0, 2
/* 800DA9C4 000D7904  48 00 00 20 */ b lbl_800DA9E4
lbl_800DA9C8:
/* 800DA9C8 000D7908  54 80 02 7F */ clrlwi. r0, r4, 9
/* 800DA9CC 000D790C  41 82 00 0C */ beq lbl_800DA9D8
/* 800DA9D0 000D7910  38 00 00 05 */ li r0, 5
/* 800DA9D4 000D7914  48 00 00 10 */ b lbl_800DA9E4
lbl_800DA9D8:
/* 800DA9D8 000D7918  38 00 00 03 */ li r0, 3
/* 800DA9DC 000D791C  48 00 00 08 */ b lbl_800DA9E4
lbl_800DA9E0:
/* 800DA9E0 000D7920  38 00 00 04 */ li r0, 4
lbl_800DA9E4:
/* 800DA9E4 000D7924  2C 00 00 01 */ cmpwi r0, 1
/* 800DA9E8 000D7928  40 82 00 10 */ bne lbl_800DA9F8
/* 800DA9EC 000D792C  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 800DA9F0 000D7930  C0 43 0A E0 */ lfs f2, lbl_80450AE0@l(r3)
/* 800DA9F4 000D7934  48 00 00 08 */ b lbl_800DA9FC
lbl_800DA9F8:
/* 800DA9F8 000D7938  FC 40 08 90 */ fmr f2, f1
lbl_800DA9FC:
/* 800DA9FC 000D793C  C0 21 00 28 */ lfs f1, 0x28(r1)
/* 800DAA00 000D7940  48 18 CC 75 */ bl cM_atan2s
/* 800DAA04 000D7944  7C 7F 1B 78 */ mr r31, r3
/* 800DAA08 000D7948  B3 B8 04 DE */ sth r29, 0x4de(r24)
/* 800DAA0C 000D794C  C0 18 1B 78 */ lfs f0, 0x1b78(r24)
/* 800DAA10 000D7950  D0 18 04 D0 */ stfs f0, 0x4d0(r24)
/* 800DAA14 000D7954  C0 18 1B 80 */ lfs f0, 0x1b80(r24)
/* 800DAA18 000D7958  D0 18 04 D8 */ stfs f0, 0x4d8(r24)
/* 800DAA1C 000D795C  7F 03 C3 78 */ mr r3, r24
/* 800DAA20 000D7960  7F 64 DB 78 */ mr r4, r27
/* 800DAA24 000D7964  38 A0 00 00 */ li r5, 0
/* 800DAA28 000D7968  7F 86 E3 78 */ mr r6, r28
/* 800DAA2C 000D796C  4B FD 31 4D */ bl daAlink_c_NS_setOldRootQuaternion
/* 800DAA30 000D7970  80 18 05 74 */ lwz r0, 0x574(r24)
/* 800DAA34 000D7974  54 00 01 8D */ rlwinm. r0, r0, 0, 6, 6
/* 800DAA38 000D7978  41 82 00 C4 */ beq lbl_800DAAFC
/* 800DAA3C 000D797C  2C 19 00 29 */ cmpwi r25, 0x29
/* 800DAA40 000D7980  40 82 00 20 */ bne lbl_800DAA60
/* 800DAA44 000D7984  38 00 00 2D */ li r0, 0x2d
/* 800DAA48 000D7988  90 18 31 98 */ stw r0, 0x3198(r24)
/* 800DAA4C 000D798C  7F 03 C3 78 */ mr r3, r24
/* 800DAA50 000D7990  38 80 00 28 */ li r4, 0x28
/* 800DAA54 000D7994  48 04 EC 25 */ bl daAlink_c_NS_setSingleAnimeWolfBase
/* 800DAA58 000D7998  B3 F8 30 80 */ sth r31, 0x3080(r24)
/* 800DAA5C 000D799C  48 00 00 90 */ b lbl_800DAAEC
lbl_800DAA60:
/* 800DAA60 000D79A0  2C 19 00 2A */ cmpwi r25, 0x2a
/* 800DAA64 000D79A4  40 82 00 34 */ bne lbl_800DAA98
/* 800DAA68 000D79A8  38 00 00 2E */ li r0, 0x2e
/* 800DAA6C 000D79AC  90 18 31 98 */ stw r0, 0x3198(r24)
/* 800DAA70 000D79B0  7F 03 C3 78 */ mr r3, r24
/* 800DAA74 000D79B4  38 80 00 2E */ li r4, 0x2e
/* 800DAA78 000D79B8  C0 22 92 B8 */ lfs f1, lbl_80452CB8-_SDA2_BASE_(r2)
/* 800DAA7C 000D79BC  C0 42 93 14 */ lfs f2, lbl_80452D14-_SDA2_BASE_(r2)
/* 800DAA80 000D79C0  38 A0 00 03 */ li r5, 3
/* 800DAA84 000D79C4  C0 62 92 C4 */ lfs f3, lbl_80452CC4-_SDA2_BASE_(r2)
/* 800DAA88 000D79C8  48 04 EC 7D */ bl daAlink_c_NS_setSingleAnimeWolf
/* 800DAA8C 000D79CC  38 1F C0 00 */ addi r0, r31, -16384
/* 800DAA90 000D79D0  B0 18 30 82 */ sth r0, 0x3082(r24)
/* 800DAA94 000D79D4  48 00 00 58 */ b lbl_800DAAEC
lbl_800DAA98:
/* 800DAA98 000D79D8  2C 19 00 2B */ cmpwi r25, 0x2b
/* 800DAA9C 000D79DC  40 82 00 34 */ bne lbl_800DAAD0
/* 800DAAA0 000D79E0  38 00 00 2F */ li r0, 0x2f
/* 800DAAA4 000D79E4  90 18 31 98 */ stw r0, 0x3198(r24)
/* 800DAAA8 000D79E8  7F 03 C3 78 */ mr r3, r24
/* 800DAAAC 000D79EC  38 80 00 2F */ li r4, 0x2f
/* 800DAAB0 000D79F0  C0 22 92 B8 */ lfs f1, lbl_80452CB8-_SDA2_BASE_(r2)
/* 800DAAB4 000D79F4  C0 42 93 14 */ lfs f2, lbl_80452D14-_SDA2_BASE_(r2)
/* 800DAAB8 000D79F8  38 A0 00 03 */ li r5, 3
/* 800DAABC 000D79FC  C0 62 92 C4 */ lfs f3, lbl_80452CC4-_SDA2_BASE_(r2)
/* 800DAAC0 000D7A00  48 04 EC 45 */ bl daAlink_c_NS_setSingleAnimeWolf
/* 800DAAC4 000D7A04  20 1F 40 00 */ subfic r0, r31, 0x4000
/* 800DAAC8 000D7A08  B0 18 30 82 */ sth r0, 0x3082(r24)
/* 800DAACC 000D7A0C  48 00 00 20 */ b lbl_800DAAEC
lbl_800DAAD0:
/* 800DAAD0 000D7A10  38 00 00 2C */ li r0, 0x2c
/* 800DAAD4 000D7A14  90 18 31 98 */ stw r0, 0x3198(r24)
/* 800DAAD8 000D7A18  7F 03 C3 78 */ mr r3, r24
/* 800DAADC 000D7A1C  38 80 00 29 */ li r4, 0x29
/* 800DAAE0 000D7A20  48 04 EB 99 */ bl daAlink_c_NS_setSingleAnimeWolfBase
/* 800DAAE4 000D7A24  7C 1F 00 D0 */ neg r0, r31
/* 800DAAE8 000D7A28  B0 18 30 80 */ sth r0, 0x3080(r24)
lbl_800DAAEC:
/* 800DAAEC 000D7A2C  7F 03 C3 78 */ mr r3, r24
/* 800DAAF0 000D7A30  38 80 00 91 */ li r4, 0x91
/* 800DAAF4 000D7A34  4B FD 4D AD */ bl daAlink_c_NS_setFaceBasicTexture
/* 800DAAF8 000D7A38  48 00 00 C0 */ b lbl_800DABB8
lbl_800DAAFC:
/* 800DAAFC 000D7A3C  2C 1A 00 00 */ cmpwi r26, 0
/* 800DAB00 000D7A40  3C 60 80 39 */ lis r3, lbl_8038E36C@ha
/* 800DAB04 000D7A44  38 A3 E3 6C */ addi r5, r3, lbl_8038E36C@l
/* 800DAB08 000D7A48  41 82 00 0C */ beq lbl_800DAB14
/* 800DAB0C 000D7A4C  3C 60 80 39 */ lis r3, lbl_8038E2B0@ha
/* 800DAB10 000D7A50  38 A3 E2 B0 */ addi r5, r3, lbl_8038E2B0@l
lbl_800DAB14:
/* 800DAB14 000D7A54  2C 19 00 84 */ cmpwi r25, 0x84
/* 800DAB18 000D7A58  40 82 00 28 */ bne lbl_800DAB40
/* 800DAB1C 000D7A5C  38 00 00 88 */ li r0, 0x88
/* 800DAB20 000D7A60  90 18 31 98 */ stw r0, 0x3198(r24)
/* 800DAB24 000D7A64  7F 03 C3 78 */ mr r3, r24
/* 800DAB28 000D7A68  38 80 00 88 */ li r4, 0x88
/* 800DAB2C 000D7A6C  38 A5 00 64 */ addi r5, r5, 0x64
/* 800DAB30 000D7A70  4B FD 25 C5 */ bl daAlink_c_NS_setSingleAnimeParam
/* 800DAB34 000D7A74  38 1F C0 00 */ addi r0, r31, -16384
/* 800DAB38 000D7A78  B0 18 30 80 */ sth r0, 0x3080(r24)
/* 800DAB3C 000D7A7C  48 00 00 7C */ b lbl_800DABB8
lbl_800DAB40:
/* 800DAB40 000D7A80  2C 19 00 85 */ cmpwi r25, 0x85
/* 800DAB44 000D7A84  40 82 00 28 */ bne lbl_800DAB6C
/* 800DAB48 000D7A88  38 00 00 89 */ li r0, 0x89
/* 800DAB4C 000D7A8C  90 18 31 98 */ stw r0, 0x3198(r24)
/* 800DAB50 000D7A90  7F 03 C3 78 */ mr r3, r24
/* 800DAB54 000D7A94  38 80 00 89 */ li r4, 0x89
/* 800DAB58 000D7A98  38 A5 00 78 */ addi r5, r5, 0x78
/* 800DAB5C 000D7A9C  4B FD 25 99 */ bl daAlink_c_NS_setSingleAnimeParam
/* 800DAB60 000D7AA0  38 1F C0 00 */ addi r0, r31, -16384
/* 800DAB64 000D7AA4  B0 18 30 82 */ sth r0, 0x3082(r24)
/* 800DAB68 000D7AA8  48 00 00 50 */ b lbl_800DABB8
lbl_800DAB6C:
/* 800DAB6C 000D7AAC  2C 19 00 86 */ cmpwi r25, 0x86
/* 800DAB70 000D7AB0  40 82 00 28 */ bne lbl_800DAB98
/* 800DAB74 000D7AB4  38 00 00 8A */ li r0, 0x8a
/* 800DAB78 000D7AB8  90 18 31 98 */ stw r0, 0x3198(r24)
/* 800DAB7C 000D7ABC  7F 03 C3 78 */ mr r3, r24
/* 800DAB80 000D7AC0  38 80 00 8A */ li r4, 0x8a
/* 800DAB84 000D7AC4  38 A5 00 8C */ addi r5, r5, 0x8c
/* 800DAB88 000D7AC8  4B FD 25 6D */ bl daAlink_c_NS_setSingleAnimeParam
/* 800DAB8C 000D7ACC  20 1F 40 00 */ subfic r0, r31, 0x4000
/* 800DAB90 000D7AD0  B0 18 30 82 */ sth r0, 0x3082(r24)
/* 800DAB94 000D7AD4  48 00 00 24 */ b lbl_800DABB8
lbl_800DAB98:
/* 800DAB98 000D7AD8  38 00 00 87 */ li r0, 0x87
/* 800DAB9C 000D7ADC  90 18 31 98 */ stw r0, 0x3198(r24)
/* 800DABA0 000D7AE0  7F 03 C3 78 */ mr r3, r24
/* 800DABA4 000D7AE4  38 80 00 87 */ li r4, 0x87
/* 800DABA8 000D7AE8  38 A5 00 50 */ addi r5, r5, 0x50
/* 800DABAC 000D7AEC  4B FD 25 49 */ bl daAlink_c_NS_setSingleAnimeParam
/* 800DABB0 000D7AF0  20 1F 40 00 */ subfic r0, r31, 0x4000
/* 800DABB4 000D7AF4  B0 18 30 80 */ sth r0, 0x3080(r24)
lbl_800DABB8:
/* 800DABB8 000D7AF8  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800DABBC 000D7AFC  D0 38 33 98 */ stfs f1, 0x3398(r24)
/* 800DABC0 000D7B00  D0 38 04 FC */ stfs f1, 0x4fc(r24)
/* 800DABC4 000D7B04  7F 03 C3 78 */ mr r3, r24
/* 800DABC8 000D7B08  C0 58 05 34 */ lfs f2, 0x534(r24)
/* 800DABCC 000D7B0C  38 80 00 00 */ li r4, 0
/* 800DABD0 000D7B10  4B FE 0B A1 */ bl daAlink_c_NS_setSpecialGravity
/* 800DABD4 000D7B14  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800DABD8 000D7B18  D0 21 00 18 */ stfs f1, 0x18(r1)
/* 800DABDC 000D7B1C  C0 02 92 B8 */ lfs f0, lbl_80452CB8-_SDA2_BASE_(r2)
/* 800DABE0 000D7B20  D0 01 00 1C */ stfs f0, 0x1c(r1)
/* 800DABE4 000D7B24  D0 21 00 20 */ stfs f1, 0x20(r1)
/* 800DABE8 000D7B28  38 7E 4C 9C */ addi r3, r30, 0x4c9c
/* 800DABEC 000D7B2C  38 80 00 06 */ li r4, 6
/* 800DABF0 000D7B30  38 A0 00 0F */ li r5, 0xf
/* 800DABF4 000D7B34  38 C1 00 18 */ addi r6, r1, 0x18
/* 800DABF8 000D7B38  4B F9 4E 2D */ bl dVibration_c_NS_StartShock
/* 800DABFC 000D7B3C  B3 58 30 08 */ sth r26, 0x3008(r24)
/* 800DAC00 000D7B40  3C 60 80 3A */ lis r3, lbl_803A37C0@ha
/* 800DAC04 000D7B44  38 03 37 C0 */ addi r0, r3, lbl_803A37C0@l
/* 800DAC08 000D7B48  90 01 00 34 */ stw r0, 0x34(r1)
/* 800DAC0C 000D7B4C  38 60 00 01 */ li r3, 1
lbl_800DAC10:
/* 800DAC10 000D7B50  39 61 00 60 */ addi r11, r1, 0x60
/* 800DAC14 000D7B54  48 28 76 01 */ bl _restgpr_24
/* 800DAC18 000D7B58  80 01 00 64 */ lwz r0, 0x64(r1)
/* 800DAC1C 000D7B5C  7C 08 03 A6 */ mtlr r0
/* 800DAC20 000D7B60  38 21 00 60 */ addi r1, r1, 0x60
/* 800DAC24 000D7B64  4E 80 00 20 */ blr