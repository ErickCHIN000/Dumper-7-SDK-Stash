#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_Ranger_15_DamageResistance.Init_Ranger_15_DamageResistance_C
class UInit_Ranger_15_DamageResistance_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 DamageResistanceHandle;                            // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_Ranger_15_DamageResistance_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, float DamageResistance, float CurrentStackAmount, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue);
};

}


