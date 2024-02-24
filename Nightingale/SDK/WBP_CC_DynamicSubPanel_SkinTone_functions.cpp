#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C
// (None)

class UClass* UWBP_CC_DynamicSubPanel_SkinTone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_DynamicSubPanel_SkinTone_C");

	return Clss;
}


// WBP_CC_DynamicSubPanel_SkinTone_C WBP_CC_DynamicSubPanel_SkinTone.Default__WBP_CC_DynamicSubPanel_SkinTone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_DynamicSubPanel_SkinTone_C* UWBP_CC_DynamicSubPanel_SkinTone_C::GetDefaultObj()
{
	static class UWBP_CC_DynamicSubPanel_SkinTone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_DynamicSubPanel_SkinTone_C*>(UWBP_CC_DynamicSubPanel_SkinTone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.OnInputMethodChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_SkinTone_C::OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_SkinTone_C", "OnInputMethodChanged");

	Params::UWBP_CC_DynamicSubPanel_SkinTone_C_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_DynamicSubPanel_SkinTone_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_SkinTone_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_CC_DynamicSubPanel_SkinTone_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.Reset Content
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         CallFunc_GetSkinColor_OutSkinColor                               (NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_SkinTone_C::Reset_Content(const struct FDataTableRowHandle& CallFunc_GetSkinColor_OutSkinColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_SkinTone_C", "Reset Content");

	Params::UWBP_CC_DynamicSubPanel_SkinTone_C_Reset_Content_Params Parms{};

	Parms.CallFunc_GetSkinColor_OutSkinColor = CallFunc_GetSkinColor_OutSkinColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.SetActiveValues&UpdateWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetRedness_OutRedness                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMottling_OutMottling                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetSkinColor_OutSkinColor                               (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_SkinTone_C::SetActiveValues_UpdateWidgets(double CallFunc_GetRedness_OutRedness, double CallFunc_GetMottling_OutMottling, const struct FDataTableRowHandle& CallFunc_GetSkinColor_OutSkinColor, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_SkinTone_C", "SetActiveValues&UpdateWidgets");

	Params::UWBP_CC_DynamicSubPanel_SkinTone_C_SetActiveValues_UpdateWidgets_Params Parms{};

	Parms.CallFunc_GetRedness_OutRedness = CallFunc_GetRedness_OutRedness;
	Parms.CallFunc_GetMottling_OutMottling = CallFunc_GetMottling_OutMottling;
	Parms.CallFunc_GetSkinColor_OutSkinColor = CallFunc_GetSkinColor_OutSkinColor;
	Parms.CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast = CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast;
	Parms.CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1 = CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.CollectPanelValues
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>OutValues                                                        (Parm, OutParm)
// class FString                      OutPanelName                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetSkinColor_OutSkinColor                               (NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs             (None)
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>K2Node_MakeMap_Map                                               (None)

void UWBP_CC_DynamicSubPanel_SkinTone_C::CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName, const struct FDataTableRowHandle& CallFunc_GetSkinColor_OutSkinColor, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_SkinTone_C", "CollectPanelValues");

	Params::UWBP_CC_DynamicSubPanel_SkinTone_C_CollectPanelValues_Params Parms{};

	Parms.CallFunc_GetSkinColor_OutSkinColor = CallFunc_GetSkinColor_OutSkinColor;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

	if (OutPanelName != nullptr)
		*OutPanelName = std::move(Parms.OutPanelName);

}


// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.CacheStartingPanelValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         CallFunc_GetSkinColor_OutSkinColor                               (NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_SkinTone_C::CacheStartingPanelValues(const struct FDataTableRowHandle& CallFunc_GetSkinColor_OutSkinColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_SkinTone_C", "CacheStartingPanelValues");

	Params::UWBP_CC_DynamicSubPanel_SkinTone_C_CacheStartingPanelValues_Params Parms{};

	Parms.CallFunc_GetSkinColor_OutSkinColor = CallFunc_GetSkinColor_OutSkinColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_SkinTone_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_SkinTone_C", "PreConstruct");

	Params::UWBP_CC_DynamicSubPanel_SkinTone_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_SkinTone_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_SkinTone_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.BndEvt__WBP_CC_DynamicSubPanel_SkinTone_SkinTonePicker_K2Node_ComponentBoundEvent_0_CC_ColorSwatch_Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         ColorID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              GridIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ColorSwatch_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RgbSwatch___Disable_tints                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_SkinTone_C::BndEvt__WBP_CC_DynamicSubPanel_SkinTone_SkinTonePicker_K2Node_ComponentBoundEvent_0_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_SkinTone_C", "BndEvt__WBP_CC_DynamicSubPanel_SkinTone_SkinTonePicker_K2Node_ComponentBoundEvent_0_CC_ColorSwatch_Selected__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_SkinTone_C_BndEvt__WBP_CC_DynamicSubPanel_SkinTone_SkinTonePicker_K2Node_ComponentBoundEvent_0_CC_ColorSwatch_Selected__DelegateSignature_Params Parms{};

	Parms.ColorID = ColorID;
	Parms.GridIndex = GridIndex;
	Parms.ColorSwatch_ = ColorSwatch_;
	Parms.RgbSwatch___Disable_tints = RgbSwatch___Disable_tints;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.ResetPanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_SkinTone_C::ResetPanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_SkinTone_C", "ResetPanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.RandomizePanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_SkinTone_C::RandomizePanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_SkinTone_C", "RandomizePanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.BndEvt__WBP_CC_DynamicSubPanel_SkinTone_Slider_Mottled_K2Node_ComponentBoundEvent_2_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_SkinTone_C::BndEvt__WBP_CC_DynamicSubPanel_SkinTone_Slider_Mottled_K2Node_ComponentBoundEvent_2_ED_SliderValueChanged__DelegateSignature(double Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_SkinTone_C", "BndEvt__WBP_CC_DynamicSubPanel_SkinTone_Slider_Mottled_K2Node_ComponentBoundEvent_2_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_SkinTone_C_BndEvt__WBP_CC_DynamicSubPanel_SkinTone_Slider_Mottled_K2Node_ComponentBoundEvent_2_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.BndEvt__WBP_CC_DynamicSubPanel_SkinTone_Slider_Redness_K2Node_ComponentBoundEvent_3_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_SkinTone_C::BndEvt__WBP_CC_DynamicSubPanel_SkinTone_Slider_Redness_K2Node_ComponentBoundEvent_3_ED_SliderValueChanged__DelegateSignature(double Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_SkinTone_C", "BndEvt__WBP_CC_DynamicSubPanel_SkinTone_Slider_Redness_K2Node_ComponentBoundEvent_3_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_SkinTone_C_BndEvt__WBP_CC_DynamicSubPanel_SkinTone_Slider_Redness_K2Node_ComponentBoundEvent_3_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.BndEvt__WBP_CC_DynamicSubPanel_SkinTone_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_4_OnRandomizeSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_SkinTone_C::BndEvt__WBP_CC_DynamicSubPanel_SkinTone_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_4_OnRandomizeSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_SkinTone_C", "BndEvt__WBP_CC_DynamicSubPanel_SkinTone_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_4_OnRandomizeSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.BndEvt__WBP_CC_DynamicSubPanel_SkinTone_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_5_OnResetSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_SkinTone_C::BndEvt__WBP_CC_DynamicSubPanel_SkinTone_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_5_OnResetSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_SkinTone_C", "BndEvt__WBP_CC_DynamicSubPanel_SkinTone_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_5_OnResetSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_SkinTone_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_SkinTone_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_SkinTone_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_SkinTone_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_SkinTone.WBP_CC_DynamicSubPanel_SkinTone_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_SkinTone
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDesiredFocusTarget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_ComponentBoundEvent_ColorID                               (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_GridIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_ColorSwatch_                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Slider_Value_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Slider_Value                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDesiredFocusTarget_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_SkinTone_C::ExecuteUbergraph_WBP_CC_DynamicSubPanel_SkinTone(int32 EntryPoint, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID, int32 K2Node_ComponentBoundEvent_GridIndex, bool K2Node_ComponentBoundEvent_ColorSwatch_, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double K2Node_ComponentBoundEvent_Slider_Value_1, bool K2Node_Event_IsDesignTime, double K2Node_ComponentBoundEvent_Slider_Value, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_SkinTone_C", "ExecuteUbergraph_WBP_CC_DynamicSubPanel_SkinTone");

	Params::UWBP_CC_DynamicSubPanel_SkinTone_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_SkinTone_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue = CallFunc_GetDesiredFocusTarget_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ColorID = K2Node_ComponentBoundEvent_ColorID;
	Parms.K2Node_ComponentBoundEvent_GridIndex = K2Node_ComponentBoundEvent_GridIndex;
	Parms.K2Node_ComponentBoundEvent_ColorSwatch_ = K2Node_ComponentBoundEvent_ColorSwatch_;
	Parms.K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints = K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_ComponentBoundEvent_Slider_Value_1 = K2Node_ComponentBoundEvent_Slider_Value_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Slider_Value = K2Node_ComponentBoundEvent_Slider_Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue_1 = CallFunc_GetDesiredFocusTarget_ReturnValue_1;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


