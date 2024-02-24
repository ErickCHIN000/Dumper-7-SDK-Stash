#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x2BC - 0x2B8)
// BlueprintGeneratedClass ShieldAug_Counterfeint.ShieldAug_Counterfeint_C
class UShieldAug_Counterfeint_C : public UShieldAugment_Damage
{
public:
	float                                        UntargetableDuration;                              // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShieldAug_Counterfeint_C* GetDefaultObj();

	void K2_TriggerEffect(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData& StackData, class AOakCharacter* Player, bool CallFunc_IsValid_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UAbility_Counterfeint_C* K2Node_DynamicCast_AsAbility_Counterfeint, bool K2Node_DynamicCast_bSuccess1);
	void K2_NativeDelayCallback(class AShield* Shield, struct FAugmentData& StackData, class FName DelayName, class AActor* CallFunc_GetOwner_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue);
};

}


