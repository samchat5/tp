lbl_80352430:
/* 80352430  3C 60 CC 00 */	lis r3, 0xCC00 /* 0xCC005000@ha */
/* 80352434  A0 03 50 00 */	lhz r0, 0x5000(r3)  /* 0xCC005000@l */
/* 80352438  54 03 8F FE */	rlwinm r3, r0, 0x11, 0x1f, 0x1f
/* 8035243C  4E 80 00 20 */	blr 
