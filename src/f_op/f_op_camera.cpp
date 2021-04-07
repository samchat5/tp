//
// Generated By: dol2asm
// Translation Unit: f_op/f_op_camera
//

#include "f_op/f_op_camera.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct process_method_class {};

struct leafdraw_method_class {};

struct leafdraw_class {};

struct create_tag_class {};

struct camera_class {};

//
// Forward References:
//

extern "C" static void fopCam_Draw__FP12camera_class();
extern "C" static void fopCam_Execute__FP12camera_class();
extern "C" static void fopCam_IsDelete__FP12camera_class();
extern "C" static void fopCam_Delete__FP12camera_class();
extern "C" static void fopCam_Create__FPv();
extern "C" extern void* g_fopCam_Method[5 + 1 /* padding */];

//
// External References:
//

extern "C" void fopDwTg_ToDrawQ__FP16create_tag_classi();
extern "C" void fopDwTg_DrawQTo__FP16create_tag_class();
extern "C" void fopDwTg_Init__FP16create_tag_classPv();
extern "C" void fpcLf_GetPriority__FPC14leafdraw_class();
extern "C" void fpcLf_DrawMethod__FP21leafdraw_method_classPv();
extern "C" void fpcMtd_Execute__FP20process_method_classPv();
extern "C" void fpcMtd_IsDelete__FP20process_method_classPv();
extern "C" void fpcMtd_Delete__FP20process_method_classPv();
extern "C" void fpcMtd_Create__FP20process_method_classPv();
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 struct_80451124[4];

//
// Declarations:
//

/* 8001E140-8001E180 018A80 0040+00 1/0 0/0 0/0 .text            fopCam_Draw__FP12camera_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fopCam_Draw(camera_class* param_0) {
    nofralloc
#include "asm/f_op/f_op_camera/fopCam_Draw__FP12camera_class.s"
}
#pragma pop

/* 8001E180-8001E1C8 018AC0 0048+00 1/0 0/0 0/0 .text            fopCam_Execute__FP12camera_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fopCam_Execute(camera_class* param_0) {
    nofralloc
#include "asm/f_op/f_op_camera/fopCam_Execute__FP12camera_class.s"
}
#pragma pop

/* 8001E1C8-8001E21C 018B08 0054+00 1/0 0/0 0/0 .text            fopCam_IsDelete__FP12camera_class
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fopCam_IsDelete(camera_class* param_0) {
    nofralloc
#include "asm/f_op/f_op_camera/fopCam_IsDelete__FP12camera_class.s"
}
#pragma pop

/* 8001E21C-8001E270 018B5C 0054+00 1/0 0/0 0/0 .text            fopCam_Delete__FP12camera_class */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fopCam_Delete(camera_class* param_0) {
    nofralloc
#include "asm/f_op/f_op_camera/fopCam_Delete__FP12camera_class.s"
}
#pragma pop

/* 8001E270-8001E308 018BB0 0098+00 1/0 0/0 0/0 .text            fopCam_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fopCam_Create(void* param_0) {
    nofralloc
#include "asm/f_op/f_op_camera/fopCam_Create__FPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A3860-803A3878 -00001 0014+04 0/0 2/0 0/0 .data            g_fopCam_Method */
SECTION_DATA extern void* g_fopCam_Method[5 + 1 /* padding */] = {
    (void*)fopCam_Create__FPv,
    (void*)fopCam_Delete__FP12camera_class,
    (void*)fopCam_Execute__FP12camera_class,
    (void*)fopCam_IsDelete__FP12camera_class,
    (void*)fopCam_Draw__FP12camera_class,
    /* padding */
    NULL,
};
