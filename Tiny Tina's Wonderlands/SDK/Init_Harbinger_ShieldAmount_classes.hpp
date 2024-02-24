#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x60 - 0x30)
// BlueprintGeneratedClass Init_Harbinger_ShieldAmount.Init_Harbinger_ShieldAmount_C
class UInit_Harbinger_ShieldAmount_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 ShieldRegenerationHandle;                          // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 ShieldRegenerationDurationHandle;                  // 0x48(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_Harbinger_ShieldAmount_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, float ShieldRegenerationDuration, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue);
};

}


