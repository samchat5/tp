#
# Generate By: dol2asm
# Module: 206
#

# Libraries
LIBRARIES = [
	"d/a/e/d_a_e_kr",
]

# Translation Units
TRANSLATION_UNITS = [
	"executor",
	"unknown_translation_unit_ctors",
	"global_destructor_chain",
	"d_a_e_kr",
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
	{'addr':0x806FF8C0,'size':44,'pad':0,'label':"_prolog",'name':"_prolog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806FF8EC,'size':44,'pad':0,'label':"_epilog",'name':"_epilog",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806FF918,'size':32,'pad':0,'label':"_unresolved",'name':"_unresolved",'lib':-1,'tu':0,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806FF938,'size':28,'pad':0,'label':"__register_global_object",'name':"__register_global_object",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806FF954,'size':88,'pad':0,'label':"__destroy_global_chain",'name':"__destroy_global_chain",'lib':-1,'tu':2,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806FF9AC,'size':812,'pad':0,'label':"nodeCallBack__FP8J3DJointi",'name':"nodeCallBack__FP8J3DJointi",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806FFCD8,'size':172,'pad':0,'label':"anm_init__FP10e_kr_classifUcf",'name':"anm_init__FP10e_kr_classifUcf",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[8,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806FFD84,'size':44,'pad':0,'label':"kuti_open__FP10e_kr_classsUl",'name':"kuti_open__FP10e_kr_classsUl",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806FFDB0,'size':224,'pad':0,'label':"e_kr_player_bg_check__FP10e_kr_class",'name':"e_kr_player_bg_check__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806FFE90,'size':196,'pad':0,'label':"e_kr_setpos_bg_check__FP10e_kr_class",'name':"e_kr_setpos_bg_check__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x806FFF54,'size':436,'pad':0,'label':"e_kr_player_view_check__FP10e_kr_class",'name':"e_kr_player_view_check__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80700108,'size':108,'pad':0,'label':"pl_horse_check__FP10e_kr_class",'name':"pl_horse_check__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80700174,'size':144,'pad':0,'label':"daE_Kr_shadowDraw__FP10e_kr_class",'name':"daE_Kr_shadowDraw__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80700204,'size':328,'pad':0,'label':"daE_Kr_Draw__FP10e_kr_class",'name':"daE_Kr_Draw__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8070034C,'size':572,'pad':0,'label':"e_kr_pos_move__FP10e_kr_class",'name':"e_kr_pos_move__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[6,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80700588,'size':176,'pad':0,'label':"coach_path_check__FP10e_kr_class",'name':"coach_path_check__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80700638,'size':1216,'pad':0,'label':"e_kr_path_move__FP10e_kr_class",'name':"e_kr_path_move__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80700AF8,'size':836,'pad':0,'label':"e_kr_auto_move__FP10e_kr_class",'name':"e_kr_auto_move__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80700E3C,'size':3768,'pad':0,'label':"e_kr_atack_move__FP10e_kr_class",'name':"e_kr_atack_move__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80701CF4,'size':2244,'pad':0,'label':"e_kr_horse_move__FP10e_kr_class",'name':"e_kr_horse_move__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807025B8,'size':1616,'pad':0,'label':"e_kr_wait_move__FP10e_kr_class",'name':"e_kr_wait_move__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80702C08,'size':1540,'pad':0,'label':"e_kr_su_wait_move__FP10e_kr_class",'name':"e_kr_su_wait_move__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8070320C,'size':144,'pad':0,'label':"body_smoke_set__FP10e_kr_class",'name':"body_smoke_set__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8070329C,'size':240,'pad':0,'label':"wing_smoke_set__FP10e_kr_class",'name':"wing_smoke_set__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8070338C,'size':1540,'pad':0,'label':"e_kr_damage__FP10e_kr_class",'name':"e_kr_damage__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80703990,'size':996,'pad':0,'label':"damage_check__FP10e_kr_class",'name':"damage_check__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80703D74,'size':828,'pad':0,'label':"ground_angle_set__FP10e_kr_class",'name':"ground_angle_set__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807040B0,'size':344,'pad':0,'label':"action__FP10e_kr_class",'name':"action__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80704208,'size':2388,'pad':0,'label':"daE_Kr_Execute__FP10e_kr_class",'name':"daE_Kr_Execute__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80704B5C,'size':8,'pad':0,'label':"daE_Kr_IsDelete__FP10e_kr_class",'name':"daE_Kr_IsDelete__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80704B64,'size':80,'pad':0,'label':"daE_Kr_Delete__FP10e_kr_class",'name':"daE_Kr_Delete__FP10e_kr_class",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80704BB4,'size':316,'pad':0,'label':"useHeapInit__FP10fopAc_ac_c",'name':"useHeapInit__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80704CF0,'size':788,'pad':0,'label':"daE_Kr_Create__FP10fopAc_ac_c",'name':"daE_Kr_Create__FP10fopAc_ac_c",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80705004,'size':540,'pad':0,'label':"__ct__10e_kr_classFv",'name':"__ct__10e_kr_classFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80705220,'size':4,'pad':0,'label':"__ct__4cXyzFv",'name':"__ct__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReturnFunction"},
	{'addr':0x80705224,'size':72,'pad':0,'label':"__dt__8cM3dGSphFv",'name':"__dt__8cM3dGSphFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8070526C,'size':72,'pad':0,'label':"__dt__8cM3dGAabFv",'name':"__dt__8cM3dGAabFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807052B4,'size':92,'pad':0,'label':"__dt__10dCcD_GSttsFv",'name':"__dt__10dCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80705310,'size':112,'pad':0,'label':"__dt__12dBgS_ObjAcchFv",'name':"__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80705380,'size':112,'pad':0,'label':"__dt__12dBgS_AcchCirFv",'name':"__dt__12dBgS_AcchCirFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807053F0,'size':72,'pad':0,'label':"__dt__10cCcD_GSttsFv",'name':"__dt__10cCcD_GSttsFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80705438,'size':316,'pad':0,'label':"__sinit_d_a_e_kr_cpp",'name':"__sinit_d_a_e_kr_cpp",'lib':-1,'tu':3,'section':0,'class_template':None,'static':False,'is_reachable':False,'r':[0,1,0],'sh':[0,0,0],'type':"SInitFunction"},
	{'addr':0x80705574,'size':108,'pad':0,'label':"__dt__9e_krHIO_cFv",'name':"__dt__9e_krHIO_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x807055E0,'size':92,'pad':0,'label':"__dt__18fOpAcm_HIO_entry_cFv",'name':"__dt__18fOpAcm_HIO_entry_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8070563C,'size':72,'pad':0,'label':"__dt__14mDoHIO_entry_cFv",'name':"__dt__14mDoHIO_entry_cFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80705684,'size':8,'pad':0,'label':"func_80705684",'name':"@36@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x8070568C,'size':8,'pad':0,'label':"func_8070568C",'name':"@20@__dt__12dBgS_ObjAcchFv",'lib':-1,'tu':3,'section':0,'class_template':None,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80705694,'size':1044,'pad':0,'label':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'name':"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80705AA8,'size':60,'pad':0,'label':"__dt__4cXyzFv",'name':"__dt__4cXyzFv",'lib':-1,'tu':3,'section':0,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ASMFunction"},
	{'addr':0x80705AE4,'size':8,'pad':0,'label':"_ctors",'name':"_ctors",'lib':-1,'tu':1,'section':1,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80705AEC,'size':12,'pad':0,'label':"_dtors",'name':"_dtors",'lib':-1,'tu':2,'section':2,'class_template':False,'static':False,'is_reachable':True,'r':[0,1,0],'sh':[0,0,0],'type':"LinkerGenerated"},
	{'addr':0x80705AF8,'size':4,'pad':0,'label':"lit_3903",'name':"@3903",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':True,'r':[19,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705AFC,'size':4,'pad':0,'label':"lit_3904",'name':"@3904",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[3,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80705B00,'size':4,'pad':4,'label':"lit_3905",'name':"@3905",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B08,'size':8,'pad':0,'label':"lit_3906",'name':"@3906",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80705B10,'size':8,'pad':0,'label':"lit_3907",'name':"@3907",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80705B18,'size':8,'pad':0,'label':"lit_3908",'name':"@3908",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80705B20,'size':4,'pad':0,'label':"lit_3909",'name':"@3909",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B24,'size':4,'pad':0,'label':"lit_4043",'name':"@4043",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B28,'size':8,'pad':0,'label':"lit_4155",'name':"@4155",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80705B30,'size':4,'pad':0,'label':"lit_4167",'name':"@4167",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B34,'size':4,'pad':0,'label':"lit_4192",'name':"@4192",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B38,'size':4,'pad':0,'label':"lit_4193",'name':"@4193",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B3C,'size':4,'pad':0,'label':"lit_4249",'name':"@4249",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B40,'size':4,'pad':0,'label':"lit_4250",'name':"@4250",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B44,'size':4,'pad':0,'label':"lit_4251",'name':"@4251",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B48,'size':4,'pad':0,'label':"lit_4269",'name':"@4269",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B4C,'size':4,'pad':0,'label':"lit_4270",'name':"@4270",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B50,'size':4,'pad':0,'label':"lit_4271",'name':"@4271",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B54,'size':4,'pad':0,'label':"lit_4289",'name':"@4289",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B58,'size':4,'pad':0,'label':"lit_4420",'name':"@4420",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B5C,'size':4,'pad':0,'label':"lit_4421",'name':"@4421",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B60,'size':4,'pad':0,'label':"lit_4422",'name':"@4422",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80705B64,'size':4,'pad':0,'label':"lit_4423",'name':"@4423",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B68,'size':4,'pad':0,'label':"lit_4424",'name':"@4424",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B6C,'size':4,'pad':0,'label':"lit_4425",'name':"@4425",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B70,'size':4,'pad':0,'label':"lit_4426",'name':"@4426",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B74,'size':4,'pad':0,'label':"lit_4500",'name':"@4500",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B78,'size':4,'pad':0,'label':"lit_4501",'name':"@4501",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B7C,'size':4,'pad':0,'label':"lit_4502",'name':"@4502",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B80,'size':4,'pad':0,'label':"lit_4503",'name':"@4503",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B84,'size':4,'pad':0,'label':"lit_4827",'name':"@4827",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B88,'size':4,'pad':0,'label':"lit_4828",'name':"@4828",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B8C,'size':4,'pad':0,'label':"lit_4829",'name':"@4829",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B90,'size':4,'pad':0,'label':"lit_4830",'name':"@4830",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B94,'size':4,'pad':0,'label':"lit_4831",'name':"@4831",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B98,'size':4,'pad':0,'label':"lit_4832",'name':"@4832",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705B9C,'size':4,'pad':0,'label':"lit_4833",'name':"@4833",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BA0,'size':4,'pad':0,'label':"lit_4834",'name':"@4834",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BA4,'size':4,'pad':0,'label':"lit_4835",'name':"@4835",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BA8,'size':4,'pad':0,'label':"lit_4836",'name':"@4836",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BAC,'size':4,'pad':0,'label':"lit_4837",'name':"@4837",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BB0,'size':4,'pad':0,'label':"lit_4838",'name':"@4838",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BB4,'size':4,'pad':0,'label':"lit_4839",'name':"@4839",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BB8,'size':4,'pad':4,'label':"lit_4840",'name':"@4840",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BC0,'size':8,'pad':0,'label':"lit_4843",'name':"@4843",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80705BC8,'size':4,'pad':0,'label':"lit_5003",'name':"@5003",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BCC,'size':4,'pad':0,'label':"lit_5004",'name':"@5004",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BD0,'size':4,'pad':0,'label':"lit_5005",'name':"@5005",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BD4,'size':4,'pad':0,'label':"lit_5006",'name':"@5006",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BD8,'size':4,'pad':0,'label':"lit_5007",'name':"@5007",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BDC,'size':4,'pad':0,'label':"lit_5008",'name':"@5008",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BE0,'size':4,'pad':0,'label':"lit_5009",'name':"@5009",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BE4,'size':4,'pad':0,'label':"lit_5010",'name':"@5010",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BE8,'size':4,'pad':0,'label':"lit_5111",'name':"@5111",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BEC,'size':4,'pad':0,'label':"lit_5112",'name':"@5112",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BF0,'size':4,'pad':0,'label':"lit_5113",'name':"@5113",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BF4,'size':4,'pad':0,'label':"lit_5267",'name':"@5267",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BF8,'size':4,'pad':0,'label':"lit_5342",'name':"@5342",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705BFC,'size':4,'pad':0,'label':"lit_5343",'name':"@5343",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C00,'size':4,'pad':0,'label':"lit_5344",'name':"@5344",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C04,'size':4,'pad':0,'label':"lit_5345",'name':"@5345",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C08,'size':4,'pad':0,'label':"lit_5346",'name':"@5346",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C0C,'size':4,'pad':0,'label':"lit_5493",'name':"@5493",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C10,'size':4,'pad':0,'label':"lit_5494",'name':"@5494",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C14,'size':4,'pad':0,'label':"lit_5527",'name':"@5527",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C18,'size':4,'pad':0,'label':"lit_5725",'name':"@5725",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C1C,'size':4,'pad':0,'label':"lit_5726",'name':"@5726",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C20,'size':4,'pad':0,'label':"lit_5727",'name':"@5727",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C24,'size':4,'pad':0,'label':"lit_5728",'name':"@5728",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C28,'size':4,'pad':0,'label':"lit_5729",'name':"@5729",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C2C,'size':4,'pad':0,'label':"lit_5872",'name':"@5872",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C30,'size':4,'pad':0,'label':"lit_5873",'name':"@5873",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C34,'size':4,'pad':0,'label':"lit_6045",'name':"@6045",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C38,'size':4,'pad':0,'label':"lit_6046",'name':"@6046",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C3C,'size':4,'pad':0,'label':"lit_6047",'name':"@6047",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C40,'size':4,'pad':0,'label':"lit_6048",'name':"@6048",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C44,'size':4,'pad':0,'label':"lit_6049",'name':"@6049",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C48,'size':4,'pad':0,'label':"lit_6050",'name':"@6050",'lib':-1,'tu':3,'section':4,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"FloatingPoint"},
	{'addr':0x80705C4C,'size':5,'pad':0,'label':"d_a_e_kr__stringBase0",'name':"@stringBase0",'lib':-1,'tu':3,'section':4,'class_template':False,'static':False,'is_reachable':False,'r':[4,0,0],'sh':[0,0,0],'type':"StringBase"},
	{'addr':0x80705C54,'size':12,'pad':0,'label':"cNullVec__6Z2Calc",'name':"cNullVec__6Z2Calc",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80705C60,'size':4,'pad':16,'label':"lit_1787",'name':"@1787",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"Integer"},
	{'addr':0x80705C74,'size':8,'pad':0,'label':"e_prim",'name':"e_prim$3782",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80705C7C,'size':8,'pad':0,'label':"e_env",'name':"e_env$3783",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80705C84,'size':6,'pad':2,'label':"eff_id",'name':"eff_id$3791",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80705C8C,'size':144,'pad':0,'label':"lit_4842",'name':"@4842",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80705D1C,'size':88,'pad':0,'label':"lit_5114",'name':"@5114",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80705D74,'size':88,'pad':0,'label':"lit_5210",'name':"@5210",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80705DCC,'size':16,'pad':0,'label':"wing_j",'name':"wing_j$5235",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80705DDC,'size':44,'pad':0,'label':"lit_5528",'name':"@5528",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80705E08,'size':64,'pad':0,'label':"at_sph_src",'name':"at_sph_src$5807",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80705E48,'size':64,'pad':0,'label':"head_tg_sph_src",'name':"head_tg_sph_src$5808",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80705E88,'size':64,'pad':0,'label':"body_tg_sph_src",'name':"body_tg_sph_src$5809",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80705EC8,'size':64,'pad':0,'label':"body_co_sph_src",'name':"body_co_sph_src$5810",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[0,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80705F08,'size':32,'pad':0,'label':"l_daE_Kr_Method",'name':"l_daE_Kr_Method",'lib':-1,'tu':3,'section':5,'class_template':False,'static':True,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80705F28,'size':48,'pad':0,'label':"g_profile_E_KR",'name':"g_profile_E_KR",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[0,0,1],'sh':[0,0,0],'type':"ReferenceArray"},
	{'addr':0x80705F58,'size':12,'pad':0,'label':"__vt__12dBgS_AcchCir",'name':"__vt__12dBgS_AcchCir",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80705F64,'size':12,'pad':0,'label':"__vt__10cCcD_GStts",'name':"__vt__10cCcD_GStts",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80705F70,'size':12,'pad':0,'label':"__vt__10dCcD_GStts",'name':"__vt__10dCcD_GStts",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[1,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80705F7C,'size':12,'pad':0,'label':"__vt__8cM3dGSph",'name':"__vt__8cM3dGSph",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80705F88,'size':12,'pad':0,'label':"__vt__8cM3dGAab",'name':"__vt__8cM3dGAab",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80705F94,'size':36,'pad':0,'label':"__vt__12dBgS_ObjAcch",'name':"__vt__12dBgS_ObjAcch",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':False,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80705FB8,'size':12,'pad':0,'label':"__vt__9e_krHIO_c",'name':"__vt__9e_krHIO_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80705FC4,'size':12,'pad':0,'label':"__vt__18fOpAcm_HIO_entry_c",'name':"__vt__18fOpAcm_HIO_entry_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[3,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80705FD0,'size':12,'pad':0,'label':"__vt__14mDoHIO_entry_c",'name':"__vt__14mDoHIO_entry_c",'lib':-1,'tu':3,'section':5,'class_template':False,'static':False,'is_reachable':True,'r':[4,0,0],'sh':[0,0,0],'type':"VirtualTable"},
	{'addr':0x80705FE0,'size':4,'pad':4,'label':"__global_destructor_chain",'name':"__global_destructor_chain",'lib':-1,'tu':2,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[2,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80705FE8,'size':12,'pad':0,'label':"lit_3921",'name':"@3921",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[1,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
	{'addr':0x80705FF4,'size':124,'pad':0,'label':"l_e_krHIO",'name':"l_e_krHIO",'lib':-1,'tu':3,'section':3,'class_template':False,'static':True,'is_reachable':True,'r':[9,0,0],'sh':[0,0,0],'type':"ArbitraryData"},
]

# Names
SYMBOL_NAMES = {
	"_prolog":0,
	"_epilog":1,
	"_unresolved":2,
	"__register_global_object":3,
	"__destroy_global_chain":4,
	"nodeCallBack__FP8J3DJointi":5,
	"anm_init__FP10e_kr_classifUcf":6,
	"kuti_open__FP10e_kr_classsUl":7,
	"e_kr_player_bg_check__FP10e_kr_class":8,
	"e_kr_setpos_bg_check__FP10e_kr_class":9,
	"e_kr_player_view_check__FP10e_kr_class":10,
	"pl_horse_check__FP10e_kr_class":11,
	"daE_Kr_shadowDraw__FP10e_kr_class":12,
	"daE_Kr_Draw__FP10e_kr_class":13,
	"e_kr_pos_move__FP10e_kr_class":14,
	"coach_path_check__FP10e_kr_class":15,
	"e_kr_path_move__FP10e_kr_class":16,
	"e_kr_auto_move__FP10e_kr_class":17,
	"e_kr_atack_move__FP10e_kr_class":18,
	"e_kr_horse_move__FP10e_kr_class":19,
	"e_kr_wait_move__FP10e_kr_class":20,
	"e_kr_su_wait_move__FP10e_kr_class":21,
	"body_smoke_set__FP10e_kr_class":22,
	"wing_smoke_set__FP10e_kr_class":23,
	"e_kr_damage__FP10e_kr_class":24,
	"damage_check__FP10e_kr_class":25,
	"ground_angle_set__FP10e_kr_class":26,
	"action__FP10e_kr_class":27,
	"daE_Kr_Execute__FP10e_kr_class":28,
	"daE_Kr_IsDelete__FP10e_kr_class":29,
	"daE_Kr_Delete__FP10e_kr_class":30,
	"useHeapInit__FP10fopAc_ac_c":31,
	"daE_Kr_Create__FP10fopAc_ac_c":32,
	"__ct__10e_kr_classFv":33,
	"__ct__4cXyzFv":34,
	"__dt__8cM3dGSphFv":35,
	"__dt__8cM3dGAabFv":36,
	"__dt__10dCcD_GSttsFv":37,
	"__dt__12dBgS_ObjAcchFv":38,
	"__dt__12dBgS_AcchCirFv":39,
	"__dt__10cCcD_GSttsFv":40,
	"__sinit_d_a_e_kr_cpp":41,
	"__dt__9e_krHIO_cFv":42,
	"__dt__18fOpAcm_HIO_entry_cFv":43,
	"__dt__14mDoHIO_entry_cFv":44,
	"func_80705684":45,
	"func_8070568C":46,
	"setMidnaBindEffect__FP13fopEn_enemy_cP15Z2CreatureEnemyP4cXyzP4cXyz":47,
	"__dt__4cXyzFv":48,
	"_ctors":49,
	"_dtors":50,
	"lit_3903":51,
	"lit_3904":52,
	"lit_3905":53,
	"lit_3906":54,
	"lit_3907":55,
	"lit_3908":56,
	"lit_3909":57,
	"lit_4043":58,
	"lit_4155":59,
	"lit_4167":60,
	"lit_4192":61,
	"lit_4193":62,
	"lit_4249":63,
	"lit_4250":64,
	"lit_4251":65,
	"lit_4269":66,
	"lit_4270":67,
	"lit_4271":68,
	"lit_4289":69,
	"lit_4420":70,
	"lit_4421":71,
	"lit_4422":72,
	"lit_4423":73,
	"lit_4424":74,
	"lit_4425":75,
	"lit_4426":76,
	"lit_4500":77,
	"lit_4501":78,
	"lit_4502":79,
	"lit_4503":80,
	"lit_4827":81,
	"lit_4828":82,
	"lit_4829":83,
	"lit_4830":84,
	"lit_4831":85,
	"lit_4832":86,
	"lit_4833":87,
	"lit_4834":88,
	"lit_4835":89,
	"lit_4836":90,
	"lit_4837":91,
	"lit_4838":92,
	"lit_4839":93,
	"lit_4840":94,
	"lit_4843":95,
	"lit_5003":96,
	"lit_5004":97,
	"lit_5005":98,
	"lit_5006":99,
	"lit_5007":100,
	"lit_5008":101,
	"lit_5009":102,
	"lit_5010":103,
	"lit_5111":104,
	"lit_5112":105,
	"lit_5113":106,
	"lit_5267":107,
	"lit_5342":108,
	"lit_5343":109,
	"lit_5344":110,
	"lit_5345":111,
	"lit_5346":112,
	"lit_5493":113,
	"lit_5494":114,
	"lit_5527":115,
	"lit_5725":116,
	"lit_5726":117,
	"lit_5727":118,
	"lit_5728":119,
	"lit_5729":120,
	"lit_5872":121,
	"lit_5873":122,
	"lit_6045":123,
	"lit_6046":124,
	"lit_6047":125,
	"lit_6048":126,
	"lit_6049":127,
	"lit_6050":128,
	"d_a_e_kr__stringBase0":129,
	"cNullVec__6Z2Calc":130,
	"lit_1787":131,
	"e_prim":132,
	"e_env":133,
	"eff_id":134,
	"lit_4842":135,
	"lit_5114":136,
	"lit_5210":137,
	"wing_j":138,
	"lit_5528":139,
	"at_sph_src":140,
	"head_tg_sph_src":141,
	"body_tg_sph_src":142,
	"body_co_sph_src":143,
	"l_daE_Kr_Method":144,
	"g_profile_E_KR":145,
	"__vt__12dBgS_AcchCir":146,
	"__vt__10cCcD_GStts":147,
	"__vt__10dCcD_GStts":148,
	"__vt__8cM3dGSph":149,
	"__vt__8cM3dGAab":150,
	"__vt__12dBgS_ObjAcch":151,
	"__vt__9e_krHIO_c":152,
	"__vt__18fOpAcm_HIO_entry_c":153,
	"__vt__14mDoHIO_entry_c":154,
	"__global_destructor_chain":155,
	"lit_3921":156,
	"l_e_krHIO":157,
}

