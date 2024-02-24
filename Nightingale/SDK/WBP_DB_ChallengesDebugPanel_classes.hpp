#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x398 - 0x340)
// WidgetBlueprintGeneratedClass WBP_DB_ChallengesDebugPanel.WBP_DB_ChallengesDebugPanel_C
class UWBP_DB_ChallengesDebugPanel_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_CompleteWatched;                            // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Refresh;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_ResetCompleted;                             // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_ResetWatched;                               // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableText*                         EditableText_Filter;                               // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             List_AllChallenges;                                // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             List_CompletedChallenges;                          // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                             List_WatchedChallenges;                            // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TScriptInterface<class IChallengeSystemObservable> ChallengeSystem;                                   // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_DB_ChallengesDebugPanel_C* GetDefaultObj();

	void UpdateAllAndCompletedList(const class FString& AllFilterString, const TArray<class UObject*>& CompletedChallenges, const TArray<class UObject*>& FilteredAllChallenges, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList, const struct FPrimaryAssetId& CallFunc_Array_Get_Item, class FText CallFunc_GetText_ReturnValue, class UObject* CallFunc_GetObjectFromPrimaryAssetId_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, TScriptInterface<class IChallengeDefinition> K2Node_DynamicCast_AsChallenge_Definition, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsComplete_Result, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_DoesChallengeMatchFilter_Result);
	void UpdateWatchedList(const TArray<class UObject*>& WatchedChallenges, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<TScriptInterface<class IChallengeProgress>>& CallFunc_GetWatchedChallenges_OutChallenges, TScriptInterface<class IChallengeProgress> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void IsComplete(TScriptInterface<class IChallengeSystemObservable> ChallengeSystem, TScriptInterface<class IChallengeDefinition> Challenge, bool* Result, const struct FExperienceStateID& CallFunc_GetID_ReturnValue, bool CallFunc_IsChallengeComplete_ReturnValue);
	void DoesChallengeMatchFilter(TScriptInterface<class IChallengeDefinition> Challenge, const class FString& Filter, bool* Result, class FText CallFunc_GetTitle_ReturnValue, const class FString& CallFunc_Trim_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_TrimTrailing_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, bool CallFunc_Contains_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void Construct();
	void BndEvt__WBP_DB_ChallengesDebugPanel_Button_Refresh_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_DB_ChallengesDebugPanel_Button_ResetWatched_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnWatchedChallengesChanged();
	void BndEvt__WBP_DB_ChallengesDebugPanel_List_WatchedChallenges_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void BndEvt__WBP_DB_ChallengesDebugPanel_List_CompletedChallenges_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
	void BndEvt__WBP_DB_ChallengesDebugPanel_Button_ResetCompleted_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void BndEvt__WBP_DB_ChallengesDebugPanel_Button_CompleteWatched_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnChallengeCompleted(struct FExperienceStateID& ChallengeID);
	void ExecuteUbergraph_WBP_DB_ChallengesDebugPanel(int32 EntryPoint, const class FString& CallFunc_Concat_StrStr_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, TScriptInterface<class IChallengeProgress> K2Node_DynamicCast_AsChallenge_Progress, bool K2Node_DynamicCast_bSuccess, const struct FExperienceStateID& CallFunc_GetID_ReturnValue, const class FString& CallFunc_ToDebugString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UObject* K2Node_ComponentBoundEvent_Item_1, bool K2Node_ComponentBoundEvent_bIsSelected_1, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue_1, TScriptInterface<class IChallengeDefinition> K2Node_DynamicCast_AsChallenge_Definition, bool K2Node_DynamicCast_bSuccess_1, const struct FExperienceStateID& CallFunc_GetID_ReturnValue_1, const class FString& CallFunc_ToDebugString_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FExperienceStateID& K2Node_CustomEvent_ChallengeID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue_2, TScriptInterface<class IChallengeProgress> K2Node_DynamicCast_AsChallenge_Progress_1, bool K2Node_DynamicCast_bSuccess_2, TSubclassOf<class IInterface> Temp_class_Variable, const struct FExperienceStateID& CallFunc_GetID_ReturnValue_2, const class FString& CallFunc_ToDebugString_ReturnValue_2, class UObject* CallFunc_FindFirstImplementor_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, TScriptInterface<class IChallengeSystemObservable> K2Node_DynamicCast_AsChallenge_System_Observable, bool K2Node_DynamicCast_bSuccess_3);
};

}


