.include "macros.inc"

.section .text, "ax" # 802b5f1c


.global Z2StatusMgr
Z2StatusMgr:
/* 802B5F1C 002B2E5C  90 6D 85 FC */	stw r3, lbl_80450B7C-_SDA_BASE_(r13)
/* 802B5F20 002B2E60  38 80 00 00 */	li r4, 0
/* 802B5F24 002B2E64  98 83 00 00 */	stb r4, 0(r3)
/* 802B5F28 002B2E68  98 83 00 01 */	stb r4, 1(r3)
/* 802B5F2C 002B2E6C  98 83 00 02 */	stb r4, 2(r3)
/* 802B5F30 002B2E70  98 83 00 03 */	stb r4, 3(r3)
/* 802B5F34 002B2E74  38 00 0C 00 */	li r0, 0xc00
/* 802B5F38 002B2E78  B0 03 00 04 */	sth r0, 4(r3)
/* 802B5F3C 002B2E7C  90 83 00 08 */	stw r4, 8(r3)
/* 802B5F40 002B2E80  98 83 00 0C */	stb r4, 0xc(r3)
/* 802B5F44 002B2E84  90 83 00 10 */	stw r4, 0x10(r3)
/* 802B5F48 002B2E88  C0 02 C0 18 */	lfs f0, lbl_80455A18-_SDA2_BASE_(r2)
/* 802B5F4C 002B2E8C  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 802B5F50 002B2E90  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 802B5F54 002B2E94  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 802B5F58 002B2E98  C0 02 C0 1C */	lfs f0, lbl_80455A1C-_SDA2_BASE_(r2)
/* 802B5F5C 002B2E9C  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 802B5F60 002B2EA0  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 802B5F64 002B2EA4  98 83 00 2C */	stb r4, 0x2c(r3)
/* 802B5F68 002B2EA8  98 83 00 2D */	stb r4, 0x2d(r3)
/* 802B5F6C 002B2EAC  4E 80 00 20 */	blr 

.global Z2StatusMgr_NS_heartGaugeOn
Z2StatusMgr_NS_heartGaugeOn:
/* 802B5F70 002B2EB0  38 00 00 02 */	li r0, 2
/* 802B5F74 002B2EB4  98 03 00 2D */	stb r0, 0x2d(r3)
/* 802B5F78 002B2EB8  4E 80 00 20 */	blr 

.global Z2StatusMgr_NS_processHeartGaugeSound
Z2StatusMgr_NS_processHeartGaugeSound:
/* 802B5F7C 002B2EBC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802B5F80 002B2EC0  7C 08 02 A6 */	mflr r0
/* 802B5F84 002B2EC4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802B5F88 002B2EC8  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha
/* 802B5F8C 002B2ECC  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l
/* 802B5F90 002B2ED0  88 04 4F AD */	lbz r0, 0x4fad(r4)
/* 802B5F94 002B2ED4  28 00 00 00 */	cmplwi r0, 0
/* 802B5F98 002B2ED8  40 82 01 24 */	bne lbl_802B60BC
/* 802B5F9C 002B2EDC  88 83 00 2D */	lbz r4, 0x2d(r3)
/* 802B5FA0 002B2EE0  28 04 00 00 */	cmplwi r4, 0
/* 802B5FA4 002B2EE4  41 82 01 18 */	beq lbl_802B60BC
/* 802B5FA8 002B2EE8  88 0D 8B A4 */	lbz r0, lbl_80451124-_SDA_BASE_(r13)
/* 802B5FAC 002B2EEC  7C 00 07 75 */	extsb. r0, r0
/* 802B5FB0 002B2EF0  40 82 00 0C */	bne lbl_802B5FBC
/* 802B5FB4 002B2EF4  38 04 FF FF */	addi r0, r4, -1
/* 802B5FB8 002B2EF8  98 03 00 2D */	stb r0, 0x2d(r3)
lbl_802B5FBC:
/* 802B5FBC 002B2EFC  80 6D 8D E0 */	lwz r3, lbl_80451360-_SDA_BASE_(r13)
/* 802B5FC0 002B2F00  28 03 00 00 */	cmplwi r3, 0
/* 802B5FC4 002B2F04  41 82 00 F8 */	beq lbl_802B60BC
/* 802B5FC8 002B2F08  88 83 00 C3 */	lbz r4, 0xc3(r3)
/* 802B5FCC 002B2F0C  28 04 00 00 */	cmplwi r4, 0
/* 802B5FD0 002B2F10  41 82 00 EC */	beq lbl_802B60BC
/* 802B5FD4 002B2F14  80 AD 86 04 */	lwz r5, lbl_80450B84-_SDA_BASE_(r13)
/* 802B5FD8 002B2F18  38 60 00 00 */	li r3, 0
/* 802B5FDC 002B2F1C  80 05 00 08 */	lwz r0, 8(r5)
/* 802B5FE0 002B2F20  28 00 00 00 */	cmplwi r0, 0
/* 802B5FE4 002B2F24  40 82 00 10 */	bne lbl_802B5FF4
/* 802B5FE8 002B2F28  88 05 00 BA */	lbz r0, 0xba(r5)
/* 802B5FEC 002B2F2C  28 00 00 00 */	cmplwi r0, 0
/* 802B5FF0 002B2F30  41 82 00 08 */	beq lbl_802B5FF8
lbl_802B5FF4:
/* 802B5FF4 002B2F34  38 60 00 01 */	li r3, 1
lbl_802B5FF8:
/* 802B5FF8 002B2F38  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B5FFC 002B2F3C  40 82 00 C0 */	bne lbl_802B60BC
/* 802B6000 002B2F40  28 04 00 02 */	cmplwi r4, 2
/* 802B6004 002B2F44  41 81 00 3C */	bgt lbl_802B6040
/* 802B6008 002B2F48  38 00 00 36 */	li r0, 0x36
/* 802B600C 002B2F4C  90 01 00 10 */	stw r0, 0x10(r1)
/* 802B6010 002B2F50  80 6D 86 08 */	lwz r3, lbl_80450B88-_SDA_BASE_(r13)
/* 802B6014 002B2F54  38 81 00 10 */	addi r4, r1, 0x10
/* 802B6018 002B2F58  38 A0 00 00 */	li r5, 0
/* 802B601C 002B2F5C  38 C0 00 00 */	li r6, 0
/* 802B6020 002B2F60  38 E0 00 00 */	li r7, 0
/* 802B6024 002B2F64  C0 22 C0 20 */	lfs f1, lbl_80455A20-_SDA2_BASE_(r2)
/* 802B6028 002B2F68  FC 40 08 90 */	fmr f2, f1
/* 802B602C 002B2F6C  C0 62 C0 24 */	lfs f3, lbl_80455A24-_SDA2_BASE_(r2)
/* 802B6030 002B2F70  FC 80 18 90 */	fmr f4, f3
/* 802B6034 002B2F74  39 00 00 00 */	li r8, 0
/* 802B6038 002B2F78  4B FF 64 D5 */	bl Z2SeMgr_NS_seStartLevel
/* 802B603C 002B2F7C  48 00 00 80 */	b lbl_802B60BC
lbl_802B6040:
/* 802B6040 002B2F80  28 04 00 04 */	cmplwi r4, 4
/* 802B6044 002B2F84  41 81 00 3C */	bgt lbl_802B6080
/* 802B6048 002B2F88  38 00 00 35 */	li r0, 0x35
/* 802B604C 002B2F8C  90 01 00 0C */	stw r0, 0xc(r1)
/* 802B6050 002B2F90  80 6D 86 08 */	lwz r3, lbl_80450B88-_SDA_BASE_(r13)
/* 802B6054 002B2F94  38 81 00 0C */	addi r4, r1, 0xc
/* 802B6058 002B2F98  38 A0 00 00 */	li r5, 0
/* 802B605C 002B2F9C  38 C0 00 00 */	li r6, 0
/* 802B6060 002B2FA0  38 E0 00 00 */	li r7, 0
/* 802B6064 002B2FA4  C0 22 C0 20 */	lfs f1, lbl_80455A20-_SDA2_BASE_(r2)
/* 802B6068 002B2FA8  FC 40 08 90 */	fmr f2, f1
/* 802B606C 002B2FAC  C0 62 C0 24 */	lfs f3, lbl_80455A24-_SDA2_BASE_(r2)
/* 802B6070 002B2FB0  FC 80 18 90 */	fmr f4, f3
/* 802B6074 002B2FB4  39 00 00 00 */	li r8, 0
/* 802B6078 002B2FB8  4B FF 64 95 */	bl Z2SeMgr_NS_seStartLevel
/* 802B607C 002B2FBC  48 00 00 40 */	b lbl_802B60BC
lbl_802B6080:
/* 802B6080 002B2FC0  28 04 00 06 */	cmplwi r4, 6
/* 802B6084 002B2FC4  41 81 00 38 */	bgt lbl_802B60BC
/* 802B6088 002B2FC8  38 00 00 34 */	li r0, 0x34
/* 802B608C 002B2FCC  90 01 00 08 */	stw r0, 8(r1)
/* 802B6090 002B2FD0  80 6D 86 08 */	lwz r3, lbl_80450B88-_SDA_BASE_(r13)
/* 802B6094 002B2FD4  38 81 00 08 */	addi r4, r1, 8
/* 802B6098 002B2FD8  38 A0 00 00 */	li r5, 0
/* 802B609C 002B2FDC  38 C0 00 00 */	li r6, 0
/* 802B60A0 002B2FE0  38 E0 00 00 */	li r7, 0
/* 802B60A4 002B2FE4  C0 22 C0 20 */	lfs f1, lbl_80455A20-_SDA2_BASE_(r2)
/* 802B60A8 002B2FE8  FC 40 08 90 */	fmr f2, f1
/* 802B60AC 002B2FEC  C0 62 C0 24 */	lfs f3, lbl_80455A24-_SDA2_BASE_(r2)
/* 802B60B0 002B2FF0  FC 80 18 90 */	fmr f4, f3
/* 802B60B4 002B2FF4  39 00 00 00 */	li r8, 0
/* 802B60B8 002B2FF8  4B FF 64 55 */	bl Z2SeMgr_NS_seStartLevel
lbl_802B60BC:
/* 802B60BC 002B2FFC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802B60C0 002B3000  7C 08 03 A6 */	mtlr r0
/* 802B60C4 002B3004  38 21 00 20 */	addi r1, r1, 0x20
/* 802B60C8 002B3008  4E 80 00 20 */	blr 

.global Z2StatusMgr_NS_talkIn
Z2StatusMgr_NS_talkIn:
/* 802B60CC 002B300C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B60D0 002B3010  7C 08 02 A6 */	mflr r0
/* 802B60D4 002B3014  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B60D8 002B3018  48 00 00 E5 */	bl Z2StatusMgr_NS_isMovieDemo
/* 802B60DC 002B301C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B60E0 002B3020  40 82 00 14 */	bne lbl_802B60F4
/* 802B60E4 002B3024  80 6D 86 04 */	lwz r3, lbl_80450B84-_SDA_BASE_(r13)
/* 802B60E8 002B3028  4B FF CB BD */	bl Z2SeqMgr_NS_talkInBgm
/* 802B60EC 002B302C  80 6D 86 08 */	lwz r3, lbl_80450B88-_SDA_BASE_(r13)
/* 802B60F0 002B3030  4B FF 7A 61 */	bl Z2SeMgr_NS_talkInSe
lbl_802B60F4:
/* 802B60F4 002B3034  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B60F8 002B3038  7C 08 03 A6 */	mtlr r0
/* 802B60FC 002B303C  38 21 00 10 */	addi r1, r1, 0x10
/* 802B6100 002B3040  4E 80 00 20 */	blr 

.global Z2StatusMgr_NS_talkOut
Z2StatusMgr_NS_talkOut:
/* 802B6104 002B3044  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B6108 002B3048  7C 08 02 A6 */	mflr r0
/* 802B610C 002B304C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B6110 002B3050  48 00 00 AD */	bl Z2StatusMgr_NS_isMovieDemo
/* 802B6114 002B3054  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802B6118 002B3058  40 82 00 14 */	bne lbl_802B612C
/* 802B611C 002B305C  80 6D 86 04 */	lwz r3, lbl_80450B84-_SDA_BASE_(r13)
/* 802B6120 002B3060  4B FF CC 45 */	bl Z2SeqMgr_NS_talkOutBgm
/* 802B6124 002B3064  80 6D 86 08 */	lwz r3, lbl_80450B88-_SDA_BASE_(r13)
/* 802B6128 002B3068  4B FF 7B 2D */	bl Z2SeMgr_NS_talkOutSe
lbl_802B612C:
/* 802B612C 002B306C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B6130 002B3070  7C 08 03 A6 */	mtlr r0
/* 802B6134 002B3074  38 21 00 10 */	addi r1, r1, 0x10
/* 802B6138 002B3078  4E 80 00 20 */	blr 

.global Z2StatusMgr_NS_menuIn
Z2StatusMgr_NS_menuIn:
/* 802B613C 002B307C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B6140 002B3080  7C 08 02 A6 */	mflr r0
/* 802B6144 002B3084  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B6148 002B3088  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B614C 002B308C  7C 7F 1B 78 */	mr r31, r3
/* 802B6150 002B3090  80 6D 86 04 */	lwz r3, lbl_80450B84-_SDA_BASE_(r13)
/* 802B6154 002B3094  4B FF CC 59 */	bl Z2SeqMgr_NS_menuInBgm
/* 802B6158 002B3098  80 6D 86 08 */	lwz r3, lbl_80450B88-_SDA_BASE_(r13)
/* 802B615C 002B309C  4B FF 7B FD */	bl Z2SeMgr_NS_menuInSe
/* 802B6160 002B30A0  38 00 00 01 */	li r0, 1
/* 802B6164 002B30A4  98 1F 00 0C */	stb r0, 0xc(r31)
/* 802B6168 002B30A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B616C 002B30AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B6170 002B30B0  7C 08 03 A6 */	mtlr r0
/* 802B6174 002B30B4  38 21 00 10 */	addi r1, r1, 0x10
/* 802B6178 002B30B8  4E 80 00 20 */	blr 

.global Z2StatusMgr_NS_menuOut
Z2StatusMgr_NS_menuOut:
/* 802B617C 002B30BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B6180 002B30C0  7C 08 02 A6 */	mflr r0
/* 802B6184 002B30C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B6188 002B30C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B618C 002B30CC  7C 7F 1B 78 */	mr r31, r3
/* 802B6190 002B30D0  80 6D 86 04 */	lwz r3, lbl_80450B84-_SDA_BASE_(r13)
/* 802B6194 002B30D4  4B FF CC 61 */	bl Z2SeqMgr_NS_menuOutBgm
/* 802B6198 002B30D8  80 6D 86 08 */	lwz r3, lbl_80450B88-_SDA_BASE_(r13)
/* 802B619C 002B30DC  4B FF 7A B9 */	bl Z2SeMgr_NS_talkOutSe
/* 802B61A0 002B30E0  38 00 00 00 */	li r0, 0
/* 802B61A4 002B30E4  98 1F 00 0C */	stb r0, 0xc(r31)
/* 802B61A8 002B30E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B61AC 002B30EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B61B0 002B30F0  7C 08 03 A6 */	mtlr r0
/* 802B61B4 002B30F4  38 21 00 10 */	addi r1, r1, 0x10
/* 802B61B8 002B30F8  4E 80 00 20 */	blr 

.global Z2StatusMgr_NS_isMovieDemo
Z2StatusMgr_NS_isMovieDemo:
/* 802B61BC 002B30FC  38 00 00 00 */	li r0, 0
/* 802B61C0 002B3100  88 63 00 2C */	lbz r3, 0x2c(r3)
/* 802B61C4 002B3104  28 03 00 02 */	cmplwi r3, 2
/* 802B61C8 002B3108  41 82 00 14 */	beq lbl_802B61DC
/* 802B61CC 002B310C  28 03 00 08 */	cmplwi r3, 8
/* 802B61D0 002B3110  41 82 00 0C */	beq lbl_802B61DC
/* 802B61D4 002B3114  28 03 00 09 */	cmplwi r3, 9
/* 802B61D8 002B3118  40 82 00 08 */	bne lbl_802B61E0
lbl_802B61DC:
/* 802B61DC 002B311C  38 00 00 01 */	li r0, 1
lbl_802B61E0:
/* 802B61E0 002B3120  7C 03 03 78 */	mr r3, r0
/* 802B61E4 002B3124  4E 80 00 20 */	blr 

.global Z2StatusMgr_NS_setDemoName
Z2StatusMgr_NS_setDemoName:
/* 802B61E8 002B3128  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802B61EC 002B312C  7C 08 02 A6 */	mflr r0
/* 802B61F0 002B3130  90 01 00 24 */	stw r0, 0x24(r1)
/* 802B61F4 002B3134  39 61 00 20 */	addi r11, r1, 0x20
/* 802B61F8 002B3138  48 0A BF E5 */	bl _savegpr_29
/* 802B61FC 002B313C  7C 7D 1B 78 */	mr r29, r3
/* 802B6200 002B3140  7C 9E 23 78 */	mr r30, r4
/* 802B6204 002B3144  88 03 00 2C */	lbz r0, 0x2c(r3)
/* 802B6208 002B3148  28 00 00 0B */	cmplwi r0, 0xb
/* 802B620C 002B314C  40 82 00 20 */	bne lbl_802B622C
/* 802B6210 002B3150  38 00 00 00 */	li r0, 0
/* 802B6214 002B3154  98 1D 00 2C */	stb r0, 0x2c(r29)
/* 802B6218 002B3158  80 6D 86 00 */	lwz r3, lbl_80450B80-_SDA_BASE_(r13)
/* 802B621C 002B315C  88 03 00 1C */	lbz r0, 0x1c(r3)
/* 802B6220 002B3160  28 00 00 00 */	cmplwi r0, 0
/* 802B6224 002B3164  41 82 00 08 */	beq lbl_802B622C
/* 802B6228 002B3168  48 00 40 6D */	bl Z2SceneMgr_NS_sceneBgmStart
lbl_802B622C:
/* 802B622C 002B316C  28 1E 00 00 */	cmplwi r30, 0
/* 802B6230 002B3170  40 82 00 E0 */	bne lbl_802B6310
/* 802B6234 002B3174  88 1D 00 2C */	lbz r0, 0x2c(r29)
/* 802B6238 002B3178  28 00 00 03 */	cmplwi r0, 3
/* 802B623C 002B317C  40 82 00 14 */	bne lbl_802B6250
/* 802B6240 002B3180  80 6D 86 04 */	lwz r3, lbl_80450B84-_SDA_BASE_(r13)
/* 802B6244 002B3184  38 80 00 00 */	li r4, 0
/* 802B6248 002B3188  4B FF DF 1D */	bl Z2SeqMgr_NS_setBattleBgmOff
/* 802B624C 002B318C  48 00 00 AC */	b lbl_802B62F8
lbl_802B6250:
/* 802B6250 002B3190  28 00 00 04 */	cmplwi r0, 4
/* 802B6254 002B3194  40 82 00 7C */	bne lbl_802B62D0
/* 802B6258 002B3198  88 6D 82 E1 */	lbz r3, lbl_80450861-_SDA_BASE_(r13)
/* 802B625C 002B319C  80 8D 86 04 */	lwz r4, lbl_80450B84-_SDA_BASE_(r13)
/* 802B6260 002B31A0  C0 62 C0 20 */	lfs f3, lbl_80455A20-_SDA2_BASE_(r2)
/* 802B6264 002B31A4  D0 64 00 34 */	stfs f3, 0x34(r4)
/* 802B6268 002B31A8  C0 02 C0 1C */	lfs f0, lbl_80455A1C-_SDA2_BASE_(r2)
/* 802B626C 002B31AC  D0 04 00 38 */	stfs f0, 0x38(r4)
/* 802B6270 002B31B0  38 00 00 00 */	li r0, 0
/* 802B6274 002B31B4  90 04 00 40 */	stw r0, 0x40(r4)
/* 802B6278 002B31B8  D0 04 00 3C */	stfs f0, 0x3c(r4)
/* 802B627C 002B31BC  28 03 00 00 */	cmplwi r3, 0
/* 802B6280 002B31C0  41 82 00 3C */	beq lbl_802B62BC
/* 802B6284 002B31C4  C0 04 00 44 */	lfs f0, 0x44(r4)
/* 802B6288 002B31C8  90 64 00 50 */	stw r3, 0x50(r4)
/* 802B628C 002B31CC  EC 43 00 28 */	fsubs f2, f3, f0
/* 802B6290 002B31D0  80 04 00 50 */	lwz r0, 0x50(r4)
/* 802B6294 002B31D4  C8 22 C0 28 */	lfd f1, lbl_80455A28-_SDA2_BASE_(r2)
/* 802B6298 002B31D8  90 01 00 0C */	stw r0, 0xc(r1)
/* 802B629C 002B31DC  3C 00 43 30 */	lis r0, 0x4330
/* 802B62A0 002B31E0  90 01 00 08 */	stw r0, 8(r1)
/* 802B62A4 002B31E4  C8 01 00 08 */	lfd f0, 8(r1)
/* 802B62A8 002B31E8  EC 00 08 28 */	fsubs f0, f0, f1
/* 802B62AC 002B31EC  EC 02 00 24 */	fdivs f0, f2, f0
/* 802B62B0 002B31F0  D0 04 00 48 */	stfs f0, 0x48(r4)
/* 802B62B4 002B31F4  D0 64 00 4C */	stfs f3, 0x4c(r4)
/* 802B62B8 002B31F8  48 00 00 40 */	b lbl_802B62F8
lbl_802B62BC:
/* 802B62BC 002B31FC  D0 64 00 44 */	stfs f3, 0x44(r4)
/* 802B62C0 002B3200  D0 04 00 48 */	stfs f0, 0x48(r4)
/* 802B62C4 002B3204  90 04 00 50 */	stw r0, 0x50(r4)
/* 802B62C8 002B3208  D0 04 00 4C */	stfs f0, 0x4c(r4)
/* 802B62CC 002B320C  48 00 00 2C */	b lbl_802B62F8
lbl_802B62D0:
/* 802B62D0 002B3210  28 00 00 05 */	cmplwi r0, 5
/* 802B62D4 002B3214  40 82 00 10 */	bne lbl_802B62E4
/* 802B62D8 002B3218  80 6D 86 04 */	lwz r3, lbl_80450B84-_SDA_BASE_(r13)
/* 802B62DC 002B321C  4B FF 95 A9 */	bl Z2SeqMgr_NS_subBgmStop
/* 802B62E0 002B3220  48 00 00 18 */	b lbl_802B62F8
lbl_802B62E4:
/* 802B62E4 002B3224  28 00 00 09 */	cmplwi r0, 9
/* 802B62E8 002B3228  40 82 00 10 */	bne lbl_802B62F8
/* 802B62EC 002B322C  80 6D 86 04 */	lwz r3, lbl_80450B84-_SDA_BASE_(r13)
/* 802B62F0 002B3230  38 80 00 3C */	li r4, 0x3c
/* 802B62F4 002B3234  4B FF 9B E9 */	bl Z2SeqMgr_NS_bgmStreamStop
lbl_802B62F8:
/* 802B62F8 002B3238  88 1D 00 2C */	lbz r0, 0x2c(r29)
/* 802B62FC 002B323C  28 00 00 08 */	cmplwi r0, 8
/* 802B6300 002B3240  41 82 04 04 */	beq lbl_802B6704
/* 802B6304 002B3244  38 00 00 00 */	li r0, 0
/* 802B6308 002B3248  98 1D 00 2C */	stb r0, 0x2c(r29)
/* 802B630C 002B324C  48 00 03 F8 */	b lbl_802B6704
lbl_802B6310:
/* 802B6310 002B3250  3B E0 00 00 */	li r31, 0
/* 802B6314 002B3254  88 1D 00 2C */	lbz r0, 0x2c(r29)
/* 802B6318 002B3258  28 00 00 08 */	cmplwi r0, 8
/* 802B631C 002B325C  40 82 00 2C */	bne lbl_802B6348
/* 802B6320 002B3260  7F C3 F3 78 */	mr r3, r30
/* 802B6324 002B3264  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B6328 002B3268  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B632C 002B326C  38 84 02 6A */	addi r4, r4, 0x26a
/* 802B6330 002B3270  48 0B 26 65 */	bl strcmp
/* 802B6334 002B3274  2C 03 00 00 */	cmpwi r3, 0
/* 802B6338 002B3278  40 82 03 CC */	bne lbl_802B6704
/* 802B633C 002B327C  38 00 00 00 */	li r0, 0
/* 802B6340 002B3280  98 1D 00 2C */	stb r0, 0x2c(r29)
/* 802B6344 002B3284  48 00 03 C0 */	b lbl_802B6704
lbl_802B6348:
/* 802B6348 002B3288  7F C3 F3 78 */	mr r3, r30
/* 802B634C 002B328C  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B6350 002B3290  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B6354 002B3294  38 84 02 74 */	addi r4, r4, 0x274
/* 802B6358 002B3298  48 0B 26 3D */	bl strcmp
/* 802B635C 002B329C  2C 03 00 00 */	cmpwi r3, 0
/* 802B6360 002B32A0  41 82 00 20 */	beq lbl_802B6380
/* 802B6364 002B32A4  7F C3 F3 78 */	mr r3, r30
/* 802B6368 002B32A8  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B636C 002B32AC  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B6370 002B32B0  38 84 02 7C */	addi r4, r4, 0x27c
/* 802B6374 002B32B4  48 0B 26 21 */	bl strcmp
/* 802B6378 002B32B8  2C 03 00 00 */	cmpwi r3, 0
/* 802B637C 002B32BC  40 82 00 10 */	bne lbl_802B638C
lbl_802B6380:
/* 802B6380 002B32C0  38 00 00 0B */	li r0, 0xb
/* 802B6384 002B32C4  98 1D 00 2C */	stb r0, 0x2c(r29)
/* 802B6388 002B32C8  48 00 03 7C */	b lbl_802B6704
lbl_802B638C:
/* 802B638C 002B32CC  7F C3 F3 78 */	mr r3, r30
/* 802B6390 002B32D0  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B6394 002B32D4  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B6398 002B32D8  38 84 02 84 */	addi r4, r4, 0x284
/* 802B639C 002B32DC  48 0B 25 F9 */	bl strcmp
/* 802B63A0 002B32E0  2C 03 00 00 */	cmpwi r3, 0
/* 802B63A4 002B32E4  41 82 00 20 */	beq lbl_802B63C4
/* 802B63A8 002B32E8  7F C3 F3 78 */	mr r3, r30
/* 802B63AC 002B32EC  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B63B0 002B32F0  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B63B4 002B32F4  38 84 02 8E */	addi r4, r4, 0x28e
/* 802B63B8 002B32F8  48 0B 25 DD */	bl strcmp
/* 802B63BC 002B32FC  2C 03 00 00 */	cmpwi r3, 0
/* 802B63C0 002B3300  40 82 00 50 */	bne lbl_802B6410
lbl_802B63C4:
/* 802B63C4 002B3304  38 00 00 04 */	li r0, 4
/* 802B63C8 002B3308  98 1D 00 2C */	stb r0, 0x2c(r29)
/* 802B63CC 002B330C  80 6D 86 04 */	lwz r3, lbl_80450B84-_SDA_BASE_(r13)
/* 802B63D0 002B3310  C0 03 00 44 */	lfs f0, 0x44(r3)
/* 802B63D4 002B3314  38 00 00 1E */	li r0, 0x1e
/* 802B63D8 002B3318  90 03 00 50 */	stw r0, 0x50(r3)
/* 802B63DC 002B331C  C0 62 C0 1C */	lfs f3, lbl_80455A1C-_SDA2_BASE_(r2)
/* 802B63E0 002B3320  EC 43 00 28 */	fsubs f2, f3, f0
/* 802B63E4 002B3324  80 03 00 50 */	lwz r0, 0x50(r3)
/* 802B63E8 002B3328  C8 22 C0 28 */	lfd f1, lbl_80455A28-_SDA2_BASE_(r2)
/* 802B63EC 002B332C  90 01 00 0C */	stw r0, 0xc(r1)
/* 802B63F0 002B3330  3C 00 43 30 */	lis r0, 0x4330
/* 802B63F4 002B3334  90 01 00 08 */	stw r0, 8(r1)
/* 802B63F8 002B3338  C8 01 00 08 */	lfd f0, 8(r1)
/* 802B63FC 002B333C  EC 00 08 28 */	fsubs f0, f0, f1
/* 802B6400 002B3340  EC 02 00 24 */	fdivs f0, f2, f0
/* 802B6404 002B3344  D0 03 00 48 */	stfs f0, 0x48(r3)
/* 802B6408 002B3348  D0 63 00 4C */	stfs f3, 0x4c(r3)
/* 802B640C 002B334C  48 00 02 F8 */	b lbl_802B6704
lbl_802B6410:
/* 802B6410 002B3350  7F C3 F3 78 */	mr r3, r30
/* 802B6414 002B3354  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B6418 002B3358  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B641C 002B335C  38 84 02 98 */	addi r4, r4, 0x298
/* 802B6420 002B3360  48 0B 25 75 */	bl strcmp
/* 802B6424 002B3364  2C 03 00 00 */	cmpwi r3, 0
/* 802B6428 002B3368  40 82 00 24 */	bne lbl_802B644C
/* 802B642C 002B336C  38 00 00 0C */	li r0, 0xc
/* 802B6430 002B3370  98 1D 00 2C */	stb r0, 0x2c(r29)
/* 802B6434 002B3374  80 6D 85 E0 */	lwz r3, lbl_80450B60-_SDA_BASE_(r13)
/* 802B6438 002B3378  38 63 03 EC */	addi r3, r3, 0x3ec
/* 802B643C 002B337C  C0 22 C0 1C */	lfs f1, lbl_80455A1C-_SDA2_BASE_(r2)
/* 802B6440 002B3380  38 80 00 00 */	li r4, 0
/* 802B6444 002B3384  4B FE C9 71 */	bl moveVolume__18JAISoundParamsMoveFfUl
/* 802B6448 002B3388  48 00 02 BC */	b lbl_802B6704
lbl_802B644C:
/* 802B644C 002B338C  7F C3 F3 78 */	mr r3, r30
/* 802B6450 002B3390  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B6454 002B3394  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B6458 002B3398  38 84 02 A2 */	addi r4, r4, 0x2a2
/* 802B645C 002B339C  38 A0 00 06 */	li r5, 6
/* 802B6460 002B33A0  48 0B 24 F5 */	bl func_80368954
/* 802B6464 002B33A4  2C 03 00 00 */	cmpwi r3, 0
/* 802B6468 002B33A8  40 82 00 20 */	bne lbl_802B6488
/* 802B646C 002B33AC  38 00 00 0D */	li r0, 0xd
/* 802B6470 002B33B0  98 1D 00 2C */	stb r0, 0x2c(r29)
/* 802B6474 002B33B4  80 6D 86 08 */	lwz r3, lbl_80450B88-_SDA_BASE_(r13)
/* 802B6478 002B33B8  C0 22 C0 1C */	lfs f1, lbl_80455A1C-_SDA2_BASE_(r2)
/* 802B647C 002B33BC  38 80 00 00 */	li r4, 0
/* 802B6480 002B33C0  4B FF 75 75 */	bl seMoveVolumeAll__7Z2SeMgrFfUl
/* 802B6484 002B33C4  48 00 02 80 */	b lbl_802B6704
lbl_802B6488:
/* 802B6488 002B33C8  7F C3 F3 78 */	mr r3, r30
/* 802B648C 002B33CC  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B6490 002B33D0  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B6494 002B33D4  38 84 02 A9 */	addi r4, r4, 0x2a9
/* 802B6498 002B33D8  38 A0 00 04 */	li r5, 4
/* 802B649C 002B33DC  48 0B 24 B9 */	bl func_80368954
/* 802B64A0 002B33E0  2C 03 00 00 */	cmpwi r3, 0
/* 802B64A4 002B33E4  40 82 00 10 */	bne lbl_802B64B4
/* 802B64A8 002B33E8  38 00 00 02 */	li r0, 2
/* 802B64AC 002B33EC  98 1D 00 2C */	stb r0, 0x2c(r29)
/* 802B64B0 002B33F0  48 00 02 54 */	b lbl_802B6704
lbl_802B64B4:
/* 802B64B4 002B33F4  7F C3 F3 78 */	mr r3, r30
/* 802B64B8 002B33F8  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B64BC 002B33FC  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B64C0 002B3400  38 84 02 AE */	addi r4, r4, 0x2ae
/* 802B64C4 002B3404  48 0B 24 D1 */	bl strcmp
/* 802B64C8 002B3408  2C 03 00 00 */	cmpwi r3, 0
/* 802B64CC 002B340C  40 82 00 10 */	bne lbl_802B64DC
/* 802B64D0 002B3410  38 00 00 08 */	li r0, 8
/* 802B64D4 002B3414  98 1D 00 2C */	stb r0, 0x2c(r29)
/* 802B64D8 002B3418  48 00 02 2C */	b lbl_802B6704
lbl_802B64DC:
/* 802B64DC 002B341C  7F C3 F3 78 */	mr r3, r30
/* 802B64E0 002B3420  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B64E4 002B3424  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B64E8 002B3428  38 84 02 6A */	addi r4, r4, 0x26a
/* 802B64EC 002B342C  48 0B 24 A9 */	bl strcmp
/* 802B64F0 002B3430  2C 03 00 00 */	cmpwi r3, 0
/* 802B64F4 002B3434  40 82 00 10 */	bne lbl_802B6504
/* 802B64F8 002B3438  38 00 00 00 */	li r0, 0
/* 802B64FC 002B343C  98 1D 00 2C */	stb r0, 0x2c(r29)
/* 802B6500 002B3440  48 00 02 04 */	b lbl_802B6704
lbl_802B6504:
/* 802B6504 002B3444  7F C3 F3 78 */	mr r3, r30
/* 802B6508 002B3448  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B650C 002B344C  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B6510 002B3450  38 84 02 BA */	addi r4, r4, 0x2ba
/* 802B6514 002B3454  48 0B 24 81 */	bl strcmp
/* 802B6518 002B3458  2C 03 00 00 */	cmpwi r3, 0
/* 802B651C 002B345C  40 82 00 10 */	bne lbl_802B652C
/* 802B6520 002B3460  38 00 00 06 */	li r0, 6
/* 802B6524 002B3464  98 1D 00 2C */	stb r0, 0x2c(r29)
/* 802B6528 002B3468  48 00 01 DC */	b lbl_802B6704
lbl_802B652C:
/* 802B652C 002B346C  7F C3 F3 78 */	mr r3, r30
/* 802B6530 002B3470  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B6534 002B3474  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B6538 002B3478  38 84 02 C6 */	addi r4, r4, 0x2c6
/* 802B653C 002B347C  48 0B 24 59 */	bl strcmp
/* 802B6540 002B3480  2C 03 00 00 */	cmpwi r3, 0
/* 802B6544 002B3484  40 82 00 10 */	bne lbl_802B6554
/* 802B6548 002B3488  38 00 00 07 */	li r0, 7
/* 802B654C 002B348C  98 1D 00 2C */	stb r0, 0x2c(r29)
/* 802B6550 002B3490  48 00 01 B4 */	b lbl_802B6704
lbl_802B6554:
/* 802B6554 002B3494  7F C3 F3 78 */	mr r3, r30
/* 802B6558 002B3498  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B655C 002B349C  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B6560 002B34A0  38 84 02 D0 */	addi r4, r4, 0x2d0
/* 802B6564 002B34A4  48 0B 24 31 */	bl strcmp
/* 802B6568 002B34A8  2C 03 00 00 */	cmpwi r3, 0
/* 802B656C 002B34AC  40 82 00 10 */	bne lbl_802B657C
/* 802B6570 002B34B0  38 00 00 0A */	li r0, 0xa
/* 802B6574 002B34B4  98 1D 00 2C */	stb r0, 0x2c(r29)
/* 802B6578 002B34B8  48 00 01 8C */	b lbl_802B6704
lbl_802B657C:
/* 802B657C 002B34BC  80 6D 86 00 */	lwz r3, lbl_80450B80-_SDA_BASE_(r13)
/* 802B6580 002B34C0  80 63 00 04 */	lwz r3, 4(r3)
/* 802B6584 002B34C4  38 03 FF FC */	addi r0, r3, -4
/* 802B6588 002B34C8  28 00 00 2D */	cmplwi r0, 0x2d
/* 802B658C 002B34CC  41 81 01 44 */	bgt lbl_802B66D0
/* 802B6590 002B34D0  3C 60 80 3D */	lis r3, lbl_803CA508@ha
/* 802B6594 002B34D4  38 63 A5 08 */	addi r3, r3, lbl_803CA508@l
/* 802B6598 002B34D8  54 00 10 3A */	slwi r0, r0, 2
/* 802B659C 002B34DC  7C 03 00 2E */	lwzx r0, r3, r0
/* 802B65A0 002B34E0  7C 09 03 A6 */	mtctr r0
/* 802B65A4 002B34E4  4E 80 04 20 */	bctr 
/* 802B65A8 002B34E8  7F C3 F3 78 */	mr r3, r30
/* 802B65AC 002B34EC  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B65B0 002B34F0  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B65B4 002B34F4  38 84 02 D9 */	addi r4, r4, 0x2d9
/* 802B65B8 002B34F8  48 0B 23 DD */	bl strcmp
/* 802B65BC 002B34FC  2C 03 00 00 */	cmpwi r3, 0
/* 802B65C0 002B3500  40 82 01 10 */	bne lbl_802B66D0
/* 802B65C4 002B3504  38 00 00 05 */	li r0, 5
/* 802B65C8 002B3508  98 1D 00 2C */	stb r0, 0x2c(r29)
/* 802B65CC 002B350C  80 6D 86 04 */	lwz r3, lbl_80450B84-_SDA_BASE_(r13)
/* 802B65D0 002B3510  3C 80 01 00 */	lis r4, 0x01000056@ha
/* 802B65D4 002B3514  38 84 00 56 */	addi r4, r4, 0x01000056@l
/* 802B65D8 002B3518  4B FF 8E C5 */	bl Z2SeqMgr_NS_subBgmStart
/* 802B65DC 002B351C  48 00 00 F4 */	b lbl_802B66D0
/* 802B65E0 002B3520  7F C3 F3 78 */	mr r3, r30
/* 802B65E4 002B3524  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B65E8 002B3528  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B65EC 002B352C  38 84 02 E3 */	addi r4, r4, 0x2e3
/* 802B65F0 002B3530  48 0B 23 A5 */	bl strcmp
/* 802B65F4 002B3534  2C 03 00 00 */	cmpwi r3, 0
/* 802B65F8 002B3538  40 82 00 D8 */	bne lbl_802B66D0
/* 802B65FC 002B353C  80 6D 86 04 */	lwz r3, lbl_80450B84-_SDA_BASE_(r13)
/* 802B6600 002B3540  3C 80 02 00 */	lis r4, 0x0200005F@ha
/* 802B6604 002B3544  38 84 00 5F */	addi r4, r4, 0x0200005F@l
/* 802B6608 002B3548  4B FF 95 8D */	bl Z2SeqMgr_NS_bgmStreamPrepare
/* 802B660C 002B354C  80 6D 86 04 */	lwz r3, lbl_80450B84-_SDA_BASE_(r13)
/* 802B6610 002B3550  4B FF 98 09 */	bl Z2SeqMgr_NS_bgmStreamPlay
/* 802B6614 002B3554  38 00 00 09 */	li r0, 9
/* 802B6618 002B3558  98 1D 00 2C */	stb r0, 0x2c(r29)
/* 802B661C 002B355C  48 00 00 B4 */	b lbl_802B66D0
/* 802B6620 002B3560  7F C3 F3 78 */	mr r3, r30
/* 802B6624 002B3564  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B6628 002B3568  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B662C 002B356C  38 84 02 ED */	addi r4, r4, 0x2ed
/* 802B6630 002B3570  48 0B 23 65 */	bl strcmp
/* 802B6634 002B3574  2C 03 00 00 */	cmpwi r3, 0
/* 802B6638 002B3578  40 82 00 98 */	bne lbl_802B66D0
/* 802B663C 002B357C  3B E0 00 01 */	li r31, 1
/* 802B6640 002B3580  48 00 00 90 */	b lbl_802B66D0
/* 802B6644 002B3584  7F C3 F3 78 */	mr r3, r30
/* 802B6648 002B3588  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B664C 002B358C  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B6650 002B3590  38 84 02 FA */	addi r4, r4, 0x2fa
/* 802B6654 002B3594  48 0B 23 41 */	bl strcmp
/* 802B6658 002B3598  2C 03 00 00 */	cmpwi r3, 0
/* 802B665C 002B359C  40 82 00 74 */	bne lbl_802B66D0
/* 802B6660 002B35A0  3B E0 00 01 */	li r31, 1
/* 802B6664 002B35A4  48 00 00 6C */	b lbl_802B66D0
/* 802B6668 002B35A8  7F C3 F3 78 */	mr r3, r30
/* 802B666C 002B35AC  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B6670 002B35B0  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B6674 002B35B4  38 84 03 06 */	addi r4, r4, 0x306
/* 802B6678 002B35B8  48 0B 23 1D */	bl strcmp
/* 802B667C 002B35BC  2C 03 00 00 */	cmpwi r3, 0
/* 802B6680 002B35C0  40 82 00 50 */	bne lbl_802B66D0
/* 802B6684 002B35C4  3B E0 00 01 */	li r31, 1
/* 802B6688 002B35C8  48 00 00 48 */	b lbl_802B66D0
/* 802B668C 002B35CC  7F C3 F3 78 */	mr r3, r30
/* 802B6690 002B35D0  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B6694 002B35D4  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B6698 002B35D8  38 84 03 10 */	addi r4, r4, 0x310
/* 802B669C 002B35DC  48 0B 22 F9 */	bl strcmp
/* 802B66A0 002B35E0  2C 03 00 00 */	cmpwi r3, 0
/* 802B66A4 002B35E4  40 82 00 2C */	bne lbl_802B66D0
/* 802B66A8 002B35E8  3B E0 00 01 */	li r31, 1
/* 802B66AC 002B35EC  48 00 00 24 */	b lbl_802B66D0
/* 802B66B0 002B35F0  7F C3 F3 78 */	mr r3, r30
/* 802B66B4 002B35F4  3C 80 80 3A */	lis r4, lbl_8039BC88@ha
/* 802B66B8 002B35F8  38 84 BC 88 */	addi r4, r4, lbl_8039BC88@l
/* 802B66BC 002B35FC  38 84 02 D9 */	addi r4, r4, 0x2d9
/* 802B66C0 002B3600  48 0B 22 D5 */	bl strcmp
/* 802B66C4 002B3604  2C 03 00 00 */	cmpwi r3, 0
/* 802B66C8 002B3608  40 82 00 08 */	bne lbl_802B66D0
/* 802B66CC 002B360C  3B E0 00 01 */	li r31, 1
lbl_802B66D0:
/* 802B66D0 002B3610  57 E0 06 3F */	clrlwi. r0, r31, 0x18
/* 802B66D4 002B3614  41 82 00 1C */	beq lbl_802B66F0
/* 802B66D8 002B3618  80 6D 86 04 */	lwz r3, lbl_80450B84-_SDA_BASE_(r13)
/* 802B66DC 002B361C  38 80 00 01 */	li r4, 1
/* 802B66E0 002B3620  4B FF DA 85 */	bl Z2SeqMgr_NS_setBattleBgmOff
/* 802B66E4 002B3624  38 00 00 03 */	li r0, 3
/* 802B66E8 002B3628  98 1D 00 2C */	stb r0, 0x2c(r29)
/* 802B66EC 002B362C  48 00 00 18 */	b lbl_802B6704
lbl_802B66F0:
/* 802B66F0 002B3630  88 1D 00 2C */	lbz r0, 0x2c(r29)
/* 802B66F4 002B3634  28 00 00 00 */	cmplwi r0, 0
/* 802B66F8 002B3638  40 82 00 0C */	bne lbl_802B6704
/* 802B66FC 002B363C  38 00 00 01 */	li r0, 1
/* 802B6700 002B3640  98 1D 00 2C */	stb r0, 0x2c(r29)
lbl_802B6704:
/* 802B6704 002B3644  39 61 00 20 */	addi r11, r1, 0x20
/* 802B6708 002B3648  48 0A BB 21 */	bl _restgpr_29
/* 802B670C 002B364C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802B6710 002B3650  7C 08 03 A6 */	mtlr r0
/* 802B6714 002B3654  38 21 00 20 */	addi r1, r1, 0x20
/* 802B6718 002B3658  4E 80 00 20 */	blr 

.global Z2StatusMgr_NS_processTime
Z2StatusMgr_NS_processTime:
/* 802B671C 002B365C  88 03 00 00 */	lbz r0, 0(r3)
/* 802B6720 002B3660  54 04 44 2E */	rlwinm r4, r0, 8, 0x10, 0x17
/* 802B6724 002B3664  88 03 00 01 */	lbz r0, 1(r3)
/* 802B6728 002B3668  7C 04 02 14 */	add r0, r4, r0
/* 802B672C 002B366C  B0 03 00 04 */	sth r0, 4(r3)
/* 802B6730 002B3670  4E 80 00 20 */	blr 

.global Z2StatusMgr_NS_checkDayTime
Z2StatusMgr_NS_checkDayTime:
/* 802B6734 002B3674  88 03 00 00 */	lbz r0, 0(r3)
/* 802B6738 002B3678  28 00 00 06 */	cmplwi r0, 6
/* 802B673C 002B367C  41 80 00 14 */	blt lbl_802B6750
/* 802B6740 002B3680  28 00 00 13 */	cmplwi r0, 0x13
/* 802B6744 002B3684  40 80 00 0C */	bge lbl_802B6750
/* 802B6748 002B3688  38 60 00 01 */	li r3, 1
/* 802B674C 002B368C  4E 80 00 20 */	blr 
lbl_802B6750:
/* 802B6750 002B3690  38 60 00 00 */	li r3, 0
/* 802B6754 002B3694  4E 80 00 20 */	blr 

.global Z2StatusMgr_NS_setEventBit
Z2StatusMgr_NS_setEventBit:
/* 802B6758 002B3698  90 83 00 08 */	stw r4, 8(r3)
/* 802B675C 002B369C  4E 80 00 20 */	blr 

.global Z2StatusMgr_NS_setCameraPolygonPos
Z2StatusMgr_NS_setCameraPolygonPos:
/* 802B6760 002B36A0  28 04 00 00 */	cmplwi r4, 0
/* 802B6764 002B36A4  4D 82 00 20 */	beqlr 
/* 802B6768 002B36A8  C0 04 00 00 */	lfs f0, 0(r4)
/* 802B676C 002B36AC  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 802B6770 002B36B0  C0 04 00 04 */	lfs f0, 4(r4)
/* 802B6774 002B36B4  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 802B6778 002B36B8  C0 04 00 08 */	lfs f0, 8(r4)
/* 802B677C 002B36BC  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 802B6780 002B36C0  4E 80 00 20 */	blr 

.global Z2StatusMgr_NS_setCameraGroupInfo
Z2StatusMgr_NS_setCameraGroupInfo:
/* 802B6784 002B36C4  4E 80 00 20 */	blr 

.global Z2StatusMgr_NS_setCameraInWaterDepth
Z2StatusMgr_NS_setCameraInWaterDepth:
/* 802B6788 002B36C8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802B678C 002B36CC  7C 08 02 A6 */	mflr r0
/* 802B6790 002B36D0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802B6794 002B36D4  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 802B6798 002B36D8  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 802B679C 002B36DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B67A0 002B36E0  7C 7F 1B 78 */	mr r31, r3
/* 802B67A4 002B36E4  FF E0 08 90 */	fmr f31, f1
/* 802B67A8 002B36E8  C0 42 C0 1C */	lfs f2, lbl_80455A1C-_SDA2_BASE_(r2)
/* 802B67AC 002B36EC  FC 02 F8 00 */	fcmpu cr0, f2, f31
/* 802B67B0 002B36F0  40 82 00 18 */	bne lbl_802B67C8
/* 802B67B4 002B36F4  D0 5F 00 1C */	stfs f2, 0x1c(r31)
/* 802B67B8 002B36F8  80 6D 85 C0 */	lwz r3, lbl_80450B40-_SDA_BASE_(r13)
/* 802B67BC 002B36FC  38 80 00 00 */	li r4, 0
/* 802B67C0 002B3700  48 00 46 89 */	bl Z2FxLineMgr_NS_setUnderWaterFx
/* 802B67C4 002B3704  48 00 00 5C */	b lbl_802B6820
lbl_802B67C8:
/* 802B67C8 002B3708  80 6D 8D E0 */	lwz r3, lbl_80451360-_SDA_BASE_(r13)
/* 802B67CC 002B370C  28 03 00 00 */	cmplwi r3, 0
/* 802B67D0 002B3710  41 82 00 50 */	beq lbl_802B6820
/* 802B67D4 002B3714  88 03 00 CB */	lbz r0, 0xcb(r3)
/* 802B67D8 002B3718  54 00 D7 FF */	rlwinm. r0, r0, 0x1a, 0x1f, 0x1f
/* 802B67DC 002B371C  41 82 00 44 */	beq lbl_802B6820
/* 802B67E0 002B3720  C0 62 C0 30 */	lfs f3, lbl_80455A30-_SDA2_BASE_(r2)
/* 802B67E4 002B3724  FC 1F 18 40 */	fcmpo cr0, f31, f3
/* 802B67E8 002B3728  4C 41 13 82 */	cror 2, 1, 2
/* 802B67EC 002B372C  40 82 00 10 */	bne lbl_802B67FC
/* 802B67F0 002B3730  C0 02 C0 20 */	lfs f0, lbl_80455A20-_SDA2_BASE_(r2)
/* 802B67F4 002B3734  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802B67F8 002B3738  48 00 00 1C */	b lbl_802B6814
lbl_802B67FC:
/* 802B67FC 002B373C  C0 82 C0 34 */	lfs f4, lbl_80455A34-_SDA2_BASE_(r2)
/* 802B6800 002B3740  FC A0 10 90 */	fmr f5, f2
/* 802B6804 002B3744  C0 C2 C0 20 */	lfs f6, lbl_80455A20-_SDA2_BASE_(r2)
/* 802B6808 002B3748  38 60 00 00 */	li r3, 0
/* 802B680C 002B374C  4B FF 2E E9 */	bl getParamByExp__6Z2CalcFffffffQ26Z2Calc9CurveSign
/* 802B6810 002B3750  D0 3F 00 1C */	stfs f1, 0x1c(r31)
lbl_802B6814:
/* 802B6814 002B3754  80 6D 85 C0 */	lwz r3, lbl_80450B40-_SDA_BASE_(r13)
/* 802B6818 002B3758  38 80 00 01 */	li r4, 1
/* 802B681C 002B375C  48 00 46 2D */	bl Z2FxLineMgr_NS_setUnderWaterFx
lbl_802B6820:
/* 802B6820 002B3760  D3 FF 00 18 */	stfs f31, 0x18(r31)
/* 802B6824 002B3764  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 802B6828 002B3768  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 802B682C 002B376C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B6830 002B3770  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802B6834 002B3774  7C 08 03 A6 */	mtlr r0
/* 802B6838 002B3778  38 21 00 20 */	addi r1, r1, 0x20
/* 802B683C 002B377C  4E 80 00 20 */	blr 

