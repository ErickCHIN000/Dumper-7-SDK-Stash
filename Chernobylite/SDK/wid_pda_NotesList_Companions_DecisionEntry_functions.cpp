#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_pda_NotesList_Companions_DecisionEntry.wid_pda_NotesList_Companions_DecisionEntry_C
// (None)

class UClass* UWid_pda_NotesList_Companions_DecisionEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_pda_NotesList_Companions_DecisionEntry_C");

	return Clss;
}


// wid_pda_NotesList_Companions_DecisionEntry_C wid_pda_NotesList_Companions_DecisionEntry.Default__wid_pda_NotesList_Companions_DecisionEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_pda_NotesList_Companions_DecisionEntry_C* UWid_pda_NotesList_Companions_DecisionEntry_C::GetDefaultObj()
{
	static class UWid_pda_NotesList_Companions_DecisionEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_pda_NotesList_Companions_DecisionEntry_C*>(UWid_pda_NotesList_Companions_DecisionEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_pda_NotesList_Companions_DecisionEntry.wid_pda_NotesList_Companions_DecisionEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_NotesList_Companions_DecisionEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_NotesList_Companions_DecisionEntry_C", "PreConstruct");

	Params::UWid_pda_NotesList_Companions_DecisionEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_NotesList_Companions_DecisionEntry.wid_pda_NotesList_Companions_DecisionEntry_C.ExecuteUbergraph_wid_pda_NotesList_Companions_DecisionEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_pda_NotesList_Companions_DecisionEntry_C::ExecuteUbergraph_wid_pda_NotesList_Companions_DecisionEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_NotesList_Companions_DecisionEntry_C", "ExecuteUbergraph_wid_pda_NotesList_Companions_DecisionEntry");

	Params::UWid_pda_NotesList_Companions_DecisionEntry_C_ExecuteUbergraph_wid_pda_NotesList_Companions_DecisionEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


