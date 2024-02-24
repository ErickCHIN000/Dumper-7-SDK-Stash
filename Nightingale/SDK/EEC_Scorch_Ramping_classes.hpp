#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass EEC_Scorch_Ramping.EEC_Scorch_Ramping_C
class UEEC_Scorch_Ramping_C : public UDoTCalculation
{
public:

	static class UClass* StaticClass();
	static class UEEC_Scorch_Ramping_C* GetDefaultObj();

	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput, class UAbilitySystemComponent* CallFunc_GetTargetAbilitySystemComponent_ReturnValue, const struct FGameplayEffectCustomExecutionOutput& CallFunc_Execute_OutExecutionOutput, double CallFunc_GetTimeSeconds_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_GetActiveEffectsWithAllTags_ReturnValue, float CallFunc_GetActiveGameplayEffectStartTime_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast);
};

}


