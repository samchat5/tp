lbl_80042FA8:
/* 80042FA8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80042FAC  7C 08 02 A6 */	mflr r0
/* 80042FB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80042FB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80042FB8  93 C1 00 08 */	stw r30, 8(r1)
/* 80042FBC  7C 7E 1B 78 */	mr r30, r3
/* 80042FC0  7C 9F 23 78 */	mr r31, r4
/* 80042FC4  80 04 04 9C */	lwz r0, 0x49c(r4)
/* 80042FC8  54 00 03 9D */	rlwinm. r0, r0, 0, 0xe, 0xe
/* 80042FCC  41 82 00 0C */	beq lbl_80042FD8
/* 80042FD0  38 60 00 02 */	li r3, 2
/* 80042FD4  48 00 01 80 */	b lbl_80043154
lbl_80042FD8:
/* 80042FD8  88 1E 00 E5 */	lbz r0, 0xe5(r30)
/* 80042FDC  28 00 00 00 */	cmplwi r0, 0
/* 80042FE0  40 82 00 0C */	bne lbl_80042FEC
/* 80042FE4  38 60 00 01 */	li r3, 1
/* 80042FE8  48 00 01 6C */	b lbl_80043154
lbl_80042FEC:
/* 80042FEC  88 1E 00 E4 */	lbz r0, 0xe4(r30)
/* 80042FF0  2C 00 00 02 */	cmpwi r0, 2
/* 80042FF4  41 82 00 4C */	beq lbl_80043040
/* 80042FF8  40 80 00 10 */	bge lbl_80043008
/* 80042FFC  2C 00 00 01 */	cmpwi r0, 1
/* 80043000  40 80 00 14 */	bge lbl_80043014
/* 80043004  48 00 00 94 */	b lbl_80043098
lbl_80043008:
/* 80043008  2C 00 00 04 */	cmpwi r0, 4
/* 8004300C  40 80 00 8C */	bge lbl_80043098
/* 80043010  48 00 00 70 */	b lbl_80043080
lbl_80043014:
/* 80043014  80 9E 00 C4 */	lwz r4, 0xc4(r30)
/* 80043018  48 00 02 D5 */	bl convPId__14dEvt_control_cFUi
/* 8004301C  7C 03 F8 40 */	cmplw r3, r31
/* 80043020  41 82 00 18 */	beq lbl_80043038
/* 80043024  7F C3 F3 78 */	mr r3, r30
/* 80043028  80 9E 00 C8 */	lwz r4, 0xc8(r30)
/* 8004302C  48 00 02 C1 */	bl convPId__14dEvt_control_cFUi
/* 80043030  7C 03 F8 40 */	cmplw r3, r31
/* 80043034  40 82 00 64 */	bne lbl_80043098
lbl_80043038:
/* 80043038  38 60 00 02 */	li r3, 2
/* 8004303C  48 00 01 18 */	b lbl_80043154
lbl_80043040:
/* 80043040  80 9E 00 C4 */	lwz r4, 0xc4(r30)
/* 80043044  48 00 02 A9 */	bl convPId__14dEvt_control_cFUi
/* 80043048  7C 03 F8 40 */	cmplw r3, r31
/* 8004304C  41 82 00 18 */	beq lbl_80043064
/* 80043050  7F C3 F3 78 */	mr r3, r30
/* 80043054  80 9E 00 C8 */	lwz r4, 0xc8(r30)
/* 80043058  48 00 02 95 */	bl convPId__14dEvt_control_cFUi
/* 8004305C  7C 03 F8 40 */	cmplw r3, r31
/* 80043060  40 82 00 0C */	bne lbl_8004306C
lbl_80043064:
/* 80043064  38 60 00 02 */	li r3, 2
/* 80043068  48 00 00 EC */	b lbl_80043154
lbl_8004306C:
/* 8004306C  88 1F 04 98 */	lbz r0, 0x498(r31)
/* 80043070  28 00 00 00 */	cmplwi r0, 0
/* 80043074  41 82 00 24 */	beq lbl_80043098
/* 80043078  38 60 00 02 */	li r3, 2
/* 8004307C  48 00 00 D8 */	b lbl_80043154
lbl_80043080:
/* 80043080  80 9E 00 C4 */	lwz r4, 0xc4(r30)
/* 80043084  48 00 02 69 */	bl convPId__14dEvt_control_cFUi
/* 80043088  7C 03 F8 40 */	cmplw r3, r31
/* 8004308C  40 82 00 0C */	bne lbl_80043098
/* 80043090  38 60 00 02 */	li r3, 2
/* 80043094  48 00 00 C0 */	b lbl_80043154
lbl_80043098:
/* 80043098  80 BF 04 9C */	lwz r5, 0x49c(r31)
/* 8004309C  54 A0 04 21 */	rlwinm. r0, r5, 0, 0x10, 0x10
/* 800430A0  41 82 00 0C */	beq lbl_800430AC
/* 800430A4  38 60 00 02 */	li r3, 2
/* 800430A8  48 00 00 AC */	b lbl_80043154
lbl_800430AC:
/* 800430AC  54 A0 05 29 */	rlwinm. r0, r5, 0, 0x14, 0x14
/* 800430B0  41 82 00 0C */	beq lbl_800430BC
/* 800430B4  38 60 00 01 */	li r3, 1
/* 800430B8  48 00 00 9C */	b lbl_80043154
lbl_800430BC:
/* 800430BC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 800430C0  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 800430C4  80 03 5F 18 */	lwz r0, 0x5f18(r3)
/* 800430C8  54 00 00 85 */	rlwinm. r0, r0, 0, 2, 2
/* 800430CC  40 82 00 18 */	bne lbl_800430E4
/* 800430D0  80 83 5F 1C */	lwz r4, 0x5f1c(r3)
/* 800430D4  3C 60 04 00 */	lis r3, 0x0400 /* 0x04002000@ha */
/* 800430D8  38 03 20 00 */	addi r0, r3, 0x2000 /* 0x04002000@l */
/* 800430DC  7C 80 00 39 */	and. r0, r4, r0
/* 800430E0  41 82 00 0C */	beq lbl_800430EC
lbl_800430E4:
/* 800430E4  38 60 00 00 */	li r3, 0
/* 800430E8  48 00 00 6C */	b lbl_80043154
lbl_800430EC:
/* 800430EC  88 7E 00 E4 */	lbz r3, 0xe4(r30)
/* 800430F0  28 03 00 01 */	cmplwi r3, 1
/* 800430F4  40 82 00 14 */	bne lbl_80043108
/* 800430F8  54 A0 06 73 */	rlwinm. r0, r5, 0, 0x19, 0x19
/* 800430FC  41 82 00 0C */	beq lbl_80043108
/* 80043100  38 60 00 01 */	li r3, 1
/* 80043104  48 00 00 50 */	b lbl_80043154
lbl_80043108:
/* 80043108  80 0D 88 B8 */	lwz r0, m_mode__7dDemo_c(r13)
/* 8004310C  2C 00 00 01 */	cmpwi r0, 1
/* 80043110  40 82 00 0C */	bne lbl_8004311C
/* 80043114  38 60 00 01 */	li r3, 1
/* 80043118  48 00 00 3C */	b lbl_80043154
lbl_8004311C:
/* 8004311C  28 03 00 03 */	cmplwi r3, 3
/* 80043120  41 82 00 10 */	beq lbl_80043130
/* 80043124  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 80043128  28 00 00 01 */	cmplwi r0, 1
/* 8004312C  40 82 00 14 */	bne lbl_80043140
lbl_80043130:
/* 80043130  54 A0 01 4B */	rlwinm. r0, r5, 0, 5, 5
/* 80043134  41 82 00 0C */	beq lbl_80043140
/* 80043138  38 60 00 00 */	li r3, 0
/* 8004313C  48 00 00 18 */	b lbl_80043154
lbl_80043140:
/* 80043140  54 A0 04 63 */	rlwinm. r0, r5, 0, 0x11, 0x11
/* 80043144  41 82 00 0C */	beq lbl_80043150
/* 80043148  38 60 00 01 */	li r3, 1
/* 8004314C  48 00 00 08 */	b lbl_80043154
lbl_80043150:
/* 80043150  54 A3 9F FE */	rlwinm r3, r5, 0x13, 0x1f, 0x1f
lbl_80043154:
/* 80043154  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80043158  83 C1 00 08 */	lwz r30, 8(r1)
/* 8004315C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80043160  7C 08 03 A6 */	mtlr r0
/* 80043164  38 21 00 10 */	addi r1, r1, 0x10
/* 80043168  4E 80 00 20 */	blr 
