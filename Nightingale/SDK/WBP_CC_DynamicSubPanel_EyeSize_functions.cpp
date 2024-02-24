#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_EyeSize.WBP_CC_DynamicSubPanel_EyeSize_C
// (None)

class UClass* UWBP_CC_DynamicSubPanel_EyeSize_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_DynamicSubPanel_EyeSize_C");

	return Clss;
}


// WBP_CC_DynamicSubPanel_EyeSize_C WBP_CC_DynamicSubPanel_EyeSize.Default__WBP_CC_DynamicSubPanel_EyeSize_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_DynamicSubPanel_EyeSize_C* UWBP_CC_DynamicSubPanel_EyeSize_C::GetDefaultObj()
{
	static class UWBP_CC_DynamicSubPanel_EyeSize_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_DynamicSubPanel_EyeSize_C*>(UWBP_CC_DynamicSubPanel_EyeSize_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_DynamicSubPanel_EyeSize.WBP_CC_DynamicSubPanel_EyeSize_C.OnInputMethodChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeSize_C::OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeSize_C", "OnInputMethodChanged");

	Params::UWBP_CC_DynamicSubPanel_EyeSize_C_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeSize.WBP_CC_DynamicSubPanel_EyeSize_C.UpdateUIFromActiveValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetEyeScale_OutEyeScale                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEyeOffset_EyeOffset                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Utility_GetMorphValue_Value                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Utility_GetMorphValue_Value_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Utility_GetMorphValue_Value_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_0_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_1_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeSize_C::UpdateUIFromActiveValues(double CallFunc_GetEyeScale_OutEyeScale, const struct FVector& CallFunc_GetEyeOffset_EyeOffset, bool Temp_bool_Variable, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, float CallFunc_Utility_GetMorphValue_Value, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_3, float CallFunc_Utility_GetMorphValue_Value_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_4, float CallFunc_Utility_GetMorphValue_Value_2, float K2Node_Select_Default, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1, float K2Node_Select_Option_0_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float K2Node_Select_Option_1_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeSize_C", "UpdateUIFromActiveValues");

	Params::UWBP_CC_DynamicSubPanel_EyeSize_C_UpdateUIFromActiveValues_Params Parms{};

	Parms.CallFunc_GetEyeScale_OutEyeScale = CallFunc_GetEyeScale_OutEyeScale;
	Parms.CallFunc_GetEyeOffset_EyeOffset = CallFunc_GetEyeOffset_EyeOffset;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Utility_GetMorphValue_Value = CallFunc_Utility_GetMorphValue_Value;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_Utility_GetMorphValue_Value_1 = CallFunc_Utility_GetMorphValue_Value_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_4 = CallFunc_MapRangeClamped_ReturnValue_4;
	Parms.CallFunc_Utility_GetMorphValue_Value_2 = CallFunc_Utility_GetMorphValue_Value_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast = CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1 = CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1;
	Parms.K2Node_Select_Option_0_ImplicitCast = K2Node_Select_Option_0_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_1 = CallFunc_MapRangeClamped_Value_ImplicitCast_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_Select_Option_1_ImplicitCast = K2Node_Select_Option_1_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeSize.WBP_CC_DynamicSubPanel_EyeSize_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_DynamicSubPanel_EyeSize_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeSize_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_CC_DynamicSubPanel_EyeSize_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_DynamicSubPanel_EyeSize.WBP_CC_DynamicSubPanel_EyeSize_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_EyeSize_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeSize_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_EyeSize.WBP_CC_DynamicSubPanel_EyeSize_C.BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_2D_K2Node_ComponentBoundEvent_0_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector2D                   Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeSize_C::BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_2D_K2Node_ComponentBoundEvent_0_ED_SliderValueChanged__DelegateSignature(const struct FVector2D& Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeSize_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_2D_K2Node_ComponentBoundEvent_0_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_EyeSize_C_BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_2D_K2Node_ComponentBoundEvent_0_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeSize.WBP_CC_DynamicSubPanel_EyeSize_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeSize_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeSize_C", "PreConstruct");

	Params::UWBP_CC_DynamicSubPanel_EyeSize_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeSize.WBP_CC_DynamicSubPanel_EyeSize_C.RandomizePanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_EyeSize_C::RandomizePanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeSize_C", "RandomizePanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_EyeSize.WBP_CC_DynamicSubPanel_EyeSize_C.ResetPanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_EyeSize_C::ResetPanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeSize_C", "ResetPanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_EyeSize.WBP_CC_DynamicSubPanel_EyeSize_C.BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_K2Node_ComponentBoundEvent_2_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeSize_C::BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_K2Node_ComponentBoundEvent_2_ED_SliderValueChanged__DelegateSignature(double Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeSize_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_K2Node_ComponentBoundEvent_2_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_EyeSize_C_BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_K2Node_ComponentBoundEvent_2_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeSize.WBP_CC_DynamicSubPanel_EyeSize_C.BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_Size_K2Node_ComponentBoundEvent_3_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeSize_C::BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_Size_K2Node_ComponentBoundEvent_3_ED_SliderValueChanged__DelegateSignature(double Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeSize_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_Size_K2Node_ComponentBoundEvent_3_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_EyeSize_C_BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_Size_K2Node_ComponentBoundEvent_3_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeSize.WBP_CC_DynamicSubPanel_EyeSize_C.BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_Depth_1_K2Node_ComponentBoundEvent_4_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeSize_C::BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_Depth_1_K2Node_ComponentBoundEvent_4_ED_SliderValueChanged__DelegateSignature(double Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeSize_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_Depth_1_K2Node_ComponentBoundEvent_4_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_EyeSize_C_BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_Depth_1_K2Node_ComponentBoundEvent_4_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeSize.WBP_CC_DynamicSubPanel_EyeSize_C.BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_rotation_K2Node_ComponentBoundEvent_4_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeSize_C::BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_rotation_K2Node_ComponentBoundEvent_4_ED_SliderValueChanged__DelegateSignature(double Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeSize_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_rotation_K2Node_ComponentBoundEvent_4_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_EyeSize_C_BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_cc_sw_Slider_1D_rotation_K2Node_ComponentBoundEvent_4_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_EyeSize.WBP_CC_DynamicSubPanel_EyeSize_C.BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_6_OnResetSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_EyeSize_C::BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_6_OnResetSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeSize_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_6_OnResetSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_EyeSize.WBP_CC_DynamicSubPanel_EyeSize_C.BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_7_OnRandomizeSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_EyeSize_C::BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_7_OnRandomizeSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeSize_C", "BndEvt__WBP_CC_DynamicSubPanel_EyeSize_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_7_OnRandomizeSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_EyeSize.WBP_CC_DynamicSubPanel_EyeSize_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_EyeSize_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeSize_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_EyeSize.WBP_CC_DynamicSubPanel_EyeSize_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_EyeSize_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeSize_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_EyeSize.WBP_CC_DynamicSubPanel_EyeSize_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_EyeSize
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_ComponentBoundEvent_Slider_Value_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Slider_Value_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEyeOffset_EyeOffset                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetEyeOffset_EyeOffset_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Slider_Value_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Slider_Value_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Slider_Value                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_cc_sw_Slider_1D_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UWBP_cc_sw_Slider_1D_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_EyeSize_C::ExecuteUbergraph_WBP_CC_DynamicSubPanel_EyeSize(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, const struct FVector2D& K2Node_ComponentBoundEvent_Slider_Value_4, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool K2Node_Event_IsDesignTime, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double K2Node_ComponentBoundEvent_Slider_Value_3, double CallFunc_MapRangeClamped_ReturnValue_4, const struct FVector& CallFunc_GetEyeOffset_EyeOffset, const struct FVector& CallFunc_GetEyeOffset_EyeOffset_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double K2Node_ComponentBoundEvent_Slider_Value_2, double K2Node_ComponentBoundEvent_Slider_Value_1, double K2Node_ComponentBoundEvent_Slider_Value, double CallFunc_MapRangeClamped_ReturnValue_5, double CallFunc_MapRangeClamped_ReturnValue_6, TArray<class UWBP_cc_sw_Slider_1D_C*>& K2Node_MakeArray_Array, class UWBP_cc_sw_Slider_1D_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_EyeSize_C", "ExecuteUbergraph_WBP_CC_DynamicSubPanel_EyeSize");

	Params::UWBP_CC_DynamicSubPanel_EyeSize_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_EyeSize_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_ComponentBoundEvent_Slider_Value_4 = K2Node_ComponentBoundEvent_Slider_Value_4;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Slider_Value_3 = K2Node_ComponentBoundEvent_Slider_Value_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue_4 = CallFunc_MapRangeClamped_ReturnValue_4;
	Parms.CallFunc_GetEyeOffset_EyeOffset = CallFunc_GetEyeOffset_EyeOffset;
	Parms.CallFunc_GetEyeOffset_EyeOffset_1 = CallFunc_GetEyeOffset_EyeOffset_1;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Slider_Value_2 = K2Node_ComponentBoundEvent_Slider_Value_2;
	Parms.K2Node_ComponentBoundEvent_Slider_Value_1 = K2Node_ComponentBoundEvent_Slider_Value_1;
	Parms.K2Node_ComponentBoundEvent_Slider_Value = K2Node_ComponentBoundEvent_Slider_Value;
	Parms.CallFunc_MapRangeClamped_ReturnValue_5 = CallFunc_MapRangeClamped_ReturnValue_5;
	Parms.CallFunc_MapRangeClamped_ReturnValue_6 = CallFunc_MapRangeClamped_ReturnValue_6;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


