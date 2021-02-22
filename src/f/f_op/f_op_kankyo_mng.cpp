/* f_op_kankyo_mng.cpp autogenerated by split.py v0.4 at 2021-02-15 20:20:10.089723 */

#include "d/d_com/d_com_inf_game/d_com_inf_game.h"
#include "SComponent/c_malloc.h"
#include "SComponent/c_lib.h"
#include "f/f_pc/f_pc_manager.h"
#include "global.h"

// additional symbols needed for f_op_kankyo_mng.cpp
// autogenerated by split.py v0.4 at 2021-02-15 20:20:10.089754
extern "C" {
void _restgpr_28(void);
void _restgpr_29(void);
void _savegpr_28(void);
void _savegpr_29(void);
void cLib_memSet__FPviUl(void);
void createAppend_X1_(void);
void dPa_control_c_NS_set(void);
void fopKyM_Create(void);
void fopKyM_Delete(void);
void fopKyM_create(void);
void fopKyM_createWpillar(void);
void fopKyM_fastCreate(void);
void fpcSCtRq_Request(void);
void func_8001F90C(void);
void memalignB__3cMlFiUl(void);
void fopKyM_CreateAppend__Fv(void);
void fopKyM_Create__FsPFPv_iPvAppend__Fv(void);
void fopKyM_Create__FsPFPv_iPv(void);
void createAppend__FiP4cXyzP4cXyz(void);
}

// additional symbols needed for f_op_kankyo_mng.cpp
// autogenerated by split.py v0.4 at 2021-02-15 20:20:10.089760
extern u8 lbl_804505C0;
extern f32 lbl_80451C68;

// matches but can be improved
void* fopKyM_CreateAppend(void) {
    struct unk {
        u8 field_0x00[0xc];
        f32 field_0x0C;
        f32 field_0x10;
        f32 field_0x14;
    };

    void* ptr = cMl::memalignB(-4, 0x1C);
    
    if (ptr) {
        cLib_memSet(ptr, 0, 0x1C);
        f32 tmp = lbl_80451C68;
        ((unk*)ptr)->field_0x0C = lbl_80451C68;
        ((unk*)ptr)->field_0x10 = tmp;
        ((unk*)ptr)->field_0x14 = tmp;
    }

    return ptr;
}

// matches but can be improved
f32* createAppend(int param_1, cXyz* param_2, cXyz* param_3) {
    struct unk {
        f32 field_0x00;
        f32 field_0x04;
        f32 field_0x08;
        f32 field_0x0C;
        f32 field_0x10;
        f32 field_0x14;
        int field_0x18;
    };

    f32* ptr = (f32*)(fopKyM_CreateAppend());

    if (!ptr) {
        return 0;
    }

    if (param_2) {
        ((unk*)ptr)->field_0x00 = param_2->x;
        ((unk*)ptr)->field_0x04 = param_2->y;
        ((unk*)ptr)->field_0x08 = param_2->z;
    }

    if (param_3) {
        ((unk*)ptr)->field_0x0C = param_3->x;
        ((unk*)ptr)->field_0x10 = param_3->y;
        ((unk*)ptr)->field_0x14 = param_3->z;
    }

    ((unk*)ptr)->field_0x18 = param_1;
    return ptr;
}

void fopKyM_Delete(void* param_1) { 
    fpcM_Delete(param_1);
}

// fopKyM_Create__FsPFPv_iPv
// fopKyM_Create(s16, int (*)(void*), void*)
asm void fopKyM_Create(s16, int (*)(void*), void*) {
    nofralloc
#include "f/f_op/f_op_kankyo_mng/asm/func_8001F768.s"
}

// fopKyM_create__FsiP4cXyzP4cXyzPFPv_i
// fopKyM_create(s16, int, cXyz*, cXyz*, int (*)(void*))
asm void fopKyM_create(s16, int, cXyz*, cXyz*, int (*)(void*)) {
    nofralloc
#include "f/f_op/f_op_kankyo_mng/asm/func_8001F7B8.s"
}

// fopKyM_fastCreate__FsiP4cXyzP4cXyzPFPv_i
// fopKyM_fastCreate(s16, int, cXyz*, cXyz*, int (*)(void*))
asm void fopKyM_fastCreate(s16, int, cXyz*, cXyz*, int (*)(void*)) {
    nofralloc
#include "f/f_op/f_op_kankyo_mng/asm/func_8001F818.s"
}

// fopKyM_createWpillar__FPC4cXyzfi
// fopKyM_createWpillar(const cXyz*, f32, int)
asm void fopKyM_createWpillar(const cXyz*, f32, int) {
    nofralloc
#include "f/f_op/f_op_kankyo_mng/asm/func_8001F87C.s"
}

// fopKyM_createMpillar__FPC4cXyzf
// fopKyM_createMpillar(const cXyz*, f32)
asm void fopKyM_createMpillar(const cXyz*, f32) {
    nofralloc
#include "f/f_op/f_op_kankyo_mng/asm/func_8001F90C.s"
}