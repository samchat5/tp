#
# Generate By: dol2asm
# Module: 648
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_syRock",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_syRock",
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
	{'addr':0x80D021C0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D021EC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02218,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02238,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02254,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D022AC,'size':136,'pad':0,'label':"__ct__14daSyRock_HIO_cFv",'name':"__ct__14daSyRock_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02334,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D0237C,'size':216,'pad':0,'label':"setBaseMtx__10daSyRock_cFv",'name':"setBaseMtx__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02454,'size':304,'pad':0,'label':"CreateHeap__10daSyRock_cFv",'name':"CreateHeap__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02584,'size':940,'pad':0,'label':"create__10daSyRock_cFv",'name':"create__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02930,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D029A0,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02A10,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02A58,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02AA0,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02AFC,'size':228,'pad':0,'label':"setFallStat__10daSyRock_cFv",'name':"setFallStat__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02BE0,'size':116,'pad':0,'label':"Execute__10daSyRock_cFPPA3_A4_f",'name':"Execute__10daSyRock_cFPPA3_A4_f",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02C54,'size':540,'pad':0,'label':"move__10daSyRock_cFv",'name':"move__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02E70,'size':12,'pad':0,'label':"init_modeWait__10daSyRock_cFv",'name':"init_modeWait__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02E7C,'size':268,'pad':0,'label':"modeWait__10daSyRock_cFv",'name':"modeWait__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02F88,'size':48,'pad':0,'label':"eventStart__10daSyRock_cFv",'name':"eventStart__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D02FB8,'size':184,'pad':0,'label':"init_modeDropInit__10daSyRock_cFv",'name':"init_modeDropInit__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03070,'size':56,'pad':0,'label':"modeDropInit__10daSyRock_cFv",'name':"modeDropInit__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D030A8,'size':424,'pad':0,'label':"searchWaterPillar__10daSyRock_cFPvPv",'name':"searchWaterPillar__10daSyRock_cFPvPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03250,'size':308,'pad':0,'label':"init_modeDrop__10daSyRock_cFv",'name':"init_modeDrop__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03384,'size':76,'pad':0,'label':"modeDrop__10daSyRock_cFv",'name':"modeDrop__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D033D0,'size':112,'pad':0,'label':"init_modeSink__10daSyRock_cFv",'name':"init_modeSink__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03440,'size':168,'pad':0,'label':"modeSink__10daSyRock_cFv",'name':"modeSink__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D034E8,'size':272,'pad':0,'label':"init_modeMove__10daSyRock_cFv",'name':"init_modeMove__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D035F8,'size':192,'pad':0,'label':"modeMove__10daSyRock_cFv",'name':"modeMove__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D036B8,'size':36,'pad':0,'label':"chkWaterLineIn__10daSyRock_cFv",'name':"chkWaterLineIn__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D036DC,'size':680,'pad':0,'label':"bgCheck__10daSyRock_cFv",'name':"bgCheck__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03984,'size':196,'pad':0,'label':"init_modeDropEnd__10daSyRock_cFv",'name':"init_modeDropEnd__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03A48,'size':4,'pad':0,'label':"modeDropEnd__10daSyRock_cFv",'name':"modeDropEnd__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80D03A4C,'size':188,'pad':0,'label':"Draw__10daSyRock_cFv",'name':"Draw__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03B08,'size':104,'pad':0,'label':"Delete__10daSyRock_cFv",'name':"Delete__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03B70,'size':44,'pad':0,'label':"daSyRock_Draw__FP10daSyRock_c",'name':"daSyRock_Draw__FP10daSyRock_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03B9C,'size':32,'pad':0,'label':"daSyRock_Execute__FP10daSyRock_c",'name':"daSyRock_Execute__FP10daSyRock_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03BBC,'size':32,'pad':0,'label':"daSyRock_Delete__FP10daSyRock_c",'name':"daSyRock_Delete__FP10daSyRock_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03BDC,'size':32,'pad':0,'label':"daSyRock_Create__FP10fopAc_ac_c",'name':"daSyRock_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03BFC,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03C44,'size':92,'pad':0,'label':"__dt__14daSyRock_HIO_cFv",'name':"__dt__14daSyRock_HIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03CA0,'size':112,'pad':0,'label':"__sinit_d_a_obj_syRock_cpp",'name':"__sinit_d_a_obj_syRock_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80D03D10,'size':8,'pad':0,'label':"func_80D03D10",'name':"@1448@eventStart__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03D18,'size':8,'pad':0,'label':"func_80D03D18",'name':"@1448@__dt__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03D20,'size':8,'pad':0,'label':"func_80D03D20",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03D28,'size':8,'pad':0,'label':"func_80D03D28",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03D30,'size':72,'pad':0,'label':"__dt__17dEvLib_callback_cFv",'name':"__dt__17dEvLib_callback_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03D78,'size':8,'pad':0,'label':"eventStart__17dEvLib_callback_cFv",'name':"eventStart__17dEvLib_callback_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80D03D80,'size':8,'pad':0,'label':"eventRun__17dEvLib_callback_cFv",'name':"eventRun__17dEvLib_callback_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80D03D88,'size':8,'pad':0,'label':"eventEnd__17dEvLib_callback_cFv",'name':"eventEnd__17dEvLib_callback_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80D03D90,'size':28,'pad':0,'label':"getPos__12daWtPillar_cFv",'name':"getPos__12daWtPillar_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03DAC,'size':464,'pad':0,'label':"__dt__10daSyRock_cFv",'name':"__dt__10daSyRock_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80D03F7C,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80D03F84,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80D03F90,'size':4,'pad':0,'label':"lit_3662",'name':"@3662",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[6,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D03F94,'size':4,'pad':0,'label':"lit_3663",'name':"@3663",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D03F98,'size':4,'pad':0,'label':"lit_3664",'name':"@3664",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D03F9C,'size':4,'pad':0,'label':"lit_3665",'name':"@3665",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D03FA0,'size':4,'pad':0,'label':"lit_3666",'name':"@3666",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D03FA4,'size':4,'pad':0,'label':"lit_3667",'name':"@3667",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D03FA8,'size':4,'pad':0,'label':"lit_3668",'name':"@3668",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D03FAC,'size':4,'pad':0,'label':"lit_3669",'name':"@3669",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D03FB0,'size':4,'pad':0,'label':"lit_3670",'name':"@3670",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D03FB4,'size':4,'pad':0,'label':"lit_3671",'name':"@3671",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D03FB8,'size':48,'pad':0,'label':"mCcDObjInfo__10daSyRock_c",'name':"mCcDObjInfo__10daSyRock_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D03FE8,'size':4,'pad':0,'label':"lit_3805",'name':"@3805",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D03FEC,'size':4,'pad':0,'label':"lit_3806",'name':"@3806",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D03FF0,'size':4,'pad':0,'label':"lit_3807",'name':"@3807",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D03FF4,'size':4,'pad':0,'label':"lit_3948",'name':"@3948",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D03FF8,'size':4,'pad':0,'label':"lit_3949",'name':"@3949",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D03FFC,'size':4,'pad':0,'label':"lit_3950",'name':"@3950",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D04000,'size':4,'pad':0,'label':"lit_4014",'name':"@4014",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D04004,'size':4,'pad':0,'label':"lit_4015",'name':"@4015",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D04008,'size':8,'pad':0,'label':"lit_4078",'name':"@4078",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D04010,'size':8,'pad':0,'label':"lit_4079",'name':"@4079",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D04018,'size':8,'pad':0,'label':"lit_4080",'name':"@4080",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D04020,'size':4,'pad':0,'label':"lit_4138",'name':"@4138",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D04024,'size':4,'pad':0,'label':"lit_4139",'name':"@4139",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D04028,'size':4,'pad':0,'label':"lit_4197",'name':"@4197",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D0402C,'size':4,'pad':0,'label':"lit_4275",'name':"@4275",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80D04030,'size':9,'pad':0,'label':"d_a_obj_syRock__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80D0403C,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D04048,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80D0405C,'size':68,'pad':0,'label':"mCcDCyl__10daSyRock_c",'name':"mCcDCyl__10daSyRock_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D040A0,'size':12,'pad':0,'label':"lit_3922",'name':"@3922",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D040AC,'size':12,'pad':0,'label':"lit_3923",'name':"@3923",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D040B8,'size':12,'pad':0,'label':"lit_3924",'name':"@3924",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D040C4,'size':12,'pad':0,'label':"lit_3925",'name':"@3925",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D040D0,'size':12,'pad':0,'label':"lit_3926",'name':"@3926",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D040DC,'size':12,'pad':0,'label':"lit_3927",'name':"@3927",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D040E8,'size':72,'pad':0,'label':"mode_proc",'name':"mode_proc$3921",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D04130,'size':32,'pad':0,'label':"l_daSyRock_Method",'name':"l_daSyRock_Method",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D04150,'size':48,'pad':0,'label':"g_profile_Obj_SyRock",'name':"g_profile_Obj_SyRock",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80D04180,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D0418C,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D04198,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D041A4,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D041C8,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D041D4,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D041E0,'size':24,'pad':0,'label':"__vt__17dEvLib_callback_c",'name':"__vt__17dEvLib_callback_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D041F8,'size':72,'pad':0,'label':"__vt__10daSyRock_c",'name':"__vt__10daSyRock_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D04240,'size':12,'pad':0,'label':"__vt__14daSyRock_HIO_c",'name':"__vt__14daSyRock_HIO_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D0424C,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80D04258,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D04260,'size':12,'pad':0,'label':"lit_3656",'name':"@3656",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D0426C,'size':52,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[8,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80D042A0,'size':4,'pad':0,'label':"data_80D042A0",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__14daSyRock_HIO_cFv":5,
	"__dt__14mDoHIO_entry_cFv":6,
	"setBaseMtx__10daSyRock_cFv":7,
	"CreateHeap__10daSyRock_cFv":8,
	"create__10daSyRock_cFv":9,
	"__dt__12dBgS_ObjAcchFv":10,
	"__dt__12dBgS_AcchCirFv":11,
	"__dt__8cM3dGCylFv":12,
	"__dt__8cM3dGAabFv":13,
	"__dt__10dCcD_GSttsFv":14,
	"setFallStat__10daSyRock_cFv":15,
	"Execute__10daSyRock_cFPPA3_A4_f":16,
	"move__10daSyRock_cFv":17,
	"init_modeWait__10daSyRock_cFv":18,
	"modeWait__10daSyRock_cFv":19,
	"eventStart__10daSyRock_cFv":20,
	"init_modeDropInit__10daSyRock_cFv":21,
	"modeDropInit__10daSyRock_cFv":22,
	"searchWaterPillar__10daSyRock_cFPvPv":23,
	"init_modeDrop__10daSyRock_cFv":24,
	"modeDrop__10daSyRock_cFv":25,
	"init_modeSink__10daSyRock_cFv":26,
	"modeSink__10daSyRock_cFv":27,
	"init_modeMove__10daSyRock_cFv":28,
	"modeMove__10daSyRock_cFv":29,
	"chkWaterLineIn__10daSyRock_cFv":30,
	"bgCheck__10daSyRock_cFv":31,
	"init_modeDropEnd__10daSyRock_cFv":32,
	"modeDropEnd__10daSyRock_cFv":33,
	"Draw__10daSyRock_cFv":34,
	"Delete__10daSyRock_cFv":35,
	"daSyRock_Draw__FP10daSyRock_c":36,
	"daSyRock_Execute__FP10daSyRock_c":37,
	"daSyRock_Delete__FP10daSyRock_c":38,
	"daSyRock_Create__FP10fopAc_ac_c":39,
	"__dt__10cCcD_GSttsFv":40,
	"__dt__14daSyRock_HIO_cFv":41,
	"__sinit_d_a_obj_syRock_cpp":42,
	"func_80D03D10":43,
	"func_80D03D18":44,
	"func_80D03D20":45,
	"func_80D03D28":46,
	"__dt__17dEvLib_callback_cFv":47,
	"eventStart__17dEvLib_callback_cFv":48,
	"eventRun__17dEvLib_callback_cFv":49,
	"eventEnd__17dEvLib_callback_cFv":50,
	"getPos__12daWtPillar_cFv":51,
	"__dt__10daSyRock_cFv":52,
	"_ctors":53,
	"_dtors":54,
	"lit_3662":55,
	"lit_3663":56,
	"lit_3664":57,
	"lit_3665":58,
	"lit_3666":59,
	"lit_3667":60,
	"lit_3668":61,
	"lit_3669":62,
	"lit_3670":63,
	"lit_3671":64,
	"mCcDObjInfo__10daSyRock_c":65,
	"lit_3805":66,
	"lit_3806":67,
	"lit_3807":68,
	"lit_3948":69,
	"lit_3949":70,
	"lit_3950":71,
	"lit_4014":72,
	"lit_4015":73,
	"lit_4078":74,
	"lit_4079":75,
	"lit_4080":76,
	"lit_4138":77,
	"lit_4139":78,
	"lit_4197":79,
	"lit_4275":80,
	"d_a_obj_syRock__stringBase0":81,
	"cNullVec__6Z2Calc":82,
	"lit_1787":83,
	"mCcDCyl__10daSyRock_c":84,
	"lit_3922":85,
	"lit_3923":86,
	"lit_3924":87,
	"lit_3925":88,
	"lit_3926":89,
	"lit_3927":90,
	"mode_proc":91,
	"l_daSyRock_Method":92,
	"g_profile_Obj_SyRock":93,
	"__vt__10cCcD_GStts":94,
	"__vt__10dCcD_GStts":95,
	"__vt__12dBgS_AcchCir":96,
	"__vt__12dBgS_ObjAcch":97,
	"__vt__8cM3dGCyl":98,
	"__vt__8cM3dGAab":99,
	"__vt__17dEvLib_callback_c":100,
	"__vt__10daSyRock_c":101,
	"__vt__14daSyRock_HIO_c":102,
	"__vt__14mDoHIO_entry_c":103,
	"__global_destructor_chain":104,
	"lit_3656":105,
	"l_HIO":106,
	"data_80D042A0":107,
}

