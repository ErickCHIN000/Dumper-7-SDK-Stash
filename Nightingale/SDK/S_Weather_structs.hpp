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

// 0x70 (0x70 - 0x0)
// UserDefinedStruct S_Weather.S_Weather
struct FS_Weather
{
public:
	double                                       WindSpeed_2_53763270463B7305E80F68903E2D492F;      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WindDirection_5_2FC210FB456B57178320F6B309BC76DF;  // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PrecipitationDelta_8_BCB1AAA740B8819E466ECBAE2C316873; // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PrecipitationBase_10_F1B11D9446D7EB122CCFBEA843CBE387; // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PrecipitationFrequency_12_36DD41D543A5291B5BF29689459EC9D8; // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PrecipitationAccumilationRate_14_05B3589B443CED7C513779A1CC6F5074; // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStormProfile                         StormProfile_17_F00C7D10400A8F06107C0DAC9E5DB9FC;  // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor)
	uint8                                        Pad_42E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LightningThreshold_22_00C736BE40561C906639A685C6A0058F; // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LightningRampUpRange_25_765D41F64B13616F39242C986635F8B3; // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRealmPlacementRequirement>    Realm_Placement_Requirement_29_41E50472462BE0BBC92792BA440E542E; // 0x60(0x10)(Edit, BlueprintVisible)
};

}


