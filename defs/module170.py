#
# Generate By: dol2asm
# Module: 170
#

# Libraries
LIBRARIES = [
	"d/a/e/d_a_e_ai",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_e_ai",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".dtors",
	".bss",
	".rodata",
	".data",
]

# Symbols
SYMBOLS = [
	{'addr':0x80679080,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806790AC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806790D8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806790F8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80679114,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067916C,'size':80,'pad':0,'label':"__ct__12daE_AI_HIO_cFv",'name':"__ct__12daE_AI_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806791BC,'size':200,'pad':0,'label':"initCcCylinder__10e_ai_classFv",'name':"initCcCylinder__10e_ai_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80679284,'size':204,'pad':0,'label':"setCcCylinder__10e_ai_classFv",'name':"setCcCylinder__10e_ai_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80679350,'size':172,'pad':0,'label':"anm_init__10e_ai_classFifUcf",'name':"anm_init__10e_ai_classFifUcf",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[6,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806793FC,'size':248,'pad':0,'label':"Draw__10e_ai_classFv",'name':"Draw__10e_ai_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806794F4,'size':68,'pad':0,'label':"player_way_check__10e_ai_classFv",'name':"player_way_check__10e_ai_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80679538,'size':216,'pad':0,'label':"other_bg_check__10e_ai_classFP10fopAc_ac_c",'name':"other_bg_check__10e_ai_classFP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80679610,'size':124,'pad':0,'label':"pl_check__10e_ai_classFfs",'name':"pl_check__10e_ai_classFfs",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067968C,'size':1852,'pad':0,'label':"damage_check__10e_ai_classFv",'name':"damage_check__10e_ai_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80679DC8,'size':1284,'pad':0,'label':"e_ai_damage__10e_ai_classFv",'name':"e_ai_damage__10e_ai_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067A2CC,'size':640,'pad':0,'label':"e_ai_attack__10e_ai_classFv",'name':"e_ai_attack__10e_ai_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067A54C,'size':1276,'pad':0,'label':"e_ai_move__10e_ai_classFv",'name':"e_ai_move__10e_ai_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067AA48,'size':600,'pad':0,'label':"e_ai_wait__10e_ai_classFv",'name':"e_ai_wait__10e_ai_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067ACA0,'size':900,'pad':0,'label':"e_ai_return__10e_ai_classFv",'name':"e_ai_return__10e_ai_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067B024,'size':652,'pad':0,'label':"action__10e_ai_classFv",'name':"action__10e_ai_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067B2B0,'size':108,'pad':0,'label':"PlayerWaySet__10e_ai_classFv",'name':"PlayerWaySet__10e_ai_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067B31C,'size':92,'pad':0,'label':"AttentionSet__10e_ai_classFv",'name':"AttentionSet__10e_ai_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067B378,'size':544,'pad':0,'label':"Execute__10e_ai_classFv",'name':"Execute__10e_ai_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067B598,'size':136,'pad':0,'label':"setBaseMtx__10e_ai_classFv",'name':"setBaseMtx__10e_ai_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067B620,'size':104,'pad':0,'label':"Delete__10e_ai_classFv",'name':"Delete__10e_ai_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067B688,'size':32,'pad':0,'label':"daE_AI_Draw__FP10e_ai_class",'name':"daE_AI_Draw__FP10e_ai_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067B6A8,'size':32,'pad':0,'label':"daE_AI_Execute__FP10e_ai_class",'name':"daE_AI_Execute__FP10e_ai_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067B6C8,'size':8,'pad':0,'label':"daE_AI_IsDelete__FP10e_ai_class",'name':"daE_AI_IsDelete__FP10e_ai_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x8067B6D0,'size':32,'pad':0,'label':"daE_AI_Delete__FP10e_ai_class",'name':"daE_AI_Delete__FP10e_ai_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067B6F0,'size':396,'pad':0,'label':"CreateHeap__10e_ai_classFv",'name':"CreateHeap__10e_ai_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067B87C,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067B8C4,'size':32,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067B8E4,'size':520,'pad':0,'label':"Create__10e_ai_classFv",'name':"Create__10e_ai_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067BAEC,'size':472,'pad':0,'label':"__ct__10e_ai_classFv",'name':"__ct__10e_ai_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067BCC4,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067BD0C,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067BD54,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067BD9C,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067BDF8,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067BE68,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067BED8,'size':32,'pad':0,'label':"daE_AI_Create__FP10fopAc_ac_c",'name':"daE_AI_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067BEF8,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067BF40,'size':72,'pad':0,'label':"__dt__12daE_AI_HIO_cFv",'name':"__dt__12daE_AI_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067BF88,'size':60,'pad':0,'label':"__sinit_d_a_e_ai_cpp",'name':"__sinit_d_a_e_ai_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x8067BFC4,'size':8,'pad':0,'label':"func_8067BFC4",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067BFCC,'size':8,'pad':0,'label':"func_8067BFCC",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067BFD4,'size':1044,'pad':0,'label':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'name':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067C3E8,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x8067C3F0,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x8067C3FC,'size':4,'pad':0,'label':"lit_3789",'name':"@3789",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[15,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C400,'size':4,'pad':0,'label':"lit_3790",'name':"@3790",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8067C404,'size':4,'pad':4,'label':"lit_3791",'name':"@3791",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C40C,'size':8,'pad':0,'label':"lit_3792",'name':"@3792",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8067C414,'size':8,'pad':0,'label':"lit_3793",'name':"@3793",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8067C41C,'size':8,'pad':0,'label':"lit_3794",'name':"@3794",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8067C424,'size':4,'pad':0,'label':"lit_3795",'name':"@3795",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C428,'size':4,'pad':0,'label':"lit_3810",'name':"@3810",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C42C,'size':4,'pad':0,'label':"lit_3811",'name':"@3811",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C430,'size':4,'pad':0,'label':"lit_3812",'name':"@3812",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C434,'size':4,'pad':0,'label':"lit_3813",'name':"@3813",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C438,'size':64,'pad':0,'label':"at_sph_src",'name':"at_sph_src$3817",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8067C478,'size':64,'pad':0,'label':"shield_sph_src",'name':"shield_sph_src$3818",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8067C4B8,'size':4,'pad':0,'label':"lit_3848",'name':"@3848",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C4BC,'size':4,'pad':0,'label':"lit_3854",'name':"@3854",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C4C0,'size':4,'pad':0,'label':"lit_3887",'name':"@3887",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C4C4,'size':4,'pad':0,'label':"lit_4111",'name':"@4111",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C4C8,'size':4,'pad':0,'label':"lit_4112",'name':"@4112",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C4CC,'size':4,'pad':0,'label':"lit_4113",'name':"@4113",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C4D0,'size':4,'pad':0,'label':"lit_4256",'name':"@4256",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C4D4,'size':4,'pad':0,'label':"lit_4257",'name':"@4257",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C4D8,'size':4,'pad':0,'label':"lit_4258",'name':"@4258",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C4DC,'size':4,'pad':0,'label':"lit_4259",'name':"@4259",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C4E0,'size':4,'pad':0,'label':"lit_4260",'name':"@4260",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C4E4,'size':4,'pad':0,'label':"lit_4261",'name':"@4261",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C4E8,'size':4,'pad':0,'label':"lit_4262",'name':"@4262",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C4EC,'size':4,'pad':0,'label':"lit_4263",'name':"@4263",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C4F0,'size':4,'pad':0,'label':"lit_4316",'name':"@4316",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C4F4,'size':4,'pad':4,'label':"lit_4437",'name':"@4437",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C4FC,'size':8,'pad':0,'label':"lit_4439",'name':"@4439",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8067C504,'size':4,'pad':0,'label':"lit_4636",'name':"@4636",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C508,'size':4,'pad':0,'label':"lit_4661",'name':"@4661",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C50C,'size':4,'pad':0,'label':"lit_4719",'name':"@4719",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C510,'size':4,'pad':0,'label':"lit_4720",'name':"@4720",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C514,'size':4,'pad':0,'label':"lit_4721",'name':"@4721",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C518,'size':4,'pad':0,'label':"lit_4722",'name':"@4722",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C51C,'size':4,'pad':0,'label':"lit_4723",'name':"@4723",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C520,'size':4,'pad':0,'label':"lit_4724",'name':"@4724",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C524,'size':4,'pad':0,'label':"lit_4886",'name':"@4886",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C528,'size':4,'pad':0,'label':"lit_4887",'name':"@4887",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C52C,'size':4,'pad':0,'label':"lit_4888",'name':"@4888",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C530,'size':4,'pad':0,'label':"lit_4889",'name':"@4889",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C534,'size':4,'pad':0,'label':"lit_4890",'name':"@4890",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8067C538,'size':5,'pad':0,'label':"d_a_e_ai__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[8,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x8067C540,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8067C54C,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8067C560,'size':8,'pad':0,'label':"e_prim",'name':"e_prim$3668",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8067C568,'size':8,'pad':0,'label':"e_env",'name':"e_env$3669",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8067C570,'size':6,'pad':2,'label':"eff_id",'name':"eff_id$3677",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8067C578,'size':68,'pad':0,'label':"cc_cyl_src",'name':"cc_cyl_src$3819",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8067C5BC,'size':32,'pad':0,'label':"l_daE_AI_Method",'name':"l_daE_AI_Method",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8067C5DC,'size':48,'pad':0,'label':"g_profile_E_AI",'name':"g_profile_E_AI",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8067C60C,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8067C618,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8067C624,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8067C630,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8067C63C,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8067C648,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8067C654,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8067C678,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8067C684,'size':12,'pad':0,'label':"__vt__12daE_AI_HIO_c",'name':"__vt__12daE_AI_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8067C690,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8067C698,'size':4,'pad':0,'label':"data_8067C698",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8067C69C,'size':12,'pad':0,'label':"lit_3805",'name':"@3805",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8067C6A8,'size':32,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[7,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__12daE_AI_HIO_cFv":5,
	"initCcCylinder__10e_ai_classFv":6,
	"setCcCylinder__10e_ai_classFv":7,
	"anm_init__10e_ai_classFifUcf":8,
	"Draw__10e_ai_classFv":9,
	"player_way_check__10e_ai_classFv":10,
	"other_bg_check__10e_ai_classFP10fopAc_ac_c":11,
	"pl_check__10e_ai_classFfs":12,
	"damage_check__10e_ai_classFv":13,
	"e_ai_damage__10e_ai_classFv":14,
	"e_ai_attack__10e_ai_classFv":15,
	"e_ai_move__10e_ai_classFv":16,
	"e_ai_wait__10e_ai_classFv":17,
	"e_ai_return__10e_ai_classFv":18,
	"action__10e_ai_classFv":19,
	"PlayerWaySet__10e_ai_classFv":20,
	"AttentionSet__10e_ai_classFv":21,
	"Execute__10e_ai_classFv":22,
	"setBaseMtx__10e_ai_classFv":23,
	"Delete__10e_ai_classFv":24,
	"daE_AI_Draw__FP10e_ai_class":25,
	"daE_AI_Execute__FP10e_ai_class":26,
	"daE_AI_IsDelete__FP10e_ai_class":27,
	"daE_AI_Delete__FP10e_ai_class":28,
	"CreateHeap__10e_ai_classFv":29,
	"__dt__12J3DFrameCtrlFv":30,
	"useHeapInit__FP10fopAc_ac_c":31,
	"Create__10e_ai_classFv":32,
	"__ct__10e_ai_classFv":33,
	"__dt__8cM3dGCylFv":34,
	"__dt__8cM3dGSphFv":35,
	"__dt__8cM3dGAabFv":36,
	"__dt__10dCcD_GSttsFv":37,
	"__dt__12dBgS_ObjAcchFv":38,
	"__dt__12dBgS_AcchCirFv":39,
	"daE_AI_Create__FP10fopAc_ac_c":40,
	"__dt__10cCcD_GSttsFv":41,
	"__dt__12daE_AI_HIO_cFv":42,
	"__sinit_d_a_e_ai_cpp":43,
	"func_8067BFC4":44,
	"func_8067BFCC":45,
	"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz":46,
	"_ctors":47,
	"_dtors":48,
	"lit_3789":49,
	"lit_3790":50,
	"lit_3791":51,
	"lit_3792":52,
	"lit_3793":53,
	"lit_3794":54,
	"lit_3795":55,
	"lit_3810":56,
	"lit_3811":57,
	"lit_3812":58,
	"lit_3813":59,
	"at_sph_src":60,
	"shield_sph_src":61,
	"lit_3848":62,
	"lit_3854":63,
	"lit_3887":64,
	"lit_4111":65,
	"lit_4112":66,
	"lit_4113":67,
	"lit_4256":68,
	"lit_4257":69,
	"lit_4258":70,
	"lit_4259":71,
	"lit_4260":72,
	"lit_4261":73,
	"lit_4262":74,
	"lit_4263":75,
	"lit_4316":76,
	"lit_4437":77,
	"lit_4439":78,
	"lit_4636":79,
	"lit_4661":80,
	"lit_4719":81,
	"lit_4720":82,
	"lit_4721":83,
	"lit_4722":84,
	"lit_4723":85,
	"lit_4724":86,
	"lit_4886":87,
	"lit_4887":88,
	"lit_4888":89,
	"lit_4889":90,
	"lit_4890":91,
	"d_a_e_ai__stringBase0":92,
	"cNullVec__6Z2Calc":93,
	"lit_1787":94,
	"e_prim":95,
	"e_env":96,
	"eff_id":97,
	"cc_cyl_src":98,
	"l_daE_AI_Method":99,
	"g_profile_E_AI":100,
	"__vt__12dBgS_AcchCir":101,
	"__vt__10cCcD_GStts":102,
	"__vt__10dCcD_GStts":103,
	"__vt__8cM3dGCyl":104,
	"__vt__8cM3dGSph":105,
	"__vt__8cM3dGAab":106,
	"__vt__12dBgS_ObjAcch":107,
	"__vt__12J3DFrameCtrl":108,
	"__vt__12daE_AI_HIO_c":109,
	"__global_destructor_chain":110,
	"data_8067C698":111,
	"lit_3805":112,
	"l_HIO":113,
}

