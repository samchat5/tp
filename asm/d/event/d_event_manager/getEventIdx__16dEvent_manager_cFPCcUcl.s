lbl_80047514:
/* 80047514  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80047518  7C 08 02 A6 */	mflr r0
/* 8004751C  90 01 00 34 */	stw r0, 0x34(r1)
/* 80047520  39 61 00 30 */	addi r11, r1, 0x30
/* 80047524  48 31 AC A5 */	bl _savegpr_24
/* 80047528  7C 7D 1B 78 */	mr r29, r3
/* 8004752C  7C 9E 23 78 */	mr r30, r4
/* 80047530  7C B8 2B 78 */	mr r24, r5
/* 80047534  7C DF 33 78 */	mr r31, r6
/* 80047538  2C 1F FF FF */	cmpwi r31, -1
/* 8004753C  40 82 00 0C */	bne lbl_80047548
/* 80047540  8B ED 87 E4 */	lbz r31, struct_80450D64+0x0(r13)
/* 80047544  7F FF 07 74 */	extsb r31, r31
lbl_80047548:
/* 80047548  57 00 06 3E */	clrlwi r0, r24, 0x18
/* 8004754C  28 00 00 FF */	cmplwi r0, 0xff
/* 80047550  41 82 00 84 */	beq lbl_800475D4
/* 80047554  7F 03 C3 78 */	mr r3, r24
/* 80047558  7F E4 FB 78 */	mr r4, r31
/* 8004755C  4B FF BF A5 */	bl searchMapEventData__14dEvt_control_cFUcl
/* 80047560  7C 64 1B 79 */	or. r4, r3, r3
/* 80047564  41 82 00 70 */	beq lbl_800475D4
/* 80047568  88 04 00 00 */	lbz r0, 0(r4)
/* 8004756C  2C 00 00 00 */	cmpwi r0, 0
/* 80047570  41 82 00 28 */	beq lbl_80047598
/* 80047574  41 80 00 60 */	blt lbl_800475D4
/* 80047578  2C 00 00 03 */	cmpwi r0, 3
/* 8004757C  40 80 00 58 */	bge lbl_800475D4
/* 80047580  7F A3 EB 78 */	mr r3, r29
/* 80047584  38 84 00 0D */	addi r4, r4, 0xd
/* 80047588  38 A0 00 FF */	li r5, 0xff
/* 8004758C  7F E6 FB 78 */	mr r6, r31
/* 80047590  4B FF FF 85 */	bl getEventIdx__16dEvent_manager_cFPCcUcl
/* 80047594  48 00 00 EC */	b lbl_80047680
lbl_80047598:
/* 80047598  3C 60 80 42 */	lis r3, map_tool_name_4449@ha /* 0x804246A0@ha */
/* 8004759C  38 63 46 A0 */	addi r3, r3, map_tool_name_4449@l /* 0x804246A0@l */
/* 800475A0  3C 80 80 38 */	lis r4, d_event_d_event_manager__stringBase0@ha /* 0x80379F60@ha */
/* 800475A4  38 84 9F 60 */	addi r4, r4, d_event_d_event_manager__stringBase0@l /* 0x80379F60@l */
/* 800475A8  38 84 01 4F */	addi r4, r4, 0x14f
/* 800475AC  57 05 06 3E */	clrlwi r5, r24, 0x18
/* 800475B0  4C C6 31 82 */	crclr 6
/* 800475B4  48 31 EF 29 */	bl sprintf
/* 800475B8  7F A3 EB 78 */	mr r3, r29
/* 800475BC  3C 80 80 42 */	lis r4, map_tool_name_4449@ha /* 0x804246A0@ha */
/* 800475C0  38 84 46 A0 */	addi r4, r4, map_tool_name_4449@l /* 0x804246A0@l */
/* 800475C4  38 A0 00 FF */	li r5, 0xff
/* 800475C8  7F E6 FB 78 */	mr r6, r31
/* 800475CC  4B FF FF 49 */	bl getEventIdx__16dEvent_manager_cFPCcUcl
/* 800475D0  48 00 00 B0 */	b lbl_80047680
lbl_800475D4:
/* 800475D4  28 1E 00 00 */	cmplwi r30, 0
/* 800475D8  40 82 00 0C */	bne lbl_800475E4
/* 800475DC  38 60 FF FF */	li r3, -1
/* 800475E0  48 00 00 A0 */	b lbl_80047680
lbl_800475E4:
/* 800475E4  3B 00 00 0A */	li r24, 0xa
/* 800475E8  3B 80 01 68 */	li r28, 0x168
lbl_800475EC:
/* 800475EC  2C 18 00 04 */	cmpwi r24, 4
/* 800475F0  41 80 00 1C */	blt lbl_8004760C
/* 800475F4  2C 18 00 09 */	cmpwi r24, 9
/* 800475F8  41 81 00 14 */	bgt lbl_8004760C
/* 800475FC  38 1C 00 20 */	addi r0, r28, 0x20
/* 80047600  7C 1D 00 2E */	lwzx r0, r29, r0
/* 80047604  7C 1F 00 00 */	cmpw r31, r0
/* 80047608  40 82 00 64 */	bne lbl_8004766C
lbl_8004760C:
/* 8004760C  7F 5D E2 14 */	add r26, r29, r28
/* 80047610  80 1A 00 00 */	lwz r0, 0(r26)
/* 80047614  28 00 00 00 */	cmplwi r0, 0
/* 80047618  41 82 00 54 */	beq lbl_8004766C
/* 8004761C  3B 20 00 00 */	li r25, 0
/* 80047620  3B 60 00 00 */	li r27, 0
/* 80047624  48 00 00 38 */	b lbl_8004765C
lbl_80047628:
/* 80047628  80 1A 00 04 */	lwz r0, 4(r26)
/* 8004762C  7C 80 DA 14 */	add r4, r0, r27
/* 80047630  7F C3 F3 78 */	mr r3, r30
/* 80047634  48 32 13 61 */	bl strcmp
/* 80047638  2C 03 00 00 */	cmpwi r3, 0
/* 8004763C  40 82 00 18 */	bne lbl_80047654
/* 80047640  7F 23 07 34 */	extsh r3, r25
/* 80047644  57 00 40 2E */	slwi r0, r24, 8
/* 80047648  7C 60 03 78 */	or r0, r3, r0
/* 8004764C  7C 03 07 34 */	extsh r3, r0
/* 80047650  48 00 00 30 */	b lbl_80047680
lbl_80047654:
/* 80047654  3B 39 00 01 */	addi r25, r25, 1
/* 80047658  3B 7B 00 B0 */	addi r27, r27, 0xb0
lbl_8004765C:
/* 8004765C  80 7A 00 00 */	lwz r3, 0(r26)
/* 80047660  80 03 00 04 */	lwz r0, 4(r3)
/* 80047664  7C 19 00 00 */	cmpw r25, r0
/* 80047668  41 80 FF C0 */	blt lbl_80047628
lbl_8004766C:
/* 8004766C  3B 18 FF FF */	addi r24, r24, -1
/* 80047670  2C 18 00 01 */	cmpwi r24, 1
/* 80047674  3B 9C FF DC */	addi r28, r28, -36
/* 80047678  40 80 FF 74 */	bge lbl_800475EC
/* 8004767C  38 60 FF FF */	li r3, -1
lbl_80047680:
/* 80047680  39 61 00 30 */	addi r11, r1, 0x30
/* 80047684  48 31 AB 91 */	bl _restgpr_24
/* 80047688  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8004768C  7C 08 03 A6 */	mtlr r0
/* 80047690  38 21 00 30 */	addi r1, r1, 0x30
/* 80047694  4E 80 00 20 */	blr 
