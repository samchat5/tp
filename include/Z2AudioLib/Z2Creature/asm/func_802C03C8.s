/* 802C03C8 002BD308  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 802C03CC 002BD30C  7C 08 02 A6 */ mflr r0
/* 802C03D0 002BD310  90 01 00 14 */ stw r0, 0x14(r1)
/* 802C03D4 002BD314  93 E1 00 0C */ stw r31, 0xc(r1)
/* 802C03D8 002BD318  7C 7F 1B 78 */ mr r31, r3
/* 802C03DC 002BD31C  3C 60 80 3D */ lis r3, lbl_803CB8C0@ha
/* 802C03E0 002BD320  38 03 B8 C0 */ addi r0, r3, lbl_803CB8C0@l
/* 802C03E4 002BD324  90 1F 00 00 */ stw r0, 0(r31)
/* 802C03E8 002BD328  38 7F 00 08 */ addi r3, r31, 8
/* 802C03EC 002BD32C  4B FF E7 A9 */ bl Z2SoundObjAnime
/* 802C03F0 002BD330  38 7F 00 50 */ addi r3, r31, 0x50
/* 802C03F4 002BD334  4B FF E4 51 */ bl Z2SoundObjSimple
/* 802C03F8 002BD338  38 7F 00 70 */ addi r3, r31, 0x70
/* 802C03FC 002BD33C  4B FF E4 49 */ bl Z2SoundObjSimple
/* 802C0400 002BD340  38 00 00 00 */ li r0, 0
/* 802C0404 002BD344  90 1F 00 04 */ stw r0, 4(r31)
/* 802C0408 002BD348  7F E3 FB 78 */ mr r3, r31
/* 802C040C 002BD34C  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 802C0410 002BD350  80 01 00 14 */ lwz r0, 0x14(r1)
/* 802C0414 002BD354  7C 08 03 A6 */ mtlr r0
/* 802C0418 002BD358  38 21 00 10 */ addi r1, r1, 0x10
/* 802C041C 002BD35C  4E 80 00 20 */ blr
