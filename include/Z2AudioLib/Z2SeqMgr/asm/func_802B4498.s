/* 802B4498 002B13D8  94 21 FF C0 */ stwu r1, -0x40(r1)
/* 802B449C 002B13DC  7C 08 02 A6 */ mflr r0
/* 802B44A0 002B13E0  90 01 00 44 */ stw r0, 0x44(r1)
/* 802B44A4 002B13E4  93 E1 00 3C */ stw r31, 0x3c(r1)
/* 802B44A8 002B13E8  93 C1 00 38 */ stw r30, 0x38(r1)
/* 802B44AC 002B13EC  7C 7E 1B 78 */ mr r30, r3
/* 802B44B0 002B13F0  7C 9F 23 78 */ mr r31, r4
/* 802B44B4 002B13F4  88 83 00 D0 */ lbz r4, 0xd0(r3)
/* 802B44B8 002B13F8  54 80 E7 FF */ rlwinm. r0, r4, 0x1c, 0x1f, 0x1f
/* 802B44BC 002B13FC  40 82 03 70 */ bne lbl_802B482C
/* 802B44C0 002B1400  80 6D 86 00 */ lwz r3, lbl_80450B80-_SDA_BASE_(r13)
/* 802B44C4 002B1404  88 03 00 1D */ lbz r0, 0x1d(r3)
/* 802B44C8 002B1408  28 00 00 00 */ cmplwi r0, 0
/* 802B44CC 002B140C  41 82 03 60 */ beq lbl_802B482C
/* 802B44D0 002B1410  54 80 CF FF */ rlwinm. r0, r4, 0x19, 0x1f, 0x1f
/* 802B44D4 002B1414  40 82 03 54 */ bne lbl_802B4828
/* 802B44D8 002B1418  57 E0 06 3E */ clrlwi r0, r31, 0x18
/* 802B44DC 002B141C  28 00 00 02 */ cmplwi r0, 2
/* 802B44E0 002B1420  40 80 00 D0 */ bge lbl_802B45B0
/* 802B44E4 002B1424  88 1E 00 C0 */ lbz r0, 0xc0(r30)
/* 802B44E8 002B1428  28 00 00 00 */ cmplwi r0, 0
/* 802B44EC 002B142C  41 82 00 C4 */ beq lbl_802B45B0
/* 802B44F0 002B1430  38 00 00 00 */ li r0, 0
/* 802B44F4 002B1434  98 1E 00 C0 */ stb r0, 0xc0(r30)
/* 802B44F8 002B1438  80 BE 00 04 */ lwz r5, 4(r30)
/* 802B44FC 002B143C  28 05 00 00 */ cmplwi r5, 0
/* 802B4500 002B1440  41 82 00 10 */ beq lbl_802B4510
/* 802B4504 002B1444  80 65 00 18 */ lwz r3, 0x18(r5)
/* 802B4508 002B1448  90 61 00 1C */ stw r3, 0x1c(r1)
/* 802B450C 002B144C  48 00 00 08 */ b lbl_802B4514
lbl_802B4510:
/* 802B4510 002B1450  38 60 FF FF */ li r3, -1
lbl_802B4514:
/* 802B4514 002B1454  3C 03 FF 00 */ addis r0, r3, 0xff00
/* 802B4518 002B1458  28 00 00 1B */ cmplwi r0, 0x1b
/* 802B451C 002B145C  41 82 00 28 */ beq lbl_802B4544
/* 802B4520 002B1460  28 05 00 00 */ cmplwi r5, 0
/* 802B4524 002B1464  41 82 00 10 */ beq lbl_802B4534
/* 802B4528 002B1468  80 65 00 18 */ lwz r3, 0x18(r5)
/* 802B452C 002B146C  90 61 00 18 */ stw r3, 0x18(r1)
/* 802B4530 002B1470  48 00 00 08 */ b lbl_802B4538
lbl_802B4534:
/* 802B4534 002B1474  38 60 FF FF */ li r3, -1
lbl_802B4538:
/* 802B4538 002B1478  3C 03 FF 00 */ addis r0, r3, 0xff00
/* 802B453C 002B147C  28 00 00 0F */ cmplwi r0, 0xf
/* 802B4540 002B1480  40 82 00 70 */ bne lbl_802B45B0
lbl_802B4544:
/* 802B4544 002B1484  C0 05 00 24 */ lfs f0, 0x24(r5)
/* 802B4548 002B1488  38 80 00 0A */ li r4, 0xa
/* 802B454C 002B148C  90 85 00 30 */ stw r4, 0x30(r5)
/* 802B4550 002B1490  C0 42 BF 98 */ lfs f2, lbl_80455998-_SDA2_BASE_(r2)
/* 802B4554 002B1494  EC 22 00 28 */ fsubs f1, f2, f0
/* 802B4558 002B1498  80 05 00 30 */ lwz r0, 0x30(r5)
/* 802B455C 002B149C  C8 62 BF A8 */ lfd f3, lbl_804559A8-_SDA2_BASE_(r2)
/* 802B4560 002B14A0  90 01 00 24 */ stw r0, 0x24(r1)
/* 802B4564 002B14A4  3C 60 43 30 */ lis r3, 0x4330
/* 802B4568 002B14A8  90 61 00 20 */ stw r3, 0x20(r1)
/* 802B456C 002B14AC  C8 01 00 20 */ lfd f0, 0x20(r1)
/* 802B4570 002B14B0  EC 00 18 28 */ fsubs f0, f0, f3
/* 802B4574 002B14B4  EC 01 00 24 */ fdivs f0, f1, f0
/* 802B4578 002B14B8  D0 05 00 28 */ stfs f0, 0x28(r5)
/* 802B457C 002B14BC  D0 45 00 2C */ stfs f2, 0x2c(r5)
/* 802B4580 002B14C0  C0 1E 00 14 */ lfs f0, 0x14(r30)
/* 802B4584 002B14C4  90 9E 00 20 */ stw r4, 0x20(r30)
/* 802B4588 002B14C8  C0 42 BF 9C */ lfs f2, lbl_8045599C-_SDA2_BASE_(r2)
/* 802B458C 002B14CC  EC 22 00 28 */ fsubs f1, f2, f0
/* 802B4590 002B14D0  80 1E 00 20 */ lwz r0, 0x20(r30)
/* 802B4594 002B14D4  90 01 00 2C */ stw r0, 0x2c(r1)
/* 802B4598 002B14D8  90 61 00 28 */ stw r3, 0x28(r1)
/* 802B459C 002B14DC  C8 01 00 28 */ lfd f0, 0x28(r1)
/* 802B45A0 002B14E0  EC 00 18 28 */ fsubs f0, f0, f3
/* 802B45A4 002B14E4  EC 01 00 24 */ fdivs f0, f1, f0
/* 802B45A8 002B14E8  D0 1E 00 18 */ stfs f0, 0x18(r30)
/* 802B45AC 002B14EC  D0 5E 00 1C */ stfs f2, 0x1c(r30)
lbl_802B45B0:
/* 802B45B0 002B14F0  80 6D 85 C8 */ lwz r3, lbl_80450B48-_SDA_BASE_(r13)
/* 802B45B4 002B14F4  48 00 BC 31 */ bl Z2SoundObjMgr_NS_isTwilightBattle
/* 802B45B8 002B14F8  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 802B45BC 002B14FC  41 82 00 2C */ beq lbl_802B45E8
/* 802B45C0 002B1500  80 7E 00 04 */ lwz r3, 4(r30)
/* 802B45C4 002B1504  28 03 00 00 */ cmplwi r3, 0
/* 802B45C8 002B1508  41 82 00 10 */ beq lbl_802B45D8
/* 802B45CC 002B150C  80 63 00 18 */ lwz r3, 0x18(r3)
/* 802B45D0 002B1510  90 61 00 14 */ stw r3, 0x14(r1)
/* 802B45D4 002B1514  48 00 00 08 */ b lbl_802B45DC
lbl_802B45D8:
/* 802B45D8 002B1518  38 60 FF FF */ li r3, -1
lbl_802B45DC:
/* 802B45DC 002B151C  3C 03 FF 00 */ addis r0, r3, 0xff00
/* 802B45E0 002B1520  28 00 00 0F */ cmplwi r0, 0xf
/* 802B45E4 002B1524  41 82 00 3C */ beq lbl_802B4620
lbl_802B45E8:
/* 802B45E8 002B1528  80 6D 85 C8 */ lwz r3, lbl_80450B48-_SDA_BASE_(r13)
/* 802B45EC 002B152C  48 00 BB F9 */ bl Z2SoundObjMgr_NS_isTwilightBattle
/* 802B45F0 002B1530  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 802B45F4 002B1534  40 82 00 40 */ bne lbl_802B4634
/* 802B45F8 002B1538  80 7E 00 04 */ lwz r3, 4(r30)
/* 802B45FC 002B153C  28 03 00 00 */ cmplwi r3, 0
/* 802B4600 002B1540  41 82 00 10 */ beq lbl_802B4610
/* 802B4604 002B1544  80 63 00 18 */ lwz r3, 0x18(r3)
/* 802B4608 002B1548  90 61 00 10 */ stw r3, 0x10(r1)
/* 802B460C 002B154C  48 00 00 08 */ b lbl_802B4614
lbl_802B4610:
/* 802B4610 002B1550  38 60 FF FF */ li r3, -1
lbl_802B4614:
/* 802B4614 002B1554  3C 03 FF 00 */ addis r0, r3, 0xff00
/* 802B4618 002B1558  28 00 00 1B */ cmplwi r0, 0x1b
/* 802B461C 002B155C  40 82 00 18 */ bne lbl_802B4634
lbl_802B4620:
/* 802B4620 002B1560  80 7E 00 04 */ lwz r3, 4(r30)
/* 802B4624 002B1564  38 80 00 1E */ li r4, 0x1e
/* 802B4628 002B1568  4B FE DE B5 */ bl JAISound_NS_stop
/* 802B462C 002B156C  80 7E 00 04 */ lwz r3, 4(r30)
/* 802B4630 002B1570  4B FE DB 71 */ bl JAISound_NS_releaseHandle
lbl_802B4634:
/* 802B4634 002B1574  80 6D 85 C8 */ lwz r3, lbl_80450B48-_SDA_BASE_(r13)
/* 802B4638 002B1578  48 00 BB AD */ bl Z2SoundObjMgr_NS_isTwilightBattle
/* 802B463C 002B157C  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 802B4640 002B1580  40 82 00 2C */ bne lbl_802B466C
/* 802B4644 002B1584  80 7E 00 04 */ lwz r3, 4(r30)
/* 802B4648 002B1588  28 03 00 00 */ cmplwi r3, 0
/* 802B464C 002B158C  41 82 00 10 */ beq lbl_802B465C
/* 802B4650 002B1590  80 63 00 18 */ lwz r3, 0x18(r3)
/* 802B4654 002B1594  90 61 00 0C */ stw r3, 0xc(r1)
/* 802B4658 002B1598  48 00 00 08 */ b lbl_802B4660
lbl_802B465C:
/* 802B465C 002B159C  38 60 FF FF */ li r3, -1
lbl_802B4660:
/* 802B4660 002B15A0  3C 03 FF 00 */ addis r0, r3, 0xff00
/* 802B4664 002B15A4  28 00 00 1B */ cmplwi r0, 0x1b
/* 802B4668 002B15A8  40 82 00 88 */ bne lbl_802B46F0
lbl_802B466C:
/* 802B466C 002B15AC  57 E0 06 3E */ clrlwi r0, r31, 0x18
/* 802B4670 002B15B0  2C 00 00 02 */ cmpwi r0, 2
/* 802B4674 002B15B4  41 82 01 B4 */ beq lbl_802B4828
/* 802B4678 002B15B8  40 80 00 14 */ bge lbl_802B468C
/* 802B467C 002B15BC  2C 00 00 00 */ cmpwi r0, 0
/* 802B4680 002B15C0  41 82 00 18 */ beq lbl_802B4698
/* 802B4684 002B15C4  40 80 00 30 */ bge lbl_802B46B4
/* 802B4688 002B15C8  48 00 01 A0 */ b lbl_802B4828
lbl_802B468C:
/* 802B468C 002B15CC  2C 00 00 04 */ cmpwi r0, 4
/* 802B4690 002B15D0  40 80 01 98 */ bge lbl_802B4828
/* 802B4694 002B15D4  48 00 00 3C */ b lbl_802B46D0
lbl_802B4698:
/* 802B4698 002B15D8  88 1E 00 BF */ lbz r0, 0xbf(r30)
/* 802B469C 002B15DC  28 00 00 00 */ cmplwi r0, 0
/* 802B46A0 002B15E0  40 82 01 88 */ bne lbl_802B4828
/* 802B46A4 002B15E4  7F C3 F3 78 */ mr r3, r30
/* 802B46A8 002B15E8  38 80 00 01 */ li r4, 1
/* 802B46AC 002B15EC  48 00 08 05 */ bl Z2SeqMgr_NS_startBattleBgm
/* 802B46B0 002B15F0  48 00 01 78 */ b lbl_802B4828
lbl_802B46B4:
/* 802B46B4 002B15F4  88 1E 00 BF */ lbz r0, 0xbf(r30)
/* 802B46B8 002B15F8  28 00 00 00 */ cmplwi r0, 0
/* 802B46BC 002B15FC  40 82 01 6C */ bne lbl_802B4828
/* 802B46C0 002B1600  7F C3 F3 78 */ mr r3, r30
/* 802B46C4 002B1604  38 80 00 01 */ li r4, 1
/* 802B46C8 002B1608  48 00 07 E9 */ bl Z2SeqMgr_NS_startBattleBgm
/* 802B46CC 002B160C  48 00 01 5C */ b lbl_802B4828
lbl_802B46D0:
/* 802B46D0 002B1610  88 1E 00 BF */ lbz r0, 0xbf(r30)
/* 802B46D4 002B1614  28 00 00 00 */ cmplwi r0, 0
/* 802B46D8 002B1618  41 82 01 50 */ beq lbl_802B4828
/* 802B46DC 002B161C  7F C3 F3 78 */ mr r3, r30
/* 802B46E0 002B1620  38 80 00 19 */ li r4, 0x19
/* 802B46E4 002B1624  38 A0 00 19 */ li r5, 0x19
/* 802B46E8 002B1628  48 00 0B 1D */ bl Z2SeqMgr_NS_stopBattleBgm
/* 802B46EC 002B162C  48 00 01 3C */ b lbl_802B4828
lbl_802B46F0:
/* 802B46F0 002B1630  80 7E 00 00 */ lwz r3, 0(r30)
/* 802B46F4 002B1634  28 03 00 00 */ cmplwi r3, 0
/* 802B46F8 002B1638  41 82 00 10 */ beq lbl_802B4708
/* 802B46FC 002B163C  80 63 00 18 */ lwz r3, 0x18(r3)
/* 802B4700 002B1640  90 61 00 08 */ stw r3, 8(r1)
/* 802B4704 002B1644  48 00 00 08 */ b lbl_802B470C
lbl_802B4708:
/* 802B4708 002B1648  38 60 FF FF */ li r3, -1
lbl_802B470C:
/* 802B470C 002B164C  3C 03 FF 00 */ addis r0, r3, 0xff00
/* 802B4710 002B1650  28 00 00 00 */ cmplwi r0, 0
/* 802B4714 002B1654  41 82 01 14 */ beq lbl_802B4828
/* 802B4718 002B1658  57 E0 06 3E */ clrlwi r0, r31, 0x18
/* 802B471C 002B165C  2C 00 00 02 */ cmpwi r0, 2
/* 802B4720 002B1660  41 82 00 B4 */ beq lbl_802B47D4
/* 802B4724 002B1664  40 80 00 14 */ bge lbl_802B4738
/* 802B4728 002B1668  2C 00 00 00 */ cmpwi r0, 0
/* 802B472C 002B166C  41 82 00 18 */ beq lbl_802B4744
/* 802B4730 002B1670  40 80 00 5C */ bge lbl_802B478C
/* 802B4734 002B1674  48 00 00 F4 */ b lbl_802B4828
lbl_802B4738:
/* 802B4738 002B1678  2C 00 00 04 */ cmpwi r0, 4
/* 802B473C 002B167C  40 80 00 EC */ bge lbl_802B4828
/* 802B4740 002B1680  48 00 00 C4 */ b lbl_802B4804
lbl_802B4744:
/* 802B4744 002B1684  88 1E 00 BF */ lbz r0, 0xbf(r30)
/* 802B4748 002B1688  28 00 00 00 */ cmplwi r0, 0
/* 802B474C 002B168C  40 82 00 14 */ bne lbl_802B4760
/* 802B4750 002B1690  7F C3 F3 78 */ mr r3, r30
/* 802B4754 002B1694  38 80 00 01 */ li r4, 1
/* 802B4758 002B1698  48 00 07 59 */ bl Z2SeqMgr_NS_startBattleBgm
/* 802B475C 002B169C  48 00 00 CC */ b lbl_802B4828
lbl_802B4760:
/* 802B4760 002B16A0  28 00 00 01 */ cmplwi r0, 1
/* 802B4764 002B16A4  40 82 00 C4 */ bne lbl_802B4828
/* 802B4768 002B16A8  7F C3 F3 78 */ mr r3, r30
/* 802B476C 002B16AC  38 9E 00 04 */ addi r4, r30, 4
/* 802B4770 002B16B0  88 AD 82 EC */ lbz r5, lbl_8045086C-_SDA_BASE_(r13)
/* 802B4774 002B16B4  C0 22 BF 98 */ lfs f1, lbl_80455998-_SDA2_BASE_(r2)
/* 802B4778 002B16B8  88 CD 82 E6 */ lbz r6, lbl_80450866-_SDA_BASE_(r13)
/* 802B477C 002B16BC  C0 42 BF B4 */ lfs f2, lbl_804559B4-_SDA2_BASE_(r2)
/* 802B4780 002B16C0  FC 60 10 90 */ fmr f3, f2
/* 802B4784 002B16C4  4B FF F8 69 */ bl Z2SeqMgr_NS_setChildTrackVolume
/* 802B4788 002B16C8  48 00 00 A0 */ b lbl_802B4828
lbl_802B478C:
/* 802B478C 002B16CC  88 1E 00 BF */ lbz r0, 0xbf(r30)
/* 802B4790 002B16D0  28 00 00 00 */ cmplwi r0, 0
/* 802B4794 002B16D4  40 82 00 14 */ bne lbl_802B47A8
/* 802B4798 002B16D8  7F C3 F3 78 */ mr r3, r30
/* 802B479C 002B16DC  38 80 00 01 */ li r4, 1
/* 802B47A0 002B16E0  48 00 07 11 */ bl Z2SeqMgr_NS_startBattleBgm
/* 802B47A4 002B16E4  48 00 00 84 */ b lbl_802B4828
lbl_802B47A8:
/* 802B47A8 002B16E8  28 00 00 01 */ cmplwi r0, 1
/* 802B47AC 002B16EC  40 82 00 7C */ bne lbl_802B4828
/* 802B47B0 002B16F0  7F C3 F3 78 */ mr r3, r30
/* 802B47B4 002B16F4  38 9E 00 04 */ addi r4, r30, 4
/* 802B47B8 002B16F8  88 AD 82 EC */ lbz r5, lbl_8045086C-_SDA_BASE_(r13)
/* 802B47BC 002B16FC  C0 22 BF 9C */ lfs f1, lbl_8045599C-_SDA2_BASE_(r2)
/* 802B47C0 002B1700  88 CD 82 E7 */ lbz r6, lbl_80450867-_SDA_BASE_(r13)
/* 802B47C4 002B1704  C0 42 BF B4 */ lfs f2, lbl_804559B4-_SDA2_BASE_(r2)
/* 802B47C8 002B1708  FC 60 10 90 */ fmr f3, f2
/* 802B47CC 002B170C  4B FF F8 21 */ bl Z2SeqMgr_NS_setChildTrackVolume
/* 802B47D0 002B1710  48 00 00 58 */ b lbl_802B4828
lbl_802B47D4:
/* 802B47D4 002B1714  88 1E 00 BF */ lbz r0, 0xbf(r30)
/* 802B47D8 002B1718  28 00 00 01 */ cmplwi r0, 1
/* 802B47DC 002B171C  40 82 00 4C */ bne lbl_802B4828
/* 802B47E0 002B1720  7F C3 F3 78 */ mr r3, r30
/* 802B47E4 002B1724  38 9E 00 04 */ addi r4, r30, 4
/* 802B47E8 002B1728  88 AD 82 EC */ lbz r5, lbl_8045086C-_SDA_BASE_(r13)
/* 802B47EC 002B172C  C0 22 BF 9C */ lfs f1, lbl_8045599C-_SDA2_BASE_(r2)
/* 802B47F0 002B1730  88 CD 82 E7 */ lbz r6, lbl_80450867-_SDA_BASE_(r13)
/* 802B47F4 002B1734  C0 42 BF B4 */ lfs f2, lbl_804559B4-_SDA2_BASE_(r2)
/* 802B47F8 002B1738  FC 60 10 90 */ fmr f3, f2
/* 802B47FC 002B173C  4B FF F7 F1 */ bl Z2SeqMgr_NS_setChildTrackVolume
/* 802B4800 002B1740  48 00 00 28 */ b lbl_802B4828
lbl_802B4804:
/* 802B4804 002B1744  88 1E 00 BF */ lbz r0, 0xbf(r30)
/* 802B4808 002B1748  28 00 00 01 */ cmplwi r0, 1
/* 802B480C 002B174C  41 82 00 0C */ beq lbl_802B4818
/* 802B4810 002B1750  28 00 00 02 */ cmplwi r0, 2
/* 802B4814 002B1754  40 82 00 14 */ bne lbl_802B4828
lbl_802B4818:
/* 802B4818 002B1758  7F C3 F3 78 */ mr r3, r30
/* 802B481C 002B175C  88 8D 82 E2 */ lbz r4, lbl_80450862-_SDA_BASE_(r13)
/* 802B4820 002B1760  88 AD 82 E1 */ lbz r5, lbl_80450861-_SDA_BASE_(r13)
/* 802B4824 002B1764  48 00 09 E1 */ bl Z2SeqMgr_NS_stopBattleBgm
lbl_802B4828:
/* 802B4828 002B1768  9B FE 00 BE */ stb r31, 0xbe(r30)
lbl_802B482C:
/* 802B482C 002B176C  83 E1 00 3C */ lwz r31, 0x3c(r1)
/* 802B4830 002B1770  83 C1 00 38 */ lwz r30, 0x38(r1)
/* 802B4834 002B1774  80 01 00 44 */ lwz r0, 0x44(r1)
/* 802B4838 002B1778  7C 08 03 A6 */ mtlr r0
/* 802B483C 002B177C  38 21 00 40 */ addi r1, r1, 0x40
/* 802B4840 002B1780  4E 80 00 20 */ blr
