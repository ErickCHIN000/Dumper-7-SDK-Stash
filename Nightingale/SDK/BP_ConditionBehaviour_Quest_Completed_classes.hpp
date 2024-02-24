#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x110 - 0x80)
// BlueprintGeneratedClass BP_ConditionBehaviour_Quest_Completed.BP_ConditionBehaviour_Quest_Completed_C
class UBP_ConditionBehaviour_Quest_Completed_C : public UBP_ConditionBehaviour_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TScriptInterface<class IQuestTrackerInterface> QuestTracker;                                      // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_30D2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  QuestToComplete;                                   // 0xA0(0x70)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBP_ConditionBehaviour_Quest_Completed_C* GetDefaultObj();

	void GetDebugText(class FText* Description, const class FString& CallFunc_GetDebugStringFromQuestAssetReference_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnQuestCompleted(struct FQuestAssetReference& Quest, bool bIsSatisfied, const struct FConditionPersistentData& CallFunc_MakeConditionPersistentDataFromBool_ReturnValue, bool CallFunc_IsComplete_ReturnValue, const struct FConditionPersistentData& CallFunc_MakeConditionPersistentDataFromBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsComplete_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsQuestCompleted_ReturnValue);
	void OnConditionRemoved();
	void SetupCondition();
	void SetContextObject(class UObject* ContextObject);
	void CompleteIfSatisfiedOnSetup();
	void ExecuteUbergraph_BP_ConditionBehaviour_Quest_Completed(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* K2Node_Event_ContextObject, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, const struct FQuestAssetReference& Temp_struct_Variable);
};

}


