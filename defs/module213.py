#
# Generate By: dol2asm
# Module: 213
#

# Libraries
LIBRARIES = [
	"d/a/e/d_a_e_mm_mt",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"d_a_e_mm_mt",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".dtors",
	".rodata",
	".data",
]

# Symbols
SYMBOLS = [
	{'addr':0x80722F00,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80722F2C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80722F58,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80722F78,'size':228,'pad':0,'label':"daE_MM_MT_Draw__FP13e_mm_mt_class",'name':"daE_MM_MT_Draw__FP13e_mm_mt_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072305C,'size':532,'pad':0,'label':"e_mm_hookCheck__FP13e_mm_mt_class",'name':"e_mm_hookCheck__FP13e_mm_mt_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80723270,'size':632,'pad':0,'label':"e_mm_mt_normal__FP13e_mm_mt_class",'name':"e_mm_mt_normal__FP13e_mm_mt_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807234E8,'size':604,'pad':0,'label':"e_mm_mt_hagare__FP13e_mm_mt_class",'name':"e_mm_mt_hagare__FP13e_mm_mt_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80723744,'size':648,'pad':0,'label':"e_mm_mt_carry__FP13e_mm_mt_class",'name':"e_mm_mt_carry__FP13e_mm_mt_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807239CC,'size':420,'pad':0,'label':"wall_angle_get__FP13e_mm_mt_class",'name':"wall_angle_get__FP13e_mm_mt_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80723B70,'size':1568,'pad':0,'label':"e_mm_mt_drop__FP13e_mm_mt_class",'name':"e_mm_mt_drop__FP13e_mm_mt_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80724190,'size':2992,'pad':0,'label':"action__FP13e_mm_mt_class",'name':"action__FP13e_mm_mt_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80724D40,'size':180,'pad':0,'label':"daE_MM_MT_Execute__FP13e_mm_mt_class",'name':"daE_MM_MT_Execute__FP13e_mm_mt_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80724DF4,'size':8,'pad':0,'label':"daE_MM_MT_IsDelete__FP13e_mm_mt_class",'name':"daE_MM_MT_IsDelete__FP13e_mm_mt_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80724DFC,'size':92,'pad':0,'label':"daE_MM_MT_Delete__FP13e_mm_mt_class",'name':"daE_MM_MT_Delete__FP13e_mm_mt_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80724E58,'size':136,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80724EE0,'size':824,'pad':0,'label':"daE_MM_MT_Create__FP10fopAc_ac_c",'name':"daE_MM_MT_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80725218,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80725260,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807252A8,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80725304,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80725374,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807253E4,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072542C,'size':8,'pad':0,'label':"func_8072542C",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80725434,'size':8,'pad':0,'label':"func_80725434",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8072543C,'size':1044,'pad':0,'label':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'name':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80725850,'size':4,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80725854,'size':4,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80725858,'size':4,'pad':0,'label':"lit_3789",'name':"@3789",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[9,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8072585C,'size':4,'pad':0,'label':"lit_3790",'name':"@3790",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80725860,'size':4,'pad':4,'label':"lit_3791",'name':"@3791",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80725868,'size':8,'pad':0,'label':"lit_3792",'name':"@3792",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80725870,'size':8,'pad':0,'label':"lit_3793",'name':"@3793",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80725878,'size':8,'pad':0,'label':"lit_3794",'name':"@3794",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80725880,'size':4,'pad':0,'label':"lit_3795",'name':"@3795",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80725884,'size':4,'pad':0,'label':"lit_3829",'name':"@3829",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80725888,'size':4,'pad':0,'label':"lit_3883",'name':"@3883",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8072588C,'size':4,'pad':0,'label':"lit_3884",'name':"@3884",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80725890,'size':4,'pad':0,'label':"lit_4008",'name':"@4008",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80725894,'size':4,'pad':0,'label':"lit_4009",'name':"@4009",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80725898,'size':4,'pad':0,'label':"lit_4010",'name':"@4010",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8072589C,'size':4,'pad':0,'label':"lit_4011",'name':"@4011",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258A0,'size':4,'pad':0,'label':"lit_4012",'name':"@4012",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258A4,'size':4,'pad':0,'label':"lit_4013",'name':"@4013",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258A8,'size':4,'pad':0,'label':"lit_4014",'name':"@4014",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258AC,'size':4,'pad':0,'label':"lit_4015",'name':"@4015",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258B0,'size':4,'pad':0,'label':"lit_4016",'name':"@4016",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258B4,'size':4,'pad':0,'label':"lit_4017",'name':"@4017",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258B8,'size':4,'pad':0,'label':"lit_4089",'name':"@4089",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258BC,'size':4,'pad':0,'label':"lit_4090",'name':"@4090",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258C0,'size':4,'pad':0,'label':"lit_4091",'name':"@4091",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258C4,'size':4,'pad':0,'label':"lit_4092",'name':"@4092",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258C8,'size':4,'pad':0,'label':"lit_4146",'name':"@4146",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258CC,'size':4,'pad':0,'label':"lit_4338",'name':"@4338",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258D0,'size':4,'pad':0,'label':"lit_4339",'name':"@4339",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258D4,'size':4,'pad':0,'label':"lit_4340",'name':"@4340",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258D8,'size':4,'pad':0,'label':"lit_4341",'name':"@4341",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258DC,'size':4,'pad':0,'label':"lit_4342",'name':"@4342",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258E0,'size':4,'pad':0,'label':"lit_4343",'name':"@4343",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258E4,'size':4,'pad':0,'label':"lit_4344",'name':"@4344",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258E8,'size':4,'pad':0,'label':"lit_4345",'name':"@4345",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258EC,'size':4,'pad':0,'label':"lit_4346",'name':"@4346",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258F0,'size':8,'pad':0,'label':"lit_4348",'name':"@4348",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807258F8,'size':4,'pad':0,'label':"lit_4730",'name':"@4730",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x807258FC,'size':4,'pad':0,'label':"lit_4731",'name':"@4731",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80725900,'size':4,'pad':0,'label':"lit_4732",'name':"@4732",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80725904,'size':4,'pad':0,'label':"lit_4733",'name':"@4733",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80725908,'size':4,'pad':0,'label':"lit_4734",'name':"@4734",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8072590C,'size':4,'pad':0,'label':"lit_4735",'name':"@4735",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80725910,'size':4,'pad':0,'label':"lit_4736",'name':"@4736",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80725914,'size':4,'pad':0,'label':"lit_4737",'name':"@4737",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80725918,'size':4,'pad':0,'label':"lit_4738",'name':"@4738",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8072591C,'size':4,'pad':0,'label':"lit_4739",'name':"@4739",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80725920,'size':4,'pad':0,'label':"lit_4740",'name':"@4740",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80725924,'size':4,'pad':0,'label':"lit_4896",'name':"@4896",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80725928,'size':4,'pad':0,'label':"lit_4897",'name':"@4897",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8072592C,'size':8,'pad':0,'label':"d_a_e_mm_mt__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':3,'class_template':None,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80725934,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80725940,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80725954,'size':8,'pad':0,'label':"e_prim",'name':"e_prim$3668",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072595C,'size':8,'pad':0,'label':"e_env",'name':"e_env$3669",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80725964,'size':6,'pad':2,'label':"eff_id",'name':"eff_id$3677",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8072596C,'size':64,'pad':0,'label':"cc_sph_src",'name':"cc_sph_src$4792",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807259AC,'size':64,'pad':0,'label':"hk_sph_src",'name':"hk_sph_src$4793",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x807259EC,'size':32,'pad':0,'label':"l_daE_MM_MT_Method",'name':"l_daE_MM_MT_Method",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80725A0C,'size':48,'pad':0,'label':"g_profile_E_MM_MT",'name':"g_profile_E_MM_MT",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80725A3C,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80725A48,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80725A54,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80725A60,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80725A6C,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80725A78,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"daE_MM_MT_Draw__FP13e_mm_mt_class":3,
	"e_mm_hookCheck__FP13e_mm_mt_class":4,
	"e_mm_mt_normal__FP13e_mm_mt_class":5,
	"e_mm_mt_hagare__FP13e_mm_mt_class":6,
	"e_mm_mt_carry__FP13e_mm_mt_class":7,
	"wall_angle_get__FP13e_mm_mt_class":8,
	"e_mm_mt_drop__FP13e_mm_mt_class":9,
	"action__FP13e_mm_mt_class":10,
	"daE_MM_MT_Execute__FP13e_mm_mt_class":11,
	"daE_MM_MT_IsDelete__FP13e_mm_mt_class":12,
	"daE_MM_MT_Delete__FP13e_mm_mt_class":13,
	"useHeapInit__FP10fopAc_ac_c":14,
	"daE_MM_MT_Create__FP10fopAc_ac_c":15,
	"__dt__8cM3dGSphFv":16,
	"__dt__8cM3dGAabFv":17,
	"__dt__10dCcD_GSttsFv":18,
	"__dt__12dBgS_ObjAcchFv":19,
	"__dt__12dBgS_AcchCirFv":20,
	"__dt__10cCcD_GSttsFv":21,
	"func_8072542C":22,
	"func_80725434":23,
	"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz":24,
	"_ctors":25,
	"_dtors":26,
	"lit_3789":27,
	"lit_3790":28,
	"lit_3791":29,
	"lit_3792":30,
	"lit_3793":31,
	"lit_3794":32,
	"lit_3795":33,
	"lit_3829":34,
	"lit_3883":35,
	"lit_3884":36,
	"lit_4008":37,
	"lit_4009":38,
	"lit_4010":39,
	"lit_4011":40,
	"lit_4012":41,
	"lit_4013":42,
	"lit_4014":43,
	"lit_4015":44,
	"lit_4016":45,
	"lit_4017":46,
	"lit_4089":47,
	"lit_4090":48,
	"lit_4091":49,
	"lit_4092":50,
	"lit_4146":51,
	"lit_4338":52,
	"lit_4339":53,
	"lit_4340":54,
	"lit_4341":55,
	"lit_4342":56,
	"lit_4343":57,
	"lit_4344":58,
	"lit_4345":59,
	"lit_4346":60,
	"lit_4348":61,
	"lit_4730":62,
	"lit_4731":63,
	"lit_4732":64,
	"lit_4733":65,
	"lit_4734":66,
	"lit_4735":67,
	"lit_4736":68,
	"lit_4737":69,
	"lit_4738":70,
	"lit_4739":71,
	"lit_4740":72,
	"lit_4896":73,
	"lit_4897":74,
	"d_a_e_mm_mt__stringBase0":75,
	"cNullVec__6Z2Calc":76,
	"lit_1787":77,
	"e_prim":78,
	"e_env":79,
	"eff_id":80,
	"cc_sph_src":81,
	"hk_sph_src":82,
	"l_daE_MM_MT_Method":83,
	"g_profile_E_MM_MT":84,
	"__vt__12dBgS_AcchCir":85,
	"__vt__10cCcD_GStts":86,
	"__vt__10dCcD_GStts":87,
	"__vt__8cM3dGSph":88,
	"__vt__8cM3dGAab":89,
	"__vt__12dBgS_ObjAcch":90,
}

