/* 8001F4E8 0001C428  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8001F4EC 0001C42C  7C 08 02 A6 */ mflr r0
/* 8001F4F0 0001C430  90 01 00 14 */ stw r0, 0x14(r1)
/* 8001F4F4 0001C434  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8001F4F8 0001C438  93 C1 00 08 */ stw r30, 8(r1)
/* 8001F4FC 0001C43C  7C 7E 1B 78 */ mr r30, r3
/* 8001F500 0001C440  80 63 00 D8 */ lwz r3, 0xd8(r3)
/* 8001F504 0001C444  7F C4 F3 78 */ mr r4, r30
/* 8001F508 0001C448  48 00 2F 7D */ bl fpcMtd_IsDelete
/* 8001F50C 0001C44C  7C 7F 1B 78 */ mr r31, r3
/* 8001F510 0001C450  2C 1F 00 01 */ cmpwi r31, 1
/* 8001F514 0001C454  40 82 00 0C */ bne lbl_8001F520
/* 8001F518 0001C458  38 7E 00 C4 */ addi r3, r30, 0xc4
/* 8001F51C 0001C45C  48 00 0F B9 */ bl fopDwTg_DrawQTo__FP16create_tag_class
lbl_8001F520:
/* 8001F520 0001C460  7F E3 FB 78 */ mr r3, r31
/* 8001F524 0001C464  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8001F528 0001C468  83 C1 00 08 */ lwz r30, 8(r1)
/* 8001F52C 0001C46C  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8001F530 0001C470  7C 08 03 A6 */ mtlr r0
/* 8001F534 0001C474  38 21 00 10 */ addi r1, r1, 0x10
/* 8001F538 0001C478  4E 80 00 20 */ blr