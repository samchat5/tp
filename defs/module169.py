#
# Generate By: dol2asm
# Module: 169
#

# Libraries
LIBRARIES = [
	"d/a/door/d_a_door_push",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"unknown_translation_unit_bss",
	"d_a_door_push",
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
	{'addr':0x80677D40,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80677D6C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80677D98,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80677DB8,'size':40,'pad':0,'label':"PPCallBack__FP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel",'name':"PPCallBack__FP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80677DE0,'size':40,'pad':0,'label':"PPCallBack2__FP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel",'name':"PPCallBack2__FP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80677E08,'size':304,'pad':0,'label':"initBaseMtx__12daDoorPush_cFv",'name':"initBaseMtx__12daDoorPush_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80677F38,'size':296,'pad':0,'label':"setBaseMtx__12daDoorPush_cFv",'name':"setBaseMtx__12daDoorPush_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80678060,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067809C,'size':352,'pad':0,'label':"Create__12daDoorPush_cFv",'name':"Create__12daDoorPush_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806781FC,'size':284,'pad':0,'label':"CreateHeap__12daDoorPush_cFv",'name':"CreateHeap__12daDoorPush_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80678318,'size':132,'pad':0,'label':"create1st__12daDoorPush_cFv",'name':"create1st__12daDoorPush_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067839C,'size':112,'pad':0,'label':"Execute__12daDoorPush_cFPPA3_A4_f",'name':"Execute__12daDoorPush_cFPPA3_A4_f",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067840C,'size':124,'pad':0,'label':"action__12daDoorPush_cFv",'name':"action__12daDoorPush_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80678488,'size':44,'pad':0,'label':"init_modeWait__12daDoorPush_cFv",'name':"init_modeWait__12daDoorPush_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806784B4,'size':432,'pad':0,'label':"modeWait__12daDoorPush_cFv",'name':"modeWait__12daDoorPush_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80678664,'size':164,'pad':0,'label':"event_proc_call__12daDoorPush_cFv",'name':"event_proc_call__12daDoorPush_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80678708,'size':116,'pad':0,'label':"actionOpenWait__12daDoorPush_cFv",'name':"actionOpenWait__12daDoorPush_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8067877C,'size':124,'pad':0,'label':"actionOrderEvent__12daDoorPush_cFv",'name':"actionOrderEvent__12daDoorPush_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806787F8,'size':32,'pad':0,'label':"actionEvent__12daDoorPush_cFv",'name':"actionEvent__12daDoorPush_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80678818,'size':724,'pad':0,'label':"demoProc__12daDoorPush_cFv",'name':"demoProc__12daDoorPush_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80678AEC,'size':36,'pad':0,'label':"rotateInit__12daDoorPush_cFv",'name':"rotateInit__12daDoorPush_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80678B10,'size':176,'pad':0,'label':"rotate__12daDoorPush_cFv",'name':"rotate__12daDoorPush_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80678BC0,'size':176,'pad':0,'label':"setGoal__12daDoorPush_cFv",'name':"setGoal__12daDoorPush_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80678C70,'size':188,'pad':0,'label':"Draw__12daDoorPush_cFv",'name':"Draw__12daDoorPush_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80678D2C,'size':128,'pad':0,'label':"Delete__12daDoorPush_cFv",'name':"Delete__12daDoorPush_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80678DAC,'size':140,'pad':0,'label':"daDoorPush_create1st__FP12daDoorPush_c",'name':"daDoorPush_create1st__FP12daDoorPush_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80678E38,'size':4,'pad':0,'label':"__ct__4cXyzFv",'name':"__ct__4cXyzFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80678E3C,'size':32,'pad':0,'label':"daDoorPush_MoveBGDelete__FP12daDoorPush_c",'name':"daDoorPush_MoveBGDelete__FP12daDoorPush_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80678E5C,'size':32,'pad':0,'label':"daDoorPush_MoveBGExecute__FP12daDoorPush_c",'name':"daDoorPush_MoveBGExecute__FP12daDoorPush_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80678E7C,'size':44,'pad':0,'label':"daDoorPush_MoveBGDraw__FP12daDoorPush_c",'name':"daDoorPush_MoveBGDraw__FP12daDoorPush_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80678EA8,'size':28,'pad':0,'label':"func_80678EA8",'name':"cLib_calcTimer<Uc>__FPUc",'lib':-1,'tu':4,'section':0,'class_template':True,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80678EC4,'size':4,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80678EC8,'size':4,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80678ECC,'size':4,'pad':0,'label':"lit_3688",'name':"@3688",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80678ED0,'size':4,'pad':0,'label':"lit_3689",'name':"@3689",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80678ED4,'size':4,'pad':0,'label':"lit_3690",'name':"@3690",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80678ED8,'size':4,'pad':0,'label':"lit_3716",'name':"@3716",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80678EDC,'size':4,'pad':0,'label':"lit_3717",'name':"@3717",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80678EE0,'size':4,'pad':0,'label':"lit_3744",'name':"@3744",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80678EE4,'size':4,'pad':4,'label':"lit_3870",'name':"@3870",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80678EEC,'size':8,'pad':0,'label':"lit_3872",'name':"@3872",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80678EF4,'size':4,'pad':0,'label':"lit_3985",'name':"@3985",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80678EF8,'size':4,'pad':0,'label':"lit_3986",'name':"@3986",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80678EFC,'size':4,'pad':0,'label':"lit_4009",'name':"@4009",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80678F00,'size':4,'pad':0,'label':"lit_4010",'name':"@4010",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80678F04,'size':8,'pad':0,'label':"lit_4012",'name':"@4012",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80678F0C,'size':4,'pad':0,'label':"lit_4031",'name':"@4031",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80678F10,'size':4,'pad':0,'label':"lit_4032",'name':"@4032",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80678F14,'size':4,'pad':0,'label':"lit_4033",'name':"@4033",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80678F18,'size':54,'pad':0,'label':"d_a_door_push__stringBase0",'name':"@stringBase0",'lib':-1,'tu':4,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80678F50,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80678F5C,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80678F70,'size':4,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80678F74,'size':24,'pad':0,'label':"l_cull_box",'name':"l_cull_box",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80678F8C,'size':12,'pad':0,'label':"lit_3792",'name':"@3792",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80678F98,'size':12,'pad':0,'label':"l_func_3791",'name':"l_func$3791",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80678FA4,'size':12,'pad':0,'label':"lit_3878",'name':"@3878",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80678FB0,'size':12,'pad':0,'label':"lit_3879",'name':"@3879",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80678FBC,'size':12,'pad':0,'label':"lit_3880",'name':"@3880",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80678FC8,'size':36,'pad':0,'label':"l_func_3877",'name':"l_func$3877",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80678FEC,'size':12,'pad':0,'label':"action_table",'name':"action_table$3910",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80678FF8,'size':32,'pad':0,'label':"daDoorPush_METHODS",'name':"daDoorPush_METHODS",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80679018,'size':48,'pad':0,'label':"g_profile_PushDoor",'name':"g_profile_PushDoor",'lib':-1,'tu':4,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80679048,'size':40,'pad':0,'label':"__vt__12daDoorPush_c",'name':"__vt__12daDoorPush_c",'lib':-1,'tu':4,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80679070,'size':4,'pad':0,'label':"struct_80679070",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'static':False,'is_reachable':False,'r':[0,2,0],'sh':[0,0,0],'type':"Structure"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"PPCallBack__FP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel":3,
	"PPCallBack2__FP10fopAc_ac_cP10fopAc_ac_csQ29dBgW_Base13PushPullLabel":4,
	"initBaseMtx__12daDoorPush_cFv":5,
	"setBaseMtx__12daDoorPush_cFv":6,
	"__dt__4cXyzFv":7,
	"Create__12daDoorPush_cFv":8,
	"CreateHeap__12daDoorPush_cFv":9,
	"create1st__12daDoorPush_cFv":10,
	"Execute__12daDoorPush_cFPPA3_A4_f":11,
	"action__12daDoorPush_cFv":12,
	"init_modeWait__12daDoorPush_cFv":13,
	"modeWait__12daDoorPush_cFv":14,
	"event_proc_call__12daDoorPush_cFv":15,
	"actionOpenWait__12daDoorPush_cFv":16,
	"actionOrderEvent__12daDoorPush_cFv":17,
	"actionEvent__12daDoorPush_cFv":18,
	"demoProc__12daDoorPush_cFv":19,
	"rotateInit__12daDoorPush_cFv":20,
	"rotate__12daDoorPush_cFv":21,
	"setGoal__12daDoorPush_cFv":22,
	"Draw__12daDoorPush_cFv":23,
	"Delete__12daDoorPush_cFv":24,
	"daDoorPush_create1st__FP12daDoorPush_c":25,
	"__ct__4cXyzFv":26,
	"daDoorPush_MoveBGDelete__FP12daDoorPush_c":27,
	"daDoorPush_MoveBGExecute__FP12daDoorPush_c":28,
	"daDoorPush_MoveBGDraw__FP12daDoorPush_c":29,
	"func_80678EA8":30,
	"_ctors":31,
	"_dtors":32,
	"lit_3688":33,
	"lit_3689":34,
	"lit_3690":35,
	"lit_3716":36,
	"lit_3717":37,
	"lit_3744":38,
	"lit_3870":39,
	"lit_3872":40,
	"lit_3985":41,
	"lit_3986":42,
	"lit_4009":43,
	"lit_4010":44,
	"lit_4012":45,
	"lit_4031":46,
	"lit_4032":47,
	"lit_4033":48,
	"d_a_door_push__stringBase0":49,
	"cNullVec__6Z2Calc":50,
	"lit_1787":51,
	"l_arcName":52,
	"l_cull_box":53,
	"lit_3792":54,
	"l_func_3791":55,
	"lit_3878":56,
	"lit_3879":57,
	"lit_3880":58,
	"l_func_3877":59,
	"action_table":60,
	"daDoorPush_METHODS":61,
	"g_profile_PushDoor":62,
	"__vt__12daDoorPush_c":63,
	"struct_80679070":64,
}

