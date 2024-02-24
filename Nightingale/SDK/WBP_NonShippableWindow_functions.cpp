#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_NonShippableWindow.WBP_NonShippableWindow_C
// (None)

class UClass* UWBP_NonShippableWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_NonShippableWindow_C");

	return Clss;
}


// WBP_NonShippableWindow_C WBP_NonShippableWindow.Default__WBP_NonShippableWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_NonShippableWindow_C* UWBP_NonShippableWindow_C::GetDefaultObj()
{
	static class UWBP_NonShippableWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_NonShippableWindow_C*>(UWBP_NonShippableWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_NonShippableWindow.WBP_NonShippableWindow_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_NonShippableWindow_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NonShippableWindow_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_NonShippableWindow_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_NonShippableWindow.WBP_NonShippableWindow_C.OnDebugSubscreenClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_NonShippableWindow_C::OnDebugSubscreenClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NonShippableWindow_C", "OnDebugSubscreenClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


