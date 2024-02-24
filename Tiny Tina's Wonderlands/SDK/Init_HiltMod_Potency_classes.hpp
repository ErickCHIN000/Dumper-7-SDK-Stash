#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_HiltMod_Potency.Init_HiltMod_Potency_C
class UInit_HiltMod_Potency_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 HiltModBasePotencyHandle;                          // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_HiltMod_Potency_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, float BasePotency, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
};

}


