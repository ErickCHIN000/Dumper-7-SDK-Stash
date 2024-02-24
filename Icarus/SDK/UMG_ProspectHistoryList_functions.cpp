#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ProspectHistoryList.UMG_ProspectHistoryList_C
// (None)

class UClass* UUMG_ProspectHistoryList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ProspectHistoryList_C");

	return Clss;
}


// UMG_ProspectHistoryList_C UMG_ProspectHistoryList.Default__UMG_ProspectHistoryList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ProspectHistoryList_C* UUMG_ProspectHistoryList_C::GetDefaultObj()
{
	static class UUMG_ProspectHistoryList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ProspectHistoryList_C*>(UUMG_ProspectHistoryList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ProspectHistoryList.UMG_ProspectHistoryList_C.AddProspectToList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProspectHistoryResult*      ProspectResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProspectHistoryList_C::AddProspectToList(class UProspectHistoryResult* ProspectResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectHistoryList_C", "AddProspectToList");

	Params::UUMG_ProspectHistoryList_C_AddProspectToList_Params Parms{};

	Parms.ProspectResult = ProspectResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProspectHistoryList.UMG_ProspectHistoryList_C.RefreshList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ClaimedProspect                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMatchmakingSubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UProspectHistoryResult*>CallFunc_GetProspectHistory_ReturnValue                          (ReferenceParm)
// class UProspectHistoryResult*      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProspectHistoryList_C::RefreshList(bool ClaimedProspect, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, TArray<class UProspectHistoryResult*>& CallFunc_GetProspectHistory_ReturnValue, class UProspectHistoryResult* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectHistoryList_C", "RefreshList");

	Params::UUMG_ProspectHistoryList_C_RefreshList_Params Parms{};

	Parms.ClaimedProspect = ClaimedProspect;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetProspectHistory_ReturnValue = CallFunc_GetProspectHistory_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProspectHistoryList.UMG_ProspectHistoryList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ProspectHistoryList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectHistoryList_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ProspectHistoryList.UMG_ProspectHistoryList_C.ExecuteUbergraph_UMG_ProspectHistoryList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UUMG_ProspectHistoryList_C::ExecuteUbergraph_UMG_ProspectHistoryList(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectHistoryList_C", "ExecuteUbergraph_UMG_ProspectHistoryList");

	Params::UUMG_ProspectHistoryList_C_ExecuteUbergraph_UMG_ProspectHistoryList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProspectHistoryList.UMG_ProspectHistoryList_C.SelectProspect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFProspectServerInfo        ProspectInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProspectHistoryList_C::SelectProspect__DelegateSignature(const struct FFProspectServerInfo& ProspectInfo, bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectHistoryList_C", "SelectProspect__DelegateSignature");

	Params::UUMG_ProspectHistoryList_C_SelectProspect__DelegateSignature_Params Parms{};

	Parms.ProspectInfo = ProspectInfo;
	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}

}


