#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x54 - 0x48)
// BlueprintGeneratedClass ShellUpgrade_EmpRiposteKillResolveRegainChance.ShellUpgrade_EmpRiposteKillResolveRegainChance_C
class UShellUpgrade_EmpRiposteKillResolveRegainChance_C : public UShellUpgradeBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        ChancePercent;                                     // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShellUpgrade_EmpRiposteKillResolveRegainChance_C* GetDefaultObj();

	void OnAbilityGained();
	void OnAbilityLost();
	void OnAnyDmgTaken(bool bDied);
	void OnRip(bool bEmpowered, class ABaseCharacter_C* ParriedChar);
	void ExecuteUbergraph_ShellUpgrade_EmpRiposteKillResolveRegainChance(int32 EntryPoint, bool K2Node_CustomEvent_bEmpowered, class ABaseCharacter_C* K2Node_CustomEvent_ParriedChar, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool K2Node_CustomEvent_bDied, float CallFunc_RandomFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Less_FloatFloat_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1);
};

}


