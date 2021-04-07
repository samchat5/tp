#
# Generate By: dol2asm
# Module: 602
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_rgate",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"d_a_obj_rgate",
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
	{'addr':0x80CB9C20,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB9C4C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB9C78,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB9C98,'size':80,'pad':0,'label':"search_coach__FPvPv",'name':"search_coach__FPvPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB9CE8,'size':272,'pad':0,'label':"nodeCallBack__FP8J3DJointi",'name':"nodeCallBack__FP8J3DJointi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB9DF8,'size':340,'pad':0,'label':"initBaseMtx__12daObjRgate_cFv",'name':"initBaseMtx__12daObjRgate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CB9F4C,'size':1308,'pad':0,'label':"setBaseMtx__12daObjRgate_cFv",'name':"setBaseMtx__12daObjRgate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBA468,'size':492,'pad':0,'label':"Create__12daObjRgate_cFv",'name':"Create__12daObjRgate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBA654,'size':468,'pad':0,'label':"CreateHeap__12daObjRgate_cFv",'name':"CreateHeap__12daObjRgate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBA828,'size':128,'pad':0,'label':"create1st__12daObjRgate_cFv",'name':"create1st__12daObjRgate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBA8A8,'size':912,'pad':0,'label':"checkAreaL__12daObjRgate_cFPC4cXyzPC4cXyz",'name':"checkAreaL__12daObjRgate_cFPC4cXyzPC4cXyz",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBAC38,'size':908,'pad':0,'label':"checkAreaR__12daObjRgate_cFPC4cXyzPC4cXyz",'name':"checkAreaR__12daObjRgate_cFPC4cXyzPC4cXyz",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBAFC4,'size':300,'pad':0,'label':"checkOpen__12daObjRgate_cFv",'name':"checkOpen__12daObjRgate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBB0F0,'size':144,'pad':0,'label':"checkDirL__12daObjRgate_cFP10fopAc_ac_c",'name':"checkDirL__12daObjRgate_cFP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBB180,'size':144,'pad':0,'label':"checkDirR__12daObjRgate_cFP10fopAc_ac_c",'name':"checkDirR__12daObjRgate_cFP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBB210,'size':124,'pad':0,'label':"setAtkSE__12daObjRgate_cFv",'name':"setAtkSE__12daObjRgate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBB28C,'size':124,'pad':0,'label':"setCrkSE__12daObjRgate_cFv",'name':"setCrkSE__12daObjRgate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBB308,'size':104,'pad':0,'label':"action__12daObjRgate_cFv",'name':"action__12daObjRgate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBB370,'size':1696,'pad':0,'label':"action_typeA__12daObjRgate_cFv",'name':"action_typeA__12daObjRgate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBBA10,'size':228,'pad':0,'label':"actionWaitEvent__12daObjRgate_cFv",'name':"actionWaitEvent__12daObjRgate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBBAF4,'size':104,'pad':0,'label':"actionEvent__12daObjRgate_cFv",'name':"actionEvent__12daObjRgate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBBB5C,'size':4,'pad':0,'label':"actionDead__12daObjRgate_cFv",'name':"actionDead__12daObjRgate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80CBBB60,'size':164,'pad':0,'label':"event_proc_call__12daObjRgate_cFv",'name':"event_proc_call__12daObjRgate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBBC04,'size':356,'pad':0,'label':"demoProc__12daObjRgate_cFv",'name':"demoProc__12daObjRgate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBBD68,'size':72,'pad':0,'label':"getDemoAction__12daObjRgate_cFv",'name':"getDemoAction__12daObjRgate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBBDB0,'size':104,'pad':0,'label':"Execute__12daObjRgate_cFPPA3_A4_f",'name':"Execute__12daObjRgate_cFPPA3_A4_f",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBBE18,'size':284,'pad':0,'label':"Draw__12daObjRgate_cFv",'name':"Draw__12daObjRgate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBBF34,'size':108,'pad':0,'label':"Delete__12daObjRgate_cFv",'name':"Delete__12daObjRgate_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBBFA0,'size':180,'pad':0,'label':"daObjRgate_create1st__FP12daObjRgate_c",'name':"daObjRgate_create1st__FP12daObjRgate_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBC054,'size':204,'pad':0,'label':"__dt__8dCcD_CylFv",'name':"__dt__8dCcD_CylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBC120,'size':132,'pad':0,'label':"__ct__8dCcD_CylFv",'name':"__ct__8dCcD_CylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBC1A4,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBC1EC,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBC234,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBC290,'size':32,'pad':0,'label':"daObjRgate_MoveBGDelete__FP12daObjRgate_c",'name':"daObjRgate_MoveBGDelete__FP12daObjRgate_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBC2B0,'size':32,'pad':0,'label':"daObjRgate_MoveBGExecute__FP12daObjRgate_c",'name':"daObjRgate_MoveBGExecute__FP12daObjRgate_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBC2D0,'size':44,'pad':0,'label':"daObjRgate_MoveBGDraw__FP12daObjRgate_c",'name':"daObjRgate_MoveBGDraw__FP12daObjRgate_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBC2FC,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBC344,'size':28,'pad':0,'label':"func_80CBC344",'name':"cLib_calcTimer<Uc>__FPUc",'lib':-1,'tu':3,'section':0,'class_template':True,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80CBC360,'size':4,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80CBC364,'size':4,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80CBC368,'size':24,'pad':0,'label':"l_cull_box",'name':"l_cull_box",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[7,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CBC380,'size':68,'pad':0,'label':"l_cyl_src",'name':"l_cyl_src",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CBC3C4,'size':4,'pad':0,'label':"lit_3897",'name':"@3897",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CBC3C8,'size':4,'pad':0,'label':"lit_3898",'name':"@3898",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC3CC,'size':4,'pad':0,'label':"lit_3899",'name':"@3899",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC3D0,'size':4,'pad':0,'label':"lit_4033",'name':"@4033",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC3D4,'size':4,'pad':0,'label':"lit_4034",'name':"@4034",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC3D8,'size':4,'pad':0,'label':"lit_4035",'name':"@4035",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC3DC,'size':4,'pad':0,'label':"lit_4036",'name':"@4036",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC3E0,'size':4,'pad':0,'label':"lit_4037",'name':"@4037",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC3E4,'size':4,'pad':0,'label':"lit_4038",'name':"@4038",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC3E8,'size':4,'pad':0,'label':"lit_4039",'name':"@4039",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC3EC,'size':4,'pad':0,'label':"lit_4040",'name':"@4040",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC3F0,'size':4,'pad':0,'label':"lit_4041",'name':"@4041",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC3F4,'size':4,'pad':0,'label':"lit_4042",'name':"@4042",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC3F8,'size':4,'pad':0,'label':"lit_4043",'name':"@4043",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC3FC,'size':4,'pad':0,'label':"lit_4044",'name':"@4044",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC400,'size':4,'pad':0,'label':"lit_4114",'name':"@4114",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC404,'size':4,'pad':0,'label':"lit_4288",'name':"@4288",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC408,'size':4,'pad':0,'label':"lit_4289",'name':"@4289",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC40C,'size':4,'pad':0,'label':"lit_4290",'name':"@4290",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC410,'size':4,'pad':0,'label':"lit_4291",'name':"@4291",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC414,'size':4,'pad':0,'label':"lit_4292",'name':"@4292",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC418,'size':4,'pad':0,'label':"lit_4293",'name':"@4293",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC41C,'size':4,'pad':0,'label':"lit_4426",'name':"@4426",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC420,'size':4,'pad':0,'label':"lit_4513",'name':"@4513",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC424,'size':4,'pad':0,'label':"lit_4514",'name':"@4514",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC428,'size':4,'pad':0,'label':"lit_4733",'name':"@4733",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC42C,'size':4,'pad':0,'label':"lit_4734",'name':"@4734",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC430,'size':4,'pad':0,'label':"lit_4735",'name':"@4735",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC434,'size':4,'pad':0,'label':"lit_4736",'name':"@4736",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC438,'size':4,'pad':0,'label':"lit_4737",'name':"@4737",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC43C,'size':4,'pad':0,'label':"lit_4738",'name':"@4738",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC440,'size':4,'pad':0,'label':"lit_4739",'name':"@4739",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC444,'size':4,'pad':0,'label':"lit_4740",'name':"@4740",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC448,'size':4,'pad':0,'label':"lit_4741",'name':"@4741",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC44C,'size':4,'pad':0,'label':"lit_4742",'name':"@4742",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80CBC450,'size':8,'pad':0,'label':"lit_4744",'name':"@4744",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CBC458,'size':69,'pad':0,'label':"d_a_obj_rgate__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':3,'class_template':False,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80CBC4A0,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CBC4AC,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80CBC4C0,'size':4,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CBC4C4,'size':12,'pad':0,'label':"lit_4797",'name':"@4797",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CBC4D0,'size':12,'pad':0,'label':"lit_4798",'name':"@4798",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CBC4DC,'size':12,'pad':0,'label':"lit_4799",'name':"@4799",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CBC4E8,'size':36,'pad':0,'label':"l_func",'name':"l_func$4796",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CBC50C,'size':16,'pad':0,'label':"action_table",'name':"action_table$4852",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CBC51C,'size':32,'pad':0,'label':"daObjRgate_METHODS",'name':"daObjRgate_METHODS",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CBC53C,'size':48,'pad':0,'label':"g_profile_Obj_RiderGate",'name':"g_profile_Obj_RiderGate",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80CBC56C,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CBC578,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CBC584,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CBC590,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CBC59C,'size':40,'pad':0,'label':"__vt__12daObjRgate_c",'name':"__vt__12daObjRgate_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80CBC5C8,'size':4,'pad':0,'label':"l_evName",'name':"l_evName$4049",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80CBC5CC,'size':4,'pad':0,'label':"struct_80CBC5CC",'name':None,'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"Structure"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"search_coach__FPvPv":3,
	"nodeCallBack__FP8J3DJointi":4,
	"initBaseMtx__12daObjRgate_cFv":5,
	"setBaseMtx__12daObjRgate_cFv":6,
	"Create__12daObjRgate_cFv":7,
	"CreateHeap__12daObjRgate_cFv":8,
	"create1st__12daObjRgate_cFv":9,
	"checkAreaL__12daObjRgate_cFPC4cXyzPC4cXyz":10,
	"checkAreaR__12daObjRgate_cFPC4cXyzPC4cXyz":11,
	"checkOpen__12daObjRgate_cFv":12,
	"checkDirL__12daObjRgate_cFP10fopAc_ac_c":13,
	"checkDirR__12daObjRgate_cFP10fopAc_ac_c":14,
	"setAtkSE__12daObjRgate_cFv":15,
	"setCrkSE__12daObjRgate_cFv":16,
	"action__12daObjRgate_cFv":17,
	"action_typeA__12daObjRgate_cFv":18,
	"actionWaitEvent__12daObjRgate_cFv":19,
	"actionEvent__12daObjRgate_cFv":20,
	"actionDead__12daObjRgate_cFv":21,
	"event_proc_call__12daObjRgate_cFv":22,
	"demoProc__12daObjRgate_cFv":23,
	"getDemoAction__12daObjRgate_cFv":24,
	"Execute__12daObjRgate_cFPPA3_A4_f":25,
	"Draw__12daObjRgate_cFv":26,
	"Delete__12daObjRgate_cFv":27,
	"daObjRgate_create1st__FP12daObjRgate_c":28,
	"__dt__8dCcD_CylFv":29,
	"__ct__8dCcD_CylFv":30,
	"__dt__8cM3dGCylFv":31,
	"__dt__8cM3dGAabFv":32,
	"__dt__10dCcD_GSttsFv":33,
	"daObjRgate_MoveBGDelete__FP12daObjRgate_c":34,
	"daObjRgate_MoveBGExecute__FP12daObjRgate_c":35,
	"daObjRgate_MoveBGDraw__FP12daObjRgate_c":36,
	"__dt__10cCcD_GSttsFv":37,
	"func_80CBC344":38,
	"_ctors":39,
	"_dtors":40,
	"l_cull_box":41,
	"l_cyl_src":42,
	"lit_3897":43,
	"lit_3898":44,
	"lit_3899":45,
	"lit_4033":46,
	"lit_4034":47,
	"lit_4035":48,
	"lit_4036":49,
	"lit_4037":50,
	"lit_4038":51,
	"lit_4039":52,
	"lit_4040":53,
	"lit_4041":54,
	"lit_4042":55,
	"lit_4043":56,
	"lit_4044":57,
	"lit_4114":58,
	"lit_4288":59,
	"lit_4289":60,
	"lit_4290":61,
	"lit_4291":62,
	"lit_4292":63,
	"lit_4293":64,
	"lit_4426":65,
	"lit_4513":66,
	"lit_4514":67,
	"lit_4733":68,
	"lit_4734":69,
	"lit_4735":70,
	"lit_4736":71,
	"lit_4737":72,
	"lit_4738":73,
	"lit_4739":74,
	"lit_4740":75,
	"lit_4741":76,
	"lit_4742":77,
	"lit_4744":78,
	"d_a_obj_rgate__stringBase0":79,
	"cNullVec__6Z2Calc":80,
	"lit_1787":81,
	"l_arcName":82,
	"lit_4797":83,
	"lit_4798":84,
	"lit_4799":85,
	"l_func":86,
	"action_table":87,
	"daObjRgate_METHODS":88,
	"g_profile_Obj_RiderGate":89,
	"__vt__10cCcD_GStts":90,
	"__vt__10dCcD_GStts":91,
	"__vt__8cM3dGAab":92,
	"__vt__8cM3dGCyl":93,
	"__vt__12daObjRgate_c":94,
	"l_evName":95,
	"struct_80CBC5CC":96,
}

