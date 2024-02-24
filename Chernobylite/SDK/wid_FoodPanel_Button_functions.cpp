#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_FoodPanel_Button.wid_FoodPanel_Button_C
// (None)

class UClass* UWid_FoodPanel_Button_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_FoodPanel_Button_C");

	return Clss;
}


// wid_FoodPanel_Button_C wid_FoodPanel_Button.Default__wid_FoodPanel_Button_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_FoodPanel_Button_C* UWid_FoodPanel_Button_C::GetDefaultObj()
{
	static class UWid_FoodPanel_Button_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_FoodPanel_Button_C*>(UWid_FoodPanel_Button_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_FoodPanel_Button.wid_FoodPanel_Button_C.UpdateDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                OldColor                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_FoodPanel_Button_C::UpdateDisabled(const struct FLinearColor& OldColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FoodPanel_Button_C", "UpdateDisabled");

	Params::UWid_FoodPanel_Button_C_UpdateDisabled_Params Parms{};

	Parms.OldColor = OldColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_FoodPanel_Button.wid_FoodPanel_Button_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_FoodPanel_Button_C::Select(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FoodPanel_Button_C", "Select");

	Params::UWid_FoodPanel_Button_C_Select_Params Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_FoodPanel_Button.wid_FoodPanel_Button_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_FoodPanel_Button_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FoodPanel_Button_C", "PreConstruct");

	Params::UWid_FoodPanel_Button_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_FoodPanel_Button.wid_FoodPanel_Button_C.BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_FoodPanel_Button_C::BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FoodPanel_Button_C", "BndEvt__Button_54_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_FoodPanel_Button.wid_FoodPanel_Button_C.BndEvt__Button_54_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_FoodPanel_Button_C::BndEvt__Button_54_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FoodPanel_Button_C", "BndEvt__Button_54_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_FoodPanel_Button.wid_FoodPanel_Button_C.BndEvt__Button_54_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_FoodPanel_Button_C::BndEvt__Button_54_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FoodPanel_Button_C", "BndEvt__Button_54_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_FoodPanel_Button.wid_FoodPanel_Button_C.ExecuteUbergraph_wid_FoodPanel_Button
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_FoodPanel_Button_C::ExecuteUbergraph_wid_FoodPanel_Button(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 CallFunc_GetChildIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FoodPanel_Button_C", "ExecuteUbergraph_wid_FoodPanel_Button");

	Params::UWid_FoodPanel_Button_C_ExecuteUbergraph_wid_FoodPanel_Button_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetChildIndex_ReturnValue = CallFunc_GetChildIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_FoodPanel_Button.wid_FoodPanel_Button_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_FoodPanel_Button_C::OnSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FoodPanel_Button_C", "OnSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


