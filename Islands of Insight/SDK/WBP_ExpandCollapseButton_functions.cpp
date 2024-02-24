#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ExpandCollapseButton.WBP_ExpandCollapseButton_C
// (None)

class UClass* UWBP_ExpandCollapseButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ExpandCollapseButton_C");

	return Clss;
}


// WBP_ExpandCollapseButton_C WBP_ExpandCollapseButton.Default__WBP_ExpandCollapseButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ExpandCollapseButton_C* UWBP_ExpandCollapseButton_C::GetDefaultObj()
{
	static class UWBP_ExpandCollapseButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ExpandCollapseButton_C*>(UWBP_ExpandCollapseButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ExpandCollapseButton.WBP_ExpandCollapseButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ExpandCollapseButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ExpandCollapseButton_C", "PreConstruct");

	Params::UWBP_ExpandCollapseButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ExpandCollapseButton.WBP_ExpandCollapseButton_C.BndEvt__WBP_GeneralAcceptButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ExpandCollapseButton_C::BndEvt__WBP_GeneralAcceptButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ExpandCollapseButton_C", "BndEvt__WBP_GeneralAcceptButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ExpandCollapseButton.WBP_ExpandCollapseButton_C.ExecuteUbergraph_WBP_ExpandCollapseButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ExpandCollapseButton_C::ExecuteUbergraph_WBP_ExpandCollapseButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ExpandCollapseButton_C", "ExecuteUbergraph_WBP_ExpandCollapseButton");

	Params::UWBP_ExpandCollapseButton_C_ExecuteUbergraph_WBP_ExpandCollapseButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ExpandCollapseButton.WBP_ExpandCollapseButton_C.Pressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ExpandCollapseButton_C::Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ExpandCollapseButton_C", "Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


