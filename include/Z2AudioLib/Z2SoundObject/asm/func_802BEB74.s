/* 802BEB74 002BBAB4  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 802BEB78 002BBAB8  7C 08 02 A6 */ mflr r0
/* 802BEB7C 002BBABC  90 01 00 14 */ stw r0, 0x14(r1)
/* 802BEB80 002BBAC0  4B FF F4 31 */ bl Z2SoundObjBase_NS_init
/* 802BEB84 002BBAC4  80 01 00 14 */ lwz r0, 0x14(r1)
/* 802BEB88 002BBAC8  7C 08 03 A6 */ mtlr r0
/* 802BEB8C 002BBACC  38 21 00 10 */ addi r1, r1, 0x10
/* 802BEB90 002BBAD0  4E 80 00 20 */ blr
