lbl_8035F6F4:
/* 8035F6F4  7C 67 0E 70 */	srawi r7, r3, 1
/* 8035F6F8  81 22 CB 80 */	lwz r9, __GXData(r2)
/* 8035F6FC  54 AA 06 2C */	rlwinm r10, r5, 0, 0x18, 0x16
/* 8035F700  7C E7 01 94 */	addze r7, r7
/* 8035F704  54 60 10 3A */	slwi r0, r3, 2
/* 8035F708  7D 09 02 14 */	add r8, r9, r0
/* 8035F70C  54 E7 10 3A */	slwi r7, r7, 2
/* 8035F710  90 A8 05 54 */	stw r5, 0x554(r8)
/* 8035F714  38 E7 01 00 */	addi r7, r7, 0x100
/* 8035F718  28 0A 00 08 */	cmplwi r10, 8
/* 8035F71C  38 0A 00 00 */	addi r0, r10, 0
/* 8035F720  7C E9 3A 14 */	add r7, r9, r7
/* 8035F724  41 80 00 0C */	blt lbl_8035F730
/* 8035F728  39 20 00 00 */	li r9, 0
/* 8035F72C  48 00 00 08 */	b lbl_8035F734
lbl_8035F730:
/* 8035F730  7C 09 03 78 */	mr r9, r0
lbl_8035F734:
/* 8035F734  2C 04 00 08 */	cmpwi r4, 8
/* 8035F738  41 80 00 28 */	blt lbl_8035F760
/* 8035F73C  80 82 CB 80 */	lwz r4, __GXData(r2)
/* 8035F740  38 00 00 01 */	li r0, 1
/* 8035F744  7C 00 18 30 */	slw r0, r0, r3
/* 8035F748  81 04 05 98 */	lwz r8, 0x598(r4)
/* 8035F74C  39 44 05 98 */	addi r10, r4, 0x598
/* 8035F750  38 80 00 00 */	li r4, 0
/* 8035F754  7D 00 00 78 */	andc r0, r8, r0
/* 8035F758  90 0A 00 00 */	stw r0, 0(r10)
/* 8035F75C  48 00 00 20 */	b lbl_8035F77C
lbl_8035F760:
/* 8035F760  81 02 CB 80 */	lwz r8, __GXData(r2)
/* 8035F764  38 00 00 01 */	li r0, 1
/* 8035F768  7C 00 18 30 */	slw r0, r0, r3
/* 8035F76C  39 48 05 98 */	addi r10, r8, 0x598
/* 8035F770  81 08 05 98 */	lwz r8, 0x598(r8)
/* 8035F774  7D 00 03 78 */	or r0, r8, r0
/* 8035F778  90 0A 00 00 */	stw r0, 0(r10)
lbl_8035F77C:
/* 8035F77C  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 8035F780  41 82 00 74 */	beq lbl_8035F7F4
/* 8035F784  80 07 00 00 */	lwz r0, 0(r7)
/* 8035F788  51 20 64 66 */	rlwimi r0, r9, 0xc, 0x11, 0x13
/* 8035F78C  2C 06 00 FF */	cmpwi r6, 0xff
/* 8035F790  90 07 00 00 */	stw r0, 0(r7)
/* 8035F794  80 07 00 00 */	lwz r0, 0(r7)
/* 8035F798  50 80 7B A0 */	rlwimi r0, r4, 0xf, 0xe, 0x10
/* 8035F79C  90 07 00 00 */	stw r0, 0(r7)
/* 8035F7A0  40 82 00 0C */	bne lbl_8035F7AC
/* 8035F7A4  38 60 00 07 */	li r3, 7
/* 8035F7A8  48 00 00 18 */	b lbl_8035F7C0
lbl_8035F7AC:
/* 8035F7AC  3C 60 80 3D */	lis r3, c2r@ha /* 0x803D2810@ha */
/* 8035F7B0  54 C4 10 3A */	slwi r4, r6, 2
/* 8035F7B4  38 03 28 10 */	addi r0, r3, c2r@l /* 0x803D2810@l */
/* 8035F7B8  7C 60 22 14 */	add r3, r0, r4
/* 8035F7BC  80 63 00 00 */	lwz r3, 0(r3)
lbl_8035F7C0:
/* 8035F7C0  80 07 00 00 */	lwz r0, 0(r7)
/* 8035F7C4  50 60 9A 98 */	rlwimi r0, r3, 0x13, 0xa, 0xc
/* 8035F7C8  2C 05 00 FF */	cmpwi r5, 0xff
/* 8035F7CC  90 07 00 00 */	stw r0, 0(r7)
/* 8035F7D0  38 60 00 00 */	li r3, 0
/* 8035F7D4  41 82 00 10 */	beq lbl_8035F7E4
/* 8035F7D8  54 A0 05 EF */	rlwinm. r0, r5, 0, 0x17, 0x17
/* 8035F7DC  40 82 00 08 */	bne lbl_8035F7E4
/* 8035F7E0  38 60 00 01 */	li r3, 1
lbl_8035F7E4:
/* 8035F7E4  80 07 00 00 */	lwz r0, 0(r7)
/* 8035F7E8  50 60 93 5A */	rlwimi r0, r3, 0x12, 0xd, 0xd
/* 8035F7EC  90 07 00 00 */	stw r0, 0(r7)
/* 8035F7F0  48 00 00 70 */	b lbl_8035F860
lbl_8035F7F4:
/* 8035F7F4  80 07 00 00 */	lwz r0, 0(r7)
/* 8035F7F8  51 20 07 7E */	rlwimi r0, r9, 0, 0x1d, 0x1f
/* 8035F7FC  2C 06 00 FF */	cmpwi r6, 0xff
/* 8035F800  90 07 00 00 */	stw r0, 0(r7)
/* 8035F804  80 07 00 00 */	lwz r0, 0(r7)
/* 8035F808  50 80 1E B8 */	rlwimi r0, r4, 3, 0x1a, 0x1c
/* 8035F80C  90 07 00 00 */	stw r0, 0(r7)
/* 8035F810  40 82 00 0C */	bne lbl_8035F81C
/* 8035F814  38 60 00 07 */	li r3, 7
/* 8035F818  48 00 00 18 */	b lbl_8035F830
lbl_8035F81C:
/* 8035F81C  3C 60 80 3D */	lis r3, c2r@ha /* 0x803D2810@ha */
/* 8035F820  54 C4 10 3A */	slwi r4, r6, 2
/* 8035F824  38 03 28 10 */	addi r0, r3, c2r@l /* 0x803D2810@l */
/* 8035F828  7C 60 22 14 */	add r3, r0, r4
/* 8035F82C  80 63 00 00 */	lwz r3, 0(r3)
lbl_8035F830:
/* 8035F830  80 07 00 00 */	lwz r0, 0(r7)
/* 8035F834  50 60 3D B0 */	rlwimi r0, r3, 7, 0x16, 0x18
/* 8035F838  2C 05 00 FF */	cmpwi r5, 0xff
/* 8035F83C  90 07 00 00 */	stw r0, 0(r7)
/* 8035F840  38 60 00 00 */	li r3, 0
/* 8035F844  41 82 00 10 */	beq lbl_8035F854
/* 8035F848  54 A0 05 EF */	rlwinm. r0, r5, 0, 0x17, 0x17
/* 8035F84C  40 82 00 08 */	bne lbl_8035F854
/* 8035F850  38 60 00 01 */	li r3, 1
lbl_8035F854:
/* 8035F854  80 07 00 00 */	lwz r0, 0(r7)
/* 8035F858  50 60 36 72 */	rlwimi r0, r3, 6, 0x19, 0x19
/* 8035F85C  90 07 00 00 */	stw r0, 0(r7)
lbl_8035F860:
/* 8035F860  38 00 00 61 */	li r0, 0x61
/* 8035F864  80 62 CB 80 */	lwz r3, __GXData(r2)
/* 8035F868  3C A0 CC 01 */	lis r5, 0xCC01 /* 0xCC008000@ha */
/* 8035F86C  98 05 80 00 */	stb r0, 0x8000(r5)  /* 0xCC008000@l */
/* 8035F870  38 00 00 00 */	li r0, 0
/* 8035F874  80 87 00 00 */	lwz r4, 0(r7)
/* 8035F878  90 85 80 00 */	stw r4, -0x8000(r5)
/* 8035F87C  B0 03 00 02 */	sth r0, 2(r3)
/* 8035F880  80 03 05 AC */	lwz r0, 0x5ac(r3)
/* 8035F884  60 00 00 01 */	ori r0, r0, 1
/* 8035F888  90 03 05 AC */	stw r0, 0x5ac(r3)
/* 8035F88C  4E 80 00 20 */	blr 
