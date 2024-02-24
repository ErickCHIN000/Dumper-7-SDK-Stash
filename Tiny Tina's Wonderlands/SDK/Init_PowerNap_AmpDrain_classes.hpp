#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x60 - 0x30)
// BlueprintGeneratedClass Init_PowerNap_AmpDrain.Init_PowerNap_AmpDrain_C
class UInit_PowerNap_AmpDrain_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 AmpDrainMaxHandle;                                 // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 AmpDrainMinHandle;                                 // 0x48(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_PowerNap_AmpDrain_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, class AShield* K2Node_DynamicCast_AsShield, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, class UAbility_PowerNap_C* K2Node_DynamicCast_AsAbility_Power_Nap, bool K2Node_DynamicCast_bSuccess1, float CallFunc_Lerp_ReturnValue);
};

}


