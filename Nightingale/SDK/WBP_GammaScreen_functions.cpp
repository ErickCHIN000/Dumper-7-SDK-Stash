#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GammaScreen.WBP_GammaScreen_C
// (None)

class UClass* UWBP_GammaScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GammaScreen_C");

	return Clss;
}


// WBP_GammaScreen_C WBP_GammaScreen.Default__WBP_GammaScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GammaScreen_C* UWBP_GammaScreen_C::GetDefaultObj()
{
	static class UWBP_GammaScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GammaScreen_C*>(UWBP_GammaScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GammaScreen.WBP_GammaScreen_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_GammaScreen_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GammaScreen_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_GammaScreen_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GammaScreen.WBP_GammaScreen_C.BndEvt__WBP_GammaScreen_WBP_GammaCalibration_K2Node_ComponentBoundEvent_2_OnGammaAccepted__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GammaScreen_C::BndEvt__WBP_GammaScreen_WBP_GammaCalibration_K2Node_ComponentBoundEvent_2_OnGammaAccepted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GammaScreen_C", "BndEvt__WBP_GammaScreen_WBP_GammaCalibration_K2Node_ComponentBoundEvent_2_OnGammaAccepted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GammaScreen.WBP_GammaScreen_C.ExecuteUbergraph_WBP_GammaScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GammaScreen_C::ExecuteUbergraph_WBP_GammaScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GammaScreen_C", "ExecuteUbergraph_WBP_GammaScreen");

	Params::UWBP_GammaScreen_C_ExecuteUbergraph_WBP_GammaScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GammaScreen.WBP_GammaScreen_C.GammaAccepted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GammaScreen_C::GammaAccepted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GammaScreen_C", "GammaAccepted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


