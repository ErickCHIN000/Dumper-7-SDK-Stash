#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C
// (None)

class UClass* UWBP_MapMarkerEditPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MapMarkerEditPanel_C");

	return Clss;
}


// WBP_MapMarkerEditPanel_C WBP_MapMarkerEditPanel.Default__WBP_MapMarkerEditPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MapMarkerEditPanel_C* UWBP_MapMarkerEditPanel_C::GetDefaultObj()
{
	static class UWBP_MapMarkerEditPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MapMarkerEditPanel_C*>(UWBP_MapMarkerEditPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.SetPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   InPosition                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_MapMarkerEditPanel_C::SetPosition(const struct FVector2D& InPosition, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMarkerEditPanel_C", "SetPosition");

	Params::UWBP_MapMarkerEditPanel_C_SetPosition_Params Parms{};

	Parms.InPosition = InPosition;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_MapMarkerEditPanel_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMarkerEditPanel_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_MapMarkerEditPanel_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.IsTextValid
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        InText                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapMarkerEditPanel_C::IsTextValid(class FText& InText, bool* IsValid, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMarkerEditPanel_C", "IsTextValid");

	Params::UWBP_MapMarkerEditPanel_C_IsTextValid_Params Parms{};

	Parms.InText = InText;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapMarkerEditPanel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMarkerEditPanel_C", "PreConstruct");

	Params::UWBP_MapMarkerEditPanel_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_MapMarkerEditPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMarkerEditPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.BndEvt__WBP_MapMarkerEditPanel_ButtonCancel_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_MapMarkerEditPanel_C::BndEvt__WBP_MapMarkerEditPanel_ButtonCancel_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMarkerEditPanel_C", "BndEvt__WBP_MapMarkerEditPanel_ButtonCancel_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.BndEvt__WBP_MapMarkerEditPanel_ButtonSave_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_MapMarkerEditPanel_C::BndEvt__WBP_MapMarkerEditPanel_ButtonSave_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMarkerEditPanel_C", "BndEvt__WBP_MapMarkerEditPanel_ButtonSave_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.BndEvt__WBP_MapMarkerEditPanel_MarkerNoteEditText_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_MapMarkerEditPanel_C::BndEvt__WBP_MapMarkerEditPanel_MarkerNoteEditText_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMarkerEditPanel_C", "BndEvt__WBP_MapMarkerEditPanel_MarkerNoteEditText_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextChangedEvent__DelegateSignature");

	Params::UWBP_MapMarkerEditPanel_C_BndEvt__WBP_MapMarkerEditPanel_MarkerNoteEditText_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_MapMarkerEditPanel_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMarkerEditPanel_C", "OnRemovedFromFocusPath");

	Params::UWBP_MapMarkerEditPanel_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.BndEvt__WBP_MapMarkerEditPanel_RadiusSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapMarkerEditPanel_C::BndEvt__WBP_MapMarkerEditPanel_RadiusSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMarkerEditPanel_C", "BndEvt__WBP_MapMarkerEditPanel_RadiusSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWBP_MapMarkerEditPanel_C_BndEvt__WBP_MapMarkerEditPanel_RadiusSlider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.ExecuteUbergraph_WBP_MapMarkerEditPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTextValid_IsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CallDelegate_NewRadius_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CallDelegate_NewRadius_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapMarkerEditPanel_C::ExecuteUbergraph_WBP_MapMarkerEditPanel(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_GetText_ReturnValue, float CallFunc_GetValue_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsTextValid_IsValid, const struct FFocusEvent& K2Node_Event_InFocusEvent, float K2Node_ComponentBoundEvent_Value, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_SetValue_InValue_ImplicitCast, double K2Node_CallDelegate_NewRadius_ImplicitCast, double K2Node_CallDelegate_NewRadius_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMarkerEditPanel_C", "ExecuteUbergraph_WBP_MapMarkerEditPanel");

	Params::UWBP_MapMarkerEditPanel_C_ExecuteUbergraph_WBP_MapMarkerEditPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsTextValid_IsValid = CallFunc_IsTextValid_IsValid;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;
	Parms.K2Node_CallDelegate_NewRadius_ImplicitCast = K2Node_CallDelegate_NewRadius_ImplicitCast;
	Parms.K2Node_CallDelegate_NewRadius_ImplicitCast_1 = K2Node_CallDelegate_NewRadius_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.RadiusSliderValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewRadius                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapMarkerEditPanel_C::RadiusSliderValueChanged__DelegateSignature(double NewRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMarkerEditPanel_C", "RadiusSliderValueChanged__DelegateSignature");

	Params::UWBP_MapMarkerEditPanel_C_RadiusSliderValueChanged__DelegateSignature_Params Parms{};

	Parms.NewRadius = NewRadius;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_MapMarkerEditPanel.WBP_MapMarkerEditPanel_C.MarkerEditPanelSavePressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewNote                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             NewRadius                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapMarkerEditPanel_C::MarkerEditPanelSavePressed__DelegateSignature(class FText NewNote, double NewRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_MapMarkerEditPanel_C", "MarkerEditPanelSavePressed__DelegateSignature");

	Params::UWBP_MapMarkerEditPanel_C_MarkerEditPanelSavePressed__DelegateSignature_Params Parms{};

	Parms.NewNote = NewNote;
	Parms.NewRadius = NewRadius;

	UObject::ProcessEvent(Func, &Parms);

}

}


