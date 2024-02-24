#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GameHintModalGridDifficultiesStar.WBP_GameHintModalGridDifficultiesStar_C
// (None)

class UClass* UWBP_GameHintModalGridDifficultiesStar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GameHintModalGridDifficultiesStar_C");

	return Clss;
}


// WBP_GameHintModalGridDifficultiesStar_C WBP_GameHintModalGridDifficultiesStar.Default__WBP_GameHintModalGridDifficultiesStar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GameHintModalGridDifficultiesStar_C* UWBP_GameHintModalGridDifficultiesStar_C::GetDefaultObj()
{
	static class UWBP_GameHintModalGridDifficultiesStar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GameHintModalGridDifficultiesStar_C*>(UWBP_GameHintModalGridDifficultiesStar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GameHintModalGridDifficultiesStar.WBP_GameHintModalGridDifficultiesStar_C.Get_Line1Text_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UWBP_GameHintModalGridDifficultiesStar_C::Get_Line1Text_Text_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameHintModalGridDifficultiesStar_C", "Get_Line1Text_Text_0");

	Params::UWBP_GameHintModalGridDifficultiesStar_C_Get_Line1Text_Text_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GameHintModalGridDifficultiesStar.WBP_GameHintModalGridDifficultiesStar_C.BndEvt__WBP_GameHintModalGridDifficulties_WBP_CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_GameHintModalGridDifficultiesStar_C::BndEvt__WBP_GameHintModalGridDifficulties_WBP_CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameHintModalGridDifficultiesStar_C", "BndEvt__WBP_GameHintModalGridDifficulties_WBP_CloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameHintModalGridDifficultiesStar.WBP_GameHintModalGridDifficultiesStar_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UWBP_GameHintModalGridDifficultiesStar_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameHintModalGridDifficultiesStar_C", "WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GameHintModalGridDifficultiesStar.WBP_GameHintModalGridDifficultiesStar_C.ExecuteUbergraph_WBP_GameHintModalGridDifficultiesStar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameHintModalGridDifficultiesStar_C::ExecuteUbergraph_WBP_GameHintModalGridDifficultiesStar(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameHintModalGridDifficultiesStar_C", "ExecuteUbergraph_WBP_GameHintModalGridDifficultiesStar");

	Params::UWBP_GameHintModalGridDifficultiesStar_C_ExecuteUbergraph_WBP_GameHintModalGridDifficultiesStar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GameHintModalGridDifficultiesStar.WBP_GameHintModalGridDifficultiesStar_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GameHintModalGridDifficultiesStar_C::OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GameHintModalGridDifficultiesStar_C", "OnClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


