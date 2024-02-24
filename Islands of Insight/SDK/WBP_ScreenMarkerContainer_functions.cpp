#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ScreenMarkerContainer.WBP_ScreenMarkerContainer_C
// (None)

class UClass* UWBP_ScreenMarkerContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ScreenMarkerContainer_C");

	return Clss;
}


// WBP_ScreenMarkerContainer_C WBP_ScreenMarkerContainer.Default__WBP_ScreenMarkerContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ScreenMarkerContainer_C* UWBP_ScreenMarkerContainer_C::GetDefaultObj()
{
	static class UWBP_ScreenMarkerContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ScreenMarkerContainer_C*>(UWBP_ScreenMarkerContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ScreenMarkerContainer.WBP_ScreenMarkerContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ScreenMarkerContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ScreenMarkerContainer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ScreenMarkerContainer.WBP_ScreenMarkerContainer_C.ExecuteUbergraph_WBP_ScreenMarkerContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScreenMarkerContainer_C::ExecuteUbergraph_WBP_ScreenMarkerContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ScreenMarkerContainer_C", "ExecuteUbergraph_WBP_ScreenMarkerContainer");

	Params::UWBP_ScreenMarkerContainer_C_ExecuteUbergraph_WBP_ScreenMarkerContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


