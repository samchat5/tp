lbl_8035B820:
/* 8035B820  80 C2 CB 80 */	lwz r6, __GXData(r2)
/* 8035B824  54 60 10 3A */	slwi r0, r3, 2
/* 8035B828  3C A0 80 3D */	lis r5, lit_503@ha /* 0x803D2394@ha */
/* 8035B82C  7C C6 02 14 */	add r6, r6, r0
/* 8035B830  38 E6 00 1C */	addi r7, r6, 0x1c
/* 8035B834  39 06 00 3C */	addi r8, r6, 0x3c
/* 8035B838  39 26 00 5C */	addi r9, r6, 0x5c
/* 8035B83C  38 A5 23 94 */	addi r5, r5, lit_503@l /* 0x803D2394@l */
/* 8035B840  48 00 02 24 */	b lbl_8035BA64
lbl_8035B844:
/* 8035B844  81 44 00 00 */	lwz r10, 0(r4)
/* 8035B848  88 C4 00 0C */	lbz r6, 0xc(r4)
/* 8035B84C  39 4A FF F7 */	addi r10, r10, -9
/* 8035B850  80 04 00 08 */	lwz r0, 8(r4)
/* 8035B854  28 0A 00 10 */	cmplwi r10, 0x10
/* 8035B858  81 64 00 04 */	lwz r11, 4(r4)
/* 8035B85C  41 81 02 04 */	bgt lbl_8035BA60
/* 8035B860  55 4A 10 3A */	slwi r10, r10, 2
/* 8035B864  7D 45 50 2E */	lwzx r10, r5, r10
/* 8035B868  7D 49 03 A6 */	mtctr r10
/* 8035B86C  4E 80 04 20 */	bctr 
/* 8035B870  81 47 00 00 */	lwz r10, 0(r7)
/* 8035B874  51 6A 07 FE */	rlwimi r10, r11, 0, 0x1f, 0x1f
/* 8035B878  91 47 00 00 */	stw r10, 0(r7)
/* 8035B87C  81 47 00 00 */	lwz r10, 0(r7)
/* 8035B880  50 0A 0F 3C */	rlwimi r10, r0, 1, 0x1c, 0x1e
/* 8035B884  91 47 00 00 */	stw r10, 0(r7)
/* 8035B888  80 07 00 00 */	lwz r0, 0(r7)
/* 8035B88C  50 C0 25 F6 */	rlwimi r0, r6, 4, 0x17, 0x1b
/* 8035B890  90 07 00 00 */	stw r0, 0(r7)
/* 8035B894  48 00 01 CC */	b lbl_8035BA60
/* 8035B898  80 C7 00 00 */	lwz r6, 0(r7)
/* 8035B89C  50 06 54 EA */	rlwimi r6, r0, 0xa, 0x13, 0x15
/* 8035B8A0  2C 0B 00 02 */	cmpwi r11, 2
/* 8035B8A4  90 C7 00 00 */	stw r6, 0(r7)
/* 8035B8A8  40 82 00 24 */	bne lbl_8035B8CC
/* 8035B8AC  80 07 00 00 */	lwz r0, 0(r7)
/* 8035B8B0  38 C0 00 01 */	li r6, 1
/* 8035B8B4  50 C0 4D AC */	rlwimi r0, r6, 9, 0x16, 0x16
/* 8035B8B8  90 07 00 00 */	stw r0, 0(r7)
/* 8035B8BC  80 07 00 00 */	lwz r0, 0(r7)
/* 8035B8C0  50 C0 F8 00 */	rlwimi r0, r6, 0x1f, 0, 0
/* 8035B8C4  90 07 00 00 */	stw r0, 0(r7)
/* 8035B8C8  48 00 01 98 */	b lbl_8035BA60
lbl_8035B8CC:
/* 8035B8CC  80 C7 00 00 */	lwz r6, 0(r7)
/* 8035B8D0  51 66 4D AC */	rlwimi r6, r11, 9, 0x16, 0x16
/* 8035B8D4  38 00 00 00 */	li r0, 0
/* 8035B8D8  90 C7 00 00 */	stw r6, 0(r7)
/* 8035B8DC  80 C7 00 00 */	lwz r6, 0(r7)
/* 8035B8E0  50 06 F8 00 */	rlwimi r6, r0, 0x1f, 0, 0
/* 8035B8E4  90 C7 00 00 */	stw r6, 0(r7)
/* 8035B8E8  48 00 01 78 */	b lbl_8035BA60
/* 8035B8EC  80 C7 00 00 */	lwz r6, 0(r7)
/* 8035B8F0  51 66 6C A4 */	rlwimi r6, r11, 0xd, 0x12, 0x12
/* 8035B8F4  90 C7 00 00 */	stw r6, 0(r7)
/* 8035B8F8  80 C7 00 00 */	lwz r6, 0(r7)
/* 8035B8FC  50 06 73 E2 */	rlwimi r6, r0, 0xe, 0xf, 0x11
/* 8035B900  90 C7 00 00 */	stw r6, 0(r7)
/* 8035B904  48 00 01 5C */	b lbl_8035BA60
/* 8035B908  80 C7 00 00 */	lwz r6, 0(r7)
/* 8035B90C  51 66 8B 9C */	rlwimi r6, r11, 0x11, 0xe, 0xe
/* 8035B910  90 C7 00 00 */	stw r6, 0(r7)
/* 8035B914  80 C7 00 00 */	lwz r6, 0(r7)
/* 8035B918  50 06 92 DA */	rlwimi r6, r0, 0x12, 0xb, 0xd
/* 8035B91C  90 C7 00 00 */	stw r6, 0(r7)
/* 8035B920  48 00 01 40 */	b lbl_8035BA60
/* 8035B924  81 47 00 00 */	lwz r10, 0(r7)
/* 8035B928  51 6A AA 94 */	rlwimi r10, r11, 0x15, 0xa, 0xa
/* 8035B92C  91 47 00 00 */	stw r10, 0(r7)
/* 8035B930  81 47 00 00 */	lwz r10, 0(r7)
/* 8035B934  50 0A B1 D2 */	rlwimi r10, r0, 0x16, 7, 9
/* 8035B938  91 47 00 00 */	stw r10, 0(r7)
/* 8035B93C  80 07 00 00 */	lwz r0, 0(r7)
/* 8035B940  50 C0 C8 8C */	rlwimi r0, r6, 0x19, 2, 6
/* 8035B944  90 07 00 00 */	stw r0, 0(r7)
/* 8035B948  48 00 01 18 */	b lbl_8035BA60
/* 8035B94C  81 48 00 00 */	lwz r10, 0(r8)
/* 8035B950  51 6A 07 FE */	rlwimi r10, r11, 0, 0x1f, 0x1f
/* 8035B954  91 48 00 00 */	stw r10, 0(r8)
/* 8035B958  81 48 00 00 */	lwz r10, 0(r8)
/* 8035B95C  50 0A 0F 3C */	rlwimi r10, r0, 1, 0x1c, 0x1e
/* 8035B960  91 48 00 00 */	stw r10, 0(r8)
/* 8035B964  80 08 00 00 */	lwz r0, 0(r8)
/* 8035B968  50 C0 25 F6 */	rlwimi r0, r6, 4, 0x17, 0x1b
/* 8035B96C  90 08 00 00 */	stw r0, 0(r8)
/* 8035B970  48 00 00 F0 */	b lbl_8035BA60
/* 8035B974  81 48 00 00 */	lwz r10, 0(r8)
/* 8035B978  51 6A 4D AC */	rlwimi r10, r11, 9, 0x16, 0x16
/* 8035B97C  91 48 00 00 */	stw r10, 0(r8)
/* 8035B980  81 48 00 00 */	lwz r10, 0(r8)
/* 8035B984  50 0A 54 EA */	rlwimi r10, r0, 0xa, 0x13, 0x15
/* 8035B988  91 48 00 00 */	stw r10, 0(r8)
/* 8035B98C  80 08 00 00 */	lwz r0, 0(r8)
/* 8035B990  50 C0 6B A4 */	rlwimi r0, r6, 0xd, 0xe, 0x12
/* 8035B994  90 08 00 00 */	stw r0, 0(r8)
/* 8035B998  48 00 00 C8 */	b lbl_8035BA60
/* 8035B99C  81 48 00 00 */	lwz r10, 0(r8)
/* 8035B9A0  51 6A 93 5A */	rlwimi r10, r11, 0x12, 0xd, 0xd
/* 8035B9A4  91 48 00 00 */	stw r10, 0(r8)
/* 8035B9A8  81 48 00 00 */	lwz r10, 0(r8)
/* 8035B9AC  50 0A 9A 98 */	rlwimi r10, r0, 0x13, 0xa, 0xc
/* 8035B9B0  91 48 00 00 */	stw r10, 0(r8)
/* 8035B9B4  80 08 00 00 */	lwz r0, 0(r8)
/* 8035B9B8  50 C0 B1 52 */	rlwimi r0, r6, 0x16, 5, 9
/* 8035B9BC  90 08 00 00 */	stw r0, 0(r8)
/* 8035B9C0  48 00 00 A0 */	b lbl_8035BA60
/* 8035B9C4  81 48 00 00 */	lwz r10, 0(r8)
/* 8035B9C8  51 6A D9 08 */	rlwimi r10, r11, 0x1b, 4, 4
/* 8035B9CC  91 48 00 00 */	stw r10, 0(r8)
/* 8035B9D0  81 48 00 00 */	lwz r10, 0(r8)
/* 8035B9D4  50 0A E0 46 */	rlwimi r10, r0, 0x1c, 1, 3
/* 8035B9D8  91 48 00 00 */	stw r10, 0(r8)
/* 8035B9DC  80 09 00 00 */	lwz r0, 0(r9)
/* 8035B9E0  50 C0 06 FE */	rlwimi r0, r6, 0, 0x1b, 0x1f
/* 8035B9E4  90 09 00 00 */	stw r0, 0(r9)
/* 8035B9E8  48 00 00 78 */	b lbl_8035BA60
/* 8035B9EC  81 49 00 00 */	lwz r10, 0(r9)
/* 8035B9F0  51 6A 2E B4 */	rlwimi r10, r11, 5, 0x1a, 0x1a
/* 8035B9F4  91 49 00 00 */	stw r10, 0(r9)
/* 8035B9F8  81 49 00 00 */	lwz r10, 0(r9)
/* 8035B9FC  50 0A 35 F2 */	rlwimi r10, r0, 6, 0x17, 0x19
/* 8035BA00  91 49 00 00 */	stw r10, 0(r9)
/* 8035BA04  80 09 00 00 */	lwz r0, 0(r9)
/* 8035BA08  50 C0 4C AC */	rlwimi r0, r6, 9, 0x12, 0x16
/* 8035BA0C  90 09 00 00 */	stw r0, 0(r9)
/* 8035BA10  48 00 00 50 */	b lbl_8035BA60
/* 8035BA14  81 49 00 00 */	lwz r10, 0(r9)
/* 8035BA18  51 6A 74 62 */	rlwimi r10, r11, 0xe, 0x11, 0x11
/* 8035BA1C  91 49 00 00 */	stw r10, 0(r9)
/* 8035BA20  81 49 00 00 */	lwz r10, 0(r9)
/* 8035BA24  50 0A 7B A0 */	rlwimi r10, r0, 0xf, 0xe, 0x10
/* 8035BA28  91 49 00 00 */	stw r10, 0(r9)
/* 8035BA2C  80 09 00 00 */	lwz r0, 0(r9)
/* 8035BA30  50 C0 92 5A */	rlwimi r0, r6, 0x12, 9, 0xd
/* 8035BA34  90 09 00 00 */	stw r0, 0(r9)
/* 8035BA38  48 00 00 28 */	b lbl_8035BA60
/* 8035BA3C  81 49 00 00 */	lwz r10, 0(r9)
/* 8035BA40  51 6A BA 10 */	rlwimi r10, r11, 0x17, 8, 8
/* 8035BA44  91 49 00 00 */	stw r10, 0(r9)
/* 8035BA48  81 49 00 00 */	lwz r10, 0(r9)
/* 8035BA4C  50 0A C1 4E */	rlwimi r10, r0, 0x18, 5, 7
/* 8035BA50  91 49 00 00 */	stw r10, 0(r9)
/* 8035BA54  80 09 00 00 */	lwz r0, 0(r9)
/* 8035BA58  50 C0 D8 08 */	rlwimi r0, r6, 0x1b, 0, 4
/* 8035BA5C  90 09 00 00 */	stw r0, 0(r9)
lbl_8035BA60:
/* 8035BA60  38 84 00 10 */	addi r4, r4, 0x10
lbl_8035BA64:
/* 8035BA64  80 04 00 00 */	lwz r0, 0(r4)
/* 8035BA68  2C 00 00 FF */	cmpwi r0, 0xff
/* 8035BA6C  40 82 FD D8 */	bne lbl_8035B844
/* 8035BA70  80 A2 CB 80 */	lwz r5, __GXData(r2)
/* 8035BA74  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 8035BA78  38 60 00 01 */	li r3, 1
/* 8035BA7C  80 85 05 AC */	lwz r4, 0x5ac(r5)
/* 8035BA80  7C 60 00 30 */	slw r0, r3, r0
/* 8035BA84  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8035BA88  60 83 00 10 */	ori r3, r4, 0x10
/* 8035BA8C  90 65 05 AC */	stw r3, 0x5ac(r5)
/* 8035BA90  88 65 05 AB */	lbz r3, 0x5ab(r5)
/* 8035BA94  7C 60 03 78 */	or r0, r3, r0
/* 8035BA98  98 05 05 AB */	stb r0, 0x5ab(r5)
/* 8035BA9C  4E 80 00 20 */	blr 
