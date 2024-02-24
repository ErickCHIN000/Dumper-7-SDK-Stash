#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GameHintModalQFPInfinite.WBP_GameHintModalQFPInfinite_C
// (None)

class UClass* UWBP_GameHintModalQFPInfinite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GameHintModalQFPInfinite_C");

	return Clss;
}


// WBP_GameHintModalQFPInfinite_C WBP_GameHintModalQFPInfinite.Default__WBP_GameHintModalQFPInfinite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GameHintModalQFPInfinite_C* UWBP_GameHintModalQFPInfinite_C::GetDefaultObj()
{
	static class UWBP_GameHintModalQFPInfinite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GameHintModalQFPInfinite_C*>(UWBP_GameHintModalQFPInfinite_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GameHintModalQFPInfinite.WBP_GameHintModalQFPInfinite_C.BndEvt__WBP_GameHintModalGridDifficulties_WBP_CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameHintModalQFPInfinite_C::BndEvt__WBP_GameHintModalGridDifficulties_WBP_CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameHintModalQFPInfinite_C", "BndEvt__WBP_GameHintModalGridDifficulties_WBP_CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameHintModalQFPInfinite.WBP_GameHintModalQFPInfinite_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UWBP_GameHintModalQFPInfinite_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameHintModalQFPInfinite_C", "WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameHintModalQFPInfinite.WBP_GameHintModalQFPInfinite_C.ExecuteUbergraph_WBP_GameHintModalQFPInfinite
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameHintModalQFPInfinite_C::ExecuteUbergraph_WBP_GameHintModalQFPInfinite(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameHintModalQFPInfinite_C", "ExecuteUbergraph_WBP_GameHintModalQFPInfinite");

	Params::UWBP_GameHintModalQFPInfinite_C_ExecuteUbergraph_WBP_GameHintModalQFPInfinite_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameHintModalQFPInfinite.WBP_GameHintModalQFPInfinite_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameHintModalQFPInfinite_C::OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameHintModalQFPInfinite_C", "OnClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


