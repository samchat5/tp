#
# Generate By: dol2asm
# Module: 452
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_food",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_food",
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
	{'addr':0x80BF0620,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF064C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF0678,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF0698,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF06B4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF070C,'size':36,'pad':0,'label':"__ct__16daObj_Food_HIO_cFv",'name':"__ct__16daObj_Food_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF0730,'size':292,'pad':0,'label':"daObj_Food_Draw__FP14obj_food_class",'name':"daObj_Food_Draw__FP14obj_food_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF0854,'size':336,'pad':0,'label':"ground_ang_set__FP14obj_food_class",'name':"ground_ang_set__FP14obj_food_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF09A4,'size':300,'pad':0,'label':"food_carry__FP14obj_food_class",'name':"food_carry__FP14obj_food_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF0AD0,'size':420,'pad':0,'label':"wall_angle_get__FP14obj_food_class",'name':"wall_angle_get__FP14obj_food_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF0C74,'size':844,'pad':0,'label':"food_normal__FP14obj_food_class",'name':"food_normal__FP14obj_food_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF0FC0,'size':424,'pad':0,'label':"ball_move__FP14obj_food_class",'name':"ball_move__FP14obj_food_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF1168,'size':1432,'pad':0,'label':"action__FP14obj_food_class",'name':"action__FP14obj_food_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF1700,'size':148,'pad':0,'label':"daObj_Food_Execute__FP14obj_food_class",'name':"daObj_Food_Execute__FP14obj_food_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF1794,'size':8,'pad':0,'label':"daObj_Food_IsDelete__FP14obj_food_class",'name':"daObj_Food_IsDelete__FP14obj_food_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80BF179C,'size':104,'pad':0,'label':"daObj_Food_Delete__FP14obj_food_class",'name':"daObj_Food_Delete__FP14obj_food_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF1804,'size':200,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF18CC,'size':796,'pad':0,'label':"daObj_Food_Create__FP10fopAc_ac_c",'name':"daObj_Food_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF1BE8,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF1C30,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF1C78,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF1CE8,'size':72,'pad':0,'label':"__dt__16daObj_Food_HIO_cFv",'name':"__dt__16daObj_Food_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF1D30,'size':60,'pad':0,'label':"__sinit_d_a_obj_food_cpp",'name':"__sinit_d_a_obj_food_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80BF1D6C,'size':8,'pad':0,'label':"func_80BF1D6C",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF1D74,'size':8,'pad':0,'label':"func_80BF1D74",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BF1D7C,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80BF1D84,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80BF1D90,'size':4,'pad':0,'label':"lit_3647",'name':"@3647",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[9,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1D94,'size':4,'pad':0,'label':"lit_3679",'name':"@3679",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1D98,'size':4,'pad':0,'label':"lit_3680",'name':"@3680",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1D9C,'size':4,'pad':0,'label':"lit_3681",'name':"@3681",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BF1DA0,'size':4,'pad':0,'label':"lit_3682",'name':"@3682",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DA4,'size':4,'pad':0,'label':"lit_3707",'name':"@3707",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DA8,'size':4,'pad':0,'label':"lit_3708",'name':"@3708",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DAC,'size':4,'pad':0,'label':"lit_3727",'name':"@3727",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DB0,'size':4,'pad':0,'label':"lit_3728",'name':"@3728",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DB4,'size':4,'pad':0,'label':"lit_3782",'name':"@3782",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DB8,'size':4,'pad':0,'label':"lit_3783",'name':"@3783",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DBC,'size':4,'pad':0,'label':"lit_3784",'name':"@3784",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DC0,'size':4,'pad':0,'label':"lit_3785",'name':"@3785",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DC4,'size':4,'pad':0,'label':"lit_3875",'name':"@3875",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DC8,'size':4,'pad':0,'label':"lit_3876",'name':"@3876",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DCC,'size':4,'pad':0,'label':"lit_3877",'name':"@3877",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DD0,'size':4,'pad':0,'label':"lit_3878",'name':"@3878",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DD4,'size':4,'pad':0,'label':"lit_3879",'name':"@3879",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DD8,'size':4,'pad':0,'label':"lit_3880",'name':"@3880",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DDC,'size':4,'pad':0,'label':"lit_3881",'name':"@3881",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DE0,'size':4,'pad':0,'label':"lit_3882",'name':"@3882",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DE4,'size':4,'pad':0,'label':"lit_3883",'name':"@3883",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DE8,'size':4,'pad':0,'label':"lit_3922",'name':"@3922",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DEC,'size':4,'pad':0,'label':"lit_3923",'name':"@3923",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DF0,'size':4,'pad':0,'label':"lit_3924",'name':"@3924",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DF4,'size':4,'pad':0,'label':"lit_4085",'name':"@4085",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DF8,'size':4,'pad':0,'label':"lit_4086",'name':"@4086",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1DFC,'size':4,'pad':0,'label':"lit_4087",'name':"@4087",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1E00,'size':4,'pad':0,'label':"lit_4088",'name':"@4088",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1E04,'size':4,'pad':0,'label':"lit_4089",'name':"@4089",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1E08,'size':4,'pad':0,'label':"lit_4090",'name':"@4090",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1E0C,'size':4,'pad':0,'label':"lit_4091",'name':"@4091",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BF1E10,'size':7,'pad':0,'label':"d_a_obj_food__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80BF1E18,'size':8,'pad':0,'label':"w_eff_id",'name':"w_eff_id$3948",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BF1E20,'size':64,'pad':0,'label':"cc_sph_src",'name':"cc_sph_src$4146",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BF1E60,'size':64,'pad':0,'label':"at_sph_src",'name':"at_sph_src$4147",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BF1EA0,'size':32,'pad':0,'label':"l_daObj_Food_Method",'name':"l_daObj_Food_Method",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BF1EC0,'size':48,'pad':0,'label':"g_profile_OBJ_FOOD",'name':"g_profile_OBJ_FOOD",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BF1EF0,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BF1EFC,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BF1F08,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BF1F2C,'size':12,'pad':0,'label':"__vt__16daObj_Food_HIO_c",'name':"__vt__16daObj_Food_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BF1F38,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BF1F40,'size':4,'pad':0,'label':"data_80BF1F40",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BF1F44,'size':12,'pad':0,'label':"lit_3642",'name':"@3642",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BF1F50,'size':12,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__16daObj_Food_HIO_cFv":5,
	"daObj_Food_Draw__FP14obj_food_class":6,
	"ground_ang_set__FP14obj_food_class":7,
	"food_carry__FP14obj_food_class":8,
	"wall_angle_get__FP14obj_food_class":9,
	"food_normal__FP14obj_food_class":10,
	"ball_move__FP14obj_food_class":11,
	"action__FP14obj_food_class":12,
	"daObj_Food_Execute__FP14obj_food_class":13,
	"daObj_Food_IsDelete__FP14obj_food_class":14,
	"daObj_Food_Delete__FP14obj_food_class":15,
	"useHeapInit__FP10fopAc_ac_c":16,
	"daObj_Food_Create__FP10fopAc_ac_c":17,
	"__dt__8cM3dGSphFv":18,
	"__dt__8cM3dGAabFv":19,
	"__dt__12dBgS_ObjAcchFv":20,
	"__dt__16daObj_Food_HIO_cFv":21,
	"__sinit_d_a_obj_food_cpp":22,
	"func_80BF1D6C":23,
	"func_80BF1D74":24,
	"_ctors":25,
	"_dtors":26,
	"lit_3647":27,
	"lit_3679":28,
	"lit_3680":29,
	"lit_3681":30,
	"lit_3682":31,
	"lit_3707":32,
	"lit_3708":33,
	"lit_3727":34,
	"lit_3728":35,
	"lit_3782":36,
	"lit_3783":37,
	"lit_3784":38,
	"lit_3785":39,
	"lit_3875":40,
	"lit_3876":41,
	"lit_3877":42,
	"lit_3878":43,
	"lit_3879":44,
	"lit_3880":45,
	"lit_3881":46,
	"lit_3882":47,
	"lit_3883":48,
	"lit_3922":49,
	"lit_3923":50,
	"lit_3924":51,
	"lit_4085":52,
	"lit_4086":53,
	"lit_4087":54,
	"lit_4088":55,
	"lit_4089":56,
	"lit_4090":57,
	"lit_4091":58,
	"d_a_obj_food__stringBase0":59,
	"w_eff_id":60,
	"cc_sph_src":61,
	"at_sph_src":62,
	"l_daObj_Food_Method":63,
	"g_profile_OBJ_FOOD":64,
	"__vt__8cM3dGSph":65,
	"__vt__8cM3dGAab":66,
	"__vt__12dBgS_ObjAcch":67,
	"__vt__16daObj_Food_HIO_c":68,
	"__global_destructor_chain":69,
	"data_80BF1F40":70,
	"lit_3642":71,
	"l_HIO":72,
}

