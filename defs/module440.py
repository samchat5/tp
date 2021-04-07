#
# Generate By: dol2asm
# Module: 440
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_dust",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"d_a_obj_dust",
]

# Sections
SECTIONS = [
	".text",
	".ctors",
	".dtors",
	".rodata",
	".data",
	".bss",
]

# Symbols
SYMBOLS = [
	{'addr':0x80BE2240,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE226C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE2298,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE22B8,'size':472,'pad':0,'label':"Search_Ymb__11daObjDust_cFv",'name':"Search_Ymb__11daObjDust_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE2490,'size':104,'pad':0,'label':"RideOn_Angle__11daObjDust_cFRsfsf",'name':"RideOn_Angle__11daObjDust_cFRsfsf",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE24F8,'size':528,'pad':0,'label':"Check_RideOn__11daObjDust_cFv",'name':"Check_RideOn__11daObjDust_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE2708,'size':44,'pad':0,'label':"initBaseMtx__11daObjDust_cFv",'name':"initBaseMtx__11daObjDust_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE2734,'size':92,'pad':0,'label':"setBaseMtx__11daObjDust_cFv",'name':"setBaseMtx__11daObjDust_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE2790,'size':44,'pad':0,'label':"rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'name':"rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE27BC,'size':44,'pad':0,'label':"daObjDust_Draw__FP11daObjDust_c",'name':"daObjDust_Draw__FP11daObjDust_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE27E8,'size':32,'pad':0,'label':"daObjDust_Execute__FP11daObjDust_c",'name':"daObjDust_Execute__FP11daObjDust_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE2808,'size':8,'pad':0,'label':"daObjDust_IsDelete__FP11daObjDust_c",'name':"daObjDust_IsDelete__FP11daObjDust_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80BE2810,'size':36,'pad':0,'label':"daObjDust_Delete__FP11daObjDust_c",'name':"daObjDust_Delete__FP11daObjDust_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE2834,'size':460,'pad':0,'label':"daObjDust_Create__FP10fopAc_ac_c",'name':"daObjDust_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE2A00,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE2A70,'size':120,'pad':0,'label':"CreateHeap__11daObjDust_cFv",'name':"CreateHeap__11daObjDust_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE2AE8,'size':72,'pad':0,'label':"Create__11daObjDust_cFv",'name':"Create__11daObjDust_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE2B30,'size':876,'pad':0,'label':"Execute__11daObjDust_cFPPA3_A4_f",'name':"Execute__11daObjDust_cFPPA3_A4_f",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE2E9C,'size':164,'pad':0,'label':"Draw__11daObjDust_cFv",'name':"Draw__11daObjDust_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE2F40,'size':52,'pad':0,'label':"Delete__11daObjDust_cFv",'name':"Delete__11daObjDust_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE2F74,'size':12,'pad':0,'label':"func_80BE2F74",'name':"sinShort__Q25JMath18TSinCosTable<13,f>CFs",'lib':-1,'tu':3,'section':0,'class_template':True,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE2F80,'size':8,'pad':0,'label':"func_80BE2F80",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE2F88,'size':8,'pad':0,'label':"func_80BE2F88",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE2F90,'size':4,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80BE2F94,'size':4,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80BE2F98,'size':4,'pad':4,'label':"lit_3673",'name':"@3673",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BE2FA0,'size':8,'pad':0,'label':"lit_3675",'name':"@3675",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BE2FA8,'size':4,'pad':0,'label':"lit_3723",'name':"@3723",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FAC,'size':4,'pad':0,'label':"lit_3724",'name':"@3724",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FB0,'size':4,'pad':0,'label':"lit_3725",'name':"@3725",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FB4,'size':4,'pad':0,'label':"lit_3726",'name':"@3726",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FB8,'size':4,'pad':0,'label':"lit_3727",'name':"@3727",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FBC,'size':4,'pad':0,'label':"lit_3728",'name':"@3728",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FC0,'size':4,'pad':0,'label':"lit_3729",'name':"@3729",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FC4,'size':4,'pad':0,'label':"lit_3730",'name':"@3730",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FC8,'size':4,'pad':0,'label':"lit_3731",'name':"@3731",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FCC,'size':4,'pad':0,'label':"lit_3732",'name':"@3732",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FD0,'size':4,'pad':0,'label':"lit_3733",'name':"@3733",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FD4,'size':4,'pad':0,'label':"lit_3734",'name':"@3734",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FD8,'size':4,'pad':0,'label':"lit_3735",'name':"@3735",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FDC,'size':4,'pad':0,'label':"lit_3736",'name':"@3736",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FE0,'size':4,'pad':0,'label':"lit_3737",'name':"@3737",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FE4,'size':4,'pad':0,'label':"lit_3775",'name':"@3775",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FE8,'size':4,'pad':0,'label':"lit_3817",'name':"@3817",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FEC,'size':4,'pad':0,'label':"lit_3885",'name':"@3885",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FF0,'size':4,'pad':0,'label':"lit_3886",'name':"@3886",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FF4,'size':4,'pad':0,'label':"lit_3887",'name':"@3887",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FF8,'size':4,'pad':0,'label':"lit_3888",'name':"@3888",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE2FFC,'size':4,'pad':0,'label':"lit_3889",'name':"@3889",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE3000,'size':4,'pad':0,'label':"lit_3963",'name':"@3963",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE3004,'size':4,'pad':0,'label':"lit_3964",'name':"@3964",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE3008,'size':4,'pad':0,'label':"lit_3965",'name':"@3965",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE300C,'size':4,'pad':0,'label':"lit_3966",'name':"@3966",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE3010,'size':4,'pad':0,'label':"lit_3967",'name':"@3967",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE3014,'size':4,'pad':0,'label':"lit_3968",'name':"@3968",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE3018,'size':4,'pad':0,'label':"lit_3969",'name':"@3969",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE301C,'size':4,'pad':0,'label':"lit_3970",'name':"@3970",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE3020,'size':49,'pad':0,'label':"d_a_obj_dust__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':3,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80BE3054,'size':4,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BE3058,'size':32,'pad':0,'label':"l_daObjDust_Method",'name':"l_daObjDust_Method",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BE3078,'size':48,'pad':0,'label':"g_profile_Obj_DUST",'name':"g_profile_Obj_DUST",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BE30A8,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BE30CC,'size':40,'pad':0,'label':"__vt__11daObjDust_c",'name':"__vt__11daObjDust_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BE30F8,'size':4,'pad':0,'label':"data_80BE30F8",'name':"e_ymb__26@unnamed@d_a_obj_dust_cpp@",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BE30FC,'size':4,'pad':0,'label':"data_80BE30FC",'name':"e_ymb_Pos__26@unnamed@d_a_obj_dust_cpp@",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"Search_Ymb__11daObjDust_cFv":3,
	"RideOn_Angle__11daObjDust_cFRsfsf":4,
	"Check_RideOn__11daObjDust_cFv":5,
	"initBaseMtx__11daObjDust_cFv":6,
	"setBaseMtx__11daObjDust_cFv":7,
	"rideCallBack__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c":8,
	"daObjDust_Draw__FP11daObjDust_c":9,
	"daObjDust_Execute__FP11daObjDust_c":10,
	"daObjDust_IsDelete__FP11daObjDust_c":11,
	"daObjDust_Delete__FP11daObjDust_c":12,
	"daObjDust_Create__FP10fopAc_ac_c":13,
	"__dt__12dBgS_ObjAcchFv":14,
	"CreateHeap__11daObjDust_cFv":15,
	"Create__11daObjDust_cFv":16,
	"Execute__11daObjDust_cFPPA3_A4_f":17,
	"Draw__11daObjDust_cFv":18,
	"Delete__11daObjDust_cFv":19,
	"func_80BE2F74":20,
	"func_80BE2F80":21,
	"func_80BE2F88":22,
	"_ctors":23,
	"_dtors":24,
	"lit_3673":25,
	"lit_3675":26,
	"lit_3723":27,
	"lit_3724":28,
	"lit_3725":29,
	"lit_3726":30,
	"lit_3727":31,
	"lit_3728":32,
	"lit_3729":33,
	"lit_3730":34,
	"lit_3731":35,
	"lit_3732":36,
	"lit_3733":37,
	"lit_3734":38,
	"lit_3735":39,
	"lit_3736":40,
	"lit_3737":41,
	"lit_3775":42,
	"lit_3817":43,
	"lit_3885":44,
	"lit_3886":45,
	"lit_3887":46,
	"lit_3888":47,
	"lit_3889":48,
	"lit_3963":49,
	"lit_3964":50,
	"lit_3965":51,
	"lit_3966":52,
	"lit_3967":53,
	"lit_3968":54,
	"lit_3969":55,
	"lit_3970":56,
	"d_a_obj_dust__stringBase0":57,
	"l_arcName":58,
	"l_daObjDust_Method":59,
	"g_profile_Obj_DUST":60,
	"__vt__12dBgS_ObjAcch":61,
	"__vt__11daObjDust_c":62,
	"data_80BE30F8":63,
	"data_80BE30FC":64,
}

