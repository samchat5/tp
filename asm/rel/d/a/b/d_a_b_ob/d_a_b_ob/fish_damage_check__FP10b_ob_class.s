lbl_80612ED4:
/* 80612ED4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80612ED8  7C 08 02 A6 */	mflr r0
/* 80612EDC  90 01 00 44 */	stw r0, 0x44(r1)
/* 80612EE0  39 61 00 40 */	addi r11, r1, 0x40
/* 80612EE4  4B D4 F2 ED */	bl _savegpr_26
/* 80612EE8  7C 7F 1B 78 */	mr r31, r3
/* 80612EEC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80612EF0  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80612EF4  83 C3 5D AC */	lwz r30, 0x5dac(r3)
/* 80612EF8  38 7F 4A BC */	addi r3, r31, 0x4abc
/* 80612EFC  4B A7 09 35 */	bl Move__10dCcD_GSttsFv
/* 80612F00  A8 1F 47 84 */	lha r0, 0x4784(r31)
/* 80612F04  2C 00 00 00 */	cmpwi r0, 0
/* 80612F08  40 82 02 88 */	bne lbl_80613190
/* 80612F0C  3B 40 00 00 */	li r26, 0
/* 80612F10  3B A0 00 00 */	li r29, 0
/* 80612F14  3B 80 00 0A */	li r28, 0xa
lbl_80612F18:
/* 80612F18  3B 7D 06 00 */	addi r27, r29, 0x600
/* 80612F1C  7F 7F DA 14 */	add r27, r31, r27
/* 80612F20  7F 63 DB 78 */	mr r3, r27
/* 80612F24  4B A7 15 3D */	bl ChkTgHit__12dCcD_GObjInfFv
/* 80612F28  28 03 00 00 */	cmplwi r3, 0
/* 80612F2C  41 82 00 24 */	beq lbl_80612F50
/* 80612F30  B3 9F 47 84 */	sth r28, 0x4784(r31)
/* 80612F34  7F 63 DB 78 */	mr r3, r27
/* 80612F38  4B A7 15 C1 */	bl GetTgHitObj__12dCcD_GObjInfFv
/* 80612F3C  7C 64 1B 78 */	mr r4, r3
/* 80612F40  38 7F 59 E0 */	addi r3, r31, 0x59e0
/* 80612F44  38 A0 00 2A */	li r5, 0x2a
/* 80612F48  38 C0 00 00 */	li r6, 0
/* 80612F4C  4B A7 45 C9 */	bl def_se_set__FP10Z2CreatureP8cCcD_ObjUlP10fopAc_ac_c
lbl_80612F50:
/* 80612F50  3B 5A 00 01 */	addi r26, r26, 1
/* 80612F54  2C 1A 00 13 */	cmpwi r26, 0x13
/* 80612F58  3B BD 01 78 */	addi r29, r29, 0x178
/* 80612F5C  41 80 FF BC */	blt lbl_80612F18
/* 80612F60  A8 1F 47 56 */	lha r0, 0x4756(r31)
/* 80612F64  2C 00 00 00 */	cmpwi r0, 0
/* 80612F68  40 82 00 68 */	bne lbl_80612FD0
/* 80612F6C  38 7F 49 40 */	addi r3, r31, 0x4940
/* 80612F70  4B A7 14 F1 */	bl ChkTgHit__12dCcD_GObjInfFv
/* 80612F74  28 03 00 00 */	cmplwi r3, 0
/* 80612F78  41 82 00 58 */	beq lbl_80612FD0
/* 80612F7C  38 7F 49 40 */	addi r3, r31, 0x4940
/* 80612F80  4B A7 15 79 */	bl GetTgHitObj__12dCcD_GObjInfFv
/* 80612F84  90 7F 4A 78 */	stw r3, 0x4a78(r31)
/* 80612F88  7F E3 FB 78 */	mr r3, r31
/* 80612F8C  38 9F 4A 78 */	addi r4, r31, 0x4a78
/* 80612F90  4B A7 4C 75 */	bl cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo
/* 80612F94  80 7F 4A 78 */	lwz r3, 0x4a78(r31)
/* 80612F98  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80612F9C  54 00 04 63 */	rlwinm. r0, r0, 0, 0x11, 0x11
/* 80612FA0  41 82 00 30 */	beq lbl_80612FD0
/* 80612FA4  38 00 00 28 */	li r0, 0x28
/* 80612FA8  B0 1F 47 7A */	sth r0, 0x477a(r31)
/* 80612FAC  38 00 00 01 */	li r0, 1
/* 80612FB0  B0 1F 47 56 */	sth r0, 0x4756(r31)
/* 80612FB4  A8 1F 47 52 */	lha r0, 0x4752(r31)
/* 80612FB8  2C 00 00 64 */	cmpwi r0, 0x64
/* 80612FBC  41 82 00 14 */	beq lbl_80612FD0
/* 80612FC0  38 00 00 64 */	li r0, 0x64
/* 80612FC4  B0 1F 47 52 */	sth r0, 0x4752(r31)
/* 80612FC8  38 00 00 00 */	li r0, 0
/* 80612FCC  B0 1F 47 54 */	sth r0, 0x4754(r31)
lbl_80612FD0:
/* 80612FD0  A0 1F 05 8E */	lhz r0, 0x58e(r31)
/* 80612FD4  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80612FD8  41 82 01 B8 */	beq lbl_80613190
/* 80612FDC  A0 1F 05 8E */	lhz r0, 0x58e(r31)
/* 80612FE0  54 00 07 FA */	rlwinm r0, r0, 0, 0x1f, 0x1d
/* 80612FE4  B0 1F 05 8E */	sth r0, 0x58e(r31)
/* 80612FE8  38 00 00 7D */	li r0, 0x7d
/* 80612FEC  98 1F 5D 18 */	stb r0, 0x5d18(r31)
/* 80612FF0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80612FF4  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80612FF8  80 63 5D 3C */	lwz r3, 0x5d3c(r3)
/* 80612FFC  38 63 02 10 */	addi r3, r3, 0x210
/* 80613000  80 9F 5D 38 */	lwz r4, 0x5d38(r31)
/* 80613004  4B A3 89 15 */	bl getEmitter__Q213dPa_control_c7level_cFUl
/* 80613008  28 03 00 00 */	cmplwi r3, 0
/* 8061300C  41 82 00 10 */	beq lbl_8061301C
/* 80613010  80 03 00 F4 */	lwz r0, 0xf4(r3)
/* 80613014  60 00 01 00 */	ori r0, r0, 0x100
/* 80613018  90 03 00 F4 */	stw r0, 0xf4(r3)
lbl_8061301C:
/* 8061301C  38 00 00 00 */	li r0, 0
/* 80613020  90 1F 5D 38 */	stw r0, 0x5d38(r31)
/* 80613024  3C 60 80 62 */	lis r3, lit_3788@ha /* 0x8061AD90@ha */
/* 80613028  C0 23 AD 90 */	lfs f1, lit_3788@l(r3)  /* 0x8061AD90@l */
/* 8061302C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80613030  3C 60 80 62 */	lis r3, lit_3772@ha /* 0x8061AD84@ha */
/* 80613034  C0 03 AD 84 */	lfs f0, lit_3772@l(r3)  /* 0x8061AD84@l */
/* 80613038  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8061303C  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 80613040  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80613044  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80613048  38 63 5B D4 */	addi r3, r3, 0x5bd4
/* 8061304C  38 80 00 05 */	li r4, 5
/* 80613050  38 A0 00 1F */	li r5, 0x1f
/* 80613054  38 C1 00 10 */	addi r6, r1, 0x10
/* 80613058  4B A5 C9 CD */	bl StartShock__12dVibration_cFii4cXyz
/* 8061305C  88 7F 5D 11 */	lbz r3, 0x5d11(r31)
/* 80613060  38 03 00 01 */	addi r0, r3, 1
/* 80613064  98 1F 5D 11 */	stb r0, 0x5d11(r31)
/* 80613068  38 60 00 09 */	li r3, 9
/* 8061306C  38 80 FF FF */	li r4, -1
/* 80613070  4B A1 AA 2D */	bl dComIfGs_onOneZoneSwitch__Fii
/* 80613074  88 1E 05 68 */	lbz r0, 0x568(r30)
/* 80613078  28 00 00 20 */	cmplwi r0, 0x20
/* 8061307C  40 82 00 60 */	bne lbl_806130DC
/* 80613080  38 00 00 04 */	li r0, 4
/* 80613084  98 1F 5D 11 */	stb r0, 0x5d11(r31)
/* 80613088  38 00 00 03 */	li r0, 3
/* 8061308C  98 1F 5D 12 */	stb r0, 0x5d12(r31)
/* 80613090  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070356@ha */
/* 80613094  38 03 03 56 */	addi r0, r3, 0x0356 /* 0x00070356@l */
/* 80613098  90 01 00 0C */	stw r0, 0xc(r1)
/* 8061309C  38 7F 59 E0 */	addi r3, r31, 0x59e0
/* 806130A0  38 81 00 0C */	addi r4, r1, 0xc
/* 806130A4  38 A0 FF FF */	li r5, -1
/* 806130A8  81 9F 59 E0 */	lwz r12, 0x59e0(r31)
/* 806130AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 806130B0  7D 89 03 A6 */	mtctr r12
/* 806130B4  4E 80 04 21 */	bctrl 
/* 806130B8  38 7F 59 3C */	addi r3, r31, 0x593c
/* 806130BC  3C 80 00 04 */	lis r4, 0x0004 /* 0x00040001@ha */
/* 806130C0  38 84 00 01 */	addi r4, r4, 0x0001 /* 0x00040001@l */
/* 806130C4  38 A0 00 20 */	li r5, 0x20
/* 806130C8  81 9F 59 3C */	lwz r12, 0x593c(r31)
/* 806130CC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 806130D0  7D 89 03 A6 */	mtctr r12
/* 806130D4  4E 80 04 21 */	bctrl 
/* 806130D8  48 00 00 4C */	b lbl_80613124
lbl_806130DC:
/* 806130DC  3C 60 00 07 */	lis r3, 0x0007 /* 0x00070355@ha */
/* 806130E0  38 03 03 55 */	addi r0, r3, 0x0355 /* 0x00070355@l */
/* 806130E4  90 01 00 08 */	stw r0, 8(r1)
/* 806130E8  38 7F 59 E0 */	addi r3, r31, 0x59e0
/* 806130EC  38 81 00 08 */	addi r4, r1, 8
/* 806130F0  38 A0 FF FF */	li r5, -1
/* 806130F4  81 9F 59 E0 */	lwz r12, 0x59e0(r31)
/* 806130F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 806130FC  7D 89 03 A6 */	mtctr r12
/* 80613100  4E 80 04 21 */	bctrl 
/* 80613104  38 7F 59 3C */	addi r3, r31, 0x593c
/* 80613108  3C 80 00 04 */	lis r4, 0x0004 /* 0x00040001@ha */
/* 8061310C  38 84 00 01 */	addi r4, r4, 0x0001 /* 0x00040001@l */
/* 80613110  38 A0 00 1F */	li r5, 0x1f
/* 80613114  81 9F 59 3C */	lwz r12, 0x593c(r31)
/* 80613118  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 8061311C  7D 89 03 A6 */	mtctr r12
/* 80613120  4E 80 04 21 */	bctrl 
lbl_80613124:
/* 80613124  88 1F 5D 11 */	lbz r0, 0x5d11(r31)
/* 80613128  7C 00 07 74 */	extsb r0, r0
/* 8061312C  2C 00 00 04 */	cmpwi r0, 4
/* 80613130  41 80 00 58 */	blt lbl_80613188
/* 80613134  88 7F 5D 12 */	lbz r3, 0x5d12(r31)
/* 80613138  38 03 00 01 */	addi r0, r3, 1
/* 8061313C  98 1F 5D 12 */	stb r0, 0x5d12(r31)
/* 80613140  88 1F 5D 12 */	lbz r0, 0x5d12(r31)
/* 80613144  7C 00 07 74 */	extsb r0, r0
/* 80613148  2C 00 00 02 */	cmpwi r0, 2
/* 8061314C  41 80 00 10 */	blt lbl_8061315C
/* 80613150  A0 1F 05 8E */	lhz r0, 0x58e(r31)
/* 80613154  60 00 00 01 */	ori r0, r0, 1
/* 80613158  B0 1F 05 8E */	sth r0, 0x58e(r31)
lbl_8061315C:
/* 8061315C  38 00 00 64 */	li r0, 0x64
/* 80613160  B0 1F 47 7C */	sth r0, 0x477c(r31)
/* 80613164  88 1F 5D 12 */	lbz r0, 0x5d12(r31)
/* 80613168  7C 00 07 74 */	extsb r0, r0
/* 8061316C  2C 00 00 03 */	cmpwi r0, 3
/* 80613170  41 80 00 10 */	blt lbl_80613180
/* 80613174  38 00 00 FA */	li r0, 0xfa
/* 80613178  B0 1F 47 B8 */	sth r0, 0x47b8(r31)
/* 8061317C  48 00 00 0C */	b lbl_80613188
lbl_80613180:
/* 80613180  38 00 00 D2 */	li r0, 0xd2
/* 80613184  B0 1F 47 B8 */	sth r0, 0x47b8(r31)
lbl_80613188:
/* 80613188  38 00 00 14 */	li r0, 0x14
/* 8061318C  B0 1F 47 B0 */	sth r0, 0x47b0(r31)
lbl_80613190:
/* 80613190  39 61 00 40 */	addi r11, r1, 0x40
/* 80613194  4B D4 F0 89 */	bl _restgpr_26
/* 80613198  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8061319C  7C 08 03 A6 */	mtlr r0
/* 806131A0  38 21 00 40 */	addi r1, r1, 0x40
/* 806131A4  4E 80 00 20 */	blr 
