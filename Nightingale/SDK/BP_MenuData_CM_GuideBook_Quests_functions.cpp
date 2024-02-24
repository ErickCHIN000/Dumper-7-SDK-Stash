#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuData_CM_GuideBook_Quests.BP_MenuData_CM_GuideBook_Quests_C
// (None)

class UClass* UBP_MenuData_CM_GuideBook_Quests_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuData_CM_GuideBook_Quests_C");

	return Clss;
}


// BP_MenuData_CM_GuideBook_Quests_C BP_MenuData_CM_GuideBook_Quests.Default__BP_MenuData_CM_GuideBook_Quests_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MenuData_CM_GuideBook_Quests_C* UBP_MenuData_CM_GuideBook_Quests_C::GetDefaultObj()
{
	static class UBP_MenuData_CM_GuideBook_Quests_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MenuData_CM_GuideBook_Quests_C*>(UBP_MenuData_CM_GuideBook_Quests_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MenuData_CM_GuideBook_Quests.BP_MenuData_CM_GuideBook_Quests_C.OnQuestAbandoned
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestAssetReference        QuestRowHandle                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UBP_MenuDataEntry_Quests_C*  QuestGuideBookEntry                                              (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UNWXMenuDataEntry*>   CachedEntries                                                    (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetID_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetUniqueIDFromQuestAssetReference_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MenuDataEntry_Quests_C*  K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_GuideBook_Quests_C::OnQuestAbandoned(struct FQuestAssetReference& QuestRowHandle, class UBP_MenuDataEntry_Quests_C* QuestGuideBookEntry, const TArray<class UNWXMenuDataEntry*>& CachedEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGuid& CallFunc_GetID_ReturnValue, class UNWXMenuDataEntry* CallFunc_Array_Get_Item, const struct FGuid& CallFunc_GetUniqueIDFromQuestAssetReference_ReturnValue, class UBP_MenuDataEntry_Quests_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Quests_C", "OnQuestAbandoned");

	Params::UBP_MenuData_CM_GuideBook_Quests_C_OnQuestAbandoned_Params Parms{};

	Parms.QuestRowHandle = QuestRowHandle;
	Parms.QuestGuideBookEntry = QuestGuideBookEntry;
	Parms.CachedEntries = CachedEntries;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetUniqueIDFromQuestAssetReference_ReturnValue = CallFunc_GetUniqueIDFromQuestAssetReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests = K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_GuideBook_Quests.BP_MenuData_CM_GuideBook_Quests_C.OnQuestAccepted
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_MenuData_CM_GuideBook_Quests_C::OnQuestAccepted(struct FOngoingTaskProgress& TaskProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Quests_C", "OnQuestAccepted");

	Params::UBP_MenuData_CM_GuideBook_Quests_C_OnQuestAccepted_Params Parms{};

	Parms.TaskProgress = TaskProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_GuideBook_Quests.BP_MenuData_CM_GuideBook_Quests_C.IsPlayerTaskForOngoingTaskProgress
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPlayerTask                 PlayerTask                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FOngoingTaskProgress        OngoingTaskProgress                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsEqual                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_GetQuestReferenceFromPlayerTask_ReturnValue             (None)
// struct FQuestAssetReference        CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue            (None)
// bool                               CallFunc_CheckQuestAssetReferencesAreEqual_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_GuideBook_Quests_C::IsPlayerTaskForOngoingTaskProgress(const struct FPlayerTask& PlayerTask, const struct FOngoingTaskProgress& OngoingTaskProgress, bool* IsEqual, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromPlayerTask_ReturnValue, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, bool CallFunc_CheckQuestAssetReferencesAreEqual_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Quests_C", "IsPlayerTaskForOngoingTaskProgress");

	Params::UBP_MenuData_CM_GuideBook_Quests_C_IsPlayerTaskForOngoingTaskProgress_Params Parms{};

	Parms.PlayerTask = PlayerTask;
	Parms.OngoingTaskProgress = OngoingTaskProgress;
	Parms.CallFunc_GetQuestReferenceFromPlayerTask_ReturnValue = CallFunc_GetQuestReferenceFromPlayerTask_ReturnValue;
	Parms.CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue = CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue;
	Parms.CallFunc_CheckQuestAssetReferencesAreEqual_ReturnValue = CallFunc_CheckQuestAssetReferencesAreEqual_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEqual != nullptr)
		*IsEqual = Parms.IsEqual;

}


// Function BP_MenuData_CM_GuideBook_Quests.BP_MenuData_CM_GuideBook_Quests_C.OnQuestCompleted
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UNWXMenuDataEntry*>   CachedEntries                                                    (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MenuDataEntry_Quests_C*  K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        CallFunc_GetTaskProgress_ReturnValue                             (ConstParm)
// bool                               CallFunc_IsPlayerTaskForOngoingTaskProgress_IsEqual              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_GuideBook_Quests_C::OnQuestCompleted(struct FOngoingTaskProgress& TaskProgress, const TArray<class UNWXMenuDataEntry*>& CachedEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UNWXMenuDataEntry* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UBP_MenuDataEntry_Quests_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const struct FOngoingTaskProgress& CallFunc_GetTaskProgress_ReturnValue, bool CallFunc_IsPlayerTaskForOngoingTaskProgress_IsEqual)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Quests_C", "OnQuestCompleted");

	Params::UBP_MenuData_CM_GuideBook_Quests_C_OnQuestCompleted_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.CachedEntries = CachedEntries;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests = K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetTaskProgress_ReturnValue = CallFunc_GetTaskProgress_ReturnValue;
	Parms.CallFunc_IsPlayerTaskForOngoingTaskProgress_IsEqual = CallFunc_IsPlayerTaskForOngoingTaskProgress_IsEqual;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_GuideBook_Quests.BP_MenuData_CM_GuideBook_Quests_C.OnQuestUpdated
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UNWXMenuDataEntry*>   CachedEntries                                                    (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntry*           CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MenuDataEntry_Quests_C*  K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        CallFunc_GetTaskProgress_ReturnValue                             (ConstParm)
// bool                               CallFunc_IsPlayerTaskForOngoingTaskProgress_IsEqual              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_GuideBook_Quests_C::OnQuestUpdated(struct FOngoingTaskProgress& TaskProgress, const TArray<class UNWXMenuDataEntry*>& CachedEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UNWXMenuDataEntry* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UBP_MenuDataEntry_Quests_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const struct FOngoingTaskProgress& CallFunc_GetTaskProgress_ReturnValue, bool CallFunc_IsPlayerTaskForOngoingTaskProgress_IsEqual)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Quests_C", "OnQuestUpdated");

	Params::UBP_MenuData_CM_GuideBook_Quests_C_OnQuestUpdated_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.CachedEntries = CachedEntries;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests = K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetTaskProgress_ReturnValue = CallFunc_GetTaskProgress_ReturnValue;
	Parms.CallFunc_IsPlayerTaskForOngoingTaskProgress_IsEqual = CallFunc_IsPlayerTaskForOngoingTaskProgress_IsEqual;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_GuideBook_Quests.BP_MenuData_CM_GuideBook_Quests_C.CreateAndQuickAddEntry
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UNWXMenuDataEntry*           CallFunc_CreateEntry_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_MenuDataEntry_Quests_C*  K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuData_CM_GuideBook_Quests_C::CreateAndQuickAddEntry(struct FOngoingTaskProgress& TaskProgress, class UNWXMenuDataEntry* CallFunc_CreateEntry_ReturnValue, class UBP_MenuDataEntry_Quests_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Quests_C", "CreateAndQuickAddEntry");

	Params::UBP_MenuData_CM_GuideBook_Quests_C_CreateAndQuickAddEntry_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.CallFunc_CreateEntry_ReturnValue = CallFunc_CreateEntry_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests = K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MenuData_CM_GuideBook_Quests.BP_MenuData_CM_GuideBook_Quests_C.PostInitialize
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_MenuData_CM_GuideBook_Quests_C::PostInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Quests_C", "PostInitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MenuData_CM_GuideBook_Quests.BP_MenuData_CM_GuideBook_Quests_C.ExecuteUbergraph_BP_MenuData_CM_GuideBook_Quests
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>CallFunc_GetQuestTracker_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FOngoingTaskProgress>CallFunc_GetAllTaskProgress_OngoingTasks                         (ReferenceParm)
// TArray<struct FOngoingTaskProgress>CallFunc_GetAllTaskProgress_ReadyToCompleteTasks                 (ReferenceParm)
// struct FOngoingTaskProgress        CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOngoingTaskProgress        CallFunc_Array_Get_Item_1                                        (None)

void UBP_MenuData_CM_GuideBook_Quests_C::ExecuteUbergraph_BP_MenuData_CM_GuideBook_Quests(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, TScriptInterface<class IQuestTrackerProviderInterface> CallFunc_GetQuestTracker_self_CastInput, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FOngoingTaskProgress>& CallFunc_GetAllTaskProgress_OngoingTasks, TArray<struct FOngoingTaskProgress>& CallFunc_GetAllTaskProgress_ReadyToCompleteTasks, const struct FOngoingTaskProgress& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 Temp_int_Array_Index_Variable_1, const struct FOngoingTaskProgress& CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MenuData_CM_GuideBook_Quests_C", "ExecuteUbergraph_BP_MenuData_CM_GuideBook_Quests");

	Params::UBP_MenuData_CM_GuideBook_Quests_C_ExecuteUbergraph_BP_MenuData_CM_GuideBook_Quests_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_GetQuestTracker_self_CastInput = CallFunc_GetQuestTracker_self_CastInput;
	Parms.CallFunc_GetQuestTracker_ReturnValue = CallFunc_GetQuestTracker_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllTaskProgress_OngoingTasks = CallFunc_GetAllTaskProgress_OngoingTasks;
	Parms.CallFunc_GetAllTaskProgress_ReadyToCompleteTasks = CallFunc_GetAllTaskProgress_ReadyToCompleteTasks;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


