#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// BlueprintGeneratedClass BP_RewardBehaviour_Technique_Base.BP_RewardBehaviour_Technique_Base_C
class UBP_RewardBehaviour_Technique_Base_C : public UBP_RewardBehaviour_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_RewardBehaviour_Technique_Base_C* GetDefaultObj();

	void GetSkillsToReward(struct FSkillReferenceContainer* SkillReferences);
	void IsRewardValid(class APlayerState* PlayerState, bool* bIsValid, class FText* OutInvalidReason, bool CallFunc_IsRewardValid_bIsValid, class FText CallFunc_IsRewardValid_OutInvalidReason, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, TScriptInterface<class ISkillUnlockInterface> K2Node_DynamicCast_AsSkill_Unlock_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, const struct FSkillReferenceContainer& CallFunc_GetSkillsToReward_SkillReferences, const struct FSkillDataReference& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_HasSkillFullyUnlocked_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetDebugText(class FText* DebugText, const TArray<class FString>& Skills, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSkillReferenceContainer& CallFunc_GetSkillsToReward_SkillReferences, const class FString& CallFunc_JoinStringArray_ReturnValue, const struct FSkillDataReference& CallFunc_Array_Get_Item, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_ToString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_GetBaseFilename_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void RewardSkills(class APlayerState* PlayerState, class UObject* SenderContextObject, const struct FSkillDataReference& CurrentSkillReference, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_ToString_ReturnValue, const class FString& CallFunc_GetBaseFilename_ReturnValue, bool CallFunc_UnlockSkillReference_ReturnValue, const struct FGuid& CallFunc_GetUniqueAssetId_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue, const struct FSkillReferenceContainer& CallFunc_GetSkillsToReward_SkillReferences, const struct FSkillDataReference& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ApplyReward(class APlayerState* PlayerState, class UObject* SenderContextObject);
	void ExecuteUbergraph_BP_RewardBehaviour_Technique_Base(int32 EntryPoint, class APlayerState* K2Node_Event_PlayerState, class UObject* K2Node_Event_SenderContextObject);
};

}


