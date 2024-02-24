#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_ChallengesDebugPanel.WBP_DB_ChallengesDebugPanel_C
// (None)

class UClass* UWBP_DB_ChallengesDebugPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_ChallengesDebugPanel_C");

	return Clss;
}


// WBP_DB_ChallengesDebugPanel_C WBP_DB_ChallengesDebugPanel.Default__WBP_DB_ChallengesDebugPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_ChallengesDebugPanel_C* UWBP_DB_ChallengesDebugPanel_C::GetDefaultObj()
{
	static class UWBP_DB_ChallengesDebugPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_ChallengesDebugPanel_C*>(UWBP_DB_ChallengesDebugPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_ChallengesDebugPanel.WBP_DB_ChallengesDebugPanel_C.UpdateAllAndCompletedList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      AllFilterString                                                  (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<class UObject*>             CompletedChallenges                                              (Edit, BlueprintVisible)
// TArray<class UObject*>             FilteredAllChallenges                                            (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FPrimaryAssetId>     CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList             (ReferenceParm)
// struct FPrimaryAssetId             CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class UObject*                     CallFunc_GetObjectFromPrimaryAssetId_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IChallengeDefinition>K2Node_DynamicCast_AsChallenge_Definition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsComplete_Result                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesChallengeMatchFilter_Result                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_ChallengesDebugPanel_C::UpdateAllAndCompletedList(const class FString& AllFilterString, const TArray<class UObject*>& CompletedChallenges, const TArray<class UObject*>& FilteredAllChallenges, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FPrimaryAssetId>& CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList, const struct FPrimaryAssetId& CallFunc_Array_Get_Item, class FText CallFunc_GetText_ReturnValue, class UObject* CallFunc_GetObjectFromPrimaryAssetId_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, TScriptInterface<class IChallengeDefinition> K2Node_DynamicCast_AsChallenge_Definition, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsComplete_Result, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_DoesChallengeMatchFilter_Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengesDebugPanel_C", "UpdateAllAndCompletedList");

	Params::UWBP_DB_ChallengesDebugPanel_C_UpdateAllAndCompletedList_Params Parms{};

	Parms.AllFilterString = AllFilterString;
	Parms.CompletedChallenges = CompletedChallenges;
	Parms.FilteredAllChallenges = FilteredAllChallenges;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList = CallFunc_GetPrimaryAssetIdList_OutPrimaryAssetIdList;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetObjectFromPrimaryAssetId_ReturnValue = CallFunc_GetObjectFromPrimaryAssetId_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsChallenge_Definition = K2Node_DynamicCast_AsChallenge_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsComplete_Result = CallFunc_IsComplete_Result;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_DoesChallengeMatchFilter_Result = CallFunc_DoesChallengeMatchFilter_Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_ChallengesDebugPanel.WBP_DB_ChallengesDebugPanel_C.UpdateWatchedList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             WatchedChallenges                                                (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TScriptInterface<class IChallengeProgress>>CallFunc_GetWatchedChallenges_OutChallenges                      (ReferenceParm)
// TScriptInterface<class IChallengeProgress>CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_ChallengesDebugPanel_C::UpdateWatchedList(const TArray<class UObject*>& WatchedChallenges, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<TScriptInterface<class IChallengeProgress>>& CallFunc_GetWatchedChallenges_OutChallenges, TScriptInterface<class IChallengeProgress> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengesDebugPanel_C", "UpdateWatchedList");

	Params::UWBP_DB_ChallengesDebugPanel_C_UpdateWatchedList_Params Parms{};

	Parms.WatchedChallenges = WatchedChallenges;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetWatchedChallenges_OutChallenges = CallFunc_GetWatchedChallenges_OutChallenges;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_ChallengesDebugPanel.WBP_DB_ChallengesDebugPanel_C.IsComplete
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IChallengeSystemObservable>ChallengeSystem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IChallengeDefinition>Challenge                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FExperienceStateID          CallFunc_GetID_ReturnValue                                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChallengeComplete_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_ChallengesDebugPanel_C::IsComplete(TScriptInterface<class IChallengeSystemObservable> ChallengeSystem, TScriptInterface<class IChallengeDefinition> Challenge, bool* Result, const struct FExperienceStateID& CallFunc_GetID_ReturnValue, bool CallFunc_IsChallengeComplete_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengesDebugPanel_C", "IsComplete");

	Params::UWBP_DB_ChallengesDebugPanel_C_IsComplete_Params Parms{};

	Parms.ChallengeSystem = ChallengeSystem;
	Parms.Challenge = Challenge;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_IsChallengeComplete_ReturnValue = CallFunc_IsChallengeComplete_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function WBP_DB_ChallengesDebugPanel.WBP_DB_ChallengesDebugPanel_C.DoesChallengeMatchFilter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IChallengeDefinition>Challenge                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Filter                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTitle_ReturnValue                                    (None)
// class FString                      CallFunc_Trim_ReturnValue                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_TrimTrailing_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDescription_ReturnValue                              (None)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_ChallengesDebugPanel_C::DoesChallengeMatchFilter(TScriptInterface<class IChallengeDefinition> Challenge, const class FString& Filter, bool* Result, class FText CallFunc_GetTitle_ReturnValue, const class FString& CallFunc_Trim_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_TrimTrailing_ReturnValue, class FText CallFunc_GetDescription_ReturnValue, bool CallFunc_Contains_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengesDebugPanel_C", "DoesChallengeMatchFilter");

	Params::UWBP_DB_ChallengesDebugPanel_C_DoesChallengeMatchFilter_Params Parms{};

	Parms.Challenge = Challenge;
	Parms.Filter = Filter;
	Parms.CallFunc_GetTitle_ReturnValue = CallFunc_GetTitle_ReturnValue;
	Parms.CallFunc_Trim_ReturnValue = CallFunc_Trim_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_TrimTrailing_ReturnValue = CallFunc_TrimTrailing_ReturnValue;
	Parms.CallFunc_GetDescription_ReturnValue = CallFunc_GetDescription_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue_1 = CallFunc_Contains_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function WBP_DB_ChallengesDebugPanel.WBP_DB_ChallengesDebugPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DB_ChallengesDebugPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengesDebugPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_ChallengesDebugPanel.WBP_DB_ChallengesDebugPanel_C.BndEvt__WBP_DB_ChallengesDebugPanel_Button_Refresh_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_ChallengesDebugPanel_C::BndEvt__WBP_DB_ChallengesDebugPanel_Button_Refresh_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengesDebugPanel_C", "BndEvt__WBP_DB_ChallengesDebugPanel_Button_Refresh_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_ChallengesDebugPanel.WBP_DB_ChallengesDebugPanel_C.BndEvt__WBP_DB_ChallengesDebugPanel_Button_ResetWatched_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_ChallengesDebugPanel_C::BndEvt__WBP_DB_ChallengesDebugPanel_Button_ResetWatched_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengesDebugPanel_C", "BndEvt__WBP_DB_ChallengesDebugPanel_Button_ResetWatched_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_ChallengesDebugPanel.WBP_DB_ChallengesDebugPanel_C.OnWatchedChallengesChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DB_ChallengesDebugPanel_C::OnWatchedChallengesChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengesDebugPanel_C", "OnWatchedChallengesChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_ChallengesDebugPanel.WBP_DB_ChallengesDebugPanel_C.BndEvt__WBP_DB_ChallengesDebugPanel_List_WatchedChallenges_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_ChallengesDebugPanel_C::BndEvt__WBP_DB_ChallengesDebugPanel_List_WatchedChallenges_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengesDebugPanel_C", "BndEvt__WBP_DB_ChallengesDebugPanel_List_WatchedChallenges_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature");

	Params::UWBP_DB_ChallengesDebugPanel_C_BndEvt__WBP_DB_ChallengesDebugPanel_List_WatchedChallenges_K2Node_ComponentBoundEvent_2_OnListItemSelectionChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_ChallengesDebugPanel.WBP_DB_ChallengesDebugPanel_C.BndEvt__WBP_DB_ChallengesDebugPanel_List_CompletedChallenges_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_ChallengesDebugPanel_C::BndEvt__WBP_DB_ChallengesDebugPanel_List_CompletedChallenges_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengesDebugPanel_C", "BndEvt__WBP_DB_ChallengesDebugPanel_List_CompletedChallenges_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature");

	Params::UWBP_DB_ChallengesDebugPanel_C_BndEvt__WBP_DB_ChallengesDebugPanel_List_CompletedChallenges_K2Node_ComponentBoundEvent_3_OnListItemSelectionChangedDynamic__DelegateSignature_Params Parms{};

	Parms.Item = Item;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_ChallengesDebugPanel.WBP_DB_ChallengesDebugPanel_C.BndEvt__WBP_DB_ChallengesDebugPanel_Button_ResetCompleted_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_ChallengesDebugPanel_C::BndEvt__WBP_DB_ChallengesDebugPanel_Button_ResetCompleted_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengesDebugPanel_C", "BndEvt__WBP_DB_ChallengesDebugPanel_Button_ResetCompleted_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_ChallengesDebugPanel.WBP_DB_ChallengesDebugPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DB_ChallengesDebugPanel_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengesDebugPanel_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_ChallengesDebugPanel.WBP_DB_ChallengesDebugPanel_C.BndEvt__WBP_DB_ChallengesDebugPanel_Button_CompleteWatched_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_ChallengesDebugPanel_C::BndEvt__WBP_DB_ChallengesDebugPanel_Button_CompleteWatched_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengesDebugPanel_C", "BndEvt__WBP_DB_ChallengesDebugPanel_Button_CompleteWatched_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_ChallengesDebugPanel.WBP_DB_ChallengesDebugPanel_C.OnChallengeCompleted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExperienceStateID          ChallengeID                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_ChallengesDebugPanel_C::OnChallengeCompleted(struct FExperienceStateID& ChallengeID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengesDebugPanel_C", "OnChallengeCompleted");

	Params::UWBP_DB_ChallengesDebugPanel_C_OnChallengeCompleted_Params Parms{};

	Parms.ChallengeID = ChallengeID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_ChallengesDebugPanel.WBP_DB_ChallengesDebugPanel_C.ExecuteUbergraph_WBP_DB_ChallengesDebugPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_BP_GetSelectedItem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IChallengeProgress>K2Node_DynamicCast_AsChallenge_Progress                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FExperienceStateID          CallFunc_GetID_ReturnValue                                       (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToDebugString_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsSelected_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsSelected                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_BP_GetSelectedItem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IChallengeDefinition>K2Node_DynamicCast_AsChallenge_Definition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FExperienceStateID          CallFunc_GetID_ReturnValue_1                                     (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToDebugString_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FExperienceStateID          K2Node_CustomEvent_ChallengeID                                   (ConstParm, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_BP_GetSelectedItem_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IChallengeProgress>K2Node_DynamicCast_AsChallenge_Progress_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class IInterface>      Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FExperienceStateID          CallFunc_GetID_ReturnValue_2                                     (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToDebugString_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_FindFirstImplementor_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IChallengeSystemObservable>K2Node_DynamicCast_AsChallenge_System_Observable                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_ChallengesDebugPanel_C::ExecuteUbergraph_WBP_DB_ChallengesDebugPanel(int32 EntryPoint, const class FString& CallFunc_Concat_StrStr_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, TScriptInterface<class IChallengeProgress> K2Node_DynamicCast_AsChallenge_Progress, bool K2Node_DynamicCast_bSuccess, const struct FExperienceStateID& CallFunc_GetID_ReturnValue, const class FString& CallFunc_ToDebugString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UObject* K2Node_ComponentBoundEvent_Item_1, bool K2Node_ComponentBoundEvent_bIsSelected_1, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsSelected, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue_1, TScriptInterface<class IChallengeDefinition> K2Node_DynamicCast_AsChallenge_Definition, bool K2Node_DynamicCast_bSuccess_1, const struct FExperienceStateID& CallFunc_GetID_ReturnValue_1, const class FString& CallFunc_ToDebugString_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const struct FExperienceStateID& K2Node_CustomEvent_ChallengeID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue_2, TScriptInterface<class IChallengeProgress> K2Node_DynamicCast_AsChallenge_Progress_1, bool K2Node_DynamicCast_bSuccess_2, TSubclassOf<class IInterface> Temp_class_Variable, const struct FExperienceStateID& CallFunc_GetID_ReturnValue_2, const class FString& CallFunc_ToDebugString_ReturnValue_2, class UObject* CallFunc_FindFirstImplementor_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, TScriptInterface<class IChallengeSystemObservable> K2Node_DynamicCast_AsChallenge_System_Observable, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_ChallengesDebugPanel_C", "ExecuteUbergraph_WBP_DB_ChallengesDebugPanel");

	Params::UWBP_DB_ChallengesDebugPanel_C_ExecuteUbergraph_WBP_DB_ChallengesDebugPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_BP_GetSelectedItem_ReturnValue = CallFunc_BP_GetSelectedItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsChallenge_Progress = K2Node_DynamicCast_AsChallenge_Progress;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetID_ReturnValue = CallFunc_GetID_ReturnValue;
	Parms.CallFunc_ToDebugString_ReturnValue = CallFunc_ToDebugString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Item_1 = K2Node_ComponentBoundEvent_Item_1;
	Parms.K2Node_ComponentBoundEvent_bIsSelected_1 = K2Node_ComponentBoundEvent_bIsSelected_1;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_ComponentBoundEvent_bIsSelected = K2Node_ComponentBoundEvent_bIsSelected;
	Parms.CallFunc_BP_GetSelectedItem_ReturnValue_1 = CallFunc_BP_GetSelectedItem_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsChallenge_Definition = K2Node_DynamicCast_AsChallenge_Definition;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetID_ReturnValue_1 = CallFunc_GetID_ReturnValue_1;
	Parms.CallFunc_ToDebugString_ReturnValue_1 = CallFunc_ToDebugString_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_CustomEvent_ChallengeID = K2Node_CustomEvent_ChallengeID;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_BP_GetSelectedItem_ReturnValue_2 = CallFunc_BP_GetSelectedItem_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsChallenge_Progress_1 = K2Node_DynamicCast_AsChallenge_Progress_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_GetID_ReturnValue_2 = CallFunc_GetID_ReturnValue_2;
	Parms.CallFunc_ToDebugString_ReturnValue_2 = CallFunc_ToDebugString_ReturnValue_2;
	Parms.CallFunc_FindFirstImplementor_ReturnValue = CallFunc_FindFirstImplementor_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsChallenge_System_Observable = K2Node_DynamicCast_AsChallenge_System_Observable;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


