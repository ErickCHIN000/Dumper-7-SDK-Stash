#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x3A0 - 0x340)
// WidgetBlueprintGeneratedClass WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C
class UWBP_DB_QuestsDebugPanel_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_DB_QuestList_C*                   AcceptedQuestsList;                                // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DB_QuestList_C*                   AllQuestsList;                                     // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Accept;                                     // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Advance;                                    // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Cancel;                                     // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Complete;                                   // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_CompleteAll;                                // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Refresh;                                    // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         EditableText_FilterText;                           // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             UseRequirements;                                   // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DB_QuestDetails_C*                WBP_DB_QuestDetails;                               // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DB_QuestsDebugPanel_C* GetDefaultObj();

	class FString GetQuestFilename(struct FQuestAssetReference& QuestAssetReference, const class FString& CallFunc_BreakSoftObjectPath_PathString, const class FString& CallFunc_GetBaseFilename_ReturnValue);
	void GetQuestTrackerDebugInterface(TScriptInterface<class IQuestTrackerDebugInterface>* QuestTrackerInterface, TSubclassOf<class IInterface> Temp_class_Variable, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IQuestTrackerDebugInterface> K2Node_DynamicCast_AsQuest_Tracker_Debug_Interface, bool K2Node_DynamicCast_bSuccess);
	void DoesQuestMatchFilter(const class FString& Filter, const struct FQuest& Quest, bool* DoesMatchFilterText, const class FString& TrimmedFilter, const class FString& CallFunc_Trim_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Contains_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void CreateEventBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTrackerInterface_QuestTrackerInterface);
	void GetQuestTrackerInterface(TScriptInterface<class IQuestTrackerInterface>* QuestTrackerInterface, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, TScriptInterface<class IQuestTrackerProviderInterface> CallFunc_GetQuestTracker_self_CastInput, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue);
	void UpdateAcceptedQuestsList(TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTrackerInterface_QuestTrackerInterface, TArray<struct FQuestAssetReference>& CallFunc_GetOngoingQuests_OutOngoingQuests);
	void UpdateAllQuestsList(const class FString& FilterString, const TArray<struct FQuestAssetReference>& QuestAssetReferences, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList, const struct FPrimaryAssetId& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_GetObjectFromPrimaryAssetId_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UQuestDataAsset* K2Node_DynamicCast_AsQuest_Data_Asset, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UQuestDataAsset> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FQuestAssetReference& CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue, bool CallFunc_DoesQuestMatchFilter_DoesMatchFilterText, int32 CallFunc_Array_Add_ReturnValue);
	void RefreshScreen();
	void Completed_2577952E4321D4E259A1E0983559492E(TArray<class UObject*>& Loaded);
	void Construct();
	void BndEvt__WBP_DB_QuestsDebugPanel_Button_Accept_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_QuestsDebugPanel_AllQuestsList_K2Node_ComponentBoundEvent_2_OnQuestSelected__DelegateSignature(const struct FQuestAssetReference& QuestAssetReference);
	void BndEvt__WBP_DB_QuestsDebugPanel_AcceptedQuestsList_K2Node_ComponentBoundEvent_3_OnQuestSelected__DelegateSignature(const struct FQuestAssetReference& QuestAssetReference);
	void BndEvt__WBP_DB_QuestsDebugPanel_Button_Cancel_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_QuestsDebugPanel_Button_FilterQuests_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_QuestsDebugPanel_EditableText_FilterText_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__WBP_DB_QuestsDebugPanel_EditableText_FilterText_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__WBP_DB_QuestsDebugPanel_CheckBox_130_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__WBP_DB_QuestsDebugPanel_Button_Complete_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_QuestsDebugPanel_Button_CompleteAll_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_QuestsDebugPanel_Button_Advance_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_DB_QuestsDebugPanel(int32 EntryPoint, TArray<class UObject*>& Temp_object_Variable, bool CallFunc_GetSelectedQuest_HasSelectedQuest, const struct FQuestAssetReference& CallFunc_GetSelectedQuest_SelectedQuest, bool Temp_bool_Variable, const class FString& CallFunc_GetQuestFilename_ReturnValue, enum class EQuestRequirementsPolicy Temp_byte_Variable, enum class EQuestRequirementsPolicy Temp_byte_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList, TArray<class FName>& Temp_name_Variable, class UAsyncActionLoadPrimaryAssetList* CallFunc_AsyncLoadPrimaryAssetList_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQuestAssetReference& K2Node_ComponentBoundEvent_QuestAssetReference_1, const struct FQuestAssetReference& K2Node_ComponentBoundEvent_QuestAssetReference, bool CallFunc_GetSelectedQuest_HasSelectedQuest_1, const struct FQuestAssetReference& CallFunc_GetSelectedQuest_SelectedQuest_1, const class FString& CallFunc_GetQuestFilename_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, TArray<class UObject*>& K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTrackerInterface_QuestTrackerInterface, bool CallFunc_GetSelectedQuest_HasSelectedQuest_2, const struct FQuestAssetReference& CallFunc_GetSelectedQuest_SelectedQuest_2, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FText K2Node_ComponentBoundEvent_Text, bool K2Node_ComponentBoundEvent_bIsChecked, TScriptInterface<class IQuestTrackerDebugInterface> CallFunc_GetQuestTrackerDebugInterface_QuestTrackerInterface, enum class EQuestRequirementsPolicy K2Node_Select_Default, bool CallFunc_GetSelectedQuest_HasSelectedQuest_3, const struct FQuestAssetReference& CallFunc_GetSelectedQuest_SelectedQuest_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_GetQuestFilename_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3);
};

}


