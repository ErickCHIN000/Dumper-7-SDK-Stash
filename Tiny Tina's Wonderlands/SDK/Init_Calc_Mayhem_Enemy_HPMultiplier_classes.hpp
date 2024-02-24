#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x60 - 0x30)
// BlueprintGeneratedClass Init_Calc_Mayhem_Enemy_HPMultiplier.Init_Calc_Mayhem_Enemy_HPMultiplier_C
class UInit_Calc_Mayhem_Enemy_HPMultiplier_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 Health_ExponentialGrowth;                          // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 Health_FlatBonusPerLevel;                          // 0x48(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_Calc_Mayhem_Enemy_HPMultiplier_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
};

}


