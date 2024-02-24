#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CenterToastNotificationContainer.WBP_CenterToastNotificationContainer_C
// (None)

class UClass* UWBP_CenterToastNotificationContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CenterToastNotificationContainer_C");

	return Clss;
}


// WBP_CenterToastNotificationContainer_C WBP_CenterToastNotificationContainer.Default__WBP_CenterToastNotificationContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CenterToastNotificationContainer_C* UWBP_CenterToastNotificationContainer_C::GetDefaultObj()
{
	static class UWBP_CenterToastNotificationContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CenterToastNotificationContainer_C*>(UWBP_CenterToastNotificationContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CenterToastNotificationContainer.WBP_CenterToastNotificationContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CenterToastNotificationContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CenterToastNotificationContainer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CenterToastNotificationContainer.WBP_CenterToastNotificationContainer_C.ExecuteUbergraph_WBP_CenterToastNotificationContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CenterToastNotificationContainer_C::ExecuteUbergraph_WBP_CenterToastNotificationContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CenterToastNotificationContainer_C", "ExecuteUbergraph_WBP_CenterToastNotificationContainer");

	Params::UWBP_CenterToastNotificationContainer_C_ExecuteUbergraph_WBP_CenterToastNotificationContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


