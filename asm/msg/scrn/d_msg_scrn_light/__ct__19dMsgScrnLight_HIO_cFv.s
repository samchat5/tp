lbl_8024575C:
/* 8024575C  3C 80 80 3C */	lis r4, __vt__19dMsgScrnLight_HIO_c@ha /* 0x803C12A4@ha */
/* 80245760  38 04 12 A4 */	addi r0, r4, __vt__19dMsgScrnLight_HIO_c@l /* 0x803C12A4@l */
/* 80245764  90 03 00 00 */	stw r0, 0(r3)
/* 80245768  39 40 00 00 */	li r10, 0
/* 8024576C  99 43 00 05 */	stb r10, 5(r3)
/* 80245770  39 80 00 00 */	li r12, 0
/* 80245774  39 20 00 A0 */	li r9, 0xa0
/* 80245778  39 00 00 87 */	li r8, 0x87
/* 8024577C  38 E0 00 14 */	li r7, 0x14
/* 80245780  38 C0 00 E1 */	li r6, 0xe1
/* 80245784  38 A0 00 D2 */	li r5, 0xd2
/* 80245788  38 80 00 6E */	li r4, 0x6e
/* 8024578C  38 00 00 09 */	li r0, 9
/* 80245790  7C 09 03 A6 */	mtctr r0
lbl_80245794:
/* 80245794  7D 63 62 14 */	add r11, r3, r12
/* 80245798  99 2B 00 06 */	stb r9, 6(r11)
/* 8024579C  99 0B 00 18 */	stb r8, 0x18(r11)
/* 802457A0  98 EB 00 2A */	stb r7, 0x2a(r11)
/* 802457A4  99 4B 00 3C */	stb r10, 0x3c(r11)
/* 802457A8  98 CB 00 0F */	stb r6, 0xf(r11)
/* 802457AC  98 AB 00 21 */	stb r5, 0x21(r11)
/* 802457B0  98 8B 00 33 */	stb r4, 0x33(r11)
/* 802457B4  98 AB 00 45 */	stb r5, 0x45(r11)
/* 802457B8  39 8C 00 01 */	addi r12, r12, 1
/* 802457BC  42 00 FF D8 */	bdnz lbl_80245794
/* 802457C0  4E 80 00 20 */	blr 
