#
# Generate By: dol2asm
# Module: 405
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_bed",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_bed",
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
	{'addr':0x80BAD580,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BAD5AC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BAD5D8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BAD5F8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BAD614,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BAD66C,'size':292,'pad':0,'label':"__dt__11daObj_Bed_cFv",'name':"__dt__11daObj_Bed_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BAD790,'size':624,'pad':0,'label':"create__11daObj_Bed_cFv",'name':"create__11daObj_Bed_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BADA00,'size':72,'pad':0,'label':"__dt__8cM3dGLinFv",'name':"__dt__8cM3dGLinFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BADA48,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BADA90,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BADB00,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BADB70,'size':272,'pad':0,'label':"CreateHeap__11daObj_Bed_cFv",'name':"CreateHeap__11daObj_Bed_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BADC80,'size':52,'pad':0,'label':"Delete__11daObj_Bed_cFv",'name':"Delete__11daObj_Bed_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BADCB4,'size':320,'pad':0,'label':"Execute__11daObj_Bed_cFv",'name':"Execute__11daObj_Bed_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BADDF4,'size':196,'pad':0,'label':"Draw__11daObj_Bed_cFv",'name':"Draw__11daObj_Bed_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BADEB8,'size':32,'pad':0,'label':"createHeapCallBack__11daObj_Bed_cFP10fopAc_ac_c",'name':"createHeapCallBack__11daObj_Bed_cFP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BADED8,'size':8,'pad':0,'label':"getType__11daObj_Bed_cFv",'name':"getType__11daObj_Bed_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80BADEE0,'size':16,'pad':0,'label':"getResName__11daObj_Bed_cFv",'name':"getResName__11daObj_Bed_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BADEF0,'size':68,'pad':0,'label':"isDelete__11daObj_Bed_cFv",'name':"isDelete__11daObj_Bed_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BADF34,'size':92,'pad':0,'label':"setEnvTevColor__11daObj_Bed_cFv",'name':"setEnvTevColor__11daObj_Bed_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BADF90,'size':64,'pad':0,'label':"setRoomNo__11daObj_Bed_cFv",'name':"setRoomNo__11daObj_Bed_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BADFD0,'size':100,'pad':0,'label':"setMtx__11daObj_Bed_cFv",'name':"setMtx__11daObj_Bed_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BAE034,'size':32,'pad':0,'label':"daObj_Bed_Create__FPv",'name':"daObj_Bed_Create__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BAE054,'size':32,'pad':0,'label':"daObj_Bed_Delete__FPv",'name':"daObj_Bed_Delete__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BAE074,'size':32,'pad':0,'label':"daObj_Bed_Execute__FPv",'name':"daObj_Bed_Execute__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BAE094,'size':32,'pad':0,'label':"daObj_Bed_Draw__FPv",'name':"daObj_Bed_Draw__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BAE0B4,'size':8,'pad':0,'label':"daObj_Bed_IsDelete__FPv",'name':"daObj_Bed_IsDelete__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80BAE0BC,'size':64,'pad':0,'label':"__sinit_d_a_obj_bed_cpp",'name':"__sinit_d_a_obj_bed_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80BAE0FC,'size':72,'pad':0,'label':"__dt__17daObj_Bed_Param_cFv",'name':"__dt__17daObj_Bed_Param_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BAE144,'size':8,'pad':0,'label':"func_80BAE144",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BAE14C,'size':8,'pad':0,'label':"func_80BAE14C",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BAE154,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80BAE15C,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80BAE168,'size':16,'pad':0,'label':"m__17daObj_Bed_Param_c",'name':"m__17daObj_Bed_Param_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BAE178,'size':4,'pad':0,'label':"lit_3902",'name':"@3902",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BAE17C,'size':4,'pad':0,'label':"lit_3903",'name':"@3903",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BAE180,'size':4,'pad':0,'label':"lit_3904",'name':"@3904",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BAE184,'size':4,'pad':0,'label':"lit_3905",'name':"@3905",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BAE188,'size':4,'pad':0,'label':"lit_3985",'name':"@3985",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BAE18C,'size':4,'pad':0,'label':"lit_3986",'name':"@3986",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BAE190,'size':7,'pad':0,'label':"d_a_obj_bed__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80BAE198,'size':4,'pad':0,'label':"l_resName",'name':"l_resName",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BAE19C,'size':32,'pad':0,'label':"daObj_Bed_MethodTable",'name':"daObj_Bed_MethodTable",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BAE1BC,'size':48,'pad':0,'label':"g_profile_OBJ_BED",'name':"g_profile_OBJ_BED",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BAE1EC,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BAE210,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BAE21C,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BAE228,'size':12,'pad':0,'label':"__vt__8cM3dGLin",'name':"__vt__8cM3dGLin",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BAE234,'size':12,'pad':0,'label':"__vt__11daObj_Bed_c",'name':"__vt__11daObj_Bed_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BAE240,'size':12,'pad':0,'label':"__vt__17daObj_Bed_Param_c",'name':"__vt__17daObj_Bed_Param_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BAE250,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BAE258,'size':12,'pad':0,'label':"lit_3805",'name':"@3805",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BAE264,'size':4,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__dt__11daObj_Bed_cFv":5,
	"create__11daObj_Bed_cFv":6,
	"__dt__8cM3dGLinFv":7,
	"__dt__8cM3dGCylFv":8,
	"__dt__12dBgS_AcchCirFv":9,
	"__dt__12dBgS_ObjAcchFv":10,
	"CreateHeap__11daObj_Bed_cFv":11,
	"Delete__11daObj_Bed_cFv":12,
	"Execute__11daObj_Bed_cFv":13,
	"Draw__11daObj_Bed_cFv":14,
	"createHeapCallBack__11daObj_Bed_cFP10fopAc_ac_c":15,
	"getType__11daObj_Bed_cFv":16,
	"getResName__11daObj_Bed_cFv":17,
	"isDelete__11daObj_Bed_cFv":18,
	"setEnvTevColor__11daObj_Bed_cFv":19,
	"setRoomNo__11daObj_Bed_cFv":20,
	"setMtx__11daObj_Bed_cFv":21,
	"daObj_Bed_Create__FPv":22,
	"daObj_Bed_Delete__FPv":23,
	"daObj_Bed_Execute__FPv":24,
	"daObj_Bed_Draw__FPv":25,
	"daObj_Bed_IsDelete__FPv":26,
	"__sinit_d_a_obj_bed_cpp":27,
	"__dt__17daObj_Bed_Param_cFv":28,
	"func_80BAE144":29,
	"func_80BAE14C":30,
	"_ctors":31,
	"_dtors":32,
	"m__17daObj_Bed_Param_c":33,
	"lit_3902":34,
	"lit_3903":35,
	"lit_3904":36,
	"lit_3905":37,
	"lit_3985":38,
	"lit_3986":39,
	"d_a_obj_bed__stringBase0":40,
	"l_resName":41,
	"daObj_Bed_MethodTable":42,
	"g_profile_OBJ_BED":43,
	"__vt__12dBgS_ObjAcch":44,
	"__vt__12dBgS_AcchCir":45,
	"__vt__8cM3dGCyl":46,
	"__vt__8cM3dGLin":47,
	"__vt__11daObj_Bed_c":48,
	"__vt__17daObj_Bed_Param_c":49,
	"__global_destructor_chain":50,
	"lit_3805":51,
	"l_HIO":52,
}

