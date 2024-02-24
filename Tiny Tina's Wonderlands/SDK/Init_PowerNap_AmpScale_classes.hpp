#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x60 - 0x30)
// BlueprintGeneratedClass Init_PowerNap_AmpScale.Init_PowerNap_AmpScale_C
class UInit_PowerNap_AmpScale_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 AmpScaleMinHandle;                                 // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 AmpScaleMaxHandle;                                 // 0x48(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_PowerNap_AmpScale_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, class AWeapon* CallFunc_GetWeapon_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UAbility_PowerNap_C* K2Node_DynamicCast_AsAbility_Power_Nap, bool K2Node_DynamicCast_bSuccess1, float CallFunc_Lerp_ReturnValue);
};

}


