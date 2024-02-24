#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_DamageCalc_IO.Init_DamageCalc_IO_C
class UInit_DamageCalc_IO_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 IO_DamageScaler;                                   // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_DamageCalc_IO_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, const struct FDataTableValueHandle& IO_DamageBase, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_EvaluateBalanceFormula_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2);
};

}


