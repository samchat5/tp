lbl_80A98410:
/* 80A98410  3C 80 80 AA */	lis r4, __vt__11J3DTexNoAnm@ha /* 0x80A9C00C@ha */
/* 80A98414  38 04 C0 0C */	addi r0, r4, __vt__11J3DTexNoAnm@l /* 0x80A9C00C@l */
/* 80A98418  90 03 00 00 */	stw r0, 0(r3)
/* 80A9841C  38 80 00 00 */	li r4, 0
/* 80A98420  B0 83 00 04 */	sth r4, 4(r3)
/* 80A98424  38 00 00 01 */	li r0, 1
/* 80A98428  B0 03 00 06 */	sth r0, 6(r3)
/* 80A9842C  90 83 00 08 */	stw r4, 8(r3)
/* 80A98430  4E 80 00 20 */	blr 
