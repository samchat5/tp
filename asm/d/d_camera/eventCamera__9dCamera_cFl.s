lbl_8017F828:
/* 8017F828  94 21 FD B0 */	stwu r1, -0x250(r1)
/* 8017F82C  7C 08 02 A6 */	mflr r0
/* 8017F830  90 01 02 54 */	stw r0, 0x254(r1)
/* 8017F834  39 61 02 50 */	addi r11, r1, 0x250
/* 8017F838  48 1E 29 A5 */	bl _savegpr_29
/* 8017F83C  7C 7D 1B 78 */	mr r29, r3
/* 8017F840  3C 60 80 3C */	lis r3, cNullVec__6Z2Calc@ha /* 0x803BA160@ha */
/* 8017F844  3B E3 A1 60 */	addi r31, r3, cNullVec__6Z2Calc@l /* 0x803BA160@l */
/* 8017F848  38 A1 00 9C */	addi r5, r1, 0x9c
/* 8017F84C  3C 60 80 39 */	lis r3, lit_16654@ha /* 0x80393DC0@ha */
/* 8017F850  38 63 3D C0 */	addi r3, r3, lit_16654@l /* 0x80393DC0@l */
/* 8017F854  38 83 FF FC */	addi r4, r3, -4
/* 8017F858  38 00 00 33 */	li r0, 0x33
/* 8017F85C  7C 09 03 A6 */	mtctr r0
lbl_8017F860:
/* 8017F860  80 64 00 04 */	lwz r3, 4(r4)
/* 8017F864  84 04 00 08 */	lwzu r0, 8(r4)
/* 8017F868  90 65 00 04 */	stw r3, 4(r5)
/* 8017F86C  94 05 00 08 */	stwu r0, 8(r5)
/* 8017F870  42 00 FF F0 */	bdnz lbl_8017F860
/* 8017F874  80 7F 03 58 */	lwz r3, 0x358(r31)
/* 8017F878  80 1F 03 5C */	lwz r0, 0x35c(r31)
/* 8017F87C  90 61 00 A0 */	stw r3, 0xa0(r1)
/* 8017F880  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8017F884  80 1F 03 60 */	lwz r0, 0x360(r31)
/* 8017F888  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 8017F88C  80 7F 03 64 */	lwz r3, 0x364(r31)
/* 8017F890  80 1F 03 68 */	lwz r0, 0x368(r31)
/* 8017F894  90 61 00 AC */	stw r3, 0xac(r1)
/* 8017F898  90 01 00 B0 */	stw r0, 0xb0(r1)
/* 8017F89C  80 1F 03 6C */	lwz r0, 0x36c(r31)
/* 8017F8A0  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8017F8A4  80 7F 03 70 */	lwz r3, 0x370(r31)
/* 8017F8A8  80 1F 03 74 */	lwz r0, 0x374(r31)
/* 8017F8AC  90 61 00 B8 */	stw r3, 0xb8(r1)
/* 8017F8B0  90 01 00 BC */	stw r0, 0xbc(r1)
/* 8017F8B4  80 1F 03 78 */	lwz r0, 0x378(r31)
/* 8017F8B8  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 8017F8BC  80 7F 03 7C */	lwz r3, 0x37c(r31)
/* 8017F8C0  80 1F 03 80 */	lwz r0, 0x380(r31)
/* 8017F8C4  90 61 00 C4 */	stw r3, 0xc4(r1)
/* 8017F8C8  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 8017F8CC  80 1F 03 84 */	lwz r0, 0x384(r31)
/* 8017F8D0  90 01 00 CC */	stw r0, 0xcc(r1)
/* 8017F8D4  80 7F 03 88 */	lwz r3, 0x388(r31)
/* 8017F8D8  80 1F 03 8C */	lwz r0, 0x38c(r31)
/* 8017F8DC  90 61 00 D0 */	stw r3, 0xd0(r1)
/* 8017F8E0  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 8017F8E4  80 1F 03 90 */	lwz r0, 0x390(r31)
/* 8017F8E8  90 01 00 D8 */	stw r0, 0xd8(r1)
/* 8017F8EC  80 7F 03 94 */	lwz r3, 0x394(r31)
/* 8017F8F0  80 1F 03 98 */	lwz r0, 0x398(r31)
/* 8017F8F4  90 61 00 DC */	stw r3, 0xdc(r1)
/* 8017F8F8  90 01 00 E0 */	stw r0, 0xe0(r1)
/* 8017F8FC  80 1F 03 9C */	lwz r0, 0x39c(r31)
/* 8017F900  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 8017F904  80 7F 03 A0 */	lwz r3, 0x3a0(r31)
/* 8017F908  80 1F 03 A4 */	lwz r0, 0x3a4(r31)
/* 8017F90C  90 61 00 E8 */	stw r3, 0xe8(r1)
/* 8017F910  90 01 00 EC */	stw r0, 0xec(r1)
/* 8017F914  80 1F 03 A8 */	lwz r0, 0x3a8(r31)
/* 8017F918  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 8017F91C  80 7F 03 AC */	lwz r3, 0x3ac(r31)
/* 8017F920  80 1F 03 B0 */	lwz r0, 0x3b0(r31)
/* 8017F924  90 61 00 F4 */	stw r3, 0xf4(r1)
/* 8017F928  90 01 00 F8 */	stw r0, 0xf8(r1)
/* 8017F92C  80 1F 03 B4 */	lwz r0, 0x3b4(r31)
/* 8017F930  90 01 00 FC */	stw r0, 0xfc(r1)
/* 8017F934  80 7F 03 B8 */	lwz r3, 0x3b8(r31)
/* 8017F938  80 1F 03 BC */	lwz r0, 0x3bc(r31)
/* 8017F93C  90 61 01 00 */	stw r3, 0x100(r1)
/* 8017F940  90 01 01 04 */	stw r0, 0x104(r1)
/* 8017F944  80 1F 03 C0 */	lwz r0, 0x3c0(r31)
/* 8017F948  90 01 01 08 */	stw r0, 0x108(r1)
/* 8017F94C  80 7F 03 C4 */	lwz r3, 0x3c4(r31)
/* 8017F950  80 1F 03 C8 */	lwz r0, 0x3c8(r31)
/* 8017F954  90 61 01 0C */	stw r3, 0x10c(r1)
/* 8017F958  90 01 01 10 */	stw r0, 0x110(r1)
/* 8017F95C  80 1F 03 CC */	lwz r0, 0x3cc(r31)
/* 8017F960  90 01 01 14 */	stw r0, 0x114(r1)
/* 8017F964  80 7F 03 D0 */	lwz r3, 0x3d0(r31)
/* 8017F968  80 1F 03 D4 */	lwz r0, 0x3d4(r31)
/* 8017F96C  90 61 01 18 */	stw r3, 0x118(r1)
/* 8017F970  90 01 01 1C */	stw r0, 0x11c(r1)
/* 8017F974  80 1F 03 D8 */	lwz r0, 0x3d8(r31)
/* 8017F978  90 01 01 20 */	stw r0, 0x120(r1)
/* 8017F97C  80 7F 03 DC */	lwz r3, 0x3dc(r31)
/* 8017F980  80 1F 03 E0 */	lwz r0, 0x3e0(r31)
/* 8017F984  90 61 01 24 */	stw r3, 0x124(r1)
/* 8017F988  90 01 01 28 */	stw r0, 0x128(r1)
/* 8017F98C  80 1F 03 E4 */	lwz r0, 0x3e4(r31)
/* 8017F990  90 01 01 2C */	stw r0, 0x12c(r1)
/* 8017F994  80 7F 03 E8 */	lwz r3, 0x3e8(r31)
/* 8017F998  80 1F 03 EC */	lwz r0, 0x3ec(r31)
/* 8017F99C  90 61 01 30 */	stw r3, 0x130(r1)
/* 8017F9A0  90 01 01 34 */	stw r0, 0x134(r1)
/* 8017F9A4  80 1F 03 F0 */	lwz r0, 0x3f0(r31)
/* 8017F9A8  90 01 01 38 */	stw r0, 0x138(r1)
/* 8017F9AC  80 7F 03 F4 */	lwz r3, 0x3f4(r31)
/* 8017F9B0  80 1F 03 F8 */	lwz r0, 0x3f8(r31)
/* 8017F9B4  90 61 01 3C */	stw r3, 0x13c(r1)
/* 8017F9B8  90 01 01 40 */	stw r0, 0x140(r1)
/* 8017F9BC  80 1F 03 FC */	lwz r0, 0x3fc(r31)
/* 8017F9C0  90 01 01 44 */	stw r0, 0x144(r1)
/* 8017F9C4  80 7F 04 00 */	lwz r3, 0x400(r31)
/* 8017F9C8  80 1F 04 04 */	lwz r0, 0x404(r31)
/* 8017F9CC  90 61 01 48 */	stw r3, 0x148(r1)
/* 8017F9D0  90 01 01 4C */	stw r0, 0x14c(r1)
/* 8017F9D4  80 1F 04 08 */	lwz r0, 0x408(r31)
/* 8017F9D8  90 01 01 50 */	stw r0, 0x150(r1)
/* 8017F9DC  80 7F 04 0C */	lwz r3, 0x40c(r31)
/* 8017F9E0  80 1F 04 10 */	lwz r0, 0x410(r31)
/* 8017F9E4  90 61 01 54 */	stw r3, 0x154(r1)
/* 8017F9E8  90 01 01 58 */	stw r0, 0x158(r1)
/* 8017F9EC  80 1F 04 14 */	lwz r0, 0x414(r31)
/* 8017F9F0  90 01 01 5C */	stw r0, 0x15c(r1)
/* 8017F9F4  80 7F 04 18 */	lwz r3, 0x418(r31)
/* 8017F9F8  80 1F 04 1C */	lwz r0, 0x41c(r31)
/* 8017F9FC  90 61 01 60 */	stw r3, 0x160(r1)
/* 8017FA00  90 01 01 64 */	stw r0, 0x164(r1)
/* 8017FA04  80 1F 04 20 */	lwz r0, 0x420(r31)
/* 8017FA08  90 01 01 68 */	stw r0, 0x168(r1)
/* 8017FA0C  80 7F 04 24 */	lwz r3, 0x424(r31)
/* 8017FA10  80 1F 04 28 */	lwz r0, 0x428(r31)
/* 8017FA14  90 61 01 6C */	stw r3, 0x16c(r1)
/* 8017FA18  90 01 01 70 */	stw r0, 0x170(r1)
/* 8017FA1C  80 1F 04 2C */	lwz r0, 0x42c(r31)
/* 8017FA20  90 01 01 74 */	stw r0, 0x174(r1)
/* 8017FA24  80 7F 04 30 */	lwz r3, 0x430(r31)
/* 8017FA28  80 1F 04 34 */	lwz r0, 0x434(r31)
/* 8017FA2C  90 61 01 78 */	stw r3, 0x178(r1)
/* 8017FA30  90 01 01 7C */	stw r0, 0x17c(r1)
/* 8017FA34  80 1F 04 38 */	lwz r0, 0x438(r31)
/* 8017FA38  90 01 01 80 */	stw r0, 0x180(r1)
/* 8017FA3C  80 7F 04 3C */	lwz r3, 0x43c(r31)
/* 8017FA40  80 1F 04 40 */	lwz r0, 0x440(r31)
/* 8017FA44  90 61 01 84 */	stw r3, 0x184(r1)
/* 8017FA48  90 01 01 88 */	stw r0, 0x188(r1)
/* 8017FA4C  80 1F 04 44 */	lwz r0, 0x444(r31)
/* 8017FA50  90 01 01 8C */	stw r0, 0x18c(r1)
/* 8017FA54  80 7F 04 48 */	lwz r3, 0x448(r31)
/* 8017FA58  80 1F 04 4C */	lwz r0, 0x44c(r31)
/* 8017FA5C  90 61 01 90 */	stw r3, 0x190(r1)
/* 8017FA60  90 01 01 94 */	stw r0, 0x194(r1)
/* 8017FA64  80 1F 04 50 */	lwz r0, 0x450(r31)
/* 8017FA68  90 01 01 98 */	stw r0, 0x198(r1)
/* 8017FA6C  80 7F 04 54 */	lwz r3, 0x454(r31)
/* 8017FA70  80 1F 04 58 */	lwz r0, 0x458(r31)
/* 8017FA74  90 61 01 9C */	stw r3, 0x19c(r1)
/* 8017FA78  90 01 01 A0 */	stw r0, 0x1a0(r1)
/* 8017FA7C  80 1F 04 5C */	lwz r0, 0x45c(r31)
/* 8017FA80  90 01 01 A4 */	stw r0, 0x1a4(r1)
/* 8017FA84  80 7F 04 60 */	lwz r3, 0x460(r31)
/* 8017FA88  80 1F 04 64 */	lwz r0, 0x464(r31)
/* 8017FA8C  90 61 01 A8 */	stw r3, 0x1a8(r1)
/* 8017FA90  90 01 01 AC */	stw r0, 0x1ac(r1)
/* 8017FA94  80 1F 04 68 */	lwz r0, 0x468(r31)
/* 8017FA98  90 01 01 B0 */	stw r0, 0x1b0(r1)
/* 8017FA9C  80 7F 04 6C */	lwz r3, 0x46c(r31)
/* 8017FAA0  80 1F 04 70 */	lwz r0, 0x470(r31)
/* 8017FAA4  90 61 01 B4 */	stw r3, 0x1b4(r1)
/* 8017FAA8  90 01 01 B8 */	stw r0, 0x1b8(r1)
/* 8017FAAC  80 1F 04 74 */	lwz r0, 0x474(r31)
/* 8017FAB0  90 01 01 BC */	stw r0, 0x1bc(r1)
/* 8017FAB4  80 7F 04 78 */	lwz r3, 0x478(r31)
/* 8017FAB8  80 1F 04 7C */	lwz r0, 0x47c(r31)
/* 8017FABC  90 61 01 C0 */	stw r3, 0x1c0(r1)
/* 8017FAC0  90 01 01 C4 */	stw r0, 0x1c4(r1)
/* 8017FAC4  80 1F 04 80 */	lwz r0, 0x480(r31)
/* 8017FAC8  90 01 01 C8 */	stw r0, 0x1c8(r1)
/* 8017FACC  80 7F 04 84 */	lwz r3, 0x484(r31)
/* 8017FAD0  80 1F 04 88 */	lwz r0, 0x488(r31)
/* 8017FAD4  90 61 01 CC */	stw r3, 0x1cc(r1)
/* 8017FAD8  90 01 01 D0 */	stw r0, 0x1d0(r1)
/* 8017FADC  80 1F 04 8C */	lwz r0, 0x48c(r31)
/* 8017FAE0  90 01 01 D4 */	stw r0, 0x1d4(r1)
/* 8017FAE4  80 7F 04 90 */	lwz r3, 0x490(r31)
/* 8017FAE8  80 1F 04 94 */	lwz r0, 0x494(r31)
/* 8017FAEC  90 61 01 D8 */	stw r3, 0x1d8(r1)
/* 8017FAF0  90 01 01 DC */	stw r0, 0x1dc(r1)
/* 8017FAF4  80 1F 04 98 */	lwz r0, 0x498(r31)
/* 8017FAF8  90 01 01 E0 */	stw r0, 0x1e0(r1)
/* 8017FAFC  80 7F 04 9C */	lwz r3, 0x49c(r31)
/* 8017FB00  80 1F 04 A0 */	lwz r0, 0x4a0(r31)
/* 8017FB04  90 61 01 E4 */	stw r3, 0x1e4(r1)
/* 8017FB08  90 01 01 E8 */	stw r0, 0x1e8(r1)
/* 8017FB0C  80 1F 04 A4 */	lwz r0, 0x4a4(r31)
/* 8017FB10  90 01 01 EC */	stw r0, 0x1ec(r1)
/* 8017FB14  80 7F 04 A8 */	lwz r3, 0x4a8(r31)
/* 8017FB18  80 1F 04 AC */	lwz r0, 0x4ac(r31)
/* 8017FB1C  90 61 01 F0 */	stw r3, 0x1f0(r1)
/* 8017FB20  90 01 01 F4 */	stw r0, 0x1f4(r1)
/* 8017FB24  80 1F 04 B0 */	lwz r0, 0x4b0(r31)
/* 8017FB28  90 01 01 F8 */	stw r0, 0x1f8(r1)
/* 8017FB2C  80 7F 04 B4 */	lwz r3, 0x4b4(r31)
/* 8017FB30  80 1F 04 B8 */	lwz r0, 0x4b8(r31)
/* 8017FB34  90 61 01 FC */	stw r3, 0x1fc(r1)
/* 8017FB38  90 01 02 00 */	stw r0, 0x200(r1)
/* 8017FB3C  80 1F 04 BC */	lwz r0, 0x4bc(r31)
/* 8017FB40  90 01 02 04 */	stw r0, 0x204(r1)
/* 8017FB44  80 7F 04 C0 */	lwz r3, 0x4c0(r31)
/* 8017FB48  80 1F 04 C4 */	lwz r0, 0x4c4(r31)
/* 8017FB4C  90 61 02 08 */	stw r3, 0x208(r1)
/* 8017FB50  90 01 02 0C */	stw r0, 0x20c(r1)
/* 8017FB54  80 1F 04 C8 */	lwz r0, 0x4c8(r31)
/* 8017FB58  90 01 02 10 */	stw r0, 0x210(r1)
/* 8017FB5C  80 7F 04 CC */	lwz r3, 0x4cc(r31)
/* 8017FB60  80 1F 04 D0 */	lwz r0, 0x4d0(r31)
/* 8017FB64  90 61 02 14 */	stw r3, 0x214(r1)
/* 8017FB68  90 01 02 18 */	stw r0, 0x218(r1)
/* 8017FB6C  80 1F 04 D4 */	lwz r0, 0x4d4(r31)
/* 8017FB70  90 01 02 1C */	stw r0, 0x21c(r1)
/* 8017FB74  80 7F 04 D8 */	lwz r3, 0x4d8(r31)
/* 8017FB78  80 1F 04 DC */	lwz r0, 0x4dc(r31)
/* 8017FB7C  90 61 02 20 */	stw r3, 0x220(r1)
/* 8017FB80  90 01 02 24 */	stw r0, 0x224(r1)
/* 8017FB84  80 1F 04 E0 */	lwz r0, 0x4e0(r31)
/* 8017FB88  90 01 02 28 */	stw r0, 0x228(r1)
/* 8017FB8C  80 7F 04 E4 */	lwz r3, 0x4e4(r31)
/* 8017FB90  80 1F 04 E8 */	lwz r0, 0x4e8(r31)
/* 8017FB94  90 61 02 2C */	stw r3, 0x22c(r1)
/* 8017FB98  90 01 02 30 */	stw r0, 0x230(r1)
/* 8017FB9C  80 1F 04 EC */	lwz r0, 0x4ec(r31)
/* 8017FBA0  90 01 02 34 */	stw r0, 0x234(r1)
/* 8017FBA4  80 1D 01 70 */	lwz r0, 0x170(r29)
/* 8017FBA8  28 00 00 00 */	cmplwi r0, 0
/* 8017FBAC  40 82 00 18 */	bne lbl_8017FBC4
/* 8017FBB0  80 1D 06 0C */	lwz r0, 0x60c(r29)
/* 8017FBB4  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 8017FBB8  90 1D 06 0C */	stw r0, 0x60c(r29)
/* 8017FBBC  38 00 00 02 */	li r0, 2
/* 8017FBC0  90 1D 05 04 */	stw r0, 0x504(r29)
lbl_8017FBC4:
/* 8017FBC4  80 1D 06 0C */	lwz r0, 0x60c(r29)
/* 8017FBC8  54 00 00 85 */	rlwinm. r0, r0, 0, 2, 2
/* 8017FBCC  40 82 01 98 */	bne lbl_8017FD64
/* 8017FBD0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8017FBD4  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 8017FBD8  3B C3 4F F8 */	addi r30, r3, 0x4ff8
/* 8017FBDC  80 03 51 84 */	lwz r0, 0x5184(r3)
/* 8017FBE0  2C 00 00 00 */	cmpwi r0, 0
/* 8017FBE4  40 82 00 0C */	bne lbl_8017FBF0
/* 8017FBE8  38 60 00 00 */	li r3, 0
/* 8017FBEC  48 00 09 08 */	b lbl_801804F4
lbl_8017FBF0:
/* 8017FBF0  2C 00 00 02 */	cmpwi r0, 2
/* 8017FBF4  40 82 00 18 */	bne lbl_8017FC0C
/* 8017FBF8  7F A3 EB 78 */	mr r3, r29
/* 8017FBFC  80 9D 05 04 */	lwz r4, 0x504(r29)
/* 8017FC00  4B FE 34 29 */	bl SetTrimTypeForce__9dCamera_cFl
/* 8017FC04  38 60 00 01 */	li r3, 1
/* 8017FC08  48 00 08 EC */	b lbl_801804F4
lbl_8017FC0C:
/* 8017FC0C  7F C3 F3 78 */	mr r3, r30
/* 8017FC10  3C 80 80 39 */	lis r4, d_d_camera__stringBase0@ha /* 0x80393F68@ha */
/* 8017FC14  38 84 3F 68 */	addi r4, r4, d_d_camera__stringBase0@l /* 0x80393F68@l */
/* 8017FC18  38 84 03 37 */	addi r4, r4, 0x337
/* 8017FC1C  38 A0 00 00 */	li r5, 0
/* 8017FC20  38 C0 00 00 */	li r6, 0
/* 8017FC24  4B EC 7E F9 */	bl getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci
/* 8017FC28  2C 03 00 00 */	cmpwi r3, 0
/* 8017FC2C  40 80 00 0C */	bge lbl_8017FC38
/* 8017FC30  38 60 00 00 */	li r3, 0
/* 8017FC34  48 00 08 C0 */	b lbl_801804F4
lbl_8017FC38:
/* 8017FC38  80 1D 04 EC */	lwz r0, 0x4ec(r29)
/* 8017FC3C  7C 00 18 00 */	cmpw r0, r3
/* 8017FC40  41 82 00 20 */	beq lbl_8017FC60
/* 8017FC44  80 1D 06 0C */	lwz r0, 0x60c(r29)
/* 8017FC48  54 00 02 D2 */	rlwinm r0, r0, 0, 0xb, 9
/* 8017FC4C  90 1D 06 0C */	stw r0, 0x60c(r29)
/* 8017FC50  38 00 00 00 */	li r0, 0
/* 8017FC54  90 1D 01 74 */	stw r0, 0x174(r29)
/* 8017FC58  90 1D 01 60 */	stw r0, 0x160(r29)
/* 8017FC5C  90 1D 01 70 */	stw r0, 0x170(r29)
lbl_8017FC60:
/* 8017FC60  90 7D 04 EC */	stw r3, 0x4ec(r29)
/* 8017FC64  7F C3 F3 78 */	mr r3, r30
/* 8017FC68  80 9D 04 EC */	lwz r4, 0x4ec(r29)
/* 8017FC6C  38 BF 04 F0 */	addi r5, r31, 0x4f0
/* 8017FC70  38 C0 00 22 */	li r6, 0x22
/* 8017FC74  38 E0 00 00 */	li r7, 0
/* 8017FC78  39 00 00 00 */	li r8, 0
/* 8017FC7C  4B EC 81 95 */	bl getMyActIdx__16dEvent_manager_cFiPCPCciii
/* 8017FC80  7C 7F 1B 78 */	mr r31, r3
/* 8017FC84  80 BD 04 F4 */	lwz r5, 0x4f4(r29)
/* 8017FC88  3C 80 80 43 */	lis r4, data_8042C8F8@ha /* 0x8042C8F8@ha */
/* 8017FC8C  38 84 C8 F8 */	addi r4, r4, data_8042C8F8@l /* 0x8042C8F8@l */
/* 8017FC90  80 04 00 3C */	lwz r0, 0x3c(r4)
/* 8017FC94  7C 05 00 00 */	cmpw r5, r0
/* 8017FC98  41 82 00 70 */	beq lbl_8017FD08
/* 8017FC9C  80 04 00 40 */	lwz r0, 0x40(r4)
/* 8017FCA0  7C 05 00 00 */	cmpw r5, r0
/* 8017FCA4  41 82 00 64 */	beq lbl_8017FD08
/* 8017FCA8  80 04 00 44 */	lwz r0, 0x44(r4)
/* 8017FCAC  7C 05 00 00 */	cmpw r5, r0
/* 8017FCB0  41 82 00 58 */	beq lbl_8017FD08
/* 8017FCB4  80 04 00 4C */	lwz r0, 0x4c(r4)
/* 8017FCB8  7C 05 00 00 */	cmpw r5, r0
/* 8017FCBC  41 82 00 4C */	beq lbl_8017FD08
/* 8017FCC0  80 04 00 50 */	lwz r0, 0x50(r4)
/* 8017FCC4  7C 05 00 00 */	cmpw r5, r0
/* 8017FCC8  41 82 00 40 */	beq lbl_8017FD08
/* 8017FCCC  80 04 00 54 */	lwz r0, 0x54(r4)
/* 8017FCD0  7C 05 00 00 */	cmpw r5, r0
/* 8017FCD4  41 82 00 34 */	beq lbl_8017FD08
/* 8017FCD8  80 04 00 58 */	lwz r0, 0x58(r4)
/* 8017FCDC  7C 05 00 00 */	cmpw r5, r0
/* 8017FCE0  41 82 00 28 */	beq lbl_8017FD08
/* 8017FCE4  80 04 00 5C */	lwz r0, 0x5c(r4)
/* 8017FCE8  7C 05 00 00 */	cmpw r5, r0
/* 8017FCEC  41 82 00 1C */	beq lbl_8017FD08
/* 8017FCF0  80 04 00 60 */	lwz r0, 0x60(r4)
/* 8017FCF4  7C 05 00 00 */	cmpw r5, r0
/* 8017FCF8  41 82 00 10 */	beq lbl_8017FD08
/* 8017FCFC  80 04 00 48 */	lwz r0, 0x48(r4)
/* 8017FD00  7C 05 00 00 */	cmpw r5, r0
/* 8017FD04  40 82 00 18 */	bne lbl_8017FD1C
lbl_8017FD08:
/* 8017FD08  80 1D 04 F4 */	lwz r0, 0x4f4(r29)
/* 8017FD0C  2C 00 FF FF */	cmpwi r0, -1
/* 8017FD10  41 82 00 0C */	beq lbl_8017FD1C
/* 8017FD14  3B E0 00 1C */	li r31, 0x1c
/* 8017FD18  48 00 01 1C */	b lbl_8017FE34
lbl_8017FD1C:
/* 8017FD1C  3C 80 80 43 */	lis r4, data_8042C8F8@ha /* 0x8042C8F8@ha */
/* 8017FD20  38 84 C8 F8 */	addi r4, r4, data_8042C8F8@l /* 0x8042C8F8@l */
/* 8017FD24  80 04 00 38 */	lwz r0, 0x38(r4)
/* 8017FD28  7C 05 00 00 */	cmpw r5, r0
/* 8017FD2C  40 82 00 14 */	bne lbl_8017FD40
/* 8017FD30  2C 03 00 02 */	cmpwi r3, 2
/* 8017FD34  41 82 00 0C */	beq lbl_8017FD40
/* 8017FD38  3B E0 00 1C */	li r31, 0x1c
/* 8017FD3C  48 00 00 F8 */	b lbl_8017FE34
lbl_8017FD40:
/* 8017FD40  7F C3 F3 78 */	mr r3, r30
/* 8017FD44  80 9D 04 EC */	lwz r4, 0x4ec(r29)
/* 8017FD48  4B EC 80 05 */	bl getIsAddvance__16dEvent_manager_cFi
/* 8017FD4C  2C 03 00 00 */	cmpwi r3, 0
/* 8017FD50  41 82 00 E4 */	beq lbl_8017FE34
/* 8017FD54  38 00 00 00 */	li r0, 0
/* 8017FD58  98 1D 01 58 */	stb r0, 0x158(r29)
/* 8017FD5C  90 1D 01 74 */	stw r0, 0x174(r29)
/* 8017FD60  48 00 00 D4 */	b lbl_8017FE34
lbl_8017FD64:
/* 8017FD64  38 00 FF FF */	li r0, -1
/* 8017FD68  90 1D 04 EC */	stw r0, 0x4ec(r29)
/* 8017FD6C  80 1D 01 70 */	lwz r0, 0x170(r29)
/* 8017FD70  28 00 00 00 */	cmplwi r0, 0
/* 8017FD74  40 82 00 18 */	bne lbl_8017FD8C
/* 8017FD78  38 00 00 00 */	li r0, 0
/* 8017FD7C  98 1D 01 58 */	stb r0, 0x158(r29)
/* 8017FD80  90 1D 01 74 */	stw r0, 0x174(r29)
/* 8017FD84  90 1D 01 60 */	stw r0, 0x160(r29)
/* 8017FD88  90 1D 01 70 */	stw r0, 0x170(r29)
lbl_8017FD8C:
/* 8017FD8C  83 FD 05 00 */	lwz r31, 0x500(r29)
/* 8017FD90  80 9D 04 F4 */	lwz r4, 0x4f4(r29)
/* 8017FD94  3C 60 80 43 */	lis r3, data_8042C8F8@ha /* 0x8042C8F8@ha */
/* 8017FD98  38 63 C8 F8 */	addi r3, r3, data_8042C8F8@l /* 0x8042C8F8@l */
/* 8017FD9C  80 03 00 3C */	lwz r0, 0x3c(r3)
/* 8017FDA0  7C 04 00 00 */	cmpw r4, r0
/* 8017FDA4  41 82 00 70 */	beq lbl_8017FE14
/* 8017FDA8  80 03 00 40 */	lwz r0, 0x40(r3)
/* 8017FDAC  7C 04 00 00 */	cmpw r4, r0
/* 8017FDB0  41 82 00 64 */	beq lbl_8017FE14
/* 8017FDB4  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8017FDB8  7C 04 00 00 */	cmpw r4, r0
/* 8017FDBC  41 82 00 58 */	beq lbl_8017FE14
/* 8017FDC0  80 03 00 4C */	lwz r0, 0x4c(r3)
/* 8017FDC4  7C 04 00 00 */	cmpw r4, r0
/* 8017FDC8  41 82 00 4C */	beq lbl_8017FE14
/* 8017FDCC  80 03 00 50 */	lwz r0, 0x50(r3)
/* 8017FDD0  7C 04 00 00 */	cmpw r4, r0
/* 8017FDD4  41 82 00 40 */	beq lbl_8017FE14
/* 8017FDD8  80 03 00 54 */	lwz r0, 0x54(r3)
/* 8017FDDC  7C 04 00 00 */	cmpw r4, r0
/* 8017FDE0  41 82 00 34 */	beq lbl_8017FE14
/* 8017FDE4  80 03 00 58 */	lwz r0, 0x58(r3)
/* 8017FDE8  7C 04 00 00 */	cmpw r4, r0
/* 8017FDEC  41 82 00 28 */	beq lbl_8017FE14
/* 8017FDF0  80 03 00 5C */	lwz r0, 0x5c(r3)
/* 8017FDF4  7C 04 00 00 */	cmpw r4, r0
/* 8017FDF8  41 82 00 1C */	beq lbl_8017FE14
/* 8017FDFC  80 03 00 60 */	lwz r0, 0x60(r3)
/* 8017FE00  7C 04 00 00 */	cmpw r4, r0
/* 8017FE04  41 82 00 10 */	beq lbl_8017FE14
/* 8017FE08  80 03 00 48 */	lwz r0, 0x48(r3)
/* 8017FE0C  7C 04 00 00 */	cmpw r4, r0
/* 8017FE10  40 82 00 0C */	bne lbl_8017FE1C
lbl_8017FE14:
/* 8017FE14  3B E0 00 1C */	li r31, 0x1c
/* 8017FE18  48 00 00 1C */	b lbl_8017FE34
lbl_8017FE1C:
/* 8017FE1C  80 03 00 38 */	lwz r0, 0x38(r3)
/* 8017FE20  7C 04 00 00 */	cmpw r4, r0
/* 8017FE24  40 82 00 10 */	bne lbl_8017FE34
/* 8017FE28  2C 1F 00 02 */	cmpwi r31, 2
/* 8017FE2C  41 82 00 08 */	beq lbl_8017FE34
/* 8017FE30  3B E0 00 1C */	li r31, 0x1c
lbl_8017FE34:
/* 8017FE34  80 1D 01 70 */	lwz r0, 0x170(r29)
/* 8017FE38  28 00 00 00 */	cmplwi r0, 0
/* 8017FE3C  40 82 00 F4 */	bne lbl_8017FF30
/* 8017FE40  7F A3 EB 78 */	mr r3, r29
/* 8017FE44  38 9D 00 D0 */	addi r4, r29, 0xd0
/* 8017FE48  38 A0 00 01 */	li r5, 1
/* 8017FE4C  4B FE 4E 19 */	bl pushInfo__9dCamera_cFPQ29dCamera_c10dCamInfo_cs
/* 8017FE50  7F A3 EB 78 */	mr r3, r29
/* 8017FE54  38 9D 00 F0 */	addi r4, r29, 0xf0
/* 8017FE58  38 A0 00 00 */	li r5, 0
/* 8017FE5C  4B FE 4E 09 */	bl pushInfo__9dCamera_cFPQ29dCamera_c10dCamInfo_cs
/* 8017FE60  38 00 00 00 */	li r0, 0
/* 8017FE64  98 1D 04 E8 */	stb r0, 0x4e8(r29)
/* 8017FE68  90 1D 05 D4 */	stw r0, 0x5d4(r29)
/* 8017FE6C  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8017FE70  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 8017FE74  88 03 4F B3 */	lbz r0, 0x4fb3(r3)
/* 8017FE78  2C 00 FF FF */	cmpwi r0, -1
/* 8017FE7C  41 82 00 10 */	beq lbl_8017FE8C
/* 8017FE80  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 8017FE84  4B EC 36 55 */	bl searchMapEventData__14dEvt_control_cFUc
/* 8017FE88  90 7D 05 D4 */	stw r3, 0x5d4(r29)
lbl_8017FE8C:
/* 8017FE8C  80 7D 05 D4 */	lwz r3, 0x5d4(r29)
/* 8017FE90  28 03 00 00 */	cmplwi r3, 0
/* 8017FE94  41 82 00 90 */	beq lbl_8017FF24
/* 8017FE98  88 03 00 02 */	lbz r0, 2(r3)
/* 8017FE9C  2C 00 00 02 */	cmpwi r0, 2
/* 8017FEA0  41 82 00 20 */	beq lbl_8017FEC0
/* 8017FEA4  40 80 00 10 */	bge lbl_8017FEB4
/* 8017FEA8  2C 00 00 01 */	cmpwi r0, 1
/* 8017FEAC  40 80 00 24 */	bge lbl_8017FED0
/* 8017FEB0  48 00 00 40 */	b lbl_8017FEF0
lbl_8017FEB4:
/* 8017FEB4  2C 00 00 04 */	cmpwi r0, 4
/* 8017FEB8  40 80 00 38 */	bge lbl_8017FEF0
/* 8017FEBC  48 00 00 24 */	b lbl_8017FEE0
lbl_8017FEC0:
/* 8017FEC0  7F A3 EB 78 */	mr r3, r29
/* 8017FEC4  A8 9D 0A 4E */	lha r4, 0xa4e(r29)
/* 8017FEC8  48 00 08 15 */	bl setEventRecoveryTrans__9dCamera_cFs
/* 8017FECC  48 00 00 30 */	b lbl_8017FEFC
lbl_8017FED0:
/* 8017FED0  7F A3 EB 78 */	mr r3, r29
/* 8017FED4  A8 9D 0A 4C */	lha r4, 0xa4c(r29)
/* 8017FED8  48 00 08 05 */	bl setEventRecoveryTrans__9dCamera_cFs
/* 8017FEDC  48 00 00 20 */	b lbl_8017FEFC
lbl_8017FEE0:
/* 8017FEE0  7F A3 EB 78 */	mr r3, r29
/* 8017FEE4  38 80 00 01 */	li r4, 1
/* 8017FEE8  48 00 07 F5 */	bl setEventRecoveryTrans__9dCamera_cFs
/* 8017FEEC  48 00 00 10 */	b lbl_8017FEFC
lbl_8017FEF0:
/* 8017FEF0  7F A3 EB 78 */	mr r3, r29
/* 8017FEF4  38 80 00 00 */	li r4, 0
/* 8017FEF8  48 00 07 E5 */	bl setEventRecoveryTrans__9dCamera_cFs
lbl_8017FEFC:
/* 8017FEFC  80 7D 05 D4 */	lwz r3, 0x5d4(r29)
/* 8017FF00  88 03 00 00 */	lbz r0, 0(r3)
/* 8017FF04  28 00 00 00 */	cmplwi r0, 0
/* 8017FF08  40 82 00 28 */	bne lbl_8017FF30
/* 8017FF0C  88 03 00 0C */	lbz r0, 0xc(r3)
/* 8017FF10  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 8017FF14  41 82 00 1C */	beq lbl_8017FF30
/* 8017FF18  88 03 00 16 */	lbz r0, 0x16(r3)
/* 8017FF1C  90 1D 09 08 */	stw r0, 0x908(r29)
/* 8017FF20  48 00 00 10 */	b lbl_8017FF30
lbl_8017FF24:
/* 8017FF24  7F A3 EB 78 */	mr r3, r29
/* 8017FF28  38 80 00 00 */	li r4, 0
/* 8017FF2C  48 00 07 B1 */	bl setEventRecoveryTrans__9dCamera_cFs
lbl_8017FF30:
/* 8017FF30  2C 1F 00 00 */	cmpwi r31, 0
/* 8017FF34  41 80 00 0C */	blt lbl_8017FF40
/* 8017FF38  2C 1F 00 22 */	cmpwi r31, 0x22
/* 8017FF3C  41 80 00 20 */	blt lbl_8017FF5C
lbl_8017FF40:
/* 8017FF40  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8017FF44  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 8017FF48  38 63 4F F8 */	addi r3, r3, 0x4ff8
/* 8017FF4C  80 9D 04 EC */	lwz r4, 0x4ec(r29)
/* 8017FF50  4B EC 82 2D */	bl cutEnd__16dEvent_manager_cFi
/* 8017FF54  38 60 00 00 */	li r3, 0
/* 8017FF58  48 00 05 9C */	b lbl_801804F4
lbl_8017FF5C:
/* 8017FF5C  80 1D 01 74 */	lwz r0, 0x174(r29)
/* 8017FF60  28 00 00 00 */	cmplwi r0, 0
/* 8017FF64  40 82 03 08 */	bne lbl_8018026C
/* 8017FF68  7F A3 EB 78 */	mr r3, r29
/* 8017FF6C  38 81 00 14 */	addi r4, r1, 0x14
/* 8017FF70  3C A0 80 39 */	lis r5, d_d_camera__stringBase0@ha /* 0x80393F68@ha */
/* 8017FF74  38 A5 3F 68 */	addi r5, r5, d_d_camera__stringBase0@l /* 0x80393F68@l */
/* 8017FF78  38 A5 03 3E */	addi r5, r5, 0x33e
/* 8017FF7C  4B F0 8E 15 */	bl getEvFloatData__9dCamera_cFPfPc
/* 8017FF80  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8017FF84  41 82 00 88 */	beq lbl_8018000C
/* 8017FF88  C0 1D 00 5C */	lfs f0, 0x5c(r29)
/* 8017FF8C  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 8017FF90  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8017FF94  40 80 00 78 */	bge lbl_8018000C
/* 8017FF98  D0 3D 00 5C */	stfs f1, 0x5c(r29)
/* 8017FF9C  38 61 00 54 */	addi r3, r1, 0x54
/* 8017FFA0  38 9D 00 5C */	addi r4, r29, 0x5c
/* 8017FFA4  48 0F 1B 11 */	bl Xyz__7cSGlobeCFv
/* 8017FFA8  38 61 00 48 */	addi r3, r1, 0x48
/* 8017FFAC  38 9D 00 64 */	addi r4, r29, 0x64
/* 8017FFB0  38 A1 00 54 */	addi r5, r1, 0x54
/* 8017FFB4  48 0E 6B 31 */	bl __pl__4cXyzCFRC3Vec
/* 8017FFB8  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 8017FFBC  D0 1D 00 70 */	stfs f0, 0x70(r29)
/* 8017FFC0  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 8017FFC4  D0 1D 00 74 */	stfs f0, 0x74(r29)
/* 8017FFC8  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 8017FFCC  D0 1D 00 78 */	stfs f0, 0x78(r29)
/* 8017FFD0  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8017FFD4  D0 1D 00 28 */	stfs f0, 0x28(r29)
/* 8017FFD8  38 61 00 3C */	addi r3, r1, 0x3c
/* 8017FFDC  38 9D 00 28 */	addi r4, r29, 0x28
/* 8017FFE0  48 0F 1A D5 */	bl Xyz__7cSGlobeCFv
/* 8017FFE4  38 61 00 30 */	addi r3, r1, 0x30
/* 8017FFE8  38 9D 00 30 */	addi r4, r29, 0x30
/* 8017FFEC  38 A1 00 3C */	addi r5, r1, 0x3c
/* 8017FFF0  48 0E 6A F5 */	bl __pl__4cXyzCFRC3Vec
/* 8017FFF4  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 8017FFF8  D0 1D 00 3C */	stfs f0, 0x3c(r29)
/* 8017FFFC  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 80180000  D0 1D 00 40 */	stfs f0, 0x40(r29)
/* 80180004  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 80180008  D0 1D 00 44 */	stfs f0, 0x44(r29)
lbl_8018000C:
/* 8018000C  7F A3 EB 78 */	mr r3, r29
/* 80180010  38 81 00 78 */	addi r4, r1, 0x78
/* 80180014  3C A0 80 39 */	lis r5, d_d_camera__stringBase0@ha /* 0x80393F68@ha */
/* 80180018  38 C5 3F 68 */	addi r6, r5, d_d_camera__stringBase0@l /* 0x80393F68@l */
/* 8018001C  38 A6 03 47 */	addi r5, r6, 0x347
/* 80180020  38 C6 03 4C */	addi r6, r6, 0x34c
/* 80180024  4B F0 93 19 */	bl getEvStringData__9dCamera_cFPcPcPc
/* 80180028  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8018002C  41 82 00 98 */	beq lbl_801800C4
/* 80180030  80 61 00 78 */	lwz r3, 0x78(r1)
/* 80180034  3C 03 AC AC */	addis r0, r3, 0xacac
/* 80180038  28 00 41 4E */	cmplwi r0, 0x414e
/* 8018003C  40 82 00 10 */	bne lbl_8018004C
/* 80180040  38 00 00 00 */	li r0, 0
/* 80180044  90 1D 05 04 */	stw r0, 0x504(r29)
/* 80180048  48 00 00 DC */	b lbl_80180124
lbl_8018004C:
/* 8018004C  3C 03 A9 B7 */	addis r0, r3, 0xa9b7
/* 80180050  28 00 53 54 */	cmplwi r0, 0x5354
/* 80180054  40 82 00 10 */	bne lbl_80180064
/* 80180058  38 00 00 01 */	li r0, 1
/* 8018005C  90 1D 05 04 */	stw r0, 0x504(r29)
/* 80180060  48 00 00 C4 */	b lbl_80180124
lbl_80180064:
/* 80180064  3C 03 BC B7 */	addis r0, r3, 0xbcb7
/* 80180068  28 00 4E 45 */	cmplwi r0, 0x4e45
/* 8018006C  40 82 00 10 */	bne lbl_8018007C
/* 80180070  38 00 00 02 */	li r0, 2
/* 80180074  90 1D 05 04 */	stw r0, 0x504(r29)
/* 80180078  48 00 00 AC */	b lbl_80180124
lbl_8018007C:
/* 8018007C  3C 03 BB BB */	addis r0, r3, 0xbbbb
/* 80180080  28 00 4D 4F */	cmplwi r0, 0x4d4f
/* 80180084  40 82 00 10 */	bne lbl_80180094
/* 80180088  38 00 00 03 */	li r0, 3
/* 8018008C  90 1D 05 04 */	stw r0, 0x504(r29)
/* 80180090  48 00 00 94 */	b lbl_80180124
lbl_80180094:
/* 80180094  3C 03 B1 B1 */	addis r0, r3, 0xb1b1
/* 80180098  28 00 4E 45 */	cmplwi r0, 0x4e45
/* 8018009C  40 82 00 10 */	bne lbl_801800AC
/* 801800A0  38 00 00 04 */	li r0, 4
/* 801800A4  90 1D 05 04 */	stw r0, 0x504(r29)
/* 801800A8  48 00 00 7C */	b lbl_80180124
lbl_801800AC:
/* 801800AC  3C 03 B4 BB */	addis r0, r3, 0xb4bb
/* 801800B0  28 00 45 50 */	cmplwi r0, 0x4550
/* 801800B4  40 82 00 70 */	bne lbl_80180124
/* 801800B8  38 00 03 E7 */	li r0, 0x3e7
/* 801800BC  90 1D 05 04 */	stw r0, 0x504(r29)
/* 801800C0  48 00 00 64 */	b lbl_80180124
lbl_801800C4:
/* 801800C4  80 7D 05 D4 */	lwz r3, 0x5d4(r29)
/* 801800C8  28 03 00 00 */	cmplwi r3, 0
/* 801800CC  41 82 00 50 */	beq lbl_8018011C
/* 801800D0  88 03 00 01 */	lbz r0, 1(r3)
/* 801800D4  2C 00 00 01 */	cmpwi r0, 1
/* 801800D8  41 82 00 2C */	beq lbl_80180104
/* 801800DC  40 80 00 10 */	bge lbl_801800EC
/* 801800E0  2C 00 00 00 */	cmpwi r0, 0
/* 801800E4  40 80 00 14 */	bge lbl_801800F8
/* 801800E8  48 00 00 3C */	b lbl_80180124
lbl_801800EC:
/* 801800EC  2C 00 00 03 */	cmpwi r0, 3
/* 801800F0  40 80 00 34 */	bge lbl_80180124
/* 801800F4  48 00 00 1C */	b lbl_80180110
lbl_801800F8:
/* 801800F8  38 00 00 00 */	li r0, 0
/* 801800FC  90 1D 05 04 */	stw r0, 0x504(r29)
/* 80180100  48 00 00 24 */	b lbl_80180124
lbl_80180104:
/* 80180104  38 00 00 01 */	li r0, 1
/* 80180108  90 1D 05 04 */	stw r0, 0x504(r29)
/* 8018010C  48 00 00 18 */	b lbl_80180124
lbl_80180110:
/* 80180110  38 00 00 02 */	li r0, 2
/* 80180114  90 1D 05 04 */	stw r0, 0x504(r29)
/* 80180118  48 00 00 0C */	b lbl_80180124
lbl_8018011C:
/* 8018011C  38 00 00 02 */	li r0, 2
/* 80180120  90 1D 05 04 */	stw r0, 0x504(r29)
lbl_80180124:
/* 80180124  7F A3 EB 78 */	mr r3, r29
/* 80180128  38 81 00 10 */	addi r4, r1, 0x10
/* 8018012C  3C A0 80 39 */	lis r5, d_d_camera__stringBase0@ha /* 0x80393F68@ha */
/* 80180130  38 A5 3F 68 */	addi r5, r5, d_d_camera__stringBase0@l /* 0x80393F68@l */
/* 80180134  38 A5 03 54 */	addi r5, r5, 0x354
/* 80180138  38 C0 00 00 */	li r6, 0
/* 8018013C  4B F0 8F 51 */	bl getEvIntData__9dCamera_cFPiPci
/* 80180140  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80180144  B0 1D 01 14 */	sth r0, 0x114(r29)
/* 80180148  7F A3 EB 78 */	mr r3, r29
/* 8018014C  38 81 00 10 */	addi r4, r1, 0x10
/* 80180150  3C A0 80 39 */	lis r5, d_d_camera__stringBase0@ha /* 0x80393F68@ha */
/* 80180154  38 A5 3F 68 */	addi r5, r5, d_d_camera__stringBase0@l /* 0x80393F68@l */
/* 80180158  38 A5 03 5C */	addi r5, r5, 0x35c
/* 8018015C  38 C0 00 00 */	li r6, 0
/* 80180160  4B F0 8F 2D */	bl getEvIntData__9dCamera_cFPiPci
/* 80180164  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80180168  2C 00 00 00 */	cmpwi r0, 0
/* 8018016C  41 82 00 10 */	beq lbl_8018017C
/* 80180170  80 1D 06 0C */	lwz r0, 0x60c(r29)
/* 80180174  64 00 00 20 */	oris r0, r0, 0x20
/* 80180178  90 1D 06 0C */	stw r0, 0x60c(r29)
lbl_8018017C:
/* 8018017C  7F A3 EB 78 */	mr r3, r29
/* 80180180  38 9D 05 08 */	addi r4, r29, 0x508
/* 80180184  3C A0 80 39 */	lis r5, d_d_camera__stringBase0@ha /* 0x80393F68@ha */
/* 80180188  38 A5 3F 68 */	addi r5, r5, d_d_camera__stringBase0@l /* 0x80393F68@l */
/* 8018018C  38 A5 03 67 */	addi r5, r5, 0x367
/* 80180190  2C 1F 00 1B */	cmpwi r31, 0x1b
/* 80180194  38 C0 00 01 */	li r6, 1
/* 80180198  40 82 00 08 */	bne lbl_801801A0
/* 8018019C  38 C0 00 03 */	li r6, 3
lbl_801801A0:
/* 801801A0  4B F0 8E ED */	bl getEvIntData__9dCamera_cFPiPci
/* 801801A4  7F A3 EB 78 */	mr r3, r29
/* 801801A8  38 81 00 10 */	addi r4, r1, 0x10
/* 801801AC  3C A0 80 39 */	lis r5, d_d_camera__stringBase0@ha /* 0x80393F68@ha */
/* 801801B0  38 A5 3F 68 */	addi r5, r5, d_d_camera__stringBase0@l /* 0x80393F68@l */
/* 801801B4  38 A5 03 6F */	addi r5, r5, 0x36f
/* 801801B8  4B F0 8A F9 */	bl getEvIntData__9dCamera_cFPiPc
/* 801801BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801801C0  41 82 00 4C */	beq lbl_8018020C
/* 801801C4  80 01 00 10 */	lwz r0, 0x10(r1)
/* 801801C8  2C 00 00 00 */	cmpwi r0, 0
/* 801801CC  41 82 00 0C */	beq lbl_801801D8
/* 801801D0  2C 00 00 01 */	cmpwi r0, 1
/* 801801D4  40 82 00 1C */	bne lbl_801801F0
lbl_801801D8:
/* 801801D8  7F A3 EB 78 */	mr r3, r29
/* 801801DC  54 04 28 34 */	slwi r4, r0, 5
/* 801801E0  38 84 00 D0 */	addi r4, r4, 0xd0
/* 801801E4  7C 9D 22 14 */	add r4, r29, r4
/* 801801E8  38 A0 00 01 */	li r5, 1
/* 801801EC  4B FE 4A 79 */	bl pushInfo__9dCamera_cFPQ29dCamera_c10dCamInfo_cs
lbl_801801F0:
/* 801801F0  80 01 00 10 */	lwz r0, 0x10(r1)
/* 801801F4  2C 00 00 02 */	cmpwi r0, 2
/* 801801F8  40 82 00 14 */	bne lbl_8018020C
/* 801801FC  7F A3 EB 78 */	mr r3, r29
/* 80180200  38 9D 00 B0 */	addi r4, r29, 0xb0
/* 80180204  38 A0 00 01 */	li r5, 1
/* 80180208  4B FE 4A 5D */	bl pushInfo__9dCamera_cFPQ29dCamera_c10dCamInfo_cs
lbl_8018020C:
/* 8018020C  7F A3 EB 78 */	mr r3, r29
/* 80180210  38 81 00 10 */	addi r4, r1, 0x10
/* 80180214  3C A0 80 39 */	lis r5, d_d_camera__stringBase0@ha /* 0x80393F68@ha */
/* 80180218  38 A5 3F 68 */	addi r5, r5, d_d_camera__stringBase0@l /* 0x80393F68@l */
/* 8018021C  38 A5 03 77 */	addi r5, r5, 0x377
/* 80180220  4B F0 8A 91 */	bl getEvIntData__9dCamera_cFPiPc
/* 80180224  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80180228  41 82 00 44 */	beq lbl_8018026C
/* 8018022C  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80180230  2C 00 00 00 */	cmpwi r0, 0
/* 80180234  41 82 00 0C */	beq lbl_80180240
/* 80180238  2C 00 00 01 */	cmpwi r0, 1
/* 8018023C  40 82 00 18 */	bne lbl_80180254
lbl_80180240:
/* 80180240  7F A3 EB 78 */	mr r3, r29
/* 80180244  54 04 28 34 */	slwi r4, r0, 5
/* 80180248  38 84 00 D0 */	addi r4, r4, 0xd0
/* 8018024C  7C 9D 22 14 */	add r4, r29, r4
/* 80180250  4B FE 4A 5D */	bl popInfo__9dCamera_cFPQ29dCamera_c10dCamInfo_c
lbl_80180254:
/* 80180254  80 01 00 10 */	lwz r0, 0x10(r1)
/* 80180258  2C 00 00 02 */	cmpwi r0, 2
/* 8018025C  40 82 00 10 */	bne lbl_8018026C
/* 80180260  7F A3 EB 78 */	mr r3, r29
/* 80180264  38 9D 00 B0 */	addi r4, r29, 0xb0
/* 80180268  4B FE 4A 45 */	bl popInfo__9dCamera_cFPQ29dCamera_c10dCamInfo_c
lbl_8018026C:
/* 8018026C  7F A3 EB 78 */	mr r3, r29
/* 80180270  80 9D 05 04 */	lwz r4, 0x504(r29)
/* 80180274  4B FE 2D B5 */	bl SetTrimTypeForce__9dCamera_cFl
/* 80180278  7F A3 EB 78 */	mr r3, r29
/* 8018027C  38 81 00 0C */	addi r4, r1, 0xc
/* 80180280  3C A0 80 39 */	lis r5, d_d_camera__stringBase0@ha /* 0x80393F68@ha */
/* 80180284  38 A5 3F 68 */	addi r5, r5, d_d_camera__stringBase0@l /* 0x80393F68@l */
/* 80180288  38 A5 03 7F */	addi r5, r5, 0x37f
/* 8018028C  38 C0 00 00 */	li r6, 0
/* 80180290  4B F0 8D FD */	bl getEvIntData__9dCamera_cFPiPci
/* 80180294  80 01 00 0C */	lwz r0, 0xc(r1)
/* 80180298  2C 00 00 00 */	cmpwi r0, 0
/* 8018029C  41 82 00 20 */	beq lbl_801802BC
/* 801802A0  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 801802A4  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 801802A8  80 03 5D 7C */	lwz r0, 0x5d7c(r3)
/* 801802AC  60 00 00 02 */	ori r0, r0, 2
/* 801802B0  90 03 5D 7C */	stw r0, 0x5d7c(r3)
/* 801802B4  64 00 00 01 */	oris r0, r0, 1
/* 801802B8  90 03 5D 7C */	stw r0, 0x5d7c(r3)
lbl_801802BC:
/* 801802BC  7F A3 EB 78 */	mr r3, r29
/* 801802C0  38 81 00 0C */	addi r4, r1, 0xc
/* 801802C4  3C A0 80 39 */	lis r5, d_d_camera__stringBase0@ha /* 0x80393F68@ha */
/* 801802C8  38 A5 3F 68 */	addi r5, r5, d_d_camera__stringBase0@l /* 0x80393F68@l */
/* 801802CC  38 A5 03 8A */	addi r5, r5, 0x38a
/* 801802D0  38 C0 00 00 */	li r6, 0
/* 801802D4  4B F0 8D B9 */	bl getEvIntData__9dCamera_cFPiPci
/* 801802D8  88 1D 01 58 */	lbz r0, 0x158(r29)
/* 801802DC  28 00 00 00 */	cmplwi r0, 0
/* 801802E0  41 82 00 1C */	beq lbl_801802FC
/* 801802E4  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 801802E8  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 801802EC  80 03 5D 7C */	lwz r0, 0x5d7c(r3)
/* 801802F0  60 00 00 04 */	ori r0, r0, 4
/* 801802F4  90 03 5D 7C */	stw r0, 0x5d7c(r3)
/* 801802F8  48 00 00 18 */	b lbl_80180310
lbl_801802FC:
/* 801802FC  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80180300  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80180304  80 03 5D 7C */	lwz r0, 0x5d7c(r3)
/* 80180308  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 8018030C  90 03 5D 7C */	stw r0, 0x5d7c(r3)
lbl_80180310:
/* 80180310  80 1D 06 0C */	lwz r0, 0x60c(r29)
/* 80180314  54 00 02 90 */	rlwinm r0, r0, 0, 0xa, 8
/* 80180318  90 1D 06 0C */	stw r0, 0x60c(r29)
/* 8018031C  80 1D 05 08 */	lwz r0, 0x508(r29)
/* 80180320  2C 00 00 03 */	cmpwi r0, 3
/* 80180324  41 82 00 40 */	beq lbl_80180364
/* 80180328  40 80 00 14 */	bge lbl_8018033C
/* 8018032C  2C 00 00 01 */	cmpwi r0, 1
/* 80180330  41 82 00 1C */	beq lbl_8018034C
/* 80180334  40 80 00 24 */	bge lbl_80180358
/* 80180338  48 00 00 54 */	b lbl_8018038C
lbl_8018033C:
/* 8018033C  2C 00 00 05 */	cmpwi r0, 5
/* 80180340  41 82 00 3C */	beq lbl_8018037C
/* 80180344  40 80 00 48 */	bge lbl_8018038C
/* 80180348  48 00 00 28 */	b lbl_80180370
lbl_8018034C:
/* 8018034C  38 00 40 07 */	li r0, 0x4007
/* 80180350  90 1D 00 88 */	stw r0, 0x88(r29)
/* 80180354  48 00 00 40 */	b lbl_80180394
lbl_80180358:
/* 80180358  38 00 40 17 */	li r0, 0x4017
/* 8018035C  90 1D 00 88 */	stw r0, 0x88(r29)
/* 80180360  48 00 00 34 */	b lbl_80180394
lbl_80180364:
/* 80180364  38 00 00 00 */	li r0, 0
/* 80180368  90 1D 00 88 */	stw r0, 0x88(r29)
/* 8018036C  48 00 00 28 */	b lbl_80180394
lbl_80180370:
/* 80180370  38 00 00 04 */	li r0, 4
/* 80180374  90 1D 00 88 */	stw r0, 0x88(r29)
/* 80180378  48 00 00 1C */	b lbl_80180394
lbl_8018037C:
/* 8018037C  3C 60 00 01 */	lis r3, 0x0001 /* 0x0000C007@ha */
/* 80180380  38 03 C0 07 */	addi r0, r3, 0xC007 /* 0x0000C007@l */
/* 80180384  90 1D 00 88 */	stw r0, 0x88(r29)
/* 80180388  48 00 00 0C */	b lbl_80180394
lbl_8018038C:
/* 8018038C  38 00 40 01 */	li r0, 0x4001
/* 80180390  90 1D 00 88 */	stw r0, 0x88(r29)
lbl_80180394:
/* 80180394  80 1D 00 88 */	lwz r0, 0x88(r29)
/* 80180398  70 00 80 B7 */	andi. r0, r0, 0x80b7
/* 8018039C  90 1D 00 88 */	stw r0, 0x88(r29)
/* 801803A0  7F A3 EB 78 */	mr r3, r29
/* 801803A4  1C 1F 00 0C */	mulli r0, r31, 0xc
/* 801803A8  39 81 00 A0 */	addi r12, r1, 0xa0
/* 801803AC  7D 8C 02 14 */	add r12, r12, r0
/* 801803B0  48 1E 1C D5 */	bl __ptmf_scall
/* 801803B4  60 00 00 00 */	nop 
/* 801803B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801803BC  41 82 00 88 */	beq lbl_80180444
/* 801803C0  38 00 00 01 */	li r0, 1
/* 801803C4  98 1D 01 58 */	stb r0, 0x158(r29)
/* 801803C8  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 801803CC  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 801803D0  38 63 4F F8 */	addi r3, r3, 0x4ff8
/* 801803D4  80 9D 04 EC */	lwz r4, 0x4ec(r29)
/* 801803D8  4B EC 7D A5 */	bl cutEnd__16dEvent_manager_cFi
/* 801803DC  80 7D 05 D4 */	lwz r3, 0x5d4(r29)
/* 801803E0  28 03 00 00 */	cmplwi r3, 0
/* 801803E4  41 82 00 58 */	beq lbl_8018043C
/* 801803E8  88 03 00 03 */	lbz r0, 3(r3)
/* 801803EC  2C 00 00 02 */	cmpwi r0, 2
/* 801803F0  41 82 00 20 */	beq lbl_80180410
/* 801803F4  40 80 00 10 */	bge lbl_80180404
/* 801803F8  2C 00 00 01 */	cmpwi r0, 1
/* 801803FC  40 80 00 20 */	bge lbl_8018041C
/* 80180400  48 00 00 34 */	b lbl_80180434
lbl_80180404:
/* 80180404  2C 00 00 04 */	cmpwi r0, 4
/* 80180408  40 80 00 2C */	bge lbl_80180434
/* 8018040C  48 00 00 1C */	b lbl_80180428
lbl_80180410:
/* 80180410  A8 1D 0A 4E */	lha r0, 0xa4e(r29)
/* 80180414  B0 1D 01 14 */	sth r0, 0x114(r29)
/* 80180418  48 00 00 24 */	b lbl_8018043C
lbl_8018041C:
/* 8018041C  A8 1D 0A 4C */	lha r0, 0xa4c(r29)
/* 80180420  B0 1D 01 14 */	sth r0, 0x114(r29)
/* 80180424  48 00 00 18 */	b lbl_8018043C
lbl_80180428:
/* 80180428  38 00 00 01 */	li r0, 1
/* 8018042C  B0 1D 01 14 */	sth r0, 0x114(r29)
/* 80180430  48 00 00 0C */	b lbl_8018043C
lbl_80180434:
/* 80180434  38 00 00 00 */	li r0, 0
/* 80180438  B0 1D 01 14 */	sth r0, 0x114(r29)
lbl_8018043C:
/* 8018043C  38 00 00 01 */	li r0, 1
/* 80180440  98 1D 04 E8 */	stb r0, 0x4e8(r29)
lbl_80180444:
/* 80180444  80 1D 06 0C */	lwz r0, 0x60c(r29)
/* 80180448  54 00 00 43 */	rlwinm. r0, r0, 0, 1, 1
/* 8018044C  41 82 00 A4 */	beq lbl_801804F0
/* 80180450  38 61 00 84 */	addi r3, r1, 0x84
/* 80180454  38 9D 00 64 */	addi r4, r29, 0x64
/* 80180458  38 BD 00 70 */	addi r5, r29, 0x70
/* 8018045C  48 0E EE 4D */	bl __ct__8cM3dGLinFRC4cXyzRC4cXyz
/* 80180460  38 61 00 24 */	addi r3, r1, 0x24
/* 80180464  7F A4 EB 78 */	mr r4, r29
/* 80180468  80 BD 01 80 */	lwz r5, 0x180(r29)
/* 8018046C  4B F1 72 B1 */	bl attentionPos__9dCamera_cFP10fopAc_ac_c
/* 80180470  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80180474  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 80180478  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8018047C  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 80180480  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 80180484  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 80180488  38 61 00 84 */	addi r3, r1, 0x84
/* 8018048C  38 81 00 6C */	addi r4, r1, 0x6c
/* 80180490  38 A1 00 60 */	addi r5, r1, 0x60
/* 80180494  38 C1 00 08 */	addi r6, r1, 8
/* 80180498  48 0E 82 79 */	bl cM3d_Len3dSqPntAndSegLine__FPC8cM3dGLinPC3VecP3VecPf
/* 8018049C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801804A0  41 82 00 38 */	beq lbl_801804D8
/* 801804A4  C0 01 00 60 */	lfs f0, 0x60(r1)
/* 801804A8  D0 1D 00 64 */	stfs f0, 0x64(r29)
/* 801804AC  C0 01 00 64 */	lfs f0, 0x64(r1)
/* 801804B0  D0 1D 00 68 */	stfs f0, 0x68(r29)
/* 801804B4  C0 01 00 68 */	lfs f0, 0x68(r1)
/* 801804B8  D0 1D 00 6C */	stfs f0, 0x6c(r29)
/* 801804BC  38 61 00 18 */	addi r3, r1, 0x18
/* 801804C0  38 9D 00 70 */	addi r4, r29, 0x70
/* 801804C4  38 BD 00 64 */	addi r5, r29, 0x64
/* 801804C8  48 0E 66 6D */	bl __mi__4cXyzCFRC3Vec
/* 801804CC  38 7D 00 5C */	addi r3, r29, 0x5c
/* 801804D0  38 81 00 18 */	addi r4, r1, 0x18
/* 801804D4  48 0F 15 9D */	bl Val__7cSGlobeFRC4cXyz
lbl_801804D8:
/* 801804D8  80 1D 06 0C */	lwz r0, 0x60c(r29)
/* 801804DC  54 00 00 80 */	rlwinm r0, r0, 0, 2, 0
/* 801804E0  90 1D 06 0C */	stw r0, 0x60c(r29)
/* 801804E4  3C 60 80 3A */	lis r3, __vt__8cM3dGLin@ha /* 0x803A78F8@ha */
/* 801804E8  38 03 78 F8 */	addi r0, r3, __vt__8cM3dGLin@l /* 0x803A78F8@l */
/* 801804EC  90 01 00 9C */	stw r0, 0x9c(r1)
lbl_801804F0:
/* 801804F0  38 60 00 01 */	li r3, 1
lbl_801804F4:
/* 801804F4  39 61 02 50 */	addi r11, r1, 0x250
/* 801804F8  48 1E 1D 31 */	bl _restgpr_29
/* 801804FC  80 01 02 54 */	lwz r0, 0x254(r1)
/* 80180500  7C 08 03 A6 */	mtlr r0
/* 80180504  38 21 02 50 */	addi r1, r1, 0x250
/* 80180508  4E 80 00 20 */	blr 
