#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x170 - 0x168)
// BlueprintGeneratedClass BP_MenuData_CM_GuideBook_Codex.BP_MenuData_CM_GuideBook_Codex_C
class UBP_MenuData_CM_GuideBook_Codex_C : public UNWXMenuDataCategoryManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_MenuData_CM_GuideBook_Codex_C* GetDefaultObj();

	void SetObservable(struct FCodexEntry& CodexEntry, struct FGameplayTag& SubentryTag, class UNWXMenuDataEntry* MenuDataEntry, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue, const struct FGuid& CallFunc_GetCodexAssetUniqueId_OutUniqueID, class UNWXMenuDataEntry* CallFunc_GetEntryFromID_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Completed_F50EC4924CF8D93429D2B1906F0DC7F5(TArray<class UObject*>& Loaded);
	void PostInitialize();
	void ExecuteUbergraph_BP_MenuData_CM_GuideBook_Codex(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList, TArray<class UObject*>& Temp_object_Variable, const struct FPrimaryAssetId& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_GetObjectFromPrimaryAssetId_ReturnValue, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList_1, class UCodexBaseDataAsset* K2Node_DynamicCast_AsCodex_Base_Data_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UObject*>& K2Node_CustomEvent_Loaded, int32 Temp_int_Loop_Counter_Variable, class UNWXMenuDataEntry* CallFunc_CreateEntry_ReturnValue, class UBP_MenuDataEntry_Codex_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Codex, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, TArray<class FName>& Temp_name_Variable, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, class UAsyncActionLoadPrimaryAssetList* CallFunc_AsyncLoadPrimaryAssetList_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class ICodexTrackerInterface> CallFunc_BindEventTo_OnCodexGranted_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class ICodexTrackerInterface> CallFunc_BindEventTo_OnCodexUpdated_self_CastInput);
};

}


