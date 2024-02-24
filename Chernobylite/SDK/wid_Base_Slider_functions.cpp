#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Base_Slider.wid_Base_Slider_C
// (None)

class UClass* UWid_Base_Slider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Base_Slider_C");

	return Clss;
}


// wid_Base_Slider_C wid_Base_Slider.Default__wid_Base_Slider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Base_Slider_C* UWid_Base_Slider_C::GetDefaultObj()
{
	static class UWid_Base_Slider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Base_Slider_C*>(UWid_Base_Slider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Base_Slider.wid_Base_Slider_C.PlaySliderEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAkAudioEvent*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAkAudioEvent*               Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor)
// class UAkAudioEvent*               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Base_Slider_C::PlaySliderEffect(bool Temp_bool_Variable, class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UAkAudioEvent* Temp_object_Variable_2, class UAkAudioEvent* Temp_object_Variable_3, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, class UAkAudioEvent* K2Node_Select_Default, class UAkAudioEvent* K2Node_Select_Default_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, int32 CallFunc_PostEvent_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Base_Slider_C", "PlaySliderEffect");

	Params::UWid_Base_Slider_C_PlaySliderEffect_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_PostEvent_ReturnValue_1 = CallFunc_PostEvent_ReturnValue_1;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Base_Slider.wid_Base_Slider_C.ModifyCurrentValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Modifier                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Base_Slider_C::ModifyCurrentValue(float Modifier, float CallFunc_GetValue_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Base_Slider_C", "ModifyCurrentValue");

	Params::UWid_Base_Slider_C_ModifyCurrentValue_Params Parms{};

	Parms.Modifier = Modifier;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Base_Slider.wid_Base_Slider_C.Init
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Base_Slider_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Base_Slider_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Base_Slider.wid_Base_Slider_C.Set Slider Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GridSnap_Float_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Base_Slider_C::Set_Slider_Value(float Value, float CallFunc_GridSnap_Float_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Base_Slider_C", "Set Slider Value");

	Params::UWid_Base_Slider_C_Set_Slider_Value_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GridSnap_Float_ReturnValue = CallFunc_GridSnap_Float_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Base_Slider.wid_Base_Slider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Base_Slider_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Base_Slider_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Base_Slider.wid_Base_Slider_C.BndEvt__SliderBar_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Base_Slider_C::BndEvt__SliderBar_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Base_Slider_C", "BndEvt__SliderBar_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWid_Base_Slider_C_BndEvt__SliderBar_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Base_Slider.wid_Base_Slider_C.Input Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Base_Slider_C::Input_Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Base_Slider_C", "Input Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Base_Slider.wid_Base_Slider_C.Input Right
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Base_Slider_C::Input_Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Base_Slider_C", "Input Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Base_Slider.wid_Base_Slider_C.BndEvt__SliderBar_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_Base_Slider_C::BndEvt__SliderBar_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Base_Slider_C", "BndEvt__SliderBar_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Base_Slider.wid_Base_Slider_C.InputRightReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Base_Slider_C::InputRightReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Base_Slider_C", "InputRightReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Base_Slider.wid_Base_Slider_C.InputLeftReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Base_Slider_C::InputLeftReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Base_Slider_C", "InputLeftReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Base_Slider.wid_Base_Slider_C.BlockAutoIncrement
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Base_Slider_C::BlockAutoIncrement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Base_Slider_C", "BlockAutoIncrement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Base_Slider.wid_Base_Slider_C.BlockAutoDecrement
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Base_Slider_C::BlockAutoDecrement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Base_Slider_C", "BlockAutoDecrement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Base_Slider.wid_Base_Slider_C.BlockAuto
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Base_Slider_C::BlockAuto()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Base_Slider_C", "BlockAuto");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Base_Slider.wid_Base_Slider_C.ExecuteUbergraph_wid_Base_Slider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable_1                                         (ConstParm, ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable_1                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_PostEvent_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Base_Slider_C::ExecuteUbergraph_wid_Base_Slider(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_IsClosed_Variable_2, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_3, float K2Node_ComponentBoundEvent_Value, float CallFunc_Multiply_FloatFloat_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, int32 CallFunc_PostEvent_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3, bool Temp_bool_IsClosed_Variable_3, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, int32 CallFunc_PostEvent_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Base_Slider_C", "ExecuteUbergraph_wid_Base_Slider");

	Params::UWid_Base_Slider_C_ExecuteUbergraph_wid_Base_Slider_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable_1 = Temp_delegate_Variable_1;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_PostEvent_ReturnValue_1 = CallFunc_PostEvent_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Base_Slider.wid_Base_Slider_C.OnValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValueMinMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewValueMinMaxOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ZeroOneValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Base_Slider_C::OnValueChanged__DelegateSignature(float NewValueMinMax, float NewValueMinMaxOffset, float ZeroOneValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Base_Slider_C", "OnValueChanged__DelegateSignature");

	Params::UWid_Base_Slider_C_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValueMinMax = NewValueMinMax;
	Parms.NewValueMinMaxOffset = NewValueMinMaxOffset;
	Parms.ZeroOneValue = ZeroOneValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


