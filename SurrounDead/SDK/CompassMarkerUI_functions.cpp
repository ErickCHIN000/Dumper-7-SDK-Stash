#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CompassMarkerUI.CompassMarkerUI_C
// (None)

class UClass* UCompassMarkerUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompassMarkerUI_C");

	return Clss;
}


// CompassMarkerUI_C CompassMarkerUI.Default__CompassMarkerUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCompassMarkerUI_C* UCompassMarkerUI_C::GetDefaultObj()
{
	static class UCompassMarkerUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompassMarkerUI_C*>(UCompassMarkerUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CompassMarkerUI.CompassMarkerUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCompassMarkerUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompassMarkerUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CompassMarkerUI.CompassMarkerUI_C.ExecuteUbergraph_CompassMarkerUI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompassMarkerUI_C::ExecuteUbergraph_CompassMarkerUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompassMarkerUI_C", "ExecuteUbergraph_CompassMarkerUI");

	Params::UCompassMarkerUI_C_ExecuteUbergraph_CompassMarkerUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


