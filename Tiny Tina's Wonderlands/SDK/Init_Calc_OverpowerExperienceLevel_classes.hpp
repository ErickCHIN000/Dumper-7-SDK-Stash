#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0xA8 - 0x30)
// BlueprintGeneratedClass Init_Calc_OverpowerExperienceLevel.Init_Calc_OverpowerExperienceLevel_C
class UInit_Calc_OverpowerExperienceLevel_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 LevelEquivalency_Tier0;                            // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 LevelEquivalency_Tier1;                            // 0x48(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 LevelEquivalency_Tier2;                            // 0x60(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 LevelEquivalency_Tier3;                            // 0x78(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 LevelEquivalency_Tier4;                            // 0x90(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_Calc_OverpowerExperienceLevel_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, int32 Temp_int_Variable, float CallFunc_GetValueOfAttribute_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FDataTableValueHandle& K2Node_Select_Default, float CallFunc_GetDataTableValueFromHandle_ReturnValue);
};

}


