#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x50 - 0x48)
// BlueprintGeneratedClass ShellUpgrade_ResolveOnStoneFormDmg.ShellUpgrade_ResolveOnStoneFormDmg_C
class UShellUpgrade_ResolveOnStoneFormDmg_C : public UShellUpgradeBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UShellUpgrade_ResolveOnStoneFormDmg_C* GetDefaultObj();

	void OnAbilityGained();
	void OnAbilityLost();
	void OnDmgBlocked(class AActor* SourceActor, float Amount);
	void ExecuteUbergraph_ShellUpgrade_ResolveOnStoneFormDmg(int32 EntryPoint, class AActor* K2Node_CustomEvent_SourceActor, float K2Node_CustomEvent_Amount, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_IsStoneFormDmgResOn_Yes);
};

}


