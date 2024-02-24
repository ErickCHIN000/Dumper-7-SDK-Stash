#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass EEC_ApplyRandomCurse.EEC_ApplyRandomCurse_C
class UEEC_ApplyRandomCurse_C : public UNWXGameplayEffectExecutionCalculation
{
public:

	static class UClass* StaticClass();
	static class UEEC_ApplyRandomCurse_C* GetDefaultObj();

	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput, class UBP_InjuryComponent_C* LInjuryComponent, class AActor* LOwner, class UAbilitySystemComponent* LAbilitySystemComponent, class UAbilitySystemComponent* CallFunc_GetTargetAbilitySystemComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_InjuryComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
};

}


