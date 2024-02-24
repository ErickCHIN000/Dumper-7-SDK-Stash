#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_FeedbackButton.WBP_FeedbackButton_C
// (None)

class UClass* UWBP_FeedbackButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FeedbackButton_C");

	return Clss;
}


// WBP_FeedbackButton_C WBP_FeedbackButton.Default__WBP_FeedbackButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FeedbackButton_C* UWBP_FeedbackButton_C::GetDefaultObj()
{
	static class UWBP_FeedbackButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FeedbackButton_C*>(UWBP_FeedbackButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FeedbackButton.WBP_FeedbackButton_C.GetTooltipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_FeedbackButton_C::GetTooltipWidget_0(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FeedbackButton_C", "GetTooltipWidget_0");

	Params::UWBP_FeedbackButton_C_GetTooltipWidget_0_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_FeedbackButton.WBP_FeedbackButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_FeedbackButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FeedbackButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FeedbackButton.WBP_FeedbackButton_C.BndEvt__WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_FeedbackButton_C::BndEvt__WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FeedbackButton_C", "BndEvt__WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FeedbackButton.WBP_FeedbackButton_C.ExecuteUbergraph_WBP_FeedbackButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FeedbackButton_C::ExecuteUbergraph_WBP_FeedbackButton(int32 EntryPoint, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FeedbackButton_C", "ExecuteUbergraph_WBP_FeedbackButton");

	Params::UWBP_FeedbackButton_C_ExecuteUbergraph_WBP_FeedbackButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FeedbackButton.WBP_FeedbackButton_C.OnFeedbackButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FeedbackButton_C::OnFeedbackButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FeedbackButton_C", "OnFeedbackButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


