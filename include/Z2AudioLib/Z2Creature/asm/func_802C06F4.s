/* 802C06F4 002BD634  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 802C06F8 002BD638  7C 08 02 A6 */ mflr r0
/* 802C06FC 002BD63C  90 01 00 14 */ stw r0, 0x14(r1)
/* 802C0700 002BD640  81 83 00 00 */ lwz r12, 0(r3)
/* 802C0704 002BD644  81 8C 00 08 */ lwz r12, 8(r12)
/* 802C0708 002BD648  7D 89 03 A6 */ mtctr r12
/* 802C070C 002BD64C  4E 80 04 21 */ bctrl
/* 802C0710 002BD650  80 01 00 14 */ lwz r0, 0x14(r1)
/* 802C0714 002BD654  7C 08 03 A6 */ mtlr r0
/* 802C0718 002BD658  38 21 00 10 */ addi r1, r1, 0x10
/* 802C071C 002BD65C  4E 80 00 20 */ blr