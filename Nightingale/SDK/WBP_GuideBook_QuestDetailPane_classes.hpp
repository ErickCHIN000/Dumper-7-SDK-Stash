#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x480 - 0x348)
// WidgetBlueprintGeneratedClass WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C
class UWBP_GuideBook_QuestDetailPane_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Button_Base_C*             CBU_Track;                                         // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Untrack;                                       // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Hb_TaskBox;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Rewards;                                           // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichTextBlock_description;                         // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Rtb_DescGameplay;                                  // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_2;                                       // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Tasks;                                             // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_ContractHeader;                                // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_requiredTasksLabel;                            // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_Details_Rewards;                                // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Component_Small_Flourish_Center_C* WBP_Component_Small_Flourish_Center;               // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_TrackUntrack;                       // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_Contract_StateType              ContractState;                                     // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_6417[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x3C0(0xB0)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            QuestAccepted;                                     // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_GuideBook_QuestDetailPane_C* GetDefaultObj();

	void SetInputActionPreviewOnTrackButtons(bool ShowInputAction, bool CallFunc_Not_PreBool_ReturnValue);
	void UntrackQuest(class UBP_HUDGoalTrackingComponent_C* HudGoalComponent, class UQuestTrackerComponent* QuestTracker, class ANWXPlayerController* PlayerController, class FName Quest, const struct FQuestAssetReference& QuestReference, bool CallFunc_IsValid_ReturnValue, class UQuestTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, class FName CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue, bool CallFunc_RemoveQuestTrack_bWasRemoved, class UBP_HUDGoalTrackingComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue);
	void TrackQuest(class UBP_HUDGoalTrackingComponent_C* HudGoalComponent, class UQuestTrackerComponent* QuestTracker, class ANWXPlayerController* PlayerController, class FName Quest, bool CallFunc_IsValid_ReturnValue, class UQuestTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_AddQuestTrack_bWasAdded, class UBP_HUDGoalTrackingComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, class FName CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue);
	void ToggleTracking(class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void Refresh();
	void UpdateGoalTrackingButtons(class UBP_HUDGoalTrackingComponent_C* HudTrackingComponent, class UQuestTrackerComponent* QuestTracker, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQuestTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_FindQuestHUDVisibilityFromTask_ReturnValue);
	void SetTaskProgressAndContractState(const struct FOngoingTaskProgress& NewTaskProgress, enum class E_Contract_StateType NewContractState);
	void Show_Rewards(const TArray<struct FDataTableRowHandle>& Reward_Values_LOCAL, const TArray<enum class E_UI_QuestRewardFormating>& Reward_Keys_LOCAL, const TArray<int32>& Reward_Quantity_LOCAL, TMap<enum class E_UI_QuestRewardFormating, struct FDataTableRowHandle> Reward_Table_LOCAL, TMap<enum class E_UI_QuestRewardFormating, struct FDataTableRowHandle> K2Node_MakeVariable_MakeVariableOutput, int32 Temp_int_Array_Index_Variable, class UWBP_sw_Guidebook_QuestRewardEntry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData, bool CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FQuestRewardPresentationData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void SetupTaskInfo(const struct FOngoingTaskProgress& TaskProgress, class UWBP_sw_Guidebook_QuestTaskEntry_C* CallFunc_Create_ReturnValue, const struct FQuestTaskPresentationData& CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData, bool CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void SetupStaticData(class FText BlankString, const struct FQuestTaskPresentationData& TaskPresentationData, const struct FQuestPresentationData& QuestPresentationData, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_NotEqual_TextText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FQuestTaskPresentationData& CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData, bool CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData, bool CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue);
	void SetupQuestDetails(const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, const struct FQuest& CallFunc_GetQuestDataFromQuestAssetReference_OutData, bool CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue);
	void Construct();
	void BndEvt__WBP_GuideBook_QuestDetailPane_CBU_Track_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_GuideBook_QuestDetailPane_CBU_Untrack_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Destruct();
	void ExecuteUbergraph_WBP_GuideBook_QuestDetailPane(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void QuestAccepted__DelegateSignature(const struct FOngoingTaskProgress& Accepted, enum class E_Contract_StateType Contract_State);
};

}


