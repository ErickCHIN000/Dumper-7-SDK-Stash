#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_TabBACKButton.WBP_TabBACKButton_C
// (None)

class UClass* UWBP_TabBACKButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_TabBACKButton_C");

	return Clss;
}


// WBP_TabBACKButton_C WBP_TabBACKButton.Default__WBP_TabBACKButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_TabBACKButton_C* UWBP_TabBACKButton_C::GetDefaultObj()
{
	static class UWBP_TabBACKButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_TabBACKButton_C*>(UWBP_TabBACKButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_TabBACKButton.WBP_TabBACKButton_C.BndEvt__WBP_TabBACKButton_Button_89_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TabBACKButton_C::BndEvt__WBP_TabBACKButton_Button_89_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TabBACKButton_C", "BndEvt__WBP_TabBACKButton_Button_89_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TabBACKButton.WBP_TabBACKButton_C.BndEvt__WBP_TabBACKButton_Button_89_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TabBACKButton_C::BndEvt__WBP_TabBACKButton_Button_89_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TabBACKButton_C", "BndEvt__WBP_TabBACKButton_Button_89_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TabBACKButton.WBP_TabBACKButton_C.BndEvt__WBP_TabBACKButton_Button_89_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TabBACKButton_C::BndEvt__WBP_TabBACKButton_Button_89_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TabBACKButton_C", "BndEvt__WBP_TabBACKButton_Button_89_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TabBACKButton.WBP_TabBACKButton_C.BndEvt__WBP_TabBACKButton_Button_89_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TabBACKButton_C::BndEvt__WBP_TabBACKButton_Button_89_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TabBACKButton_C", "BndEvt__WBP_TabBACKButton_Button_89_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TabBACKButton.WBP_TabBACKButton_C.BndEvt__WBP_TabBACKButton_Button_89_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_TabBACKButton_C::BndEvt__WBP_TabBACKButton_Button_89_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TabBACKButton_C", "BndEvt__WBP_TabBACKButton_Button_89_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TabBACKButton.WBP_TabBACKButton_C.ExecuteUbergraph_WBP_TabBACKButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)

void UWBP_TabBACKButton_C::ExecuteUbergraph_WBP_TabBACKButton(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TabBACKButton_C", "ExecuteUbergraph_WBP_TabBACKButton");

	Params::UWBP_TabBACKButton_C_ExecuteUbergraph_WBP_TabBACKButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TabBACKButton.WBP_TabBACKButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_TabBACKButton_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TabBACKButton_C", "OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


