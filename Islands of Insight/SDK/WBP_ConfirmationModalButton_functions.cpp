#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ConfirmationModalButton.WBP_ConfirmationModalButton_C
// (None)

class UClass* UWBP_ConfirmationModalButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ConfirmationModalButton_C");

	return Clss;
}


// WBP_ConfirmationModalButton_C WBP_ConfirmationModalButton.Default__WBP_ConfirmationModalButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ConfirmationModalButton_C* UWBP_ConfirmationModalButton_C::GetDefaultObj()
{
	static class UWBP_ConfirmationModalButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ConfirmationModalButton_C*>(UWBP_ConfirmationModalButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ConfirmationModalButton.WBP_ConfirmationModalButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ConfirmationModalButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationModalButton_C", "PreConstruct");

	Params::UWBP_ConfirmationModalButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConfirmationModalButton.WBP_ConfirmationModalButton_C.BndEvt__WBP_ConfirmationModalButton_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ConfirmationModalButton_C::BndEvt__WBP_ConfirmationModalButton_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationModalButton_C", "BndEvt__WBP_ConfirmationModalButton_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ConfirmationModalButton.WBP_ConfirmationModalButton_C.SetButtonText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ConfirmationModalButton_C::SetButtonText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationModalButton_C", "SetButtonText");

	Params::UWBP_ConfirmationModalButton_C_SetButtonText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConfirmationModalButton.WBP_ConfirmationModalButton_C.ExecuteUbergraph_WBP_ConfirmationModalButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_Text                                          (None)

void UWBP_ConfirmationModalButton_C::ExecuteUbergraph_WBP_ConfirmationModalButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText K2Node_CustomEvent_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationModalButton_C", "ExecuteUbergraph_WBP_ConfirmationModalButton");

	Params::UWBP_ConfirmationModalButton_C_ExecuteUbergraph_WBP_ConfirmationModalButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ConfirmationModalButton.WBP_ConfirmationModalButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ConfirmationModalButton_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ConfirmationModalButton_C", "OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


