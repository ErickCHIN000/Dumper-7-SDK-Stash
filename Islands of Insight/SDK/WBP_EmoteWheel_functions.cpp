#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_EmoteWheel.WBP_EmoteWheel_C
// (None)

class UClass* UWBP_EmoteWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_EmoteWheel_C");

	return Clss;
}


// WBP_EmoteWheel_C WBP_EmoteWheel.Default__WBP_EmoteWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_EmoteWheel_C* UWBP_EmoteWheel_C::GetDefaultObj()
{
	static class UWBP_EmoteWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_EmoteWheel_C*>(UWBP_EmoteWheel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_EmoteWheel.WBP_EmoteWheel_C.OnExitClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_EmoteWheel_C::OnExitClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EmoteWheel_C", "OnExitClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EmoteWheel.WBP_EmoteWheel_C.ExecuteUbergraph_WBP_EmoteWheel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EmoteWheel_C::ExecuteUbergraph_WBP_EmoteWheel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EmoteWheel_C", "ExecuteUbergraph_WBP_EmoteWheel");

	Params::UWBP_EmoteWheel_C_ExecuteUbergraph_WBP_EmoteWheel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


