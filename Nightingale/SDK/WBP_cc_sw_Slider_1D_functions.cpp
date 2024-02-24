#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C
// (None)

class UClass* UWBP_cc_sw_Slider_1D_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_cc_sw_Slider_1D_C");

	return Clss;
}


// WBP_cc_sw_Slider_1D_C WBP_cc_sw_Slider_1D.Default__WBP_cc_sw_Slider_1D_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_cc_sw_Slider_1D_C* UWBP_cc_sw_Slider_1D_C::GetDefaultObj()
{
	static class UWBP_cc_sw_Slider_1D_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_cc_sw_Slider_1D_C*>(UWBP_cc_sw_Slider_1D_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.CommitValue
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsExpandedCached_IsExpanded                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Slider_1D_C::CommitValue(float CallFunc_GetValue_ReturnValue, bool CallFunc_GetIsExpandedCached_IsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "CommitValue");

	Params::UWBP_cc_sw_Slider_1D_C_CommitValue_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_GetIsExpandedCached_IsExpanded = CallFunc_GetIsExpandedCached_IsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.OnInputMethodChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Slider_1D_C::OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "OnInputMethodChanged");

	Params::UWBP_cc_sw_Slider_1D_C_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.BP_GetDesiredFocusTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsExpandedCached_IsExpanded                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_cc_sw_Slider_1D_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, bool CallFunc_GetIsExpandedCached_IsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_cc_sw_Slider_1D_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;
	Parms.CallFunc_GetIsExpandedCached_IsExpanded = CallFunc_GetIsExpandedCached_IsExpanded;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.UpdateHeader Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_InRangeB_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_InRangeA_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Slider_1D_C::UpdateHeader_Value(float CallFunc_GetValue_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, int32 CallFunc_Round_ReturnValue, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast, double CallFunc_MapRangeClamped_InRangeA_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "UpdateHeader Value");

	Params::UWBP_cc_sw_Slider_1D_C_UpdateHeader_Value_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_InRangeB_ImplicitCast = CallFunc_MapRangeClamped_InRangeB_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_InRangeA_ImplicitCast = CallFunc_MapRangeClamped_InRangeA_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.SetSliderValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value_Slider_Current                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Slider_1D_C::SetSliderValue(float Value_Slider_Current)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "SetSliderValue");

	Params::UWBP_cc_sw_Slider_1D_C_SetSliderValue_Params Parms{};

	Parms.Value_Slider_Current = Value_Slider_Current;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.AudioCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_cc_sw_Slider_1D_C::AudioCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "AudioCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.OnValueChangedSFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int64                              CallFunc_Round64_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_Int64Int64_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_SpawnAkComponentAtLocation_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Slider_1D_C::OnValueChangedSFX(double Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, bool CallFunc_IsValid_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int64 CallFunc_Round64_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_NotEqual_Int64Int64_ReturnValue, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "OnValueChangedSFX");

	Params::UWBP_cc_sw_Slider_1D_C_OnValueChangedSFX_Params Parms{};

	Parms.Value = Value;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Round64_ReturnValue = CallFunc_Round64_ReturnValue;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_NotEqual_Int64Int64_ReturnValue = CallFunc_NotEqual_Int64Int64_ReturnValue;
	Parms.CallFunc_SpawnAkComponentAtLocation_ReturnValue = CallFunc_SpawnAkComponentAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.ResetSlider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             K2Node_CallDelegate_Slider_Value_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Slider_1D_C::ResetSlider(double K2Node_CallDelegate_Slider_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "ResetSlider");

	Params::UWBP_cc_sw_Slider_1D_C_ResetSlider_Params Parms{};

	Parms.K2Node_CallDelegate_Slider_Value_ImplicitCast = K2Node_CallDelegate_Slider_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.Get_bu_Reset_ToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_cc_sw_Slider_1D_C::Get_bu_Reset_ToolTipWidget(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "Get_bu_Reset_ToolTipWidget");

	Params::UWBP_cc_sw_Slider_1D_C_Get_bu_Reset_ToolTipWidget_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.GetTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_cc_sw_Slider_1D_C::GetTooltipWidget(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "GetTooltipWidget");

	Params::UWBP_cc_sw_Slider_1D_C_GetTooltipWidget_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.RefreshSliderParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_cc_sw_Slider_1D_C::RefreshSliderParameters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "RefreshSliderParameters");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.BndEvt__WBP_cc_sw_Slider_1D_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Slider_1D_C::BndEvt__WBP_cc_sw_Slider_1D_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "BndEvt__WBP_cc_sw_Slider_1D_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWBP_cc_sw_Slider_1D_C_BndEvt__WBP_cc_sw_Slider_1D_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.Randomize Slider
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_cc_sw_Slider_1D_C::Randomize_Slider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "Randomize Slider");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Slider_1D_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "PreConstruct");

	Params::UWBP_cc_sw_Slider_1D_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_cc_sw_Slider_1D_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "OnAddedToFocusPath");

	Params::UWBP_cc_sw_Slider_1D_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_cc_sw_Slider_1D_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "OnRemovedFromFocusPath");

	Params::UWBP_cc_sw_Slider_1D_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.BndEvt__WBP_cc_sw_Slider_1D_WBP_CC_SubWidget_Button_K2Node_ComponentBoundEvent_2_CategoryButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_cc_sw_Slider_1D_C::BndEvt__WBP_cc_sw_Slider_1D_WBP_CC_SubWidget_Button_K2Node_ComponentBoundEvent_2_CategoryButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "BndEvt__WBP_cc_sw_Slider_1D_WBP_CC_SubWidget_Button_K2Node_ComponentBoundEvent_2_CategoryButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_cc_sw_Slider_1D_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.BndEvt__WBP_cc_sw_Slider_1D_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Slider_1D_C::BndEvt__WBP_cc_sw_Slider_1D_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "BndEvt__WBP_cc_sw_Slider_1D_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_cc_sw_Slider_1D_C_BndEvt__WBP_cc_sw_Slider_1D_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.BndEvt__WBP_cc_sw_Slider_1D_WBP_CC_SubWidget_Button_K2Node_ComponentBoundEvent_3_OnCategoryButtonExpansionSet__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               IsExpanded                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Slider_1D_C::BndEvt__WBP_cc_sw_Slider_1D_WBP_CC_SubWidget_Button_K2Node_ComponentBoundEvent_3_OnCategoryButtonExpansionSet__DelegateSignature(bool IsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "BndEvt__WBP_cc_sw_Slider_1D_WBP_CC_SubWidget_Button_K2Node_ComponentBoundEvent_3_OnCategoryButtonExpansionSet__DelegateSignature");

	Params::UWBP_cc_sw_Slider_1D_C_BndEvt__WBP_cc_sw_Slider_1D_WBP_CC_SubWidget_Button_K2Node_ComponentBoundEvent_3_OnCategoryButtonExpansionSet__DelegateSignature_Params Parms{};

	Parms.IsExpanded = IsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.BndEvt__WBP_cc_sw_Slider_1D_CBU_ResetSliderValue_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Slider_1D_C::BndEvt__WBP_cc_sw_Slider_1D_CBU_ResetSliderValue_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "BndEvt__WBP_cc_sw_Slider_1D_CBU_ResetSliderValue_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_cc_sw_Slider_1D_C_BndEvt__WBP_cc_sw_Slider_1D_CBU_ResetSliderValue_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.ExecuteUbergraph_WBP_cc_sw_Slider_1D
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_IsExpanded                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsExpandedCached_IsExpanded                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsExpandedCached_IsExpanded_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnValueChangedSFX_Value_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_Min_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_Max_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CallDelegate_Slider_Value_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Slider_1D_C::ExecuteUbergraph_WBP_cc_sw_Slider_1D(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, float K2Node_ComponentBoundEvent_Value, bool K2Node_Event_IsDesignTime, double CallFunc_RandomFloatInRange_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool Temp_bool_Variable_1, bool CallFunc_IsVisible_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_IsUsingGamepad_ReturnValue, bool K2Node_ComponentBoundEvent_IsExpanded, bool CallFunc_GetIsExpandedCached_IsExpanded, bool CallFunc_GetIsExpandedCached_IsExpanded_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double CallFunc_OnValueChangedSFX_Value_ImplicitCast, double CallFunc_RandomFloatInRange_Min_ImplicitCast, double CallFunc_RandomFloatInRange_Max_ImplicitCast, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast, double K2Node_CallDelegate_Slider_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "ExecuteUbergraph_WBP_cc_sw_Slider_1D");

	Params::UWBP_cc_sw_Slider_1D_C_ExecuteUbergraph_WBP_cc_sw_Slider_1D_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_IsExpanded = K2Node_ComponentBoundEvent_IsExpanded;
	Parms.CallFunc_GetIsExpandedCached_IsExpanded = CallFunc_GetIsExpandedCached_IsExpanded;
	Parms.CallFunc_GetIsExpandedCached_IsExpanded_1 = CallFunc_GetIsExpandedCached_IsExpanded_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;
	Parms.CallFunc_OnValueChangedSFX_Value_ImplicitCast = CallFunc_OnValueChangedSFX_Value_ImplicitCast;
	Parms.CallFunc_RandomFloatInRange_Min_ImplicitCast = CallFunc_RandomFloatInRange_Min_ImplicitCast;
	Parms.CallFunc_RandomFloatInRange_Max_ImplicitCast = CallFunc_RandomFloatInRange_Max_ImplicitCast;
	Parms.CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast = CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast;
	Parms.CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast = CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast;
	Parms.K2Node_CallDelegate_Slider_Value_ImplicitCast = K2Node_CallDelegate_Slider_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_cc_sw_Slider_1D.WBP_cc_sw_Slider_1D_C.ED_SliderValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_cc_sw_Slider_1D_C::ED_SliderValueChanged__DelegateSignature(double Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_cc_sw_Slider_1D_C", "ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_cc_sw_Slider_1D_C_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


