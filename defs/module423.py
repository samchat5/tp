#
# Generate By: dol2asm
# Module: 423
#

# Libraries
LIBRARIES = [
	"d/a/obj/d_a_obj_cho",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_obj_cho",
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
	{'addr':0x80BCA220,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCA24C,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCA278,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCA298,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCA2B4,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCA30C,'size':40,'pad':0,'label':"__ct__14daObj_ChoHIO_cFv",'name':"__ct__14daObj_ChoHIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCA334,'size':108,'pad':0,'label':"InitCcSph__10daObjCHO_cFv",'name':"InitCcSph__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCA3A0,'size':88,'pad':0,'label':"SetCcSph__10daObjCHO_cFv",'name':"SetCcSph__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCA3F8,'size':32,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCA418,'size':744,'pad':0,'label':"CreateHeap__10daObjCHO_cFv",'name':"CreateHeap__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCA700,'size':72,'pad':0,'label':"__dt__12J3DFrameCtrlFv",'name':"__dt__12J3DFrameCtrlFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCA748,'size':32,'pad':0,'label':"daObjCHO_Create__FP10fopAc_ac_c",'name':"daObjCHO_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCA768,'size':36,'pad':0,'label':"daObjCHO_Delete__FP10daObjCHO_c",'name':"daObjCHO_Delete__FP10daObjCHO_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCA78C,'size':256,'pad':0,'label':"SpeedSet__10daObjCHO_cFv",'name':"SpeedSet__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCA88C,'size':152,'pad':0,'label':"WallCheck__10daObjCHO_cFv",'name':"WallCheck__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCA924,'size':556,'pad':0,'label':"SearchLink__10daObjCHO_cFv",'name':"SearchLink__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCAB50,'size':908,'pad':0,'label':"WaitAction__10daObjCHO_cFv",'name':"WaitAction__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCAEDC,'size':820,'pad':0,'label':"MoveAction__10daObjCHO_cFv",'name':"MoveAction__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCB210,'size':88,'pad':0,'label':"Action__10daObjCHO_cFv",'name':"Action__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCB268,'size':68,'pad':0,'label':"ShopAction__10daObjCHO_cFv",'name':"ShopAction__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCB2AC,'size':100,'pad':0,'label':"checkGroundPos__10daObjCHO_cFv",'name':"checkGroundPos__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCB310,'size':16,'pad':0,'label':"Insect_Release__10daObjCHO_cFv",'name':"Insect_Release__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCB320,'size':380,'pad':0,'label':"Z_BufferChk__10daObjCHO_cFv",'name':"Z_BufferChk__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCB49C,'size':292,'pad':0,'label':"ParticleSet__10daObjCHO_cFv",'name':"ParticleSet__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCB5C0,'size':628,'pad':0,'label':"BoomChk__10daObjCHO_cFv",'name':"BoomChk__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCB834,'size':72,'pad':0,'label':"__dt__8cM3dGPlaFv",'name':"__dt__8cM3dGPlaFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCB87C,'size':708,'pad':0,'label':"Execute__10daObjCHO_cFv",'name':"Execute__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCBB40,'size':360,'pad':0,'label':"ObjHit__10daObjCHO_cFv",'name':"ObjHit__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCBCA8,'size':104,'pad':0,'label':"Delete__10daObjCHO_cFv",'name':"Delete__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCBD10,'size':96,'pad':0,'label':"setBaseMtx__10daObjCHO_cFv",'name':"setBaseMtx__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCBD70,'size':224,'pad':0,'label':"daObjCHO_Draw__FP10daObjCHO_c",'name':"daObjCHO_Draw__FP10daObjCHO_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCBE50,'size':32,'pad':0,'label':"daObjCHO_Execute__FP10daObjCHO_c",'name':"daObjCHO_Execute__FP10daObjCHO_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCBE70,'size':428,'pad':0,'label':"CreateChk__10daObjCHO_cFv",'name':"CreateChk__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCC01C,'size':940,'pad':0,'label':"create__10daObjCHO_cFv",'name':"create__10daObjCHO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCC3C8,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCC410,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCC458,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCC4C8,'size':8,'pad':0,'label':"daObjCHO_IsDelete__FP10daObjCHO_c",'name':"daObjCHO_IsDelete__FP10daObjCHO_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80BCC4D0,'size':72,'pad':0,'label':"__dt__14daObj_ChoHIO_cFv",'name':"__dt__14daObj_ChoHIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCC518,'size':60,'pad':0,'label':"__sinit_d_a_obj_cho_cpp",'name':"__sinit_d_a_obj_cho_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80BCC554,'size':8,'pad':0,'label':"func_80BCC554",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCC55C,'size':8,'pad':0,'label':"func_80BCC55C",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80BCC564,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80BCC56C,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80BCC578,'size':4,'pad':0,'label':"lit_3775",'name':"@3775",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':True,'r':[10,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC57C,'size':64,'pad':0,'label':"ccSphSrc",'name':"ccSphSrc$3779",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BCC5BC,'size':4,'pad':0,'label':"lit_3788",'name':"@3788",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC5C0,'size':4,'pad':0,'label':"lit_3889",'name':"@3889",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC5C4,'size':4,'pad':0,'label':"lit_3927",'name':"@3927",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BCC5C8,'size':4,'pad':0,'label':"lit_3928",'name':"@3928",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC5CC,'size':4,'pad':0,'label':"lit_3929",'name':"@3929",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC5D0,'size':4,'pad':4,'label':"lit_3930",'name':"@3930",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC5D8,'size':8,'pad':0,'label':"lit_3999",'name':"@3999",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BCC5E0,'size':8,'pad':0,'label':"lit_4000",'name':"@4000",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BCC5E8,'size':8,'pad':0,'label':"lit_4001",'name':"@4001",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BCC5F0,'size':4,'pad':0,'label':"lit_4002",'name':"@4002",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC5F4,'size':4,'pad':0,'label':"lit_4003",'name':"@4003",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC5F8,'size':4,'pad':0,'label':"lit_4004",'name':"@4004",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC5FC,'size':4,'pad':0,'label':"lit_4005",'name':"@4005",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC600,'size':4,'pad':0,'label':"lit_4064",'name':"@4064",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC604,'size':4,'pad':0,'label':"lit_4065",'name':"@4065",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC608,'size':4,'pad':0,'label':"lit_4066",'name':"@4066",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC60C,'size':4,'pad':0,'label':"lit_4067",'name':"@4067",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC610,'size':4,'pad':0,'label':"lit_4136",'name':"@4136",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC614,'size':4,'pad':0,'label':"lit_4137",'name':"@4137",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC618,'size':4,'pad':0,'label':"lit_4138",'name':"@4138",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC61C,'size':4,'pad':0,'label':"lit_4139",'name':"@4139",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC620,'size':4,'pad':0,'label':"lit_4140",'name':"@4140",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC624,'size':4,'pad':0,'label':"lit_4141",'name':"@4141",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC628,'size':4,'pad':0,'label':"lit_4142",'name':"@4142",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC62C,'size':4,'pad':0,'label':"lit_4143",'name':"@4143",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC630,'size':2,'pad':2,'label':"l_cho_itemno",'name':"l_cho_itemno",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BCC634,'size':4,'pad':0,'label':"lit_4226",'name':"@4226",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC638,'size':4,'pad':4,'label':"lit_4227",'name':"@4227",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC640,'size':8,'pad':0,'label':"lit_4229",'name':"@4229",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BCC648,'size':4,'pad':0,'label':"lit_4268",'name':"@4268",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC64C,'size':4,'pad':0,'label':"lit_4269",'name':"@4269",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC650,'size':4,'pad':4,'label':"lit_4270",'name':"@4270",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC658,'size':8,'pad':0,'label':"lit_4300",'name':"@4300",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BCC660,'size':4,'pad':0,'label':"lit_4421",'name':"@4421",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC664,'size':4,'pad':0,'label':"lit_4452",'name':"@4452",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC668,'size':4,'pad':0,'label':"lit_4516",'name':"@4516",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC66C,'size':4,'pad':0,'label':"lit_4517",'name':"@4517",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC670,'size':4,'pad':0,'label':"l_musiya_num",'name':"l_musiya_num",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80BCC674,'size':4,'pad':0,'label':"lit_4670",'name':"@4670",'lib':-1,'tu':3,'section':4,'class_template':None,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80BCC678,'size':14,'pad':0,'label':"d_a_obj_cho__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':None,'static':False,'is_reachable':False,'r':[7,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80BCC688,'size':32,'pad':0,'label':"l_daObjCHO_Method",'name':"l_daObjCHO_Method",'lib':-1,'tu':3,'section':5,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BCC6A8,'size':48,'pad':0,'label':"g_profile_Obj_Cho",'name':"g_profile_Obj_Cho",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80BCC6D8,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BCC6E4,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BCC6F0,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BCC714,'size':12,'pad':0,'label':"__vt__8cM3dGPla",'name':"__vt__8cM3dGPla",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BCC720,'size':12,'pad':0,'label':"__vt__10daObjCHO_c",'name':"__vt__10daObjCHO_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BCC72C,'size':12,'pad':0,'label':"__vt__12J3DFrameCtrl",'name':"__vt__12J3DFrameCtrl",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BCC738,'size':12,'pad':0,'label':"__vt__14daObj_ChoHIO_c",'name':"__vt__14daObj_ChoHIO_c",'lib':-1,'tu':3,'section':5,'class_template':None,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80BCC748,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BCC750,'size':4,'pad':0,'label':"data_80BCC750",'name':None,'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BCC754,'size':12,'pad':0,'label':"lit_3770",'name':"@3770",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80BCC760,'size':16,'pad':0,'label':"l_HIO",'name':"l_HIO",'lib':-1,'tu':3,'section':3,'class_template':None,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"__ct__14daObj_ChoHIO_cFv":5,
	"InitCcSph__10daObjCHO_cFv":6,
	"SetCcSph__10daObjCHO_cFv":7,
	"useHeapInit__FP10fopAc_ac_c":8,
	"CreateHeap__10daObjCHO_cFv":9,
	"__dt__12J3DFrameCtrlFv":10,
	"daObjCHO_Create__FP10fopAc_ac_c":11,
	"daObjCHO_Delete__FP10daObjCHO_c":12,
	"SpeedSet__10daObjCHO_cFv":13,
	"WallCheck__10daObjCHO_cFv":14,
	"SearchLink__10daObjCHO_cFv":15,
	"WaitAction__10daObjCHO_cFv":16,
	"MoveAction__10daObjCHO_cFv":17,
	"Action__10daObjCHO_cFv":18,
	"ShopAction__10daObjCHO_cFv":19,
	"checkGroundPos__10daObjCHO_cFv":20,
	"Insect_Release__10daObjCHO_cFv":21,
	"Z_BufferChk__10daObjCHO_cFv":22,
	"ParticleSet__10daObjCHO_cFv":23,
	"BoomChk__10daObjCHO_cFv":24,
	"__dt__8cM3dGPlaFv":25,
	"Execute__10daObjCHO_cFv":26,
	"ObjHit__10daObjCHO_cFv":27,
	"Delete__10daObjCHO_cFv":28,
	"setBaseMtx__10daObjCHO_cFv":29,
	"daObjCHO_Draw__FP10daObjCHO_c":30,
	"daObjCHO_Execute__FP10daObjCHO_c":31,
	"CreateChk__10daObjCHO_cFv":32,
	"create__10daObjCHO_cFv":33,
	"__dt__8cM3dGSphFv":34,
	"__dt__8cM3dGAabFv":35,
	"__dt__12dBgS_ObjAcchFv":36,
	"daObjCHO_IsDelete__FP10daObjCHO_c":37,
	"__dt__14daObj_ChoHIO_cFv":38,
	"__sinit_d_a_obj_cho_cpp":39,
	"func_80BCC554":40,
	"func_80BCC55C":41,
	"_ctors":42,
	"_dtors":43,
	"lit_3775":44,
	"ccSphSrc":45,
	"lit_3788":46,
	"lit_3889":47,
	"lit_3927":48,
	"lit_3928":49,
	"lit_3929":50,
	"lit_3930":51,
	"lit_3999":52,
	"lit_4000":53,
	"lit_4001":54,
	"lit_4002":55,
	"lit_4003":56,
	"lit_4004":57,
	"lit_4005":58,
	"lit_4064":59,
	"lit_4065":60,
	"lit_4066":61,
	"lit_4067":62,
	"lit_4136":63,
	"lit_4137":64,
	"lit_4138":65,
	"lit_4139":66,
	"lit_4140":67,
	"lit_4141":68,
	"lit_4142":69,
	"lit_4143":70,
	"l_cho_itemno":71,
	"lit_4226":72,
	"lit_4227":73,
	"lit_4229":74,
	"lit_4268":75,
	"lit_4269":76,
	"lit_4270":77,
	"lit_4300":78,
	"lit_4421":79,
	"lit_4452":80,
	"lit_4516":81,
	"lit_4517":82,
	"l_musiya_num":83,
	"lit_4670":84,
	"d_a_obj_cho__stringBase0":85,
	"l_daObjCHO_Method":86,
	"g_profile_Obj_Cho":87,
	"__vt__8cM3dGSph":88,
	"__vt__8cM3dGAab":89,
	"__vt__12dBgS_ObjAcch":90,
	"__vt__8cM3dGPla":91,
	"__vt__10daObjCHO_c":92,
	"__vt__12J3DFrameCtrl":93,
	"__vt__14daObj_ChoHIO_c":94,
	"__global_destructor_chain":95,
	"data_80BCC750":96,
	"lit_3770":97,
	"l_HIO":98,
}

