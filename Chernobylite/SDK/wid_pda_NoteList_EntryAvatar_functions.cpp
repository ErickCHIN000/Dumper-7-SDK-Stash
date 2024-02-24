#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_pda_NoteList_EntryAvatar.wid_pda_NoteList_EntryAvatar_C
// (None)

class UClass* UWid_pda_NoteList_EntryAvatar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_pda_NoteList_EntryAvatar_C");

	return Clss;
}


// wid_pda_NoteList_EntryAvatar_C wid_pda_NoteList_EntryAvatar.Default__wid_pda_NoteList_EntryAvatar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_pda_NoteList_EntryAvatar_C* UWid_pda_NoteList_EntryAvatar_C::GetDefaultObj()
{
	static class UWid_pda_NoteList_EntryAvatar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_pda_NoteList_EntryAvatar_C*>(UWid_pda_NoteList_EntryAvatar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_pda_NoteList_EntryAvatar.wid_pda_NoteList_EntryAvatar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_pda_NoteList_EntryAvatar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_NoteList_EntryAvatar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_NoteList_EntryAvatar.wid_pda_NoteList_EntryAvatar_C.UpdateVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_NoteList_EntryAvatar_C::UpdateVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_NoteList_EntryAvatar_C", "UpdateVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_NoteList_EntryAvatar.wid_pda_NoteList_EntryAvatar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_NoteList_EntryAvatar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_NoteList_EntryAvatar_C", "PreConstruct");

	Params::UWid_pda_NoteList_EntryAvatar_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_NoteList_EntryAvatar.wid_pda_NoteList_EntryAvatar_C.ExecuteUbergraph_wid_pda_NoteList_EntryAvatar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_NoteList_EntryAvatar_C::ExecuteUbergraph_wid_pda_NoteList_EntryAvatar(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_NoteList_EntryAvatar_C", "ExecuteUbergraph_wid_pda_NoteList_EntryAvatar");

	Params::UWid_pda_NoteList_EntryAvatar_C_ExecuteUbergraph_wid_pda_NoteList_EntryAvatar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


