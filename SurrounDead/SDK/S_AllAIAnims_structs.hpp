#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4C8 (0x4C8 - 0x0)
// UserDefinedStruct S_AllAIAnims.S_AllAIAnims
struct FS_AllAIAnims
{
public:
	struct FS_AIAnims                            DefaultAnims_2_AAFC74F647141E0EA990F8AD4A07A06F;   // 0x0(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         UseFleeAnims_6_6401D3DA450796B4F43324B5076BF174;   // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E68[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AIAnims                            FleeAnims_9_6A24C9DD4AF334FD56577BA89ACDE054;      // 0x58(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         UseSearchAnims_12_9A0183844E7C9748EA853985A60949DC; // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E70[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AIAnims                            SearchAnims_15_5D912126412EC82FA79EF4AD3F4CE841;   // 0xB0(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         UseWayPointAnims_31_B4ADC2484EF25294E2A33EBDD0903F3E; // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E78[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AIAnims                            WayPointAnims_17_87547E0D4E2C118EC39AF2887A7D8963; // 0x108(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         UseAIInteractionAnims_33_4BA3D3E0437D313E41FE6CA148A97B84; // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E84[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AIAnims                            AIInteractionAnims_20_CA355FCB472CDF0ABEED2DA0315D160B; // 0x160(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         UseRangeAttackAnims_35_49533321481D729F0BD6BFADA5787C88; // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E8C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AIAnims                            RangeAttackAnims_22_43FF593241EF9D0B52213188CE23B3DA; // 0x1B8(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         UseMeleeAttackAnims_37_003AC93944BF7DD771924290DF9C0B41; // 0x208(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E98[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AIAnims                            MeleeAttackAnims_24_FD64A46A47779E99D31250B948CB5612; // 0x210(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         UseInteractionPointAnims_47_B14F41E442A10F2C5D2B92869B895192; // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EA2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AIAnims                            InteractionPointAnims_26_904CB1F5433EE34BDC6D9298928E707E; // 0x268(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         UseRoamAnims_41_08F47BC14976969D2E194187CFB024DF;  // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EB0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AIAnims                            RoamAnims_28_304CC7D648660764DC71BDB5759561C9;     // 0x2C0(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         UseStillAnims_43_8C1E19EE461B4883EB1EAB9473E0B602; // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EBA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AIAnims                            StillAnims_46_24B2969F4D92B001C93A24B8F632F84E;    // 0x318(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         UseFollowAnims_49_9BAE982E40DC3CE59C9A849B11909212; // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EC3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AIAnims                            FollowAnims_52_35FB9CFA4C8770B888CEE391BAE27954;   // 0x370(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         UseFaceDirection_54_874051E24A9BD49A702A60B73B463416; // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ECE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AIAnims                            FaceDirection_57_B02835C74FDCDF62A63BA6B3B1D0B486; // 0x3C8(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         UseMeleeCombatStance_68_AE60AF89442226F11C91E69315950FB5; // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ED6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AIAnims                            MeleeCombatStanceAnims_66_66A42F7D4EA1CCDDAB3265B97A9F2068; // 0x420(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         UseRangeCombatStance_65_69B854734B5D61556E89E1A7E29FFDEC; // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EDC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AIAnims                            RangeCombatStanceAnims_67_2CBEA0624EA23F3DCD1F8581006F9807; // 0x478(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

}


