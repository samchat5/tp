#
# Generate By: dol2asm
# Module: 61
#

# Libraries
LIBRARIES = [
	"d/a/d_a_canoe",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_canoe",
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
	{'addr':0x804DA460,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DA48C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DA4B8,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DA4D8,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,2,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DA4F4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DA54C,'size':108,'pad':0,'label':"daCanoe_searchTagWaterFall__FP10fopAc_ac_cPv",'name':"daCanoe_searchTagWaterFall__FP10fopAc_ac_cPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DA5B8,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DA5F4,'size':300,'pad':0,'label':"createHeap__9daCanoe_cFv",'name':"createHeap__9daCanoe_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DA720,'size':32,'pad':0,'label':"daCanoe_createHeap__FP10fopAc_ac_c",'name':"daCanoe_createHeap__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DA740,'size':984,'pad':0,'label':"create__9daCanoe_cFv",'name':"create__9daCanoe_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DAB18,'size':204,'pad':0,'label':"__dt__8dCcD_CylFv",'name':"__dt__8dCcD_CylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DABE4,'size':132,'pad':0,'label':"__ct__8dCcD_CylFv",'name':"__ct__8dCcD_CylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DAC68,'size':72,'pad':0,'label':"__dt__8cM3dGCylFv",'name':"__dt__8cM3dGCylFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DACB0,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DACF8,'size':112,'pad':0,'label':"__dt__13dBgS_LinkAcchFv",'name':"__dt__13dBgS_LinkAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[5,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DAD68,'size':84,'pad':0,'label':"__ct__13dBgS_LinkAcchFv",'name':"__ct__13dBgS_LinkAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DADBC,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DAE2C,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DAE88,'size':32,'pad':0,'label':"daCanoe_Create__FP10fopAc_ac_c",'name':"daCanoe_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DAEA8,'size':312,'pad':0,'label':"__dt__9daCanoe_cFv",'name':"__dt__9daCanoe_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DAFE0,'size':40,'pad':0,'label':"daCanoe_Delete__FP9daCanoe_c",'name':"daCanoe_Delete__FP9daCanoe_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DB008,'size':168,'pad':0,'label':"setRoomInfo__9daCanoe_cFv",'name':"setRoomInfo__9daCanoe_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DB0B0,'size':836,'pad':0,'label':"setMatrix__9daCanoe_cFv",'name':"setMatrix__9daCanoe_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DB3F4,'size':388,'pad':0,'label':"setCollision__9daCanoe_cFv",'name':"setCollision__9daCanoe_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DB578,'size':476,'pad':0,'label':"posMove__9daCanoe_cFv",'name':"posMove__9daCanoe_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DB754,'size':88,'pad':0,'label':"checkGomikabe__9daCanoe_cFR13cBgS_PolyInfo",'name':"checkGomikabe__9daCanoe_cFR13cBgS_PolyInfo",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DB7AC,'size':124,'pad':0,'label':"setFrontBackPos__9daCanoe_cFv",'name':"setFrontBackPos__9daCanoe_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DB828,'size':2752,'pad':0,'label':"frontBackBgCheck__9daCanoe_cFv",'name':"frontBackBgCheck__9daCanoe_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DC2E8,'size':72,'pad':0,'label':"__dt__8cM3dGPlaFv",'name':"__dt__8cM3dGPlaFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DC330,'size':548,'pad':0,'label':"setPaddleEffect__9daCanoe_cFv",'name':"setPaddleEffect__9daCanoe_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DC554,'size':608,'pad':0,'label':"setCanoeSliderEffect__9daCanoe_cFv",'name':"setCanoeSliderEffect__9daCanoe_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DC7B4,'size':2952,'pad':0,'label':"execute__9daCanoe_cFv",'name':"execute__9daCanoe_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DD33C,'size':32,'pad':0,'label':"daCanoe_Execute__FP9daCanoe_c",'name':"daCanoe_Execute__FP9daCanoe_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DD35C,'size':504,'pad':0,'label':"draw__9daCanoe_cFv",'name':"draw__9daCanoe_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DD554,'size':32,'pad':0,'label':"daCanoe_Draw__FP9daCanoe_c",'name':"daCanoe_Draw__FP9daCanoe_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DD574,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DD5BC,'size':8,'pad':0,'label':"func_804DD5BC",'name':"@36@__dt__13dBgS_LinkAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DD5C4,'size':8,'pad':0,'label':"func_804DD5C4",'name':"@20@__dt__13dBgS_LinkAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804DD5CC,'size':4,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x804DD5D0,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x804DD5DC,'size':12,'pad':0,'label':"lit_3766",'name':"@3766",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[8,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD5E8,'size':6,'pad':2,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD5F0,'size':7,'pad':1,'label':"l_arcName2",'name':"l_arcName2",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD5F8,'size':8,'pad':0,'label':"l_arcName3",'name':"l_arcName3",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD600,'size':20,'pad':0,'label':"l_cylOffsetZ",'name':"l_cylOffsetZ",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD614,'size':4,'pad':0,'label':"lit_4328",'name':"@4328",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD618,'size':4,'pad':0,'label':"lit_4329",'name':"@4329",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD61C,'size':4,'pad':0,'label':"lit_4330",'name':"@4330",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD620,'size':4,'pad':0,'label':"lit_4331",'name':"@4331",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD624,'size':4,'pad':0,'label':"lit_4332",'name':"@4332",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD628,'size':4,'pad':0,'label':"lit_4333",'name':"@4333",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD62C,'size':4,'pad':0,'label':"lit_4334",'name':"@4334",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD630,'size':4,'pad':0,'label':"lit_4335",'name':"@4335",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD634,'size':4,'pad':0,'label':"lit_4336",'name':"@4336",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD638,'size':4,'pad':0,'label':"lit_4480",'name':"@4480",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD63C,'size':4,'pad':0,'label':"lit_4626",'name':"@4626",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD640,'size':4,'pad':0,'label':"lit_4627",'name':"@4627",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD644,'size':4,'pad':0,'label':"lit_4628",'name':"@4628",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD648,'size':4,'pad':0,'label':"lit_4629",'name':"@4629",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD64C,'size':4,'pad':0,'label':"lit_4630",'name':"@4630",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD650,'size':4,'pad':0,'label':"lit_4631",'name':"@4631",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD654,'size':4,'pad':0,'label':"lit_4632",'name':"@4632",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x804DD658,'size':4,'pad':0,'label':"lit_4633",'name':"@4633",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD65C,'size':4,'pad':0,'label':"lit_4634",'name':"@4634",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD660,'size':4,'pad':0,'label':"lit_4635",'name':"@4635",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD664,'size':4,'pad':0,'label':"lit_4636",'name':"@4636",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD668,'size':4,'pad':0,'label':"lit_4637",'name':"@4637",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x804DD66C,'size':4,'pad':0,'label':"lit_4638",'name':"@4638",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD670,'size':4,'pad':0,'label':"lit_4639",'name':"@4639",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD674,'size':4,'pad':0,'label':"lit_4640",'name':"@4640",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x804DD678,'size':4,'pad':0,'label':"lit_4641",'name':"@4641",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD67C,'size':4,'pad':0,'label':"lit_4642",'name':"@4642",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD680,'size':4,'pad':0,'label':"lit_4683",'name':"@4683",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD684,'size':8,'pad':0,'label':"lit_4738",'name':"@4738",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD68C,'size':8,'pad':0,'label':"lit_5087",'name':"@5087",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD694,'size':8,'pad':0,'label':"lit_5088",'name':"@5088",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD69C,'size':8,'pad':0,'label':"lit_5089",'name':"@5089",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD6A4,'size':4,'pad':0,'label':"lit_5090",'name':"@5090",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD6A8,'size':4,'pad':0,'label':"lit_5091",'name':"@5091",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD6AC,'size':4,'pad':0,'label':"lit_5092",'name':"@5092",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD6B0,'size':4,'pad':0,'label':"lit_5172",'name':"@5172",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD6B4,'size':4,'pad':0,'label':"lit_5173",'name':"@5173",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD6B8,'size':4,'pad':0,'label':"effName",'name':"effName$5177",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD6BC,'size':4,'pad':0,'label':"lit_5280",'name':"@5280",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD6C0,'size':4,'pad':0,'label':"lit_5504",'name':"@5504",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x804DD6C4,'size':4,'pad':0,'label':"lit_5505",'name':"@5505",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD6C8,'size':4,'pad':0,'label':"lit_5506",'name':"@5506",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD6CC,'size':4,'pad':0,'label':"lit_5507",'name':"@5507",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD6D0,'size':4,'pad':0,'label':"lit_5508",'name':"@5508",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD6D4,'size':4,'pad':0,'label':"lit_5573",'name':"@5573",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD6D8,'size':4,'pad':0,'label':"lit_5574",'name':"@5574",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD6DC,'size':4,'pad':0,'label':"lit_5575",'name':"@5575",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD6E0,'size':4,'pad':0,'label':"lit_5576",'name':"@5576",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD6E4,'size':4,'pad':0,'label':"lit_5577",'name':"@5577",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804DD6E8,'size':8,'pad':0,'label':"d_a_canoe__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x804DD6F0,'size':68,'pad':0,'label':"l_cylSrc",'name':"l_cylSrc",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD734,'size':32,'pad':0,'label':"l_daCanoe_Method",'name':"l_daCanoe_Method",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x804DD754,'size':48,'pad':0,'label':"g_profile_CANOE",'name':"g_profile_CANOE",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x804DD784,'size':12,'pad':0,'label':"__vt__8cM3dGPla",'name':"__vt__8cM3dGPla",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x804DD790,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x804DD79C,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x804DD7A8,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x804DD7B4,'size':36,'pad':0,'label':"__vt__13dBgS_LinkAcch",'name':"__vt__13dBgS_LinkAcch",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x804DD7D8,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x804DD7E4,'size':12,'pad':0,'label':"__vt__8cM3dGCyl",'name':"__vt__8cM3dGCyl",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x804DD7F0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD7F8,'size':1,'pad':3,'label':"lit_1109",'name':"@1109",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD7FC,'size':1,'pad':3,'label':"lit_1107",'name':"@1107",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD800,'size':1,'pad':3,'label':"lit_1105",'name':"@1105",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD804,'size':1,'pad':3,'label':"lit_1104",'name':"@1104",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD808,'size':1,'pad':3,'label':"lit_1099",'name':"@1099",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD80C,'size':1,'pad':3,'label':"lit_1097",'name':"@1097",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD810,'size':1,'pad':3,'label':"lit_1095",'name':"@1095",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD814,'size':1,'pad':3,'label':"lit_1094",'name':"@1094",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD818,'size':1,'pad':3,'label':"lit_1057",'name':"@1057",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD81C,'size':1,'pad':3,'label':"lit_1055",'name':"@1055",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD820,'size':1,'pad':3,'label':"lit_1053",'name':"@1053",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD824,'size':1,'pad':3,'label':"lit_1052",'name':"@1052",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD828,'size':1,'pad':3,'label':"lit_1014",'name':"@1014",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD82C,'size':1,'pad':3,'label':"lit_1012",'name':"@1012",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD830,'size':1,'pad':3,'label':"lit_1010",'name':"@1010",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD834,'size':1,'pad':3,'label':"lit_1009",'name':"@1009",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD838,'size':12,'pad':4,'label':"lit_5103",'name':"@5103",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD848,'size':12,'pad':0,'label':"paddleRippleScale",'name':"paddleRippleScale$5102",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD854,'size':12,'pad':4,'label':"lit_5356",'name':"@5356",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD864,'size':12,'pad':0,'label':"bodyRippleScale",'name':"bodyRippleScale$5355",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD870,'size':4,'pad':0,'label':"data_804DD870",'name':"sInstance__40JASGlobalInstance<19JASDefaultBankTable>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD874,'size':4,'pad':0,'label':"data_804DD874",'name':"sInstance__35JASGlobalInstance<14JASAudioThread>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD878,'size':4,'pad':0,'label':"data_804DD878",'name':"sInstance__27JASGlobalInstance<7Z2SeMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD87C,'size':4,'pad':0,'label':"data_804DD87C",'name':"sInstance__28JASGlobalInstance<8Z2SeqMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD880,'size':4,'pad':0,'label':"data_804DD880",'name':"sInstance__31JASGlobalInstance<10Z2SceneMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD884,'size':4,'pad':0,'label':"data_804DD884",'name':"sInstance__32JASGlobalInstance<11Z2StatusMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD888,'size':4,'pad':0,'label':"data_804DD888",'name':"sInstance__31JASGlobalInstance<10Z2DebugSys>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD88C,'size':4,'pad':0,'label':"data_804DD88C",'name':"sInstance__36JASGlobalInstance<15JAISoundStarter>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD890,'size':4,'pad':0,'label':"data_804DD890",'name':"sInstance__35JASGlobalInstance<14Z2SoundStarter>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD894,'size':4,'pad':0,'label':"data_804DD894",'name':"sInstance__33JASGlobalInstance<12Z2SpeechMgr2>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD898,'size':4,'pad':0,'label':"data_804DD898",'name':"sInstance__28JASGlobalInstance<8JAISeMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD89C,'size':4,'pad':0,'label':"data_804DD89C",'name':"sInstance__29JASGlobalInstance<9JAISeqMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD8A0,'size':4,'pad':0,'label':"data_804DD8A0",'name':"sInstance__33JASGlobalInstance<12JAIStreamMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD8A4,'size':4,'pad':0,'label':"data_804DD8A4",'name':"sInstance__31JASGlobalInstance<10Z2SoundMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD8A8,'size':4,'pad':0,'label':"data_804DD8A8",'name':"sInstance__33JASGlobalInstance<12JAISoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD8AC,'size':4,'pad':0,'label':"data_804DD8AC",'name':"sInstance__34JASGlobalInstance<13JAUSoundTable>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD8B0,'size':4,'pad':0,'label':"data_804DD8B0",'name':"sInstance__38JASGlobalInstance<17JAUSoundNameTable>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD8B4,'size':4,'pad':0,'label':"data_804DD8B4",'name':"sInstance__33JASGlobalInstance<12JAUSoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD8B8,'size':4,'pad':0,'label':"data_804DD8B8",'name':"sInstance__32JASGlobalInstance<11Z2SoundInfo>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD8BC,'size':4,'pad':0,'label':"data_804DD8BC",'name':"sInstance__34JASGlobalInstance<13Z2SoundObjMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD8C0,'size':4,'pad':0,'label':"data_804DD8C0",'name':"sInstance__31JASGlobalInstance<10Z2Audience>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD8C4,'size':4,'pad':0,'label':"data_804DD8C4",'name':"sInstance__32JASGlobalInstance<11Z2FxLineMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD8C8,'size':4,'pad':0,'label':"data_804DD8C8",'name':"sInstance__31JASGlobalInstance<10Z2EnvSeMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD8CC,'size':4,'pad':0,'label':"data_804DD8CC",'name':"sInstance__32JASGlobalInstance<11Z2SpeechMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD8D0,'size':4,'pad':0,'label':"data_804DD8D0",'name':"sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x804DD8D4,'size':4,'pad':0,'label':"data_804DD8D4",'name':"sInstance__35JASGlobalInstance<14JAUSectionHeap>",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"daCanoe_searchTagWaterFall__FP10fopAc_ac_cPv":5,
	"__dt__4cXyzFv":6,
	"createHeap__9daCanoe_cFv":7,
	"daCanoe_createHeap__FP10fopAc_ac_c":8,
	"create__9daCanoe_cFv":9,
	"__dt__8dCcD_CylFv":10,
	"__ct__8dCcD_CylFv":11,
	"__dt__8cM3dGCylFv":12,
	"__dt__8cM3dGAabFv":13,
	"__dt__13dBgS_LinkAcchFv":14,
	"__ct__13dBgS_LinkAcchFv":15,
	"__dt__12dBgS_AcchCirFv":16,
	"__dt__10dCcD_GSttsFv":17,
	"daCanoe_Create__FP10fopAc_ac_c":18,
	"__dt__9daCanoe_cFv":19,
	"daCanoe_Delete__FP9daCanoe_c":20,
	"setRoomInfo__9daCanoe_cFv":21,
	"setMatrix__9daCanoe_cFv":22,
	"setCollision__9daCanoe_cFv":23,
	"posMove__9daCanoe_cFv":24,
	"checkGomikabe__9daCanoe_cFR13cBgS_PolyInfo":25,
	"setFrontBackPos__9daCanoe_cFv":26,
	"frontBackBgCheck__9daCanoe_cFv":27,
	"__dt__8cM3dGPlaFv":28,
	"setPaddleEffect__9daCanoe_cFv":29,
	"setCanoeSliderEffect__9daCanoe_cFv":30,
	"execute__9daCanoe_cFv":31,
	"daCanoe_Execute__FP9daCanoe_c":32,
	"draw__9daCanoe_cFv":33,
	"daCanoe_Draw__FP9daCanoe_c":34,
	"__dt__10cCcD_GSttsFv":35,
	"func_804DD5BC":36,
	"func_804DD5C4":37,
	"_ctors":38,
	"_dtors":39,
	"lit_3766":40,
	"l_arcName":41,
	"l_arcName2":42,
	"l_arcName3":43,
	"l_cylOffsetZ":44,
	"lit_4328":45,
	"lit_4329":46,
	"lit_4330":47,
	"lit_4331":48,
	"lit_4332":49,
	"lit_4333":50,
	"lit_4334":51,
	"lit_4335":52,
	"lit_4336":53,
	"lit_4480":54,
	"lit_4626":55,
	"lit_4627":56,
	"lit_4628":57,
	"lit_4629":58,
	"lit_4630":59,
	"lit_4631":60,
	"lit_4632":61,
	"lit_4633":62,
	"lit_4634":63,
	"lit_4635":64,
	"lit_4636":65,
	"lit_4637":66,
	"lit_4638":67,
	"lit_4639":68,
	"lit_4640":69,
	"lit_4641":70,
	"lit_4642":71,
	"lit_4683":72,
	"lit_4738":73,
	"lit_5087":74,
	"lit_5088":75,
	"lit_5089":76,
	"lit_5090":77,
	"lit_5091":78,
	"lit_5092":79,
	"lit_5172":80,
	"lit_5173":81,
	"effName":82,
	"lit_5280":83,
	"lit_5504":84,
	"lit_5505":85,
	"lit_5506":86,
	"lit_5507":87,
	"lit_5508":88,
	"lit_5573":89,
	"lit_5574":90,
	"lit_5575":91,
	"lit_5576":92,
	"lit_5577":93,
	"d_a_canoe__stringBase0":94,
	"l_cylSrc":95,
	"l_daCanoe_Method":96,
	"g_profile_CANOE":97,
	"__vt__8cM3dGPla":98,
	"__vt__10cCcD_GStts":99,
	"__vt__10dCcD_GStts":100,
	"__vt__12dBgS_AcchCir":101,
	"__vt__13dBgS_LinkAcch":102,
	"__vt__8cM3dGAab":103,
	"__vt__8cM3dGCyl":104,
	"__global_destructor_chain":105,
	"lit_1109":106,
	"lit_1107":107,
	"lit_1105":108,
	"lit_1104":109,
	"lit_1099":110,
	"lit_1097":111,
	"lit_1095":112,
	"lit_1094":113,
	"lit_1057":114,
	"lit_1055":115,
	"lit_1053":116,
	"lit_1052":117,
	"lit_1014":118,
	"lit_1012":119,
	"lit_1010":120,
	"lit_1009":121,
	"lit_5103":122,
	"paddleRippleScale":123,
	"lit_5356":124,
	"bodyRippleScale":125,
	"data_804DD870":126,
	"data_804DD874":127,
	"data_804DD878":128,
	"data_804DD87C":129,
	"data_804DD880":130,
	"data_804DD884":131,
	"data_804DD888":132,
	"data_804DD88C":133,
	"data_804DD890":134,
	"data_804DD894":135,
	"data_804DD898":136,
	"data_804DD89C":137,
	"data_804DD8A0":138,
	"data_804DD8A4":139,
	"data_804DD8A8":140,
	"data_804DD8AC":141,
	"data_804DD8B0":142,
	"data_804DD8B4":143,
	"data_804DD8B8":144,
	"data_804DD8BC":145,
	"data_804DD8C0":146,
	"data_804DD8C4":147,
	"data_804DD8C8":148,
	"data_804DD8CC":149,
	"data_804DD8D0":150,
	"data_804DD8D4":151,
}

