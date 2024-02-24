#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x50 - 0x48)
// BlueprintGeneratedClass ShellUpgrade_StoneStompBlastHitAddResolve.ShellUpgrade_StoneStompBlastHitAddResolve_C
class UShellUpgrade_StoneStompBlastHitAddResolve_C : public UShellUpgradeBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UShellUpgrade_StoneStompBlastHitAddResolve_C* GetDefaultObj();

	void OnAbilityGained();
	void OnAbilityLost();
	void OnStoneStompHit(class AEnemyCharacter_C* Target);
	void ExecuteUbergraph_ShellUpgrade_StoneStompBlastHitAddResolve(int32 EntryPoint, class AEnemyCharacter_C* K2Node_CustomEvent_Target, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base);
};

}


