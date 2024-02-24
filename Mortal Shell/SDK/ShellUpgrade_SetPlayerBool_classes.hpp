#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x59 - 0x48)
// BlueprintGeneratedClass ShellUpgrade_SetPlayerBool.ShellUpgrade_SetPlayerBool_C
class UShellUpgrade_SetPlayerBool_C : public UShellUpgradeBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  PlayerFloat;                                       // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bValueToSet;                                       // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UShellUpgrade_SetPlayerBool_C* GetDefaultObj();

	void OnAbilityLost();
	void OnAbilityGained();
	void ExecuteUbergraph_ShellUpgrade_SetPlayerBool(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue);
};

}


