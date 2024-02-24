#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x170 - 0x168)
// BlueprintGeneratedClass BP_MenuData_CM_GuideBook_HowToPlay.BP_MenuData_CM_GuideBook_HowToPlay_C
class UBP_MenuData_CM_GuideBook_HowToPlay_C : public UNWXMenuDataCategoryManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_MenuData_CM_GuideBook_HowToPlay_C* GetDefaultObj();

	void SetObservable(struct FCodexEntry& CodexEntry, struct FGameplayTag& SubentryTag, class UNWXMenuDataEntry* MenuDataEntry, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue, const struct FGuid& CallFunc_GetCodexAssetUniqueId_OutUniqueID, class UNWXMenuDataEntry* CallFunc_GetEntryFromID_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Completed_C6EC8B934314BE5F4DE606B50DF5AFE6(TArray<class UObject*>& Loaded);
	void PostInitialize();
	void ExecuteUbergraph_BP_MenuData_CM_GuideBook_HowToPlay(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList, TArray<class UObject*>& Temp_object_Variable, const struct FPrimaryAssetId& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_GetObjectFromPrimaryAssetId_ReturnValue, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList_1, class UCodexBaseDataAsset* K2Node_DynamicCast_AsCodex_Base_Data_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasTag_ReturnValue, TArray<class UObject*>& K2Node_CustomEvent_Loaded, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UNWXMenuDataEntry* CallFunc_CreateEntry_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class UBP_MenuDataEntry_Codex_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Codex, bool K2Node_DynamicCast_bSuccess_1, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class FName>& Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAsyncActionLoadPrimaryAssetList* CallFunc_AsyncLoadPrimaryAssetList_ReturnValue, TScriptInterface<class ICodexTrackerInterface> CallFunc_BindEventTo_OnCodexGranted_self_CastInput, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class ICodexTrackerInterface> CallFunc_BindEventTo_OnCodexUpdated_self_CastInput);
};

}


