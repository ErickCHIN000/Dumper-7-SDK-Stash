#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C
// (None)

class UClass* UWBP_cc_sw_Ancestry2DSlider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_cc_sw_Ancestry2DSlider_C");

	return Clss;
}


// WBP_cc_sw_Ancestry2DSlider_C WBP_cc_sw_Ancestry2DSlider.Default__WBP_cc_sw_Ancestry2DSlider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_cc_sw_Ancestry2DSlider_C* UWBP_cc_sw_Ancestry2DSlider_C::GetDefaultObj()
{
	static class UWBP_cc_sw_Ancestry2DSlider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_cc_sw_Ancestry2DSlider_C*>(UWBP_cc_sw_Ancestry2DSlider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C.BP_GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_cc_sw_Ancestry2DSlider_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Ancestry2DSlider_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_cc_sw_Ancestry2DSlider_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C.OnInputMethodChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Ancestry2DSlider_C::OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Ancestry2DSlider_C", "OnInputMethodChanged");

	Params::UWBP_cc_sw_Ancestry2DSlider_C_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C.UpdateDragAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Ancestry2DSlider_C::UpdateDragAudio(const struct FVector2D& CallFunc_GetValue_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Ancestry2DSlider_C", "UpdateDragAudio");

	Params::UWBP_cc_sw_Ancestry2DSlider_C_UpdateDragAudio_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C.TriggerDragStopAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_SpawnAkComponentAtLocation_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Ancestry2DSlider_C::TriggerDragStopAudio(FDelegateProperty_ Temp_delegate_Variable, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Ancestry2DSlider_C", "TriggerDragStopAudio");

	Params::UWBP_cc_sw_Ancestry2DSlider_C_TriggerDragStopAudio_Params Parms{};

	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_SpawnAkComponentAtLocation_ReturnValue = CallFunc_SpawnAkComponentAtLocation_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C.TriggerDragStartAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_SpawnAkComponentAtLocation_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Ancestry2DSlider_C::TriggerDragStartAudio(FDelegateProperty_ Temp_delegate_Variable, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Ancestry2DSlider_C", "TriggerDragStartAudio");

	Params::UWBP_cc_sw_Ancestry2DSlider_C_TriggerDragStartAudio_Params Parms{};

	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_SpawnAkComponentAtLocation_ReturnValue = CallFunc_SpawnAkComponentAtLocation_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C.ResetSlider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Ancestry2DSlider_C::ResetSlider(double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Ancestry2DSlider_C", "ResetSlider");

	Params::UWBP_cc_sw_Ancestry2DSlider_C_ResetSlider_Params Parms{};

	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;
	Parms.CallFunc_SetValue_InValue_ImplicitCast_1 = CallFunc_SetValue_InValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C.UpdateSliderVisuals
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Ancestry2DSlider_C::UpdateSliderVisuals(const struct FVector2D& CallFunc_GetValue_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Ancestry2DSlider_C", "UpdateSliderVisuals");

	Params::UWBP_cc_sw_Ancestry2DSlider_C_UpdateSliderVisuals_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;
	Parms.CallFunc_SetValue_InValue_ImplicitCast_1 = CallFunc_SetValue_InValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C.Adjust Section Enabled Visuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enabled_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Ancestry2DSlider_C::Adjust_Section_Enabled_Visuals(int32 Index, bool Enabled_, bool Temp_bool_Variable, float Temp_real_Variable, float Temp_real_Variable_1, int32 Temp_int_Variable, float K2Node_Select_Default, class UImage* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Ancestry2DSlider_C", "Adjust Section Enabled Visuals");

	Params::UWBP_cc_sw_Ancestry2DSlider_C_Adjust_Section_Enabled_Visuals_Params Parms{};

	Parms.Index = Index;
	Parms.Enabled_ = Enabled_;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C.RefreshSlider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Ancestry2DSlider_C::RefreshSlider(double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Ancestry2DSlider_C", "RefreshSlider");

	Params::UWBP_cc_sw_Ancestry2DSlider_C_RefreshSlider_Params Parms{};

	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;
	Parms.CallFunc_SetValue_InValue_ImplicitCast_1 = CallFunc_SetValue_InValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Ancestry2DSlider_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Ancestry2DSlider_C", "Tick");

	Params::UWBP_cc_sw_Ancestry2DSlider_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_cc_sw_Ancestry2DSlider_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Ancestry2DSlider_C", "OnAddedToFocusPath");

	Params::UWBP_cc_sw_Ancestry2DSlider_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_cc_sw_Ancestry2DSlider_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Ancestry2DSlider_C", "OnRemovedFromFocusPath");

	Params::UWBP_cc_sw_Ancestry2DSlider_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_cc_sw_Ancestry2DSlider_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Ancestry2DSlider_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C.BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_4_OnMouseCaptureBeginEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_cc_sw_Ancestry2DSlider_C::BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_4_OnMouseCaptureBeginEventSynth2D__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Ancestry2DSlider_C", "BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_4_OnMouseCaptureBeginEventSynth2D__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C.BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_cc_sw_Ancestry2DSlider_C::BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEventSynth2D__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Ancestry2DSlider_C", "BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_5_OnMouseCaptureEndEventSynth2D__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C.BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_6_OnControllerCaptureBeginEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_cc_sw_Ancestry2DSlider_C::BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_6_OnControllerCaptureBeginEventSynth2D__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Ancestry2DSlider_C", "BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_6_OnControllerCaptureBeginEventSynth2D__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C.BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_7_OnControllerCaptureEndEventSynth2D__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_cc_sw_Ancestry2DSlider_C::BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_7_OnControllerCaptureEndEventSynth2D__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Ancestry2DSlider_C", "BndEvt__WBP_cc_sw_Slider_2D_NWX2DSlider_K2Node_ComponentBoundEvent_7_OnControllerCaptureEndEventSynth2D__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C.ExecuteUbergraph_WBP_cc_sw_Ancestry2DSlider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetValue_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Ancestry2DSlider_C::ExecuteUbergraph_WBP_cc_sw_Ancestry2DSlider(int32 EntryPoint, const struct FVector2D& CallFunc_GetValue_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FVector2D& CallFunc_GetValue_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Ancestry2DSlider_C", "ExecuteUbergraph_WBP_cc_sw_Ancestry2DSlider");

	Params::UWBP_cc_sw_Ancestry2DSlider_C_ExecuteUbergraph_WBP_cc_sw_Ancestry2DSlider_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue_1 = CallFunc_GetValue_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Ancestry2DSlider.WBP_cc_sw_Ancestry2DSlider_C.ED_SliderValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Ancestry2DSlider_C::ED_SliderValueChanged__DelegateSignature(const struct FVector2D& Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Ancestry2DSlider_C", "ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_cc_sw_Ancestry2DSlider_C_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


