#
# Generate By: dol2asm
# Module: 110
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_rope_bridge",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"unknown_translation_unit_bss",
	"d_a_obj_rope_bridge",
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
	{'addr':0x80595DC0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80595DEC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80595E18,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80595E38,'size':160,'pad':0,'label':"initBaseMtx__14daObjRBridge_cFv",'name':"initBaseMtx__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80595ED8,'size':172,'pad':0,'label':"setBaseMtx__14daObjRBridge_cFv",'name':"setBaseMtx__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80595F84,'size':92,'pad':0,'label':"checkE3Special__14daObjRBridge_cFv",'name':"checkE3Special__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80595FE0,'size':336,'pad':0,'label':"setStPos__14daObjRBridge_cFv",'name':"setStPos__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80596130,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8059616C,'size':600,'pad':0,'label':"initLinePos__14daObjRBridge_cFv",'name':"initLinePos__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805963C4,'size':932,'pad':0,'label':"setLinePos__14daObjRBridge_cFv",'name':"setLinePos__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80596768,'size':124,'pad':0,'label':"getLinePosSt__14daObjRBridge_cFP4cXyz",'name':"getLinePosSt__14daObjRBridge_cFP4cXyz",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805967E4,'size':184,'pad':0,'label':"getLinePosBrg__14daObjRBridge_cFiP4cXyz",'name':"getLinePosBrg__14daObjRBridge_cFiP4cXyz",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8059689C,'size':352,'pad':0,'label':"checkTight__14daObjRBridge_cFv",'name':"checkTight__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805969FC,'size':396,'pad':0,'label':"Create__14daObjRBridge_cFv",'name':"Create__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80596B88,'size':608,'pad':0,'label':"CreateHeap__14daObjRBridge_cFv",'name':"CreateHeap__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80596DE8,'size':4,'pad':0,'label':"__ct__4cXyzFv",'name':"__ct__4cXyzFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80596DEC,'size':208,'pad':0,'label':"create1st__14daObjRBridge_cFv",'name':"create1st__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80596EBC,'size':236,'pad':0,'label':"Execute__14daObjRBridge_cFPPA3_A4_f",'name':"Execute__14daObjRBridge_cFPPA3_A4_f",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80596FA8,'size':436,'pad':0,'label':"action__14daObjRBridge_cFv",'name':"action__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8059715C,'size':20,'pad':0,'label':"init_wait__14daObjRBridge_cFv",'name':"init_wait__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80597170,'size':588,'pad':0,'label':"mode_wait__14daObjRBridge_cFv",'name':"mode_wait__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805973BC,'size':40,'pad':0,'label':"init_cut__14daObjRBridge_cFv",'name':"init_cut__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805973E4,'size':516,'pad':0,'label':"mode_cut__14daObjRBridge_cFv",'name':"mode_cut__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805975E8,'size':12,'pad':0,'label':"init_end__14daObjRBridge_cFv",'name':"init_end__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805975F4,'size':4,'pad':0,'label':"mode_end__14daObjRBridge_cFv",'name':"mode_end__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x805975F8,'size':472,'pad':0,'label':"Draw__14daObjRBridge_cFv",'name':"Draw__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805977D0,'size':236,'pad':0,'label':"checkHimoCulling__14daObjRBridge_cFv",'name':"checkHimoCulling__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x805978BC,'size':100,'pad':0,'label':"Delete__14daObjRBridge_cFv",'name':"Delete__14daObjRBridge_cFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80597920,'size':368,'pad':0,'label':"daObjRBridge_create1st__FP14daObjRBridge_c",'name':"daObjRBridge_create1st__FP14daObjRBridge_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80597A90,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80597AD8,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80597B20,'size':196,'pad':0,'label':"__dt__8dCcD_CpsFv",'name':"__dt__8dCcD_CpsFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80597BE4,'size':128,'pad':0,'label':"__ct__8dCcD_CpsFv",'name':"__ct__8dCcD_CpsFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80597C64,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80597CC0,'size':32,'pad':0,'label':"daObjRBridge_MoveBGDelete__FP14daObjRBridge_c",'name':"daObjRBridge_MoveBGDelete__FP14daObjRBridge_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80597CE0,'size':32,'pad':0,'label':"daObjRBridge_MoveBGExecute__FP14daObjRBridge_c",'name':"daObjRBridge_MoveBGExecute__FP14daObjRBridge_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80597D00,'size':44,'pad':0,'label':"daObjRBridge_MoveBGDraw__FP14daObjRBridge_c",'name':"daObjRBridge_MoveBGDraw__FP14daObjRBridge_c",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80597D2C,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':4,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80597D74,'size':4,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80597D78,'size':4,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80597D7C,'size':8,'pad':0,'label':"l_brgBmdIdx",'name':"l_brgBmdIdx",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[9,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597D84,'size':8,'pad':0,'label':"l_brgDzbIdx",'name':"l_brgDzbIdx",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597D8C,'size':8,'pad':0,'label':"l_brg_height",'name':"l_brg_height",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597D94,'size':8,'pad':0,'label':"l_rope_length",'name':"l_rope_length",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597D9C,'size':8,'pad':0,'label':"l_himo_thick",'name':"l_himo_thick",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597DA4,'size':8,'pad':0,'label':"l_heap_size",'name':"l_heap_size",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597DAC,'size':24,'pad':0,'label':"l_rope_cullbox_offset",'name':"l_rope_cullbox_offset",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597DC4,'size':24,'pad':0,'label':"l_rope_cullbox",'name':"l_rope_cullbox",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597DDC,'size':8,'pad':0,'label':"lit_3669",'name':"@3669",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597DE4,'size':4,'pad':0,'label':"lit_3696",'name':"@3696",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597DE8,'size':4,'pad':0,'label':"lit_3697",'name':"@3697",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80597DEC,'size':4,'pad':0,'label':"lit_3698",'name':"@3698",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80597DF0,'size':4,'pad':0,'label':"lit_3824",'name':"@3824",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80597DF4,'size':4,'pad':0,'label':"lit_3825",'name':"@3825",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80597DF8,'size':4,'pad':0,'label':"lit_3998",'name':"@3998",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80597DFC,'size':4,'pad':4,'label':"lit_3999",'name':"@3999",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80597E04,'size':8,'pad':0,'label':"lit_4060",'name':"@4060",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597E0C,'size':8,'pad':0,'label':"lit_4061",'name':"@4061",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597E14,'size':8,'pad':0,'label':"lit_4062",'name':"@4062",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597E1C,'size':4,'pad':0,'label':"lit_4239",'name':"@4239",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80597E20,'size':4,'pad':0,'label':"lit_4310",'name':"@4310",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80597E24,'size':4,'pad':4,'label':"lit_4311",'name':"@4311",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80597E2C,'size':8,'pad':0,'label':"lit_4313",'name':"@4313",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597E34,'size':4,'pad':0,'label':"lit_4356",'name':"@4356",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80597E38,'size':4,'pad':0,'label':"lit_4357",'name':"@4357",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80597E3C,'size':4,'pad':0,'label':"lit_4385",'name':"@4385",'lib':-1,'tu':4,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597E40,'size':36,'pad':0,'label':"d_a_obj_rope_bridge__stringBase0",'name':"@stringBase0",'lib':-1,'tu':4,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80597E64,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597E70,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80597E84,'size':8,'pad':0,'label':"l_arcName",'name':"l_arcName",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80597E8C,'size':4,'pad':0,'label':"l_ropeArcName",'name':"l_ropeArcName",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80597E90,'size':24,'pad':0,'label':"l_rope_offsetL",'name':"l_rope_offsetL",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597EA8,'size':24,'pad':0,'label':"l_rope_offsetS",'name':"l_rope_offsetS",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597EC0,'size':12,'pad':0,'label':"l_rope_offsetSt",'name':"l_rope_offsetSt",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597ECC,'size':24,'pad':0,'label':"l_cull_sizeS",'name':"l_cull_sizeS",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597EE4,'size':24,'pad':0,'label':"l_cull_sizeL",'name':"l_cull_sizeL",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597EFC,'size':8,'pad':0,'label':"l_att_disXZ",'name':"l_att_disXZ",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597F04,'size':8,'pad':0,'label':"l_att_high",'name':"l_att_high",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597F0C,'size':8,'pad':0,'label':"l_att_low",'name':"l_att_low",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597F14,'size':4,'pad':0,'label':"l_att_ang",'name':"l_att_ang",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80597F18,'size':64,'pad':0,'label':"l_sph_src",'name':"l_sph_src",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597F58,'size':64,'pad':0,'label':"l_sph_src2",'name':"l_sph_src2",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597F98,'size':76,'pad':0,'label':"l_cps_src",'name':"l_cps_src",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80597FE4,'size':12,'pad':0,'label':"lit_4218",'name':"@4218",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80597FF0,'size':12,'pad':0,'label':"lit_4219",'name':"@4219",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80597FFC,'size':12,'pad':0,'label':"lit_4220",'name':"@4220",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80598008,'size':36,'pad':0,'label':"mode_proc",'name':"mode_proc$4217",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8059802C,'size':8,'pad':0,'label':"l_fall_start_se",'name':"l_fall_start_se$4321",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80598034,'size':8,'pad':0,'label':"l_fall_end_se",'name':"l_fall_end_se$4322",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8059803C,'size':32,'pad':0,'label':"daObjRBridge_METHODS",'name':"daObjRBridge_METHODS",'lib':-1,'tu':4,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8059805C,'size':48,'pad':0,'label':"g_profile_Obj_RopeBridge",'name':"g_profile_Obj_RopeBridge",'lib':-1,'tu':4,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x8059808C,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':4,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80598098,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':4,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x805980A4,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':4,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x805980B0,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':4,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x805980BC,'size':20,'pad':0,'label':"__vt__18mDoExt_3DlineMat_c",'name':"__vt__18mDoExt_3DlineMat_c",'lib':-1,'tu':4,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x805980D0,'size':40,'pad':0,'label':"__vt__14daObjRBridge_c",'name':"__vt__14daObjRBridge_c",'lib':-1,'tu':4,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x805980F8,'size':4,'pad':0,'label':"data_805980F8",'name':None,'lib':-1,'tu':3,'section':3,'class_template':False,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"initBaseMtx__14daObjRBridge_cFv":3,
	"setBaseMtx__14daObjRBridge_cFv":4,
	"checkE3Special__14daObjRBridge_cFv":5,
	"setStPos__14daObjRBridge_cFv":6,
	"__dt__4cXyzFv":7,
	"initLinePos__14daObjRBridge_cFv":8,
	"setLinePos__14daObjRBridge_cFv":9,
	"getLinePosSt__14daObjRBridge_cFP4cXyz":10,
	"getLinePosBrg__14daObjRBridge_cFiP4cXyz":11,
	"checkTight__14daObjRBridge_cFv":12,
	"Create__14daObjRBridge_cFv":13,
	"CreateHeap__14daObjRBridge_cFv":14,
	"__ct__4cXyzFv":15,
	"create1st__14daObjRBridge_cFv":16,
	"Execute__14daObjRBridge_cFPPA3_A4_f":17,
	"action__14daObjRBridge_cFv":18,
	"init_wait__14daObjRBridge_cFv":19,
	"mode_wait__14daObjRBridge_cFv":20,
	"init_cut__14daObjRBridge_cFv":21,
	"mode_cut__14daObjRBridge_cFv":22,
	"init_end__14daObjRBridge_cFv":23,
	"mode_end__14daObjRBridge_cFv":24,
	"Draw__14daObjRBridge_cFv":25,
	"checkHimoCulling__14daObjRBridge_cFv":26,
	"Delete__14daObjRBridge_cFv":27,
	"daObjRBridge_create1st__FP14daObjRBridge_c":28,
	"__dt__8cM3dGSphFv":29,
	"__dt__8cM3dGAabFv":30,
	"__dt__8dCcD_CpsFv":31,
	"__ct__8dCcD_CpsFv":32,
	"__dt__10dCcD_GSttsFv":33,
	"daObjRBridge_MoveBGDelete__FP14daObjRBridge_c":34,
	"daObjRBridge_MoveBGExecute__FP14daObjRBridge_c":35,
	"daObjRBridge_MoveBGDraw__FP14daObjRBridge_c":36,
	"__dt__10cCcD_GSttsFv":37,
	"_ctors":38,
	"_dtors":39,
	"l_brgBmdIdx":40,
	"l_brgDzbIdx":41,
	"l_brg_height":42,
	"l_rope_length":43,
	"l_himo_thick":44,
	"l_heap_size":45,
	"l_rope_cullbox_offset":46,
	"l_rope_cullbox":47,
	"lit_3669":48,
	"lit_3696":49,
	"lit_3697":50,
	"lit_3698":51,
	"lit_3824":52,
	"lit_3825":53,
	"lit_3998":54,
	"lit_3999":55,
	"lit_4060":56,
	"lit_4061":57,
	"lit_4062":58,
	"lit_4239":59,
	"lit_4310":60,
	"lit_4311":61,
	"lit_4313":62,
	"lit_4356":63,
	"lit_4357":64,
	"lit_4385":65,
	"d_a_obj_rope_bridge__stringBase0":66,
	"cNullVec__6Z2Calc":67,
	"lit_1787":68,
	"l_arcName":69,
	"l_ropeArcName":70,
	"l_rope_offsetL":71,
	"l_rope_offsetS":72,
	"l_rope_offsetSt":73,
	"l_cull_sizeS":74,
	"l_cull_sizeL":75,
	"l_att_disXZ":76,
	"l_att_high":77,
	"l_att_low":78,
	"l_att_ang":79,
	"l_sph_src":80,
	"l_sph_src2":81,
	"l_cps_src":82,
	"lit_4218":83,
	"lit_4219":84,
	"lit_4220":85,
	"mode_proc":86,
	"l_fall_start_se":87,
	"l_fall_end_se":88,
	"daObjRBridge_METHODS":89,
	"g_profile_Obj_RopeBridge":90,
	"__vt__10cCcD_GStts":91,
	"__vt__10dCcD_GStts":92,
	"__vt__8cM3dGSph":93,
	"__vt__8cM3dGAab":94,
	"__vt__18mDoExt_3DlineMat_c":95,
	"__vt__14daObjRBridge_c":96,
	"data_805980F8":97,
}

