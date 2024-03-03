#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Neutral_Widget.Neutral_Widget_C
// (None)

class UClass* UNeutral_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Neutral_Widget_C");

	return Clss;
}


// Neutral_Widget_C Neutral_Widget.Default__Neutral_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNeutral_Widget_C* UNeutral_Widget_C::GetDefaultObj()
{
	static class UNeutral_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNeutral_Widget_C*>(UNeutral_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Neutral_Widget.Neutral_Widget_C.BndEvt__Button_537_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UNeutral_Widget_C::BndEvt__Button_537_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Neutral_Widget_C", "BndEvt__Button_537_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Neutral_Widget.Neutral_Widget_C.BndEvt__Neutral_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UNeutral_Widget_C::BndEvt__Neutral_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Neutral_Widget_C", "BndEvt__Neutral_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Neutral_Widget.Neutral_Widget_C.BndEvt__Button_803_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UNeutral_Widget_C::BndEvt__Button_803_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Neutral_Widget_C", "BndEvt__Button_803_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Neutral_Widget.Neutral_Widget_C.Unclicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNeutral_Widget_C::Unclicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Neutral_Widget_C", "Unclicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Neutral_Widget.Neutral_Widget_C.Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNeutral_Widget_C::Clicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Neutral_Widget_C", "Clicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Neutral_Widget.Neutral_Widget_C.BndEvt__Neutral_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UNeutral_Widget_C::BndEvt__Neutral_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Neutral_Widget_C", "BndEvt__Neutral_Button_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Neutral_Widget.Neutral_Widget_C.ExecuteUbergraph_Neutral_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNeutral_Widget_C::ExecuteUbergraph_Neutral_Widget(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Neutral_Widget_C", "ExecuteUbergraph_Neutral_Widget");

	Params::UNeutral_Widget_C_ExecuteUbergraph_Neutral_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


