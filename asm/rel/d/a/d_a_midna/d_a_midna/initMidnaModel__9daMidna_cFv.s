lbl_804C44CC:
/* 804C44CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804C44D0  7C 08 02 A6 */	mflr r0
/* 804C44D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 804C44D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804C44DC  93 C1 00 08 */	stw r30, 8(r1)
/* 804C44E0  7C 7F 1B 78 */	mr r31, r3
/* 804C44E4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 804C44E8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 804C44EC  83 C3 5D B4 */	lwz r30, 0x5db4(r3)
/* 804C44F0  80 1F 08 94 */	lwz r0, 0x894(r31)
/* 804C44F4  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 804C44F8  41 82 00 AC */	beq lbl_804C45A4
/* 804C44FC  80 7F 06 88 */	lwz r3, 0x688(r31)
/* 804C4500  28 03 00 00 */	cmplwi r3, 0
/* 804C4504  41 82 02 34 */	beq lbl_804C4738
/* 804C4508  80 1F 05 70 */	lwz r0, 0x570(r31)
/* 804C450C  7C 00 18 40 */	cmplw r0, r3
/* 804C4510  41 82 02 28 */	beq lbl_804C4738
/* 804C4514  90 7F 05 70 */	stw r3, 0x570(r31)
/* 804C4518  80 1F 06 8C */	lwz r0, 0x68c(r31)
/* 804C451C  90 1F 06 70 */	stw r0, 0x670(r31)
/* 804C4520  80 1F 06 90 */	lwz r0, 0x690(r31)
/* 804C4524  90 1F 06 78 */	stw r0, 0x678(r31)
/* 804C4528  80 1F 06 94 */	lwz r0, 0x694(r31)
/* 804C452C  90 1F 06 80 */	stw r0, 0x680(r31)
/* 804C4530  80 7F 06 9C */	lwz r3, 0x69c(r31)
/* 804C4534  28 03 00 00 */	cmplwi r3, 0
/* 804C4538  41 82 00 10 */	beq lbl_804C4548
/* 804C453C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 804C4540  60 00 00 01 */	ori r0, r0, 1
/* 804C4544  90 03 00 0C */	stw r0, 0xc(r3)
lbl_804C4548:
/* 804C4548  80 7F 05 70 */	lwz r3, 0x570(r31)
/* 804C454C  80 63 00 04 */	lwz r3, 4(r3)
/* 804C4550  80 63 00 60 */	lwz r3, 0x60(r3)
/* 804C4554  80 63 00 18 */	lwz r3, 0x18(r3)
/* 804C4558  80 03 00 08 */	lwz r0, 8(r3)
/* 804C455C  90 1F 06 9C */	stw r0, 0x69c(r31)
/* 804C4560  80 7F 06 A0 */	lwz r3, 0x6a0(r31)
/* 804C4564  28 03 00 00 */	cmplwi r3, 0
/* 804C4568  41 82 00 10 */	beq lbl_804C4578
/* 804C456C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 804C4570  60 00 00 01 */	ori r0, r0, 1
/* 804C4574  90 03 00 0C */	stw r0, 0xc(r3)
lbl_804C4578:
/* 804C4578  80 7F 05 70 */	lwz r3, 0x570(r31)
/* 804C457C  80 63 00 04 */	lwz r3, 4(r3)
/* 804C4580  80 63 00 60 */	lwz r3, 0x60(r3)
/* 804C4584  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 804C4588  80 03 00 08 */	lwz r0, 8(r3)
/* 804C458C  90 1F 06 A0 */	stw r0, 0x6a0(r31)
/* 804C4590  38 7F 06 20 */	addi r3, r31, 0x620
/* 804C4594  4B C9 A8 19 */	bl initData__14daPy_anmHeap_cFv
/* 804C4598  38 7F 06 34 */	addi r3, r31, 0x634
/* 804C459C  4B C9 A8 11 */	bl initData__14daPy_anmHeap_cFv
/* 804C45A0  48 00 01 98 */	b lbl_804C4738
lbl_804C45A4:
/* 804C45A4  80 7F 06 88 */	lwz r3, 0x688(r31)
/* 804C45A8  28 03 00 00 */	cmplwi r3, 0
/* 804C45AC  41 82 00 6C */	beq lbl_804C4618
/* 804C45B0  80 1F 05 70 */	lwz r0, 0x570(r31)
/* 804C45B4  7C 00 18 40 */	cmplw r0, r3
/* 804C45B8  40 82 00 60 */	bne lbl_804C4618
/* 804C45BC  80 7F 06 9C */	lwz r3, 0x69c(r31)
/* 804C45C0  28 03 00 00 */	cmplwi r3, 0
/* 804C45C4  41 82 00 10 */	beq lbl_804C45D4
/* 804C45C8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 804C45CC  60 00 00 01 */	ori r0, r0, 1
/* 804C45D0  90 03 00 0C */	stw r0, 0xc(r3)
lbl_804C45D4:
/* 804C45D4  80 7F 06 A0 */	lwz r3, 0x6a0(r31)
/* 804C45D8  28 03 00 00 */	cmplwi r3, 0
/* 804C45DC  41 82 00 10 */	beq lbl_804C45EC
/* 804C45E0  80 03 00 0C */	lwz r0, 0xc(r3)
/* 804C45E4  60 00 00 01 */	ori r0, r0, 1
/* 804C45E8  90 03 00 0C */	stw r0, 0xc(r3)
lbl_804C45EC:
/* 804C45EC  38 00 00 00 */	li r0, 0
/* 804C45F0  90 1F 05 70 */	stw r0, 0x570(r31)
/* 804C45F4  90 1F 06 70 */	stw r0, 0x670(r31)
/* 804C45F8  90 1F 06 78 */	stw r0, 0x678(r31)
/* 804C45FC  90 1F 06 80 */	stw r0, 0x680(r31)
/* 804C4600  90 1F 06 9C */	stw r0, 0x69c(r31)
/* 804C4604  90 1F 06 A0 */	stw r0, 0x6a0(r31)
/* 804C4608  38 7F 06 20 */	addi r3, r31, 0x620
/* 804C460C  4B C9 A7 A1 */	bl initData__14daPy_anmHeap_cFv
/* 804C4610  38 7F 06 34 */	addi r3, r31, 0x634
/* 804C4614  4B C9 A7 99 */	bl initData__14daPy_anmHeap_cFv
lbl_804C4618:
/* 804C4618  88 1E 2F BF */	lbz r0, 0x2fbf(r30)
/* 804C461C  28 00 00 00 */	cmplwi r0, 0
/* 804C4620  41 82 00 0C */	beq lbl_804C462C
/* 804C4624  38 60 00 00 */	li r3, 0
/* 804C4628  48 00 00 08 */	b lbl_804C4630
lbl_804C462C:
/* 804C462C  80 7E 07 9C */	lwz r3, 0x79c(r30)
lbl_804C4630:
/* 804C4630  80 1F 05 70 */	lwz r0, 0x570(r31)
/* 804C4634  28 00 00 00 */	cmplwi r0, 0
/* 804C4638  41 82 00 38 */	beq lbl_804C4670
/* 804C463C  28 03 00 00 */	cmplwi r3, 0
/* 804C4640  40 82 00 F8 */	bne lbl_804C4738
/* 804C4644  80 1F 08 94 */	lwz r0, 0x894(r31)
/* 804C4648  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 804C464C  40 82 00 EC */	bne lbl_804C4738
/* 804C4650  38 00 00 00 */	li r0, 0
/* 804C4654  90 1F 05 70 */	stw r0, 0x570(r31)
/* 804C4658  90 1F 06 70 */	stw r0, 0x670(r31)
/* 804C465C  90 1F 06 78 */	stw r0, 0x678(r31)
/* 804C4660  90 1F 06 80 */	stw r0, 0x680(r31)
/* 804C4664  90 1F 06 9C */	stw r0, 0x69c(r31)
/* 804C4668  90 1F 06 A0 */	stw r0, 0x6a0(r31)
/* 804C466C  48 00 00 CC */	b lbl_804C4738
lbl_804C4670:
/* 804C4670  28 03 00 00 */	cmplwi r3, 0
/* 804C4674  41 82 00 C4 */	beq lbl_804C4738
/* 804C4678  90 7F 05 70 */	stw r3, 0x570(r31)
/* 804C467C  80 1E 07 A0 */	lwz r0, 0x7a0(r30)
/* 804C4680  90 1F 06 70 */	stw r0, 0x670(r31)
/* 804C4684  80 1E 07 A4 */	lwz r0, 0x7a4(r30)
/* 804C4688  90 1F 06 78 */	stw r0, 0x678(r31)
/* 804C468C  80 1E 07 A8 */	lwz r0, 0x7a8(r30)
/* 804C4690  90 1F 06 80 */	stw r0, 0x680(r31)
/* 804C4694  80 7F 05 70 */	lwz r3, 0x570(r31)
/* 804C4698  80 83 00 04 */	lwz r4, 4(r3)
/* 804C469C  80 64 00 60 */	lwz r3, 0x60(r4)
/* 804C46A0  80 63 00 18 */	lwz r3, 0x18(r3)
/* 804C46A4  80 03 00 08 */	lwz r0, 8(r3)
/* 804C46A8  90 1F 06 9C */	stw r0, 0x69c(r31)
/* 804C46AC  80 64 00 60 */	lwz r3, 0x60(r4)
/* 804C46B0  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 804C46B4  80 03 00 08 */	lwz r0, 8(r3)
/* 804C46B8  90 1F 06 A0 */	stw r0, 0x6a0(r31)
/* 804C46BC  80 64 00 60 */	lwz r3, 0x60(r4)
/* 804C46C0  80 63 00 08 */	lwz r3, 8(r3)
/* 804C46C4  80 1F 06 F0 */	lwz r0, 0x6f0(r31)
/* 804C46C8  90 03 00 3C */	stw r0, 0x3c(r3)
/* 804C46CC  80 64 00 60 */	lwz r3, 0x60(r4)
/* 804C46D0  80 63 00 0C */	lwz r3, 0xc(r3)
/* 804C46D4  80 1F 06 F4 */	lwz r0, 0x6f4(r31)
/* 804C46D8  90 03 00 3C */	stw r0, 0x3c(r3)
/* 804C46DC  80 7F 06 F0 */	lwz r3, 0x6f0(r31)
/* 804C46E0  4B FF 7B 39 */	bl init__16daMidna_matAnm_cFv
/* 804C46E4  80 7F 06 F4 */	lwz r3, 0x6f4(r31)
/* 804C46E8  4B FF 7B 31 */	bl init__16daMidna_matAnm_cFv
/* 804C46EC  80 7F 06 78 */	lwz r3, 0x678(r31)
/* 804C46F0  80 83 00 04 */	lwz r4, 4(r3)
/* 804C46F4  38 A0 00 00 */	li r5, 0
/* 804C46F8  48 00 00 24 */	b lbl_804C471C
lbl_804C46FC:
/* 804C46FC  80 64 00 60 */	lwz r3, 0x60(r4)
/* 804C4700  54 A0 13 BA */	rlwinm r0, r5, 2, 0xe, 0x1d
/* 804C4704  7C 63 00 2E */	lwzx r3, r3, r0
/* 804C4708  80 63 00 08 */	lwz r3, 8(r3)
/* 804C470C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 804C4710  60 00 00 01 */	ori r0, r0, 1
/* 804C4714  90 03 00 0C */	stw r0, 0xc(r3)
/* 804C4718  38 A5 00 01 */	addi r5, r5, 1
lbl_804C471C:
/* 804C471C  54 A0 04 3E */	clrlwi r0, r5, 0x10
/* 804C4720  28 00 00 04 */	cmplwi r0, 4
/* 804C4724  41 80 FF D8 */	blt lbl_804C46FC
/* 804C4728  38 7F 06 20 */	addi r3, r31, 0x620
/* 804C472C  4B C9 A6 81 */	bl initData__14daPy_anmHeap_cFv
/* 804C4730  38 7F 06 34 */	addi r3, r31, 0x634
/* 804C4734  4B C9 A6 79 */	bl initData__14daPy_anmHeap_cFv
lbl_804C4738:
/* 804C4738  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804C473C  83 C1 00 08 */	lwz r30, 8(r1)
/* 804C4740  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804C4744  7C 08 03 A6 */	mtlr r0
/* 804C4748  38 21 00 10 */	addi r1, r1, 0x10
/* 804C474C  4E 80 00 20 */	blr 
