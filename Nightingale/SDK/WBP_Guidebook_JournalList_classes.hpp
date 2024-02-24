#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x3D0 - 0x348)
// WidgetBlueprintGeneratedClass WBP_Guidebook_JournalList.WBP_Guidebook_JournalList_C
class UWBP_Guidebook_JournalList_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          VB_Itinerary;                                      // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_OngoingTasks;                                   // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_TasksToComplete;                                // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Component_SoftEdge_Divider_C*     WBP_Component_SoftEdge_Divider;                    // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Guidebook_QuestGrid_Entry_C*      WBP_Guidebook_QuestGrid_Entry;                     // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnQuestEntrySelected;                              // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnQuestEntryHovered;                               // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UGuideBookComponent*                   GuideBookComponent;                                // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNWXMenuDataEntry*                     LastSelectedQuestEntry;                            // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       EntryPaddingBottom;                                // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnQuestTrackingChanged;                            // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnQuestEntryUnselected;                            // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_Guidebook_JournalList_C* GetDefaultObj();

	void HandleQuestTrackingChanged(const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State);
	void GetFocusWidgetInQuestList(class UWidget** FocusWidget, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWBP_Guidebook_QuestGrid_Entry_C* K2Node_DynamicCast_AsWBP_Guidebook_Quest_Grid_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1);
	void SetFocusOnQuestList(class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWBP_Guidebook_QuestGrid_Entry_C* K2Node_DynamicCast_AsWBP_Guidebook_Quest_Grid_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1);
	void OnFilteringCompleted(struct FGameplayTag& CategoryTag, int32 TotalFilteredResults, const struct FGameplayTag& CallFunc_GuideBookQuestCategoryTag_ReturnValue, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void UnbindFromQuestEntryEvents(class UVerticalBox* VerticalBox, const TArray<class UWidget*>& LAllChildren, class UWBP_Guidebook_QuestGrid_Entry_C* LCurrentQuestGridEntry, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_Guidebook_QuestGrid_Entry_C* K2Node_DynamicCast_AsWBP_Guidebook_Quest_Grid_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void OnQuestSelected(const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State, class UNWXMenuDataEntryObservedStateTracker* LObservedStateTracker, class UNWXMenuDataEntry* LMenuDataEntry, bool CallFunc_IsValid_ReturnValue, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGuid& CallFunc_GetUniqueIDFromOngoingTask_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookQuestCategoryTag_ReturnValue, class UNWXMenuDataEntry* CallFunc_FindEntryWithIDFromCategory_ReturnValue);
	void OnQuestHovered(bool Hovered, const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State, class UNWXMenuDataEntry* LLastSelectedQuestEntry, class UBP_MenuDataEntry_Quests_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests, bool K2Node_DynamicCast_bSuccess, enum class E_Contract_StateType CallFunc_GetTaskState_TaskState, const struct FOngoingTaskProgress& CallFunc_GetTaskProgress_ReturnValue);
	void ValidateQuestList(const struct FLinearColor& Temp_struct_Variable, class FText Temp_text_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UWBP_BasicText_OneLine_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_Quests_QuestEntry_C* K2Node_DynamicCast_AsWBP_Quests_Quest_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyChildren_ReturnValue, enum class E_Contract_StateType CallFunc_GetContractState_ContractState, const struct FOngoingTaskProgress& CallFunc_GetTaskProgress_TaskProgress, bool CallFunc_HasAnyChildren_ReturnValue_1, class UWidget* CallFunc_GetChildAt_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, class UWBP_Quests_QuestEntry_C* K2Node_DynamicCast_AsWBP_Quests_Quest_Entry_1, bool K2Node_DynamicCast_bSuccess_1, enum class E_Contract_StateType CallFunc_GetContractState_ContractState_1, const struct FOngoingTaskProgress& CallFunc_GetTaskProgress_TaskProgress_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1);
	void GenerateQuestWidgets(class UVerticalBox* VerticalBoxReference, const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType ContractState, class UWBP_Guidebook_QuestGrid_Entry_C* LQuestEntry, class UWBP_Guidebook_QuestGrid_Entry_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FMargin& K2Node_MakeStruct_Margin, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float K2Node_MakeStruct_Bottom_ImplicitCast);
	void RefreshQuestLists(const struct FOngoingTaskProgress& LTaskProgress, const TArray<class UNWXMenuDataEntry*>& LCachedQuestEntries, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UObject* CallFunc_Array_Get_Item, class UBP_MenuDataEntry_Quests_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const struct FOngoingTaskProgress& CallFunc_GetTaskProgress_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, const struct FGameplayTag& CallFunc_GuideBookQuestCategoryTag_ReturnValue, TArray<class UNWXMenuDataEntry*>& CallFunc_GetFilteredEntriesByCategory_OutEntries, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, bool CallFunc_IsQuestOngoing_ReturnValue);
	void OnQuestUnselected();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_Guidebook_JournalList(int32 EntryPoint, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue_1, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue_1);
	void OnQuestEntryUnselected__DelegateSignature();
	void OnQuestTrackingChanged__DelegateSignature(const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State);
	void OnQuestEntryHovered__DelegateSignature(const struct FOngoingTaskProgress& Task, enum class E_Contract_StateType State);
	void OnQuestEntrySelected__DelegateSignature(const struct FOngoingTaskProgress& Task, enum class E_Contract_StateType State);
};

}


