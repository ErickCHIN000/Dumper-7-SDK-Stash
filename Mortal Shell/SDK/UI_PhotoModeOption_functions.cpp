#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_PhotoModeOption.UI_PhotoModeOption_C
// (None)

class UClass* UUI_PhotoModeOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_PhotoModeOption_C");

	return Clss;
}


// UI_PhotoModeOption_C UI_PhotoModeOption.Default__UI_PhotoModeOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_PhotoModeOption_C* UUI_PhotoModeOption_C::GetDefaultObj()
{
	static class UUI_PhotoModeOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_PhotoModeOption_C*>(UUI_PhotoModeOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.GetMaxDelta
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MaxDelta                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PhotoModeOption_C::GetMaxDelta(int32* MaxDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "GetMaxDelta");

	Params::UUI_PhotoModeOption_C_GetMaxDelta_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MaxDelta != nullptr)
		*MaxDelta = Parms.MaxDelta;

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.IsOptionEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_PhotoModeOption_C::IsOptionEnabled(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "IsOptionEnabled");

	Params::UUI_PhotoModeOption_C_IsOptionEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallEvent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PhotoModeOption_C::SetValue(bool CallEvent, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "SetValue");

	Params::UUI_PhotoModeOption_C_SetValue_Params Parms{};

	Parms.CallEvent = CallEvent;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PhotoModeOption_C::SetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "SetText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.SoundNavigate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PhotoModeOption_C::SoundNavigate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "SoundNavigate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.SetButtonStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                     Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 Normal                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush                 Highlighted                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bIsHighlighted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select_Default                                            (None)

void UUI_PhotoModeOption_C::SetButtonStyle(class UButton* Button, const struct FSlateBrush& Normal, const struct FSlateBrush& Highlighted, bool bIsHighlighted, bool Temp_bool_Variable, const struct FSlateBrush& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "SetButtonStyle");

	Params::UUI_PhotoModeOption_C_SetButtonStyle_Params Parms{};

	Parms.Button = Button;
	Parms.Normal = Normal;
	Parms.Highlighted = Highlighted;
	Parms.bIsHighlighted = bIsHighlighted;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_PhotoModeOption_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "PreConstruct");

	Params::UUI_PhotoModeOption_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.SetSelectedValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallEvent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_PhotoModeOption_C::SetSelectedValue(int32 Value, bool CallEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "SetSelectedValue");

	Params::UUI_PhotoModeOption_C_SetSelectedValue_Params Parms{};

	Parms.Value = Value;
	Parms.CallEvent = CallEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.Navigate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PhotoModeOption_C::Navigate(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "Navigate");

	Params::UUI_PhotoModeOption_C_Navigate_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.SetIsHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHighlighted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_PhotoModeOption_C::SetIsHighlighted(bool bHighlighted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "SetIsHighlighted");

	Params::UUI_PhotoModeOption_C_SetIsHighlighted_Params Parms{};

	Parms.bHighlighted = bHighlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.SaveStyles
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PhotoModeOption_C::SaveStyles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "SaveStyles");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bForceFireValueChange                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_PhotoModeOption_C::Reset(bool bForceFireValueChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "Reset");

	Params::UUI_PhotoModeOption_C_Reset_Params Parms{};

	Parms.bForceFireValueChange = bForceFireValueChange;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.SetOptionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_PhotoModeOption_C::SetOptionEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "SetOptionEnabled");

	Params::UUI_PhotoModeOption_C_SetOptionEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.SetValueAndOverrideDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallEvent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_PhotoModeOption_C::SetValueAndOverrideDefault(int32 Value, bool CallEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "SetValueAndOverrideDefault");

	Params::UUI_PhotoModeOption_C_SetValueAndOverrideDefault_Params Parms{};

	Parms.Value = Value;
	Parms.CallEvent = CallEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.BndEvt__HandleRight_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_PhotoModeOption_C::BndEvt__HandleRight_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "BndEvt__HandleRight_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.BndEvt__HandleLeft_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_PhotoModeOption_C::BndEvt__HandleLeft_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "BndEvt__HandleLeft_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.HandleMouseMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PhotoModeOption_C::HandleMouseMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "HandleMouseMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.BndEvt__Button_Option_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_PhotoModeOption_C::BndEvt__Button_Option_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "BndEvt__Button_Option_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.BndEvt__Button_Option_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_PhotoModeOption_C::BndEvt__Button_Option_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "BndEvt__Button_Option_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.FireEventWithDefaultValueButKeepCurrent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PhotoModeOption_C::FireEventWithDefaultValueButKeepCurrent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "FireEventWithDefaultValueButKeepCurrent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.FireChangeEventWithCurrentValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PhotoModeOption_C::FireChangeEventWithCurrentValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "FireChangeEventWithCurrentValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.UpdateHandleVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PhotoModeOption_C::UpdateHandleVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "UpdateHandleVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.ScrollBox_Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PhotoModeOption_C::ScrollBox_Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "ScrollBox_Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.Reset_Offset_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PhotoModeOption_C::Reset_Offset_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "Reset_Offset_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.Reset_Offset_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PhotoModeOption_C::Reset_Offset_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "Reset_Offset_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PhotoModeOption_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "Tick");

	Params::UUI_PhotoModeOption_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.ScrollBox_Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_PhotoModeOption_C::ScrollBox_Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "ScrollBox_Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.ValidateCurrentValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CustomValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DoNotCallValueChange                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_PhotoModeOption_C::ValidateCurrentValue(bool CustomValue, int32 Value, bool DoNotCallValueChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "ValidateCurrentValue");

	Params::UUI_PhotoModeOption_C_ValidateCurrentValue_Params Parms{};

	Parms.CustomValue = CustomValue;
	Parms.Value = Value;
	Parms.DoNotCallValueChange = DoNotCallValueChange;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.ExecuteUbergraph_UI_PhotoModeOption
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Value_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_CallEvent_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Delta                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bHighlighted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// bool                               K2Node_Event_bForceFireValueChange                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bEnabled                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_CallEvent                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScrollOffsetOfEnd_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_CustomValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_DoNotCallValueChange                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PhotoModeOption_C::ExecuteUbergraph_UI_PhotoModeOption(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool Temp_bool_Variable_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool K2Node_Event_IsDesignTime, int32 K2Node_Event_Value_1, bool K2Node_Event_CallEvent_1, int32 K2Node_Event_Delta, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool K2Node_Event_bHighlighted, const struct FSlateColor& K2Node_Select_Default, bool K2Node_Event_bForceFireValueChange, bool CallFunc_NotEqual_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_Event_bEnabled, int32 K2Node_Event_Value, bool K2Node_Event_CallEvent, bool Temp_bool_Has_Been_Initd_Variable_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility K2Node_Select_Default_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool Temp_bool_IsClosed_Variable_2, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool K2Node_CustomEvent_CustomValue, int32 K2Node_CustomEvent_Value, bool K2Node_CustomEvent_DoNotCallValueChange, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_3, float Temp_float_Variable, enum class ESlateVisibility K2Node_Select_Default_2, bool CallFunc_Not_PreBool_ReturnValue, float Temp_float_Variable_1, float K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "ExecuteUbergraph_UI_PhotoModeOption");

	Params::UUI_PhotoModeOption_C_ExecuteUbergraph_UI_PhotoModeOption_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = CallFunc_EqualEqual_FloatFloat_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_Value_1 = K2Node_Event_Value_1;
	Parms.K2Node_Event_CallEvent_1 = K2Node_Event_CallEvent_1;
	Parms.K2Node_Event_Delta = K2Node_Event_Delta;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Event_bHighlighted = K2Node_Event_bHighlighted;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_bForceFireValueChange = K2Node_Event_bForceFireValueChange;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Event_bEnabled = K2Node_Event_bEnabled;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.K2Node_Event_CallEvent = K2Node_Event_CallEvent;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue_1 = CallFunc_Array_LastIndex_ReturnValue_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.CallFunc_GetScrollOffsetOfEnd_ReturnValue = CallFunc_GetScrollOffsetOfEnd_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.K2Node_CustomEvent_CustomValue = K2Node_CustomEvent_CustomValue;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CustomEvent_DoNotCallValueChange = K2Node_CustomEvent_DoNotCallValueChange;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_PhotoModeOption.UI_PhotoModeOption_C.OnValueChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PhotoModeOption_C::OnValueChange__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_PhotoModeOption_C", "OnValueChange__DelegateSignature");

	Params::UUI_PhotoModeOption_C_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


