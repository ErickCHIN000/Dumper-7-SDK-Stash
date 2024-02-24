#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuData_CM_GuideBook_HowToPlay.BP_MenuData_CM_GuideBook_HowToPlay_C
// (None)

class UClass* UBP_MenuData_CM_GuideBook_HowToPlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuData_CM_GuideBook_HowToPlay_C");

	return Clss;
}


// BP_MenuData_CM_GuideBook_HowToPlay_C BP_MenuData_CM_GuideBook_HowToPlay.Default__BP_MenuData_CM_GuideBook_HowToPlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MenuData_CM_GuideBook_HowToPlay_C* UBP_MenuData_CM_GuideBook_HowToPlay_C::GetDefaultObj()
{
	static class UBP_MenuData_CM_GuideBook_HowToPlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MenuData_CM_GuideBook_HowToPlay_C*>(UBP_MenuData_CM_GuideBook_HowToPlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MenuData_CM_GuideBook_HowToPlay.BP_MenuData_CM_GuideBook_HowToPlay_C.SetObservable
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCodexEntry                 CodexEntry                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                SubentryTag                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           MenuDataEntry                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryObservedStateTracker*CallFunc_GetStateTracker_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetCodexAssetUniqueId_OutUniqueID                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_GetEntryFromID_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_GuideBook_HowToPlay_C::SetObservable(struct FCodexEntry& CodexEntry, struct FGameplayTag& SubentryTag, class UNWXMenuDataEntry* MenuDataEntry, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue, const struct FGuid& CallFunc_GetCodexAssetUniqueId_OutUniqueID, class UNWXMenuDataEntry* CallFunc_GetEntryFromID_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_HowToPlay_C", "SetObservable");

	Params::UBP_MenuData_CM_GuideBook_HowToPlay_C_SetObservable_Params Parms{};

	Parms.CodexEntry = CodexEntry;
	Parms.SubentryTag = SubentryTag;
	Parms.MenuDataEntry = MenuDataEntry;
	Parms.CallFunc_GetStateTracker_ReturnValue = CallFunc_GetStateTracker_ReturnValue;
	Parms.CallFunc_GetCodexAssetUniqueId_OutUniqueID = CallFunc_GetCodexAssetUniqueId_OutUniqueID;
	Parms.CallFunc_GetEntryFromID_ReturnValue = CallFunc_GetEntryFromID_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_GuideBook_HowToPlay.BP_MenuData_CM_GuideBook_HowToPlay_C.Completed_C6EC8B934314BE5F4DE606B50DF5AFE6
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             Loaded                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MenuData_CM_GuideBook_HowToPlay_C::Completed_C6EC8B934314BE5F4DE606B50DF5AFE6(TArray<class UObject*>& Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_HowToPlay_C", "Completed_C6EC8B934314BE5F4DE606B50DF5AFE6");

	Params::UBP_MenuData_CM_GuideBook_HowToPlay_C_Completed_C6EC8B934314BE5F4DE606B50DF5AFE6_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_GuideBook_HowToPlay.BP_MenuData_CM_GuideBook_HowToPlay_C.PostInitialize
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_MenuData_CM_GuideBook_HowToPlay_C::PostInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_HowToPlay_C", "PostInitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MenuData_CM_GuideBook_HowToPlay.BP_MenuData_CM_GuideBook_HowToPlay_C.ExecuteUbergraph_BP_MenuData_CM_GuideBook_HowToPlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId>     CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList             (ReferenceParm)
// TArray<class UObject*>             Temp_object_Variable                                             (ReferenceParm)
// struct FPrimaryAssetId             CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetObjectFromPrimaryAssetId_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId>     CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList_1           (ReferenceParm)
// class UCodexBaseDataAsset*         K2Node_DynamicCast_AsCodex_Base_Data_Asset                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             K2Node_CustomEvent_Loaded                                        (ConstParm, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_CreateEntry_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_MenuDataEntry_Codex_C*   K2Node_DynamicCast_AsBP_Menu_Data_Entry_Codex                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCodexTrackerComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Temp_name_Variable                                               (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAsyncActionLoadPrimaryAssetList*CallFunc_AsyncLoadPrimaryAssetList_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexTrackerInterface>CallFunc_BindEventTo_OnCodexGranted_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICodexTrackerInterface>CallFunc_BindEventTo_OnCodexUpdated_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_GuideBook_HowToPlay_C::ExecuteUbergraph_BP_MenuData_CM_GuideBook_HowToPlay(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList, TArray<class UObject*>& Temp_object_Variable, const struct FPrimaryAssetId& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_GetObjectFromPrimaryAssetId_ReturnValue, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList_1, class UCodexBaseDataAsset* K2Node_DynamicCast_AsCodex_Base_Data_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasTag_ReturnValue, TArray<class UObject*>& K2Node_CustomEvent_Loaded, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UNWXMenuDataEntry* CallFunc_CreateEntry_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class UBP_MenuDataEntry_Codex_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Codex, bool K2Node_DynamicCast_bSuccess_1, class UCodexTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class FName>& Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAsyncActionLoadPrimaryAssetList* CallFunc_AsyncLoadPrimaryAssetList_ReturnValue, TScriptInterface<class ICodexTrackerInterface> CallFunc_BindEventTo_OnCodexGranted_self_CastInput, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class ICodexTrackerInterface> CallFunc_BindEventTo_OnCodexUpdated_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_HowToPlay_C", "ExecuteUbergraph_BP_MenuData_CM_GuideBook_HowToPlay");

	Params::UBP_MenuData_CM_GuideBook_HowToPlay_C_ExecuteUbergraph_BP_MenuData_CM_GuideBook_HowToPlay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList = CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetObjectFromPrimaryAssetId_ReturnValue = CallFunc_GetObjectFromPrimaryAssetId_ReturnValue;
	Parms.CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList_1 = CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList_1;
	Parms.K2Node_DynamicCast_AsCodex_Base_Data_Asset = K2Node_DynamicCast_AsCodex_Base_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CreateEntry_ReturnValue = CallFunc_CreateEntry_ReturnValue;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.K2Node_DynamicCast_AsBP_Menu_Data_Entry_Codex = K2Node_DynamicCast_AsBP_Menu_Data_Entry_Codex;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AsyncLoadPrimaryAssetList_ReturnValue = CallFunc_AsyncLoadPrimaryAssetList_ReturnValue;
	Parms.CallFunc_BindEventTo_OnCodexGranted_self_CastInput = CallFunc_BindEventTo_OnCodexGranted_self_CastInput;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_BindEventTo_OnCodexUpdated_self_CastInput = CallFunc_BindEventTo_OnCodexUpdated_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}

}


