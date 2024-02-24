#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x68 - 0x40)
// BlueprintGeneratedClass EEC_DebugLoadout.EEC_DebugLoadout_C
class UEEC_DebugLoadout_C : public UNWXGameplayEffectExecutionCalculation
{
public:
	struct FPlayerLoadoutDataReference           DebugLoadout;                                      // 0x40(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEEC_DebugLoadout_C* GetDefaultObj();

	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput, class UBP_RealmEffectComponent_C* LEffectComponent, class UAbilitySystemComponent* LAbilitySystem, class UAbilitySystemComponent* CallFunc_GetTargetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, class UBP_RealmEffectComponent_C* CallFunc_GetComponentByClass_ReturnValue);
};

}


