#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x518 - 0x510)
// BlueprintGeneratedClass GA_CreatureAbility_DemonDeer_Exit.GA_CreatureAbility_DemonDeer_Exit_C
class UGA_CreatureAbility_DemonDeer_Exit_C : public UGA_CreatureAbilityBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_DemonDeer_Exit_C* GetDefaultObj();

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_CreatureAbility_DemonDeer_Exit(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, TScriptInterface<class IStatusEffectAccessInterface> CallFunc_ApplyInfiniteStatusEffect_self_CastInput, const struct FStatusEffectHandle& CallFunc_ApplyInfiniteStatusEffect_ActiveStatusEffectHandle, bool CallFunc_ApplyInfiniteStatusEffect_ReturnValue, bool K2Node_Event_bWasCancelled);
};

}


