/**
 * d_a_tag_wara_howl.cpp
 *
 */

#include "rel/d/a/tag/d_a_tag_wara_howl/d_a_tag_wara_howl.h"
#include "d/com/d_com_inf_game.h"

/* 80D63F38-80D63F74 000078 003C+00 2/2 0/0 0/0 .text            __ct__13daTagWrHowl_cFv */
daTagWrHowl_c::daTagWrHowl_c() {}

/* 80D63F74-80D63FD4 0000B4 0060+00 1/0 0/0 0/0 .text            __dt__13daTagWrHowl_cFv */
daTagWrHowl_c::~daTagWrHowl_c() {}

/* 80D63FD4-80D6402C 000114 0058+00 1/1 0/0 0/0 .text            create__13daTagWrHowl_cFv */
int daTagWrHowl_c::create() {
    if (!fopAcM_CheckCondition(this, 8)) {
        new (this) daTagWrHowl_c();
        fopAcM_OnCondition(this, 8);
    }

    init();
    return cPhs_COMPLEATE_e;
}

/* 80D6402C-80D64034 00016C 0008+00 1/1 0/0 0/0 .text            Delete__13daTagWrHowl_cFv */
int daTagWrHowl_c::Delete() {
    return 1;
}

/* 80D64034-80D6403C 000174 0008+00 1/1 0/0 0/0 .text            draw__13daTagWrHowl_cFv */
int daTagWrHowl_c::draw() {
    return 1;
}

/* 80D6403C-80D64090 00017C 0054+00 1/1 0/0 0/0 .text            execute__13daTagWrHowl_cFv */
int daTagWrHowl_c::execute() {
    mAttentionInfo.mFlags = 0;

    if (chkWlfInTag()) {
        mAttentionInfo.mFlags |= 0x80;
        mAttentionInfo.field_0x4[3] = 65;
    }

    return 1;
}

/* 80D64090-80D640B4 0001D0 0024+00 1/1 0/0 0/0 .text            init__13daTagWrHowl_cFv */
void daTagWrHowl_c::init() {
    field_0x56c = 50.0f * mScale.x;
    field_0x570 = field_0x56c * field_0x56c;
}

/* 80D640B4-80D64144 0001F4 0090+00 1/1 0/0 0/0 .text            chkWlfInTag__13daTagWrHowl_cFv */
bool daTagWrHowl_c::chkWlfInTag() {
    if (dComIfGp_getPlayer(0) == NULL) {
        return false;
    }

    if (daPy_py_c::i_checkNowWolf()) {
        cXyz player_pos = dComIfGp_getPlayer(0)->current.pos;
        if (player_pos.abs2(current.pos) < field_0x570) {
            return true;
        }
    }

    return false;
}

/* 80D64144-80D64198 000284 0054+00 1/0 0/0 0/0 .text daTagWrHowl_create__FP13daTagWrHowl_c */
static int daTagWrHowl_create(daTagWrHowl_c* i_this) {
    if (!fopAcM_CheckCondition(i_this, 8)) {
        new (i_this) daTagWrHowl_c();
        fopAcM_OnCondition(i_this, 8);
    }

    return i_this->create();
}

/* 80D64198-80D641B8 0002D8 0020+00 1/0 0/0 0/0 .text daTagWrHowl_Delete__FP13daTagWrHowl_c */
static int daTagWrHowl_Delete(daTagWrHowl_c* i_this) {
    return i_this->Delete();
}

/* 80D641B8-80D641D8 0002F8 0020+00 1/0 0/0 0/0 .text daTagWrHowl_execute__FP13daTagWrHowl_c */
static int daTagWrHowl_execute(daTagWrHowl_c* i_this) {
    return i_this->execute();
}

/* 80D641D8-80D641F8 000318 0020+00 1/0 0/0 0/0 .text            daTagWrHowl_draw__FP13daTagWrHowl_c
 */
static int daTagWrHowl_draw(daTagWrHowl_c* i_this) {
    return i_this->draw();
}

/* ############################################################################################## */
/* 80D64204-80D64224 -00001 0020+00 1/0 0/0 0/0 .data            daTagWrHowl_METHODS */
static actor_method_class daTagWrHowl_METHODS = {
    (process_method_func)daTagWrHowl_create,  (process_method_func)daTagWrHowl_Delete,
    (process_method_func)daTagWrHowl_execute, (process_method_func)NULL,
    (process_method_func)daTagWrHowl_draw,
};

/* 80D64224-80D64254 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Tag_WaraHowl */
extern actor_process_profile_definition g_profile_Tag_WaraHowl = {
    -3,
    7,
    0xFFFD,
    PROC_Tag_WaraHowl,
    &g_fpcLf_Method.mBase,
    sizeof(daTagWrHowl_c),
    0,
    0,
    &g_fopAc_Method.base,
    0x02DD,
    &daTagWrHowl_METHODS,
    0x00040000,
    0,
    14,
};