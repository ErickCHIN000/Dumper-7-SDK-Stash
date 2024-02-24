#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RadioButton.WBP_RadioButton_C
// (None)

class UClass* UWBP_RadioButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RadioButton_C");

	return Clss;
}


// WBP_RadioButton_C WBP_RadioButton.Default__WBP_RadioButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RadioButton_C* UWBP_RadioButton_C::GetDefaultObj()
{
	static class UWBP_RadioButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RadioButton_C*>(UWBP_RadioButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RadioButton.WBP_RadioButton_C.SetButtonToggleEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsToggled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RadioButton_C::SetButtonToggleEnabled(bool IsToggled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadioButton_C", "SetButtonToggleEnabled");

	Params::UWBP_RadioButton_C_SetButtonToggleEnabled_Params Parms{};

	Parms.IsToggled = IsToggled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RadioButton.WBP_RadioButton_C.BndEvt__WBP_RadioButton_RadioButton_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RadioButton_C::BndEvt__WBP_RadioButton_RadioButton_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadioButton_C", "BndEvt__WBP_RadioButton_RadioButton_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UWBP_RadioButton_C_BndEvt__WBP_RadioButton_RadioButton_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RadioButton.WBP_RadioButton_C.ExecuteUbergraph_WBP_RadioButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RadioButton_C::ExecuteUbergraph_WBP_RadioButton(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadioButton_C", "ExecuteUbergraph_WBP_RadioButton");

	Params::UWBP_RadioButton_C_ExecuteUbergraph_WBP_RadioButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_bIsChecked = K2Node_ComponentBoundEvent_bIsChecked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RadioButton.WBP_RadioButton_C.OnButtonToggled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsToggled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_RadioButton_C*          Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_RadioButton_C::OnButtonToggled__DelegateSignature(bool IsToggled, class UWBP_RadioButton_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RadioButton_C", "OnButtonToggled__DelegateSignature");

	Params::UWBP_RadioButton_C_OnButtonToggled__DelegateSignature_Params Parms{};

	Parms.IsToggled = IsToggled;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


