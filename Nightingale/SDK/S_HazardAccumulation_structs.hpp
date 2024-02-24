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

// 0x88 (0x88 - 0x0)
// UserDefinedStruct S_HazardAccumulation.S_HazardAccumulation
struct FS_HazardAccumulation
{
public:
	class FName                                  HazardKey_2_B3973D1D45018AEDE6760BAF3E8B9733;      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Increment_5_C521640946F5F4299CF92B832AC1E946;      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAccumulationHandle                   HazardAccumulationHandle_8_5ECC0F9448915FF57969E3A82F1B901B; // 0xC(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                         Active_10_A31EEAE64916AFFBF35B6A8703592BB9;        // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           FloatCurve_13_160DCB904698AC68F8CD4C9BED3D544A;    // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UStatusEffectDataAsset*>        StatusEffects_18_AA17F1BA4DB92F1BB9627EB7217B6685; // 0x20(0x10)(Edit, BlueprintVisible)
	bool                                         Swimming_28_B8ABA1C54973578EF079E0875472C580;      // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Wading_27_2E62B78C4CE288B0A017AA8DEF3A8326;        // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20DE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       StatusEffectDuration_32_A53B982244CD2216310AF6AED9062C9C; // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AccumulationTIme_35_FD48F47F41C60818FEC7DFACD1E15025; // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 HazardTag_41_FA0A1D784327FB7BD015348DF91ADEA9;     // 0x48(0x20)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                 RealmTag_40_122397814FD51DA2D91A4E856A4FE06E;      // 0x68(0x20)(Edit, BlueprintVisible)
};

}


