#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C
// (None)

class UClass* UWbp_cc_sw_NavButtons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wbp_cc_sw_NavButtons_C");

	return Clss;
}


// wbp_cc_sw_NavButtons_C wbp_cc_sw_NavButtons.Default__wbp_cc_sw_NavButtons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWbp_cc_sw_NavButtons_C* UWbp_cc_sw_NavButtons_C::GetDefaultObj()
{
	static class UWbp_cc_sw_NavButtons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWbp_cc_sw_NavButtons_C*>(UWbp_cc_sw_NavButtons_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.OnInputMethodChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWbp_cc_sw_NavButtons_C::OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "OnInputMethodChanged");

	Params::UWbp_cc_sw_NavButtons_C_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = CurrentInputType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.EnableRandomize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWbp_cc_sw_NavButtons_C::EnableRandomize(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "EnableRandomize");

	Params::UWbp_cc_sw_NavButtons_C_EnableRandomize_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWbp_cc_sw_NavButtons_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "Tick");

	Params::UWbp_cc_sw_NavButtons_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.RandomizeClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWbp_cc_sw_NavButtons_C::RandomizeClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "RandomizeClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.BndEvt__wbp_cc_sw_NavButtons_BU_C_AutoRotate_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWbp_cc_sw_NavButtons_C::BndEvt__wbp_cc_sw_NavButtons_BU_C_AutoRotate_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "BndEvt__wbp_cc_sw_NavButtons_BU_C_AutoRotate_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature");

	Params::UWbp_cc_sw_NavButtons_C_BndEvt__wbp_cc_sw_NavButtons_BU_C_AutoRotate_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.BndEvt__wbp_cc_sw_NavButtons_BU_C_CycleZoom_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWbp_cc_sw_NavButtons_C::BndEvt__wbp_cc_sw_NavButtons_BU_C_CycleZoom_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "BndEvt__wbp_cc_sw_NavButtons_BU_C_CycleZoom_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature");

	Params::UWbp_cc_sw_NavButtons_C_BndEvt__wbp_cc_sw_NavButtons_BU_C_CycleZoom_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.BndEvt__wbp_cc_sw_NavButtons_BU_C_NavLeft_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWbp_cc_sw_NavButtons_C::BndEvt__wbp_cc_sw_NavButtons_BU_C_NavLeft_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "BndEvt__wbp_cc_sw_NavButtons_BU_C_NavLeft_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature");

	Params::UWbp_cc_sw_NavButtons_C_BndEvt__wbp_cc_sw_NavButtons_BU_C_NavLeft_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.BndEvt__wbp_cc_sw_NavButtons_BU_C_NavRight_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWbp_cc_sw_NavButtons_C::BndEvt__wbp_cc_sw_NavButtons_BU_C_NavRight_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "BndEvt__wbp_cc_sw_NavButtons_BU_C_NavRight_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature");

	Params::UWbp_cc_sw_NavButtons_C_BndEvt__wbp_cc_sw_NavButtons_BU_C_NavRight_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.BndEvt__wbp_cc_sw_NavButtons_BU_C_Prevoius_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWbp_cc_sw_NavButtons_C::BndEvt__wbp_cc_sw_NavButtons_BU_C_Prevoius_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "BndEvt__wbp_cc_sw_NavButtons_BU_C_Prevoius_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature");

	Params::UWbp_cc_sw_NavButtons_C_BndEvt__wbp_cc_sw_NavButtons_BU_C_Prevoius_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.BndEvt__wbp_cc_sw_NavButtons_BU_C_Next_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWbp_cc_sw_NavButtons_C::BndEvt__wbp_cc_sw_NavButtons_BU_C_Next_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "BndEvt__wbp_cc_sw_NavButtons_BU_C_Next_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature");

	Params::UWbp_cc_sw_NavButtons_C_BndEvt__wbp_cc_sw_NavButtons_BU_C_Next_K2Node_ComponentBoundEvent_13_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.BndEvt__wbp_cc_sw_NavButtons_Button_Randomize_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWbp_cc_sw_NavButtons_C::BndEvt__wbp_cc_sw_NavButtons_Button_Randomize_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "BndEvt__wbp_cc_sw_NavButtons_Button_Randomize_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.BndEvt__wbp_cc_sw_NavButtons_Button_Randomize_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWbp_cc_sw_NavButtons_C::BndEvt__wbp_cc_sw_NavButtons_Button_Randomize_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "BndEvt__wbp_cc_sw_NavButtons_Button_Randomize_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.ExecuteUbergraph_wbp_cc_sw_NavButtons
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWbp_cc_sw_NavButtons_C::ExecuteUbergraph_wbp_cc_sw_NavButtons(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_4, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "ExecuteUbergraph_wbp_cc_sw_NavButtons");

	Params::UWbp_cc_sw_NavButtons_C_ExecuteUbergraph_wbp_cc_sw_NavButtons_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.RandomizeClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWbp_cc_sw_NavButtons_C::RandomizeClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "RandomizeClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.Zoom_Cycle__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWbp_cc_sw_NavButtons_C::Zoom_Cycle__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "Zoom_Cycle__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.AutoRotate_Toggle__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWbp_cc_sw_NavButtons_C::AutoRotate_Toggle__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "AutoRotate_Toggle__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.PreviousEntry__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWbp_cc_sw_NavButtons_C::PreviousEntry__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "PreviousEntry__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.Stage_Reverse__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWbp_cc_sw_NavButtons_C::Stage_Reverse__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "Stage_Reverse__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.Stage_Advance__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWbp_cc_sw_NavButtons_C::Stage_Advance__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "Stage_Advance__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wbp_cc_sw_NavButtons.wbp_cc_sw_NavButtons_C.NextEntry__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWbp_cc_sw_NavButtons_C::NextEntry__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wbp_cc_sw_NavButtons_C", "NextEntry__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


