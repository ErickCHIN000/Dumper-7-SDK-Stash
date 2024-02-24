#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// BlueprintGeneratedClass ShellUpgradeBase.ShellUpgradeBase_C
class UShellUpgradeBase_C : public UDHObjectWithActorOuter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bActive;                                           // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ID;                                                // 0x34(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_24B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABarbarous_C*                          Barbarous;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShellUpgradeBase_C* GetDefaultObj();

	void DebugAbility(const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsUnlocked_bUnlocked, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6);
	void IsUnlocked(bool* bUnlocked, bool CallFunc_IsUpgradeUnlocked_bUnlocked);
	void LooseAbility();
	void GainAbility();
	void OnAbilityLost();
	void OnAbilityGained();
	void GainIfUnlocked();
	void ExecuteUbergraph_ShellUpgradeBase(int32 EntryPoint, bool CallFunc_IsUnlocked_bUnlocked);
};

}


