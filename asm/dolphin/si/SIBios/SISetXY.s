lbl_803457F4:
/* 803457F4  7C 08 02 A6 */	mflr r0
/* 803457F8  90 01 00 04 */	stw r0, 4(r1)
/* 803457FC  54 80 40 2E */	slwi r0, r4, 8
/* 80345800  94 21 FF E8 */	stwu r1, -0x18(r1)
/* 80345804  93 E1 00 14 */	stw r31, 0x14(r1)
/* 80345808  54 7F 80 1E */	slwi r31, r3, 0x10
/* 8034580C  7F FF 03 78 */	or r31, r31, r0
/* 80345810  4B FF 7E E5 */	bl OSDisableInterrupts
/* 80345814  3C 80 80 3D */	lis r4, Si@ha /* 0x803D11FC@ha */
/* 80345818  38 84 11 FC */	addi r4, r4, Si@l /* 0x803D11FC@l */
/* 8034581C  80 04 00 04 */	lwz r0, 4(r4)
/* 80345820  38 A4 00 04 */	addi r5, r4, 4
/* 80345824  3C 80 CC 00 */	lis r4, 0xCC00 /* 0xCC006430@ha */
/* 80345828  54 00 06 0A */	rlwinm r0, r0, 0, 0x18, 5
/* 8034582C  90 05 00 00 */	stw r0, 0(r5)
/* 80345830  80 05 00 00 */	lwz r0, 0(r5)
/* 80345834  7C 00 FB 78 */	or r0, r0, r31
/* 80345838  90 05 00 00 */	stw r0, 0(r5)
/* 8034583C  83 E5 00 00 */	lwz r31, 0(r5)
/* 80345840  93 E4 64 30 */	stw r31, 0x6430(r4)  /* 0xCC006430@l */
/* 80345844  4B FF 7E D9 */	bl OSRestoreInterrupts
/* 80345848  7F E3 FB 78 */	mr r3, r31
/* 8034584C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80345850  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 80345854  38 21 00 18 */	addi r1, r1, 0x18
/* 80345858  7C 08 03 A6 */	mtlr r0
/* 8034585C  4E 80 00 20 */	blr 
