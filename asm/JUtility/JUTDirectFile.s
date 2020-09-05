.include "macros.inc"

.section .text, "ax" # 802e8730


.global JUTDirectFile_NS_fetch32byte
JUTDirectFile_NS_fetch32byte:
/* 802E8730 002E5670  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802E8734 002E5674  7C 08 02 A6 */	mflr r0
/* 802E8738 002E5678  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E873C 002E567C  39 61 00 20 */	addi r11, r1, 0x20
/* 802E8740 002E5680  48 07 9A 9D */	bl _savegpr_29
/* 802E8744 002E5684  7C 7D 1B 78 */	mr r29, r3
/* 802E8748 002E5688  80 03 08 2C */	lwz r0, 0x82c(r3)
/* 802E874C 002E568C  54 03 00 34 */	rlwinm r3, r0, 0, 0, 0x1a
/* 802E8750 002E5690  80 1D 08 28 */	lwz r0, 0x828(r29)
/* 802E8754 002E5694  7C 03 00 50 */	subf r0, r3, r0
/* 802E8758 002E5698  90 1D 08 24 */	stw r0, 0x824(r29)
/* 802E875C 002E569C  80 1D 08 24 */	lwz r0, 0x824(r29)
/* 802E8760 002E56A0  28 00 08 00 */	cmplwi r0, 0x800
/* 802E8764 002E56A4  40 81 00 0C */	ble lbl_802E8770
/* 802E8768 002E56A8  38 00 08 00 */	li r0, 0x800
/* 802E876C 002E56AC  90 1D 08 24 */	stw r0, 0x824(r29)
lbl_802E8770:
/* 802E8770 002E56B0  48 05 4F 99 */	bl OSEnableInterrupts
/* 802E8774 002E56B4  7C 7E 1B 78 */	mr r30, r3
/* 802E8778 002E56B8  38 7D 08 34 */	addi r3, r29, 0x834
/* 802E877C 002E56BC  80 9D 08 20 */	lwz r4, 0x820(r29)
/* 802E8780 002E56C0  80 BD 08 24 */	lwz r5, 0x824(r29)
/* 802E8784 002E56C4  38 05 00 1F */	addi r0, r5, 0x1f
/* 802E8788 002E56C8  54 05 00 34 */	rlwinm r5, r0, 0, 0, 0x1a
/* 802E878C 002E56CC  80 1D 08 2C */	lwz r0, 0x82c(r29)
/* 802E8790 002E56D0  54 06 00 34 */	rlwinm r6, r0, 0, 0, 0x1a
/* 802E8794 002E56D4  38 E0 00 00 */	li r7, 0
/* 802E8798 002E56D8  39 00 00 02 */	li r8, 2
/* 802E879C 002E56DC  48 06 05 B9 */	bl DVDReadAsyncPrio
/* 802E87A0 002E56E0  7C 7F 1B 78 */	mr r31, r3
/* 802E87A4 002E56E4  7F C3 F3 78 */	mr r3, r30
/* 802E87A8 002E56E8  48 05 4F 75 */	bl OSRestoreInterrupts
/* 802E87AC 002E56EC  2C 1F 00 00 */	cmpwi r31, 0
/* 802E87B0 002E56F0  40 82 00 0C */	bne lbl_802E87BC
/* 802E87B4 002E56F4  38 60 FF FF */	li r3, -1
/* 802E87B8 002E56F8  48 00 00 28 */	b lbl_802E87E0
lbl_802E87BC:
/* 802E87BC 002E56FC  48 05 4F 4D */	bl OSEnableInterrupts
/* 802E87C0 002E5700  7C 7F 1B 78 */	mr r31, r3
lbl_802E87C4:
/* 802E87C4 002E5704  38 7D 08 34 */	addi r3, r29, 0x834
/* 802E87C8 002E5708  48 06 29 B5 */	bl DVDGetCommandBlockStatus
/* 802E87CC 002E570C  2C 03 00 00 */	cmpwi r3, 0
/* 802E87D0 002E5710  40 82 FF F4 */	bne lbl_802E87C4
/* 802E87D4 002E5714  7F E3 FB 78 */	mr r3, r31
/* 802E87D8 002E5718  48 05 4F 45 */	bl OSRestoreInterrupts
/* 802E87DC 002E571C  80 7D 08 24 */	lwz r3, 0x824(r29)
lbl_802E87E0:
/* 802E87E0 002E5720  39 61 00 20 */	addi r11, r1, 0x20
/* 802E87E4 002E5724  48 07 9A 45 */	bl _restgpr_29
/* 802E87E8 002E5728  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802E87EC 002E572C  7C 08 03 A6 */	mtlr r0
/* 802E87F0 002E5730  38 21 00 20 */	addi r1, r1, 0x20
/* 802E87F4 002E5734  4E 80 00 20 */	blr 

.global JUTDirectFile
JUTDirectFile:
/* 802E87F8 002E5738  38 80 00 00 */	li r4, 0
/* 802E87FC 002E573C  90 83 08 28 */	stw r4, 0x828(r3)
/* 802E8800 002E5740  90 83 08 2C */	stw r4, 0x82c(r3)
/* 802E8804 002E5744  90 83 08 24 */	stw r4, 0x824(r3)
/* 802E8808 002E5748  38 03 00 1F */	addi r0, r3, 0x1f
/* 802E880C 002E574C  54 00 00 34 */	rlwinm r0, r0, 0, 0, 0x1a
/* 802E8810 002E5750  90 03 08 20 */	stw r0, 0x820(r3)
/* 802E8814 002E5754  98 83 08 30 */	stb r4, 0x830(r3)
/* 802E8818 002E5758  4E 80 00 20 */	blr 

.global JUTDirectFile_NS_dtor
JUTDirectFile_NS_dtor:
/* 802E881C 002E575C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E8820 002E5760  7C 08 02 A6 */	mflr r0
/* 802E8824 002E5764  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E8828 002E5768  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E882C 002E576C  7C 7F 1B 79 */	or. r31, r3, r3
/* 802E8830 002E5770  41 82 00 18 */	beq lbl_802E8848
/* 802E8834 002E5774  38 00 00 00 */	li r0, 0
/* 802E8838 002E5778  98 1F 08 30 */	stb r0, 0x830(r31)
/* 802E883C 002E577C  7C 80 07 35 */	extsh. r0, r4
/* 802E8840 002E5780  40 81 00 08 */	ble lbl_802E8848
/* 802E8844 002E5784  4B FE 64 F9 */	bl __dl
lbl_802E8848:
/* 802E8848 002E5788  7F E3 FB 78 */	mr r3, r31
/* 802E884C 002E578C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E8850 002E5790  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E8854 002E5794  7C 08 03 A6 */	mtlr r0
/* 802E8858 002E5798  38 21 00 10 */	addi r1, r1, 0x10
/* 802E885C 002E579C  4E 80 00 20 */	blr 

.global JUTDirectFile_NS_fopen
JUTDirectFile_NS_fopen:
/* 802E8860 002E57A0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802E8864 002E57A4  7C 08 02 A6 */	mflr r0
/* 802E8868 002E57A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E886C 002E57AC  39 61 00 20 */	addi r11, r1, 0x20
/* 802E8870 002E57B0  48 07 99 6D */	bl _savegpr_29
/* 802E8874 002E57B4  7C 7D 1B 78 */	mr r29, r3
/* 802E8878 002E57B8  7C 9F 23 79 */	or. r31, r4, r4
/* 802E887C 002E57BC  40 82 00 0C */	bne lbl_802E8888
/* 802E8880 002E57C0  38 60 00 00 */	li r3, 0
/* 802E8884 002E57C4  48 00 00 60 */	b lbl_802E88E4
lbl_802E8888:
/* 802E8888 002E57C8  48 05 4E 81 */	bl OSEnableInterrupts
/* 802E888C 002E57CC  7C 7E 1B 78 */	mr r30, r3
/* 802E8890 002E57D0  7F E3 FB 78 */	mr r3, r31
/* 802E8894 002E57D4  38 9D 08 34 */	addi r4, r29, 0x834
/* 802E8898 002E57D8  48 05 FF F9 */	bl DVDOpen
/* 802E889C 002E57DC  7C 7F 1B 78 */	mr r31, r3
/* 802E88A0 002E57E0  7F C3 F3 78 */	mr r3, r30
/* 802E88A4 002E57E4  48 05 4E 79 */	bl OSRestoreInterrupts
/* 802E88A8 002E57E8  2C 1F 00 00 */	cmpwi r31, 0
/* 802E88AC 002E57EC  40 82 00 14 */	bne lbl_802E88C0
/* 802E88B0 002E57F0  38 00 00 00 */	li r0, 0
/* 802E88B4 002E57F4  98 1D 08 30 */	stb r0, 0x830(r29)
/* 802E88B8 002E57F8  38 60 00 00 */	li r3, 0
/* 802E88BC 002E57FC  48 00 00 28 */	b lbl_802E88E4
lbl_802E88C0:
/* 802E88C0 002E5800  48 05 4E 49 */	bl OSEnableInterrupts
/* 802E88C4 002E5804  80 1D 08 68 */	lwz r0, 0x868(r29)
/* 802E88C8 002E5808  90 1D 08 28 */	stw r0, 0x828(r29)
/* 802E88CC 002E580C  48 05 4E 51 */	bl OSRestoreInterrupts
/* 802E88D0 002E5810  38 00 00 00 */	li r0, 0
/* 802E88D4 002E5814  90 1D 08 2C */	stw r0, 0x82c(r29)
/* 802E88D8 002E5818  38 00 00 01 */	li r0, 1
/* 802E88DC 002E581C  98 1D 08 30 */	stb r0, 0x830(r29)
/* 802E88E0 002E5820  38 60 00 01 */	li r3, 1
lbl_802E88E4:
/* 802E88E4 002E5824  39 61 00 20 */	addi r11, r1, 0x20
/* 802E88E8 002E5828  48 07 99 41 */	bl _restgpr_29
/* 802E88EC 002E582C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802E88F0 002E5830  7C 08 03 A6 */	mtlr r0
/* 802E88F4 002E5834  38 21 00 20 */	addi r1, r1, 0x20
/* 802E88F8 002E5838  4E 80 00 20 */	blr 

.global JUTDirectFile_NS_fclose
JUTDirectFile_NS_fclose:
/* 802E88FC 002E583C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802E8900 002E5840  7C 08 02 A6 */	mflr r0
/* 802E8904 002E5844  90 01 00 14 */	stw r0, 0x14(r1)
/* 802E8908 002E5848  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802E890C 002E584C  93 C1 00 08 */	stw r30, 8(r1)
/* 802E8910 002E5850  7C 7E 1B 78 */	mr r30, r3
/* 802E8914 002E5854  88 03 08 30 */	lbz r0, 0x830(r3)
/* 802E8918 002E5858  28 00 00 00 */	cmplwi r0, 0
/* 802E891C 002E585C  41 82 00 24 */	beq lbl_802E8940
/* 802E8920 002E5860  48 05 4D E9 */	bl OSEnableInterrupts
/* 802E8924 002E5864  7C 7F 1B 78 */	mr r31, r3
/* 802E8928 002E5868  38 7E 08 34 */	addi r3, r30, 0x834
/* 802E892C 002E586C  48 06 00 2D */	bl DVDClose
/* 802E8930 002E5870  7F E3 FB 78 */	mr r3, r31
/* 802E8934 002E5874  48 05 4D E9 */	bl OSRestoreInterrupts
/* 802E8938 002E5878  38 00 00 00 */	li r0, 0
/* 802E893C 002E587C  98 1E 08 30 */	stb r0, 0x830(r30)
lbl_802E8940:
/* 802E8940 002E5880  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802E8944 002E5884  83 C1 00 08 */	lwz r30, 8(r1)
/* 802E8948 002E5888  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802E894C 002E588C  7C 08 03 A6 */	mtlr r0
/* 802E8950 002E5890  38 21 00 10 */	addi r1, r1, 0x10
/* 802E8954 002E5894  4E 80 00 20 */	blr 

.global JUTDirectFile_NS_fgets
JUTDirectFile_NS_fgets:
/* 802E8958 002E5898  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802E895C 002E589C  7C 08 02 A6 */	mflr r0
/* 802E8960 002E58A0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802E8964 002E58A4  39 61 00 20 */	addi r11, r1, 0x20
/* 802E8968 002E58A8  48 07 98 6D */	bl func_803621D4
/* 802E896C 002E58AC  7C 7C 1B 78 */	mr r28, r3
/* 802E8970 002E58B0  7C BD 2B 78 */	mr r29, r5
/* 802E8974 002E58B4  88 03 08 30 */	lbz r0, 0x830(r3)
/* 802E8978 002E58B8  28 00 00 00 */	cmplwi r0, 0
/* 802E897C 002E58BC  40 82 00 0C */	bne lbl_802E8988
/* 802E8980 002E58C0  38 60 FF FF */	li r3, -1
/* 802E8984 002E58C4  48 00 01 6C */	b lbl_802E8AF0
lbl_802E8988:
/* 802E8988 002E58C8  2C 1D 00 00 */	cmpwi r29, 0
/* 802E898C 002E58CC  40 82 00 0C */	bne lbl_802E8998
/* 802E8990 002E58D0  38 60 00 00 */	li r3, 0
/* 802E8994 002E58D4  48 00 01 5C */	b lbl_802E8AF0
lbl_802E8998:
/* 802E8998 002E58D8  2C 1D 00 01 */	cmpwi r29, 1
/* 802E899C 002E58DC  40 82 00 0C */	bne lbl_802E89A8
/* 802E89A0 002E58E0  38 60 00 01 */	li r3, 1
/* 802E89A4 002E58E4  48 00 01 4C */	b lbl_802E8AF0
lbl_802E89A8:
/* 802E89A8 002E58E8  28 04 00 00 */	cmplwi r4, 0
/* 802E89AC 002E58EC  40 82 00 0C */	bne lbl_802E89B8
/* 802E89B0 002E58F0  38 60 FF FF */	li r3, -1
/* 802E89B4 002E58F4  48 00 01 3C */	b lbl_802E8AF0
lbl_802E89B8:
/* 802E89B8 002E58F8  80 7C 08 2C */	lwz r3, 0x82c(r28)
/* 802E89BC 002E58FC  80 1C 08 28 */	lwz r0, 0x828(r28)
/* 802E89C0 002E5900  7C 03 00 40 */	cmplw r3, r0
/* 802E89C4 002E5904  41 80 00 0C */	blt lbl_802E89D0
/* 802E89C8 002E5908  38 60 FF FF */	li r3, -1
/* 802E89CC 002E590C  48 00 01 24 */	b lbl_802E8AF0
lbl_802E89D0:
/* 802E89D0 002E5910  7C 9F 23 78 */	mr r31, r4
/* 802E89D4 002E5914  3B C0 00 00 */	li r30, 0
/* 802E89D8 002E5918  3B 7D FF FF */	addi r27, r29, -1
/* 802E89DC 002E591C  48 00 00 E8 */	b lbl_802E8AC4
lbl_802E89E0:
/* 802E89E0 002E5920  80 1C 08 24 */	lwz r0, 0x824(r28)
/* 802E89E4 002E5924  28 00 00 00 */	cmplwi r0, 0
/* 802E89E8 002E5928  40 82 00 1C */	bne lbl_802E8A04
/* 802E89EC 002E592C  7F 83 E3 78 */	mr r3, r28
/* 802E89F0 002E5930  4B FF FD 41 */	bl JUTDirectFile_NS_fetch32byte
/* 802E89F4 002E5934  2C 03 00 00 */	cmpwi r3, 0
/* 802E89F8 002E5938  40 80 00 0C */	bge lbl_802E8A04
/* 802E89FC 002E593C  38 60 FF FF */	li r3, -1
/* 802E8A00 002E5940  48 00 00 F0 */	b lbl_802E8AF0
lbl_802E8A04:
/* 802E8A04 002E5944  80 1C 08 2C */	lwz r0, 0x82c(r28)
/* 802E8A08 002E5948  54 04 05 7E */	clrlwi r4, r0, 0x15
/* 802E8A0C 002E594C  80 1C 08 24 */	lwz r0, 0x824(r28)
/* 802E8A10 002E5950  7C A4 00 50 */	subf r5, r4, r0
/* 802E8A14 002E5954  7C 1E 2A 14 */	add r0, r30, r5
/* 802E8A18 002E5958  7C 00 D8 40 */	cmplw r0, r27
/* 802E8A1C 002E595C  40 81 00 0C */	ble lbl_802E8A28
/* 802E8A20 002E5960  7C 7E E8 50 */	subf r3, r30, r29
/* 802E8A24 002E5964  38 A3 FF FF */	addi r5, r3, -1
lbl_802E8A28:
/* 802E8A28 002E5968  38 C0 00 00 */	li r6, 0
/* 802E8A2C 002E596C  38 E0 00 00 */	li r7, 0
/* 802E8A30 002E5970  7C A9 03 A6 */	mtctr r5
/* 802E8A34 002E5974  28 05 00 00 */	cmplwi r5, 0
/* 802E8A38 002E5978  40 81 00 34 */	ble lbl_802E8A6C
lbl_802E8A3C:
/* 802E8A3C 002E597C  80 7C 08 20 */	lwz r3, 0x820(r28)
/* 802E8A40 002E5980  7C 03 20 AE */	lbzx r0, r3, r4
/* 802E8A44 002E5984  98 1F 00 00 */	stb r0, 0(r31)
/* 802E8A48 002E5988  2C 00 00 0A */	cmpwi r0, 0xa
/* 802E8A4C 002E598C  38 84 00 01 */	addi r4, r4, 1
/* 802E8A50 002E5990  3B FF 00 01 */	addi r31, r31, 1
/* 802E8A54 002E5994  40 82 00 10 */	bne lbl_802E8A64
/* 802E8A58 002E5998  38 C0 00 01 */	li r6, 1
/* 802E8A5C 002E599C  38 A7 00 01 */	addi r5, r7, 1
/* 802E8A60 002E59A0  48 00 00 0C */	b lbl_802E8A6C
lbl_802E8A64:
/* 802E8A64 002E59A4  38 E7 00 01 */	addi r7, r7, 1
/* 802E8A68 002E59A8  42 00 FF D4 */	bdnz lbl_802E8A3C
lbl_802E8A6C:
/* 802E8A6C 002E59AC  28 04 08 00 */	cmplwi r4, 0x800
/* 802E8A70 002E59B0  41 80 00 0C */	blt lbl_802E8A7C
/* 802E8A74 002E59B4  38 00 00 00 */	li r0, 0
/* 802E8A78 002E59B8  90 1C 08 24 */	stw r0, 0x824(r28)
lbl_802E8A7C:
/* 802E8A7C 002E59BC  2C 06 00 01 */	cmpwi r6, 1
/* 802E8A80 002E59C0  40 82 00 20 */	bne lbl_802E8AA0
/* 802E8A84 002E59C4  38 00 00 00 */	li r0, 0
/* 802E8A88 002E59C8  98 1F 00 00 */	stb r0, 0(r31)
/* 802E8A8C 002E59CC  80 1C 08 2C */	lwz r0, 0x82c(r28)
/* 802E8A90 002E59D0  7C 00 2A 14 */	add r0, r0, r5
/* 802E8A94 002E59D4  90 1C 08 2C */	stw r0, 0x82c(r28)
/* 802E8A98 002E59D8  7F DE 2A 14 */	add r30, r30, r5
/* 802E8A9C 002E59DC  48 00 00 38 */	b lbl_802E8AD4
lbl_802E8AA0:
/* 802E8AA0 002E59E0  80 1C 08 2C */	lwz r0, 0x82c(r28)
/* 802E8AA4 002E59E4  7C 00 2A 14 */	add r0, r0, r5
/* 802E8AA8 002E59E8  90 1C 08 2C */	stw r0, 0x82c(r28)
/* 802E8AAC 002E59EC  7F DE 2A 14 */	add r30, r30, r5
/* 802E8AB0 002E59F0  7C 1E D8 00 */	cmpw r30, r27
/* 802E8AB4 002E59F4  41 80 00 10 */	blt lbl_802E8AC4
/* 802E8AB8 002E59F8  38 00 00 00 */	li r0, 0
/* 802E8ABC 002E59FC  98 1F 00 00 */	stb r0, 0(r31)
/* 802E8AC0 002E5A00  48 00 00 14 */	b lbl_802E8AD4
lbl_802E8AC4:
/* 802E8AC4 002E5A04  80 7C 08 2C */	lwz r3, 0x82c(r28)
/* 802E8AC8 002E5A08  80 1C 08 28 */	lwz r0, 0x828(r28)
/* 802E8ACC 002E5A0C  7C 03 00 40 */	cmplw r3, r0
/* 802E8AD0 002E5A10  41 80 FF 10 */	blt lbl_802E89E0
lbl_802E8AD4:
/* 802E8AD4 002E5A14  80 7C 08 2C */	lwz r3, 0x82c(r28)
/* 802E8AD8 002E5A18  80 1C 08 28 */	lwz r0, 0x828(r28)
/* 802E8ADC 002E5A1C  7C 03 00 40 */	cmplw r3, r0
/* 802E8AE0 002E5A20  41 80 00 0C */	blt lbl_802E8AEC
/* 802E8AE4 002E5A24  38 00 00 00 */	li r0, 0
/* 802E8AE8 002E5A28  98 1F 00 00 */	stb r0, 0(r31)
lbl_802E8AEC:
/* 802E8AEC 002E5A2C  7F C3 F3 78 */	mr r3, r30
lbl_802E8AF0:
/* 802E8AF0 002E5A30  39 61 00 20 */	addi r11, r1, 0x20
/* 802E8AF4 002E5A34  48 07 97 2D */	bl func_80362220
/* 802E8AF8 002E5A38  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802E8AFC 002E5A3C  7C 08 03 A6 */	mtlr r0
/* 802E8B00 002E5A40  38 21 00 20 */	addi r1, r1, 0x20
/* 802E8B04 002E5A44  4E 80 00 20 */	blr 

