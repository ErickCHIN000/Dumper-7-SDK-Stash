#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C
// (None)

class UClass* UUI_PhotoModeOptionSlider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_PhotoModeOptionSlider_C");

	return Clss;
}


// UI_PhotoModeOptionSlider_C UI_PhotoModeOptionSlider.Default__UI_PhotoModeOptionSlider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_PhotoModeOptionSlider_C* UUI_PhotoModeOptionSlider_C::GetDefaultObj()
{
	static class UUI_PhotoModeOptionSlider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_PhotoModeOptionSlider_C*>(UUI_PhotoModeOptionSlider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.GetMaxDelta
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MaxDelta                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PhotoModeOptionSlider_C::GetMaxDelta(int32* MaxDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "GetMaxDelta");

	Params::UUI_PhotoModeOptionSlider_C_GetMaxDelta_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MaxDelta != nullptr)
		*MaxDelta = Parms.MaxDelta;

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.IsOptionEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_PhotoModeOptionSlider_C::IsOptionEnabled(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "IsOptionEnabled");

	Params::UUI_PhotoModeOptionSlider_C_IsOptionEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.SoundNavigate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PhotoModeOptionSlider_C::SoundNavigate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "SoundNavigate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.SetButtonStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                     Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 Norm                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush                 High                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bHighlighted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select_Default                                            (None)

void UUI_PhotoModeOptionSlider_C::SetButtonStyle(class UButton* Button, const struct FSlateBrush& Norm, const struct FSlateBrush& High, bool bHighlighted, bool Temp_bool_Variable, const struct FSlateBrush& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "SetButtonStyle");

	Params::UUI_PhotoModeOptionSlider_C_SetButtonStyle_Params Parms{};

	Parms.Button = Button;
	Parms.Norm = Norm;
	Parms.High = High;
	Parms.bHighlighted = bHighlighted;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.Navigate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PhotoModeOptionSlider_C::Navigate(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "Navigate");

	Params::UUI_PhotoModeOptionSlider_C_Navigate_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.SetSelectedValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallEvent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_PhotoModeOptionSlider_C::SetSelectedValue(int32 Value, bool CallEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "SetSelectedValue");

	Params::UUI_PhotoModeOptionSlider_C_SetSelectedValue_Params Parms{};

	Parms.Value = Value;
	Parms.CallEvent = CallEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.SetIsHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHighlighted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_PhotoModeOptionSlider_C::SetIsHighlighted(bool bHighlighted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "SetIsHighlighted");

	Params::UUI_PhotoModeOptionSlider_C_SetIsHighlighted_Params Parms{};

	Parms.bHighlighted = bHighlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_PhotoModeOptionSlider_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "PreConstruct");

	Params::UUI_PhotoModeOptionSlider_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bForceFireValueChange                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_PhotoModeOptionSlider_C::Reset(bool bForceFireValueChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "Reset");

	Params::UUI_PhotoModeOptionSlider_C_Reset_Params Parms{};

	Parms.bForceFireValueChange = bForceFireValueChange;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.SetOptionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_PhotoModeOptionSlider_C::SetOptionEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "SetOptionEnabled");

	Params::UUI_PhotoModeOptionSlider_C_SetOptionEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.SetValueAndOverrideDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallEvent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_PhotoModeOptionSlider_C::SetValueAndOverrideDefault(int32 Value, bool CallEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "SetValueAndOverrideDefault");

	Params::UUI_PhotoModeOptionSlider_C_SetValueAndOverrideDefault_Params Parms{};

	Parms.Value = Value;
	Parms.CallEvent = CallEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.BndEvt__HandleLeft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_PhotoModeOptionSlider_C::BndEvt__HandleLeft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "BndEvt__HandleLeft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.BndEvt__HandleRight_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_PhotoModeOptionSlider_C::BndEvt__HandleRight_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "BndEvt__HandleRight_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PhotoModeOptionSlider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "BndEvt__Slider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");

	Params::UUI_PhotoModeOptionSlider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.UpdateTextValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PhotoModeOptionSlider_C::UpdateTextValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "UpdateTextValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.HandleMouseMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PhotoModeOptionSlider_C::HandleMouseMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "HandleMouseMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.BndEvt__Button_Option_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_PhotoModeOptionSlider_C::BndEvt__Button_Option_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "BndEvt__Button_Option_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.BndEvt__Button_Option_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_PhotoModeOptionSlider_C::BndEvt__Button_Option_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "BndEvt__Button_Option_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.BndEvt__HandleLeft_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_PhotoModeOptionSlider_C::BndEvt__HandleLeft_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "BndEvt__HandleLeft_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.BndEvt__HandleLeft_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_PhotoModeOptionSlider_C::BndEvt__HandleLeft_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "BndEvt__HandleLeft_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.BndEvt__HandleRight_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_PhotoModeOptionSlider_C::BndEvt__HandleRight_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "BndEvt__HandleRight_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.BndEvt__HandleRight_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_PhotoModeOptionSlider_C::BndEvt__HandleRight_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "BndEvt__HandleRight_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.FireEventWithDefaultValueButKeepCurrent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PhotoModeOptionSlider_C::FireEventWithDefaultValueButKeepCurrent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "FireEventWithDefaultValueButKeepCurrent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.FireChangeEventWithCurrentValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PhotoModeOptionSlider_C::FireChangeEventWithCurrentValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "FireChangeEventWithCurrentValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.ExecuteUbergraph_UI_PhotoModeOptionSlider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Delta                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Value_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_CallEvent_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bHighlighted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bForceFireValueChange                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEnabled                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_CallEvent                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_1                                          (None)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default_2                                          (None)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PhotoModeOptionSlider_C::ExecuteUbergraph_UI_PhotoModeOptionSlider(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, int32 CallFunc_Clamp_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, int32 K2Node_Event_Delta, int32 K2Node_Event_Value_1, bool K2Node_Event_CallEvent_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_bHighlighted, bool K2Node_Event_IsDesignTime, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool K2Node_Event_bForceFireValueChange, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_bEnabled, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 K2Node_Event_Value, bool K2Node_Event_CallEvent, float K2Node_ComponentBoundEvent_Value, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_4, bool Temp_bool_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, bool Temp_bool_Variable_1, float Temp_float_Variable, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue, bool Temp_bool_Variable_2, class FText K2Node_Select_Default_1, bool Temp_bool_Variable_3, const struct FSlateColor& K2Node_Select_Default_2, float Temp_float_Variable_1, float K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "ExecuteUbergraph_UI_PhotoModeOptionSlider");

	Params::UUI_PhotoModeOptionSlider_C_ExecuteUbergraph_UI_PhotoModeOptionSlider_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.K2Node_Event_Delta = K2Node_Event_Delta;
	Parms.K2Node_Event_Value_1 = K2Node_Event_Value_1;
	Parms.K2Node_Event_CallEvent_1 = K2Node_Event_CallEvent_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_bHighlighted = K2Node_Event_bHighlighted;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Event_bForceFireValueChange = K2Node_Event_bForceFireValueChange;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_bEnabled = K2Node_Event_bEnabled;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.K2Node_Event_CallEvent = K2Node_Event_CallEvent;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOptionSlider.UI_PhotoModeOptionSlider_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PhotoModeOptionSlider_C::OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOptionSlider_C", "OnValueChanged__DelegateSignature");

	Params::UUI_PhotoModeOptionSlider_C_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


