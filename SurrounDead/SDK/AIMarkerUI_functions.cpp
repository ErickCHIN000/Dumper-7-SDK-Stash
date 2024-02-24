#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AIMarkerUI.AIMarkerUI_C
// (None)

class UClass* UAIMarkerUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIMarkerUI_C");

	return Clss;
}


// AIMarkerUI_C AIMarkerUI.Default__AIMarkerUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIMarkerUI_C* UAIMarkerUI_C::GetDefaultObj()
{
	static class UAIMarkerUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIMarkerUI_C*>(UAIMarkerUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIMarkerUI.AIMarkerUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAIMarkerUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIMarkerUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIMarkerUI.AIMarkerUI_C.ExecuteUbergraph_AIMarkerUI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIMarkerUI_C::ExecuteUbergraph_AIMarkerUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIMarkerUI_C", "ExecuteUbergraph_AIMarkerUI");

	Params::UAIMarkerUI_C_ExecuteUbergraph_AIMarkerUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIMarkerUI.AIMarkerUI_C.Hidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIMarkerUI_C::Hidden__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIMarkerUI_C", "Hidden__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIMarkerUI.AIMarkerUI_C.Visible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIMarkerUI_C::Visible__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIMarkerUI_C", "Visible__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


