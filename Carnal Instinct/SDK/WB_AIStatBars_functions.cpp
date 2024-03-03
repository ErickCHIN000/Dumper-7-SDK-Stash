#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_AIStatBars.WB_AIStatBars_C
// (None)

class UClass* UWB_AIStatBars_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_AIStatBars_C");

	return Clss;
}


// WB_AIStatBars_C WB_AIStatBars.Default__WB_AIStatBars_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_AIStatBars_C* UWB_AIStatBars_C::GetDefaultObj()
{
	static class UWB_AIStatBars_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_AIStatBars_C*>(UWB_AIStatBars_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_AIStatBars.WB_AIStatBars_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_AIStatBars_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_AIStatBars_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_AIStatBars.WB_AIStatBars_C.ExecuteUbergraph_WB_AIStatBars
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_AIStatBars_C::ExecuteUbergraph_WB_AIStatBars(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_AIStatBars_C", "ExecuteUbergraph_WB_AIStatBars");

	Params::UWB_AIStatBars_C_ExecuteUbergraph_WB_AIStatBars_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


