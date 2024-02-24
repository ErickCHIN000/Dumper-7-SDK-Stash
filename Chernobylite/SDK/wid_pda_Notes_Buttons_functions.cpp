#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_pda_Notes_Buttons.wid_pda_Notes_Buttons_C
// (None)

class UClass* UWid_pda_Notes_Buttons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_pda_Notes_Buttons_C");

	return Clss;
}


// wid_pda_Notes_Buttons_C wid_pda_Notes_Buttons.Default__wid_pda_Notes_Buttons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_pda_Notes_Buttons_C* UWid_pda_Notes_Buttons_C::GetDefaultObj()
{
	static class UWid_pda_Notes_Buttons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_pda_Notes_Buttons_C*>(UWid_pda_Notes_Buttons_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_pda_Notes_Buttons.wid_pda_Notes_Buttons_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Notes_ButtonsInfo   Info                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_Notes_Buttons_C::Update(const struct FStruct_Notes_ButtonsInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_Buttons_C", "Update");

	Params::UWid_pda_Notes_Buttons_C_Update_Params Parms{};

	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_Notes_Buttons.wid_pda_Notes_Buttons_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_Notes_Buttons_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_Buttons_C", "PreConstruct");

	Params::UWid_pda_Notes_Buttons_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_Notes_Buttons.wid_pda_Notes_Buttons_C.ExecuteUbergraph_wid_pda_Notes_Buttons
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_Notes_Buttons_C::ExecuteUbergraph_wid_pda_Notes_Buttons(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Notes_Buttons_C", "ExecuteUbergraph_wid_pda_Notes_Buttons");

	Params::UWid_pda_Notes_Buttons_C_ExecuteUbergraph_wid_pda_Notes_Buttons_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


