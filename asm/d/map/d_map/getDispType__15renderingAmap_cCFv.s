lbl_800288C4:
/* 800288C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800288C8  7C 08 02 A6 */	mflr r0
/* 800288CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800288D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800288D4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 800288D8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 800288DC  85 83 4E 20 */	lwzu r12, 0x4e20(r3)
/* 800288E0  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 800288E4  7D 89 03 A6 */	mtctr r12
/* 800288E8  4E 80 04 21 */	bctrl 
/* 800288EC  A0 03 00 0A */	lhz r0, 0xa(r3)
/* 800288F0  54 00 07 7E */	clrlwi r0, r0, 0x1d
/* 800288F4  28 00 00 07 */	cmplwi r0, 7
/* 800288F8  41 81 00 50 */	bgt lbl_80028948
/* 800288FC  3C 60 80 3A */	lis r3, lit_3806@ha /* 0x803A6F08@ha */
/* 80028900  38 63 6F 08 */	addi r3, r3, lit_3806@l /* 0x803A6F08@l */
/* 80028904  54 00 10 3A */	slwi r0, r0, 2
/* 80028908  7C 03 00 2E */	lwzx r0, r3, r0
/* 8002890C  7C 09 03 A6 */	mtctr r0
/* 80028910  4E 80 04 20 */	bctr 
/* 80028914  3B E0 00 01 */	li r31, 1
/* 80028918  48 00 00 30 */	b lbl_80028948
/* 8002891C  3B E0 00 00 */	li r31, 0
/* 80028920  48 00 00 28 */	b lbl_80028948
/* 80028924  3B E0 00 01 */	li r31, 1
/* 80028928  48 00 00 20 */	b lbl_80028948
/* 8002892C  3B E0 00 02 */	li r31, 2
/* 80028930  48 00 00 18 */	b lbl_80028948
/* 80028934  3B E0 00 03 */	li r31, 3
/* 80028938  48 00 00 10 */	b lbl_80028948
/* 8002893C  3B E0 00 04 */	li r31, 4
/* 80028940  48 00 00 08 */	b lbl_80028948
/* 80028944  3B E0 00 05 */	li r31, 5
lbl_80028948:
/* 80028948  7F E3 FB 78 */	mr r3, r31
/* 8002894C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80028950  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80028954  7C 08 03 A6 */	mtlr r0
/* 80028958  38 21 00 10 */	addi r1, r1, 0x10
/* 8002895C  4E 80 00 20 */	blr 
