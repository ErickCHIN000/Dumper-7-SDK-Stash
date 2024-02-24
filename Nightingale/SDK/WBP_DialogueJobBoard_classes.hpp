#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x460 - 0x340)
// WidgetBlueprintGeneratedClass WBP_DialogueJobBoard.WBP_DialogueJobBoard_C
class UWBP_DialogueJobBoard_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ContractAcceptedFeedback;                          // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUniformGridPanel*                     GridAvailable;                                     // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     GridReady;                                         // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_leftHeader;                                    // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                NPC_Actor;                                         // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerInterface> QuestTracker;                                      // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQuestGiverSession*                    QuestGiverSession;                                 // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FOngoingTaskProgress                  TaskProgressSticky;                                // 0x390(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class E_Contract_StateType              TaskProgressStateSticky;                           // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GridIndex_Ready_Sticky;                            // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GridIndex_Available_Sticky;                        // 0x448(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3506[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ShowDetailPane;                                    // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_DialogueJobBoard_C* GetDefaultObj();

	struct FEventReply FocusDefaultWidget(const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_FocusDefaultWidget_ReturnValue);
	void SetGridPanelQuestEntriesToUnselected(class UPanelWidget* GridPanelWidget, int32 IndexToIgnore, class UWidget* CurrentChildWidget, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_JobBoard_QuestGrid_Entry_C* K2Node_DynamicCast_AsWBP_Job_Board_Quest_Grid_Entry, bool K2Node_DynamicCast_bSuccess);
	void ResetQuestBoard(class UNWXWindowWidget* Window);
	void Cleanup();
	void OnTaskHandedIn(struct FOngoingTaskProgress& TaskProgress);
	void OnQuestAccepted(struct FQuestAssetReference& QuestRowHandle);
	void SetupQuestContractBoard(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AQuestGiverSession* CallFunc_GetQuestGiverSession_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void QuestSelected(const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State, int32 Grid_Index, bool K2Node_SwitchEnum_CmpSuccess);
	void PopulateTasksToComplete(class UWBP_JobBoard_QuestGrid_Entry_C* JobBoardQuestEntry, int32 TaskToCompleteIndex, const struct FDataTableRowHandle& QuestRowHandle, const struct FOngoingTaskProgress& TaskToComplete, class UWBP_JobBoard_QuestGrid_Entry_C* CallFunc_Create_ReturnValue, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, const struct FQuest& CallFunc_GetQuestDataFromQuestAssetReference_OutData, bool CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FOngoingTaskProgress>& CallFunc_GetTasksToComplete_ReturnValue, const struct FOngoingTaskProgress& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void PopulateQuestsToAccept(int32 GridWidth, class UWBP_JobBoard_QuestGrid_Entry_C* JobBoardQuestEntry, int32 QuestIndex, enum class ESlateVisibility Temp_byte_Variable, class UWBP_JobBoard_QuestGrid_Entry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 CallFunc_Percent_IntInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FQuestAssetReference>& CallFunc_GetAvailableQuests_ReturnValue, const struct FQuestAssetReference& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const struct FOngoingTaskProgress& CallFunc_MakeStartingOngoingTaskProgressFromQuestReference_ReturnValue, const struct FQuest& CallFunc_GetQuestDataFromQuestAssetReference_OutData, bool CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void RefreshQuestsList(const struct FEventReply& CallFunc_FocusDefaultWidget_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UBP_QuestGiverComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CallCreatureKilled(const struct FDataTableRowHandle& Creature_Information, const struct FGameplayTagContainer& CreatureTagContainer, const struct FGameplayTagContainer& KillerTagContainer);
	void CallGiveTag(const struct FGameplayTag& Gameplay_Tag);
	void CallStructureBlueprintPlaced(const struct FDataTableRowHandle& StructureDataHandle);
	void CallResourceHarvested(const struct FInventoryEntry& ItemEntry, int32 Amount);
	void CallStructureCompleted(class AActor* Owning_Actor, int32 Piece_ID);
	void CallItemDeposited_InWorldContainer(const struct FItemDataReference& ItemRowHandle, int32 Quantity, const struct FGameplayTag& ContainerTag);
	void CallWeakpointHit(const struct FGameplayTagContainer& WeakpointType, const struct FGameplayTagContainer& CreatureTags, const struct FHitResult& HitResult);
	void CallOnSpellCast(TSoftObjectPtr<class UTechniqueDataAsset> SpellCast);
	void CallOnGlyphRevealed();
	void CallFishCaught(struct FFish& CaughtFish);
	void CallOnInteractedWithPlayer(class APawn* InteractingPawn);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_DialogueJobBoard(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue_1, const struct FDataTableRowHandle& K2Node_Event_Creature_Information, const struct FGameplayTagContainer& K2Node_Event_CreatureTagContainer, const struct FGameplayTagContainer& K2Node_Event_KillerTagContainer, const struct FGameplayTag& K2Node_Event_Gameplay_Tag, const struct FDataTableRowHandle& K2Node_Event_StructureDataHandle, const struct FInventoryEntry& K2Node_Event_ItemEntry, int32 K2Node_Event_Amount, class AActor* K2Node_Event_Owning_Actor, int32 K2Node_Event_Piece_ID, const struct FItemDataReference& K2Node_Event_ItemRowHandle, int32 K2Node_Event_Quantity, const struct FGameplayTag& K2Node_Event_ContainerTag, const struct FGameplayTagContainer& K2Node_Event_WeakpointType, const struct FGameplayTagContainer& K2Node_Event_CreatureTags, const struct FHitResult& K2Node_Event_HitResult, TSoftObjectPtr<class UTechniqueDataAsset> K2Node_Event_SpellCast, const struct FFish& K2Node_Event_CaughtFish, class APawn* K2Node_Event_InteractingPawn, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, TArray<class UActorComponent*>& CallFunc_GetComponentsByInterface_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, TScriptInterface<class IQuestGiverInterface> K2Node_DynamicCast_AsQuest_Giver_Interface, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_GetQuestGiverTag_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_ObjectToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_1, class AQuestGiverSession* CallFunc_GetQuestGiverSession_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue_1, TArray<class UActorComponent*>& CallFunc_GetComponentsByInterface_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UActorComponent* CallFunc_Array_Get_Item_1, TScriptInterface<class IQuestGiverInterface> K2Node_DynamicCast_AsQuest_Giver_Interface_1, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Length_ReturnValue_1, const struct FGameplayTag& CallFunc_GetQuestGiverTag_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5);
	void ShowDetailPane__DelegateSignature(bool Hovered, const struct FOngoingTaskProgress& TaskProgress, enum class E_Contract_StateType State);
};

}


