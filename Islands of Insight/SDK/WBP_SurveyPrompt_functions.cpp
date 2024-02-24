#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SurveyPrompt.WBP_SurveyPrompt_C
// (None)

class UClass* UWBP_SurveyPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SurveyPrompt_C");

	return Clss;
}


// WBP_SurveyPrompt_C WBP_SurveyPrompt.Default__WBP_SurveyPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SurveyPrompt_C* UWBP_SurveyPrompt_C::GetDefaultObj()
{
	static class UWBP_SurveyPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SurveyPrompt_C*>(UWBP_SurveyPrompt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SurveyPrompt.WBP_SurveyPrompt_C.ShowDismiss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SurveyPrompt_C::ShowDismiss()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SurveyPrompt_C", "ShowDismiss");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SurveyPrompt.WBP_SurveyPrompt_C.ShowError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ErrorMessage                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_SurveyPrompt_C::ShowError(class FText ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SurveyPrompt_C", "ShowError");

	Params::UWBP_SurveyPrompt_C_ShowError_Params Parms{};

	Parms.ErrorMessage = ErrorMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SurveyPrompt.WBP_SurveyPrompt_C.ShowCurrentPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SurveyPrompt_C::ShowCurrentPrompt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SurveyPrompt_C", "ShowCurrentPrompt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SurveyPrompt.WBP_SurveyPrompt_C.Display
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PromptText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UParameterizedUrl*           URL                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SurveyPrompt_C::Display(class FText PromptText, class UParameterizedUrl* URL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SurveyPrompt_C", "Display");

	Params::UWBP_SurveyPrompt_C_Display_Params Parms{};

	Parms.PromptText = PromptText;
	Parms.URL = URL;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SurveyPrompt.WBP_SurveyPrompt_C.BndEvt__WBP_SurveyPrompt_AcceptButton_K2Node_ComponentBoundEvent_1_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SurveyPrompt_C::BndEvt__WBP_SurveyPrompt_AcceptButton_K2Node_ComponentBoundEvent_1_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SurveyPrompt_C", "BndEvt__WBP_SurveyPrompt_AcceptButton_K2Node_ComponentBoundEvent_1_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SurveyPrompt.WBP_SurveyPrompt_C.BndEvt__WBP_SurveyPrompt_DeclineButton_K2Node_ComponentBoundEvent_2_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SurveyPrompt_C::BndEvt__WBP_SurveyPrompt_DeclineButton_K2Node_ComponentBoundEvent_2_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SurveyPrompt_C", "BndEvt__WBP_SurveyPrompt_DeclineButton_K2Node_ComponentBoundEvent_2_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SurveyPrompt.WBP_SurveyPrompt_C.DisplayPrompt
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        PromptText                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UParameterizedUrl*           URL                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SurveyPrompt_C::DisplayPrompt(class FText& PromptText, class UParameterizedUrl* URL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SurveyPrompt_C", "DisplayPrompt");

	Params::UWBP_SurveyPrompt_C_DisplayPrompt_Params Parms{};

	Parms.PromptText = PromptText;
	Parms.URL = URL;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SurveyPrompt.WBP_SurveyPrompt_C.BndEvt__WBP_SurveyPrompt_DismissButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SurveyPrompt_C::BndEvt__WBP_SurveyPrompt_DismissButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SurveyPrompt_C", "BndEvt__WBP_SurveyPrompt_DismissButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SurveyPrompt.WBP_SurveyPrompt_C.BndEvt__WBP_SurveyPrompt_ReturnButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SurveyPrompt_C::BndEvt__WBP_SurveyPrompt_ReturnButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SurveyPrompt_C", "BndEvt__WBP_SurveyPrompt_ReturnButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SurveyPrompt.WBP_SurveyPrompt_C.BndEvt__WBP_SurveyPrompt_AbandonButton_K2Node_ComponentBoundEvent_4_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SurveyPrompt_C::BndEvt__WBP_SurveyPrompt_AbandonButton_K2Node_ComponentBoundEvent_4_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SurveyPrompt_C", "BndEvt__WBP_SurveyPrompt_AbandonButton_K2Node_ComponentBoundEvent_4_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SurveyPrompt.WBP_SurveyPrompt_C.ExecuteUbergraph_WBP_SurveyPrompt
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToString_ReturnValue                                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_CanLaunchURL_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_PromptText                                          (ConstParm)
// class UParameterizedUrl*           K2Node_Event_Url                                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGISFeedback*                CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SurveyPrompt_C::ExecuteUbergraph_WBP_SurveyPrompt(int32 EntryPoint, const class FString& CallFunc_ToString_ReturnValue, bool CallFunc_CanLaunchURL_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText K2Node_Event_PromptText, class UParameterizedUrl* K2Node_Event_Url, class UGISFeedback* CallFunc_GetGameInstanceSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SurveyPrompt_C", "ExecuteUbergraph_WBP_SurveyPrompt");

	Params::UWBP_SurveyPrompt_C_ExecuteUbergraph_WBP_SurveyPrompt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ToString_ReturnValue = CallFunc_ToString_ReturnValue;
	Parms.CallFunc_CanLaunchURL_ReturnValue = CallFunc_CanLaunchURL_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.K2Node_Event_PromptText = K2Node_Event_PromptText;
	Parms.K2Node_Event_Url = K2Node_Event_Url;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


