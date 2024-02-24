#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x50 - 0x30)
// BlueprintGeneratedClass Init_HealthCalc_IO.Init_HealthCalc_IO_C
class UInit_HealthCalc_IO_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 IO_HealthScaler;                                   // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClass*                                Init_ChaosHealthScalar;                            // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UInit_HealthCalc_IO_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, const struct FDataTableValueHandle& IO_HealthBase, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_EvaluateAttributeInitializer_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_EvaluateBalanceFormula_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue3);
};

}


