#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SimpleStyledButton.WBP_SimpleStyledButton_C
// (None)

class UClass* UWBP_SimpleStyledButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SimpleStyledButton_C");

	return Clss;
}


// WBP_SimpleStyledButton_C WBP_SimpleStyledButton.Default__WBP_SimpleStyledButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SimpleStyledButton_C* UWBP_SimpleStyledButton_C::GetDefaultObj()
{
	static class UWBP_SimpleStyledButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SimpleStyledButton_C*>(UWBP_SimpleStyledButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SimpleStyledButton.WBP_SimpleStyledButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SimpleStyledButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleStyledButton_C", "PreConstruct");

	Params::UWBP_SimpleStyledButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SimpleStyledButton.WBP_SimpleStyledButton_C.BndEvt__WBP_SimpleStyledButton_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SimpleStyledButton_C::BndEvt__WBP_SimpleStyledButton_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleStyledButton_C", "BndEvt__WBP_SimpleStyledButton_Button_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SimpleStyledButton.WBP_SimpleStyledButton_C.ExecuteUbergraph_WBP_SimpleStyledButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SimpleStyledButton_C::ExecuteUbergraph_WBP_SimpleStyledButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleStyledButton_C", "ExecuteUbergraph_WBP_SimpleStyledButton");

	Params::UWBP_SimpleStyledButton_C_ExecuteUbergraph_WBP_SimpleStyledButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SimpleStyledButton.WBP_SimpleStyledButton_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SimpleStyledButton_C::OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SimpleStyledButton_C", "OnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


