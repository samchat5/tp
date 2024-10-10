//
// Generated By: dol2asm
// Translation Unit: d/d_vibration
//

#include "d/d_vibration.h"
#include "d/d_com_inf_game.h"
#include "m_Do/m_Do_controller_pad.h"
#include "SSystem/SComponent/c_math.h"

//
// Forward References:
//

extern "C" static void func_8006F168__FPUsUll();
extern "C" static void func_8006F184__FUlll();
extern "C" static u32 func_8006F1A4__FUlll();
extern "C" static void func_8006F1D8__Fll();
extern "C" void Run__12dVibration_cFv();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFPCUcii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void Kill__12dVibration_cFv();
extern "C" void CheckQuake__12dVibration_cFv();
extern "C" void setDefault__12dVibration_cFv();
extern "C" void Init__12dVibration_cFv();
extern "C" void Pause__12dVibration_cFv();
extern "C" void Remove__12dVibration_cFv();
extern "C" extern u8 on_final_boss_stg[8];

//
// External References:
//

extern "C" void checkVibration__19dSv_player_config_cCFv();
extern "C" void StartShake__9dCamera_cFlPUcl4cXyz();
extern "C" void StopShake__9dCamera_cFv();
extern "C" void dCam_getBody__Fv();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void norm__4cXyzCFv();
extern "C" void cM_rnd__Fv();
extern "C" void stopMotor__Q210JUTGamePad7CRumbleFib();
extern "C" void startPatternedRumble__Q210JUTGamePad7CRumbleFPvQ310JUTGamePad7CRumble7ERumbleUl();
extern "C" void stopPatternedRumble__Q210JUTGamePad7CRumbleFs();
extern "C" void stopPatternedRumbleAtThePeriod__Q210JUTGamePad7CRumbleFv();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" u8 const MS_patt__12dVibration_c[88];
extern "C" u8 const CS_patt__12dVibration_c[88];
extern "C" u8 const MQ_patt__12dVibration_c[80];
extern "C" u8 const CQ_patt__12dVibration_c[80];
extern "C" u8 m_gamePad__8mDoCPd_c[16];

//
// Declarations:
//

/* 8006F168-8006F184 069AA8 001C+00 1/1 0/0 0/0 .text makedata__25@unnamed@d_vibration_cpp@FPUsUll
 */
static u16* func_8006F168(u16* param_0, u32 param_1, s32 param_2) {
    param_0[0] = param_2;
    param_0[1] = param_1 >> 16;
    param_0[2] = param_1;
    param_0[3] = 0;
    return param_0;
}

/* 8006F184-8006F1A4 069AC4 0020+00 1/1 0/0 0/0 .text rollshift__25@unnamed@d_vibration_cpp@FUlll
 */
static s32 func_8006F184(u32 param_0, s32 param_1, s32 param_2) {
    s32 temp = param_2 / param_1;
    temp = temp * param_1;
    temp = param_2 - temp;
    param_2 = param_0 >> temp;
    temp = param_1 - temp;
    temp = param_0 << temp;
    return param_2 | temp;
}

/* 8006F1A4-8006F1D8 069AE4 0034+00 2/2 0/0 0/0 .text makebits__25@unnamed@d_vibration_cpp@FUlll
 */
static u32 func_8006F1A4(u32 param_0, s32 param_1, s32 param_2) {
    s32 uVar1 = -1;
    u32 temp = param_0 & (uVar1 << (32 - param_1));
    param_0 = temp;
    uVar1 = param_1;
    while (uVar1 < param_2) {
        param_0 = temp | (param_0 >> param_1);
        uVar1 += param_1;
    }
    return param_0;
}

/* ############################################################################################## */

/* 8006F1D8-8006F268 069B18 0090+00 1/1 0/0 0/0 .text randombit__25@unnamed@d_vibration_cpp@Fll */
static u32 func_8006F1D8(s32 param_0, s32 param_1) {
    u32 uVar3 = 0;
    
    for (s32 iVar2 = 0; iVar2 < param_0; iVar2++) {
        u32 dVar4 = param_1 * cM_rnd();
        uVar3 |= 0x40000000 >> dVar4;
    }
    return uVar3;
}

/* ############################################################################################## */
/* 80450F50-80450F58 000450 0008+00 1/1 0/0 0/0 .sbss            data$3831 */
static u16 data[4];

/* 8006F268-8006FA24 069BA8 07BC+00 0/0 2/2 0/0 .text            Run__12dVibration_cFv */
// Stack issues
#ifdef NONMATCHING
int dVibration_c::Run() {

    field_0x8c = 1;
    if (dComIfGs_checkOptVibration() != 1) {
        if (field_0x54 != -1) {
            field_0x54 = -1;
            field_0x50 |= 1;
        }
        if (field_0x70 != -1) {
            field_0x70 = -1;
            field_0x6c |= 1;
        }
        field_0x80 = -99;
        field_0x64 = 0xffffff9d;
    }

    if (((field_0x0.mShock.field_0x0 & 1) != 0) && (field_0x0.mShock.field_0x24 != -99)) {
        field_0x0.mShock.field_0x24 = 0;
        field_0x0.mShock.field_0x4 = -1;
    }
    if (((field_0x0.mQuake.field_0x0 & 1) != 0) && (field_0x0.mQuake.field_0x24 != -99)) {
        field_0x0.mQuake.field_0x24 = 0;
        field_0x0.mQuake.field_0x4 = -1;
    }

    if (field_0x0.mShock.field_0x24 == 0 || field_0x0.mQuake.field_0x24 == 0) {
        s32 local_68 = 0;
        if (field_0x0.mShock.field_0x4 == -1 || (field_0x0.mShock.field_0x0 & 1) != 0) {
            field_0x0.mShock.field_0x24 = -99;
            field_0x0.mShock.field_0x8 = 0;
            field_0x0.mShock.field_0xc = 0;
            field_0x0.mShock.field_0x10 = 0;
        } else if (field_0x0.mShock.field_0x24 >= 0) {
            local_68 |= 1;
        }

        if (field_0x0.mQuake.field_0x4 == -1 || (field_0x0.mQuake.field_0x0 & 1) != 0) {
            field_0x0.mQuake.field_0x24 = -99;
            field_0x0.mQuake.field_0x8 = 0;
            field_0x0.mQuake.field_0xc = 0;
            field_0x0.mQuake.field_0x10 = 0;
        } else if (field_0x0.mQuake.field_0x24 >= 0) {
            local_68 |= 2;
        }

        switch (local_68) {
        case 1:
            s32 x = field_0x0.mShock.field_0xc;
            u32 local_60 = field_0x0.mShock.field_0x8;
            local_60 |= func_8006F1D8(field_0x0.mShock.field_0x10, x);
            s32 uVar3 = field_0x0.mShock.field_0x14;
            if (dKy_darkworld_check()) {
                uVar3 &= ~0x30;
            }
            camera_class* pCamera = dComIfGp_getCamera(0);
            if (pCamera && pCamera->field_0x22f == 0x47) {
                dCam_getBody()->StartShake(x, (u8*)&local_60, uVar3, field_0x0.mShock.field_0x18.norm());
            }
            break;
        case 2:
            x = field_0x0.mQuake.field_0xc;
            local_60 = func_8006F184(field_0x0.mQuake.field_0x8, x, field_0x88);
            local_60 |= func_8006F1D8(field_0x0.mQuake.field_0x10, x);
            uVar3 = field_0x0.mQuake.field_0x14;
            if (dKy_darkworld_check()) {
                uVar3 &= ~0x30;
            }
            pCamera = dComIfGp_getCamera(0);
            if (pCamera && pCamera->field_0x22f == 0x47) {
                dCam_getBody()->StartShake(x, (u8*)&local_60, uVar3, field_0x0.mQuake.field_0x18.norm());
            }
            break;
        case 3:
            local_60 = field_0x0.mShock.field_0x8 << field_0x0.mShock.field_0x24;
            x = field_0x0.mShock.field_0xc - field_0x0.mShock.field_0x24;
            local_60 |= func_8006F184(func_8006F1A4(field_0x0.mQuake.field_0x8, field_0x0.mQuake.field_0xc, x), x, field_0x88);
            local_60 |= func_8006F1D8(
                field_0x0.mShock.field_0x10 > field_0x0.mQuake.field_0x10 ? field_0x0.mShock.field_0x10 : field_0x0.mQuake.field_0x10,
                x
                );
            uVar3 = field_0x0.mShock.field_0x14 | field_0x0.mQuake.field_0x14;
            if (dKy_darkworld_check()) {
                uVar3 &= ~0x30;
            }
            pCamera = dComIfGp_getCamera(0);
            if (pCamera && pCamera->field_0x22f == 0x47) {
                cXyz tempSum = field_0x0.mShock.field_0x18 + field_0x0.mQuake.field_0x18;
                dCam_getBody()->StartShake(x, (u8*)&local_60, uVar3, tempSum.norm());
            }
            field_0x0.mQuake.field_0x24 = 0;
            field_0x0.mShock.field_0x24 = 0;
            break;
        default:
            pCamera = dComIfGp_getCamera(0);
            if (pCamera && pCamera->field_0x22f == 0x47) {
                dCam_getBody()->StopShake();
            }
            break;
        }
    }

    if (((field_0x50 & 1) != 0) && (field_0x64 != -99)) {
        field_0x64 = 0;
        field_0x54 = -1;
    }

    if (((field_0x6c & 1) != 0) && (field_0x80 != -99)) {
        field_0x80 = 0;
        field_0x70 = -1;
    }

    if (field_0x64 == 0 || field_0x80 == 0) {
        s32 local_68 = 0;
        if (field_0x54 == -1 || (field_0x50 & 1) != 0) {
            field_0x64 = -99;
            field_0x58 = 0;
            field_0x5c = 0;
            field_0x60 = 0;
        } else if (field_0x64 >= 0) {
            local_68 |= 1;
        }

        if (field_0x70 == -1 || (field_0x6c & 1) != 0) {
            field_0x80 = -99;
            field_0x74 = 0;
            field_0x78 = 0;
            field_0x7c = 0;
        } else if (field_0x80 >= 0) {
            local_68 |= 2;
        }
        switch (local_68) {
        case 1:
            u32 local_60;
            s32 x = field_0x5c;
            local_60 = field_0x58;
            local_60 |= func_8006F1D8(field_0x60, x);
            field_0x68 = x;
            mDoCPd_c::startMotorWave(0, func_8006F168(data, local_60, x), JUTGamePad::CRumble::VAL_0, 0x3c);
            break;
        case 2:
            x = field_0x78;
            local_60 = func_8006F184(field_0x74, x, field_0x88);
            local_60 |= func_8006F1D8(field_0x7c, x);
            field_0x84 = 0x7fffffff;
            mDoCPd_c::startMotorWave(0, func_8006F168(data, local_60, x), JUTGamePad::CRumble::VAL_1, 0x3c);
            break;
        case 3:
            local_60 = field_0x58 << field_0x64;
            x = field_0x5c - field_0x64;
            local_60 |= func_8006F184(func_8006F1A4(field_0x74, field_0x78, x), x, field_0x88);
            local_60 |= func_8006F1D8(
                field_0x60 > field_0x7c ? field_0x60 : field_0x7c,
                x
                );
            field_0x84 = x;
            field_0x68 = x;
            field_0x80 = 0;
            field_0x64 = 0;
            mDoCPd_c::startMotorWave(0, func_8006F168(data, local_60, x), JUTGamePad::CRumble::VAL_0, 0x3c);
            break;
        default:
            mDoCPd_c::stopMotorWave(0);
            mDoCPd_c::stopMotor(0);
            field_0x84 = -99;
            field_0x68 = -99;
            break;
        }
    }

    field_0x0.mQuake.field_0x0 = 0;
    field_0x0.mShock.field_0x0 = 0;
    field_0x6c = 0;
    field_0x50 = 0;

    if (field_0x0.mShock.field_0x24 >= 0) {
        field_0x0.mShock.field_0x24++;

        if (field_0x0.mShock.field_0x24 > field_0x0.mShock.field_0xc) {
            field_0x0.mShock.field_0x0 |= 1;
        }
    }

    if (field_0x64 >= 0) {
        field_0x64++;

        if (field_0x64 > field_0x68) {
            field_0x50 |= 1;
        }
    }

    if (field_0x0.mQuake.field_0x24 >= 0) {
        field_0x0.mQuake.field_0x24++;

        if (field_0x0.mQuake.field_0x24 > field_0x0.mQuake.field_0xc) {
            field_0x0.mQuake.field_0x24 = 0;
        }
    }

    if (field_0x80 >= 930) {
        field_0x80 = 0;
    } else if (field_0x80 >= 900) {
        mDoCPd_c::stopMotorWave(0);
        mDoCPd_c::stopMotor(0);
        field_0x80++;
    } else if (field_0x80 >= 0) {
        field_0x80++;
        if (field_0x80 > field_0x84) {
            field_0x80 = 0;
        }
    }

    field_0x88++;
    return 1;
}
#else
int dVibration_c::Run() {
    // NONMATCHING
}
#endif

/* 8006FA24-8006FB10 06A364 00EC+00 0/0 62/62 298/298 .text StartShock__12dVibration_cFii4cXyz */
bool dVibration_c::StartShock(int param_0, int param_1, cXyz param_2) {
    bool ret = false;
    if (param_1 & 0x7eU) {
        field_0x0.mShock.field_0x4 = param_0;
        field_0x0.mShock.field_0x24 = 0;
        field_0x0.mShock.field_0x14 = param_1;
        field_0x0.mShock.field_0x18 = param_2;
        field_0x0.mShock.field_0x8 = CS_patt[param_0].field_0x04;
        field_0x0.mShock.field_0xc = CS_patt[param_0].field_0x02;
        field_0x0.mShock.field_0x10 = CS_patt[param_0].field_0x00;
        ret = true;
    }
    if (param_1 & 1 && dComIfGs_checkOptVibration() == 1) {
        field_0x54 = param_0;
        field_0x64 = 0;
        field_0x58 = MS_patt[param_0].field_0x04;
        field_0x5c = MS_patt[param_0].field_0x02;
        ret = true;
    }
    return ret;
}

/* 8006FB10-8006FC0C 06A450 00FC+00 0/0 8/8 67/67 .text StartQuake__12dVibration_cFii4cXyz */
bool dVibration_c::StartQuake(int param_0, int param_1, cXyz param_2) {
    bool ret = false;
    if (param_1 & 0x7eU) {
        field_0x0.mQuake.field_0x4 = param_0;
        field_0x0.mQuake.field_0x24 = 0;
        field_0x0.mQuake.field_0x14 = param_1;
        field_0x0.mQuake.field_0x18 = param_2;
        field_0x0.mQuake.field_0x8 = CQ_patt[param_0].field_0x04;
        field_0x0.mQuake.field_0xc = CQ_patt[param_0].field_0x02;
        field_0x0.mQuake.field_0x10 = CQ_patt[param_0].field_0x00;
        ret = true;
    }
    if (param_1 & 1 && dComIfGs_checkOptVibration() == 1) {
        field_0x70 = param_0;
        field_0x80 = 0;
        field_0x74 = MQ_patt[param_0].field_0x04;
        field_0x78 = MQ_patt[param_0].field_0x02;
        field_0x7c = CQ_patt[param_0].field_0x00;
        ret = true;
    }
    return ret;
}

/* 8006FC0C-8006FD94 06A54C 0188+00 0/0 2/2 2/2 .text StartQuake__12dVibration_cFPCUcii4cXyz */
bool dVibration_c::StartQuake(u8 const* param_0, int param_1, int param_2, cXyz param_3) {
    int iVar7;
    int iVar6;
    int iVar5;
    int iVar4;
    bool bVar8 = false;
    int uVar1 = (param_0[0] << 8) | param_0[1];
    if (uVar1 >= 9) {
        iVar7 = 3;
    } else {
        iVar7 = 0;
    }
    if (uVar1 >= 1) {
        iVar6 = 2;
    } else {
        iVar6 = 0;
    }
    
    if (uVar1 >= 0x11) {
        iVar5 = 4;
    } else {
        iVar5 = 0;
    }
    if (uVar1 >= 0x19) {
        iVar4 = 5;
    } else {
        iVar4 = 0;
    }
    u32 this_00 =
        param_0[iVar6] << 24 | param_0[iVar7] << 16 | param_0[iVar5] << 8 | (param_0[iVar4]);
    if ((param_2 & 0x7e) != 0) {
        field_0x0.mQuake.field_0x4 = 0;
        field_0x0.mQuake.field_0x24 = 0;
        field_0x0.mQuake.field_0x14 = param_2;
        field_0x0.mQuake.field_0x18 = param_3;
        field_0x0.mQuake.field_0x8 = func_8006F1A4(this_00, param_0[1], 0x20);
        field_0x0.mQuake.field_0xc = 0x20;
        field_0x0.mQuake.field_0x10 = param_1;
        bVar8 = true;
    }
    if (((param_2 & 1) != 0) &&
        (dComIfGs_checkOptVibration() == 1))
    {
        field_0x70 = 0;
        field_0x80 = 0;
        field_0x74 = func_8006F1A4(this_00, param_0[1], 0x20);
        field_0x78 = 0x20;
        field_0x7c = param_1;
        bVar8 = true;
    }
    return bVar8;
}

/* 8006FD94-8006FE00 06A6D4 006C+00 0/0 6/6 82/82 .text            StopQuake__12dVibration_cFi */
int dVibration_c::StopQuake(int param_0) {
    int ret = 0;
    if (param_0 & 0x7eU) {
        if (field_0x0.mQuake.field_0x24 >= 0) {
            field_0x0.mQuake.field_0x14 &= ~param_0;
            if (field_0x0.mQuake.field_0x14 == 0) {
                field_0x0.mQuake.field_0x0 |= 1;
            }
            ret = 1;
        }
    }
    if (param_0 & 1 && field_0x80 >= 0) {
        field_0x6c |= 1;
        ret = 1;
    }
    return ret;
}

/* 8006FE00-8006FE5C 06A740 005C+00 2/2 0/0 0/0 .text            Kill__12dVibration_cFv */
void dVibration_c::Kill() {
    mDoCPd_c::stopMotorWaveHard(0);
    mDoCPd_c::stopMotorHard(0);
    setDefault();
}   

/* 8006FE5C-8006FE84 06A79C 0028+00 0/0 0/0 10/10 .text            CheckQuake__12dVibration_cFv */
bool dVibration_c::CheckQuake() {
    return field_0x0.mQuake.field_0x4 != -1 || field_0x70 != -1;
}

/* 8006FE84-8006FF04 06A7C4 0080+00 2/2 0/0 0/0 .text            setDefault__12dVibration_cFv */
void dVibration_c::setDefault() {
    field_0x54 = -1;
    field_0x0.mShock.field_0x4 = -1;
    field_0x70 = -1;
    field_0x0.mQuake.field_0x4 = -1;
    field_0x50 = 0;
    field_0x0.mShock.field_0x0 = 0;
    field_0x6c = 0;
    field_0x0.mQuake.field_0x0 = 0;
    field_0x58 = 0;
    field_0x0.mShock.field_0x8 = 0;
    field_0x74 = 0;
    field_0x0.mQuake.field_0x8 = 0;
    field_0x5c = 0;
    field_0x0.mShock.field_0xc = 0;
    field_0x78 = 0;
    field_0x0.mQuake.field_0xc = 0;
    field_0x60 = 0;
    field_0x0.mShock.field_0x10 = 0;
    field_0x7c = 0;
    field_0x0.mQuake.field_0x10 = 0;
    field_0x64 = -99;
    field_0x0.mShock.field_0x24 = -99;
    field_0x80 = -99;
    field_0x0.mQuake.field_0x24 = -99;
    field_0x68 = -99;
    field_0x84 = -99;
    field_0x8c = 0;
    field_0x88 = 0;
}

/* 8006FF04-8006FF38 06A844 0034+00 0/0 2/2 0/0 .text            Init__12dVibration_cFv */
void dVibration_c::Init() {
    Kill();
    setDefault();
}

/* 8006FF38-8006FFF8 06A878 00C0+00 0/0 1/1 0/0 .text            Pause__12dVibration_cFv */
void dVibration_c::Pause() {
    if (field_0x8c != -1) {
        if (field_0x54 != -1 || field_0x70 != -1) {
            mDoCPd_c::stopMotorWaveHard(0);
            mDoCPd_c::stopMotorHard(0);
        }
        field_0x54 = -1;
        field_0x0.mShock.field_0x4 = -1;
        field_0x64 = -99;
        field_0x0.mShock.field_0x24 = -99;
        if (field_0x0.mQuake.field_0x4 != -1) {
            field_0x0.mQuake.field_0x24 = 0;
        }
        if (field_0x70 != -1) {
            field_0x80 = 0;
        }
        field_0x8c = -1;
    }
}

/* 8006FFF8-80070018 06A938 0020+00 0/0 1/1 0/0 .text            Remove__12dVibration_cFv */
void dVibration_c::Remove() {
    Kill();
}