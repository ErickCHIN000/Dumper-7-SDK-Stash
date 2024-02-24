#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x50 - 0x48)
// BlueprintGeneratedClass ShellUpgrade_XPForLore.ShellUpgrade_XPForLore_C
class UShellUpgrade_XPForLore_C : public UShellUpgradeBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UShellUpgrade_XPForLore_C* GetDefaultObj();

	void OnAbilityGained();
	void OnAbilityLost();
	void OnLoreReadFirstTime(class FName UnhandledParamID);
	void ExecuteUbergraph_ShellUpgrade_XPForLore(int32 EntryPoint, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class FName>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_StartsWith_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, class FName K2Node_CustomEvent_UnhandledParamID, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_1, bool CallFunc_Set_Remove_ReturnValue);
};

}


