#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ConquestLocalProgressBar.WBP_ConquestLocalProgressBar_C
// (None)

class UClass* UWBP_ConquestLocalProgressBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ConquestLocalProgressBar_C");

	return Clss;
}


// WBP_ConquestLocalProgressBar_C WBP_ConquestLocalProgressBar.Default__WBP_ConquestLocalProgressBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ConquestLocalProgressBar_C* UWBP_ConquestLocalProgressBar_C::GetDefaultObj()
{
	static class UWBP_ConquestLocalProgressBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ConquestLocalProgressBar_C*>(UWBP_ConquestLocalProgressBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ConquestLocalProgressBar.WBP_ConquestLocalProgressBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ConquestLocalProgressBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConquestLocalProgressBar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ConquestLocalProgressBar.WBP_ConquestLocalProgressBar_C.ExecuteUbergraph_WBP_ConquestLocalProgressBar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ConquestLocalProgressBar_C::ExecuteUbergraph_WBP_ConquestLocalProgressBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConquestLocalProgressBar_C", "ExecuteUbergraph_WBP_ConquestLocalProgressBar");

	Params::UWBP_ConquestLocalProgressBar_C_ExecuteUbergraph_WBP_ConquestLocalProgressBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


