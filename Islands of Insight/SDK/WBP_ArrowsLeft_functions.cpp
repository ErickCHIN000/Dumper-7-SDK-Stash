#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ArrowsLeft.WBP_ArrowsLeft_C
// (None)

class UClass* UWBP_ArrowsLeft_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ArrowsLeft_C");

	return Clss;
}


// WBP_ArrowsLeft_C WBP_ArrowsLeft.Default__WBP_ArrowsLeft_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ArrowsLeft_C* UWBP_ArrowsLeft_C::GetDefaultObj()
{
	static class UWBP_ArrowsLeft_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ArrowsLeft_C*>(UWBP_ArrowsLeft_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ArrowsLeft.WBP_ArrowsLeft_C.BndEvt__WBP_ArrowsLeft_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ArrowsLeft_C::BndEvt__WBP_ArrowsLeft_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ArrowsLeft_C", "BndEvt__WBP_ArrowsLeft_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ArrowsLeft.WBP_ArrowsLeft_C.ExecuteUbergraph_WBP_ArrowsLeft
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ArrowsLeft_C::ExecuteUbergraph_WBP_ArrowsLeft(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ArrowsLeft_C", "ExecuteUbergraph_WBP_ArrowsLeft");

	Params::UWBP_ArrowsLeft_C_ExecuteUbergraph_WBP_ArrowsLeft_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ArrowsLeft.WBP_ArrowsLeft_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ArrowsLeft_C::Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ArrowsLeft_C", "Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


