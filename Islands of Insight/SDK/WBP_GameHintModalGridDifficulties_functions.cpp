#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GameHintModalGridDifficulties.WBP_GameHintModalGridDifficulties_C
// (None)

class UClass* UWBP_GameHintModalGridDifficulties_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GameHintModalGridDifficulties_C");

	return Clss;
}


// WBP_GameHintModalGridDifficulties_C WBP_GameHintModalGridDifficulties.Default__WBP_GameHintModalGridDifficulties_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GameHintModalGridDifficulties_C* UWBP_GameHintModalGridDifficulties_C::GetDefaultObj()
{
	static class UWBP_GameHintModalGridDifficulties_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GameHintModalGridDifficulties_C*>(UWBP_GameHintModalGridDifficulties_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GameHintModalGridDifficulties.WBP_GameHintModalGridDifficulties_C.BndEvt__WBP_GameHintModalGridDifficulties_WBP_CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameHintModalGridDifficulties_C::BndEvt__WBP_GameHintModalGridDifficulties_WBP_CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameHintModalGridDifficulties_C", "BndEvt__WBP_GameHintModalGridDifficulties_WBP_CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameHintModalGridDifficulties.WBP_GameHintModalGridDifficulties_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UWBP_GameHintModalGridDifficulties_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameHintModalGridDifficulties_C", "WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameHintModalGridDifficulties.WBP_GameHintModalGridDifficulties_C.ExecuteUbergraph_WBP_GameHintModalGridDifficulties
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameHintModalGridDifficulties_C::ExecuteUbergraph_WBP_GameHintModalGridDifficulties(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameHintModalGridDifficulties_C", "ExecuteUbergraph_WBP_GameHintModalGridDifficulties");

	Params::UWBP_GameHintModalGridDifficulties_C_ExecuteUbergraph_WBP_GameHintModalGridDifficulties_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameHintModalGridDifficulties.WBP_GameHintModalGridDifficulties_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameHintModalGridDifficulties_C::OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameHintModalGridDifficulties_C", "OnClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}

