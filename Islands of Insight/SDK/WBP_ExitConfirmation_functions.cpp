#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ExitConfirmation.WBP_ExitConfirmation_C
// (None)

class UClass* UWBP_ExitConfirmation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ExitConfirmation_C");

	return Clss;
}


// WBP_ExitConfirmation_C WBP_ExitConfirmation.Default__WBP_ExitConfirmation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ExitConfirmation_C* UWBP_ExitConfirmation_C::GetDefaultObj()
{
	static class UWBP_ExitConfirmation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ExitConfirmation_C*>(UWBP_ExitConfirmation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ExitConfirmation.WBP_ExitConfirmation_C.BndEvt__WBP_ExitConfirmation_WBP_ConfirmationModalFinal_K2Node_ComponentBoundEvent_0_ClickedYes__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ExitConfirmation_C::BndEvt__WBP_ExitConfirmation_WBP_ConfirmationModalFinal_K2Node_ComponentBoundEvent_0_ClickedYes__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ExitConfirmation_C", "BndEvt__WBP_ExitConfirmation_WBP_ConfirmationModalFinal_K2Node_ComponentBoundEvent_0_ClickedYes__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ExitConfirmation.WBP_ExitConfirmation_C.BndEvt__WBP_ExitConfirmation_WBP_ConfirmationModalFinal_K2Node_ComponentBoundEvent_3_ClickedNo__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ExitConfirmation_C::BndEvt__WBP_ExitConfirmation_WBP_ConfirmationModalFinal_K2Node_ComponentBoundEvent_3_ClickedNo__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ExitConfirmation_C", "BndEvt__WBP_ExitConfirmation_WBP_ConfirmationModalFinal_K2Node_ComponentBoundEvent_3_ClickedNo__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ExitConfirmation.WBP_ExitConfirmation_C.ExecuteUbergraph_WBP_ExitConfirmation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ExitConfirmation_C::ExecuteUbergraph_WBP_ExitConfirmation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ExitConfirmation_C", "ExecuteUbergraph_WBP_ExitConfirmation");

	Params::UWBP_ExitConfirmation_C_ExecuteUbergraph_WBP_ExitConfirmation_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


