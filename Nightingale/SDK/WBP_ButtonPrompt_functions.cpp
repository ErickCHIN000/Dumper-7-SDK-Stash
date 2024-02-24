#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ButtonPrompt.WBP_ButtonPrompt_C
// (None)

class UClass* UWBP_ButtonPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ButtonPrompt_C");

	return Clss;
}


// WBP_ButtonPrompt_C WBP_ButtonPrompt.Default__WBP_ButtonPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ButtonPrompt_C* UWBP_ButtonPrompt_C::GetDefaultObj()
{
	static class UWBP_ButtonPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ButtonPrompt_C*>(UWBP_ButtonPrompt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ButtonPrompt.WBP_ButtonPrompt_C.ChangeInputConcept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_GenericInputButton    InputButton                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ButtonPrompt_C::ChangeInputConcept(enum class E_GenericInputButton InputButton, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonPrompt_C", "ChangeInputConcept");

	Params::UWBP_ButtonPrompt_C_ChangeInputConcept_Params Parms{};

	Parms.InputButton = InputButton;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ButtonPrompt.WBP_ButtonPrompt_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ButtonPrompt_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonPrompt_C", "PreConstruct");

	Params::UWBP_ButtonPrompt_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ButtonPrompt.WBP_ButtonPrompt_C.OnUsingGamepadChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ButtonPrompt_C::OnUsingGamepadChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonPrompt_C", "OnUsingGamepadChanged");

	Params::UWBP_ButtonPrompt_C_OnUsingGamepadChanged_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ButtonPrompt.WBP_ButtonPrompt_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ButtonPrompt_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonPrompt_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonPrompt.WBP_ButtonPrompt_C.ExecuteUbergraph_WBP_ButtonPrompt
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ButtonPrompt_C::ExecuteUbergraph_WBP_ButtonPrompt(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bUsingGamepad, bool CallFunc_IsUsingGamepad_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonPrompt_C", "ExecuteUbergraph_WBP_ButtonPrompt");

	Params::UWBP_ButtonPrompt_C_ExecuteUbergraph_WBP_ButtonPrompt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


