/* f_op_kankyo.cpp autogenerated by split.py v0.4 at 2021-02-15 21:03:24.816040 */

#include "d/d_com/d_com_inf_game/d_com_inf_game.h"
#include "f/f_op/f_op_draw_tag.h"
#include "global.h"

// additional symbols needed for f_op_kankyo.cpp
// autogenerated by split.py v0.4 at 2021-02-15 21:03:24.816064
extern "C" {
void fopDwTg_DrawQTo__FP16create_tag_class(void);
void fopDwTg_DrawQTo(void);
void fopDwTg_Init(void);
void fopDwTg_ToDrawQ(void);
void fopKy_Draw(void);
void fpcBs_MakeOfType(void);
void fpcLf_DrawMethod(void);
void fpcLf_GetPriority(void);
void fpcMtd_Create(void);
void fpcMtd_Delete(void);
void fpcMtd_Execute(void);
void fpcMtd_IsDelete(void);
void func_8001F2C0(void);
void func_8001F314(void);
void func_8001F368(void);
void func_8001F3B4(void);
}

// additional symbols needed for f_op_kankyo.cpp
// autogenerated by split.py v0.4 at 2021-02-15 21:03:24.816069
extern u8 lbl_80450CE8;
extern u8 lbl_80451124;

extern "C" {
// fopKy_Draw__FPv
// fopKy_Draw(void*)
asm void fopKy_Draw(void) {
    nofralloc
#include "f/f_op/f_op_kankyo/asm/func_8001F284.s"
}

// fopKy_Execute__FPv
// fopKy_Execute(void*)
asm void func_8001F2C0(void) {
    nofralloc
#include "f/f_op/f_op_kankyo/asm/func_8001F2C0.s"
}

// fopKy_IsDelete__FPv
// fopKy_IsDelete(void*)
asm void func_8001F314(void) {
    nofralloc
#include "f/f_op/f_op_kankyo/asm/func_8001F314.s"
}

// fopKy_Delete__FPv
// fopKy_Delete(void*)
asm void func_8001F368(void) {
    nofralloc
#include "f/f_op/f_op_kankyo/asm/func_8001F368.s"
}

// fopKy_Create__FPv
// fopKy_Create(void*)
asm void func_8001F3B4(void) {
    nofralloc
#include "f/f_op/f_op_kankyo/asm/func_8001F3B4.s"
}
};
