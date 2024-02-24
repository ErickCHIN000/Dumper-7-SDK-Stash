#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StyledSpinner.StyledSpinner_C
// (None)

class UClass* UStyledSpinner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StyledSpinner_C");

	return Clss;
}


// StyledSpinner_C StyledSpinner.Default__StyledSpinner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStyledSpinner_C* UStyledSpinner_C::GetDefaultObj()
{
	static class UStyledSpinner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStyledSpinner_C*>(UStyledSpinner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StyledSpinner.StyledSpinner_C.Get_LabelTextBlock_ColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UStyledSpinner_C::Get_LabelTextBlock_ColorAndOpacity_0(const struct FLinearColor& CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledSpinner_C", "Get_LabelTextBlock_ColorAndOpacity_0");

	Params::UStyledSpinner_C_Get_LabelTextBlock_ColorAndOpacity_0_Params Parms{};

	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StyledSpinner.StyledSpinner_C.Get Button Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Valid                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                LinearColor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStyledSpinner_C::Get_Button_Color(bool IsHovered, bool Valid, struct FLinearColor* LinearColor, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, float Temp_float_Variable, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float Temp_float_Variable_1, float K2Node_Select_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledSpinner_C", "Get Button Color");

	Params::UStyledSpinner_C_Get_Button_Color_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.Valid = Valid;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

	if (LinearColor != nullptr)
		*LinearColor = std::move(Parms.LinearColor);

}


// Function StyledSpinner.StyledSpinner_C.OnSelectionChanged
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSettingOption              SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_GetLabelText_ReturnValue                                (None)

void UStyledSpinner_C::OnSelectionChanged(const struct FSettingOption& SelectedOption, class FText CallFunc_GetLabelText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledSpinner_C", "OnSelectionChanged");

	Params::UStyledSpinner_C_OnSelectionChanged_Params Parms{};

	Parms.SelectedOption = SelectedOption;
	Parms.CallFunc_GetLabelText_ReturnValue = CallFunc_GetLabelText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StyledSpinner.StyledSpinner_C.GetRightArrowColorAndOpacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasValidNext_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Get_Button_Color_LinearColor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UStyledSpinner_C::GetRightArrowColorAndOpacity(bool CallFunc_HasValidNext_ReturnValue, bool CallFunc_IsHovered_ReturnValue, const struct FLinearColor& CallFunc_Get_Button_Color_LinearColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledSpinner_C", "GetRightArrowColorAndOpacity");

	Params::UStyledSpinner_C_GetRightArrowColorAndOpacity_Params Parms{};

	Parms.CallFunc_HasValidNext_ReturnValue = CallFunc_HasValidNext_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_Get_Button_Color_LinearColor = CallFunc_Get_Button_Color_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StyledSpinner.StyledSpinner_C.GetLeftArrowColorAndOpacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasValidPrevious_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Get_Button_Color_LinearColor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UStyledSpinner_C::GetLeftArrowColorAndOpacity(bool CallFunc_HasValidPrevious_ReturnValue, bool CallFunc_IsHovered_ReturnValue, const struct FLinearColor& CallFunc_Get_Button_Color_LinearColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledSpinner_C", "GetLeftArrowColorAndOpacity");

	Params::UStyledSpinner_C_GetLeftArrowColorAndOpacity_Params Parms{};

	Parms.CallFunc_HasValidPrevious_ReturnValue = CallFunc_HasValidPrevious_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_Get_Button_Color_LinearColor = CallFunc_Get_Button_Color_LinearColor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StyledSpinner.StyledSpinner_C.GetLabelText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSettingOption              CallFunc_GetCurrentOption_ReturnValue                            (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UStyledSpinner_C::GetLabelText(const struct FSettingOption& CallFunc_GetCurrentOption_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledSpinner_C", "GetLabelText");

	Params::UStyledSpinner_C_GetLabelText_Params Parms{};

	Parms.CallFunc_GetCurrentOption_ReturnValue = CallFunc_GetCurrentOption_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StyledSpinner.StyledSpinner_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UStyledSpinner_C::BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledSpinner_C", "BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StyledSpinner.StyledSpinner_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UStyledSpinner_C::BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledSpinner_C", "BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StyledSpinner.StyledSpinner_C.OnHoverColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HoverColor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStyledSpinner_C::OnHoverColor(bool HoverColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledSpinner_C", "OnHoverColor");

	Params::UStyledSpinner_C_OnHoverColor_Params Parms{};

	Parms.HoverColor = HoverColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StyledSpinner.StyledSpinner_C.ExecuteUbergraph_StyledSpinner
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_hoverColor                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStyledSpinner_C::ExecuteUbergraph_StyledSpinner(int32 EntryPoint, bool K2Node_Event_hoverColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledSpinner_C", "ExecuteUbergraph_StyledSpinner");

	Params::UStyledSpinner_C_ExecuteUbergraph_StyledSpinner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_hoverColor = K2Node_Event_hoverColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


