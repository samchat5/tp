#ifndef D_A_OBJ_MIRROR_SAND_H
#define D_A_OBJ_MIRROR_SAND_H

#include "d/d_com_inf_game.h"
#include "d/d_bg_w.h"

/**
 * @ingroup actors-objects
 * @class daObjMirrorSand_c
 * @brief Twilight Mirror Sand
 *
 * @details
 *
 */
class daObjMirrorSand_c : public fopAc_ac_c {
public:
    /* 80C98508 */ void initBaseMtx();
    /* 80C98534 */ void setBaseMtx();

    inline ~daObjMirrorSand_c();

    inline int createHeap();
    inline int create();
    inline int execute();
    inline int draw();

    inline void create_init();

    u8 getSwitchNo() { return (fopAcM_GetParam(this) >> 8) & 0xFF; }
    void setAnmSpeed(f32 speed) { mpBck->setPlaySpeed(speed); }

    bool isSwitch() {
        return fopAcM_isSwitch(this, getSwitchNo()) ||
               dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[361]) ||
               dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[354]);
    }

private:
    /* 0x568 */ J3DModel* mpModel;
    /* 0x56C */ mDoExt_bckAnm* mpBck;
    /* 0x570 */ request_of_phase_process_class mPhase;
    /* 0x578 */ dBgW* mpCurrentBgw;
    /* 0x57C */ dBgW mBgw[2];
    /* 0x6FC */ Mtx mBgMtx;
};

STATIC_ASSERT(sizeof(daObjMirrorSand_c) == 0x72C);

#endif /* D_A_OBJ_MIRROR_SAND_H */
