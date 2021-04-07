#
# Generate By: dol2asm
# Module: 566
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_magLiftRot",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_magLiftRot",
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
	{'addr':0x80C8E860,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8E88C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8E8B8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8E8D8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8E8F4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8E94C,'size':148,'pad':0,'label':"__ct__18daMagLiftRot_HIO_cFv",'name':"__ct__18daMagLiftRot_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8E9E0,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8EA28,'size':244,'pad':0,'label':"setBaseMtx__14daMagLiftRot_cFv",'name':"setBaseMtx__14daMagLiftRot_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8EB1C,'size':328,'pad':0,'label':"CreateHeap__14daMagLiftRot_cFv",'name':"CreateHeap__14daMagLiftRot_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8EC64,'size':744,'pad':0,'label':"create__14daMagLiftRot_cFv",'name':"create__14daMagLiftRot_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8EF4C,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8EF94,'size':152,'pad':0,'label':"Execute__14daMagLiftRot_cFPPA3_A4_f",'name':"Execute__14daMagLiftRot_cFPPA3_A4_f",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8F02C,'size':568,'pad':0,'label':"moveLift__14daMagLiftRot_cFv",'name':"moveLift__14daMagLiftRot_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8F264,'size':572,'pad':0,'label':"init_modeMove__14daMagLiftRot_cFv",'name':"init_modeMove__14daMagLiftRot_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8F4A0,'size':152,'pad':0,'label':"modeMove__14daMagLiftRot_cFv",'name':"modeMove__14daMagLiftRot_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8F538,'size':660,'pad':0,'label':"init_modeWait__14daMagLiftRot_cFv",'name':"init_modeWait__14daMagLiftRot_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8F7CC,'size':56,'pad':0,'label':"modeWait__14daMagLiftRot_cFv",'name':"modeWait__14daMagLiftRot_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8F804,'size':12,'pad':0,'label':"init_modeMoveWait__14daMagLiftRot_cFv",'name':"init_modeMoveWait__14daMagLiftRot_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8F810,'size':92,'pad':0,'label':"modeMoveWait__14daMagLiftRot_cFv",'name':"modeMoveWait__14daMagLiftRot_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8F86C,'size':260,'pad':0,'label':"Draw__14daMagLiftRot_cFv",'name':"Draw__14daMagLiftRot_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8F970,'size':64,'pad':0,'label':"Delete__14daMagLiftRot_cFv",'name':"Delete__14daMagLiftRot_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8F9B0,'size':44,'pad':0,'label':"daMagLiftRot_Draw__FP14daMagLiftRot_c",'name':"daMagLiftRot_Draw__FP14daMagLiftRot_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8F9DC,'size':32,'pad':0,'label':"daMagLiftRot_Execute__FP14daMagLiftRot_c",'name':"daMagLiftRot_Execute__FP14daMagLiftRot_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8F9FC,'size':32,'pad':0,'label':"daMagLiftRot_Delete__FP14daMagLiftRot_c",'name':"daMagLiftRot_Delete__FP14daMagLiftRot_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8FA1C,'size':32,'pad':0,'label':"daMagLiftRot_Create__FP10fopAc_ac_c",'name':"daMagLiftRot_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8FA3C,'size':92,'pad':0,'label':"__dt__18daMagLiftRot_HIO_cFv",'name':"__dt__18daMagLiftRot_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C8FA98,'size':60,'pad':0,'label':"__sinit_d_a_obj_magLiftRot_cpp",'name':"__sinit_d_a_obj_magLiftRot_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80C8FAD4,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C8FADC,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C8FAE8,'size':4,'pad':0,'label':"lit_3627",'name':"@3627",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[6,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8FAEC,'size':4,'pad':0,'label':"lit_3628",'name':"@3628",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C8FAF0,'size':4,'pad':0,'label':"lit_3629",'name':"@3629",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C8FAF4,'size':4,'pad':0,'label':"lit_3630",'name':"@3630",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C8FAF8,'size':4,'pad':0,'label':"lit_3631",'name':"@3631",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C8FAFC,'size':4,'pad':0,'label':"lit_3632",'name':"@3632",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C8FB00,'size':4,'pad':0,'label':"lit_3633",'name':"@3633",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C8FB04,'size':4,'pad':0,'label':"lit_3634",'name':"@3634",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C8FB08,'size':4,'pad':0,'label':"lit_3635",'name':"@3635",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C8FB0C,'size':4,'pad':0,'label':"lit_3636",'name':"@3636",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C8FB10,'size':4,'pad':0,'label':"lit_3637",'name':"@3637",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C8FB14,'size':4,'pad':0,'label':"lit_3638",'name':"@3638",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C8FB18,'size':12,'pad':0,'label':"l_bmdIdx",'name':"l_bmdIdx",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8FB24,'size':12,'pad':0,'label':"l_dzbIdx",'name':"l_dzbIdx",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8FB30,'size':12,'pad':0,'label':"l_btkIdx",'name':"l_btkIdx",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8FB3C,'size':12,'pad':0,'label':"l_brkIdx",'name':"l_brkIdx",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8FB48,'size':4,'pad':4,'label':"lit_3816",'name':"@3816",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C8FB50,'size':8,'pad':0,'label':"lit_3818",'name':"@3818",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8FB58,'size':4,'pad':4,'label':"lit_3882",'name':"@3882",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C8FB60,'size':8,'pad':0,'label':"lit_3885",'name':"@3885",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8FB68,'size':4,'pad':0,'label':"lit_3949",'name':"@3949",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C8FB6C,'size':4,'pad':0,'label':"lit_3950",'name':"@3950",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C8FB70,'size':4,'pad':0,'label':"lit_3951",'name':"@3951",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C8FB74,'size':27,'pad':0,'label':"d_a_obj_magLiftRot__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80C8FB90,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8FB9C,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C8FBB0,'size':12,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8FBBC,'size':12,'pad':0,'label':"lit_3856",'name':"@3856",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8FBC8,'size':12,'pad':0,'label':"lit_3857",'name':"@3857",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8FBD4,'size':12,'pad':0,'label':"lit_3858",'name':"@3858",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8FBE0,'size':36,'pad':0,'label':"mode_proc",'name':"mode_proc$3855",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8FC04,'size':12,'pad':0,'label':"selLabel_3897",'name':"selLabel$3897",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8FC10,'size':12,'pad':0,'label':"selLabel_3963",'name':"selLabel$3963",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8FC1C,'size':32,'pad':0,'label':"l_daMagLiftRot_Method",'name':"l_daMagLiftRot_Method",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8FC3C,'size':48,'pad':0,'label':"g_profile_Obj_MagLiftRot",'name':"g_profile_Obj_MagLiftRot",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C8FC6C,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C8FC78,'size':40,'pad':0,'label':"__vt__14daMagLiftRot_c",'name':"__vt__14daMagLiftRot_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C8FCA0,'size':12,'pad':0,'label':"__vt__18daMagLiftRot_HIO_c",'name':"__vt__18daMagLiftRot_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C8FCAC,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C8FCB8,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8FCC0,'size':12,'pad':0,'label':"lit_3621",'name':"@3621",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8FCCC,'size':64,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[4,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C8FD0C,'size':4,'pad':0,'label':"data_80C8FD0C",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__18daMagLiftRot_HIO_cFv":5,
	"__dt__14mDoHIO_entry_cFv":6,
	"setBaseMtx__14daMagLiftRot_cFv":7,
	"CreateHeap__14daMagLiftRot_cFv":8,
	"create__14daMagLiftRot_cFv":9,
	"__dt__12J3DFrameCtrlFv":10,
	"Execute__14daMagLiftRot_cFPPA3_A4_f":11,
	"moveLift__14daMagLiftRot_cFv":12,
	"init_modeMove__14daMagLiftRot_cFv":13,
	"modeMove__14daMagLiftRot_cFv":14,
	"init_modeWait__14daMagLiftRot_cFv":15,
	"modeWait__14daMagLiftRot_cFv":16,
	"init_modeMoveWait__14daMagLiftRot_cFv":17,
	"modeMoveWait__14daMagLiftRot_cFv":18,
	"Draw__14daMagLiftRot_cFv":19,
	"Delete__14daMagLiftRot_cFv":20,
	"daMagLiftRot_Draw__FP14daMagLiftRot_c":21,
	"daMagLiftRot_Execute__FP14daMagLiftRot_c":22,
	"daMagLiftRot_Delete__FP14daMagLiftRot_c":23,
	"daMagLiftRot_Create__FP10fopAc_ac_c":24,
	"__dt__18daMagLiftRot_HIO_cFv":25,
	"__sinit_d_a_obj_magLiftRot_cpp":26,
	"_ctors":27,
	"_dtors":28,
	"lit_3627":29,
	"lit_3628":30,
	"lit_3629":31,
	"lit_3630":32,
	"lit_3631":33,
	"lit_3632":34,
	"lit_3633":35,
	"lit_3634":36,
	"lit_3635":37,
	"lit_3636":38,
	"lit_3637":39,
	"lit_3638":40,
	"l_bmdIdx":41,
	"l_dzbIdx":42,
	"l_btkIdx":43,
	"l_brkIdx":44,
	"lit_3816":45,
	"lit_3818":46,
	"lit_3882":47,
	"lit_3885":48,
	"lit_3949":49,
	"lit_3950":50,
	"lit_3951":51,
	"d_a_obj_magLiftRot__stringBase0":52,
	"cNullVec__6Z2Calc":53,
	"lit_1787":54,
	"l_arcName":55,
	"lit_3856":56,
	"lit_3857":57,
	"lit_3858":58,
	"mode_proc":59,
	"selLabel_3897":60,
	"selLabel_3963":61,
	"l_daMagLiftRot_Method":62,
	"g_profile_Obj_MagLiftRot":63,
	"__vt__12J3DFrameCtrl":64,
	"__vt__14daMagLiftRot_c":65,
	"__vt__18daMagLiftRot_HIO_c":66,
	"__vt__14mDoHIO_entry_c":67,
	"__global_destructor_chain":68,
	"lit_3621":69,
	"l_HIO":70,
	"data_80C8FD0C":71,
}

