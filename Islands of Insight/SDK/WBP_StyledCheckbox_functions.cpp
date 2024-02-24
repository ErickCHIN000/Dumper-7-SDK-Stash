#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_StyledCheckbox.WBP_StyledCheckbox_C
// (None)

class UClass* UWBP_StyledCheckbox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_StyledCheckbox_C");

	return Clss;
}


// WBP_StyledCheckbox_C WBP_StyledCheckbox.Default__WBP_StyledCheckbox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_StyledCheckbox_C* UWBP_StyledCheckbox_C::GetDefaultObj()
{
	static class UWBP_StyledCheckbox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_StyledCheckbox_C*>(UWBP_StyledCheckbox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_StyledCheckbox.WBP_StyledCheckbox_C.IsChecked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsChecked                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StyledCheckbox_C::IsChecked(bool* IsChecked, bool CallFunc_IsChecked_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StyledCheckbox_C", "IsChecked");

	Params::UWBP_StyledCheckbox_C_IsChecked_Params Parms{};

	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsChecked != nullptr)
		*IsChecked = Parms.IsChecked;

}


// Function WBP_StyledCheckbox.WBP_StyledCheckbox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StyledCheckbox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StyledCheckbox_C", "PreConstruct");

	Params::UWBP_StyledCheckbox_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StyledCheckbox.WBP_StyledCheckbox_C.BndEvt__WBP_StyledCheckbox_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_StyledCheckbox_C::BndEvt__WBP_StyledCheckbox_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StyledCheckbox_C", "BndEvt__WBP_StyledCheckbox_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StyledCheckbox.WBP_StyledCheckbox_C.ExecuteUbergraph_WBP_StyledCheckbox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_StyledCheckbox_C::ExecuteUbergraph_WBP_StyledCheckbox(int32 EntryPoint, bool CallFunc_IsChecked_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StyledCheckbox_C", "ExecuteUbergraph_WBP_StyledCheckbox");

	Params::UWBP_StyledCheckbox_C_ExecuteUbergraph_WBP_StyledCheckbox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


