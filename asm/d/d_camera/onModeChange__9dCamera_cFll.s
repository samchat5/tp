lbl_80163C38:
/* 80163C38  38 00 00 00 */	li r0, 0
/* 80163C3C  90 03 01 60 */	stw r0, 0x160(r3)
/* 80163C40  90 03 01 64 */	stw r0, 0x164(r3)
/* 80163C44  38 00 00 01 */	li r0, 1
/* 80163C48  98 03 01 68 */	stb r0, 0x168(r3)
/* 80163C4C  C0 02 9C A0 */	lfs f0, lit_5656(r2)
/* 80163C50  D0 03 01 B4 */	stfs f0, 0x1b4(r3)
/* 80163C54  80 C3 06 0C */	lwz r6, 0x60c(r3)
/* 80163C58  38 00 DC F9 */	li r0, -8967
/* 80163C5C  7C C0 00 38 */	and r0, r6, r0
/* 80163C60  90 03 06 0C */	stw r0, 0x60c(r3)
/* 80163C64  2C 04 00 04 */	cmpwi r4, 4
/* 80163C68  41 82 00 40 */	beq lbl_80163CA8
/* 80163C6C  40 80 00 10 */	bge lbl_80163C7C
/* 80163C70  2C 04 00 03 */	cmpwi r4, 3
/* 80163C74  40 80 00 1C */	bge lbl_80163C90
/* 80163C78  48 00 00 44 */	b lbl_80163CBC
lbl_80163C7C:
/* 80163C7C  2C 04 00 09 */	cmpwi r4, 9
/* 80163C80  40 80 00 3C */	bge lbl_80163CBC
/* 80163C84  2C 04 00 07 */	cmpwi r4, 7
/* 80163C88  40 80 00 20 */	bge lbl_80163CA8
/* 80163C8C  48 00 00 30 */	b lbl_80163CBC
lbl_80163C90:
/* 80163C90  3C C0 80 40 */	lis r6, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80163C94  38 C6 61 C0 */	addi r6, r6, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80163C98  80 06 5D 7C */	lwz r0, 0x5d7c(r6)
/* 80163C9C  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 80163CA0  90 06 5D 7C */	stw r0, 0x5d7c(r6)
/* 80163CA4  48 00 00 18 */	b lbl_80163CBC
lbl_80163CA8:
/* 80163CA8  2C 05 00 00 */	cmpwi r5, 0
/* 80163CAC  40 82 00 10 */	bne lbl_80163CBC
/* 80163CB0  80 03 06 0C */	lwz r0, 0x60c(r3)
/* 80163CB4  64 00 00 04 */	oris r0, r0, 4
/* 80163CB8  90 03 06 0C */	stw r0, 0x60c(r3)
lbl_80163CBC:
/* 80163CBC  28 05 00 0A */	cmplwi r5, 0xa
/* 80163CC0  41 81 00 88 */	bgt lbl_80163D48
/* 80163CC4  3C C0 80 3C */	lis r6, lit_7128@ha /* 0x803BA34C@ha */
/* 80163CC8  38 C6 A3 4C */	addi r6, r6, lit_7128@l /* 0x803BA34C@l */
/* 80163CCC  54 A0 10 3A */	slwi r0, r5, 2
/* 80163CD0  7C 06 00 2E */	lwzx r0, r6, r0
/* 80163CD4  7C 09 03 A6 */	mtctr r0
/* 80163CD8  4E 80 04 20 */	bctr 
/* 80163CDC  38 00 00 00 */	li r0, 0
/* 80163CE0  90 03 09 40 */	stw r0, 0x940(r3)
/* 80163CE4  48 00 00 64 */	b lbl_80163D48
/* 80163CE8  80 03 06 0C */	lwz r0, 0x60c(r3)
/* 80163CEC  64 00 00 10 */	oris r0, r0, 0x10
/* 80163CF0  90 03 06 0C */	stw r0, 0x60c(r3)
/* 80163CF4  80 C3 06 84 */	lwz r6, 0x684(r3)
/* 80163CF8  80 03 06 8C */	lwz r0, 0x68c(r3)
/* 80163CFC  1C 00 00 44 */	mulli r0, r0, 0x44
/* 80163D00  7C C6 02 14 */	add r6, r6, r0
/* 80163D04  80 03 01 90 */	lwz r0, 0x190(r3)
/* 80163D08  1C 00 00 16 */	mulli r0, r0, 0x16
/* 80163D0C  7C C6 02 14 */	add r6, r6, r0
/* 80163D10  54 80 08 3C */	slwi r0, r4, 1
/* 80163D14  38 C6 00 18 */	addi r6, r6, 0x18
/* 80163D18  7C 86 02 AE */	lhax r4, r6, r0
/* 80163D1C  54 A0 08 3C */	slwi r0, r5, 1
/* 80163D20  7C 06 02 AE */	lhax r0, r6, r0
/* 80163D24  7C 04 00 00 */	cmpw r4, r0
/* 80163D28  40 82 00 0C */	bne lbl_80163D34
/* 80163D2C  38 00 00 00 */	li r0, 0
/* 80163D30  98 03 01 68 */	stb r0, 0x168(r3)
lbl_80163D34:
/* 80163D34  A0 03 09 78 */	lhz r0, 0x978(r3)
/* 80163D38  54 00 04 63 */	rlwinm. r0, r0, 0, 0x11, 0x11
/* 80163D3C  41 82 00 0C */	beq lbl_80163D48
/* 80163D40  38 00 00 00 */	li r0, 0
/* 80163D44  90 03 09 40 */	stw r0, 0x940(r3)
lbl_80163D48:
/* 80163D48  38 60 00 01 */	li r3, 1
/* 80163D4C  4E 80 00 20 */	blr 
