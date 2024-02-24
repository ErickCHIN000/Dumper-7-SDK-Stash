#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C
// (None)

class UClass* UW_PostProcessEntry_Slider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PostProcessEntry_Slider_C");

	return Clss;
}


// W_PostProcessEntry_Slider_C W_PostProcessEntry_Slider.Default__W_PostProcessEntry_Slider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PostProcessEntry_Slider_C* UW_PostProcessEntry_Slider_C::GetDefaultObj()
{
	static class UW_PostProcessEntry_Slider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PostProcessEntry_Slider_C*>(UW_PostProcessEntry_Slider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.CalculateExponentialDelta
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InDelta                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutDelta                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SignOfFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxSliderValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMinSliderValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PostProcessEntry_Slider_C::CalculateExponentialDelta(float InDelta, float* OutDelta, float CallFunc_SignOfFloat_ReturnValue, float CallFunc_GetValue_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_GetMaxSliderValue_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_GetMinSliderValue_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_Slider_C", "CalculateExponentialDelta");

	Params::UW_PostProcessEntry_Slider_C_CalculateExponentialDelta_Params Parms{};

	Parms.InDelta = InDelta;
	Parms.CallFunc_SignOfFloat_ReturnValue = CallFunc_SignOfFloat_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_GetMaxSliderValue_ReturnValue = CallFunc_GetMaxSliderValue_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_GetMinSliderValue_ReturnValue = CallFunc_GetMinSliderValue_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue_2 = CallFunc_Abs_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDelta != nullptr)
		*OutDelta = Parms.OutDelta;

}


// Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_PointerEvent_GetWheelDelta_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDelta_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SignOfFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxSliderValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateExponentialDelta_OutDelta                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMinSliderValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UW_PostProcessEntry_Slider_C::OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, float CallFunc_GetDelta_ReturnValue, float CallFunc_SignOfFloat_ReturnValue, float CallFunc_GetValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetMaxSliderValue_ReturnValue, float CallFunc_CalculateExponentialDelta_OutDelta, float CallFunc_GetMinSliderValue_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_Slider_C", "OnMouseWheel");

	Params::UW_PostProcessEntry_Slider_C_OnMouseWheel_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_PointerEvent_GetWheelDelta_ReturnValue = CallFunc_PointerEvent_GetWheelDelta_ReturnValue;
	Parms.CallFunc_GetDelta_ReturnValue = CallFunc_GetDelta_ReturnValue;
	Parms.CallFunc_SignOfFloat_ReturnValue = CallFunc_SignOfFloat_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetMaxSliderValue_ReturnValue = CallFunc_GetMaxSliderValue_ReturnValue;
	Parms.CallFunc_CalculateExponentialDelta_OutDelta = CallFunc_CalculateExponentialDelta_OutDelta;
	Parms.CallFunc_GetMinSliderValue_ReturnValue = CallFunc_GetMinSliderValue_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.UpdateSliderEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsEntryEnabled_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PostProcessEntry_Slider_C::UpdateSliderEnabled(bool CallFunc_IsEntryEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_Slider_C", "UpdateSliderEnabled");

	Params::UW_PostProcessEntry_Slider_C_UpdateSliderEnabled_Params Parms{};

	Parms.CallFunc_IsEntryEnabled_ReturnValue = CallFunc_IsEntryEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.IsEntryEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UW_PostProcessEntry_Slider_C::IsEntryEnabled(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsChecked_ReturnValue, bool K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_Slider_C", "IsEntryEnabled");

	Params::UW_PostProcessEntry_Slider_C_IsEntryEnabled_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.InitFromSaveGameValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFPostProcessSaveData       Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PostProcessEntry_Slider_C::InitFromSaveGameValue(const struct FFPostProcessSaveData& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_Slider_C", "InitFromSaveGameValue");

	Params::UW_PostProcessEntry_Slider_C_InitFromSaveGameValue_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.GetSaveGameValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFPostProcessSaveData       Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEntryEnabled_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFPostProcessSaveData       K2Node_MakeStruct_FPostProcessSaveData                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PostProcessEntry_Slider_C::GetSaveGameValue(struct FFPostProcessSaveData* Value, bool CallFunc_IsEntryEnabled_ReturnValue, float CallFunc_GetValue_ReturnValue, const struct FFPostProcessSaveData& K2Node_MakeStruct_FPostProcessSaveData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_Slider_C", "GetSaveGameValue");

	Params::UW_PostProcessEntry_Slider_C_GetSaveGameValue_Params Parms{};

	Parms.CallFunc_IsEntryEnabled_ReturnValue = CallFunc_IsEntryEnabled_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.K2Node_MakeStruct_FPostProcessSaveData = K2Node_MakeStruct_FPostProcessSaveData;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.InitFromDefaultValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_PostProcessEntry_Slider_C::InitFromDefaultValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_Slider_C", "InitFromDefaultValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.GetSliderText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetSliderValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UW_PostProcessEntry_Slider_C::GetSliderText(float CallFunc_GetSliderValue_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_Slider_C", "GetSliderText");

	Params::UW_PostProcessEntry_Slider_C_GetSliderText_Params Parms{};

	Parms.CallFunc_GetSliderValue_ReturnValue = CallFunc_GetSliderValue_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.GetSliderValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UW_PostProcessEntry_Slider_C::GetSliderValue(float CallFunc_GetValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_Slider_C", "GetSliderValue");

	Params::UW_PostProcessEntry_Slider_C_GetSliderValue_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PostProcessEntry_Slider_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_Slider_C", "PreConstruct");

	Params::UW_PostProcessEntry_Slider_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PostProcessEntry_Slider_C::BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_Slider_C", "BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::UW_PostProcessEntry_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.BndEvt__CheckBox_200_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PostProcessEntry_Slider_C::BndEvt__CheckBox_200_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_Slider_C", "BndEvt__CheckBox_200_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UW_PostProcessEntry_Slider_C_BndEvt__CheckBox_200_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.BndEvt__W_PostProcessEntry_Slider_SpinBox_Value_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PostProcessEntry_Slider_C::BndEvt__W_PostProcessEntry_Slider_SpinBox_Value_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_Slider_C", "BndEvt__W_PostProcessEntry_Slider_SpinBox_Value_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UW_PostProcessEntry_Slider_C_BndEvt__W_PostProcessEntry_Slider_SpinBox_Value_K2Node_ComponentBoundEvent_2_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_PostProcessEntry_Slider_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_Slider_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function W_PostProcessEntry_Slider.W_PostProcessEntry_Slider_C.ExecuteUbergraph_W_PostProcessEntry_Slider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UW_PostProcessEntry_Slider_C::ExecuteUbergraph_W_PostProcessEntry_Slider(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, float K2Node_ComponentBoundEvent_Value, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool K2Node_ComponentBoundEvent_bIsChecked, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, float K2Node_ComponentBoundEvent_InValue, float CallFunc_GetValue_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("W_PostProcessEntry_Slider_C", "ExecuteUbergraph_W_PostProcessEntry_Slider");

	Params::UW_PostProcessEntry_Slider_C_ExecuteUbergraph_W_PostProcessEntry_Slider_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_InValue = K2Node_ComponentBoundEvent_InValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


