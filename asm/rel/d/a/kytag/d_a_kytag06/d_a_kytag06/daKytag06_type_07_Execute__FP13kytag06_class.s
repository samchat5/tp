lbl_808586F0:
/* 808586F0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 808586F4  7C 08 02 A6 */	mflr r0
/* 808586F8  90 01 00 44 */	stw r0, 0x44(r1)
/* 808586FC  39 61 00 40 */	addi r11, r1, 0x40
/* 80858700  4B B0 9A DD */	bl _savegpr_29
/* 80858704  7C 7D 1B 78 */	mr r29, r3
/* 80858708  3C 60 80 86 */	lis r3, lit_3740@ha /* 0x80859E78@ha */
/* 8085870C  3B E3 9E 78 */	addi r31, r3, lit_3740@l /* 0x80859E78@l */
/* 80858710  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 80858714  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80858718  C0 23 00 34 */	lfs f1, 0x34(r3)
/* 8085871C  83 C3 5D 74 */	lwz r30, 0x5d74(r3)
/* 80858720  80 1D 05 74 */	lwz r0, 0x574(r29)
/* 80858724  2C 00 00 00 */	cmpwi r0, 0
/* 80858728  40 82 00 30 */	bne lbl_80858758
/* 8085872C  C0 1F 00 60 */	lfs f0, 0x60(r31)
/* 80858730  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80858734  41 81 00 10 */	bgt lbl_80858744
/* 80858738  C0 1F 00 64 */	lfs f0, 0x64(r31)
/* 8085873C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80858740  40 80 00 10 */	bge lbl_80858750
lbl_80858744:
/* 80858744  38 00 00 01 */	li r0, 1
/* 80858748  98 1D 05 91 */	stb r0, 0x591(r29)
/* 8085874C  48 00 00 0C */	b lbl_80858758
lbl_80858750:
/* 80858750  38 00 00 00 */	li r0, 0
/* 80858754  98 1D 05 91 */	stb r0, 0x591(r29)
lbl_80858758:
/* 80858758  88 1D 05 90 */	lbz r0, 0x590(r29)
/* 8085875C  2C 00 00 02 */	cmpwi r0, 2
/* 80858760  41 82 00 A0 */	beq lbl_80858800
/* 80858764  40 80 00 14 */	bge lbl_80858778
/* 80858768  2C 00 00 00 */	cmpwi r0, 0
/* 8085876C  41 82 00 18 */	beq lbl_80858784
/* 80858770  40 80 00 58 */	bge lbl_808587C8
/* 80858774  48 00 01 10 */	b lbl_80858884
lbl_80858778:
/* 80858778  2C 00 00 04 */	cmpwi r0, 4
/* 8085877C  40 80 01 08 */	bge lbl_80858884
/* 80858780  48 00 00 C0 */	b lbl_80858840
lbl_80858784:
/* 80858784  88 1D 05 91 */	lbz r0, 0x591(r29)
/* 80858788  28 00 00 00 */	cmplwi r0, 0
/* 8085878C  41 82 00 F8 */	beq lbl_80858884
/* 80858790  38 7D 05 6C */	addi r3, r29, 0x56c
/* 80858794  C0 3F 00 68 */	lfs f1, 0x68(r31)
/* 80858798  C0 5F 00 4C */	lfs f2, 0x4c(r31)
/* 8085879C  C0 7F 00 50 */	lfs f3, 0x50(r31)
/* 808587A0  C0 9F 00 6C */	lfs f4, 0x6c(r31)
/* 808587A4  4B A1 71 D9 */	bl cLib_addCalc__FPfffff
/* 808587A8  C0 3D 05 6C */	lfs f1, 0x56c(r29)
/* 808587AC  C0 1F 00 70 */	lfs f0, 0x70(r31)
/* 808587B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 808587B4  40 81 00 D0 */	ble lbl_80858884
/* 808587B8  88 7D 05 90 */	lbz r3, 0x590(r29)
/* 808587BC  38 03 00 01 */	addi r0, r3, 1
/* 808587C0  98 1D 05 90 */	stb r0, 0x590(r29)
/* 808587C4  48 00 00 C0 */	b lbl_80858884
lbl_808587C8:
/* 808587C8  38 7D 05 6C */	addi r3, r29, 0x56c
/* 808587CC  C0 3F 00 74 */	lfs f1, 0x74(r31)
/* 808587D0  C0 5F 00 4C */	lfs f2, 0x4c(r31)
/* 808587D4  C0 7F 00 78 */	lfs f3, 0x78(r31)
/* 808587D8  C0 9F 00 6C */	lfs f4, 0x6c(r31)
/* 808587DC  4B A1 71 A1 */	bl cLib_addCalc__FPfffff
/* 808587E0  C0 3D 05 6C */	lfs f1, 0x56c(r29)
/* 808587E4  C0 1F 00 7C */	lfs f0, 0x7c(r31)
/* 808587E8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 808587EC  40 80 00 98 */	bge lbl_80858884
/* 808587F0  88 7D 05 90 */	lbz r3, 0x590(r29)
/* 808587F4  38 03 00 01 */	addi r0, r3, 1
/* 808587F8  98 1D 05 90 */	stb r0, 0x590(r29)
/* 808587FC  48 00 00 88 */	b lbl_80858884
lbl_80858800:
/* 80858800  38 7D 05 6C */	addi r3, r29, 0x56c
/* 80858804  C0 3F 00 50 */	lfs f1, 0x50(r31)
/* 80858808  C0 5F 00 4C */	lfs f2, 0x4c(r31)
/* 8085880C  C0 7F 00 78 */	lfs f3, 0x78(r31)
/* 80858810  C0 9F 00 6C */	lfs f4, 0x6c(r31)
/* 80858814  4B A1 71 69 */	bl cLib_addCalc__FPfffff
/* 80858818  C0 3D 05 6C */	lfs f1, 0x56c(r29)
/* 8085881C  C0 1F 00 54 */	lfs f0, 0x54(r31)
/* 80858820  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80858824  40 81 00 60 */	ble lbl_80858884
/* 80858828  C0 1F 00 50 */	lfs f0, 0x50(r31)
/* 8085882C  D0 1D 05 6C */	stfs f0, 0x56c(r29)
/* 80858830  88 7D 05 90 */	lbz r3, 0x590(r29)
/* 80858834  38 03 00 01 */	addi r0, r3, 1
/* 80858838  98 1D 05 90 */	stb r0, 0x590(r29)
/* 8085883C  48 00 00 48 */	b lbl_80858884
lbl_80858840:
/* 80858840  88 1D 05 91 */	lbz r0, 0x591(r29)
/* 80858844  28 00 00 00 */	cmplwi r0, 0
/* 80858848  40 82 00 3C */	bne lbl_80858884
/* 8085884C  38 7D 05 6C */	addi r3, r29, 0x56c
/* 80858850  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 80858854  C0 5F 00 4C */	lfs f2, 0x4c(r31)
/* 80858858  C0 7F 00 50 */	lfs f3, 0x50(r31)
/* 8085885C  C0 9F 00 6C */	lfs f4, 0x6c(r31)
/* 80858860  4B A1 71 1D */	bl cLib_addCalc__FPfffff
/* 80858864  C0 3D 05 6C */	lfs f1, 0x56c(r29)
/* 80858868  C0 1F 00 40 */	lfs f0, 0x40(r31)
/* 8085886C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80858870  40 80 00 14 */	bge lbl_80858884
/* 80858874  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 80858878  D0 1D 05 6C */	stfs f0, 0x56c(r29)
/* 8085887C  38 00 00 00 */	li r0, 0
/* 80858880  98 1D 05 90 */	stb r0, 0x590(r29)
lbl_80858884:
/* 80858884  C0 1F 00 80 */	lfs f0, 0x80(r31)
/* 80858888  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8085888C  C0 1F 00 84 */	lfs f0, 0x84(r31)
/* 80858890  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80858894  C0 1F 00 88 */	lfs f0, 0x88(r31)
/* 80858898  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8085889C  38 00 00 58 */	li r0, 0x58
/* 808588A0  98 01 00 08 */	stb r0, 8(r1)
/* 808588A4  38 00 00 4C */	li r0, 0x4c
/* 808588A8  98 01 00 09 */	stb r0, 9(r1)
/* 808588AC  38 00 00 32 */	li r0, 0x32
/* 808588B0  98 01 00 0A */	stb r0, 0xa(r1)
/* 808588B4  38 00 00 FF */	li r0, 0xff
/* 808588B8  98 01 00 0B */	stb r0, 0xb(r1)
/* 808588BC  7F A3 EB 78 */	mr r3, r29
/* 808588C0  4B FF FE 05 */	bl daKytag06_type_07_wether_Execute__FP13kytag06_class
/* 808588C4  28 1E 00 00 */	cmplwi r30, 0
/* 808588C8  41 82 00 C4 */	beq lbl_8085898C
/* 808588CC  C0 3E 00 DC */	lfs f1, 0xdc(r30)
/* 808588D0  C0 1F 00 14 */	lfs f0, 0x14(r31)
/* 808588D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 808588D8  40 81 00 98 */	ble lbl_80858970
/* 808588DC  38 61 00 0C */	addi r3, r1, 0xc
/* 808588E0  38 81 00 08 */	addi r4, r1, 8
/* 808588E4  C0 3F 00 8C */	lfs f1, 0x8c(r31)
/* 808588E8  C0 1D 05 6C */	lfs f0, 0x56c(r29)
/* 808588EC  EC 21 00 32 */	fmuls f1, f1, f0
/* 808588F0  38 A0 00 00 */	li r5, 0
/* 808588F4  4B 95 14 6D */	bl dKy_BossLight_set__FP4cXyzP8_GXColorfUc
/* 808588F8  C0 7F 00 90 */	lfs f3, 0x90(r31)
/* 808588FC  C0 1F 00 94 */	lfs f0, 0x94(r31)
/* 80858900  C0 5D 05 6C */	lfs f2, 0x56c(r29)
/* 80858904  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80858908  EC 03 00 2A */	fadds f0, f3, f0
/* 8085890C  FC 00 00 1E */	fctiwz f0, f0
/* 80858910  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 80858914  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80858918  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8085891C  3C 60 80 43 */	lis r3, g_env_light@ha /* 0x8042CA54@ha */
/* 80858920  38 63 CA 54 */	addi r3, r3, g_env_light@l /* 0x8042CA54@l */
/* 80858924  B0 03 11 20 */	sth r0, 0x1120(r3)
/* 80858928  C0 3F 00 98 */	lfs f1, 0x98(r31)
/* 8085892C  C0 1F 00 9C */	lfs f0, 0x9c(r31)
/* 80858930  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80858934  EC 01 00 2A */	fadds f0, f1, f0
/* 80858938  FC 00 00 1E */	fctiwz f0, f0
/* 8085893C  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80858940  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80858944  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80858948  B0 03 11 22 */	sth r0, 0x1122(r3)
/* 8085894C  C0 1F 00 A0 */	lfs f0, 0xa0(r31)
/* 80858950  EC 00 00 B2 */	fmuls f0, f0, f2
/* 80858954  EC 03 00 2A */	fadds f0, f3, f0
/* 80858958  FC 00 00 1E */	fctiwz f0, f0
/* 8085895C  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 80858960  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80858964  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 80858968  B0 03 11 24 */	sth r0, 0x1124(r3)
/* 8085896C  48 00 00 20 */	b lbl_8085898C
lbl_80858970:
/* 80858970  38 00 00 00 */	li r0, 0
/* 80858974  3C 60 80 43 */	lis r3, g_env_light@ha /* 0x8042CA54@ha */
/* 80858978  38 63 CA 54 */	addi r3, r3, g_env_light@l /* 0x8042CA54@l */
/* 8085897C  B0 03 11 20 */	sth r0, 0x1120(r3)
/* 80858980  B0 03 11 22 */	sth r0, 0x1122(r3)
/* 80858984  B0 03 11 24 */	sth r0, 0x1124(r3)
/* 80858988  90 03 0E D8 */	stw r0, 0xed8(r3)
lbl_8085898C:
/* 8085898C  39 61 00 40 */	addi r11, r1, 0x40
/* 80858990  4B B0 98 99 */	bl _restgpr_29
/* 80858994  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80858998  7C 08 03 A6 */	mtlr r0
/* 8085899C  38 21 00 40 */	addi r1, r1, 0x40
/* 808589A0  4E 80 00 20 */	blr 
