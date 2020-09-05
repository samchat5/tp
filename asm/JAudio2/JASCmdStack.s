.include "macros.inc"

.section .text, "ax" # 80291060


.global JASPortCmd_NS_execAllCommand
JASPortCmd_NS_execAllCommand:
/* 80291060 0028DFA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80291064 0028DFA4  7C 08 02 A6 */	mflr r0
/* 80291068 0028DFA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8029106C 0028DFAC  3C 60 80 43 */	lis r3, lbl_80431684@ha
/* 80291070 0028DFB0  38 63 16 84 */	addi r3, r3, lbl_80431684@l
/* 80291074 0028DFB4  48 00 00 21 */	bl JASPortCmd_NS_TPortHead_NS_execCommandOnce
/* 80291078 0028DFB8  3C 60 80 43 */	lis r3, lbl_8043169C@ha
/* 8029107C 0028DFBC  38 63 16 9C */	addi r3, r3, lbl_8043169C@l
/* 80291080 0028DFC0  48 00 00 8D */	bl JASPortCmd_NS_TPortHead_NS_execCommandStay
/* 80291084 0028DFC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80291088 0028DFC8  7C 08 03 A6 */	mtlr r0
/* 8029108C 0028DFCC  38 21 00 10 */	addi r1, r1, 0x10
/* 80291090 0028DFD0  4E 80 00 20 */	blr 

.global JASPortCmd_NS_TPortHead_NS_execCommandOnce
JASPortCmd_NS_TPortHead_NS_execCommandOnce:
/* 80291094 0028DFD4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80291098 0028DFD8  7C 08 02 A6 */	mflr r0
/* 8029109C 0028DFDC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802910A0 0028DFE0  39 61 00 20 */	addi r11, r1, 0x20
/* 802910A4 0028DFE4  48 0D 11 39 */	bl _savegpr_29
/* 802910A8 0028DFE8  7C 7D 1B 78 */	mr r29, r3
/* 802910AC 0028DFEC  48 0A C6 49 */	bl __RAS_OSDisableInterrupts_begin 
/* 802910B0 0028DFF0  90 61 00 08 */	stw r3, 8(r1)
/* 802910B4 0028DFF4  83 DD 00 00 */	lwz r30, 0(r29)
/* 802910B8 0028DFF8  48 00 00 2C */	b lbl_802910E4
lbl_802910BC:
/* 802910BC 0028DFFC  83 FE 00 0C */	lwz r31, 0xc(r30)
/* 802910C0 0028E000  80 9E 00 00 */	lwz r4, 0(r30)
/* 802910C4 0028E004  80 64 00 14 */	lwz r3, 0x14(r4)
/* 802910C8 0028E008  81 84 00 10 */	lwz r12, 0x10(r4)
/* 802910CC 0028E00C  7D 89 03 A6 */	mtctr r12
/* 802910D0 0028E010  4E 80 04 21 */	bctrl 
/* 802910D4 0028E014  7F A3 EB 78 */	mr r3, r29
/* 802910D8 0028E018  7F C4 F3 78 */	mr r4, r30
/* 802910DC 0028E01C  48 04 B0 81 */	bl JSUPtrList_NS_remove
/* 802910E0 0028E020  7F FE FB 78 */	mr r30, r31
lbl_802910E4:
/* 802910E4 0028E024  28 1E 00 00 */	cmplwi r30, 0
/* 802910E8 0028E028  40 82 FF D4 */	bne lbl_802910BC
/* 802910EC 0028E02C  80 61 00 08 */	lwz r3, 8(r1)
/* 802910F0 0028E030  48 0A C6 2D */	bl OSRestoreInterrupts
/* 802910F4 0028E034  39 61 00 20 */	addi r11, r1, 0x20
/* 802910F8 0028E038  48 0D 11 31 */	bl _restgpr_29
/* 802910FC 0028E03C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80291100 0028E040  7C 08 03 A6 */	mtlr r0
/* 80291104 0028E044  38 21 00 20 */	addi r1, r1, 0x20
/* 80291108 0028E048  4E 80 00 20 */	blr 

.global JASPortCmd_NS_TPortHead_NS_execCommandStay
JASPortCmd_NS_TPortHead_NS_execCommandStay:
/* 8029110C 0028E04C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80291110 0028E050  7C 08 02 A6 */	mflr r0
/* 80291114 0028E054  90 01 00 24 */	stw r0, 0x24(r1)
/* 80291118 0028E058  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8029111C 0028E05C  7C 7F 1B 78 */	mr r31, r3
/* 80291120 0028E060  48 0A C5 D5 */	bl __RAS_OSDisableInterrupts_begin 
/* 80291124 0028E064  90 61 00 08 */	stw r3, 8(r1)
/* 80291128 0028E068  83 FF 00 00 */	lwz r31, 0(r31)
/* 8029112C 0028E06C  48 00 00 1C */	b lbl_80291148
lbl_80291130:
/* 80291130 0028E070  80 9F 00 00 */	lwz r4, 0(r31)
/* 80291134 0028E074  80 64 00 14 */	lwz r3, 0x14(r4)
/* 80291138 0028E078  81 84 00 10 */	lwz r12, 0x10(r4)
/* 8029113C 0028E07C  7D 89 03 A6 */	mtctr r12
/* 80291140 0028E080  4E 80 04 21 */	bctrl 
/* 80291144 0028E084  83 FF 00 0C */	lwz r31, 0xc(r31)
lbl_80291148:
/* 80291148 0028E088  28 1F 00 00 */	cmplwi r31, 0
/* 8029114C 0028E08C  40 82 FF E4 */	bne lbl_80291130
/* 80291150 0028E090  80 61 00 08 */	lwz r3, 8(r1)
/* 80291154 0028E094  48 0A C5 C9 */	bl OSRestoreInterrupts
/* 80291158 0028E098  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8029115C 0028E09C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80291160 0028E0A0  7C 08 03 A6 */	mtlr r0
/* 80291164 0028E0A4  38 21 00 20 */	addi r1, r1, 0x20
/* 80291168 0028E0A8  4E 80 00 20 */	blr 
/* 8029116C 0028E0AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80291170 0028E0B0  7C 08 02 A6 */	mflr r0
/* 80291174 0028E0B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80291178 0028E0B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8029117C 0028E0BC  3C 60 80 43 */	lis r3, lbl_80431678@ha
/* 80291180 0028E0C0  3B E3 16 78 */	addi r31, r3, lbl_80431678@l
/* 80291184 0028E0C4  38 7F 00 0C */	addi r3, r31, 0xc
/* 80291188 0028E0C8  48 04 AD 8D */	bl JSUPtrList_NS_initiate
/* 8029118C 0028E0CC  38 7F 00 0C */	addi r3, r31, 0xc
.global JASPortCmd_NS_TPortHead_NS_dtor
/* 80291190 0028E0D0  3C 80 80 29 */	lis r4, JASPortCmd_NS_TPortHead_NS_dtor@ha
.global JASPortCmd_NS_TPortHead_NS_dtor
/* 80291194 0028E0D4  38 84 11 D0 */	addi r4, r4, JASPortCmd_NS_TPortHead_NS_dtor@l
/* 80291198 0028E0D8  38 BF 00 00 */	addi r5, r31, 0
/* 8029119C 0028E0DC  48 0D 0A 89 */	bl func_80361C24
/* 802911A0 0028E0E0  38 7F 00 24 */	addi r3, r31, 0x24
/* 802911A4 0028E0E4  48 04 AD 71 */	bl JSUPtrList_NS_initiate
/* 802911A8 0028E0E8  38 7F 00 24 */	addi r3, r31, 0x24
.global JASPortCmd_NS_TPortHead_NS_dtor
/* 802911AC 0028E0EC  3C 80 80 29 */	lis r4, JASPortCmd_NS_TPortHead_NS_dtor@ha
.global JASPortCmd_NS_TPortHead_NS_dtor
/* 802911B0 0028E0F0  38 84 11 D0 */	addi r4, r4, JASPortCmd_NS_TPortHead_NS_dtor@l
/* 802911B4 0028E0F4  38 BF 00 18 */	addi r5, r31, 0x18
/* 802911B8 0028E0F8  48 0D 0A 6D */	bl func_80361C24
/* 802911BC 0028E0FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802911C0 0028E100  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802911C4 0028E104  7C 08 03 A6 */	mtlr r0
/* 802911C8 0028E108  38 21 00 10 */	addi r1, r1, 0x10
/* 802911CC 0028E10C  4E 80 00 20 */	blr 
.global JASPortCmd_NS_TPortHead_NS_dtor
JASPortCmd_NS_TPortHead_NS_dtor:
/* 802911D0 0028E110  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802911D4 0028E114  7C 08 02 A6 */	mflr r0
/* 802911D8 0028E118  90 01 00 14 */	stw r0, 0x14(r1)
/* 802911DC 0028E11C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802911E0 0028E120  93 C1 00 08 */	stw r30, 8(r1)
/* 802911E4 0028E124  7C 7E 1B 79 */	or. r30, r3, r3
/* 802911E8 0028E128  7C 9F 23 78 */	mr r31, r4
/* 802911EC 0028E12C  41 82 00 20 */	beq lbl_8029120C
/* 802911F0 0028E130  41 82 00 0C */	beq lbl_802911FC
/* 802911F4 0028E134  38 80 00 00 */	li r4, 0
/* 802911F8 0028E138  48 04 AC B5 */	bl JSUPtrList_NS_dtor
lbl_802911FC:
/* 802911FC 0028E13C  7F E0 07 35 */	extsh. r0, r31
/* 80291200 0028E140  40 81 00 0C */	ble lbl_8029120C
/* 80291204 0028E144  7F C3 F3 78 */	mr r3, r30
/* 80291208 0028E148  48 03 DB 35 */	bl __dl
lbl_8029120C:
/* 8029120C 0028E14C  7F C3 F3 78 */	mr r3, r30
/* 80291210 0028E150  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80291214 0028E154  83 C1 00 08 */	lwz r30, 8(r1)
/* 80291218 0028E158  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8029121C 0028E15C  7C 08 03 A6 */	mtlr r0
/* 80291220 0028E160  38 21 00 10 */	addi r1, r1, 0x10
/* 80291224 0028E164  4E 80 00 20 */	blr 

