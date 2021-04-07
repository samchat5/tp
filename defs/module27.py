#
# Generate By: dol2asm
# Module: 27
#

# Libraries
LIBRARIES = [
	"d/a/tag/d_a_tag_allmato",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"unknown_translation_unit_dtors",
	"d_a_tag_allmato",
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
	{'addr':0x804874C0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804874EC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80487518,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80487538,'size':312,'pad':0,'label':"create__15daTag_AllMato_cFv",'name':"create__15daTag_AllMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80487670,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804876AC,'size':4,'pad':0,'label':"__ct__4cXyzFv",'name':"__ct__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x804876B0,'size':8,'pad':0,'label':"Delete__15daTag_AllMato_cFv",'name':"Delete__15daTag_AllMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x804876B8,'size':1444,'pad':0,'label':"Execute__15daTag_AllMato_cFv",'name':"Execute__15daTag_AllMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80487C5C,'size':8,'pad':0,'label':"Draw__15daTag_AllMato_cFv",'name':"Draw__15daTag_AllMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80487C64,'size':156,'pad':0,'label':"srchBouMato__15daTag_AllMato_cFPvPv",'name':"srchBouMato__15daTag_AllMato_cFPvPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80487D00,'size':156,'pad':0,'label':"srchItaMato__15daTag_AllMato_cFPvPv",'name':"srchItaMato__15daTag_AllMato_cFPvPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80487D9C,'size':156,'pad':0,'label':"srchTaro__15daTag_AllMato_cFPvPv",'name':"srchTaro__15daTag_AllMato_cFPvPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80487E38,'size':156,'pad':0,'label':"srchArrow__15daTag_AllMato_cFPvPv",'name':"srchArrow__15daTag_AllMato_cFPvPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80487ED4,'size':172,'pad':0,'label':"isDelete__15daTag_AllMato_cFv",'name':"isDelete__15daTag_AllMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80487F80,'size':180,'pad':0,'label':"entryBouMatoActors__15daTag_AllMato_cFv",'name':"entryBouMatoActors__15daTag_AllMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80488034,'size':208,'pad':0,'label':"entryItaMatoActors__15daTag_AllMato_cFv",'name':"entryItaMatoActors__15daTag_AllMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80488104,'size':188,'pad':0,'label':"getTaroActorP__15daTag_AllMato_cFv",'name':"getTaroActorP__15daTag_AllMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804881C0,'size':120,'pad':0,'label':"getArrowActorP__15daTag_AllMato_cFv",'name':"getArrowActorP__15daTag_AllMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80488238,'size':1884,'pad':0,'label':"checkCrsMato__15daTag_AllMato_cFv",'name':"checkCrsMato__15daTag_AllMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80488994,'size':1452,'pad':0,'label':"checkCrsMato2__15daTag_AllMato_cFv",'name':"checkCrsMato2__15daTag_AllMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80488F40,'size':152,'pad':0,'label':"checkBrkMato__15daTag_AllMato_cFv",'name':"checkBrkMato__15daTag_AllMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80488FD8,'size':216,'pad':0,'label':"evtChange__15daTag_AllMato_cFUs",'name':"evtChange__15daTag_AllMato_cFUs",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804890B0,'size':32,'pad':0,'label':"daTag_AllMato_Create__FPv",'name':"daTag_AllMato_Create__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804890D0,'size':32,'pad':0,'label':"daTag_AllMato_Delete__FPv",'name':"daTag_AllMato_Delete__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804890F0,'size':32,'pad':0,'label':"daTag_AllMato_Execute__FPv",'name':"daTag_AllMato_Execute__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80489110,'size':32,'pad':0,'label':"daTag_AllMato_Draw__FPv",'name':"daTag_AllMato_Draw__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80489130,'size':8,'pad':0,'label':"daTag_AllMato_IsDelete__FPv",'name':"daTag_AllMato_IsDelete__FPv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80489138,'size':72,'pad':0,'label':"__dt__18daNpcT_ActorMngr_cFv",'name':"__dt__18daNpcT_ActorMngr_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80489180,'size':60,'pad':0,'label':"__ct__18daNpcT_ActorMngr_cFv",'name':"__ct__18daNpcT_ActorMngr_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804891BC,'size':520,'pad':0,'label':"checkCrs__15daObj_ItaMato_cFP10fopAc_ac_c4cXyz4cXyzf",'name':"checkCrs__15daObj_ItaMato_cFP10fopAc_ac_c4cXyz4cXyzf",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804893C4,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8048940C,'size':480,'pad':0,'label':"checkCrs__15daObj_BouMato_cFP10fopAc_ac_c4cXyz4cXyzf",'name':"checkCrs__15daObj_BouMato_cFP10fopAc_ac_c4cXyz4cXyzf",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804895EC,'size':28,'pad':0,'label':"getStartPos__9daArrow_cFv",'name':"getStartPos__9daArrow_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80489608,'size':212,'pad':0,'label':"__dt__15daTag_AllMato_cFv",'name':"__dt__15daTag_AllMato_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x804896DC,'size':4,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x804896E0,'size':4,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x804896E4,'size':4,'pad':0,'label':"lit_4025",'name':"@4025",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[5,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x804896E8,'size':28,'pad':0,'label':"lit_4071",'name':"@4071",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80489704,'size':4,'pad':4,'label':"lit_4606",'name':"@4606",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8048970C,'size':8,'pad':0,'label':"lit_4607",'name':"@4607",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80489714,'size':8,'pad':0,'label':"lit_4608",'name':"@4608",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x8048971C,'size':8,'pad':0,'label':"lit_4609",'name':"@4609",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80489724,'size':4,'pad':0,'label':"lit_4610",'name':"@4610",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80489728,'size':4,'pad':0,'label':"lit_4611",'name':"@4611",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8048972C,'size':4,'pad':0,'label':"lit_4612",'name':"@4612",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80489730,'size':4,'pad':0,'label':"lit_4688",'name':"@4688",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80489734,'size':4,'pad':0,'label':"lit_4752",'name':"@4752",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80489738,'size':4,'pad':0,'label':"lit_4753",'name':"@4753",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x8048973C,'size':126,'pad':0,'label':"d_a_tag_allmato__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':3,'class_template':False,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x804897BC,'size':64,'pad':0,'label':"l_evtList",'name':"l_evtList",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x804897FC,'size':12,'pad':0,'label':"l_resNameList",'name':"l_resNameList",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80489808,'size':32,'pad':0,'label':"daTag_AllMato_MethodTable",'name':"daTag_AllMato_MethodTable",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80489828,'size':48,'pad':0,'label':"g_profile_TAG_ALLMATO",'name':"g_profile_TAG_ALLMATO",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80489858,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80489864,'size':12,'pad':0,'label':"__vt__18daNpcT_ActorMngr_c",'name':"__vt__18daNpcT_ActorMngr_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80489870,'size':12,'pad':0,'label':"__vt__15daTag_AllMato_c",'name':"__vt__15daTag_AllMato_c",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80489880,'size':400,'pad':0,'label':"l_findActorPtrs",'name':"l_findActorPtrs",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[9,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80489A10,'size':4,'pad':0,'label':"l_findCount",'name':"l_findCount",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[9,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"create__15daTag_AllMato_cFv":3,
	"__dt__4cXyzFv":4,
	"__ct__4cXyzFv":5,
	"Delete__15daTag_AllMato_cFv":6,
	"Execute__15daTag_AllMato_cFv":7,
	"Draw__15daTag_AllMato_cFv":8,
	"srchBouMato__15daTag_AllMato_cFPvPv":9,
	"srchItaMato__15daTag_AllMato_cFPvPv":10,
	"srchTaro__15daTag_AllMato_cFPvPv":11,
	"srchArrow__15daTag_AllMato_cFPvPv":12,
	"isDelete__15daTag_AllMato_cFv":13,
	"entryBouMatoActors__15daTag_AllMato_cFv":14,
	"entryItaMatoActors__15daTag_AllMato_cFv":15,
	"getTaroActorP__15daTag_AllMato_cFv":16,
	"getArrowActorP__15daTag_AllMato_cFv":17,
	"checkCrsMato__15daTag_AllMato_cFv":18,
	"checkCrsMato2__15daTag_AllMato_cFv":19,
	"checkBrkMato__15daTag_AllMato_cFv":20,
	"evtChange__15daTag_AllMato_cFUs":21,
	"daTag_AllMato_Create__FPv":22,
	"daTag_AllMato_Delete__FPv":23,
	"daTag_AllMato_Execute__FPv":24,
	"daTag_AllMato_Draw__FPv":25,
	"daTag_AllMato_IsDelete__FPv":26,
	"__dt__18daNpcT_ActorMngr_cFv":27,
	"__ct__18daNpcT_ActorMngr_cFv":28,
	"checkCrs__15daObj_ItaMato_cFP10fopAc_ac_c4cXyz4cXyzf":29,
	"__dt__8cM3dGSphFv":30,
	"checkCrs__15daObj_BouMato_cFP10fopAc_ac_c4cXyz4cXyzf":31,
	"getStartPos__9daArrow_cFv":32,
	"__dt__15daTag_AllMato_cFv":33,
	"_ctors":34,
	"_dtors":35,
	"lit_4025":36,
	"lit_4071":37,
	"lit_4606":38,
	"lit_4607":39,
	"lit_4608":40,
	"lit_4609":41,
	"lit_4610":42,
	"lit_4611":43,
	"lit_4612":44,
	"lit_4688":45,
	"lit_4752":46,
	"lit_4753":47,
	"d_a_tag_allmato__stringBase0":48,
	"l_evtList":49,
	"l_resNameList":50,
	"daTag_AllMato_MethodTable":51,
	"g_profile_TAG_ALLMATO":52,
	"__vt__8cM3dGSph":53,
	"__vt__18daNpcT_ActorMngr_c":54,
	"__vt__15daTag_AllMato_c":55,
	"l_findActorPtrs":56,
	"l_findCount":57,
}

