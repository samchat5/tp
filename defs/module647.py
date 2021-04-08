#
# Generate By: dol2asm
# Module: 647
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_swturn",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"unknown_translation_unit_bss",
	"d_a_obj_swturn",
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
	{'addr':0x80D00B60,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D00B8C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D00BB8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D00BD8,'size':256,'pad':0,'label':"PPCallBack__FP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel",'name':"PPCallBack__FP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D00CD8,'size':60,'pad':0,'label':"initBaseMtx__13daObjSwTurn_cFv",'name':"initBaseMtx__13daObjSwTurn_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D00D14,'size':100,'pad':0,'label':"setBaseMtx__13daObjSwTurn_cFv",'name':"setBaseMtx__13daObjSwTurn_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D00D78,'size':364,'pad':0,'label':"Create__13daObjSwTurn_cFv",'name':"Create__13daObjSwTurn_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D00EE4,'size':128,'pad':0,'label':"CreateHeap__13daObjSwTurn_cFv",'name':"CreateHeap__13daObjSwTurn_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D00F64,'size':272,'pad':0,'label':"create1st__13daObjSwTurn_cFv",'name':"create1st__13daObjSwTurn_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D01074,'size':96,'pad':0,'label':"Execute__13daObjSwTurn_cFPPA3_A4_f",'name':"Execute__13daObjSwTurn_cFPPA3_A4_f",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D010D4,'size':140,'pad':0,'label':"mode_proc_call__13daObjSwTurn_cFv",'name':"mode_proc_call__13daObjSwTurn_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D01160,'size':56,'pad':0,'label':"init_modeWait__13daObjSwTurn_cFv",'name':"init_modeWait__13daObjSwTurn_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D01198,'size':1496,'pad':0,'label':"modeWait__13daObjSwTurn_cFv",'name':"modeWait__13daObjSwTurn_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D01770,'size':324,'pad':0,'label':"init_modeRotate__13daObjSwTurn_cFv",'name':"init_modeRotate__13daObjSwTurn_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D018B4,'size':164,'pad':0,'label':"modeRotate__13daObjSwTurn_cFv",'name':"modeRotate__13daObjSwTurn_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D01958,'size':520,'pad':0,'label':"rotate_sub_0__13daObjSwTurn_cFv",'name':"rotate_sub_0__13daObjSwTurn_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D01B60,'size':848,'pad':0,'label':"rotate_sub_1__13daObjSwTurn_cFv",'name':"rotate_sub_1__13daObjSwTurn_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D01EB0,'size':168,'pad':0,'label':"Draw__13daObjSwTurn_cFv",'name':"Draw__13daObjSwTurn_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D01F58,'size':64,'pad':0,'label':"Delete__13daObjSwTurn_cFv",'name':"Delete__13daObjSwTurn_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D01F98,'size':96,'pad':0,'label':"daObjSwTurn_create1st__FP13daObjSwTurn_c",'name':"daObjSwTurn_create1st__FP13daObjSwTurn_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D01FF8,'size':32,'pad':0,'label':"daObjSwTurn_MoveBGDelete__FP13daObjSwTurn_c",'name':"daObjSwTurn_MoveBGDelete__FP13daObjSwTurn_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02018,'size':32,'pad':0,'label':"daObjSwTurn_MoveBGExecute__FP13daObjSwTurn_c",'name':"daObjSwTurn_MoveBGExecute__FP13daObjSwTurn_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02038,'size':44,'pad':0,'label':"daObjSwTurn_MoveBGDraw__FP13daObjSwTurn_c",'name':"daObjSwTurn_MoveBGDraw__FP13daObjSwTurn_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02064,'size':4,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80D02068,'size':4,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80D0206C,'size':8,'pad':0,'label':"l_bmd",'name':"l_bmd",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D02074,'size':8,'pad':0,'label':"l_dzb",'name':"l_dzb",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D0207C,'size':8,'pad':0,'label':"l_heap_size",'name':"l_heap_size",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D02084,'size':4,'pad':0,'label':"l_rot_time",'name':"l_rot_time",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D02088,'size':2,'pad':2,'label':"l_tame_time_1st",'name':"l_tame_time_1st",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D0208C,'size':2,'pad':2,'label':"l_tame_time_cnt",'name':"l_tame_time_cnt",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D02090,'size':4,'pad':0,'label':"lit_3698",'name':"@3698",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D02094,'size':4,'pad':0,'label':"lit_4098",'name':"@4098",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D02098,'size':4,'pad':0,'label':"lit_4099",'name':"@4099",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D0209C,'size':4,'pad':4,'label':"lit_4100",'name':"@4100",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D020A4,'size':8,'pad':0,'label':"lit_4102",'name':"@4102",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D020AC,'size':4,'pad':0,'label':"lit_4127",'name':"@4127",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D020B0,'size':4,'pad':0,'label':"lit_4189",'name':"@4189",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D020B4,'size':4,'pad':0,'label':"lit_4304",'name':"@4304",'lib':-1,'tu':4,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D020B8,'size':19,'pad':0,'label':"d_a_obj_swturn__stringBase0",'name':"@stringBase0",'lib':-1,'tu':4,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80D020CC,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D020D8,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D020EC,'size':8,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D020F4,'size':12,'pad':0,'label':"lit_3813",'name':"@3813",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D02100,'size':12,'pad':0,'label':"lit_3814",'name':"@3814",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D0210C,'size':24,'pad':0,'label':"l_func",'name':"l_func$3812",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D02124,'size':32,'pad':0,'label':"daObjSwTurn_METHODS",'name':"daObjSwTurn_METHODS",'lib':-1,'tu':4,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D02144,'size':48,'pad':0,'label':"g_profile_Obj_SwTurn",'name':"g_profile_Obj_SwTurn",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D02174,'size':40,'pad':0,'label':"__vt__13daObjSwTurn_c",'name':"__vt__13daObjSwTurn_c",'lib':-1,'tu':4,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D021A0,'size':4,'pad':0,'label':"data_80D021A0",'name':None,'lib':-1,'tu':3,'section':3,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"PPCallBack__FP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel":3,
	"initBaseMtx__13daObjSwTurn_cFv":4,
	"setBaseMtx__13daObjSwTurn_cFv":5,
	"Create__13daObjSwTurn_cFv":6,
	"CreateHeap__13daObjSwTurn_cFv":7,
	"create1st__13daObjSwTurn_cFv":8,
	"Execute__13daObjSwTurn_cFPPA3_A4_f":9,
	"mode_proc_call__13daObjSwTurn_cFv":10,
	"init_modeWait__13daObjSwTurn_cFv":11,
	"modeWait__13daObjSwTurn_cFv":12,
	"init_modeRotate__13daObjSwTurn_cFv":13,
	"modeRotate__13daObjSwTurn_cFv":14,
	"rotate_sub_0__13daObjSwTurn_cFv":15,
	"rotate_sub_1__13daObjSwTurn_cFv":16,
	"Draw__13daObjSwTurn_cFv":17,
	"Delete__13daObjSwTurn_cFv":18,
	"daObjSwTurn_create1st__FP13daObjSwTurn_c":19,
	"daObjSwTurn_MoveBGDelete__FP13daObjSwTurn_c":20,
	"daObjSwTurn_MoveBGExecute__FP13daObjSwTurn_c":21,
	"daObjSwTurn_MoveBGDraw__FP13daObjSwTurn_c":22,
	"_ctors":23,
	"_dtors":24,
	"l_bmd":25,
	"l_dzb":26,
	"l_heap_size":27,
	"l_rot_time":28,
	"l_tame_time_1st":29,
	"l_tame_time_cnt":30,
	"lit_3698":31,
	"lit_4098":32,
	"lit_4099":33,
	"lit_4100":34,
	"lit_4102":35,
	"lit_4127":36,
	"lit_4189":37,
	"lit_4304":38,
	"d_a_obj_swturn__stringBase0":39,
	"cNullVec__6Z2Calc":40,
	"lit_1787":41,
	"l_arcName":42,
	"lit_3813":43,
	"lit_3814":44,
	"l_func":45,
	"daObjSwTurn_METHODS":46,
	"g_profile_Obj_SwTurn":47,
	"__vt__13daObjSwTurn_c":48,
	"data_80D021A0":49,
}

