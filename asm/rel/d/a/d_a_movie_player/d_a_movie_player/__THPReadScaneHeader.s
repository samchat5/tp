lbl_80873088:
/* 80873088  3C 60 80 88 */	lis r3, __THPInfo@ha /* 0x80879BC4@ha */
/* 8087308C  38 A3 9B C4 */	addi r5, r3, __THPInfo@l /* 0x80879BC4@l */
/* 80873090  80 85 00 00 */	lwz r4, 0(r5)
/* 80873094  80 64 06 9C */	lwz r3, 0x69c(r4)
/* 80873098  38 03 00 02 */	addi r0, r3, 2
/* 8087309C  90 04 06 9C */	stw r0, 0x69c(r4)
/* 808730A0  80 85 00 00 */	lwz r4, 0(r5)
/* 808730A4  80 64 06 9C */	lwz r3, 0x69c(r4)
/* 808730A8  38 03 00 01 */	addi r0, r3, 1
/* 808730AC  90 04 06 9C */	stw r0, 0x69c(r4)
/* 808730B0  88 03 00 00 */	lbz r0, 0(r3)
/* 808730B4  28 00 00 03 */	cmplwi r0, 3
/* 808730B8  41 82 00 0C */	beq lbl_808730C4
/* 808730BC  38 60 00 0C */	li r3, 0xc
/* 808730C0  4E 80 00 20 */	blr 
lbl_808730C4:
/* 808730C4  39 00 00 00 */	li r8, 0
/* 808730C8  48 00 00 8C */	b lbl_80873154
lbl_808730CC:
/* 808730CC  80 85 00 00 */	lwz r4, 0(r5)
/* 808730D0  80 64 06 9C */	lwz r3, 0x69c(r4)
/* 808730D4  38 03 00 01 */	addi r0, r3, 1
/* 808730D8  90 04 06 9C */	stw r0, 0x69c(r4)
/* 808730DC  80 85 00 00 */	lwz r4, 0(r5)
/* 808730E0  80 64 06 9C */	lwz r3, 0x69c(r4)
/* 808730E4  38 03 00 01 */	addi r0, r3, 1
/* 808730E8  90 04 06 9C */	stw r0, 0x69c(r4)
/* 808730EC  88 E3 00 00 */	lbz r7, 0(r3)
/* 808730F0  54 E6 E7 3E */	rlwinm r6, r7, 0x1c, 0x1c, 0x1f
/* 808730F4  80 65 00 00 */	lwz r3, 0(r5)
/* 808730F8  55 00 06 3E */	clrlwi r0, r8, 0x18
/* 808730FC  1C 80 00 06 */	mulli r4, r0, 6
/* 80873100  38 04 06 81 */	addi r0, r4, 0x681
/* 80873104  7C C3 01 AE */	stbx r6, r3, r0
/* 80873108  54 E7 07 3E */	clrlwi r7, r7, 0x1c
/* 8087310C  80 65 00 00 */	lwz r3, 0(r5)
/* 80873110  38 04 06 82 */	addi r0, r4, 0x682
/* 80873114  7C E3 01 AE */	stbx r7, r3, r0
/* 80873118  80 65 00 00 */	lwz r3, 0(r5)
/* 8087311C  88 83 06 A8 */	lbz r4, 0x6a8(r3)
/* 80873120  38 60 00 01 */	li r3, 1
/* 80873124  7C 60 30 30 */	slw r0, r3, r6
/* 80873128  7C 80 00 39 */	and. r0, r4, r0
/* 8087312C  40 82 00 0C */	bne lbl_80873138
/* 80873130  38 60 00 0F */	li r3, 0xf
/* 80873134  4E 80 00 20 */	blr 
lbl_80873138:
/* 80873138  38 07 00 01 */	addi r0, r7, 1
/* 8087313C  7C 60 00 30 */	slw r0, r3, r0
/* 80873140  7C 80 00 39 */	and. r0, r4, r0
/* 80873144  40 82 00 0C */	bne lbl_80873150
/* 80873148  38 60 00 0F */	li r3, 0xf
/* 8087314C  4E 80 00 20 */	blr 
lbl_80873150:
/* 80873150  39 08 00 01 */	addi r8, r8, 1
lbl_80873154:
/* 80873154  55 00 06 3E */	clrlwi r0, r8, 0x18
/* 80873158  28 00 00 03 */	cmplwi r0, 3
/* 8087315C  41 80 FF 70 */	blt lbl_808730CC
/* 80873160  3C 60 80 88 */	lis r3, __THPInfo@ha /* 0x80879BC4@ha */
/* 80873164  38 A3 9B C4 */	addi r5, r3, __THPInfo@l /* 0x80879BC4@l */
/* 80873168  80 85 00 00 */	lwz r4, 0(r5)
/* 8087316C  80 64 06 9C */	lwz r3, 0x69c(r4)
/* 80873170  38 03 00 03 */	addi r0, r3, 3
/* 80873174  90 04 06 9C */	stw r0, 0x69c(r4)
/* 80873178  80 85 00 00 */	lwz r4, 0(r5)
/* 8087317C  A0 64 06 92 */	lhz r3, 0x692(r4)
/* 80873180  38 03 00 0F */	addi r0, r3, 0xf
/* 80873184  7C 00 26 70 */	srawi r0, r0, 4
/* 80873188  7C 00 01 94 */	addze r0, r0
/* 8087318C  B0 04 06 96 */	sth r0, 0x696(r4)
/* 80873190  38 00 00 00 */	li r0, 0
/* 80873194  80 65 00 00 */	lwz r3, 0(r5)
/* 80873198  B0 03 06 84 */	sth r0, 0x684(r3)
/* 8087319C  80 65 00 00 */	lwz r3, 0(r5)
/* 808731A0  B0 03 06 8A */	sth r0, 0x68a(r3)
/* 808731A4  80 65 00 00 */	lwz r3, 0(r5)
/* 808731A8  B0 03 06 90 */	sth r0, 0x690(r3)
/* 808731AC  38 60 00 00 */	li r3, 0
/* 808731B0  4E 80 00 20 */	blr 
