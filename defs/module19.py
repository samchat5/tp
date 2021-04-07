#
# Generate By: dol2asm
# Module: 19
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_ito",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_ito",
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
	{'addr':0x8047B200,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047B22C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047B258,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047B278,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047B294,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047B2EC,'size':56,'pad':0,'label':"__ct__15daObj_Ito_HIO_cFv",'name':"__ct__15daObj_Ito_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047B324,'size':480,'pad':0,'label':"daObj_Ito_Draw__FP13obj_ito_class",'name':"daObj_Ito_Draw__FP13obj_ito_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047B504,'size':1184,'pad':0,'label':"cut_line_calc__FP13obj_ito_classP5ito_si",'name':"cut_line_calc__FP13obj_ito_classP5ito_si",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047B9A4,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047B9E0,'size':280,'pad':0,'label':"cut_line__FP13obj_ito_class",'name':"cut_line__FP13obj_ito_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047BAF8,'size':1172,'pad':0,'label':"cut_set__FP13obj_ito_classi",'name':"cut_set__FP13obj_ito_classi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047BF8C,'size':168,'pad':0,'label':"ito_end__FP5ito_s",'name':"ito_end__FP5ito_s",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047C034,'size':3760,'pad':0,'label':"action__FP13obj_ito_class",'name':"action__FP13obj_ito_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047CEE4,'size':196,'pad':0,'label':"daObj_Ito_Execute__FP13obj_ito_class",'name':"daObj_Ito_Execute__FP13obj_ito_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047CFA8,'size':8,'pad':0,'label':"daObj_Ito_IsDelete__FP13obj_ito_class",'name':"daObj_Ito_IsDelete__FP13obj_ito_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x8047CFB0,'size':116,'pad':0,'label':"daObj_Ito_Delete__FP13obj_ito_class",'name':"daObj_Ito_Delete__FP13obj_ito_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047D024,'size':436,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047D1D8,'size':956,'pad':0,'label':"daObj_Ito_Create__FP10fopAc_ac_c",'name':"daObj_Ito_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047D594,'size':4,'pad':0,'label':"__ct__4cXyzFv",'name':"__ct__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x8047D598,'size':204,'pad':0,'label':"__dt__8dCcD_SphFv",'name':"__dt__8dCcD_SphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047D664,'size':132,'pad':0,'label':"__ct__8dCcD_SphFv",'name':"__ct__8dCcD_SphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047D6E8,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047D730,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047D778,'size':72,'pad':0,'label':"__dt__15daObj_Ito_HIO_cFv",'name':"__dt__15daObj_Ito_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8047D7C0,'size':60,'pad':0,'label':"__sinit_d_a_obj_ito_cpp",'name':"__sinit_d_a_obj_ito_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x8047D7FC,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x8047D804,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x8047D810,'size':4,'pad':0,'label':"lit_3770",'name':"@3770",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[7,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D814,'size':4,'pad':0,'label':"lit_3771",'name':"@3771",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D818,'size':4,'pad':0,'label':"lit_3794",'name':"@3794",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8047D81C,'size':4,'pad':0,'label':"lit_3800",'name':"@3800",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8047D820,'size':4,'pad':0,'label':"lit_3820",'name':"@3820",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D824,'size':4,'pad':0,'label':"lit_3940",'name':"@3940",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D828,'size':4,'pad':0,'label':"lit_3941",'name':"@3941",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8047D82C,'size':4,'pad':0,'label':"lit_3942",'name':"@3942",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8047D830,'size':4,'pad':0,'label':"lit_3943",'name':"@3943",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D834,'size':4,'pad':0,'label':"lit_3944",'name':"@3944",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D838,'size':4,'pad':0,'label':"lit_3945",'name':"@3945",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D83C,'size':4,'pad':0,'label':"lit_3946",'name':"@3946",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D840,'size':4,'pad':0,'label':"lit_3947",'name':"@3947",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D844,'size':4,'pad':0,'label':"lit_3948",'name':"@3948",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D848,'size':4,'pad':4,'label':"lit_3949",'name':"@3949",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D850,'size':8,'pad':0,'label':"lit_3951",'name':"@3951",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8047D858,'size':4,'pad':4,'label':"lit_4124",'name':"@4124",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D860,'size':8,'pad':0,'label':"lit_4125",'name':"@4125",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8047D868,'size':8,'pad':0,'label':"lit_4126",'name':"@4126",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8047D870,'size':8,'pad':0,'label':"lit_4127",'name':"@4127",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8047D878,'size':4,'pad':0,'label':"lit_4128",'name':"@4128",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8047D87C,'size':4,'pad':0,'label':"lit_4129",'name':"@4129",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8047D880,'size':4,'pad':0,'label':"lit_4130",'name':"@4130",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D884,'size':4,'pad':0,'label':"lit_4150",'name':"@4150",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D888,'size':4,'pad':0,'label':"lit_4723",'name':"@4723",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D88C,'size':4,'pad':0,'label':"lit_4724",'name':"@4724",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x8047D890,'size':4,'pad':0,'label':"lit_4725",'name':"@4725",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D894,'size':4,'pad':0,'label':"lit_4726",'name':"@4726",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D898,'size':4,'pad':0,'label':"lit_4727",'name':"@4727",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D89C,'size':4,'pad':0,'label':"lit_4728",'name':"@4728",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D8A0,'size':4,'pad':0,'label':"lit_4729",'name':"@4729",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D8A4,'size':4,'pad':0,'label':"lit_4730",'name':"@4730",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D8A8,'size':4,'pad':0,'label':"lit_4731",'name':"@4731",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D8AC,'size':4,'pad':0,'label':"lit_4732",'name':"@4732",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D8B0,'size':4,'pad':0,'label':"lit_4733",'name':"@4733",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D8B4,'size':4,'pad':0,'label':"lit_4812",'name':"@4812",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D8B8,'size':4,'pad':0,'label':"lit_4813",'name':"@4813",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D8BC,'size':4,'pad':0,'label':"lit_4814",'name':"@4814",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D8C0,'size':4,'pad':0,'label':"lit_4930",'name':"@4930",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D8C4,'size':4,'pad':0,'label':"lit_4931",'name':"@4931",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D8C8,'size':4,'pad':0,'label':"lit_4932",'name':"@4932",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D8CC,'size':4,'pad':0,'label':"lit_4933",'name':"@4933",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D8D0,'size':4,'pad':0,'label':"lit_4934",'name':"@4934",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8047D8D4,'size':8,'pad':0,'label':"d_a_obj_ito__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x8047D8DC,'size':64,'pad':0,'label':"cc_sph_src",'name':"cc_sph_src$4829",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8047D91C,'size':28,'pad':0,'label':"obj_size",'name':"obj_size$4835",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8047D938,'size':32,'pad':0,'label':"l_daObj_Ito_Method",'name':"l_daObj_Ito_Method",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8047D958,'size':48,'pad':0,'label':"g_profile_OBJ_ITO",'name':"g_profile_OBJ_ITO",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8047D988,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8047D994,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8047D9A0,'size':20,'pad':0,'label':"__vt__18mDoExt_3DlineMat_c",'name':"__vt__18mDoExt_3DlineMat_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8047D9B4,'size':12,'pad':0,'label':"__vt__15daObj_Ito_HIO_c",'name':"__vt__15daObj_Ito_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x8047D9C0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8047D9C8,'size':4,'pad':0,'label':"data_8047D9C8",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8047D9CC,'size':12,'pad':0,'label':"lit_3765",'name':"@3765",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8047D9D8,'size':20,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[5,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__15daObj_Ito_HIO_cFv":5,
	"daObj_Ito_Draw__FP13obj_ito_class":6,
	"cut_line_calc__FP13obj_ito_classP5ito_si":7,
	"__dt__4cXyzFv":8,
	"cut_line__FP13obj_ito_class":9,
	"cut_set__FP13obj_ito_classi":10,
	"ito_end__FP5ito_s":11,
	"action__FP13obj_ito_class":12,
	"daObj_Ito_Execute__FP13obj_ito_class":13,
	"daObj_Ito_IsDelete__FP13obj_ito_class":14,
	"daObj_Ito_Delete__FP13obj_ito_class":15,
	"useHeapInit__FP10fopAc_ac_c":16,
	"daObj_Ito_Create__FP10fopAc_ac_c":17,
	"__ct__4cXyzFv":18,
	"__dt__8dCcD_SphFv":19,
	"__ct__8dCcD_SphFv":20,
	"__dt__8cM3dGSphFv":21,
	"__dt__8cM3dGAabFv":22,
	"__dt__15daObj_Ito_HIO_cFv":23,
	"__sinit_d_a_obj_ito_cpp":24,
	"_ctors":25,
	"_dtors":26,
	"lit_3770":27,
	"lit_3771":28,
	"lit_3794":29,
	"lit_3800":30,
	"lit_3820":31,
	"lit_3940":32,
	"lit_3941":33,
	"lit_3942":34,
	"lit_3943":35,
	"lit_3944":36,
	"lit_3945":37,
	"lit_3946":38,
	"lit_3947":39,
	"lit_3948":40,
	"lit_3949":41,
	"lit_3951":42,
	"lit_4124":43,
	"lit_4125":44,
	"lit_4126":45,
	"lit_4127":46,
	"lit_4128":47,
	"lit_4129":48,
	"lit_4130":49,
	"lit_4150":50,
	"lit_4723":51,
	"lit_4724":52,
	"lit_4725":53,
	"lit_4726":54,
	"lit_4727":55,
	"lit_4728":56,
	"lit_4729":57,
	"lit_4730":58,
	"lit_4731":59,
	"lit_4732":60,
	"lit_4733":61,
	"lit_4812":62,
	"lit_4813":63,
	"lit_4814":64,
	"lit_4930":65,
	"lit_4931":66,
	"lit_4932":67,
	"lit_4933":68,
	"lit_4934":69,
	"d_a_obj_ito__stringBase0":70,
	"cc_sph_src":71,
	"obj_size":72,
	"l_daObj_Ito_Method":73,
	"g_profile_OBJ_ITO":74,
	"__vt__8cM3dGAab":75,
	"__vt__8cM3dGSph":76,
	"__vt__18mDoExt_3DlineMat_c":77,
	"__vt__15daObj_Ito_HIO_c":78,
	"__global_destructor_chain":79,
	"data_8047D9C8":80,
	"lit_3765":81,
	"l_HIO":82,
}

