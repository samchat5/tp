lbl_80983168:
/* 80983168  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8098316C  7C 08 02 A6 */	mflr r0
/* 80983170  90 01 00 34 */	stw r0, 0x34(r1)
/* 80983174  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 80983178  F3 E1 00 28 */	psq_st f31, 40(r1), 0, 0 /* qr0 */
/* 8098317C  39 61 00 20 */	addi r11, r1, 0x20
/* 80983180  4B 9D F0 5D */	bl _savegpr_29
/* 80983184  7C 7E 1B 78 */	mr r30, r3
/* 80983188  FF E0 08 90 */	fmr f31, f1
/* 8098318C  3B E0 00 02 */	li r31, 2
/* 80983190  7C 9D 23 78 */	mr r29, r4
/* 80983194  80 A3 0E 14 */	lwz r5, 0xe14(r3)
/* 80983198  98 83 0E 4C */	stb r4, 0xe4c(r3)
/* 8098319C  28 04 00 35 */	cmplwi r4, 0x35
/* 809831A0  41 81 03 C4 */	bgt lbl_80983564
/* 809831A4  3C 60 80 99 */	lis r3, lit_5551@ha /* 0x8098B814@ha */
/* 809831A8  38 63 B8 14 */	addi r3, r3, lit_5551@l /* 0x8098B814@l */
/* 809831AC  54 80 10 3A */	slwi r0, r4, 2
/* 809831B0  7C 03 00 2E */	lwzx r0, r3, r0
/* 809831B4  7C 09 03 A6 */	mtctr r0
/* 809831B8  4E 80 04 20 */	bctr 
lbl_809831BC:
/* 809831BC  2C 05 00 06 */	cmpwi r5, 6
/* 809831C0  40 80 00 1C */	bge lbl_809831DC
/* 809831C4  2C 05 00 01 */	cmpwi r5, 1
/* 809831C8  41 82 00 2C */	beq lbl_809831F4
/* 809831CC  41 80 02 6C */	blt lbl_80983438
/* 809831D0  2C 05 00 04 */	cmpwi r5, 4
/* 809831D4  40 80 00 30 */	bge lbl_80983204
/* 809831D8  48 00 00 24 */	b lbl_809831FC
lbl_809831DC:
/* 809831DC  2C 05 00 08 */	cmpwi r5, 8
/* 809831E0  41 82 00 14 */	beq lbl_809831F4
/* 809831E4  41 80 00 28 */	blt lbl_8098320C
/* 809831E8  2C 05 00 0D */	cmpwi r5, 0xd
/* 809831EC  40 80 02 4C */	bge lbl_80983438
/* 809831F0  48 00 00 0C */	b lbl_809831FC
lbl_809831F4:
/* 809831F4  3B A0 00 1E */	li r29, 0x1e
/* 809831F8  48 00 02 40 */	b lbl_80983438
lbl_809831FC:
/* 809831FC  3B A0 00 1A */	li r29, 0x1a
/* 80983200  48 00 02 38 */	b lbl_80983438
lbl_80983204:
/* 80983204  3B A0 00 16 */	li r29, 0x16
/* 80983208  48 00 02 30 */	b lbl_80983438
lbl_8098320C:
/* 8098320C  3B A0 00 22 */	li r29, 0x22
/* 80983210  48 00 02 28 */	b lbl_80983438
lbl_80983214:
/* 80983214  2C 05 00 06 */	cmpwi r5, 6
/* 80983218  40 80 00 1C */	bge lbl_80983234
/* 8098321C  2C 05 00 01 */	cmpwi r5, 1
/* 80983220  41 82 00 2C */	beq lbl_8098324C
/* 80983224  41 80 02 14 */	blt lbl_80983438
/* 80983228  2C 05 00 04 */	cmpwi r5, 4
/* 8098322C  40 80 00 30 */	bge lbl_8098325C
/* 80983230  48 00 00 24 */	b lbl_80983254
lbl_80983234:
/* 80983234  2C 05 00 08 */	cmpwi r5, 8
/* 80983238  41 82 00 14 */	beq lbl_8098324C
/* 8098323C  41 80 00 28 */	blt lbl_80983264
/* 80983240  2C 05 00 0D */	cmpwi r5, 0xd
/* 80983244  40 80 01 F4 */	bge lbl_80983438
/* 80983248  48 00 00 0C */	b lbl_80983254
lbl_8098324C:
/* 8098324C  3B A0 00 1E */	li r29, 0x1e
/* 80983250  48 00 01 E8 */	b lbl_80983438
lbl_80983254:
/* 80983254  3B A0 00 1A */	li r29, 0x1a
/* 80983258  48 00 01 E0 */	b lbl_80983438
lbl_8098325C:
/* 8098325C  3B A0 00 16 */	li r29, 0x16
/* 80983260  48 00 01 D8 */	b lbl_80983438
lbl_80983264:
/* 80983264  3B A0 00 22 */	li r29, 0x22
/* 80983268  48 00 01 D0 */	b lbl_80983438
lbl_8098326C:
/* 8098326C  2C 05 00 06 */	cmpwi r5, 6
/* 80983270  40 80 00 1C */	bge lbl_8098328C
/* 80983274  2C 05 00 01 */	cmpwi r5, 1
/* 80983278  41 82 00 2C */	beq lbl_809832A4
/* 8098327C  41 80 01 BC */	blt lbl_80983438
/* 80983280  2C 05 00 04 */	cmpwi r5, 4
/* 80983284  40 80 00 30 */	bge lbl_809832B4
/* 80983288  48 00 00 24 */	b lbl_809832AC
lbl_8098328C:
/* 8098328C  2C 05 00 08 */	cmpwi r5, 8
/* 80983290  41 82 00 14 */	beq lbl_809832A4
/* 80983294  41 80 00 28 */	blt lbl_809832BC
/* 80983298  2C 05 00 0D */	cmpwi r5, 0xd
/* 8098329C  40 80 01 9C */	bge lbl_80983438
/* 809832A0  48 00 00 0C */	b lbl_809832AC
lbl_809832A4:
/* 809832A4  3B A0 00 21 */	li r29, 0x21
/* 809832A8  48 00 01 90 */	b lbl_80983438
lbl_809832AC:
/* 809832AC  3B A0 00 1D */	li r29, 0x1d
/* 809832B0  48 00 01 88 */	b lbl_80983438
lbl_809832B4:
/* 809832B4  3B A0 00 19 */	li r29, 0x19
/* 809832B8  48 00 01 80 */	b lbl_80983438
lbl_809832BC:
/* 809832BC  3B A0 00 22 */	li r29, 0x22
/* 809832C0  48 00 01 78 */	b lbl_80983438
lbl_809832C4:
/* 809832C4  2C 05 00 06 */	cmpwi r5, 6
/* 809832C8  40 80 00 1C */	bge lbl_809832E4
/* 809832CC  2C 05 00 01 */	cmpwi r5, 1
/* 809832D0  41 82 00 2C */	beq lbl_809832FC
/* 809832D4  41 80 01 64 */	blt lbl_80983438
/* 809832D8  2C 05 00 04 */	cmpwi r5, 4
/* 809832DC  40 80 00 30 */	bge lbl_8098330C
/* 809832E0  48 00 00 24 */	b lbl_80983304
lbl_809832E4:
/* 809832E4  2C 05 00 08 */	cmpwi r5, 8
/* 809832E8  41 82 00 14 */	beq lbl_809832FC
/* 809832EC  41 80 00 28 */	blt lbl_80983314
/* 809832F0  2C 05 00 0D */	cmpwi r5, 0xd
/* 809832F4  40 80 01 44 */	bge lbl_80983438
/* 809832F8  48 00 00 0C */	b lbl_80983304
lbl_809832FC:
/* 809832FC  3B A0 00 21 */	li r29, 0x21
/* 80983300  48 00 01 38 */	b lbl_80983438
lbl_80983304:
/* 80983304  3B A0 00 1D */	li r29, 0x1d
/* 80983308  48 00 01 30 */	b lbl_80983438
lbl_8098330C:
/* 8098330C  3B A0 00 19 */	li r29, 0x19
/* 80983310  48 00 01 28 */	b lbl_80983438
lbl_80983314:
/* 80983314  3B A0 00 22 */	li r29, 0x22
/* 80983318  48 00 01 20 */	b lbl_80983438
lbl_8098331C:
/* 8098331C  2C 05 00 06 */	cmpwi r5, 6
/* 80983320  40 80 00 1C */	bge lbl_8098333C
/* 80983324  2C 05 00 01 */	cmpwi r5, 1
/* 80983328  41 82 00 2C */	beq lbl_80983354
/* 8098332C  41 80 01 0C */	blt lbl_80983438
/* 80983330  2C 05 00 04 */	cmpwi r5, 4
/* 80983334  40 80 00 30 */	bge lbl_80983364
/* 80983338  48 00 00 24 */	b lbl_8098335C
lbl_8098333C:
/* 8098333C  2C 05 00 08 */	cmpwi r5, 8
/* 80983340  41 82 00 14 */	beq lbl_80983354
/* 80983344  41 80 00 28 */	blt lbl_8098336C
/* 80983348  2C 05 00 0D */	cmpwi r5, 0xd
/* 8098334C  40 80 00 EC */	bge lbl_80983438
/* 80983350  48 00 00 0C */	b lbl_8098335C
lbl_80983354:
/* 80983354  3B A0 00 1F */	li r29, 0x1f
/* 80983358  48 00 00 E0 */	b lbl_80983438
lbl_8098335C:
/* 8098335C  3B A0 00 1B */	li r29, 0x1b
/* 80983360  48 00 00 D8 */	b lbl_80983438
lbl_80983364:
/* 80983364  3B A0 00 17 */	li r29, 0x17
/* 80983368  48 00 00 D0 */	b lbl_80983438
lbl_8098336C:
/* 8098336C  3B A0 00 22 */	li r29, 0x22
/* 80983370  48 00 00 C8 */	b lbl_80983438
lbl_80983374:
/* 80983374  2C 05 00 06 */	cmpwi r5, 6
/* 80983378  40 80 00 1C */	bge lbl_80983394
/* 8098337C  2C 05 00 01 */	cmpwi r5, 1
/* 80983380  41 82 00 2C */	beq lbl_809833AC
/* 80983384  41 80 00 B4 */	blt lbl_80983438
/* 80983388  2C 05 00 04 */	cmpwi r5, 4
/* 8098338C  40 80 00 30 */	bge lbl_809833BC
/* 80983390  48 00 00 24 */	b lbl_809833B4
lbl_80983394:
/* 80983394  2C 05 00 08 */	cmpwi r5, 8
/* 80983398  41 82 00 14 */	beq lbl_809833AC
/* 8098339C  41 80 00 28 */	blt lbl_809833C4
/* 809833A0  2C 05 00 0D */	cmpwi r5, 0xd
/* 809833A4  40 80 00 94 */	bge lbl_80983438
/* 809833A8  48 00 00 0C */	b lbl_809833B4
lbl_809833AC:
/* 809833AC  3B A0 00 20 */	li r29, 0x20
/* 809833B0  48 00 00 88 */	b lbl_80983438
lbl_809833B4:
/* 809833B4  3B A0 00 1C */	li r29, 0x1c
/* 809833B8  48 00 00 80 */	b lbl_80983438
lbl_809833BC:
/* 809833BC  3B A0 00 18 */	li r29, 0x18
/* 809833C0  48 00 00 78 */	b lbl_80983438
lbl_809833C4:
/* 809833C4  3B A0 00 22 */	li r29, 0x22
/* 809833C8  48 00 00 70 */	b lbl_80983438
lbl_809833CC:
/* 809833CC  28 05 00 0C */	cmplwi r5, 0xc
/* 809833D0  41 81 00 68 */	bgt lbl_80983438
/* 809833D4  3C 60 80 99 */	lis r3, lit_5552@ha /* 0x8098B7E0@ha */
/* 809833D8  38 63 B7 E0 */	addi r3, r3, lit_5552@l /* 0x8098B7E0@l */
/* 809833DC  54 A0 10 3A */	slwi r0, r5, 2
/* 809833E0  7C 03 00 2E */	lwzx r0, r3, r0
/* 809833E4  7C 09 03 A6 */	mtctr r0
/* 809833E8  4E 80 04 20 */	bctr 
lbl_809833EC:
/* 809833EC  3B A0 00 25 */	li r29, 0x25
/* 809833F0  48 00 00 48 */	b lbl_80983438
lbl_809833F4:
/* 809833F4  3B A0 00 2D */	li r29, 0x2d
/* 809833F8  48 00 00 40 */	b lbl_80983438
lbl_809833FC:
/* 809833FC  3B A0 00 24 */	li r29, 0x24
/* 80983400  48 00 00 38 */	b lbl_80983438
lbl_80983404:
/* 80983404  3B A0 00 23 */	li r29, 0x23
/* 80983408  48 00 00 30 */	b lbl_80983438
lbl_8098340C:
/* 8098340C  3B A0 00 22 */	li r29, 0x22
/* 80983410  48 00 00 28 */	b lbl_80983438
lbl_80983414:
/* 80983414  2C 05 00 08 */	cmpwi r5, 8
/* 80983418  40 80 00 20 */	bge lbl_80983438
/* 8098341C  2C 05 00 06 */	cmpwi r5, 6
/* 80983420  40 80 00 0C */	bge lbl_8098342C
/* 80983424  48 00 00 14 */	b lbl_80983438
/* 80983428  48 00 00 10 */	b lbl_80983438
lbl_8098342C:
/* 8098342C  3B A0 00 22 */	li r29, 0x22
/* 80983430  48 00 00 08 */	b lbl_80983438
lbl_80983434:
/* 80983434  48 00 01 30 */	b lbl_80983564
lbl_80983438:
/* 80983438  2C 1D 00 29 */	cmpwi r29, 0x29
/* 8098343C  41 82 00 54 */	beq lbl_80983490
/* 80983440  40 80 00 24 */	bge lbl_80983464
/* 80983444  2C 1D 00 14 */	cmpwi r29, 0x14
/* 80983448  40 80 00 10 */	bge lbl_80983458
/* 8098344C  2C 1D 00 08 */	cmpwi r29, 8
/* 80983450  41 82 00 20 */	beq lbl_80983470
/* 80983454  48 00 00 58 */	b lbl_809834AC
lbl_80983458:
/* 80983458  2C 1D 00 16 */	cmpwi r29, 0x16
/* 8098345C  40 80 00 50 */	bge lbl_809834AC
/* 80983460  48 00 00 40 */	b lbl_809834A0
lbl_80983464:
/* 80983464  2C 1D 00 31 */	cmpwi r29, 0x31
/* 80983468  41 82 00 18 */	beq lbl_80983480
/* 8098346C  48 00 00 40 */	b lbl_809834AC
lbl_80983470:
/* 80983470  38 7E 0B 48 */	addi r3, r30, 0xb48
/* 80983474  38 80 00 03 */	li r4, 3
/* 80983478  4B 93 D9 A1 */	bl playVoice__17Z2CreatureCitizenFi
/* 8098347C  48 00 00 30 */	b lbl_809834AC
lbl_80983480:
/* 80983480  38 7E 0B 48 */	addi r3, r30, 0xb48
/* 80983484  38 80 00 04 */	li r4, 4
/* 80983488  4B 93 D9 91 */	bl playVoice__17Z2CreatureCitizenFi
/* 8098348C  48 00 00 20 */	b lbl_809834AC
lbl_80983490:
/* 80983490  38 7E 0B 48 */	addi r3, r30, 0xb48
/* 80983494  38 80 00 01 */	li r4, 1
/* 80983498  4B 93 D9 81 */	bl playVoice__17Z2CreatureCitizenFi
/* 8098349C  48 00 00 10 */	b lbl_809834AC
lbl_809834A0:
/* 809834A0  38 7E 0B 48 */	addi r3, r30, 0xb48
/* 809834A4  38 80 00 05 */	li r4, 5
/* 809834A8  4B 93 D9 71 */	bl playVoice__17Z2CreatureCitizenFi
lbl_809834AC:
/* 809834AC  2C 1D 00 29 */	cmpwi r29, 0x29
/* 809834B0  41 82 00 08 */	beq lbl_809834B8
/* 809834B4  48 00 00 08 */	b lbl_809834BC
lbl_809834B8:
/* 809834B8  3B E0 00 00 */	li r31, 0
lbl_809834BC:
/* 809834BC  7F C3 F3 78 */	mr r3, r30
/* 809834C0  4B FF DC 49 */	bl isM___11daNpcChat_cFv
/* 809834C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 809834C8  41 82 00 20 */	beq lbl_809834E8
/* 809834CC  57 A0 18 38 */	slwi r0, r29, 3
/* 809834D0  3C 60 80 98 */	lis r3, l_bckTbl_M@ha /* 0x80987DB4@ha */
/* 809834D4  38 63 7D B4 */	addi r3, r3, l_bckTbl_M@l /* 0x80987DB4@l */
/* 809834D8  7C 83 00 2E */	lwzx r4, r3, r0
/* 809834DC  7C 63 02 14 */	add r3, r3, r0
/* 809834E0  80 A3 00 04 */	lwz r5, 4(r3)
/* 809834E4  48 00 00 1C */	b lbl_80983500
lbl_809834E8:
/* 809834E8  57 A0 18 38 */	slwi r0, r29, 3
/* 809834EC  3C 60 80 98 */	lis r3, l_bckTbl_W@ha /* 0x80987F64@ha */
/* 809834F0  38 63 7F 64 */	addi r3, r3, l_bckTbl_W@l /* 0x80987F64@l */
/* 809834F4  7C 83 00 2E */	lwzx r4, r3, r0
/* 809834F8  7C 63 02 14 */	add r3, r3, r0
/* 809834FC  80 A3 00 04 */	lwz r5, 4(r3)
lbl_80983500:
/* 80983500  2C 05 00 00 */	cmpwi r5, 0
/* 80983504  41 80 00 60 */	blt lbl_80983564
/* 80983508  7F C3 F3 78 */	mr r3, r30
/* 8098350C  4B 7C F6 21 */	bl getTrnsfrmKeyAnmP__8daNpcF_cFPci
/* 80983510  7C 64 1B 79 */	or. r4, r3, r3
/* 80983514  80 7E 09 9C */	lwz r3, 0x99c(r30)
/* 80983518  38 00 FF F6 */	li r0, -10
/* 8098351C  7C 60 00 38 */	and r0, r3, r0
/* 80983520  90 1E 09 9C */	stw r0, 0x99c(r30)
/* 80983524  41 82 00 40 */	beq lbl_80983564
/* 80983528  7F C3 F3 78 */	mr r3, r30
/* 8098352C  3C A0 80 98 */	lis r5, lit_4247@ha /* 0x80986F10@ha */
/* 80983530  C0 25 6F 10 */	lfs f1, lit_4247@l(r5)  /* 0x80986F10@l */
/* 80983534  FC 40 F8 90 */	fmr f2, f31
/* 80983538  7F E5 FB 78 */	mr r5, r31
/* 8098353C  38 C0 00 00 */	li r6, 0
/* 80983540  38 E0 FF FF */	li r7, -1
/* 80983544  4B 7C F6 D9 */	bl setMcaMorfAnm__8daNpcF_cFP18J3DAnmTransformKeyffiii
/* 80983548  2C 03 00 00 */	cmpwi r3, 0
/* 8098354C  41 82 00 18 */	beq lbl_80983564
/* 80983550  80 1E 09 9C */	lwz r0, 0x99c(r30)
/* 80983554  60 00 00 09 */	ori r0, r0, 9
/* 80983558  90 1E 09 9C */	stw r0, 0x99c(r30)
/* 8098355C  38 00 00 00 */	li r0, 0
/* 80983560  B0 1E 09 E2 */	sth r0, 0x9e2(r30)
lbl_80983564:
/* 80983564  E3 E1 00 28 */	psq_l f31, 40(r1), 0, 0 /* qr0 */
/* 80983568  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8098356C  39 61 00 20 */	addi r11, r1, 0x20
/* 80983570  4B 9D EC B9 */	bl _restgpr_29
/* 80983574  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80983578  7C 08 03 A6 */	mtlr r0
/* 8098357C  38 21 00 30 */	addi r1, r1, 0x30
/* 80983580  4E 80 00 20 */	blr 
