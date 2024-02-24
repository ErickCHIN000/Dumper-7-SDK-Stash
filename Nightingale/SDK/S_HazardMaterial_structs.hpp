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

// 0x78 (0x78 - 0x0)
// UserDefinedStruct S_HazardMaterial.S_HazardMaterial
struct FS_HazardMaterial
{
public:
	class FName                                  HazardName_20_C53BA55C4DEC9ABD1D052EADF59B054D;    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStatusEffectDataAsset*>        StatusEffect_29_A3BFC5934844E1787081F59D9B1D8900;  // 0x8(0x10)(Edit, BlueprintVisible)
	class UAccumulationDataAsset*                AccumulationDA_11_D95C859747517BC3372F6CB963DFE7FA; // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           AccumulationCurve_28_CACC4A85457F1DAF1EF90280886D1FDA; // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 HazardTag_25_3AC6C55C4924B3CC6066369117D9D93F;     // 0x28(0x20)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                 Realm_38_A7AE83B546BB8EEF02E12C91F088924A;         // 0x48(0x20)(Edit, BlueprintVisible)
	bool                                         Swimming_33_6B454F984D10DA6C7DD6D28E9E2EE4B8;      // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Wading_36_BDE2F8E9493309352C8350B5AEABC9F7;        // 0x69(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F56[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       StatusEffectDuration_42_16F52A7542ED4120A5F60FA086DF6EDB; // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


