/* 802644EC 0026142C  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 802644F0 00261430  7C 08 02 A6 */ mflr r0
/* 802644F4 00261434  90 01 00 14 */ stw r0, 0x14(r1)
/* 802644F8 00261438  7C 66 1B 78 */ mr r6, r3
/* 802644FC 0026143C  28 04 00 00 */ cmplwi r4, 0
/* 80264500 00261440  41 82 00 08 */ beq lbl_80264508
/* 80264504 00261444  38 84 00 20 */ addi r4, r4, 0x20
lbl_80264508:
/* 80264508 00261448  7C 83 23 78 */ mr r3, r4
/* 8026450C 0026144C  38 86 00 20 */ addi r4, r6, 0x20
/* 80264510 00261450  48 00 97 2D */ bl cM3d_Cross_CpsSph__FRC8cM3dGCpsRC8cM3dGSphP3Vec
/* 80264514 00261454  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 80264518 00261458  41 82 00 0C */ beq lbl_80264524
/* 8026451C 0026145C  38 60 00 01 */ li r3, 1
/* 80264520 00261460  48 00 00 08 */ b lbl_80264528
lbl_80264524:
/* 80264524 00261464  38 60 00 00 */ li r3, 0
lbl_80264528:
/* 80264528 00261468  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8026452C 0026146C  7C 08 03 A6 */ mtlr r0
/* 80264530 00261470  38 21 00 10 */ addi r1, r1, 0x10
/* 80264534 00261474  4E 80 00 20 */ blr