lbl_806C702C:
/* 806C702C  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 806C7030  7C 08 02 A6 */	mflr r0
/* 806C7034  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 806C7038  39 61 00 A0 */	addi r11, r1, 0xa0
/* 806C703C  4B C9 B1 79 */	bl _savegpr_19
/* 806C7040  7C 7E 1B 78 */	mr r30, r3
/* 806C7044  7C 9A 23 78 */	mr r26, r4
/* 806C7048  7C BB 2B 78 */	mr r27, r5
/* 806C704C  7C DC 33 78 */	mr r28, r6
/* 806C7050  3C 60 80 6C */	lis r3, cNullVec__6Z2Calc@ha /* 0x806C76C4@ha */
/* 806C7054  3A E3 76 C4 */	addi r23, r3, cNullVec__6Z2Calc@l /* 0x806C76C4@l */
/* 806C7058  3C 60 80 6C */	lis r3, lit_3906@ha /* 0x806C74E8@ha */
/* 806C705C  3B E3 74 E8 */	addi r31, r3, lit_3906@l /* 0x806C74E8@l */
/* 806C7060  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 806C7064  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 806C7068  80 63 5D AC */	lwz r3, 0x5dac(r3)
/* 806C706C  3C 80 80 45 */	lis r4, m_midnaActor__9daPy_py_c@ha /* 0x80451018@ha */
/* 806C7070  80 04 10 18 */	lwz r0, m_midnaActor__9daPy_py_c@l(r4)  /* 0x80451018@l */
/* 806C7074  28 00 00 00 */	cmplwi r0, 0
/* 806C7078  41 82 03 A4 */	beq lbl_806C741C
/* 806C707C  7F C4 F3 78 */	mr r4, r30
/* 806C7080  81 83 06 28 */	lwz r12, 0x628(r3)
/* 806C7084  81 8C 00 EC */	lwz r12, 0xec(r12)
/* 806C7088  7D 89 03 A6 */	mtctr r12
/* 806C708C  4E 80 04 21 */	bctrl 
/* 806C7090  2C 03 00 00 */	cmpwi r3, 0
/* 806C7094  41 82 03 88 */	beq lbl_806C741C
/* 806C7098  4B AE 54 E5 */	bl dKy_darkworld_check__Fv
/* 806C709C  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 806C70A0  30 03 FF FF */	addic r0, r3, -1
/* 806C70A4  7F A0 19 10 */	subfe r29, r0, r3
/* 806C70A8  88 1E 05 A8 */	lbz r0, 0x5a8(r30)
/* 806C70AC  28 00 00 00 */	cmplwi r0, 0
/* 806C70B0  40 82 02 A0 */	bne lbl_806C7350
/* 806C70B4  38 00 00 01 */	li r0, 1
/* 806C70B8  98 1E 05 A8 */	stb r0, 0x5a8(r30)
/* 806C70BC  3C 60 80 45 */	lis r3, m_midnaActor__9daPy_py_c@ha /* 0x80451018@ha */
/* 806C70C0  38 63 10 18 */	addi r3, r3, m_midnaActor__9daPy_py_c@l /* 0x80451018@l */
/* 806C70C4  80 63 00 00 */	lwz r3, 0(r3)
/* 806C70C8  80 63 05 74 */	lwz r3, 0x574(r3)
/* 806C70CC  80 63 00 84 */	lwz r3, 0x84(r3)
/* 806C70D0  80 63 00 0C */	lwz r3, 0xc(r3)
/* 806C70D4  38 63 01 E0 */	addi r3, r3, 0x1e0
/* 806C70D8  3C 80 80 3E */	lis r4, now__14mDoMtx_stack_c@ha /* 0x803DD470@ha */
/* 806C70DC  38 84 D4 70 */	addi r4, r4, now__14mDoMtx_stack_c@l /* 0x803DD470@l */
/* 806C70E0  4B C7 F3 D1 */	bl PSMTXCopy
/* 806C70E4  C0 1F 00 00 */	lfs f0, 0(r31)
/* 806C70E8  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 806C70EC  C0 1F 00 04 */	lfs f0, 4(r31)
/* 806C70F0  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 806C70F4  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 806C70F8  3C 60 80 3E */	lis r3, now__14mDoMtx_stack_c@ha /* 0x803DD470@ha */
/* 806C70FC  38 63 D4 70 */	addi r3, r3, now__14mDoMtx_stack_c@l /* 0x803DD470@l */
/* 806C7100  38 81 00 4C */	addi r4, r1, 0x4c
/* 806C7104  38 A1 00 58 */	addi r5, r1, 0x58
/* 806C7108  4B C7 FC 65 */	bl PSMTXMultVec
/* 806C710C  38 61 00 34 */	addi r3, r1, 0x34
/* 806C7110  38 81 00 58 */	addi r4, r1, 0x58
/* 806C7114  7F 65 DB 78 */	mr r5, r27
/* 806C7118  4B B9 FA 1D */	bl __mi__4cXyzCFRC3Vec
/* 806C711C  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 806C7120  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 806C7124  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 806C7128  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 806C712C  C0 41 00 3C */	lfs f2, 0x3c(r1)
/* 806C7130  D0 41 00 48 */	stfs f2, 0x48(r1)
/* 806C7134  4B BA 05 41 */	bl cM_atan2s__Fff
/* 806C7138  B0 61 00 2E */	sth r3, 0x2e(r1)
/* 806C713C  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 806C7140  EC 20 00 32 */	fmuls f1, f0, f0
/* 806C7144  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 806C7148  EC 00 00 32 */	fmuls f0, f0, f0
/* 806C714C  EC 41 00 2A */	fadds f2, f1, f0
/* 806C7150  C0 1F 00 04 */	lfs f0, 4(r31)
/* 806C7154  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 806C7158  40 81 00 0C */	ble lbl_806C7164
/* 806C715C  FC 00 10 34 */	frsqrte f0, f2
/* 806C7160  EC 40 00 B2 */	fmuls f2, f0, f2
lbl_806C7164:
/* 806C7164  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 806C7168  4B BA 05 0D */	bl cM_atan2s__Fff
/* 806C716C  7C 03 00 D0 */	neg r0, r3
/* 806C7170  B0 01 00 2C */	sth r0, 0x2c(r1)
/* 806C7174  38 80 00 00 */	li r4, 0
/* 806C7178  B0 81 00 30 */	sth r4, 0x30(r1)
/* 806C717C  88 1E 04 E2 */	lbz r0, 0x4e2(r30)
/* 806C7180  7C 00 07 74 */	extsb r0, r0
/* 806C7184  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 806C7188  3B 03 61 C0 */	addi r24, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 806C718C  80 78 5D 3C */	lwz r3, 0x5d3c(r24)
/* 806C7190  57 A5 10 3A */	slwi r5, r29, 2
/* 806C7194  90 81 00 08 */	stw r4, 8(r1)
/* 806C7198  90 01 00 0C */	stw r0, 0xc(r1)
/* 806C719C  3A B7 00 20 */	addi r21, r23, 0x20
/* 806C71A0  7E B5 2A 14 */	add r21, r21, r5
/* 806C71A4  92 A1 00 10 */	stw r21, 0x10(r1)
/* 806C71A8  3A D7 00 28 */	addi r22, r23, 0x28
/* 806C71AC  7E D6 2A 14 */	add r22, r22, r5
/* 806C71B0  92 C1 00 14 */	stw r22, 0x14(r1)
/* 806C71B4  90 81 00 18 */	stw r4, 0x18(r1)
/* 806C71B8  38 80 00 00 */	li r4, 0
/* 806C71BC  38 A0 02 9B */	li r5, 0x29b
/* 806C71C0  7F 66 DB 78 */	mr r6, r27
/* 806C71C4  38 FE 01 0C */	addi r7, r30, 0x10c
/* 806C71C8  39 01 00 2C */	addi r8, r1, 0x2c
/* 806C71CC  7F 89 E3 78 */	mr r9, r28
/* 806C71D0  39 40 00 FF */	li r10, 0xff
/* 806C71D4  C0 3F 00 08 */	lfs f1, 8(r31)
/* 806C71D8  4B 98 58 B9 */	bl set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf
/* 806C71DC  7C 79 1B 79 */	or. r25, r3, r3
/* 806C71E0  41 82 00 FC */	beq lbl_806C72DC
/* 806C71E4  38 61 00 40 */	addi r3, r1, 0x40
/* 806C71E8  4B C7 FF 51 */	bl PSVECSquareMag
/* 806C71EC  C0 1F 00 04 */	lfs f0, 4(r31)
/* 806C71F0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806C71F4  40 81 00 58 */	ble lbl_806C724C
/* 806C71F8  FC 00 08 34 */	frsqrte f0, f1
/* 806C71FC  C8 9F 00 10 */	lfd f4, 0x10(r31)
/* 806C7200  FC 44 00 32 */	fmul f2, f4, f0
/* 806C7204  C8 7F 00 18 */	lfd f3, 0x18(r31)
/* 806C7208  FC 00 00 32 */	fmul f0, f0, f0
/* 806C720C  FC 01 00 32 */	fmul f0, f1, f0
/* 806C7210  FC 03 00 28 */	fsub f0, f3, f0
/* 806C7214  FC 02 00 32 */	fmul f0, f2, f0
/* 806C7218  FC 44 00 32 */	fmul f2, f4, f0
/* 806C721C  FC 00 00 32 */	fmul f0, f0, f0
/* 806C7220  FC 01 00 32 */	fmul f0, f1, f0
/* 806C7224  FC 03 00 28 */	fsub f0, f3, f0
/* 806C7228  FC 02 00 32 */	fmul f0, f2, f0
/* 806C722C  FC 44 00 32 */	fmul f2, f4, f0
/* 806C7230  FC 00 00 32 */	fmul f0, f0, f0
/* 806C7234  FC 01 00 32 */	fmul f0, f1, f0
/* 806C7238  FC 03 00 28 */	fsub f0, f3, f0
/* 806C723C  FC 02 00 32 */	fmul f0, f2, f0
/* 806C7240  FC 21 00 32 */	fmul f1, f1, f0
/* 806C7244  FC 20 08 18 */	frsp f1, f1
/* 806C7248  48 00 00 88 */	b lbl_806C72D0
lbl_806C724C:
/* 806C724C  C8 1F 00 20 */	lfd f0, 0x20(r31)
/* 806C7250  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 806C7254  40 80 00 10 */	bge lbl_806C7264
/* 806C7258  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 806C725C  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 806C7260  48 00 00 70 */	b lbl_806C72D0
lbl_806C7264:
/* 806C7264  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 806C7268  80 81 00 20 */	lwz r4, 0x20(r1)
/* 806C726C  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 806C7270  3C 00 7F 80 */	lis r0, 0x7f80
/* 806C7274  7C 03 00 00 */	cmpw r3, r0
/* 806C7278  41 82 00 14 */	beq lbl_806C728C
/* 806C727C  40 80 00 40 */	bge lbl_806C72BC
/* 806C7280  2C 03 00 00 */	cmpwi r3, 0
/* 806C7284  41 82 00 20 */	beq lbl_806C72A4
/* 806C7288  48 00 00 34 */	b lbl_806C72BC
lbl_806C728C:
/* 806C728C  54 80 02 7F */	clrlwi. r0, r4, 9
/* 806C7290  41 82 00 0C */	beq lbl_806C729C
/* 806C7294  38 00 00 01 */	li r0, 1
/* 806C7298  48 00 00 28 */	b lbl_806C72C0
lbl_806C729C:
/* 806C729C  38 00 00 02 */	li r0, 2
/* 806C72A0  48 00 00 20 */	b lbl_806C72C0
lbl_806C72A4:
/* 806C72A4  54 80 02 7F */	clrlwi. r0, r4, 9
/* 806C72A8  41 82 00 0C */	beq lbl_806C72B4
/* 806C72AC  38 00 00 05 */	li r0, 5
/* 806C72B0  48 00 00 10 */	b lbl_806C72C0
lbl_806C72B4:
/* 806C72B4  38 00 00 03 */	li r0, 3
/* 806C72B8  48 00 00 08 */	b lbl_806C72C0
lbl_806C72BC:
/* 806C72BC  38 00 00 04 */	li r0, 4
lbl_806C72C0:
/* 806C72C0  2C 00 00 01 */	cmpwi r0, 1
/* 806C72C4  40 82 00 0C */	bne lbl_806C72D0
/* 806C72C8  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 806C72CC  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_806C72D0:
/* 806C72D0  C0 1F 00 28 */	lfs f0, 0x28(r31)
/* 806C72D4  EC 00 00 72 */	fmuls f0, f0, f1
/* 806C72D8  D0 19 00 B4 */	stfs f0, 0xb4(r25)
lbl_806C72DC:
/* 806C72DC  88 1E 04 E2 */	lbz r0, 0x4e2(r30)
/* 806C72E0  7C 04 07 74 */	extsb r4, r0
/* 806C72E4  80 78 5D 3C */	lwz r3, 0x5d3c(r24)
/* 806C72E8  38 00 00 00 */	li r0, 0
/* 806C72EC  90 01 00 08 */	stw r0, 8(r1)
/* 806C72F0  90 81 00 0C */	stw r4, 0xc(r1)
/* 806C72F4  92 A1 00 10 */	stw r21, 0x10(r1)
/* 806C72F8  92 C1 00 14 */	stw r22, 0x14(r1)
/* 806C72FC  90 01 00 18 */	stw r0, 0x18(r1)
/* 806C7300  38 80 00 00 */	li r4, 0
/* 806C7304  38 A0 02 9C */	li r5, 0x29c
/* 806C7308  7F 66 DB 78 */	mr r6, r27
/* 806C730C  38 FE 01 0C */	addi r7, r30, 0x10c
/* 806C7310  39 1E 04 E4 */	addi r8, r30, 0x4e4
/* 806C7314  7F 89 E3 78 */	mr r9, r28
/* 806C7318  39 40 00 FF */	li r10, 0xff
/* 806C731C  C0 3F 00 08 */	lfs f1, 8(r31)
/* 806C7320  4B 98 57 71 */	bl set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf
/* 806C7324  3C 60 00 06 */	lis r3, 0x0006 /* 0x00060029@ha */
/* 806C7328  38 03 00 29 */	addi r0, r3, 0x0029 /* 0x00060029@l */
/* 806C732C  90 01 00 28 */	stw r0, 0x28(r1)
/* 806C7330  7F 43 D3 78 */	mr r3, r26
/* 806C7334  38 81 00 28 */	addi r4, r1, 0x28
/* 806C7338  38 A0 00 00 */	li r5, 0
/* 806C733C  38 C0 FF FF */	li r6, -1
/* 806C7340  81 9A 00 00 */	lwz r12, 0(r26)
/* 806C7344  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 806C7348  7D 89 03 A6 */	mtctr r12
/* 806C734C  4E 80 04 21 */	bctrl 
lbl_806C7350:
/* 806C7350  3A A0 00 00 */	li r21, 0
/* 806C7354  3A C0 00 00 */	li r22, 0
/* 806C7358  3A 80 00 00 */	li r20, 0
/* 806C735C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 806C7360  3B 23 61 C0 */	addi r25, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 806C7364  57 A0 10 3A */	slwi r0, r29, 2
/* 806C7368  3B 17 00 28 */	addi r24, r23, 0x28
/* 806C736C  7F 18 02 14 */	add r24, r24, r0
/* 806C7370  3B B7 00 20 */	addi r29, r23, 0x20
/* 806C7374  7F BD 02 14 */	add r29, r29, r0
/* 806C7378  3A 77 00 30 */	addi r19, r23, 0x30
lbl_806C737C:
/* 806C737C  3A F4 05 9C */	addi r23, r20, 0x59c
/* 806C7380  88 1E 04 E2 */	lbz r0, 0x4e2(r30)
/* 806C7384  7C 05 07 74 */	extsb r5, r0
/* 806C7388  7C 9E B8 2E */	lwzx r4, r30, r23
/* 806C738C  80 79 5D 3C */	lwz r3, 0x5d3c(r25)
/* 806C7390  38 00 00 FF */	li r0, 0xff
/* 806C7394  90 01 00 08 */	stw r0, 8(r1)
/* 806C7398  38 00 00 00 */	li r0, 0
/* 806C739C  90 01 00 0C */	stw r0, 0xc(r1)
/* 806C73A0  90 A1 00 10 */	stw r5, 0x10(r1)
/* 806C73A4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 806C73A8  93 01 00 18 */	stw r24, 0x18(r1)
/* 806C73AC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 806C73B0  38 A0 00 00 */	li r5, 0
/* 806C73B4  7C D3 B2 2E */	lhzx r6, r19, r22
/* 806C73B8  7F 67 DB 78 */	mr r7, r27
/* 806C73BC  39 1E 01 0C */	addi r8, r30, 0x10c
/* 806C73C0  39 3E 04 E4 */	addi r9, r30, 0x4e4
/* 806C73C4  7F 8A E3 78 */	mr r10, r28
/* 806C73C8  C0 3F 00 08 */	lfs f1, 8(r31)
/* 806C73CC  4B 98 61 01 */	bl set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf
/* 806C73D0  7C 7E B9 2E */	stwx r3, r30, r23
/* 806C73D4  3A B5 00 01 */	addi r21, r21, 1
/* 806C73D8  2C 15 00 03 */	cmpwi r21, 3
/* 806C73DC  3A D6 00 02 */	addi r22, r22, 2
/* 806C73E0  3A 94 00 04 */	addi r20, r20, 4
/* 806C73E4  41 80 FF 98 */	blt lbl_806C737C
/* 806C73E8  3C 60 00 06 */	lis r3, 0x0006 /* 0x0006002A@ha */
/* 806C73EC  38 03 00 2A */	addi r0, r3, 0x002A /* 0x0006002A@l */
/* 806C73F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 806C73F4  7F 43 D3 78 */	mr r3, r26
/* 806C73F8  38 81 00 24 */	addi r4, r1, 0x24
/* 806C73FC  38 A0 00 00 */	li r5, 0
/* 806C7400  38 C0 FF FF */	li r6, -1
/* 806C7404  81 9A 00 00 */	lwz r12, 0(r26)
/* 806C7408  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 806C740C  7D 89 03 A6 */	mtctr r12
/* 806C7410  4E 80 04 21 */	bctrl 
/* 806C7414  38 60 00 01 */	li r3, 1
/* 806C7418  48 00 00 10 */	b lbl_806C7428
lbl_806C741C:
/* 806C741C  38 00 00 00 */	li r0, 0
/* 806C7420  98 1E 05 A8 */	stb r0, 0x5a8(r30)
/* 806C7424  38 60 00 00 */	li r3, 0
lbl_806C7428:
/* 806C7428  39 61 00 A0 */	addi r11, r1, 0xa0
/* 806C742C  4B C9 AD D5 */	bl _restgpr_19
/* 806C7430  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 806C7434  7C 08 03 A6 */	mtlr r0
/* 806C7438  38 21 00 A0 */	addi r1, r1, 0xa0
/* 806C743C  4E 80 00 20 */	blr 
