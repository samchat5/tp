lbl_800E70FC:
/* 800E70FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800E7100  7C 08 02 A6 */	mflr r0
/* 800E7104  90 01 00 14 */	stw r0, 0x14(r1)
/* 800E7108  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800E710C  7C 7F 1B 78 */	mr r31, r3
/* 800E7110  80 A3 27 F4 */	lwz r5, 0x27f4(r3)
/* 800E7114  80 05 04 9C */	lwz r0, 0x49c(r5)
/* 800E7118  54 00 04 A5 */	rlwinm. r0, r0, 0, 0x12, 0x12
/* 800E711C  41 82 00 0C */	beq lbl_800E7128
/* 800E7120  4B FC E7 CD */	bl checkWaitAction__9daAlink_cFv
/* 800E7124  48 00 00 9C */	b lbl_800E71C0
lbl_800E7128:
/* 800E7128  A0 1F 2F DC */	lhz r0, 0x2fdc(r31)
/* 800E712C  28 00 00 FF */	cmplwi r0, 0xff
/* 800E7130  41 82 00 10 */	beq lbl_800E7140
/* 800E7134  38 80 00 74 */	li r4, 0x74
/* 800E7138  4B FD BC A5 */	bl procPreActionUnequipInit__9daAlink_cFiP10fopAc_ac_c
/* 800E713C  48 00 00 84 */	b lbl_800E71C0
lbl_800E7140:
/* 800E7140  38 80 00 74 */	li r4, 0x74
/* 800E7144  4B FD AE 29 */	bl commonProcInit__9daAlink_cFQ29daAlink_c12daAlink_PROC
/* 800E7148  C0 02 92 C0 */	lfs f0, lit_6108(r2)
/* 800E714C  D0 1F 33 98 */	stfs f0, 0x3398(r31)
/* 800E7150  80 7F 27 F4 */	lwz r3, 0x27f4(r31)
/* 800E7154  C0 43 05 54 */	lfs f2, 0x554(r3)
/* 800E7158  C0 3F 38 38 */	lfs f1, 0x3838(r31)
/* 800E715C  C0 02 92 E0 */	lfs f0, lit_6845(r2)
/* 800E7160  EC 01 00 28 */	fsubs f0, f1, f0
/* 800E7164  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 800E7168  40 81 00 28 */	ble lbl_800E7190
/* 800E716C  7F E3 FB 78 */	mr r3, r31
/* 800E7170  38 80 01 07 */	li r4, 0x107
/* 800E7174  3C A0 80 39 */	lis r5, m__20daAlinkHIO_bottle_c0@ha /* 0x8038E90C@ha */
/* 800E7178  38 A5 E9 0C */	addi r5, r5, m__20daAlinkHIO_bottle_c0@l /* 0x8038E90C@l */
/* 800E717C  38 A5 00 64 */	addi r5, r5, 0x64
/* 800E7180  4B FC 5F 75 */	bl setSingleAnimeParam__9daAlink_cFQ29daAlink_c11daAlink_ANMPC16daAlinkHIO_anm_c
/* 800E7184  C0 02 93 24 */	lfs f0, lit_7450(r2)
/* 800E7188  D0 1F 34 78 */	stfs f0, 0x3478(r31)
/* 800E718C  48 00 00 24 */	b lbl_800E71B0
lbl_800E7190:
/* 800E7190  7F E3 FB 78 */	mr r3, r31
/* 800E7194  38 80 01 08 */	li r4, 0x108
/* 800E7198  3C A0 80 39 */	lis r5, m__20daAlinkHIO_bottle_c0@ha /* 0x8038E90C@ha */
/* 800E719C  38 A5 E9 0C */	addi r5, r5, m__20daAlinkHIO_bottle_c0@l /* 0x8038E90C@l */
/* 800E71A0  38 A5 00 50 */	addi r5, r5, 0x50
/* 800E71A4  4B FC 5F 51 */	bl setSingleAnimeParam__9daAlink_cFQ29daAlink_c11daAlink_ANMPC16daAlinkHIO_anm_c
/* 800E71A8  C0 02 93 8C */	lfs f0, lit_8783(r2)
/* 800E71AC  D0 1F 34 78 */	stfs f0, 0x3478(r31)
lbl_800E71B0:
/* 800E71B0  38 7F 28 0C */	addi r3, r31, 0x280c
/* 800E71B4  80 9F 27 F4 */	lwz r4, 0x27f4(r31)
/* 800E71B8  48 07 7B 01 */	bl setData__16daPy_actorKeep_cFP10fopAc_ac_c
/* 800E71BC  38 60 00 01 */	li r3, 1
lbl_800E71C0:
/* 800E71C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800E71C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800E71C8  7C 08 03 A6 */	mtlr r0
/* 800E71CC  38 21 00 10 */	addi r1, r1, 0x10
/* 800E71D0  4E 80 00 20 */	blr 
