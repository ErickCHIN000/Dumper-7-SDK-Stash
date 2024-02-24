#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x170 - 0x80)
// BlueprintGeneratedClass BP_ConditionBehaviour_Skill_Unlocked.BP_ConditionBehaviour_Skill_Unlocked_C
class UBP_ConditionBehaviour_Skill_Unlocked_C : public UBP_ConditionBehaviour_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                        Pad_7858[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillDataReference                   SkillReference;                                    // 0x90(0xE0)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ConditionBehaviour_Skill_Unlocked_C* GetDefaultObj();

	void OnSkillReferenceUnlocked(struct FSkillDataReference& UnlockedSkill, bool Temp_bool_Variable, const struct FConditionPersistentData& CallFunc_MakeConditionPersistentDataFromBool_ReturnValue, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, TScriptInterface<class ISkillUnlockInterface> K2Node_DynamicCast_AsSkill_Unlock_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsComplete_ReturnValue, bool CallFunc_HasSkillFullyUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void GetDebugText(class FText* Description, const class FString& CallFunc_ToString_ReturnValue, const class FString& CallFunc_GetBaseFilename_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnConditionRemoved();
	void SetupCondition();
	void CompleteIfSatisfiedOnSetup();
	void ExecuteUbergraph_BP_ConditionBehaviour_Skill_Unlocked(int32 EntryPoint, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_2, bool CallFunc_IsValid_ReturnValue_1);
};

}


