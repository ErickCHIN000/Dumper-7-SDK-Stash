#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_MainMenu_Gamma_Slider.wid_MainMenu_Gamma_Slider_C
// (None)

class UClass* UWid_MainMenu_Gamma_Slider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_MainMenu_Gamma_Slider_C");

	return Clss;
}


// wid_MainMenu_Gamma_Slider_C wid_MainMenu_Gamma_Slider.Default__wid_MainMenu_Gamma_Slider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_MainMenu_Gamma_Slider_C* UWid_MainMenu_Gamma_Slider_C::GetDefaultObj()
{
	static class UWid_MainMenu_Gamma_Slider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_MainMenu_Gamma_Slider_C*>(UWid_MainMenu_Gamma_Slider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_MainMenu_Gamma_Slider.wid_MainMenu_Gamma_Slider_C.GetValueText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UWid_MainMenu_Gamma_Slider_C::GetValueText(float CallFunc_GetValue_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_Slider_C", "GetValueText");

	Params::UWid_MainMenu_Gamma_Slider_C_GetValueText_Params Parms{};

	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_MainMenu_Gamma_Slider.wid_MainMenu_Gamma_Slider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_Slider_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_Slider_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma_Slider.wid_MainMenu_Gamma_Slider_C.ValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValueMinMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewValueMinMaxOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ZeroOneValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Gamma_Slider_C::ValueChanged(float NewValueMinMax, float NewValueMinMaxOffset, float ZeroOneValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_Slider_C", "ValueChanged");

	Params::UWid_MainMenu_Gamma_Slider_C_ValueChanged_Params Parms{};

	Parms.NewValueMinMax = NewValueMinMax;
	Parms.NewValueMinMaxOffset = NewValueMinMaxOffset;
	Parms.ZeroOneValue = ZeroOneValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Gamma_Slider.wid_MainMenu_Gamma_Slider_C.BndEvt__BtnM_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_Slider_C::BndEvt__BtnM_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_Slider_C", "BndEvt__BtnM_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma_Slider.wid_MainMenu_Gamma_Slider_C.BndEvt__BtnP_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_Slider_C::BndEvt__BtnP_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_Slider_C", "BndEvt__BtnP_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma_Slider.wid_MainMenu_Gamma_Slider_C.BndEvt__BtnM_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_Slider_C::BndEvt__BtnM_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_Slider_C", "BndEvt__BtnM_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma_Slider.wid_MainMenu_Gamma_Slider_C.BndEvt__BtnP_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_Slider_C::BndEvt__BtnP_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_Slider_C", "BndEvt__BtnP_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma_Slider.wid_MainMenu_Gamma_Slider_C.ExecuteUbergraph_wid_MainMenu_Gamma_Slider
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_NewValueMinMax                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValueMinMaxOffset                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ZeroOneValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_MainMenu_Gamma_Slider_C::ExecuteUbergraph_wid_MainMenu_Gamma_Slider(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_NewValueMinMax, float K2Node_CustomEvent_NewValueMinMaxOffset, float K2Node_CustomEvent_ZeroOneValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_Slider_C", "ExecuteUbergraph_wid_MainMenu_Gamma_Slider");

	Params::UWid_MainMenu_Gamma_Slider_C_ExecuteUbergraph_wid_MainMenu_Gamma_Slider_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NewValueMinMax = K2Node_CustomEvent_NewValueMinMax;
	Parms.K2Node_CustomEvent_NewValueMinMaxOffset = K2Node_CustomEvent_NewValueMinMaxOffset;
	Parms.K2Node_CustomEvent_ZeroOneValue = K2Node_CustomEvent_ZeroOneValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_MainMenu_Gamma_Slider.wid_MainMenu_Gamma_Slider_C.ValChangedMinus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_Slider_C::ValChangedMinus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_Slider_C", "ValChangedMinus__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_MainMenu_Gamma_Slider.wid_MainMenu_Gamma_Slider_C.ValChangedPlus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_MainMenu_Gamma_Slider_C::ValChangedPlus__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_MainMenu_Gamma_Slider_C", "ValChangedPlus__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


