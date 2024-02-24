#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GammaCalibration.WBP_GammaCalibration_C
// (None)

class UClass* UWBP_GammaCalibration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GammaCalibration_C");

	return Clss;
}


// WBP_GammaCalibration_C WBP_GammaCalibration.Default__WBP_GammaCalibration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GammaCalibration_C* UWBP_GammaCalibration_C::GetDefaultObj()
{
	static class UWBP_GammaCalibration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GammaCalibration_C*>(UWBP_GammaCalibration_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GammaCalibration.WBP_GammaCalibration_C.AdjustProxyImageBrightness
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GammaCalibration_C::AdjustProxyImageBrightness(double Value, float CallFunc_GetFloatValue_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_GetFloatValue_InTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GammaCalibration_C", "AdjustProxyImageBrightness");

	Params::UWBP_GammaCalibration_C_AdjustProxyImageBrightness_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetFloatValue_InTime_ImplicitCast = CallFunc_GetFloatValue_InTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GammaCalibration.WBP_GammaCalibration_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GammaCalibration_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GammaCalibration_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GammaCalibration.WBP_GammaCalibration_C.BndEvt__WBP_GammaCalibration_WBP_GammaScreen_Slider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GammaCalibration_C::BndEvt__WBP_GammaCalibration_WBP_GammaScreen_Slider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GammaCalibration_C", "BndEvt__WBP_GammaCalibration_WBP_GammaScreen_Slider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature");

	Params::UWBP_GammaCalibration_C_BndEvt__WBP_GammaCalibration_WBP_GammaScreen_Slider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GammaCalibration.WBP_GammaCalibration_C.BndEvt__WBP_GammaCalibration_CBU_Gamma_Accept_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GammaCalibration_C::BndEvt__WBP_GammaCalibration_CBU_Gamma_Accept_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GammaCalibration_C", "BndEvt__WBP_GammaCalibration_CBU_Gamma_Accept_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_GammaCalibration_C_BndEvt__WBP_GammaCalibration_CBU_Gamma_Accept_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GammaCalibration.WBP_GammaCalibration_C.ExecuteUbergraph_WBP_GammaCalibration
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_NewValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBrightness_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_AdjustProxyImageBrightness_Value_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_AdjustProxyImageBrightness_Value_ImplicitCast_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GammaCalibration_C::ExecuteUbergraph_WBP_GammaCalibration(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue, float K2Node_ComponentBoundEvent_NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, float CallFunc_GetBrightness_ReturnValue, double CallFunc_AdjustProxyImageBrightness_Value_ImplicitCast, double CallFunc_AdjustProxyImageBrightness_Value_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GammaCalibration_C", "ExecuteUbergraph_WBP_GammaCalibration");

	Params::UWBP_GammaCalibration_C_ExecuteUbergraph_WBP_GammaCalibration_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetLocalGameUserSettingsComponent_ReturnValue = CallFunc_GetLocalGameUserSettingsComponent_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewValue = K2Node_ComponentBoundEvent_NewValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetBrightness_ReturnValue = CallFunc_GetBrightness_ReturnValue;
	Parms.CallFunc_AdjustProxyImageBrightness_Value_ImplicitCast = CallFunc_AdjustProxyImageBrightness_Value_ImplicitCast;
	Parms.CallFunc_AdjustProxyImageBrightness_Value_ImplicitCast_1 = CallFunc_AdjustProxyImageBrightness_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GammaCalibration.WBP_GammaCalibration_C.OnGammaAccepted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GammaCalibration_C::OnGammaAccepted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GammaCalibration_C", "OnGammaAccepted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


