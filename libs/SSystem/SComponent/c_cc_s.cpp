//
// Generated By: dol2asm
// Translation Unit: c_cc_s
//

#include "SSystem/SComponent/c_cc_s.h"
#include "dol2asm.h"
#include "global.h"

//
// Declarations:
//

/* 80264A6C-80264A94 25F3AC 0028+00 0/0 1/1 0/0 .text            __ct__4cCcSFv */
cCcS::cCcS() {}

/* 80264A94-80264B60 25F3D4 00CC+00 1/1 1/1 0/0 .text            Ct__4cCcSFv */
void cCcS::Ct() {
    for (cCcD_Obj** obj = mpObjAt; obj < mpObjAt + ARRAY_SIZE(mpObjAt); ++obj) {
        *obj = NULL;
    }
    mObjAtCount = 0;
    for (cCcD_Obj** obj = mpObjTg; obj < mpObjTg + ARRAY_SIZE(mpObjTg); ++obj) {
        *obj = NULL;
    }
    mObjTgCount = 0;
    for (cCcD_Obj** obj = mpObjCo; obj < mpObjCo + ARRAY_SIZE(mpObjCo); ++obj) {
        *obj = NULL;
    }
    mObjCoCount = 0;
    for (cCcD_Obj** obj = mpObj; obj < mpObj + ARRAY_SIZE(mpObj); ++obj) {
        *obj = NULL;
    }
    mObjCount = 0;
}

/* 80264B60-80264B80 25F4A0 0020+00 0/0 1/1 0/0 .text            Dt__4cCcSFv */
void cCcS::Dt() {
    this->Ct();
}

/* 80264B80-80264BA8 25F4C0 0028+00 1/1 0/0 0/0 .text            GetWt__4cCcSCFUc */
WeightType cCcS::GetWt(u8 param_0) const {
    if (param_0 == 0xFF) {
        return WeightType_0;
    }
    if (param_0 == 0xFE) {
        return WeightType_1;
    }
    return WeightType_2;
}

/* 80264BA8-80264C5C 25F4E8 00B4+00 0/0 7/7 454/454 .text            Set__4cCcSFP8cCcD_Obj */
void cCcS::Set(cCcD_Obj* obj) {
    if (obj->ChkAtSet()) {
        if (mObjAtCount < ARRAY_SIZE(mpObjAt)) {
            mpObjAt[mObjAtCount] = obj;
            mObjAtCount++;
        }
    }
    if (obj->ChkTgSet()) {
        if (mObjTgCount < ARRAY_SIZE(mpObjTg)) {
            mpObjTg[mObjTgCount] = obj;
            mObjTgCount++;
        }
    }
    if (obj->ChkCoSet()) {
        if (mObjCoCount < ARRAY_SIZE(mpObjCo)) {
            mpObjCo[mObjCoCount] = obj;
            mObjCoCount++;
        }
    }
    if (mObjCount < ARRAY_SIZE(mpObj)) {
        mpObj[mObjCount] = obj;
        mObjCount++;
    }
}

/* 80264C5C-80264CF0 25F59C 0094+00 1/1 0/0 0/0 .text            ClrCoHitInf__4cCcSFv */
void cCcS::ClrCoHitInf() {
    for (cCcD_Obj** obj = this->mpObjCo; obj < this->mpObjCo + this->mObjCoCount; ++obj) {
        if (*obj != NULL) {
            (*obj)->GetGObjInf()->ClrCoHit();
            cCcD_Stts* stts = (*obj)->GetStts();
            if (stts != NULL) {
                stts->ClrCcMove();
            }
        }
    }
}

/* 80264CF0-80264D90 25F630 00A0+00 1/1 0/0 0/0 .text            ClrTgHitInf__4cCcSFv */
void cCcS::ClrTgHitInf() {
    for (cCcD_Obj** obj = this->mpObjTg; obj < this->mpObjTg + this->mObjTgCount; ++obj) {
        if (*obj != NULL) {
            (*obj)->GetGObjInf()->ClrTgHit();
            cCcD_Stts* stts = (*obj)->GetStts();
            if (stts != NULL) {
                stts->ClrTg();
            }
        }
    }
}

/* 80264D90-80264E2C 25F6D0 009C+00 1/1 0/0 0/0 .text            ClrAtHitInf__4cCcSFv */
void cCcS::ClrAtHitInf() {
    for (cCcD_Obj** obj = this->mpObjAt; obj < this->mpObjAt + this->mObjAtCount; ++obj) {
        if (*obj != NULL) {
            (*obj)->GetGObjInf()->ClrAtHit();
            cCcD_Stts* stts = (*obj)->GetStts();
            if (stts != NULL) {
                stts->ClrAt();
            }
        }
    }
}

/* 80264E2C-80264F40 25F76C 0114+00 1/1 0/0 0/0 .text ChkNoHitAtTg__4cCcSFP8cCcD_ObjP8cCcD_Obj */
bool cCcS::ChkNoHitAtTg(cCcD_Obj* obj1, cCcD_Obj* obj2) {
    fopAc_ac_c* ac1 = obj1->GetAc();
    fopAc_ac_c* ac2 = obj2->GetAc();
    if ((ac1 != NULL && ac2 != NULL && ac1 == ac2) || (obj1->GetAtGrp() & obj2->GetTgGrp()) == 0 ||
        (obj1->GetAtType() & obj2->GetTgType()) == 0) {
        return 1;
    } else {
        return this->ChkNoHitGAtTg(obj1->GetGObjInf(), obj2->GetGObjInf(),
                                   obj1->GetStts()->GetGStts(), obj2->GetStts()->GetGStts());
    }
}

/* 80264F40-8026515C 25F880 021C+00 1/1 0/0 0/0 .text            ChkAtTg__4cCcSFv */
void cCcS::ChkAtTg() {
    cCcD_Obj** objTgEnd = mpObjTg + mObjTgCount;
    this->ClrAtHitInf();
    this->ClrTgHitInf();
    for (cCcD_Obj** pObjAt = mpObjAt; pObjAt < mpObjAt + mObjAtCount; ++pObjAt) {
        if (*pObjAt == NULL || !(*pObjAt)->ChkAtSet())
            continue;
        cCcD_ShapeAttr* atShapeAttr = (*pObjAt)->GetShapeAttr();
        for (cCcD_Obj** pObjTg = mpObjTg; pObjTg < objTgEnd; ++pObjTg) {
            if (*pObjTg == NULL || !(*pObjTg)->ChkTgSet())
                continue;
            if (!(*pObjAt)->GetDivideInfo().Chk((*pObjTg)->GetDivideInfo()))
                continue;
            if (this->ChkNoHitAtTg(*pObjAt, *pObjTg))
                continue;
            cCcD_ShapeAttr* tgShapeAttr = (*pObjTg)->GetShapeAttr();
            static cXyz cross;
            bool didCross = atShapeAttr->CrossAtTg(*tgShapeAttr, &cross);
            bool anyBsRevHit = (*pObjAt)->ChkBsRevHit() || (*pObjTg)->ChkBsRevHit();
            if (!anyBsRevHit && didCross) {
                this->SetAtTgCommonHitInf(*pObjAt, *pObjTg, &cross);
            } else if (anyBsRevHit && !didCross) {
                cCcD_ShapeAttr* atShape2 = (*pObjAt)->GetShapeAttr();
                if (atShape2 == NULL) {
                    cross.set(0.0f, 0.0f, 0.0f);
                } else {
                    atShape2->GetWorkAab().CalcCenter(&cross);
                }
                this->SetAtTgCommonHitInf(*pObjAt, *pObjTg, &cross);
            }
        }
    }
}

/* 8026515C-80265230 25FA9C 00D4+00 1/1 0/0 0/0 .text ChkNoHitCo__4cCcSFP8cCcD_ObjP8cCcD_Obj */
bool cCcS::ChkNoHitCo(cCcD_Obj* obj1, cCcD_Obj* obj2) {
    fopAc_ac_c* ac1 = obj1->GetAc();
    fopAc_ac_c* ac2 = obj2->GetAc();
    if (!(((ac1 == NULL || ac2 == NULL) || ac1 != ac2 || obj1->ChkCoSameActorHit() ||
           obj2->ChkCoSameActorHit()) &&
          (obj1->GetCoIGrp() & (obj2->GetCoVsGrp() >> 3)) &&
          ((obj1->GetCoVsGrp() >> 3) & obj2->GetCoIGrp() && !this->ChkNoHitGCo(obj1, obj2)))) {
        return true;
    } else {
        return false;
    }
}

/* 80265230-802653A0 25FB70 0170+00 1/1 0/0 0/0 .text            ChkCo__4cCcSFv */
void cCcS::ChkCo() {
    this->ClrCoHitInf();
    if (mObjCoCount <= 1)
        return;
    cCcD_Obj** objCoEnd = this->mpObjCo + this->mObjCoCount;
    for (cCcD_Obj** objCo1 = this->mpObjCo; objCo1 < objCoEnd - 1; ++objCo1) {
        if (*objCo1 == NULL || !(*objCo1)->ChkCoSet())
            continue;
        cCcD_ShapeAttr* co1ShapeAttr = (*objCo1)->GetShapeAttr();
        for (cCcD_Obj** objCo2 = objCo1 + 1; objCo2 < objCoEnd; ++objCo2) {
            if (*objCo2 == NULL || !(*objCo2)->ChkCoSet())
                continue;
            if (!(*objCo1)->GetDivideInfo().Chk((*objCo2)->GetDivideInfo()))
                continue;
            if (this->ChkNoHitCo(*objCo1, *objCo2))
                continue;
            cCcD_ShapeAttr* co2ShapeAttr = (*objCo2)->GetShapeAttr();
            f32 crossLen;
            if (co1ShapeAttr->CrossCo(*co2ShapeAttr, &crossLen)) {
                cXyz& obj2CoCP = co2ShapeAttr->GetCoCP();
                cXyz& obj1CoCP = co1ShapeAttr->GetCoCP();
                this->SetCoCommonHitInf(*objCo1, &obj1CoCP, *objCo2, &obj2CoCP, crossLen);
            }
        }
    }
}

/* 802653A0-802653C8 25FCE0 0028+00 1/0 0/0 0/0 .text
 * CalcTgPlusDmg__4cCcSFP8cCcD_ObjP8cCcD_ObjP9cCcD_SttsP9cCcD_Stts */
void cCcS::CalcTgPlusDmg(cCcD_Obj* obj1, cCcD_Obj* obj2, cCcD_Stts* stts1, cCcD_Stts* stts2) {
    stts2->PlusDmg(obj1->GetAtAtp());
}

/* 802653C8-802655E4 25FD08 021C+00 1/1 0/0 0/0 .text
 * SetAtTgCommonHitInf__4cCcSFP8cCcD_ObjP8cCcD_ObjP4cXyz        */
void cCcS::SetAtTgCommonHitInf(cCcD_Obj* obj1, cCcD_Obj* obj2, cXyz* pXyz) {
    cCcD_Stts* obj1Stts = obj1->GetStts();
    cCcD_Stts* obj2Stts = obj2->GetStts();
    if (!this->ChkAtTgHitAfterCross(!obj2->ChkTgNoAtHitInfSet(), !obj1->ChkAtNoTgHitInfSet(),
                                    obj1->GetGObjInf(), obj2->GetGObjInf(), obj1Stts, obj2Stts,
                                    obj1Stts->GetGStts(), obj2Stts->GetGStts())) {
        if (!obj2->ChkTgNoAtHitInfSet()) {
            obj1->SetAtHit(obj2);
        }
        bool tmp = !(obj1->ChkAtNoTgHitInfSet() ||
                     (obj1->ChkAtType(0x80) && obj2->ChkTgNoSlingHitInfSet()));
        if (tmp) {
            obj2->SetTgHit(obj1);
            this->CalcTgPlusDmg(obj1, obj2, obj1Stts, obj2Stts);
        }
        this->SetAtTgGObjInf(!obj2->ChkTgNoAtHitInfSet(), tmp, obj1, obj2, obj1->GetGObjInf(),
                             obj2->GetGObjInf(), obj1Stts, obj2Stts, obj1Stts->GetGStts(),
                             obj2Stts->GetGStts(), pXyz);
    }
}

/* 802655E4-80265750 25FF24 016C+00 1/1 0/0 0/0 .text
 * SetCoCommonHitInf__4cCcSFP8cCcD_ObjP4cXyzP8cCcD_ObjP4cXyzf   */
void cCcS::SetCoCommonHitInf(cCcD_Obj* obj1, cXyz* xyz1, cCcD_Obj* obj2, cXyz* xyz2, f32 crossLen) {
    bool obj2CoHitInfSet = !obj2->ChkCoNoCoHitInfSet();
    bool obj1CoHitInfSet = !obj1->ChkCoNoCoHitInfSet();
    if (obj2CoHitInfSet) {
        obj1->SetCoHit(obj2);
    }
    if (obj1CoHitInfSet) {
        obj2->SetCoHit(obj1);
    }
    if (obj2CoHitInfSet && obj1CoHitInfSet) {
        this->SetPosCorrect(obj1, xyz1, obj2, xyz2, crossLen);
    }
    cCcD_Stts* obj1Stts = obj1->GetStts();
    cCcD_Stts* obj2Stts = obj2->GetStts();
    this->SetCoGObjInf(obj2CoHitInfSet, obj1CoHitInfSet, obj1->GetGObjInf(), obj2->GetGObjInf(),
                       obj1Stts, obj2Stts, obj1Stts->GetGStts(), obj2Stts->GetGStts());
}

/* 80265750-80265BB4 260090 0464+00 1/0 0/0 0/0 .text
 * SetPosCorrect__4cCcSFP8cCcD_ObjP4cXyzP8cCcD_ObjP4cXyzf       */
void cCcS::SetPosCorrect(cCcD_Obj* obj1, cXyz* xyz1, cCcD_Obj* obj2, cXyz* xyz2, f32 crossLen) {
    if (obj1->ChkCoNoCrr() || obj2->ChkCoNoCrr())
        return;
    if (obj1->GetStts() == NULL || obj2->GetStts() == NULL)
        return;
    if (obj1->GetStts()->GetAc() != NULL && obj1->GetStts()->GetAc() == obj2->GetStts()->GetAc())
        return;
    if (!(fabsf(crossLen) < (1.0f / 125.0f))) {
        this->SetCoGCorrectProc(obj1, obj2);
        bool bothCoSph3DCrr = obj1->ChkCoSph3DCrr() && obj2->ChkCoSph3DCrr();
        WeightType obj1WeightType = this->GetWt(obj1->GetStts()->GetWeightUc());
        WeightType obj2WeightType = this->GetWt(obj2->GetStts()->GetWeightUc());
        f32 obj1SrcWeight = obj1->GetStts()->GetWeightF();
        f32 obj2SrcWeight = obj2->GetStts()->GetWeightF();
        f32 combinedWeight = obj1SrcWeight + obj2SrcWeight;

        f32 obj2Weight, obj1Weight;
        if (cM3d_IsZero(combinedWeight)) {
            obj1SrcWeight = 1;
            obj2SrcWeight = 1;
            combinedWeight = 2;
        }
        f32 invCombinedWeight = 1 / combinedWeight;
        if (obj1WeightType == WeightType_0) {
            if (obj2WeightType == WeightType_0) {
                return;
            } else {
                obj2Weight = 0;
                obj1Weight = 1;
            }
        } else if (obj1WeightType == WeightType_1) {
            if (obj2WeightType == WeightType_0) {
                obj2Weight = 1;
                obj1Weight = 0;
            } else if (obj2WeightType == WeightType_1) {
                obj2Weight = 0.5;
                obj1Weight = 0.5;
            } else {
                obj2Weight = 0;
                obj1Weight = 1;
            }
        } else {
            if (obj2WeightType == WeightType_2) {
                obj2Weight = obj2SrcWeight * invCombinedWeight;
                obj1Weight = obj1SrcWeight * invCombinedWeight;
            } else {
                obj2Weight = 1;
                obj1Weight = 0;
            }
        }
        f32 objDistLen;
        Vec obj1Move;
        Vec obj2Move;
        Vec objsDist;
        if (bothCoSph3DCrr) {
            PSVECSubtract(xyz2, xyz1, &objsDist);
            objDistLen = PSVECMag(&objsDist);
        } else {
            objsDist.x = xyz2->x - xyz1->x;
            objsDist.y = 0;
            objsDist.z = xyz2->z - xyz1->z;
            objDistLen = sqrtf(objsDist.x * objsDist.x + objsDist.z * objsDist.z);
        }
        if (!cM3d_IsZero(objDistLen)) {
            if (bothCoSph3DCrr) {
                PSVECScale(&objsDist, &objsDist, crossLen / objDistLen);
                obj2Weight *= -1;
                PSVECScale(&objsDist, &obj1Move, obj2Weight);
                PSVECScale(&objsDist, &obj2Move, obj1Weight);
            } else {
                f32 pushFactor = crossLen / objDistLen;
                objsDist.x *= pushFactor;
                objsDist.z *= pushFactor;
                obj1Move.x = -objsDist.x * obj2Weight;
                obj1Move.y = 0;
                obj1Move.z = -objsDist.z * obj2Weight;
                obj2Move.x = objsDist.x * obj1Weight;
                obj2Move.y = 0;
                obj2Move.z = objsDist.z * obj1Weight;
            }
        } else {
            obj1Move.y = 0;
            obj1Move.z = 0;
            obj2Move.y = 0;
            obj2Move.z = 0;
            if (!cM3d_IsZero(crossLen)) {
                obj1Move.x = -crossLen * obj2Weight;
                obj2Move.x = crossLen * obj1Weight;
            } else {
                obj1Move.x = -obj2Weight;
                obj2Move.x = obj1Weight;
            }
        }
        obj1->GetStts()->PlusCcMove(obj1Move.x, obj1Move.y, obj1Move.z);
        obj2->GetStts()->PlusCcMove(obj2Move.x, obj2Move.y, obj2Move.z);
        PSVECAdd(xyz1, &obj1Move, xyz1);
        PSVECAdd(xyz2, &obj2Move, xyz2);
    }
}

/* 80265BB4-80265CCC 2604F4 0118+00 1/1 0/0 0/0 .text            CalcArea__4cCcSFv */
void cCcS::CalcArea() {
    cM3dGAab aab;
    aab.ClearForMinMax();
    for (cCcD_Obj** pObj = mpObj; pObj < mpObj + mObjCount; ++pObj) {
        if (*pObj != NULL) {
            cCcD_ShapeAttr* objShape = (*pObj)->GetShapeAttr();
            objShape->CalcAabBox();
            aab.SetMinMax(objShape->GetWorkAab());
        }
    }
    mDivideArea.SetArea(aab);
    for (cCcD_Obj** pObj = mpObj; pObj < mpObj + mObjCount; ++pObj) {
        if (*pObj != NULL) {
            const cCcD_ShapeAttr* objShape = (*pObj)->GetShapeAttr();
            cCcD_DivideInfo* divideInfo = &(*pObj)->GetDivideInfo();
            mDivideArea.CalcDivideInfo(divideInfo, objShape->GetWorkAab(), (*pObj)->ChkBsRevHit());
        }
    }
}

/* 80265CCC-80265D30 26060C 0064+00 0/0 1/1 0/0 .text            Move__4cCcSFv */
void cCcS::Move() {
    this->CalcArea();
    this->ChkAtTg();
    this->ChkCo();
    this->MoveAfterCheck();
    mObjAtCount = 0;
    mObjTgCount = 0;
    mObjCoCount = 0;
    mObjCount = 0;
}

/* 80265D30-80265DF4 260670 00C4+00 0/0 1/1 0/0 .text            DrawClear__4cCcSFv */
void cCcS::DrawClear() {
    for (cCcD_Obj** obj = this->mpObjAt; obj < this->mpObjAt + this->mObjAtCount; ++obj) {
        *obj = NULL;
    }
    this->mObjAtCount = 0;
    for (cCcD_Obj** obj = this->mpObjTg; obj < this->mpObjTg + this->mObjTgCount; ++obj) {
        *obj = NULL;
    }
    this->mObjTgCount = 0;
    for (cCcD_Obj** obj = this->mpObjCo; obj < this->mpObjCo + this->mObjCoCount; ++obj) {
        *obj = NULL;
    }
    this->mObjCoCount = 0;
    for (cCcD_Obj** obj = this->mpObj; obj < this->mpObj + this->mObjCount; ++obj) {
        *obj = NULL;
    }
    this->mObjCount = 0;
}

/* 80265DF4-80265DF8 260734 0004+00 1/0 1/0 0/0 .text
 * SetCoGCorrectProc__4cCcSFP8cCcD_ObjP8cCcD_Obj                */
void cCcS::SetCoGCorrectProc(cCcD_Obj* param_0, cCcD_Obj* param_1) {
    /* empty function */
}

/* 80265DF8-80265DFC 260738 0004+00 1/0 0/0 0/0 .text
 * SetCoGObjInf__4cCcSFbbP12cCcD_GObjInfP12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GStts
 */
void cCcS::SetCoGObjInf(bool param_0, bool param_1, cCcD_GObjInf* param_2, cCcD_GObjInf* param_3,
                        cCcD_Stts* param_4, cCcD_Stts* param_5, cCcD_GStts* param_6,
                        cCcD_GStts* param_7) {
    /* empty function */
}

/* 80265DFC-80265E00 26073C 0004+00 1/0 0/0 0/0 .text
 * SetAtTgGObjInf__4cCcSFbbP8cCcD_ObjP8cCcD_ObjP12cCcD_GObjInfP12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GSttsP4cXyz
 */
void cCcS::SetAtTgGObjInf(bool param_0, bool param_1, cCcD_Obj* param_2, cCcD_Obj* param_3,
                          cCcD_GObjInf* param_4, cCcD_GObjInf* param_5, cCcD_Stts* param_6,
                          cCcD_Stts* param_7, cCcD_GStts* param_8, cCcD_GStts* param_9,
                          cXyz* param_10) {
    /* empty function */
}

/* 80265E00-80265E08 260740 0008+00 1/0 0/0 0/0 .text
 * ChkNoHitGAtTg__4cCcSFPC12cCcD_GObjInfPC12cCcD_GObjInfP10cCcD_GSttsP10cCcD_GStts */
bool cCcS::ChkNoHitGAtTg(cCcD_GObjInf const* param_0, cCcD_GObjInf const* param_1,
                         cCcD_GStts* param_2, cCcD_GStts* param_3) {
    return false;
}

/* 80265E08-80265E10 260748 0008+00 1/0 0/0 0/0 .text
 * ChkAtTgHitAfterCross__4cCcSFbbPC12cCcD_GObjInfPC12cCcD_GObjInfP9cCcD_SttsP9cCcD_SttsP10cCcD_GSttsP10cCcD_GStts
 */
bool cCcS::ChkAtTgHitAfterCross(bool param_0, bool param_1, cCcD_GObjInf const* param_2,
                                cCcD_GObjInf const* param_3, cCcD_Stts* param_4, cCcD_Stts* param_5,
                                cCcD_GStts* param_6, cCcD_GStts* param_7) {
    return false;
}

/* 80265E10-80265E18 260750 0008+00 1/0 0/0 0/0 .text ChkNoHitGCo__4cCcSFP8cCcD_ObjP8cCcD_Obj */
bool cCcS::ChkNoHitGCo(cCcD_Obj* param_0, cCcD_Obj* param_1) {
    return false;
}

/* 80265E18-80265E1C 260758 0004+00 1/0 0/0 0/0 .text            MoveAfterCheck__4cCcSFv */
void cCcS::MoveAfterCheck() {
    /* empty function */
}
