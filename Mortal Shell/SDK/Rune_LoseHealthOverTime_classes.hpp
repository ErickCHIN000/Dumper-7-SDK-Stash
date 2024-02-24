#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0xF0 - 0xD9)
// BlueprintGeneratedClass Rune_LoseHealthOverTime.Rune_LoseHealthOverTime_C
class URune_LoseHealthOverTime_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_23AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          Timer_LoseHealth;                                  // 0xE8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URune_LoseHealthOverTime_C* GetDefaultObj();

	void ShouldRemoveHealth_Char(bool* Remove, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3);
	void ShouldRemoveHealth_PC(bool* Remove, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4);
	void Rune_Enable();
	void Rune_Disable();
	void LoseHealOverTime();
	void ExecuteUbergraph_Rune_LoseHealthOverTime(int32 EntryPoint, bool CallFunc_ShouldRemoveHealth_Char_Remove, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_ShouldRemoveHealth_PC_Remove);
};

}


