//
// Generated By: dol2asm
// Translation Unit: d_a_door_spiral
//

#include "rel/d/a/door/d_a_door_spiral/d_a_door_spiral.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" extern void* g_profile_SPIRAL_DOOR[12];

//
// External References:
//

extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 804673E0-80467410 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_SPIRAL_DOOR */
SECTION_DATA extern void* g_profile_SPIRAL_DOOR[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD, (void*)0x022D0000, (void*)&g_fpcLf_Method,
    (void*)0x000006B0, (void*)NULL,       (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x012D0000, (void*)NULL,       (void*)0x00044000, (void*)0x00060000,
};
