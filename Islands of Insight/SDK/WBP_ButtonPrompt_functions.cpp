#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ButtonPrompt.WBP_ButtonPrompt_C
// (None)

class UClass* UWBP_ButtonPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ButtonPrompt_C");

	return Clss;
}


// WBP_ButtonPrompt_C WBP_ButtonPrompt.Default__WBP_ButtonPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ButtonPrompt_C* UWBP_ButtonPrompt_C::GetDefaultObj()
{
	static class UWBP_ButtonPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ButtonPrompt_C*>(UWBP_ButtonPrompt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ButtonPrompt.WBP_ButtonPrompt_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ButtonPrompt_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonPrompt_C", "PreConstruct");

	Params::UWBP_ButtonPrompt_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ButtonPrompt.WBP_ButtonPrompt_C.ExecuteUbergraph_WBP_ButtonPrompt
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ButtonPrompt_C::ExecuteUbergraph_WBP_ButtonPrompt(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonPrompt_C", "ExecuteUbergraph_WBP_ButtonPrompt");

	Params::UWBP_ButtonPrompt_C_ExecuteUbergraph_WBP_ButtonPrompt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


