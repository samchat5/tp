#
# Generate By: dol2asm
# Module: 514
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_lp",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"d_a_obj_lp",
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
	{'addr':0x80C54120,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5414C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C54178,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C54198,'size':356,'pad':0,'label':"daObj_Lp_Draw__FP12obj_lp_class",'name':"daObj_Lp_Draw__FP12obj_lp_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C542FC,'size':120,'pad':0,'label':"s_ks_sub__FPvPv",'name':"s_ks_sub__FPvPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C54374,'size':868,'pad':0,'label':"hit_check__FP12obj_lp_classP5wd_ss",'name':"hit_check__FP12obj_lp_classP5wd_ss",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C546D8,'size':1096,'pad':0,'label':"hasu_action__FP12obj_lp_classP5wd_ss",'name':"hasu_action__FP12obj_lp_classP5wd_ss",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C54B20,'size':544,'pad':0,'label':"set_out_check__FP12obj_lp_classP4cXyz",'name':"set_out_check__FP12obj_lp_classP4cXyz",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C54D40,'size':944,'pad':0,'label':"daObj_Lp_Execute__FP12obj_lp_class",'name':"daObj_Lp_Execute__FP12obj_lp_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C550F0,'size':8,'pad':0,'label':"daObj_Lp_IsDelete__FP12obj_lp_class",'name':"daObj_Lp_IsDelete__FP12obj_lp_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C550F8,'size':148,'pad':0,'label':"daObj_Lp_Delete__FP12obj_lp_class",'name':"daObj_Lp_Delete__FP12obj_lp_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C5518C,'size':308,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C552C0,'size':456,'pad':0,'label':"set_pos_check__FP12obj_lp_classi",'name':"set_pos_check__FP12obj_lp_classi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C55488,'size':1344,'pad':0,'label':"daObj_Lp_Create__FP10fopAc_ac_c",'name':"daObj_Lp_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C559C8,'size':60,'pad':0,'label':"__dt__5wd_ssFv",'name':"__dt__5wd_ssFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80C55A04,'size':4,'pad':0,'label':"__ct__5wd_ssFv",'name':"__ct__5wd_ssFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80C55A08,'size':4,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C55A0C,'size':4,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80C55A10,'size':4,'pad':0,'label':"lit_3916",'name':"@3916",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[6,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A14,'size':4,'pad':0,'label':"lit_3917",'name':"@3917",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A18,'size':4,'pad':0,'label':"lit_3918",'name':"@3918",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55A1C,'size':4,'pad':0,'label':"lit_3919",'name':"@3919",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A20,'size':4,'pad':0,'label':"lit_3920",'name':"@3920",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A24,'size':4,'pad':0,'label':"lit_3921",'name':"@3921",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A28,'size':4,'pad':0,'label':"lit_3922",'name':"@3922",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A2C,'size':4,'pad':0,'label':"lit_3923",'name':"@3923",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A30,'size':4,'pad':0,'label':"lit_3924",'name':"@3924",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A34,'size':4,'pad':0,'label':"lit_3925",'name':"@3925",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A38,'size':4,'pad':0,'label':"lit_3926",'name':"@3926",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A3C,'size':4,'pad':0,'label':"lit_3927",'name':"@3927",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A40,'size':4,'pad':0,'label':"lit_3928",'name':"@3928",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A44,'size':4,'pad':0,'label':"lit_3929",'name':"@3929",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C55A48,'size':4,'pad':0,'label':"lit_3930",'name':"@3930",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A4C,'size':4,'pad':0,'label':"lit_3931",'name':"@3931",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A50,'size':4,'pad':0,'label':"lit_4054",'name':"@4054",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A54,'size':4,'pad':0,'label':"lit_4055",'name':"@4055",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A58,'size':4,'pad':4,'label':"lit_4056",'name':"@4056",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A60,'size':8,'pad':0,'label':"lit_4057",'name':"@4057",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55A68,'size':8,'pad':0,'label':"lit_4058",'name':"@4058",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55A70,'size':8,'pad':0,'label':"lit_4059",'name':"@4059",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55A78,'size':4,'pad':0,'label':"lit_4060",'name':"@4060",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A7C,'size':4,'pad':0,'label':"lit_4061",'name':"@4061",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A80,'size':4,'pad':0,'label':"lit_4062",'name':"@4062",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A84,'size':4,'pad':0,'label':"lit_4063",'name':"@4063",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80C55A88,'size':4,'pad':0,'label':"lit_4064",'name':"@4064",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A8C,'size':4,'pad':0,'label':"lit_4128",'name':"@4128",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A90,'size':8,'pad':0,'label':"lit_4130",'name':"@4130",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55A98,'size':4,'pad':0,'label':"lit_4218",'name':"@4218",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55A9C,'size':4,'pad':0,'label':"lit_4219",'name':"@4219",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55AA0,'size':8,'pad':0,'label':"lit_4221",'name':"@4221",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55AA8,'size':4,'pad':0,'label':"lit_4267",'name':"@4267",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55AAC,'size':4,'pad':0,'label':"lit_4320",'name':"@4320",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55AB0,'size':4,'pad':0,'label':"lit_4321",'name':"@4321",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55AB4,'size':4,'pad':0,'label':"lit_4457",'name':"@4457",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55AB8,'size':4,'pad':0,'label':"lit_4458",'name':"@4458",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55ABC,'size':4,'pad':0,'label':"lit_4459",'name':"@4459",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80C55AC0,'size':22,'pad':0,'label':"d_a_obj_lp__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':3,'class_template':None,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80C55AD8,'size':4,'pad':0,'label':"l_color",'name':"l_color$3793",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55ADC,'size':32,'pad':0,'label':"l_daObj_Lp_Method",'name':"l_daObj_Lp_Method",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C55AFC,'size':48,'pad':0,'label':"g_profile_OBJ_LP",'name':"g_profile_OBJ_LP",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80C55B2C,'size':20,'pad':0,'label':"__vt__18mDoExt_3DlineMat_c",'name':"__vt__18mDoExt_3DlineMat_c",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80C55B40,'size':1,'pad':3,'label':"lit_1109",'name':"@1109",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55B44,'size':1,'pad':3,'label':"lit_1107",'name':"@1107",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55B48,'size':1,'pad':3,'label':"lit_1105",'name':"@1105",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55B4C,'size':1,'pad':3,'label':"lit_1104",'name':"@1104",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55B50,'size':1,'pad':3,'label':"lit_1099",'name':"@1099",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55B54,'size':1,'pad':3,'label':"lit_1097",'name':"@1097",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55B58,'size':1,'pad':3,'label':"lit_1095",'name':"@1095",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55B5C,'size':1,'pad':3,'label':"lit_1094",'name':"@1094",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55B60,'size':1,'pad':3,'label':"lit_1057",'name':"@1057",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55B64,'size':1,'pad':3,'label':"lit_1055",'name':"@1055",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55B68,'size':1,'pad':3,'label':"lit_1053",'name':"@1053",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55B6C,'size':1,'pad':3,'label':"lit_1052",'name':"@1052",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55B70,'size':1,'pad':3,'label':"lit_1014",'name':"@1014",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55B74,'size':1,'pad':3,'label':"lit_1012",'name':"@1012",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55B78,'size':1,'pad':3,'label':"lit_1010",'name':"@1010",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55B7C,'size':1,'pad':3,'label':"lit_1009",'name':"@1009",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55B80,'size':4,'pad':0,'label':"tandem",'name':"tandem",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55B84,'size':4,'pad':0,'label':"demo_f",'name':"demo_f",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55B88,'size':40,'pad':0,'label':"target_info",'name':"target_info",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BB0,'size':4,'pad':0,'label':"target_info_count",'name':"target_info_count",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BB4,'size':4,'pad':0,'label':"data_80C55BB4",'name':"sInstance__40JASGlobalInstance<19JASDefaultBankTable>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BB8,'size':4,'pad':0,'label':"data_80C55BB8",'name':"sInstance__35JASGlobalInstance<14JASAudioThread>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BBC,'size':4,'pad':0,'label':"data_80C55BBC",'name':"sInstance__27JASGlobalInstance<7Z2SeMgr>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BC0,'size':4,'pad':0,'label':"data_80C55BC0",'name':"sInstance__28JASGlobalInstance<8Z2SeqMgr>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BC4,'size':4,'pad':0,'label':"data_80C55BC4",'name':"sInstance__31JASGlobalInstance<10Z2SceneMgr>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BC8,'size':4,'pad':0,'label':"data_80C55BC8",'name':"sInstance__32JASGlobalInstance<11Z2StatusMgr>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BCC,'size':4,'pad':0,'label':"data_80C55BCC",'name':"sInstance__31JASGlobalInstance<10Z2DebugSys>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BD0,'size':4,'pad':0,'label':"data_80C55BD0",'name':"sInstance__36JASGlobalInstance<15JAISoundStarter>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BD4,'size':4,'pad':0,'label':"data_80C55BD4",'name':"sInstance__35JASGlobalInstance<14Z2SoundStarter>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BD8,'size':4,'pad':0,'label':"data_80C55BD8",'name':"sInstance__33JASGlobalInstance<12Z2SpeechMgr2>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BDC,'size':4,'pad':0,'label':"data_80C55BDC",'name':"sInstance__28JASGlobalInstance<8JAISeMgr>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BE0,'size':4,'pad':0,'label':"data_80C55BE0",'name':"sInstance__29JASGlobalInstance<9JAISeqMgr>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BE4,'size':4,'pad':0,'label':"data_80C55BE4",'name':"sInstance__33JASGlobalInstance<12JAIStreamMgr>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BE8,'size':4,'pad':0,'label':"data_80C55BE8",'name':"sInstance__31JASGlobalInstance<10Z2SoundMgr>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BEC,'size':4,'pad':0,'label':"data_80C55BEC",'name':"sInstance__33JASGlobalInstance<12JAISoundInfo>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BF0,'size':4,'pad':0,'label':"data_80C55BF0",'name':"sInstance__34JASGlobalInstance<13JAUSoundTable>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BF4,'size':4,'pad':0,'label':"data_80C55BF4",'name':"sInstance__38JASGlobalInstance<17JAUSoundNameTable>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BF8,'size':4,'pad':0,'label':"data_80C55BF8",'name':"sInstance__33JASGlobalInstance<12JAUSoundInfo>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55BFC,'size':4,'pad':0,'label':"data_80C55BFC",'name':"sInstance__32JASGlobalInstance<11Z2SoundInfo>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55C00,'size':4,'pad':0,'label':"data_80C55C00",'name':"sInstance__34JASGlobalInstance<13Z2SoundObjMgr>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55C04,'size':4,'pad':0,'label':"data_80C55C04",'name':"sInstance__31JASGlobalInstance<10Z2Audience>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55C08,'size':4,'pad':0,'label':"data_80C55C08",'name':"sInstance__32JASGlobalInstance<11Z2FxLineMgr>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55C0C,'size':4,'pad':0,'label':"data_80C55C0C",'name':"sInstance__31JASGlobalInstance<10Z2EnvSeMgr>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55C10,'size':4,'pad':0,'label':"data_80C55C10",'name':"sInstance__32JASGlobalInstance<11Z2SpeechMgr>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80C55C14,'size':4,'pad':0,'label':"data_80C55C14",'name':"sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>",'lib':-1,'tu':3,'section':5,'class_template':True,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"daObj_Lp_Draw__FP12obj_lp_class":3,
	"s_ks_sub__FPvPv":4,
	"hit_check__FP12obj_lp_classP5wd_ss":5,
	"hasu_action__FP12obj_lp_classP5wd_ss":6,
	"set_out_check__FP12obj_lp_classP4cXyz":7,
	"daObj_Lp_Execute__FP12obj_lp_class":8,
	"daObj_Lp_IsDelete__FP12obj_lp_class":9,
	"daObj_Lp_Delete__FP12obj_lp_class":10,
	"useHeapInit__FP10fopAc_ac_c":11,
	"set_pos_check__FP12obj_lp_classi":12,
	"daObj_Lp_Create__FP10fopAc_ac_c":13,
	"__dt__5wd_ssFv":14,
	"__ct__5wd_ssFv":15,
	"_ctors":16,
	"_dtors":17,
	"lit_3916":18,
	"lit_3917":19,
	"lit_3918":20,
	"lit_3919":21,
	"lit_3920":22,
	"lit_3921":23,
	"lit_3922":24,
	"lit_3923":25,
	"lit_3924":26,
	"lit_3925":27,
	"lit_3926":28,
	"lit_3927":29,
	"lit_3928":30,
	"lit_3929":31,
	"lit_3930":32,
	"lit_3931":33,
	"lit_4054":34,
	"lit_4055":35,
	"lit_4056":36,
	"lit_4057":37,
	"lit_4058":38,
	"lit_4059":39,
	"lit_4060":40,
	"lit_4061":41,
	"lit_4062":42,
	"lit_4063":43,
	"lit_4064":44,
	"lit_4128":45,
	"lit_4130":46,
	"lit_4218":47,
	"lit_4219":48,
	"lit_4221":49,
	"lit_4267":50,
	"lit_4320":51,
	"lit_4321":52,
	"lit_4457":53,
	"lit_4458":54,
	"lit_4459":55,
	"d_a_obj_lp__stringBase0":56,
	"l_color":57,
	"l_daObj_Lp_Method":58,
	"g_profile_OBJ_LP":59,
	"__vt__18mDoExt_3DlineMat_c":60,
	"lit_1109":61,
	"lit_1107":62,
	"lit_1105":63,
	"lit_1104":64,
	"lit_1099":65,
	"lit_1097":66,
	"lit_1095":67,
	"lit_1094":68,
	"lit_1057":69,
	"lit_1055":70,
	"lit_1053":71,
	"lit_1052":72,
	"lit_1014":73,
	"lit_1012":74,
	"lit_1010":75,
	"lit_1009":76,
	"tandem":77,
	"demo_f":78,
	"target_info":79,
	"target_info_count":80,
	"data_80C55BB4":81,
	"data_80C55BB8":82,
	"data_80C55BBC":83,
	"data_80C55BC0":84,
	"data_80C55BC4":85,
	"data_80C55BC8":86,
	"data_80C55BCC":87,
	"data_80C55BD0":88,
	"data_80C55BD4":89,
	"data_80C55BD8":90,
	"data_80C55BDC":91,
	"data_80C55BE0":92,
	"data_80C55BE4":93,
	"data_80C55BE8":94,
	"data_80C55BEC":95,
	"data_80C55BF0":96,
	"data_80C55BF4":97,
	"data_80C55BF8":98,
	"data_80C55BFC":99,
	"data_80C55C00":100,
	"data_80C55C04":101,
	"data_80C55C08":102,
	"data_80C55C0C":103,
	"data_80C55C10":104,
	"data_80C55C14":105,
}

