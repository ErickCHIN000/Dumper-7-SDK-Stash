#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ArrowsRight.WBP_ArrowsRight_C
// (None)

class UClass* UWBP_ArrowsRight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ArrowsRight_C");

	return Clss;
}


// WBP_ArrowsRight_C WBP_ArrowsRight.Default__WBP_ArrowsRight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ArrowsRight_C* UWBP_ArrowsRight_C::GetDefaultObj()
{
	static class UWBP_ArrowsRight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ArrowsRight_C*>(UWBP_ArrowsRight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ArrowsRight.WBP_ArrowsRight_C.BndEvt__WBP_ArrowsRight_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ArrowsRight_C::BndEvt__WBP_ArrowsRight_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ArrowsRight_C", "BndEvt__WBP_ArrowsRight_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ArrowsRight.WBP_ArrowsRight_C.ExecuteUbergraph_WBP_ArrowsRight
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ArrowsRight_C::ExecuteUbergraph_WBP_ArrowsRight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ArrowsRight_C", "ExecuteUbergraph_WBP_ArrowsRight");

	Params::UWBP_ArrowsRight_C_ExecuteUbergraph_WBP_ArrowsRight_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ArrowsRight.WBP_ArrowsRight_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ArrowsRight_C::Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ArrowsRight_C", "Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


