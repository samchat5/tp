/* 802BB8B4 002B87F4  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 802BB8B8 002B87F8  7C 08 02 A6 */ mflr r0
/* 802BB8BC 002B87FC  90 01 00 14 */ stw r0, 0x14(r1)
/* 802BB8C0 002B8800  80 04 00 00 */ lwz r0, 0(r4)
/* 802BB8C4 002B8804  90 01 00 08 */ stw r0, 8(r1)
/* 802BB8C8 002B8808  38 81 00 08 */ addi r4, r1, 8
/* 802BB8CC 002B880C  48 00 02 7D */ bl Z2SoundInfo_NS_getSoundInfo_
/* 802BB8D0 002B8810  80 01 00 14 */ lwz r0, 0x14(r1)
/* 802BB8D4 002B8814  7C 08 03 A6 */ mtlr r0
/* 802BB8D8 002B8818  38 21 00 10 */ addi r1, r1, 0x10
/* 802BB8DC 002B881C  4E 80 00 20 */ blr