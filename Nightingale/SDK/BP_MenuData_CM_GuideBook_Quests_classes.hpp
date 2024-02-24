#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x170 - 0x168)
// BlueprintGeneratedClass BP_MenuData_CM_GuideBook_Quests.BP_MenuData_CM_GuideBook_Quests_C
class UBP_MenuData_CM_GuideBook_Quests_C : public UNWXMenuDataCategoryManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_MenuData_CM_GuideBook_Quests_C* GetDefaultObj();

	void OnQuestAbandoned(struct FQuestAssetReference& QuestRowHandle, class UBP_MenuDataEntry_Quests_C* QuestGuideBookEntry, const TArray<class UNWXMenuDataEntry*>& CachedEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGuid& CallFunc_GetID_ReturnValue, class UNWXMenuDataEntry* CallFunc_Array_Get_Item, const struct FGuid& CallFunc_GetUniqueIDFromQuestAssetReference_ReturnValue, class UBP_MenuDataEntry_Quests_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnQuestAccepted(struct FOngoingTaskProgress& TaskProgress);
	void IsPlayerTaskForOngoingTaskProgress(const struct FPlayerTask& PlayerTask, const struct FOngoingTaskProgress& OngoingTaskProgress, bool* IsEqual, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromPlayerTask_ReturnValue, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, bool CallFunc_CheckQuestAssetReferencesAreEqual_ReturnValue);
	void OnQuestCompleted(struct FOngoingTaskProgress& TaskProgress, const TArray<class UNWXMenuDataEntry*>& CachedEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UNWXMenuDataEntry* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UBP_MenuDataEntry_Quests_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const struct FOngoingTaskProgress& CallFunc_GetTaskProgress_ReturnValue, bool CallFunc_IsPlayerTaskForOngoingTaskProgress_IsEqual);
	void OnQuestUpdated(struct FOngoingTaskProgress& TaskProgress, const TArray<class UNWXMenuDataEntry*>& CachedEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UNWXMenuDataEntry* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UBP_MenuDataEntry_Quests_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const struct FOngoingTaskProgress& CallFunc_GetTaskProgress_ReturnValue, bool CallFunc_IsPlayerTaskForOngoingTaskProgress_IsEqual);
	void CreateAndQuickAddEntry(struct FOngoingTaskProgress& TaskProgress, class UNWXMenuDataEntry* CallFunc_CreateEntry_ReturnValue, class UBP_MenuDataEntry_Quests_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests, bool K2Node_DynamicCast_bSuccess);
	void PostInitialize();
	void ExecuteUbergraph_BP_MenuData_CM_GuideBook_Quests(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, TScriptInterface<class IQuestTrackerProviderInterface> CallFunc_GetQuestTracker_self_CastInput, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FOngoingTaskProgress>& CallFunc_GetAllTaskProgress_OngoingTasks, TArray<struct FOngoingTaskProgress>& CallFunc_GetAllTaskProgress_ReadyToCompleteTasks, const struct FOngoingTaskProgress& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 Temp_int_Array_Index_Variable_1, const struct FOngoingTaskProgress& CallFunc_Array_Get_Item_1);
};

}


