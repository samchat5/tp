#
# Generate By: dol2asm
# Module: 446
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_fireWood2",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_fireWood2",
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
	{'addr':0x80BE8160,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE818C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE81B8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE81D8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE81F4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE824C,'size':60,'pad':0,'label':"__ct__17daFireWood2_HIO_cFv",'name':"__ct__17daFireWood2_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE8288,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE82D0,'size':88,'pad':0,'label':"setBaseMtx__13daFireWood2_cFv",'name':"setBaseMtx__13daFireWood2_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE8328,'size':648,'pad':0,'label':"create__13daFireWood2_cFv",'name':"create__13daFireWood2_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE85B0,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE85F8,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE8640,'size':140,'pad':0,'label':"lightInit__13daFireWood2_cFv",'name':"lightInit__13daFireWood2_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE86CC,'size':48,'pad':0,'label':"setLight__13daFireWood2_cFv",'name':"setLight__13daFireWood2_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE86FC,'size':48,'pad':0,'label':"cutLight__13daFireWood2_cFv",'name':"cutLight__13daFireWood2_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE872C,'size':176,'pad':0,'label':"pointLightProc__13daFireWood2_cFv",'name':"pointLightProc__13daFireWood2_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE87DC,'size':1468,'pad':0,'label':"Execute__13daFireWood2_cFv",'name':"Execute__13daFireWood2_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE8D98,'size':8,'pad':0,'label':"Draw__13daFireWood2_cFv",'name':"Draw__13daFireWood2_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80BE8DA0,'size':52,'pad':0,'label':"Delete__13daFireWood2_cFv",'name':"Delete__13daFireWood2_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE8DD4,'size':32,'pad':0,'label':"daFireWood2_Draw__FP13daFireWood2_c",'name':"daFireWood2_Draw__FP13daFireWood2_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE8DF4,'size':32,'pad':0,'label':"daFireWood2_Execute__FP13daFireWood2_c",'name':"daFireWood2_Execute__FP13daFireWood2_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE8E14,'size':32,'pad':0,'label':"daFireWood2_Delete__FP13daFireWood2_c",'name':"daFireWood2_Delete__FP13daFireWood2_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE8E34,'size':32,'pad':0,'label':"daFireWood2_Create__FP10fopAc_ac_c",'name':"daFireWood2_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE8E54,'size':92,'pad':0,'label':"__dt__17daFireWood2_HIO_cFv",'name':"__dt__17daFireWood2_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BE8EB0,'size':112,'pad':0,'label':"__sinit_d_a_obj_fireWood2_cpp",'name':"__sinit_d_a_obj_fireWood2_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80BE8F20,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80BE8F28,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80BE8F34,'size':4,'pad':0,'label':"lit_3625",'name':"@3625",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE8F38,'size':4,'pad':0,'label':"lit_3626",'name':"@3626",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE8F3C,'size':4,'pad':0,'label':"lit_3627",'name':"@3627",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE8F40,'size':48,'pad':0,'label':"mCcDObjInfo__13daFireWood2_c",'name':"mCcDObjInfo__13daFireWood2_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BE8F70,'size':4,'pad':0,'label':"lit_3834",'name':"@3834",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE8F74,'size':4,'pad':0,'label':"lit_3835",'name':"@3835",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE8F78,'size':4,'pad':0,'label':"lit_3836",'name':"@3836",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE8F7C,'size':4,'pad':0,'label':"lit_3837",'name':"@3837",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BE8F80,'size':4,'pad':0,'label':"lit_3855",'name':"@3855",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BE8F84,'size':4,'pad':0,'label':"lit_3863",'name':"@3863",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE8F88,'size':4,'pad':0,'label':"lit_3864",'name':"@3864",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE8F8C,'size':4,'pad':0,'label':"lit_3865",'name':"@3865",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BE8F90,'size':4,'pad':0,'label':"lit_3866",'name':"@3866",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BE8F94,'size':4,'pad':0,'label':"lit_4018",'name':"@4018",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BE8F98,'size':68,'pad':0,'label':"mCcDCyl__13daFireWood2_c",'name':"mCcDCyl__13daFireWood2_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BE8FDC,'size':24,'pad':0,'label':"l_cull_box",'name':"l_cull_box",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BE8FF4,'size':32,'pad':0,'label':"l_daFireWood2_Method",'name':"l_daFireWood2_Method",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BE9014,'size':48,'pad':0,'label':"g_profile_Obj_FireWood2",'name':"g_profile_Obj_FireWood2",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BE9044,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BE9050,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BE905C,'size':12,'pad':0,'label':"__vt__17daFireWood2_HIO_c",'name':"__vt__17daFireWood2_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BE9068,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BE9078,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BE9080,'size':12,'pad':0,'label':"lit_3619",'name':"@3619",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BE908C,'size':16,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__17daFireWood2_HIO_cFv":5,
	"__dt__14mDoHIO_entry_cFv":6,
	"setBaseMtx__13daFireWood2_cFv":7,
	"create__13daFireWood2_cFv":8,
	"__dt__8cM3dGCylFv":9,
	"__dt__8cM3dGAabFv":10,
	"lightInit__13daFireWood2_cFv":11,
	"setLight__13daFireWood2_cFv":12,
	"cutLight__13daFireWood2_cFv":13,
	"pointLightProc__13daFireWood2_cFv":14,
	"Execute__13daFireWood2_cFv":15,
	"Draw__13daFireWood2_cFv":16,
	"Delete__13daFireWood2_cFv":17,
	"daFireWood2_Draw__FP13daFireWood2_c":18,
	"daFireWood2_Execute__FP13daFireWood2_c":19,
	"daFireWood2_Delete__FP13daFireWood2_c":20,
	"daFireWood2_Create__FP10fopAc_ac_c":21,
	"__dt__17daFireWood2_HIO_cFv":22,
	"__sinit_d_a_obj_fireWood2_cpp":23,
	"_ctors":24,
	"_dtors":25,
	"lit_3625":26,
	"lit_3626":27,
	"lit_3627":28,
	"mCcDObjInfo__13daFireWood2_c":29,
	"lit_3834":30,
	"lit_3835":31,
	"lit_3836":32,
	"lit_3837":33,
	"lit_3855":34,
	"lit_3863":35,
	"lit_3864":36,
	"lit_3865":37,
	"lit_3866":38,
	"lit_4018":39,
	"mCcDCyl__13daFireWood2_c":40,
	"l_cull_box":41,
	"l_daFireWood2_Method":42,
	"g_profile_Obj_FireWood2":43,
	"__vt__8cM3dGCyl":44,
	"__vt__8cM3dGAab":45,
	"__vt__17daFireWood2_HIO_c":46,
	"__vt__14mDoHIO_entry_c":47,
	"__global_destructor_chain":48,
	"lit_3619":49,
	"l_HIO":50,
}

