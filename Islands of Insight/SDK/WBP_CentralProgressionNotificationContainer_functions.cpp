#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CentralProgressionNotificationContainer.WBP_CentralProgressionNotificationContainer_C
// (None)

class UClass* UWBP_CentralProgressionNotificationContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CentralProgressionNotificationContainer_C");

	return Clss;
}


// WBP_CentralProgressionNotificationContainer_C WBP_CentralProgressionNotificationContainer.Default__WBP_CentralProgressionNotificationContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CentralProgressionNotificationContainer_C* UWBP_CentralProgressionNotificationContainer_C::GetDefaultObj()
{
	static class UWBP_CentralProgressionNotificationContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CentralProgressionNotificationContainer_C*>(UWBP_CentralProgressionNotificationContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CentralProgressionNotificationContainer.WBP_CentralProgressionNotificationContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CentralProgressionNotificationContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CentralProgressionNotificationContainer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CentralProgressionNotificationContainer.WBP_CentralProgressionNotificationContainer_C.ExecuteUbergraph_WBP_CentralProgressionNotificationContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CentralProgressionNotificationContainer_C::ExecuteUbergraph_WBP_CentralProgressionNotificationContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CentralProgressionNotificationContainer_C", "ExecuteUbergraph_WBP_CentralProgressionNotificationContainer");

	Params::UWBP_CentralProgressionNotificationContainer_C_ExecuteUbergraph_WBP_CentralProgressionNotificationContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


