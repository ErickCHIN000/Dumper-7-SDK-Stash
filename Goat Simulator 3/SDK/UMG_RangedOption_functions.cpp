#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RangedOption.UMG_RangedOption_C
// (None)

class UClass* UUMG_RangedOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RangedOption_C");

	return Clss;
}


// UMG_RangedOption_C UMG_RangedOption.Default__UMG_RangedOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RangedOption_C* UUMG_RangedOption_C::GetDefaultObj()
{
	static class UUMG_RangedOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RangedOption_C*>(UUMG_RangedOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_RangedOption.UMG_RangedOption_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                (None)

struct FEventReply UUMG_RangedOption_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RangedOption_C", "OnFocusReceived");

	Params::UUMG_RangedOption_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_RangedOption.UMG_RangedOption_C.Snap To Step Size
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              In_Value                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Snapped_Value                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSettingStepSizeMouse_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSettingStepSize_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMod_Remainder                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RangedOption_C::Snap_To_Step_Size(float In_Value, float* Snapped_Value, float CallFunc_GetSettingStepSizeMouse_ReturnValue, float CallFunc_GetSettingStepSize_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RangedOption_C", "Snap To Step Size");

	Params::UUMG_RangedOption_C_Snap_To_Step_Size_Params Parms{};

	Parms.In_Value = In_Value;
	Parms.CallFunc_GetSettingStepSizeMouse_ReturnValue = CallFunc_GetSettingStepSizeMouse_ReturnValue;
	Parms.CallFunc_GetSettingStepSize_ReturnValue = CallFunc_GetSettingStepSize_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_FMod_Remainder = CallFunc_FMod_Remainder;
	Parms.CallFunc_FMod_ReturnValue = CallFunc_FMod_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Snapped_Value != nullptr)
		*Snapped_Value = Parms.Snapped_Value;

}


// Function UMG_RangedOption.UMG_RangedOption_C.Get Slider Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUMG_RangedOption_C::Get_Slider_Value(float CallFunc_GetValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RangedOption_C", "Get Slider Value");

	Params::UUMG_RangedOption_C_Get_Slider_Value_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_RangedOption.UMG_RangedOption_C.Set Text Box Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_using_gamepad                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RangedOption_C::Set_Text_Box_Visibility(bool Is_using_gamepad, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsMobilePlatform_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RangedOption_C", "Set Text Box Visibility");

	Params::UUMG_RangedOption_C_Set_Text_Box_Visibility_Params Parms{};

	Parms.Is_using_gamepad = Is_using_gamepad;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RangedOption.UMG_RangedOption_C.GetInitialWidgetFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UUMG_RangedOption_C::GetInitialWidgetFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RangedOption_C", "GetInitialWidgetFocus");

	Params::UUMG_RangedOption_C_GetInitialWidgetFocus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_RangedOption.UMG_RangedOption_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueTextFactor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxFractionalDigits_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UUMG_RangedOption_C::UpdateText(float Slider_Value, float CallFunc_GetValueTextFactor_ReturnValue, int32 CallFunc_GetMaxFractionalDigits_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RangedOption_C", "UpdateText");

	Params::UUMG_RangedOption_C_UpdateText_Params Parms{};

	Parms.Slider_Value = Slider_Value;
	Parms.CallFunc_GetValueTextFactor_ReturnValue = CallFunc_GetValueTextFactor_ReturnValue;
	Parms.CallFunc_GetMaxFractionalDigits_ReturnValue = CallFunc_GetMaxFractionalDigits_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RangedOption.UMG_RangedOption_C.BndEvt__Slider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_RangedOption_C::BndEvt__Slider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RangedOption_C", "BndEvt__Slider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RangedOption.UMG_RangedOption_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RangedOption_C::BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RangedOption_C", "BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UUMG_RangedOption_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RangedOption.UMG_RangedOption_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RangedOption_C::BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RangedOption_C", "BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::UUMG_RangedOption_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RangedOption.UMG_RangedOption_C.UpdateUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_RangedOption_C::UpdateUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RangedOption_C", "UpdateUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RangedOption.UMG_RangedOption_C.OnSetIsEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bInIsEnabled                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RangedOption_C::OnSetIsEnabled(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RangedOption_C", "OnSetIsEnabled");

	Params::UUMG_RangedOption_C_OnSetIsEnabled_Params Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RangedOption.UMG_RangedOption_C.BndEvt__Slider_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_RangedOption_C::BndEvt__Slider_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RangedOption_C", "BndEvt__Slider_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RangedOption.UMG_RangedOption_C.BndEvt__UMG_RangedOption_Slider_K2Node_ComponentBoundEvent_4_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_RangedOption_C::BndEvt__UMG_RangedOption_Slider_K2Node_ComponentBoundEvent_4_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RangedOption_C", "BndEvt__UMG_RangedOption_Slider_K2Node_ComponentBoundEvent_4_OnMouseCaptureBeginEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RangedOption.UMG_RangedOption_C.RefreshOption
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_RangedOption_C::RefreshOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RangedOption_C", "RefreshOption");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RangedOption.UMG_RangedOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_RangedOption_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RangedOption_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RangedOption.UMG_RangedOption_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RangedOption_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RangedOption_C", "PreConstruct");

	Params::UUMG_RangedOption_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RangedOption.UMG_RangedOption_C.ExecuteUbergraph_UMG_RangedOption
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_TextToFloat_OutFloat                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextToFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Snap_To_Step_Size_Snapped_Value                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInIsEnabled                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMinSettingValue_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxSettingValue_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSettingStepSize_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueTextFactor_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Snap_To_Step_Size_Snapped_Value_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSettingValueAsFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSettingValueAsFloat_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetOwningGGPlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGGPlayerController*         CallFunc_GetOwningGGPlayer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Get_Slider_Value_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGGGameSettingApplyMode CallFunc_GetApplyMode_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// enum class EGGGameSettingApplyMode CallFunc_GetApplyMode_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGGGameSettingApplyMode CallFunc_GetApplyMode_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RangedOption_C::ExecuteUbergraph_UMG_RangedOption(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, float K2Node_ComponentBoundEvent_Value, float CallFunc_TextToFloat_OutFloat, bool CallFunc_TextToFloat_ReturnValue, float CallFunc_Snap_To_Step_Size_Snapped_Value, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool K2Node_Event_bInIsEnabled, float CallFunc_GetMinSettingValue_ReturnValue, float CallFunc_GetMaxSettingValue_ReturnValue, float CallFunc_GetSettingStepSize_ReturnValue, float CallFunc_GetValueTextFactor_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Snap_To_Step_Size_Snapped_Value_1, float CallFunc_GetSettingValueAsFloat_ReturnValue, float CallFunc_GetSettingValueAsFloat_ReturnValue_1, class AGGPlayerController* CallFunc_GetOwningGGPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGGPlayerController* CallFunc_GetOwningGGPlayer_ReturnValue_1, float CallFunc_Get_Slider_Value_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EGGGameSettingApplyMode CallFunc_GetApplyMode_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EGGGameSettingApplyMode CallFunc_GetApplyMode_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EGGGameSettingApplyMode CallFunc_GetApplyMode_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_Event_IsDesignTime, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RangedOption_C", "ExecuteUbergraph_UMG_RangedOption");

	Params::UUMG_RangedOption_C_ExecuteUbergraph_UMG_RangedOption_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_TextToFloat_OutFloat = CallFunc_TextToFloat_OutFloat;
	Parms.CallFunc_TextToFloat_ReturnValue = CallFunc_TextToFloat_ReturnValue;
	Parms.CallFunc_Snap_To_Step_Size_Snapped_Value = CallFunc_Snap_To_Step_Size_Snapped_Value;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_Event_bInIsEnabled = K2Node_Event_bInIsEnabled;
	Parms.CallFunc_GetMinSettingValue_ReturnValue = CallFunc_GetMinSettingValue_ReturnValue;
	Parms.CallFunc_GetMaxSettingValue_ReturnValue = CallFunc_GetMaxSettingValue_ReturnValue;
	Parms.CallFunc_GetSettingStepSize_ReturnValue = CallFunc_GetSettingStepSize_ReturnValue;
	Parms.CallFunc_GetValueTextFactor_ReturnValue = CallFunc_GetValueTextFactor_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Snap_To_Step_Size_Snapped_Value_1 = CallFunc_Snap_To_Step_Size_Snapped_Value_1;
	Parms.CallFunc_GetSettingValueAsFloat_ReturnValue = CallFunc_GetSettingValueAsFloat_ReturnValue;
	Parms.CallFunc_GetSettingValueAsFloat_ReturnValue_1 = CallFunc_GetSettingValueAsFloat_ReturnValue_1;
	Parms.CallFunc_GetOwningGGPlayer_ReturnValue = CallFunc_GetOwningGGPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningGGPlayer_ReturnValue_1 = CallFunc_GetOwningGGPlayer_ReturnValue_1;
	Parms.CallFunc_Get_Slider_Value_ReturnValue = CallFunc_Get_Slider_Value_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetApplyMode_ReturnValue = CallFunc_GetApplyMode_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetApplyMode_ReturnValue_1 = CallFunc_GetApplyMode_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetApplyMode_ReturnValue_2 = CallFunc_GetApplyMode_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided = CallFunc_Check_if_Aspect_Ratio_Is_Lower_IsLowerThanProvided;

	UObject::ProcessEvent(Func, &Parms);

}

}


