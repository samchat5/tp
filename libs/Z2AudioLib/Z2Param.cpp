//
// Generated By: dol2asm
// Translation Unit: Z2Param
//

#include "Z2AudioLib/Z2Param.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" extern f32 DISTANCE_MAX__7Z2Param;
extern "C" extern f32 MAX_VOLUME_DISTANCE__7Z2Param;
extern "C" extern f32 DOLBY_CENTER_VALUE__7Z2Param;
extern "C" extern f32 DOLBY_FLONT_DISTANCE_MAX__7Z2Param;
extern "C" extern f32 DOLBY_BEHIND_DISTANCE_MAX__7Z2Param;
extern "C" extern f32 DISTANCE_FX_PARAM__7Z2Param;
extern "C" extern f32 SONIC_SPEED__7Z2Param;
extern "C" extern f32 VOL_BGM_DEFAULT__7Z2Param;
extern "C" extern f32 VOL_SE_SYSTEM_DEFAULT__7Z2Param;
extern "C" extern f32 VOL_SE_LINK_VOICE_DEFAULT__7Z2Param;
extern "C" extern f32 VOL_SE_LINK_MOTION_DEFAULT__7Z2Param;
extern "C" extern f32 VOL_SE_LINK_FOOTNOTE_DEFAULT__7Z2Param;
extern "C" extern f32 VOL_SE_CHAR_VOICE_DEFAULT__7Z2Param;
extern "C" extern f32 VOL_SE_CHAR_MOVE_DEFAULT__7Z2Param;
extern "C" extern f32 VOL_SE_OBJECT_DEFAULT__7Z2Param;
extern "C" extern f32 VOL_SE_ATMOSPHERE_DEFAULT__7Z2Param;
extern "C" extern f32 VOL_BGM_TALKING__7Z2Param;
extern "C" extern f32 VOL_SE_SYSTEM_TALKING__7Z2Param;
extern "C" extern f32 VOL_SE_LINK_VOICE_TALKING__7Z2Param;
extern "C" extern f32 VOL_SE_LINK_MOTION_TALKING__7Z2Param;
extern "C" extern f32 VOL_SE_LINK_FOOTNOTE_TALKING__7Z2Param;
extern "C" extern f32 VOL_SE_CHAR_VOICE_TALKING__7Z2Param;
extern "C" extern f32 VOL_SE_CHAR_MOVE_TALKING__7Z2Param;
extern "C" extern f32 VOL_SE_OBJECT_TALKING__7Z2Param;
extern "C" extern f32 VOL_SE_ATMOSPHERE_TALKING__7Z2Param;
extern "C" extern f32 VOL_BGM_PAUSING__7Z2Param;
extern "C" extern f32 VOL_SE_SYSTEM_PAUSING__7Z2Param;
extern "C" extern f32 VOL_SE_LINK_VOICE_PAUSING__7Z2Param;
extern "C" extern f32 VOL_SE_LINK_MOTION_PAUSING__7Z2Param;
extern "C" extern f32 VOL_SE_LINK_FOOTNOTE_PAUSING__7Z2Param;
extern "C" extern f32 VOL_SE_CHAR_VOICE_PAUSING__7Z2Param;
extern "C" extern f32 VOL_SE_CHAR_MOVE_PAUSING__7Z2Param;
extern "C" extern f32 VOL_SE_OBJECT_PAUSING__7Z2Param;
extern "C" extern f32 VOL_SE_ATMOSPHERE_PAUSING__7Z2Param;
extern "C" extern u8 struct_80450860[4];
extern "C" extern u8 struct_80450864[4];
extern "C" extern u8 struct_80450868[4];
extern "C" extern u32 data_8045086C;
extern "C" extern f32 MIN_DISTANCE_VOLUME__7Z2Param;
extern "C" extern f32 ENEMY_LASTHIT_MUTE_VOLUME__7Z2Param;
extern "C" extern u8 struct_80451340[8];
extern "C" extern u8 data_80451348[8];

//
// External References:
//

//
// Declarations:
//

/* ############################################################################################## */
/* 804507D8-804507DC 0004+00 s=0 e=4 z=0  None .sdata     DISTANCE_MAX__7Z2Param */
SECTION_SDATA f32 DISTANCE_MAX__7Z2Param = 2000.0f;

/* 804507DC-804507E0 0004+00 s=0 e=3 z=0  None .sdata     MAX_VOLUME_DISTANCE__7Z2Param */
SECTION_SDATA f32 MAX_VOLUME_DISTANCE__7Z2Param = 300.0f;

/* 804507E0-804507E4 0004+00 s=0 e=1 z=0  None .sdata     DOLBY_CENTER_VALUE__7Z2Param */
SECTION_SDATA f32 DOLBY_CENTER_VALUE__7Z2Param = 3.0f / 10.0f;

/* 804507E4-804507E8 0004+00 s=0 e=3 z=0  None .sdata     DOLBY_FLONT_DISTANCE_MAX__7Z2Param */
SECTION_SDATA f32 DOLBY_FLONT_DISTANCE_MAX__7Z2Param = -300.0f;

/* 804507E8-804507EC 0004+00 s=0 e=3 z=0  None .sdata     DOLBY_BEHIND_DISTANCE_MAX__7Z2Param */
SECTION_SDATA f32 DOLBY_BEHIND_DISTANCE_MAX__7Z2Param = 600.0f;

/* 804507EC-804507F0 0004+00 s=0 e=1 z=0  None .sdata     DISTANCE_FX_PARAM__7Z2Param */
SECTION_SDATA f32 DISTANCE_FX_PARAM__7Z2Param = 10.0f / 127.0f;

/* 804507F0-804507F4 0004+00 s=0 e=1 z=0  None .sdata     SONIC_SPEED__7Z2Param */
SECTION_SDATA f32 SONIC_SPEED__7Z2Param = 360.0f;

/* 804507F4-804507F8 0004+00 s=0 e=3 z=0  None .sdata     VOL_BGM_DEFAULT__7Z2Param */
SECTION_SDATA f32 VOL_BGM_DEFAULT__7Z2Param = 1.0f;

/* 804507F8-804507FC 0004+00 s=0 e=2 z=0  None .sdata     VOL_SE_SYSTEM_DEFAULT__7Z2Param */
SECTION_SDATA f32 VOL_SE_SYSTEM_DEFAULT__7Z2Param = 120.0f / 127.0f;

/* 804507FC-80450800 0004+00 s=0 e=3 z=0  None .sdata     VOL_SE_LINK_VOICE_DEFAULT__7Z2Param */
SECTION_SDATA f32 VOL_SE_LINK_VOICE_DEFAULT__7Z2Param = 1.0f;

/* 80450800-80450804 0004+00 s=0 e=3 z=0  None .sdata     VOL_SE_LINK_MOTION_DEFAULT__7Z2Param */
SECTION_SDATA f32 VOL_SE_LINK_MOTION_DEFAULT__7Z2Param = 120.0f / 127.0f;

/* 80450804-80450808 0004+00 s=0 e=3 z=0  None .sdata     VOL_SE_LINK_FOOTNOTE_DEFAULT__7Z2Param */
SECTION_SDATA f32 VOL_SE_LINK_FOOTNOTE_DEFAULT__7Z2Param = 120.0f / 127.0f;

/* 80450808-8045080C 0004+00 s=0 e=3 z=0  None .sdata     VOL_SE_CHAR_VOICE_DEFAULT__7Z2Param */
SECTION_SDATA f32 VOL_SE_CHAR_VOICE_DEFAULT__7Z2Param = 120.0f / 127.0f;

/* 8045080C-80450810 0004+00 s=0 e=3 z=0  None .sdata     VOL_SE_CHAR_MOVE_DEFAULT__7Z2Param */
SECTION_SDATA f32 VOL_SE_CHAR_MOVE_DEFAULT__7Z2Param = 120.0f / 127.0f;

/* 80450810-80450814 0004+00 s=0 e=3 z=0  None .sdata     VOL_SE_OBJECT_DEFAULT__7Z2Param */
SECTION_SDATA f32 VOL_SE_OBJECT_DEFAULT__7Z2Param = 120.0f / 127.0f;

/* 80450814-80450818 0004+00 s=0 e=3 z=0  None .sdata     VOL_SE_ATMOSPHERE_DEFAULT__7Z2Param */
SECTION_SDATA f32 VOL_SE_ATMOSPHERE_DEFAULT__7Z2Param = 120.0f / 127.0f;

/* 80450818-8045081C 0004+00 s=0 e=1 z=0  None .sdata     VOL_BGM_TALKING__7Z2Param */
SECTION_SDATA f32 VOL_BGM_TALKING__7Z2Param = 0.5f;

/* 8045081C-80450820 0004+00 s=0 e=1 z=0  None .sdata     VOL_SE_SYSTEM_TALKING__7Z2Param */
SECTION_SDATA f32 VOL_SE_SYSTEM_TALKING__7Z2Param = 112.0f / 127.0f;

/* 80450820-80450824 0004+00 s=0 e=1 z=0  None .sdata     VOL_SE_LINK_VOICE_TALKING__7Z2Param */
SECTION_SDATA f32 VOL_SE_LINK_VOICE_TALKING__7Z2Param = 104.0f / 127.0f;

/* 80450824-80450828 0004+00 s=0 e=1 z=0  None .sdata     VOL_SE_LINK_MOTION_TALKING__7Z2Param */
SECTION_SDATA f32 VOL_SE_LINK_MOTION_TALKING__7Z2Param = 96.0f / 127.0f;

/* 80450828-8045082C 0004+00 s=0 e=1 z=0  None .sdata     VOL_SE_LINK_FOOTNOTE_TALKING__7Z2Param */
SECTION_SDATA f32 VOL_SE_LINK_FOOTNOTE_TALKING__7Z2Param = 96.0f / 127.0f;

/* 8045082C-80450830 0004+00 s=0 e=1 z=0  None .sdata     VOL_SE_CHAR_VOICE_TALKING__7Z2Param */
SECTION_SDATA f32 VOL_SE_CHAR_VOICE_TALKING__7Z2Param = 120.0f / 127.0f;

/* 80450830-80450834 0004+00 s=0 e=1 z=0  None .sdata     VOL_SE_CHAR_MOVE_TALKING__7Z2Param */
SECTION_SDATA f32 VOL_SE_CHAR_MOVE_TALKING__7Z2Param = 119.0f / 127.0f;

/* 80450834-80450838 0004+00 s=0 e=1 z=0  None .sdata     VOL_SE_OBJECT_TALKING__7Z2Param */
SECTION_SDATA f32 VOL_SE_OBJECT_TALKING__7Z2Param = 96.0f / 127.0f;

/* 80450838-8045083C 0004+00 s=0 e=1 z=0  None .sdata     VOL_SE_ATMOSPHERE_TALKING__7Z2Param */
SECTION_SDATA f32 VOL_SE_ATMOSPHERE_TALKING__7Z2Param = 96.0f / 127.0f;

/* 8045083C-80450840 0004+00 s=0 e=1 z=0  None .sdata     VOL_BGM_PAUSING__7Z2Param */
SECTION_SDATA f32 VOL_BGM_PAUSING__7Z2Param = 3.0f / 10.0f;

/* 80450840-80450844 0004+00 s=0 e=1 z=0  None .sdata     VOL_SE_SYSTEM_PAUSING__7Z2Param */
SECTION_SDATA f32 VOL_SE_SYSTEM_PAUSING__7Z2Param = 112.0f / 127.0f;

/* 80450844-80450848 0004+00 s=0 e=1 z=0  None .sdata     VOL_SE_LINK_VOICE_PAUSING__7Z2Param */
SECTION_SDATA f32 VOL_SE_LINK_VOICE_PAUSING__7Z2Param = 80.0f / 127.0f;

/* 80450848-8045084C 0004+00 s=0 e=1 z=0  None .sdata     VOL_SE_LINK_MOTION_PAUSING__7Z2Param */
SECTION_SDATA f32 VOL_SE_LINK_MOTION_PAUSING__7Z2Param = 72.0f / 127.0f;

/* 8045084C-80450850 0004+00 s=0 e=1 z=0  None .sdata     VOL_SE_LINK_FOOTNOTE_PAUSING__7Z2Param */
SECTION_SDATA f32 VOL_SE_LINK_FOOTNOTE_PAUSING__7Z2Param = 72.0f / 127.0f;

/* 80450850-80450854 0004+00 s=0 e=1 z=0  None .sdata     VOL_SE_CHAR_VOICE_PAUSING__7Z2Param */
SECTION_SDATA f32 VOL_SE_CHAR_VOICE_PAUSING__7Z2Param = 72.0f / 127.0f;

/* 80450854-80450858 0004+00 s=0 e=1 z=0  None .sdata     VOL_SE_CHAR_MOVE_PAUSING__7Z2Param */
SECTION_SDATA f32 VOL_SE_CHAR_MOVE_PAUSING__7Z2Param = 72.0f / 127.0f;

/* 80450858-8045085C 0004+00 s=0 e=1 z=0  None .sdata     VOL_SE_OBJECT_PAUSING__7Z2Param */
SECTION_SDATA f32 VOL_SE_OBJECT_PAUSING__7Z2Param = 72.0f / 127.0f;

/* 8045085C-80450860 0004+00 s=0 e=1 z=0  None .sdata     VOL_SE_ATMOSPHERE_PAUSING__7Z2Param */
SECTION_SDATA f32 VOL_SE_ATMOSPHERE_PAUSING__7Z2Param = 72.0f / 127.0f;

/* 80450860-80450864 0004+00 s=0 e=15 z=0  None .sdata     None */
SECTION_SDATA u8 struct_80450860[4] = {
    /* 80450860 0001 data_80450860 None */
    0x21,
    /* 80450861 0001 data_80450861 None */
    0x3C,
    /* 80450862 0001 data_80450862 None */
    0x3C,
    /* 80450863 0001 data_80450863 None */
    0x1E,
};

/* 80450864-80450868 0004+00 s=0 e=2 z=0  None .sdata     None */
SECTION_SDATA u8 struct_80450864[4] = {
    /* 80450864 0001 data_80450864 None */
    0x14,
    /* 80450865 0001 data_80450865 None */
    0x1E,
    /* 80450866 0001 data_80450866 None */
    0x0A,
    /* 80450867 0001 data_80450867 None */
    0x1E,
};

/* 80450868-8045086C 0004+00 s=0 e=5 z=0  None .sdata     None */
SECTION_SDATA u8 struct_80450868[4] = {
    /* 80450868 0001 data_80450868 None */
    0x01,
    /* 80450869 0001 data_80450869 None */
    0x0A,
    /* 8045086A 0001 data_8045086A None */
    0x1E,
    /* 8045086B 0001 data_8045086B None */
    0x14,
};

/* 8045086C-80450870 0004+00 s=0 e=3 z=0  None .sdata     None */
SECTION_SDATA u32 data_8045086C = 0x01000000;

/* 80451338-8045133C 0004+00 s=0 e=1 z=0  None .sbss      MIN_DISTANCE_VOLUME__7Z2Param */
f32 MIN_DISTANCE_VOLUME__7Z2Param;

/* 8045133C-80451340 0004+00 s=0 e=1 z=0  None .sbss      ENEMY_LASTHIT_MUTE_VOLUME__7Z2Param */
f32 ENEMY_LASTHIT_MUTE_VOLUME__7Z2Param;

/* 80451340-80451348 0008+00 s=0 e=2 z=0  None .sbss      None */
u8 struct_80451340[8];

/* 80451348-80451350 0008+00 s=0 e=4 z=0  None .sbss      None */
u8 data_80451348[8];
