lbl_800CC2E0:
/* 800CC2E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800CC2E4  7C 08 02 A6 */	mflr r0
/* 800CC2E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800CC2EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800CC2F0  93 C1 00 08 */	stw r30, 8(r1)
/* 800CC2F4  7C 66 1B 78 */	mr r6, r3
/* 800CC2F8  7C 9E 23 78 */	mr r30, r4
/* 800CC2FC  7C BF 2B 78 */	mr r31, r5
/* 800CC300  3C 60 80 43 */	lis r3, g_env_light@ha /* 0x8042CA54@ha */
/* 800CC304  38 63 CA 54 */	addi r3, r3, g_env_light@l /* 0x8042CA54@l */
/* 800CC308  80 84 00 04 */	lwz r4, 4(r4)
/* 800CC30C  38 A6 01 0C */	addi r5, r6, 0x10c
/* 800CC310  48 0D 8A 91 */	bl setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c
/* 800CC314  2C 1F 00 00 */	cmpwi r31, 0
/* 800CC318  40 82 00 10 */	bne lbl_800CC328
/* 800CC31C  7F C3 F3 78 */	mr r3, r30
/* 800CC320  4B F4 1A 45 */	bl mDoExt_modelEntryDL__FP8J3DModel
/* 800CC324  48 00 00 20 */	b lbl_800CC344
lbl_800CC328:
/* 800CC328  7F C3 F3 78 */	mr r3, r30
/* 800CC32C  81 9E 00 00 */	lwz r12, 0(r30)
/* 800CC330  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 800CC334  7D 89 03 A6 */	mtctr r12
/* 800CC338  4E 80 04 21 */	bctrl 
/* 800CC33C  7F C3 F3 78 */	mr r3, r30
/* 800CC340  48 25 B6 61 */	bl diff__8J3DModelFv
lbl_800CC344:
/* 800CC344  7F C3 F3 78 */	mr r3, r30
/* 800CC348  4B F6 56 05 */	bl entry__10daMirror_cFP8J3DModel
/* 800CC34C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800CC350  83 C1 00 08 */	lwz r30, 8(r1)
/* 800CC354  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800CC358  7C 08 03 A6 */	mtlr r0
/* 800CC35C  38 21 00 10 */	addi r1, r1, 0x10
/* 800CC360  4E 80 00 20 */	blr 
