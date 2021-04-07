#
# Generate By: dol2asm
# Module: 526
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_lv4Gate",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_lv4Gate",
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
	{'addr':0x80C5EA80,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5EAAC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5EAD8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5EAF8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5EB14,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5EB6C,'size':48,'pad':0,'label':"__ct__15daLv4Gate_HIO_cFv",'name':"__ct__15daLv4Gate_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5EB9C,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5EBE4,'size':156,'pad':0,'label':"setBaseMtx__11daLv4Gate_cFv",'name':"setBaseMtx__11daLv4Gate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5EC80,'size':108,'pad':0,'label':"CreateHeap__11daLv4Gate_cFv",'name':"CreateHeap__11daLv4Gate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5ECEC,'size':360,'pad':0,'label':"create__11daLv4Gate_cFv",'name':"create__11daLv4Gate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5EE54,'size':80,'pad':0,'label':"Execute__11daLv4Gate_cFPPA3_A4_f",'name':"Execute__11daLv4Gate_cFPPA3_A4_f",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5EEA4,'size':164,'pad':0,'label':"moveGate__11daLv4Gate_cFv",'name':"moveGate__11daLv4Gate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5EF48,'size':12,'pad':0,'label':"init_modeWait__11daLv4Gate_cFv",'name':"init_modeWait__11daLv4Gate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5EF54,'size':92,'pad':0,'label':"modeWait__11daLv4Gate_cFv",'name':"modeWait__11daLv4Gate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5EFB0,'size':12,'pad':0,'label':"init_modeMove__11daLv4Gate_cFv",'name':"init_modeMove__11daLv4Gate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5EFBC,'size':264,'pad':0,'label':"modeMove__11daLv4Gate_cFv",'name':"modeMove__11daLv4Gate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5F0C4,'size':288,'pad':0,'label':"init_modeMoveEnd__11daLv4Gate_cFv",'name':"init_modeMoveEnd__11daLv4Gate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5F1E4,'size':4,'pad':0,'label':"modeMoveEnd__11daLv4Gate_cFv",'name':"modeMoveEnd__11daLv4Gate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C5F1E8,'size':164,'pad':0,'label':"Draw__11daLv4Gate_cFv",'name':"Draw__11daLv4Gate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5F28C,'size':48,'pad':0,'label':"Delete__11daLv4Gate_cFv",'name':"Delete__11daLv4Gate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5F2BC,'size':44,'pad':0,'label':"daLv4Gate_Draw__FP11daLv4Gate_c",'name':"daLv4Gate_Draw__FP11daLv4Gate_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5F2E8,'size':32,'pad':0,'label':"daLv4Gate_Execute__FP11daLv4Gate_c",'name':"daLv4Gate_Execute__FP11daLv4Gate_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5F308,'size':32,'pad':0,'label':"daLv4Gate_Delete__FP11daLv4Gate_c",'name':"daLv4Gate_Delete__FP11daLv4Gate_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5F328,'size':32,'pad':0,'label':"daLv4Gate_Create__FP10fopAc_ac_c",'name':"daLv4Gate_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5F348,'size':92,'pad':0,'label':"__dt__15daLv4Gate_HIO_cFv",'name':"__dt__15daLv4Gate_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5F3A4,'size':60,'pad':0,'label':"__sinit_d_a_obj_lv4Gate_cpp",'name':"__sinit_d_a_obj_lv4Gate_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80C5F3E0,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C5F3E8,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C5F3F4,'size':4,'pad':0,'label':"lit_3625",'name':"@3625",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[4,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C5F3F8,'size':4,'pad':0,'label':"lit_3646",'name':"@3646",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C5F3FC,'size':4,'pad':0,'label':"lit_3710",'name':"@3710",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C5F400,'size':4,'pad':0,'label':"lit_3711",'name':"@3711",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C5F404,'size':4,'pad':0,'label':"lit_3775",'name':"@3775",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C5F408,'size':4,'pad':0,'label':"lit_3776",'name':"@3776",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C5F40C,'size':4,'pad':0,'label':"lit_3777",'name':"@3777",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C5F410,'size':4,'pad':0,'label':"lit_3778",'name':"@3778",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C5F414,'size':7,'pad':0,'label':"d_a_obj_lv4Gate__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80C5F41C,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C5F428,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C5F43C,'size':12,'pad':0,'label':"lit_3725",'name':"@3725",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5F448,'size':12,'pad':0,'label':"lit_3726",'name':"@3726",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5F454,'size':12,'pad':0,'label':"lit_3727",'name':"@3727",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5F460,'size':36,'pad':0,'label':"mode_proc",'name':"mode_proc$3724",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C5F484,'size':32,'pad':0,'label':"l_daLv4Gate_Method",'name':"l_daLv4Gate_Method",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5F4A4,'size':48,'pad':0,'label':"g_profile_Obj_Lv4Gate",'name':"g_profile_Obj_Lv4Gate",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C5F4D4,'size':40,'pad':0,'label':"__vt__11daLv4Gate_c",'name':"__vt__11daLv4Gate_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C5F4FC,'size':12,'pad':0,'label':"__vt__15daLv4Gate_HIO_c",'name':"__vt__15daLv4Gate_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C5F508,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C5F518,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C5F520,'size':12,'pad':0,'label':"lit_3619",'name':"@3619",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C5F52C,'size':12,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C5F538,'size':4,'pad':0,'label':"data_80C5F538",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__15daLv4Gate_HIO_cFv":5,
	"__dt__14mDoHIO_entry_cFv":6,
	"setBaseMtx__11daLv4Gate_cFv":7,
	"CreateHeap__11daLv4Gate_cFv":8,
	"create__11daLv4Gate_cFv":9,
	"Execute__11daLv4Gate_cFPPA3_A4_f":10,
	"moveGate__11daLv4Gate_cFv":11,
	"init_modeWait__11daLv4Gate_cFv":12,
	"modeWait__11daLv4Gate_cFv":13,
	"init_modeMove__11daLv4Gate_cFv":14,
	"modeMove__11daLv4Gate_cFv":15,
	"init_modeMoveEnd__11daLv4Gate_cFv":16,
	"modeMoveEnd__11daLv4Gate_cFv":17,
	"Draw__11daLv4Gate_cFv":18,
	"Delete__11daLv4Gate_cFv":19,
	"daLv4Gate_Draw__FP11daLv4Gate_c":20,
	"daLv4Gate_Execute__FP11daLv4Gate_c":21,
	"daLv4Gate_Delete__FP11daLv4Gate_c":22,
	"daLv4Gate_Create__FP10fopAc_ac_c":23,
	"__dt__15daLv4Gate_HIO_cFv":24,
	"__sinit_d_a_obj_lv4Gate_cpp":25,
	"_ctors":26,
	"_dtors":27,
	"lit_3625":28,
	"lit_3646":29,
	"lit_3710":30,
	"lit_3711":31,
	"lit_3775":32,
	"lit_3776":33,
	"lit_3777":34,
	"lit_3778":35,
	"d_a_obj_lv4Gate__stringBase0":36,
	"cNullVec__6Z2Calc":37,
	"lit_1787":38,
	"lit_3725":39,
	"lit_3726":40,
	"lit_3727":41,
	"mode_proc":42,
	"l_daLv4Gate_Method":43,
	"g_profile_Obj_Lv4Gate":44,
	"__vt__11daLv4Gate_c":45,
	"__vt__15daLv4Gate_HIO_c":46,
	"__vt__14mDoHIO_entry_c":47,
	"__global_destructor_chain":48,
	"lit_3619":49,
	"l_HIO":50,
	"data_80C5F538":51,
}

