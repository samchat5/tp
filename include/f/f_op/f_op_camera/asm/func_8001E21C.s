/* 8001E21C 0001B15C  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8001E220 0001B160  7C 08 02 A6 */ mflr r0
/* 8001E224 0001B164  90 01 00 14 */ stw r0, 0x14(r1)
/* 8001E228 0001B168  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8001E22C 0001B16C  93 C1 00 08 */ stw r30, 8(r1)
/* 8001E230 0001B170  7C 7E 1B 78 */ mr r30, r3
/* 8001E234 0001B174  80 63 02 24 */ lwz r3, 0x224(r3)
/* 8001E238 0001B178  7F C4 F3 78 */ mr r4, r30
/* 8001E23C 0001B17C  48 00 42 6D */ bl fpcMtd_Delete
/* 8001E240 0001B180  7C 7F 1B 78 */ mr r31, r3
/* 8001E244 0001B184  2C 1F 00 01 */ cmpwi r31, 1
/* 8001E248 0001B188  40 82 00 0C */ bne lbl_8001E254
/* 8001E24C 0001B18C  38 7E 02 10 */ addi r3, r30, 0x210
/* 8001E250 0001B190  48 00 22 85 */ bl fopDwTg_DrawQTo__FP16create_tag_class
lbl_8001E254:
/* 8001E254 0001B194  7F E3 FB 78 */ mr r3, r31
/* 8001E258 0001B198  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8001E25C 0001B19C  83 C1 00 08 */ lwz r30, 8(r1)
/* 8001E260 0001B1A0  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8001E264 0001B1A4  7C 08 03 A6 */ mtlr r0
/* 8001E268 0001B1A8  38 21 00 10 */ addi r1, r1, 0x10
/* 8001E26C 0001B1AC  4E 80 00 20 */ blr