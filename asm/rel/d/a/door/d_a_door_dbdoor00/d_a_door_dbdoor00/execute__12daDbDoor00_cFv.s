lbl_8045E1EC:
/* 8045E1EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045E1F0  7C 08 02 A6 */	mflr r0
/* 8045E1F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8045E1F8  3C 80 80 46 */	lis r4, cNullVec__6Z2Calc@ha /* 0x8045E664@ha */
/* 8045E1FC  38 84 E6 64 */	addi r4, r4, cNullVec__6Z2Calc@l /* 0x8045E664@l */
/* 8045E200  3C A0 80 46 */	lis r5, data_8045E7D0@ha /* 0x8045E7D0@ha */
/* 8045E204  38 E5 E7 D0 */	addi r7, r5, data_8045E7D0@l /* 0x8045E7D0@l */
/* 8045E208  88 07 00 00 */	lbz r0, 0(r7)
/* 8045E20C  7C 00 07 75 */	extsb. r0, r0
/* 8045E210  40 82 00 A0 */	bne lbl_8045E2B0
/* 8045E214  80 A4 00 6C */	lwz r5, 0x6c(r4)
/* 8045E218  80 04 00 70 */	lwz r0, 0x70(r4)
/* 8045E21C  90 A4 00 B4 */	stw r5, 0xb4(r4)
/* 8045E220  90 04 00 B8 */	stw r0, 0xb8(r4)
/* 8045E224  80 04 00 74 */	lwz r0, 0x74(r4)
/* 8045E228  90 04 00 BC */	stw r0, 0xbc(r4)
/* 8045E22C  38 C4 00 B4 */	addi r6, r4, 0xb4
/* 8045E230  80 A4 00 78 */	lwz r5, 0x78(r4)
/* 8045E234  80 04 00 7C */	lwz r0, 0x7c(r4)
/* 8045E238  90 A6 00 0C */	stw r5, 0xc(r6)
/* 8045E23C  90 06 00 10 */	stw r0, 0x10(r6)
/* 8045E240  80 04 00 80 */	lwz r0, 0x80(r4)
/* 8045E244  90 06 00 14 */	stw r0, 0x14(r6)
/* 8045E248  80 A4 00 84 */	lwz r5, 0x84(r4)
/* 8045E24C  80 04 00 88 */	lwz r0, 0x88(r4)
/* 8045E250  90 A6 00 18 */	stw r5, 0x18(r6)
/* 8045E254  90 06 00 1C */	stw r0, 0x1c(r6)
/* 8045E258  80 04 00 8C */	lwz r0, 0x8c(r4)
/* 8045E25C  90 06 00 20 */	stw r0, 0x20(r6)
/* 8045E260  80 A4 00 90 */	lwz r5, 0x90(r4)
/* 8045E264  80 04 00 94 */	lwz r0, 0x94(r4)
/* 8045E268  90 A6 00 24 */	stw r5, 0x24(r6)
/* 8045E26C  90 06 00 28 */	stw r0, 0x28(r6)
/* 8045E270  80 04 00 98 */	lwz r0, 0x98(r4)
/* 8045E274  90 06 00 2C */	stw r0, 0x2c(r6)
/* 8045E278  80 A4 00 9C */	lwz r5, 0x9c(r4)
/* 8045E27C  80 04 00 A0 */	lwz r0, 0xa0(r4)
/* 8045E280  90 A6 00 30 */	stw r5, 0x30(r6)
/* 8045E284  90 06 00 34 */	stw r0, 0x34(r6)
/* 8045E288  80 04 00 A4 */	lwz r0, 0xa4(r4)
/* 8045E28C  90 06 00 38 */	stw r0, 0x38(r6)
/* 8045E290  80 A4 00 A8 */	lwz r5, 0xa8(r4)
/* 8045E294  80 04 00 AC */	lwz r0, 0xac(r4)
/* 8045E298  90 A6 00 3C */	stw r5, 0x3c(r6)
/* 8045E29C  90 06 00 40 */	stw r0, 0x40(r6)
/* 8045E2A0  80 04 00 B0 */	lwz r0, 0xb0(r4)
/* 8045E2A4  90 06 00 44 */	stw r0, 0x44(r6)
/* 8045E2A8  38 00 00 01 */	li r0, 1
/* 8045E2AC  98 07 00 00 */	stb r0, 0(r7)
lbl_8045E2B0:
/* 8045E2B0  88 03 05 86 */	lbz r0, 0x586(r3)
/* 8045E2B4  1C 00 00 0C */	mulli r0, r0, 0xc
/* 8045E2B8  39 84 00 B4 */	addi r12, r4, 0xb4
/* 8045E2BC  7D 8C 02 14 */	add r12, r12, r0
/* 8045E2C0  4B F0 3D C5 */	bl __ptmf_scall
/* 8045E2C4  60 00 00 00 */	nop 
/* 8045E2C8  38 60 00 01 */	li r3, 1
/* 8045E2CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045E2D0  7C 08 03 A6 */	mtlr r0
/* 8045E2D4  38 21 00 10 */	addi r1, r1, 0x10
/* 8045E2D8  4E 80 00 20 */	blr 
