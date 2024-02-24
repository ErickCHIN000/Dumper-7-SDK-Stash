#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_Realms_sw_ListEntry.WBP_DB_Realms_sw_ListEntry_C
// (None)

class UClass* UWBP_DB_Realms_sw_ListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_Realms_sw_ListEntry_C");

	return Clss;
}


// WBP_DB_Realms_sw_ListEntry_C WBP_DB_Realms_sw_ListEntry.Default__WBP_DB_Realms_sw_ListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_Realms_sw_ListEntry_C* UWBP_DB_Realms_sw_ListEntry_C::GetDefaultObj()
{
	static class UWBP_DB_Realms_sw_ListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_Realms_sw_ListEntry_C*>(UWBP_DB_Realms_sw_ListEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_Realms_sw_ListEntry.WBP_DB_Realms_sw_ListEntry_C.UpdateTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Realms_sw_ListEntry_C::UpdateTooltip(class FText Text, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Realms_sw_ListEntry_C", "UpdateTooltip");

	Params::UWBP_DB_Realms_sw_ListEntry_C_UpdateTooltip_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Realms_sw_ListEntry.WBP_DB_Realms_sw_ListEntry_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Realms_sw_ListEntry_C::SetEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Realms_sw_ListEntry_C", "SetEnabled");

	Params::UWBP_DB_Realms_sw_ListEntry_C_SetEnabled_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Realms_sw_ListEntry.WBP_DB_Realms_sw_ListEntry_C.SetPlayerCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerCount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_DB_Realms_sw_ListEntry_C::SetPlayerCount(int32 PlayerCount, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Realms_sw_ListEntry_C", "SetPlayerCount");

	Params::UWBP_DB_Realms_sw_ListEntry_C_SetPlayerCount_Params Parms{};

	Parms.PlayerCount = PlayerCount;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Realms_sw_ListEntry.WBP_DB_Realms_sw_ListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DB_Realms_sw_ListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Realms_sw_ListEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Realms_sw_ListEntry.WBP_DB_Realms_sw_ListEntry_C.BndEvt__RootButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Realms_sw_ListEntry_C::BndEvt__RootButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Realms_sw_ListEntry_C", "BndEvt__RootButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Realms_sw_ListEntry.WBP_DB_Realms_sw_ListEntry_C.ExecuteUbergraph_WBP_DB_Realms_sw_ListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_JoinStringArray_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)

void UWBP_DB_Realms_sw_ListEntry_C::ExecuteUbergraph_WBP_DB_Realms_sw_ListEntry(int32 EntryPoint, const class FString& CallFunc_JoinStringArray_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Realms_sw_ListEntry_C", "ExecuteUbergraph_WBP_DB_Realms_sw_ListEntry");

	Params::UWBP_DB_Realms_sw_ListEntry_C_ExecuteUbergraph_WBP_DB_Realms_sw_ListEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_JoinStringArray_ReturnValue = CallFunc_JoinStringArray_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Realms_sw_ListEntry.WBP_DB_Realms_sw_ListEntry_C.JoinClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_DB_Realms_sw_ListEntry_C::JoinClicked__DelegateSignature(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Realms_sw_ListEntry_C", "JoinClicked__DelegateSignature");

	Params::UWBP_DB_Realms_sw_ListEntry_C_JoinClicked__DelegateSignature_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}

}


