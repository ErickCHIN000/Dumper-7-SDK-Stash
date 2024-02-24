#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x50 - 0x48)
// BlueprintGeneratedClass ShellUpgrade_HealOnGlimpseGained.ShellUpgrade_HealOnGlimpseGained_C
class UShellUpgrade_HealOnGlimpseGained_C : public UShellUpgradeBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UShellUpgrade_HealOnGlimpseGained_C* GetDefaultObj();

	void OnAbilityGained();
	void OnAbilityLost();
	void OnGlimpseGained();
	void ExecuteUbergraph_ShellUpgrade_HealOnGlimpseGained(int32 EntryPoint, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float CallFunc_ApplyDamage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


