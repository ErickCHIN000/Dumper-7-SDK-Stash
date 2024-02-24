#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C
// (None)

class UClass* UWBP_CC_DynamicSubPanel_Eyelashes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_DynamicSubPanel_Eyelashes_C");

	return Clss;
}


// WBP_CC_DynamicSubPanel_Eyelashes_C WBP_CC_DynamicSubPanel_Eyelashes.Default__WBP_CC_DynamicSubPanel_Eyelashes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_DynamicSubPanel_Eyelashes_C* UWBP_CC_DynamicSubPanel_Eyelashes_C::GetDefaultObj()
{
	static class UWBP_CC_DynamicSubPanel_Eyelashes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_DynamicSubPanel_Eyelashes_C*>(UWBP_CC_DynamicSubPanel_Eyelashes_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.OnInputMethodChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Eyelashes_C::OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Eyelashes_C", "OnInputMethodChanged");

	Params::UWBP_CC_DynamicSubPanel_Eyelashes_C_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_DynamicSubPanel_Eyelashes_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Eyelashes_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_CC_DynamicSubPanel_Eyelashes_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.RefreshUIwithStoredValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_GetEyeLashLength_OutValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetEyeLashLength_OutValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Eyelashes_C::RefreshUIwithStoredValues(double CallFunc_GetEyeLashLength_OutValue, double CallFunc_GetEyeLashLength_OutValue_1, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast, float CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Eyelashes_C", "RefreshUIwithStoredValues");

	Params::UWBP_CC_DynamicSubPanel_Eyelashes_C_RefreshUIwithStoredValues_Params Parms{};

	Parms.CallFunc_GetEyeLashLength_OutValue = CallFunc_GetEyeLashLength_OutValue;
	Parms.CallFunc_GetEyeLashLength_OutValue_1 = CallFunc_GetEyeLashLength_OutValue_1;
	Parms.CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast = CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast;
	Parms.CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1 = CallFunc_SetSliderValue_Value_Slider_Current_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.CollectSideData
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>InOutMap                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EEyeSide                EyeSide                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEyeLashSettings            NewLocalVar                                                      (Edit, BlueprintVisible, NoDestructor)
// class FString                      Prefix                                                           (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FEyeLashSettings            OldData                                                          (Edit, BlueprintVisible, NoDestructor)
// struct FEyeLashSettings            CurrentData                                                      (Edit, BlueprintVisible, NoDestructor)
// enum class EEyeSide                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// enum class EEyeSide                Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs             (None)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1           (None)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2           (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// struct FEyeLashSettings            K2Node_Select_Default_1                                          (NoDestructor)
// struct FEyeLashAppearance          CallFunc_GetEyeLashData_OutValue                                 (NoDestructor)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Eyelashes_C::CollectSideData(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>& InOutMap, enum class EEyeSide EyeSide, const struct FEyeLashSettings& NewLocalVar, const class FString& Prefix, const struct FEyeLashSettings& OldData, const struct FEyeLashSettings& CurrentData, enum class EEyeSide Temp_byte_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, enum class EEyeSide Temp_byte_Variable_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_3, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& K2Node_Select_Default, const struct FEyeLashSettings& K2Node_Select_Default_1, const struct FEyeLashAppearance& CallFunc_GetEyeLashData_OutValue, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Eyelashes_C", "CollectSideData");

	Params::UWBP_CC_DynamicSubPanel_Eyelashes_C_CollectSideData_Params Parms{};

	Parms.InOutMap = InOutMap;
	Parms.EyeSide = EyeSide;
	Parms.NewLocalVar = NewLocalVar;
	Parms.Prefix = Prefix;
	Parms.OldData = OldData;
	Parms.CurrentData = CurrentData;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue_3 = CallFunc_Conv_NameToString_ReturnValue_3;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_1;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue_1 = CallFunc_Conv_DoubleToString_ReturnValue_1;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2 = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetEyeLashData_OutValue = CallFunc_GetEyeLashData_OutValue;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast;
	Parms.CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1 = CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.CollectPanelValues
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>OutValues                                                        (Parm, OutParm)
// class FString                      OutPanelName                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>Values                                                           (Edit, BlueprintVisible)

void UWBP_CC_DynamicSubPanel_Eyelashes_C::CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Eyelashes_C", "CollectPanelValues");

	Params::UWBP_CC_DynamicSubPanel_Eyelashes_C_CollectPanelValues_Params Parms{};

	Parms.Values = Values;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

	if (OutPanelName != nullptr)
		*OutPanelName = std::move(Parms.OutPanelName);

}


// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.CacheStartingPanelValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEyeLashAppearance          CallFunc_GetEyeLashData_OutValue                                 (NoDestructor)
// struct FEyeLashAppearance          CallFunc_GetEyeLashData_OutValue_1                               (NoDestructor)

void UWBP_CC_DynamicSubPanel_Eyelashes_C::CacheStartingPanelValues(const struct FEyeLashAppearance& CallFunc_GetEyeLashData_OutValue, const struct FEyeLashAppearance& CallFunc_GetEyeLashData_OutValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Eyelashes_C", "CacheStartingPanelValues");

	Params::UWBP_CC_DynamicSubPanel_Eyelashes_C_CacheStartingPanelValues_Params Parms{};

	Parms.CallFunc_GetEyeLashData_OutValue = CallFunc_GetEyeLashData_OutValue;
	Parms.CallFunc_GetEyeLashData_OutValue_1 = CallFunc_GetEyeLashData_OutValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.SetEyelashLengthThickness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Eyelashes_C::SetEyelashLengthThickness(double InputPin, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Eyelashes_C", "SetEyelashLengthThickness");

	Params::UWBP_CC_DynamicSubPanel_Eyelashes_C_SetEyelashLengthThickness_Params Parms{};

	Parms.InputPin = InputPin;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Eyelashes_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Eyelashes_C", "PreConstruct");

	Params::UWBP_CC_DynamicSubPanel_Eyelashes_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Eyelashes_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Eyelashes_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_WBP_cc_sw_Slider_1D_196_K2Node_ComponentBoundEvent_5_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Eyelashes_C::BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_WBP_cc_sw_Slider_1D_196_K2Node_ComponentBoundEvent_5_ED_SliderValueChanged__DelegateSignature(double Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Eyelashes_C", "BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_WBP_cc_sw_Slider_1D_196_K2Node_ComponentBoundEvent_5_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Eyelashes_C_BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_WBP_cc_sw_Slider_1D_196_K2Node_ComponentBoundEvent_5_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.ResetPanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Eyelashes_C::ResetPanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Eyelashes_C", "ResetPanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_WBP_cc_sw_Slider_1D_1_K2Node_ComponentBoundEvent_0_ED_SliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// double                             Slider_Value                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Eyelashes_C::BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_WBP_cc_sw_Slider_1D_1_K2Node_ComponentBoundEvent_0_ED_SliderValueChanged__DelegateSignature(double Slider_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Eyelashes_C", "BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_WBP_cc_sw_Slider_1D_1_K2Node_ComponentBoundEvent_0_ED_SliderValueChanged__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Eyelashes_C_BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_WBP_cc_sw_Slider_1D_1_K2Node_ComponentBoundEvent_0_ED_SliderValueChanged__DelegateSignature_Params Parms{};

	Parms.Slider_Value = Slider_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_1_OnResetSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Eyelashes_C::BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_1_OnResetSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Eyelashes_C", "BndEvt__WBP_CC_DynamicSubPanel_Eyelashes_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_1_OnResetSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Eyelashes_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Eyelashes_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Eyelashes_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Eyelashes_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Eyelashes.WBP_CC_DynamicSubPanel_Eyelashes_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_Eyelashes
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Slider_Value_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_ComponentBoundEvent_Slider_Value                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Eyelashes_C::ExecuteUbergraph_WBP_CC_DynamicSubPanel_Eyelashes(int32 EntryPoint, double K2Node_ComponentBoundEvent_Slider_Value_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double K2Node_ComponentBoundEvent_Slider_Value, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Eyelashes_C", "ExecuteUbergraph_WBP_CC_DynamicSubPanel_Eyelashes");

	Params::UWBP_CC_DynamicSubPanel_Eyelashes_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_Eyelashes_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Slider_Value_1 = K2Node_ComponentBoundEvent_Slider_Value_1;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_ComponentBoundEvent_Slider_Value = K2Node_ComponentBoundEvent_Slider_Value;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


