#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C
// (None)

class UClass* UWBP_DB_QuestsDebugPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_QuestsDebugPanel_C");

	return Clss;
}


// WBP_DB_QuestsDebugPanel_C WBP_DB_QuestsDebugPanel.Default__WBP_DB_QuestsDebugPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_QuestsDebugPanel_C* UWBP_DB_QuestsDebugPanel_C::GetDefaultObj()
{
	static class UWBP_DB_QuestsDebugPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_QuestsDebugPanel_C*>(UWBP_DB_QuestsDebugPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.GetQuestFilename
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FQuestAssetReference        QuestAssetReference                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_BreakSoftObjectPath_PathString                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetBaseFilename_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)

class FString UWBP_DB_QuestsDebugPanel_C::GetQuestFilename(struct FQuestAssetReference& QuestAssetReference, const class FString& CallFunc_BreakSoftObjectPath_PathString, const class FString& CallFunc_GetBaseFilename_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "GetQuestFilename");

	Params::UWBP_DB_QuestsDebugPanel_C_GetQuestFilename_Params Parms{};

	Parms.QuestAssetReference = QuestAssetReference;
	Parms.CallFunc_BreakSoftObjectPath_PathString = CallFunc_BreakSoftObjectPath_PathString;
	Parms.CallFunc_GetBaseFilename_ReturnValue = CallFunc_GetBaseFilename_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.GetQuestTrackerDebugInterface
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IQuestTrackerDebugInterface>QuestTrackerInterface                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerDebugInterface>K2Node_DynamicCast_AsQuest_Tracker_Debug_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestsDebugPanel_C::GetQuestTrackerDebugInterface(TScriptInterface<class IQuestTrackerDebugInterface>* QuestTrackerInterface, TSubclassOf<class IInterface> Temp_class_Variable, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IQuestTrackerDebugInterface> K2Node_DynamicCast_AsQuest_Tracker_Debug_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "GetQuestTrackerDebugInterface");

	Params::UWBP_DB_QuestsDebugPanel_C_GetQuestTrackerDebugInterface_Params Parms{};

	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Debug_Interface = K2Node_DynamicCast_AsQuest_Tracker_Debug_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestTrackerInterface != nullptr)
		*QuestTrackerInterface = Parms.QuestTrackerInterface;

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.DoesQuestMatchFilter
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      Filter                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FQuest                      Quest                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               DoesMatchFilterText                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      TrimmedFilter                                                    (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Trim_ReturnValue                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestsDebugPanel_C::DoesQuestMatchFilter(const class FString& Filter, const struct FQuest& Quest, bool* DoesMatchFilterText, const class FString& TrimmedFilter, const class FString& CallFunc_Trim_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Contains_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "DoesQuestMatchFilter");

	Params::UWBP_DB_QuestsDebugPanel_C_DoesQuestMatchFilter_Params Parms{};

	Parms.Filter = Filter;
	Parms.Quest = Quest;
	Parms.TrimmedFilter = TrimmedFilter;
	Parms.CallFunc_Trim_ReturnValue = CallFunc_Trim_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue_1 = CallFunc_Contains_ReturnValue_1;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (DoesMatchFilterText != nullptr)
		*DoesMatchFilterText = Parms.DoesMatchFilterText;

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.CreateEventBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTrackerInterface_QuestTrackerInterface          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestsDebugPanel_C::CreateEventBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTrackerInterface_QuestTrackerInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "CreateEventBindings");

	Params::UWBP_DB_QuestsDebugPanel_C_CreateEventBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetQuestTrackerInterface_QuestTrackerInterface = CallFunc_GetQuestTrackerInterface_QuestTrackerInterface;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.GetQuestTrackerInterface
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TScriptInterface<class IQuestTrackerInterface>QuestTrackerInterface                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>CallFunc_GetQuestTracker_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWBP_DB_QuestsDebugPanel_C::GetQuestTrackerInterface(TScriptInterface<class IQuestTrackerInterface>* QuestTrackerInterface, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, TScriptInterface<class IQuestTrackerProviderInterface> CallFunc_GetQuestTracker_self_CastInput, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "GetQuestTrackerInterface");

	Params::UWBP_DB_QuestsDebugPanel_C_GetQuestTrackerInterface_Params Parms{};

	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_GetQuestTracker_self_CastInput = CallFunc_GetQuestTracker_self_CastInput;
	Parms.CallFunc_GetQuestTracker_ReturnValue = CallFunc_GetQuestTracker_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestTrackerInterface != nullptr)
		*QuestTrackerInterface = Parms.QuestTrackerInterface;

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.UpdateAcceptedQuestsList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTrackerInterface_QuestTrackerInterface          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQuestAssetReference>CallFunc_GetOngoingQuests_OutOngoingQuests                       (ReferenceParm)

void UWBP_DB_QuestsDebugPanel_C::UpdateAcceptedQuestsList(TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTrackerInterface_QuestTrackerInterface, TArray<struct FQuestAssetReference>& CallFunc_GetOngoingQuests_OutOngoingQuests)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "UpdateAcceptedQuestsList");

	Params::UWBP_DB_QuestsDebugPanel_C_UpdateAcceptedQuestsList_Params Parms{};

	Parms.CallFunc_GetQuestTrackerInterface_QuestTrackerInterface = CallFunc_GetQuestTrackerInterface_QuestTrackerInterface;
	Parms.CallFunc_GetOngoingQuests_OutOngoingQuests = CallFunc_GetOngoingQuests_OutOngoingQuests;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.UpdateAllQuestsList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      FilterString                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FQuestAssetReference>QuestAssetReferences                                             (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId>     CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList             (ReferenceParm)
// struct FPrimaryAssetId             CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetObjectFromPrimaryAssetId_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestDataAsset*             K2Node_DynamicCast_AsQuest_Data_Asset                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UQuestDataAsset>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue        (None)
// bool                               CallFunc_DoesQuestMatchFilter_DoesMatchFilterText                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestsDebugPanel_C::UpdateAllQuestsList(const class FString& FilterString, const TArray<struct FQuestAssetReference>& QuestAssetReferences, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList, const struct FPrimaryAssetId& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_GetObjectFromPrimaryAssetId_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UQuestDataAsset* K2Node_DynamicCast_AsQuest_Data_Asset, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UQuestDataAsset> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FQuestAssetReference& CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue, bool CallFunc_DoesQuestMatchFilter_DoesMatchFilterText, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "UpdateAllQuestsList");

	Params::UWBP_DB_QuestsDebugPanel_C_UpdateAllQuestsList_Params Parms{};

	Parms.FilterString = FilterString;
	Parms.QuestAssetReferences = QuestAssetReferences;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList = CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetObjectFromPrimaryAssetId_ReturnValue = CallFunc_GetObjectFromPrimaryAssetId_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsQuest_Data_Asset = K2Node_DynamicCast_AsQuest_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue = CallFunc_MakeQuestAssetReferenceFromDataAsset_ReturnValue;
	Parms.CallFunc_DoesQuestMatchFilter_DoesMatchFilterText = CallFunc_DoesQuestMatchFilter_DoesMatchFilterText;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.RefreshScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DB_QuestsDebugPanel_C::RefreshScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "RefreshScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.Completed_2577952E4321D4E259A1E0983559492E
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             Loaded                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_DB_QuestsDebugPanel_C::Completed_2577952E4321D4E259A1E0983559492E(TArray<class UObject*>& Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "Completed_2577952E4321D4E259A1E0983559492E");

	Params::UWBP_DB_QuestsDebugPanel_C_Completed_2577952E4321D4E259A1E0983559492E_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DB_QuestsDebugPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.BndEvt__WBP_DB_QuestsDebugPanel_Button_Accept_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_QuestsDebugPanel_C::BndEvt__WBP_DB_QuestsDebugPanel_Button_Accept_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "BndEvt__WBP_DB_QuestsDebugPanel_Button_Accept_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.BndEvt__WBP_DB_QuestsDebugPanel_AllQuestsList_K2Node_ComponentBoundEvent_2_OnQuestSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FQuestAssetReference        QuestAssetReference                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_DB_QuestsDebugPanel_C::BndEvt__WBP_DB_QuestsDebugPanel_AllQuestsList_K2Node_ComponentBoundEvent_2_OnQuestSelected__DelegateSignature(const struct FQuestAssetReference& QuestAssetReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "BndEvt__WBP_DB_QuestsDebugPanel_AllQuestsList_K2Node_ComponentBoundEvent_2_OnQuestSelected__DelegateSignature");

	Params::UWBP_DB_QuestsDebugPanel_C_BndEvt__WBP_DB_QuestsDebugPanel_AllQuestsList_K2Node_ComponentBoundEvent_2_OnQuestSelected__DelegateSignature_Params Parms{};

	Parms.QuestAssetReference = QuestAssetReference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.BndEvt__WBP_DB_QuestsDebugPanel_AcceptedQuestsList_K2Node_ComponentBoundEvent_3_OnQuestSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FQuestAssetReference        QuestAssetReference                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_DB_QuestsDebugPanel_C::BndEvt__WBP_DB_QuestsDebugPanel_AcceptedQuestsList_K2Node_ComponentBoundEvent_3_OnQuestSelected__DelegateSignature(const struct FQuestAssetReference& QuestAssetReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "BndEvt__WBP_DB_QuestsDebugPanel_AcceptedQuestsList_K2Node_ComponentBoundEvent_3_OnQuestSelected__DelegateSignature");

	Params::UWBP_DB_QuestsDebugPanel_C_BndEvt__WBP_DB_QuestsDebugPanel_AcceptedQuestsList_K2Node_ComponentBoundEvent_3_OnQuestSelected__DelegateSignature_Params Parms{};

	Parms.QuestAssetReference = QuestAssetReference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.BndEvt__WBP_DB_QuestsDebugPanel_Button_Cancel_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_QuestsDebugPanel_C::BndEvt__WBP_DB_QuestsDebugPanel_Button_Cancel_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "BndEvt__WBP_DB_QuestsDebugPanel_Button_Cancel_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.BndEvt__WBP_DB_QuestsDebugPanel_Button_FilterQuests_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_QuestsDebugPanel_C::BndEvt__WBP_DB_QuestsDebugPanel_Button_FilterQuests_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "BndEvt__WBP_DB_QuestsDebugPanel_Button_FilterQuests_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.BndEvt__WBP_DB_QuestsDebugPanel_EditableText_FilterText_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestsDebugPanel_C::BndEvt__WBP_DB_QuestsDebugPanel_EditableText_FilterText_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "BndEvt__WBP_DB_QuestsDebugPanel_EditableText_FilterText_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature");

	Params::UWBP_DB_QuestsDebugPanel_C_BndEvt__WBP_DB_QuestsDebugPanel_EditableText_FilterText_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.BndEvt__WBP_DB_QuestsDebugPanel_EditableText_FilterText_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_DB_QuestsDebugPanel_C::BndEvt__WBP_DB_QuestsDebugPanel_EditableText_FilterText_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "BndEvt__WBP_DB_QuestsDebugPanel_EditableText_FilterText_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature");

	Params::UWBP_DB_QuestsDebugPanel_C_BndEvt__WBP_DB_QuestsDebugPanel_EditableText_FilterText_K2Node_ComponentBoundEvent_6_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.BndEvt__WBP_DB_QuestsDebugPanel_CheckBox_130_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestsDebugPanel_C::BndEvt__WBP_DB_QuestsDebugPanel_CheckBox_130_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "BndEvt__WBP_DB_QuestsDebugPanel_CheckBox_130_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWBP_DB_QuestsDebugPanel_C_BndEvt__WBP_DB_QuestsDebugPanel_CheckBox_130_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.BndEvt__WBP_DB_QuestsDebugPanel_Button_Complete_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_QuestsDebugPanel_C::BndEvt__WBP_DB_QuestsDebugPanel_Button_Complete_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "BndEvt__WBP_DB_QuestsDebugPanel_Button_Complete_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.BndEvt__WBP_DB_QuestsDebugPanel_Button_CompleteAll_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_QuestsDebugPanel_C::BndEvt__WBP_DB_QuestsDebugPanel_Button_CompleteAll_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "BndEvt__WBP_DB_QuestsDebugPanel_Button_CompleteAll_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.BndEvt__WBP_DB_QuestsDebugPanel_Button_Advance_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_QuestsDebugPanel_C::BndEvt__WBP_DB_QuestsDebugPanel_Button_Advance_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "BndEvt__WBP_DB_QuestsDebugPanel_Button_Advance_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_QuestsDebugPanel.WBP_DB_QuestsDebugPanel_C.ExecuteUbergraph_WBP_DB_QuestsDebugPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             Temp_object_Variable                                             (ReferenceParm)
// bool                               CallFunc_GetSelectedQuest_HasSelectedQuest                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_GetSelectedQuest_SelectedQuest                          (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetQuestFilename_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// enum class EQuestRequirementsPolicyTemp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuestRequirementsPolicyTemp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId>     CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList             (ReferenceParm)
// TArray<class FName>                Temp_name_Variable                                               (ConstParm, ReferenceParm)
// class UAsyncActionLoadPrimaryAssetList*CallFunc_AsyncLoadPrimaryAssetList_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        K2Node_ComponentBoundEvent_QuestAssetReference_1                 (None)
// struct FQuestAssetReference        K2Node_ComponentBoundEvent_QuestAssetReference                   (None)
// bool                               CallFunc_GetSelectedQuest_HasSelectedQuest_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_GetSelectedQuest_SelectedQuest_1                        (None)
// class FString                      CallFunc_GetQuestFilename_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<class UObject*>             K2Node_CustomEvent_Loaded                                        (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTrackerInterface_QuestTrackerInterface          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelectedQuest_HasSelectedQuest_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_GetSelectedQuest_SelectedQuest_2                        (None)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerDebugInterface>CallFunc_GetQuestTrackerDebugInterface_QuestTrackerInterface     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuestRequirementsPolicyK2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelectedQuest_HasSelectedQuest_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_GetSelectedQuest_SelectedQuest_3                        (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetQuestFilename_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_QuestsDebugPanel_C::ExecuteUbergraph_WBP_DB_QuestsDebugPanel(int32 EntryPoint, TArray<class UObject*>& Temp_object_Variable, bool CallFunc_GetSelectedQuest_HasSelectedQuest, const struct FQuestAssetReference& CallFunc_GetSelectedQuest_SelectedQuest, bool Temp_bool_Variable, const class FString& CallFunc_GetQuestFilename_ReturnValue, enum class EQuestRequirementsPolicy Temp_byte_Variable, enum class EQuestRequirementsPolicy Temp_byte_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList, TArray<class FName>& Temp_name_Variable, class UAsyncActionLoadPrimaryAssetList* CallFunc_AsyncLoadPrimaryAssetList_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQuestAssetReference& K2Node_ComponentBoundEvent_QuestAssetReference_1, const struct FQuestAssetReference& K2Node_ComponentBoundEvent_QuestAssetReference, bool CallFunc_GetSelectedQuest_HasSelectedQuest_1, const struct FQuestAssetReference& CallFunc_GetSelectedQuest_SelectedQuest_1, const class FString& CallFunc_GetQuestFilename_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, TArray<class UObject*>& K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTrackerInterface_QuestTrackerInterface, bool CallFunc_GetSelectedQuest_HasSelectedQuest_2, const struct FQuestAssetReference& CallFunc_GetSelectedQuest_SelectedQuest_2, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FText K2Node_ComponentBoundEvent_Text, bool K2Node_ComponentBoundEvent_bIsChecked, TScriptInterface<class IQuestTrackerDebugInterface> CallFunc_GetQuestTrackerDebugInterface_QuestTrackerInterface, enum class EQuestRequirementsPolicy K2Node_Select_Default, bool CallFunc_GetSelectedQuest_HasSelectedQuest_3, const struct FQuestAssetReference& CallFunc_GetSelectedQuest_SelectedQuest_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_GetQuestFilename_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_QuestsDebugPanel_C", "ExecuteUbergraph_WBP_DB_QuestsDebugPanel");

	Params::UWBP_DB_QuestsDebugPanel_C_ExecuteUbergraph_WBP_DB_QuestsDebugPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetSelectedQuest_HasSelectedQuest = CallFunc_GetSelectedQuest_HasSelectedQuest;
	Parms.CallFunc_GetSelectedQuest_SelectedQuest = CallFunc_GetSelectedQuest_SelectedQuest;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetQuestFilename_ReturnValue = CallFunc_GetQuestFilename_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList = CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_AsyncLoadPrimaryAssetList_ReturnValue = CallFunc_AsyncLoadPrimaryAssetList_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_QuestAssetReference_1 = K2Node_ComponentBoundEvent_QuestAssetReference_1;
	Parms.K2Node_ComponentBoundEvent_QuestAssetReference = K2Node_ComponentBoundEvent_QuestAssetReference;
	Parms.CallFunc_GetSelectedQuest_HasSelectedQuest_1 = CallFunc_GetSelectedQuest_HasSelectedQuest_1;
	Parms.CallFunc_GetSelectedQuest_SelectedQuest_1 = CallFunc_GetSelectedQuest_SelectedQuest_1;
	Parms.CallFunc_GetQuestFilename_ReturnValue_1 = CallFunc_GetQuestFilename_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetQuestTrackerInterface_QuestTrackerInterface = CallFunc_GetQuestTrackerInterface_QuestTrackerInterface;
	Parms.CallFunc_GetSelectedQuest_HasSelectedQuest_2 = CallFunc_GetSelectedQuest_HasSelectedQuest_2;
	Parms.CallFunc_GetSelectedQuest_SelectedQuest_2 = CallFunc_GetSelectedQuest_SelectedQuest_2;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.CallFunc_GetQuestTrackerDebugInterface_QuestTrackerInterface = CallFunc_GetQuestTrackerDebugInterface_QuestTrackerInterface;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSelectedQuest_HasSelectedQuest_3 = CallFunc_GetSelectedQuest_HasSelectedQuest_3;
	Parms.CallFunc_GetSelectedQuest_SelectedQuest_3 = CallFunc_GetSelectedQuest_SelectedQuest_3;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetQuestFilename_ReturnValue_2 = CallFunc_GetQuestFilename_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


