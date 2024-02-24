#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Nose.WBP_CC_DynamicSubPanel_Nose_C
// (None)

class UClass* UWBP_CC_DynamicSubPanel_Nose_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_DynamicSubPanel_Nose_C");

	return Clss;
}


// WBP_CC_DynamicSubPanel_Nose_C WBP_CC_DynamicSubPanel_Nose.Default__WBP_CC_DynamicSubPanel_Nose_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_DynamicSubPanel_Nose_C* UWBP_CC_DynamicSubPanel_Nose_C::GetDefaultObj()
{
	static class UWBP_CC_DynamicSubPanel_Nose_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_DynamicSubPanel_Nose_C*>(UWBP_CC_DynamicSubPanel_Nose_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_DynamicSubPanel_Nose.WBP_CC_DynamicSubPanel_Nose_C.OnInputMethodChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Nose_C::OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Nose_C", "OnInputMethodChanged");

	Params::UWBP_CC_DynamicSubPanel_Nose_C_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Nose.WBP_CC_DynamicSubPanel_Nose_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_DynamicSubPanel_Nose_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Nose_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_CC_DynamicSubPanel_Nose_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_DynamicSubPanel_Nose.WBP_CC_DynamicSubPanel_Nose_C.RefreshUIwithPersistedValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Utility_GetMorphValue_Value                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Utility_GetMorphValue_Value_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Utility_GetMorphValue_Value_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Utility_GetMorphValue_Value_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Utility_GetMorphValue_Value_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_Y_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_0_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_1_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Nose_C::RefreshUIwithPersistedValues(bool Temp_bool_Variable, bool Temp_bool_Variable_1, float CallFunc_Utility_GetMorphValue_Value, float CallFunc_Utility_GetMorphValue_Value_1, float CallFunc_Utility_GetMorphValue_Value_2, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double K2Node_Select_Default, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Utility_GetMorphValue_Value_3, double CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_Utility_GetMorphValue_Value_4, double CallFunc_MapRangeClamped_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, float K2Node_Select_Default_1, double CallFunc_MakeVector2D_Y_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_2, float K2Node_Select_Option_0_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_3, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, float K2Node_Select_Option_1_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Nose_C", "RefreshUIwithPersistedValues");

	Params::UWBP_CC_DynamicSubPanel_Nose_C_RefreshUIwithPersistedValues_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Utility_GetMorphValue_Value = CallFunc_Utility_GetMorphValue_Value;
	Parms.CallFunc_Utility_GetMorphValue_Value_1 = CallFunc_Utility_GetMorphValue_Value_1;
	Parms.CallFunc_Utility_GetMorphValue_Value_2 = CallFunc_Utility_GetMorphValue_Value_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Utility_GetMorphValue_Value_3 = CallFunc_Utility_GetMorphValue_Value_3;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_Utility_GetMorphValue_Value_4 = CallFunc_Utility_GetMorphValue_Value_4;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_MakeVector2D_Y_ImplicitCast = CallFunc_MakeVector2D_Y_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_1 = CallFunc_MapRangeClamped_Value_ImplicitCast_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_2 = CallFunc_MapRangeClamped_Value_ImplicitCast_2;
	Parms.K2Node_Select_Option_0_ImplicitCast = K2Node_Select_Option_0_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_3 = CallFunc_MapRangeClamped_Value_ImplicitCast_3;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	Parms.K2Node_Select_Option_1_ImplicitCast = K2Node_Select_Option_1_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Nose.WBP_CC_DynamicSubPanel_Nose_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Nose_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Nose_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Nose.WBP_CC_DynamicSubPanel_Nose_C.RandomizePanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Nose_C::RandomizePanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Nose_C", "RandomizePanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Nose.WBP_CC_DynamicSubPanel_Nose_C.ResetPanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Nose_C::ResetPanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Nose_C", "ResetPanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Nose.WBP_CC_DynamicSubPanel_Nose_C.RefreshPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Nose_C::RefreshPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Nose_C", "RefreshPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Nose.WBP_CC_DynamicSubPanel_Nose_C.BndEvt__WBP_CC_DynamicSubPanel_Nose_WBP_cc_sw_Slider_2D_K2Node_ComponentBoundEvent_2_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector2D                   Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Nose_C::BndEvt__WBP_CC_DynamicSubPanel_Nose_WBP_cc_sw_Slider_2D_K2Node_ComponentBoundEvent_2_ED_SliderValueChanged__DelegateSignature(const struct FVector2D& Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Nose_C", "BndEvt__WBP_CC_DynamicSubPanel_Nose_WBP_cc_sw_Slider_2D_K2Node_ComponentBoundEvent_2_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Nose_C_BndEvt__WBP_CC_DynamicSubPanel_Nose_WBP_cc_sw_Slider_2D_K2Node_ComponentBoundEvent_2_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Nose.WBP_CC_DynamicSubPanel_Nose_C.BndEvt__WBP_CC_DynamicSubPanel_Nose_WBP_cc_sw_Slider_1D_K2Node_ComponentBoundEvent_3_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Nose_C::BndEvt__WBP_CC_DynamicSubPanel_Nose_WBP_cc_sw_Slider_1D_K2Node_ComponentBoundEvent_3_ED_SliderValueChanged__DelegateSignature(double Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Nose_C", "BndEvt__WBP_CC_DynamicSubPanel_Nose_WBP_cc_sw_Slider_1D_K2Node_ComponentBoundEvent_3_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Nose_C_BndEvt__WBP_CC_DynamicSubPanel_Nose_WBP_cc_sw_Slider_1D_K2Node_ComponentBoundEvent_3_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Nose.WBP_CC_DynamicSubPanel_Nose_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Nose_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Nose_C", "PreConstruct");

	Params::UWBP_CC_DynamicSubPanel_Nose_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Nose.WBP_CC_DynamicSubPanel_Nose_C.BndEvt__WBP_CC_DynamicSubPanel_Nose_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_0_OnResetSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Nose_C::BndEvt__WBP_CC_DynamicSubPanel_Nose_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_0_OnResetSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Nose_C", "BndEvt__WBP_CC_DynamicSubPanel_Nose_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_0_OnResetSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Nose.WBP_CC_DynamicSubPanel_Nose_C.BndEvt__WBP_CC_DynamicSubPanel_Nose_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_4_OnRandomizeSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Nose_C::BndEvt__WBP_CC_DynamicSubPanel_Nose_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_4_OnRandomizeSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Nose_C", "BndEvt__WBP_CC_DynamicSubPanel_Nose_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_4_OnRandomizeSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Nose.WBP_CC_DynamicSubPanel_Nose_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Nose_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Nose_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Nose.WBP_CC_DynamicSubPanel_Nose_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Nose_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Nose_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Nose.WBP_CC_DynamicSubPanel_Nose_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_Nose
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_ComponentBoundEvent_Slider_Value_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Slider_Value                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Nose_C::ExecuteUbergraph_WBP_CC_DynamicSubPanel_Nose(int32 EntryPoint, const struct FVector2D& K2Node_ComponentBoundEvent_Slider_Value_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double K2Node_ComponentBoundEvent_Slider_Value, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_3, bool K2Node_Event_IsDesignTime, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Nose_C", "ExecuteUbergraph_WBP_CC_DynamicSubPanel_Nose");

	Params::UWBP_CC_DynamicSubPanel_Nose_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_Nose_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Slider_Value_1 = K2Node_ComponentBoundEvent_Slider_Value_1;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Slider_Value = K2Node_ComponentBoundEvent_Slider_Value;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


