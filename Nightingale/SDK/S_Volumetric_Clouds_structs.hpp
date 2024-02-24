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

// 0x100 (0x100 - 0x0)
// UserDefinedStruct S_Volumetric_Clouds.S_Volumetric_Clouds
struct FS_Volumetric_Clouds
{
public:
	double                                       CloudCoverageMinimum_14_2439BD3147083FF5548166B4861BB762; // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CloudCoverageMaximum_94_005BCF4A45599235F259B49FE777A83D; // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BottomAltitude_33_E101648D4D6E863FDD1CBDA96B224284; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LayerHeightScale_104_6E90CCB34E8DC4AABA0F07895AC3AE1F; // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BaseCloudsScale_32_7B9570964075BAB02BFCA58470E54A46; // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ThreeDNoiseScale_78_23CDAFA5405D70F89E8CECB7BD6226D8; // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HighFrequencyNoiseAmount_80_97B82F0545FB90130550E3B5E8E39892; // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DistortHighFrequencyNoise_20_389A71C84F6AE30DCBA5EE8DB38CCB43; // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ExticntionScaleTop_24_1190461847DBF0AA7A180882A7617BB3; // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ExticntionScaleBottom_44_69FEEF854AE7EF82EFD78399EB77C6AA; // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VolumeCloudScale_36_FAB389C2431485B0FC59F4A679686187; // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ShiftCurve_91_7CA8BD4F41F25A7EB30F39B551350A7E;    // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinimumErosion_42_C566CD2A410A60D8313CAAA5AFF712FD; // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BaseFloorVariation_86_AA4269D34923CC97BE291781EBB87542; // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OvercastFloorVariation_88_EA44DA8C4C0035197CB52985DC43296A; // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FloorVariationLuminanceScale_89_E298A21F436F318EB311E3AB6C1C9C11; // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ViewSampleScaleDay_105_AE80255545890D0778AD38AC1B1F8581; // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ViewSampleScaleNight_106_C428FCB2431DC4F5BFF95FBDD355F57F; // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ShadowSampleScale_16_C3FBACCF4DAB48F9D775A380621A53B2; // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ShadowTracingDistance_72_A752D4ED439D69C86D8460BBDFCEE5B0; // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MacroVariation_40_505458B843F50A7B88DF458E232EF15D; // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENoiseType                        VolumetricCloudNoiseType_97_A0B5B49B45C6C3685303A1AB29E7C160; // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TwoLayers_27_229624534ECA534EE90AD48B1233B351;     // 0xA9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D5E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Layer2CoverageScale_50_528B5B3F43BA8126C9C068A78F24082A; // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Layer2ExtinctionScale_52_E770E4094843FE95FAE26094AEBB5F66; // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Layer2CloudScale_47_213A377747FE55E164A1CCABA50EA8C1; // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Layer2MipOffset_54_0413F24F4373FB516DC6059ADB416A99; // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DistanceBetweenLayers_56_CCC9A5E749F883D90E9A9B963A9CEB88; // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRealmPlacementRequirement>    Realm_Placement_Requirement_6_71CD1E964CB9C1672F5661B5BC5654CD; // 0xE0(0x10)(Edit, BlueprintVisible)
	int32                                        Day_Exposure_118_6630A52E4E8BFBCE46B6AE8862C34784; // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Night_Exposure_119_592635C247D5912837823AA404212457; // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DD_Exposure_113_03A59D7349BBCFF5A64BF4892DD07995;  // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ExposureCurve_122_1931599042C6071B90221EAEAAEE414E; // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


