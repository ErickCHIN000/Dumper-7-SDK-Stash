#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x54 - 0x48)
// BlueprintGeneratedClass ShellUpgrade_ChangeParryMontage.ShellUpgrade_ChangeParryMontage_C
class UShellUpgrade_ChangeParryMontage_C : public UShellUpgradeBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        MontageIndex;                                      // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShellUpgrade_ChangeParryMontage_C* GetDefaultObj();

	void OnAbilityLost();
	void OnAbilityGained();
	void ExecuteUbergraph_ShellUpgrade_ChangeParryMontage(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


