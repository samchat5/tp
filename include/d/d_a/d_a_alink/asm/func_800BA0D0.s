/* 800BA0D0 000B7010  94 21 FF D0 */ stwu r1, -0x30(r1)
/* 800BA0D4 000B7014  7C 08 02 A6 */ mflr r0
/* 800BA0D8 000B7018  90 01 00 34 */ stw r0, 0x34(r1)
/* 800BA0DC 000B701C  DB E1 00 20 */ stfd f31, 0x20(r1)
/* 800BA0E0 000B7020  F3 E1 00 28 */ psq_st f31, 40(r1), 0, 0
/* 800BA0E4 000B7024  39 61 00 20 */ addi r11, r1, 0x20
/* 800BA0E8 000B7028  48 2A 80 ED */ bl _savegpr_27
/* 800BA0EC 000B702C  7C 7C 1B 78 */ mr r28, r3
/* 800BA0F0 000B7030  7C 9D 23 78 */ mr r29, r4
/* 800BA0F4 000B7034  3C 80 80 39 */ lis r4, lbl_8038D658@ha
/* 800BA0F8 000B7038  3B C4 D6 58 */ addi r30, r4, lbl_8038D658@l
/* 800BA0FC 000B703C  C3 E3 05 94 */ lfs f31, 0x594(r3)
/* 800BA100 000B7040  38 80 00 01 */ li r4, 1
/* 800BA104 000B7044  48 05 EC 79 */ bl daAlink_c_NS_checkDeadAction
/* 800BA108 000B7048  2C 03 00 00 */ cmpwi r3, 0
/* 800BA10C 000B704C  41 82 00 0C */ beq lbl_800BA118
/* 800BA110 000B7050  38 60 00 01 */ li r3, 1
/* 800BA114 000B7054  48 00 05 6C */ b lbl_800BA680
lbl_800BA118:
/* 800BA118 000B7058  7F 83 E3 78 */ mr r3, r28
/* 800BA11C 000B705C  4B FF FE 35 */ bl daAlink_c_NS_checkGroundSpecialMode
/* 800BA120 000B7060  2C 03 00 00 */ cmpwi r3, 0
/* 800BA124 000B7064  41 82 00 0C */ beq lbl_800BA130
/* 800BA128 000B7068  38 60 00 01 */ li r3, 1
/* 800BA12C 000B706C  48 00 05 54 */ b lbl_800BA680
lbl_800BA130:
/* 800BA130 000B7070  A0 1C 2F E8 */ lhz r0, 0x2fe8(r28)
/* 800BA134 000B7074  28 00 00 09 */ cmplwi r0, 9
/* 800BA138 000B7078  41 82 01 14 */ beq lbl_800BA24C
/* 800BA13C 000B707C  2C 1D 00 00 */ cmpwi r29, 0
/* 800BA140 000B7080  41 82 00 14 */ beq lbl_800BA154
/* 800BA144 000B7084  C0 3C 33 AC */ lfs f1, 0x33ac(r28)
/* 800BA148 000B7088  C0 02 92 A4 */ lfs f0, lbl_80452CA4-_SDA2_BASE_(r2)
/* 800BA14C 000B708C  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800BA150 000B7090  40 81 00 FC */ ble lbl_800BA24C
lbl_800BA154:
/* 800BA154 000B7094  28 00 00 C5 */ cmplwi r0, 0xc5
/* 800BA158 000B7098  40 82 00 14 */ bne lbl_800BA16C
/* 800BA15C 000B709C  7F 83 E3 78 */ mr r3, r28
/* 800BA160 000B70A0  48 04 E8 B9 */ bl daAlink_c_NS_checkHookshotWait
/* 800BA164 000B70A4  2C 03 00 00 */ cmpwi r3, 0
/* 800BA168 000B70A8  41 82 00 E4 */ beq lbl_800BA24C
lbl_800BA16C:
/* 800BA16C 000B70AC  80 1C 27 EC */ lwz r0, 0x27ec(r28)
/* 800BA170 000B70B0  28 00 00 00 */ cmplwi r0, 0
/* 800BA174 000B70B4  40 82 00 34 */ bne lbl_800BA1A8
/* 800BA178 000B70B8  83 FC 27 E0 */ lwz r31, 0x27e0(r28)
/* 800BA17C 000B70BC  3B 60 00 01 */ li r27, 1
/* 800BA180 000B70C0  7F E3 FB 78 */ mr r3, r31
/* 800BA184 000B70C4  4B FB 96 61 */ bl dAttention_c_NS_LockonTruth
/* 800BA188 000B70C8  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800BA18C 000B70CC  40 82 00 14 */ bne lbl_800BA1A0
/* 800BA190 000B70D0  80 1F 03 34 */ lwz r0, 0x334(r31)
/* 800BA194 000B70D4  54 00 00 85 */ rlwinm. r0, r0, 0, 2, 2
/* 800BA198 000B70D8  40 82 00 08 */ bne lbl_800BA1A0
/* 800BA19C 000B70DC  3B 60 00 00 */ li r27, 0
lbl_800BA1A0:
/* 800BA1A0 000B70E0  57 60 06 3F */ clrlwi. r0, r27, 0x18
/* 800BA1A4 000B70E4  41 82 00 10 */ beq lbl_800BA1B4
lbl_800BA1A8:
/* 800BA1A8 000B70E8  7F 83 E3 78 */ mr r3, r28
/* 800BA1AC 000B70EC  4B FF A2 A1 */ bl daAlink_c_NS_setSpeedAndAngleAtn
/* 800BA1B0 000B70F0  48 00 00 9C */ b lbl_800BA24C
lbl_800BA1B4:
/* 800BA1B4 000B70F4  7F 83 E3 78 */ mr r3, r28
/* 800BA1B8 000B70F8  48 00 0D C9 */ bl daAlink_c_NS_checkUpperReadyThrowAnime
/* 800BA1BC 000B70FC  2C 03 00 00 */ cmpwi r3, 0
/* 800BA1C0 000B7100  41 82 00 84 */ beq lbl_800BA244
/* 800BA1C4 000B7104  A8 1C 30 8E */ lha r0, 0x308e(r28)
/* 800BA1C8 000B7108  2C 00 00 00 */ cmpwi r0, 0
/* 800BA1CC 000B710C  40 82 00 78 */ bne lbl_800BA244
/* 800BA1D0 000B7110  7F 83 E3 78 */ mr r3, r28
/* 800BA1D4 000B7114  48 02 62 D9 */ bl daAlink_c_NS_checkBoomerangThrowAnime
/* 800BA1D8 000B7118  2C 03 00 00 */ cmpwi r3, 0
/* 800BA1DC 000B711C  41 82 00 28 */ beq lbl_800BA204
/* 800BA1E0 000B7120  80 1C 28 38 */ lwz r0, 0x2838(r28)
/* 800BA1E4 000B7124  28 00 00 00 */ cmplwi r0, 0
/* 800BA1E8 000B7128  40 82 00 5C */ bne lbl_800BA244
/* 800BA1EC 000B712C  A0 1C 2F DC */ lhz r0, 0x2fdc(r28)
/* 800BA1F0 000B7130  28 00 01 02 */ cmplwi r0, 0x102
/* 800BA1F4 000B7134  41 82 00 50 */ beq lbl_800BA244
/* 800BA1F8 000B7138  80 1C 05 74 */ lwz r0, 0x574(r28)
/* 800BA1FC 000B713C  54 00 07 BD */ rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 800BA200 000B7140  40 82 00 44 */ bne lbl_800BA244
lbl_800BA204:
/* 800BA204 000B7144  38 60 00 00 */ li r3, 0
/* 800BA208 000B7148  A0 1C 2F DC */ lhz r0, 0x2fdc(r28)
/* 800BA20C 000B714C  28 00 00 46 */ cmplwi r0, 0x46
/* 800BA210 000B7150  40 82 00 14 */ bne lbl_800BA224
/* 800BA214 000B7154  A0 1C 1F BC */ lhz r0, 0x1fbc(r28)
/* 800BA218 000B7158  28 00 00 53 */ cmplwi r0, 0x53
/* 800BA21C 000B715C  40 82 00 08 */ bne lbl_800BA224
/* 800BA220 000B7160  38 60 00 01 */ li r3, 1
lbl_800BA224:
/* 800BA224 000B7164  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800BA228 000B7168  41 82 00 24 */ beq lbl_800BA24C
/* 800BA22C 000B716C  80 1C 28 40 */ lwz r0, 0x2840(r28)
/* 800BA230 000B7170  28 00 00 00 */ cmplwi r0, 0
/* 800BA234 000B7174  40 82 00 10 */ bne lbl_800BA244
/* 800BA238 000B7178  80 1C 05 74 */ lwz r0, 0x574(r28)
/* 800BA23C 000B717C  54 00 03 DF */ rlwinm. r0, r0, 0, 0xf, 0xf
/* 800BA240 000B7180  41 82 00 0C */ beq lbl_800BA24C
lbl_800BA244:
/* 800BA244 000B7184  7F 83 E3 78 */ mr r3, r28
/* 800BA248 000B7188  4B FF 9D 8D */ bl daAlink_c_NS_setSpeedAndAngleNormal
lbl_800BA24C:
/* 800BA24C 000B718C  7F 83 E3 78 */ mr r3, r28
/* 800BA250 000B7190  4B FF 60 6D */ bl daAlink_c_NS_setFrontWallType
/* 800BA254 000B7194  7F 83 E3 78 */ mr r3, r28
/* 800BA258 000B7198  4B FF 92 A9 */ bl daAlink_c_NS_checkAttentionState
/* 800BA25C 000B719C  7C 7F 1B 78 */ mr r31, r3
/* 800BA260 000B71A0  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800BA264 000B71A4  41 82 00 64 */ beq lbl_800BA2C8
/* 800BA268 000B71A8  38 60 00 00 */ li r3, 0
/* 800BA26C 000B71AC  A0 1C 1F BC */ lhz r0, 0x1fbc(r28)
/* 800BA270 000B71B0  28 00 00 62 */ cmplwi r0, 0x62
/* 800BA274 000B71B4  41 82 00 10 */ beq lbl_800BA284
/* 800BA278 000B71B8  54 00 04 3E */ clrlwi r0, r0, 0x10
/* 800BA27C 000B71BC  28 00 02 A0 */ cmplwi r0, 0x2a0
/* 800BA280 000B71C0  40 82 00 08 */ bne lbl_800BA288
lbl_800BA284:
/* 800BA284 000B71C4  38 60 00 01 */ li r3, 1
lbl_800BA288:
/* 800BA288 000B71C8  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800BA28C 000B71CC  41 82 00 10 */ beq lbl_800BA29C
/* 800BA290 000B71D0  C0 02 93 84 */ lfs f0, lbl_80452D84-_SDA2_BASE_(r2)
/* 800BA294 000B71D4  D0 1C 05 94 */ stfs f0, 0x594(r28)
/* 800BA298 000B71D8  48 00 00 5C */ b lbl_800BA2F4
lbl_800BA29C:
/* 800BA29C 000B71DC  80 1C 27 EC */ lwz r0, 0x27ec(r28)
/* 800BA2A0 000B71E0  28 00 00 00 */ cmplwi r0, 0
/* 800BA2A4 000B71E4  41 82 00 14 */ beq lbl_800BA2B8
/* 800BA2A8 000B71E8  38 7E 00 BC */ addi r3, r30, 0xbc
/* 800BA2AC 000B71EC  C0 03 00 1C */ lfs f0, 0x1c(r3)
/* 800BA2B0 000B71F0  D0 1C 05 94 */ stfs f0, 0x594(r28)
/* 800BA2B4 000B71F4  48 00 00 40 */ b lbl_800BA2F4
lbl_800BA2B8:
/* 800BA2B8 000B71F8  38 7E 01 10 */ addi r3, r30, 0x110
/* 800BA2BC 000B71FC  C0 03 00 1C */ lfs f0, 0x1c(r3)
/* 800BA2C0 000B7200  D0 1C 05 94 */ stfs f0, 0x594(r28)
/* 800BA2C4 000B7204  48 00 00 30 */ b lbl_800BA2F4
lbl_800BA2C8:
/* 800BA2C8 000B7208  7F 83 E3 78 */ mr r3, r28
/* 800BA2CC 000B720C  4B FF 7F 21 */ bl daAlink_c_NS_checkSlope
/* 800BA2D0 000B7210  2C 03 00 00 */ cmpwi r3, 0
/* 800BA2D4 000B7214  41 82 00 14 */ beq lbl_800BA2E8
/* 800BA2D8 000B7218  38 7E 02 74 */ addi r3, r30, 0x274
/* 800BA2DC 000B721C  C0 03 00 64 */ lfs f0, 0x64(r3)
/* 800BA2E0 000B7220  D0 1C 05 94 */ stfs f0, 0x594(r28)
/* 800BA2E4 000B7224  48 00 00 10 */ b lbl_800BA2F4
lbl_800BA2E8:
/* 800BA2E8 000B7228  38 7E 00 64 */ addi r3, r30, 0x64
/* 800BA2EC 000B722C  C0 03 00 30 */ lfs f0, 0x30(r3)
/* 800BA2F0 000B7230  D0 1C 05 94 */ stfs f0, 0x594(r28)
lbl_800BA2F4:
/* 800BA2F4 000B7234  80 1C 05 88 */ lwz r0, 0x588(r28)
/* 800BA2F8 000B7238  54 00 02 D7 */ rlwinm. r0, r0, 0, 0xb, 0xb
/* 800BA2FC 000B723C  41 82 00 30 */ beq lbl_800BA32C
/* 800BA300 000B7240  80 1C 19 9C */ lwz r0, 0x199c(r28)
/* 800BA304 000B7244  54 00 06 B5 */ rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 800BA308 000B7248  41 82 00 24 */ beq lbl_800BA32C
/* 800BA30C 000B724C  80 9C 31 A0 */ lwz r4, 0x31a0(r28)
/* 800BA310 000B7250  3C 60 00 07 */ lis r3, 0x00070C52@ha
/* 800BA314 000B7254  38 03 0C 52 */ addi r0, r3, 0x00070C52@l
/* 800BA318 000B7258  7C 80 00 39 */ and. r0, r4, r0
/* 800BA31C 000B725C  40 82 00 10 */ bne lbl_800BA32C
/* 800BA320 000B7260  7F 83 E3 78 */ mr r3, r28
/* 800BA324 000B7264  48 00 E1 3D */ bl daAlink_c_NS_procFloorDownReboundInit
/* 800BA328 000B7268  48 00 03 58 */ b lbl_800BA680
lbl_800BA32C:
/* 800BA32C 000B726C  A0 1C 1F BC */ lhz r0, 0x1fbc(r28)
/* 800BA330 000B7270  28 00 00 83 */ cmplwi r0, 0x83
/* 800BA334 000B7274  40 82 00 24 */ bne lbl_800BA358
/* 800BA338 000B7278  7F 83 E3 78 */ mr r3, r28
/* 800BA33C 000B727C  4B FE D7 21 */ bl daAlink_c_NS_checkDashAnime
/* 800BA340 000B7280  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800BA344 000B7284  40 82 00 14 */ bne lbl_800BA358
/* 800BA348 000B7288  7F 83 E3 78 */ mr r3, r28
/* 800BA34C 000B728C  38 80 00 00 */ li r4, 0
/* 800BA350 000B7290  48 01 AA 8D */ bl daAlink_c_NS_procCutTurnMoveInit
/* 800BA354 000B7294  48 00 03 2C */ b lbl_800BA680
lbl_800BA358:
/* 800BA358 000B7298  7F 83 E3 78 */ mr r3, r28
/* 800BA35C 000B729C  4B FF F9 D1 */ bl daAlink_c_NS_checkNextActionFromButton
/* 800BA360 000B72A0  2C 03 00 00 */ cmpwi r3, 0
/* 800BA364 000B72A4  41 82 00 0C */ beq lbl_800BA370
/* 800BA368 000B72A8  38 60 00 01 */ li r3, 1
/* 800BA36C 000B72AC  48 00 03 14 */ b lbl_800BA680
lbl_800BA370:
/* 800BA370 000B72B0  2C 1D 00 00 */ cmpwi r29, 0
/* 800BA374 000B72B4  41 82 00 30 */ beq lbl_800BA3A4
/* 800BA378 000B72B8  C0 3C 33 AC */ lfs f1, 0x33ac(r28)
/* 800BA37C 000B72BC  C0 02 92 A4 */ lfs f0, lbl_80452CA4-_SDA2_BASE_(r2)
/* 800BA380 000B72C0  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800BA384 000B72C4  41 81 00 20 */ bgt lbl_800BA3A4
/* 800BA388 000B72C8  7F 83 E3 78 */ mr r3, r28
/* 800BA38C 000B72CC  4B FF EF B5 */ bl daAlink_c_NS_checkEquipAnime
/* 800BA390 000B72D0  2C 03 00 00 */ cmpwi r3, 0
/* 800BA394 000B72D4  40 82 00 10 */ bne lbl_800BA3A4
/* 800BA398 000B72D8  D3 FC 05 94 */ stfs f31, 0x594(r28)
/* 800BA39C 000B72DC  38 60 00 00 */ li r3, 0
/* 800BA3A0 000B72E0  48 00 02 E0 */ b lbl_800BA680
lbl_800BA3A4:
/* 800BA3A4 000B72E4  57 E0 06 3F */ clrlwi. r0, r31, 0x18
/* 800BA3A8 000B72E8  41 82 01 40 */ beq lbl_800BA4E8
/* 800BA3AC 000B72EC  7F 83 E3 78 */ mr r3, r28
/* 800BA3B0 000B72F0  48 02 46 39 */ bl daAlink_c_NS_checkBowAnime
/* 800BA3B4 000B72F4  2C 03 00 00 */ cmpwi r3, 0
/* 800BA3B8 000B72F8  41 82 00 14 */ beq lbl_800BA3CC
/* 800BA3BC 000B72FC  7F 83 E3 78 */ mr r3, r28
/* 800BA3C0 000B7300  48 02 54 55 */ bl daAlink_c_NS_checkNextActionBow
/* 800BA3C4 000B7304  7C 7B 1B 78 */ mr r27, r3
/* 800BA3C8 000B7308  48 00 02 B4 */ b lbl_800BA67C
lbl_800BA3CC:
/* 800BA3CC 000B730C  7F 83 E3 78 */ mr r3, r28
/* 800BA3D0 000B7310  48 02 60 71 */ bl daAlink_c_NS_checkBoomerangAnime
/* 800BA3D4 000B7314  2C 03 00 00 */ cmpwi r3, 0
/* 800BA3D8 000B7318  41 82 00 20 */ beq lbl_800BA3F8
/* 800BA3DC 000B731C  A0 1C 2F DC */ lhz r0, 0x2fdc(r28)
/* 800BA3E0 000B7320  28 00 01 02 */ cmplwi r0, 0x102
/* 800BA3E4 000B7324  41 82 00 14 */ beq lbl_800BA3F8
/* 800BA3E8 000B7328  7F 83 E3 78 */ mr r3, r28
/* 800BA3EC 000B732C  48 02 67 F9 */ bl daAlink_c_NS_checkNextActionBoomerang
/* 800BA3F0 000B7330  7C 7B 1B 78 */ mr r27, r3
/* 800BA3F4 000B7334  48 00 02 88 */ b lbl_800BA67C
lbl_800BA3F8:
/* 800BA3F8 000B7338  7F 83 E3 78 */ mr r3, r28
/* 800BA3FC 000B733C  48 02 71 35 */ bl daAlink_c_NS_checkCopyRodAnime
/* 800BA400 000B7340  2C 03 00 00 */ cmpwi r3, 0
/* 800BA404 000B7344  41 82 00 14 */ beq lbl_800BA418
/* 800BA408 000B7348  7F 83 E3 78 */ mr r3, r28
/* 800BA40C 000B734C  48 02 78 39 */ bl daAlink_c_NS_checkNextActionCopyRod
/* 800BA410 000B7350  7C 7B 1B 78 */ mr r27, r3
/* 800BA414 000B7354  48 00 02 68 */ b lbl_800BA67C
lbl_800BA418:
/* 800BA418 000B7358  38 60 00 00 */ li r3, 0
/* 800BA41C 000B735C  A0 1C 1F BC */ lhz r0, 0x1fbc(r28)
/* 800BA420 000B7360  28 00 01 8D */ cmplwi r0, 0x18d
/* 800BA424 000B7364  41 82 00 10 */ beq lbl_800BA434
/* 800BA428 000B7368  54 00 04 3E */ clrlwi r0, r0, 0x10
/* 800BA42C 000B736C  28 00 01 8C */ cmplwi r0, 0x18c
/* 800BA430 000B7370  40 82 00 08 */ bne lbl_800BA438
lbl_800BA434:
/* 800BA434 000B7374  38 60 00 01 */ li r3, 1
lbl_800BA438:
/* 800BA438 000B7378  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800BA43C 000B737C  41 82 00 14 */ beq lbl_800BA450
/* 800BA440 000B7380  7F 83 E3 78 */ mr r3, r28
/* 800BA444 000B7384  48 04 F1 85 */ bl daAlink_c_NS_checkNextActionHookshot
/* 800BA448 000B7388  7C 7B 1B 78 */ mr r27, r3
/* 800BA44C 000B738C  48 00 02 30 */ b lbl_800BA67C
lbl_800BA450:
/* 800BA450 000B7390  7F 83 E3 78 */ mr r3, r28
/* 800BA454 000B7394  48 05 AC 91 */ bl daAlink_c_NS_checkIronBallAnime
/* 800BA458 000B7398  2C 03 00 00 */ cmpwi r3, 0
/* 800BA45C 000B739C  41 82 00 14 */ beq lbl_800BA470
/* 800BA460 000B73A0  7F 83 E3 78 */ mr r3, r28
/* 800BA464 000B73A4  48 05 AF 95 */ bl daAlink_c_NS_checkNextActionIronBall
/* 800BA468 000B73A8  7C 7B 1B 78 */ mr r27, r3
/* 800BA46C 000B73AC  48 00 02 10 */ b lbl_800BA67C
lbl_800BA470:
/* 800BA470 000B73B0  80 1C 27 EC */ lwz r0, 0x27ec(r28)
/* 800BA474 000B73B4  28 00 00 00 */ cmplwi r0, 0
/* 800BA478 000B73B8  40 82 00 10 */ bne lbl_800BA488
/* 800BA47C 000B73BC  80 1C 06 14 */ lwz r0, 0x614(r28)
/* 800BA480 000B73C0  28 00 00 17 */ cmplwi r0, 0x17
/* 800BA484 000B73C4  40 82 00 34 */ bne lbl_800BA4B8
lbl_800BA488:
/* 800BA488 000B73C8  7F 83 E3 78 */ mr r3, r28
/* 800BA48C 000B73CC  4B FF 94 79 */ bl daAlink_c_NS_checkZeroSpeedF
/* 800BA490 000B73D0  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800BA494 000B73D4  41 82 00 14 */ beq lbl_800BA4A8
/* 800BA498 000B73D8  7F 83 E3 78 */ mr r3, r28
/* 800BA49C 000B73DC  48 00 94 31 */ bl daAlink_c_NS_procAtnActorWaitInit
/* 800BA4A0 000B73E0  7C 7B 1B 78 */ mr r27, r3
/* 800BA4A4 000B73E4  48 00 01 D8 */ b lbl_800BA67C
lbl_800BA4A8:
/* 800BA4A8 000B73E8  7F 83 E3 78 */ mr r3, r28
/* 800BA4AC 000B73EC  48 00 95 41 */ bl daAlink_c_NS_procAtnActorMoveInit
/* 800BA4B0 000B73F0  7C 7B 1B 78 */ mr r27, r3
/* 800BA4B4 000B73F4  48 00 01 C8 */ b lbl_800BA67C
lbl_800BA4B8:
/* 800BA4B8 000B73F8  7F 83 E3 78 */ mr r3, r28
/* 800BA4BC 000B73FC  4B FF 94 49 */ bl daAlink_c_NS_checkZeroSpeedF
/* 800BA4C0 000B7400  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800BA4C4 000B7404  41 82 00 14 */ beq lbl_800BA4D8
/* 800BA4C8 000B7408  7F 83 E3 78 */ mr r3, r28
/* 800BA4CC 000B740C  4B FF B4 21 */ bl daAlink_c_NS_checkWaitAction
/* 800BA4D0 000B7410  7C 7B 1B 78 */ mr r27, r3
/* 800BA4D4 000B7414  48 00 01 A8 */ b lbl_800BA67C
lbl_800BA4D8:
/* 800BA4D8 000B7418  7F 83 E3 78 */ mr r3, r28
/* 800BA4DC 000B741C  48 00 93 35 */ bl daAlink_c_NS_procAtnMoveInit
/* 800BA4E0 000B7420  7C 7B 1B 78 */ mr r27, r3
/* 800BA4E4 000B7424  48 00 01 98 */ b lbl_800BA67C
lbl_800BA4E8:
/* 800BA4E8 000B7428  38 00 00 04 */ li r0, 4
/* 800BA4EC 000B742C  98 1C 2F 98 */ stb r0, 0x2f98(r28)
/* 800BA4F0 000B7430  7F 83 E3 78 */ mr r3, r28
/* 800BA4F4 000B7434  4B FF 94 11 */ bl daAlink_c_NS_checkZeroSpeedF
/* 800BA4F8 000B7438  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800BA4FC 000B743C  41 82 00 68 */ beq lbl_800BA564
/* 800BA500 000B7440  A8 7C 2F E2 */ lha r3, 0x2fe2(r28)
/* 800BA504 000B7444  A8 9C 04 DE */ lha r4, 0x4de(r28)
/* 800BA508 000B7448  48 1B 69 1D */ bl cLib_distanceAngleS__Fss
/* 800BA50C 000B744C  2C 03 78 00 */ cmpwi r3, 0x7800
/* 800BA510 000B7450  40 81 00 44 */ ble lbl_800BA554
/* 800BA514 000B7454  C0 3C 33 AC */ lfs f1, 0x33ac(r28)
/* 800BA518 000B7458  C0 02 92 A4 */ lfs f0, lbl_80452CA4-_SDA2_BASE_(r2)
/* 800BA51C 000B745C  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800BA520 000B7460  40 81 00 34 */ ble lbl_800BA554
/* 800BA524 000B7464  7F 83 E3 78 */ mr r3, r28
/* 800BA528 000B7468  48 00 95 6D */ bl daAlink_c_NS_procWaitTurnInit
/* 800BA52C 000B746C  7C 7B 1B 79 */ or. r27, r3, r3
/* 800BA530 000B7470  40 82 01 4C */ bne lbl_800BA67C
/* 800BA534 000B7474  7F 83 E3 78 */ mr r3, r28
/* 800BA538 000B7478  48 05 B6 E9 */ bl daAlink_c_NS_checkEventRun
/* 800BA53C 000B747C  2C 03 00 00 */ cmpwi r3, 0
/* 800BA540 000B7480  40 82 01 3C */ bne lbl_800BA67C
/* 800BA544 000B7484  7F 83 E3 78 */ mr r3, r28
/* 800BA548 000B7488  4B FF B3 A5 */ bl daAlink_c_NS_checkWaitAction
/* 800BA54C 000B748C  7C 7B 1B 78 */ mr r27, r3
/* 800BA550 000B7490  48 00 01 2C */ b lbl_800BA67C
lbl_800BA554:
/* 800BA554 000B7494  7F 83 E3 78 */ mr r3, r28
/* 800BA558 000B7498  4B FF B3 95 */ bl daAlink_c_NS_checkWaitAction
/* 800BA55C 000B749C  7C 7B 1B 78 */ mr r27, r3
/* 800BA560 000B74A0  48 00 01 1C */ b lbl_800BA67C
lbl_800BA564:
/* 800BA564 000B74A4  A0 1C 2F E8 */ lhz r0, 0x2fe8(r28)
/* 800BA568 000B74A8  28 00 00 09 */ cmplwi r0, 9
/* 800BA56C 000B74AC  40 82 00 28 */ bne lbl_800BA594
/* 800BA570 000B74B0  A8 7C 04 DE */ lha r3, 0x4de(r28)
/* 800BA574 000B74B4  A8 1C 04 E6 */ lha r0, 0x4e6(r28)
/* 800BA578 000B74B8  7C 03 00 00 */ cmpw r3, r0
/* 800BA57C 000B74BC  41 82 00 18 */ beq lbl_800BA594
/* 800BA580 000B74C0  7F 83 E3 78 */ mr r3, r28
/* 800BA584 000B74C4  38 80 00 00 */ li r4, 0
/* 800BA588 000B74C8  48 00 96 B5 */ bl daAlink_c_NS_procMoveTurnInit
/* 800BA58C 000B74CC  7C 7B 1B 78 */ mr r27, r3
/* 800BA590 000B74D0  48 00 00 EC */ b lbl_800BA67C
lbl_800BA594:
/* 800BA594 000B74D4  C0 3C 33 AC */ lfs f1, 0x33ac(r28)
/* 800BA598 000B74D8  C0 02 92 A4 */ lfs f0, lbl_80452CA4-_SDA2_BASE_(r2)
/* 800BA59C 000B74DC  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800BA5A0 000B74E0  40 81 00 90 */ ble lbl_800BA630
/* 800BA5A4 000B74E4  A8 7C 2F E2 */ lha r3, 0x2fe2(r28)
/* 800BA5A8 000B74E8  A8 9C 04 DE */ lha r4, 0x4de(r28)
/* 800BA5AC 000B74EC  48 1B 68 79 */ bl cLib_distanceAngleS__Fss
/* 800BA5B0 000B74F0  2C 03 78 00 */ cmpwi r3, 0x7800
/* 800BA5B4 000B74F4  40 81 00 7C */ ble lbl_800BA630
/* 800BA5B8 000B74F8  C0 3C 05 2C */ lfs f1, 0x52c(r28)
/* 800BA5BC 000B74FC  C0 1C 05 94 */ lfs f0, 0x594(r28)
/* 800BA5C0 000B7500  EC 21 00 24 */ fdivs f1, f1, f0
/* 800BA5C4 000B7504  38 7E 00 64 */ addi r3, r30, 0x64
/* 800BA5C8 000B7508  C0 03 00 3C */ lfs f0, 0x3c(r3)
/* 800BA5CC 000B750C  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800BA5D0 000B7510  40 81 00 4C */ ble lbl_800BA61C
/* 800BA5D4 000B7514  88 1C 2F A8 */ lbz r0, 0x2fa8(r28)
/* 800BA5D8 000B7518  28 00 00 08 */ cmplwi r0, 8
/* 800BA5DC 000B751C  41 82 00 40 */ beq lbl_800BA61C
/* 800BA5E0 000B7520  7F 83 E3 78 */ mr r3, r28
/* 800BA5E4 000B7524  48 02 96 89 */ bl daAlink_c_NS_checkGrabAnime
/* 800BA5E8 000B7528  2C 03 00 00 */ cmpwi r3, 0
/* 800BA5EC 000B752C  40 82 00 30 */ bne lbl_800BA61C
/* 800BA5F0 000B7530  A8 7C 2F E0 */ lha r3, 0x2fe0(r28)
/* 800BA5F4 000B7534  A8 1C 30 7C */ lha r0, 0x307c(r28)
/* 800BA5F8 000B7538  7C 03 00 50 */ subf r0, r3, r0
/* 800BA5FC 000B753C  7C 03 07 34 */ extsh r3, r0
/* 800BA600 000B7540  4B FF 8E 95 */ bl daAlink_c_NS_getDirectionFromAngle
/* 800BA604 000B7544  2C 03 00 01 */ cmpwi r3, 1
/* 800BA608 000B7548  40 82 00 14 */ bne lbl_800BA61C
/* 800BA60C 000B754C  7F 83 E3 78 */ mr r3, r28
/* 800BA610 000B7550  48 00 B6 19 */ bl daAlink_c_NS_procSlipInit
/* 800BA614 000B7554  7C 7B 1B 78 */ mr r27, r3
/* 800BA618 000B7558  48 00 00 64 */ b lbl_800BA67C
lbl_800BA61C:
/* 800BA61C 000B755C  7F 83 E3 78 */ mr r3, r28
/* 800BA620 000B7560  38 80 00 01 */ li r4, 1
/* 800BA624 000B7564  48 00 96 19 */ bl daAlink_c_NS_procMoveTurnInit
/* 800BA628 000B7568  7C 7B 1B 78 */ mr r27, r3
/* 800BA62C 000B756C  48 00 00 50 */ b lbl_800BA67C
lbl_800BA630:
/* 800BA630 000B7570  C0 3C 33 AC */ lfs f1, 0x33ac(r28)
/* 800BA634 000B7574  C0 02 92 A4 */ lfs f0, lbl_80452CA4-_SDA2_BASE_(r2)
/* 800BA638 000B7578  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800BA63C 000B757C  40 81 00 34 */ ble lbl_800BA670
/* 800BA640 000B7580  A8 7C 04 DE */ lha r3, 0x4de(r28)
/* 800BA644 000B7584  A8 1C 2F E2 */ lha r0, 0x2fe2(r28)
/* 800BA648 000B7588  7C 03 00 50 */ subf r0, r3, r0
/* 800BA64C 000B758C  7C 03 07 34 */ extsh r3, r0
/* 800BA650 000B7590  4B FF 8E 45 */ bl daAlink_c_NS_getDirectionFromAngle
/* 800BA654 000B7594  2C 03 00 01 */ cmpwi r3, 1
/* 800BA658 000B7598  40 82 00 18 */ bne lbl_800BA670
/* 800BA65C 000B759C  7F 83 E3 78 */ mr r3, r28
/* 800BA660 000B75A0  38 80 00 01 */ li r4, 1
/* 800BA664 000B75A4  48 00 95 D9 */ bl daAlink_c_NS_procMoveTurnInit
/* 800BA668 000B75A8  7C 7B 1B 78 */ mr r27, r3
/* 800BA66C 000B75AC  48 00 00 10 */ b lbl_800BA67C
lbl_800BA670:
/* 800BA670 000B75B0  7F 83 E3 78 */ mr r3, r28
/* 800BA674 000B75B4  48 00 90 59 */ bl daAlink_c_NS_procMoveInit
/* 800BA678 000B75B8  7C 7B 1B 78 */ mr r27, r3
lbl_800BA67C:
/* 800BA67C 000B75BC  7F 63 DB 78 */ mr r3, r27
lbl_800BA680:
/* 800BA680 000B75C0  E3 E1 00 28 */ psq_l f31, 40(r1), 0, 0
/* 800BA684 000B75C4  CB E1 00 20 */ lfd f31, 0x20(r1)
/* 800BA688 000B75C8  39 61 00 20 */ addi r11, r1, 0x20
/* 800BA68C 000B75CC  48 2A 7B 95 */ bl _restgpr_27
/* 800BA690 000B75D0  80 01 00 34 */ lwz r0, 0x34(r1)
/* 800BA694 000B75D4  7C 08 03 A6 */ mtlr r0
/* 800BA698 000B75D8  38 21 00 30 */ addi r1, r1, 0x30
/* 800BA69C 000B75DC  4E 80 00 20 */ blr
