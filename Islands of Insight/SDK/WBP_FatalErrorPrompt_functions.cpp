#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_FatalErrorPrompt.WBP_FatalErrorPrompt_C
// (None)

class UClass* UWBP_FatalErrorPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FatalErrorPrompt_C");

	return Clss;
}


// WBP_FatalErrorPrompt_C WBP_FatalErrorPrompt.Default__WBP_FatalErrorPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FatalErrorPrompt_C* UWBP_FatalErrorPrompt_C::GetDefaultObj()
{
	static class UWBP_FatalErrorPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FatalErrorPrompt_C*>(UWBP_FatalErrorPrompt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FatalErrorPrompt.WBP_FatalErrorPrompt_C.Set Error Message
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ErrorMessage                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_FatalErrorPrompt_C::Set_Error_Message(class FText ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FatalErrorPrompt_C", "Set Error Message");

	Params::UWBP_FatalErrorPrompt_C_Set_Error_Message_Params Parms{};

	Parms.ErrorMessage = ErrorMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FatalErrorPrompt.WBP_FatalErrorPrompt_C.BndEvt__WBP_FatalErrorPrompt_WBP_StyledButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_FatalErrorPrompt_C::BndEvt__WBP_FatalErrorPrompt_WBP_StyledButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FatalErrorPrompt_C", "BndEvt__WBP_FatalErrorPrompt_WBP_StyledButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FatalErrorPrompt.WBP_FatalErrorPrompt_C.ExecuteUbergraph_WBP_FatalErrorPrompt
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FatalErrorPrompt_C::ExecuteUbergraph_WBP_FatalErrorPrompt(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FatalErrorPrompt_C", "ExecuteUbergraph_WBP_FatalErrorPrompt");

	Params::UWBP_FatalErrorPrompt_C_ExecuteUbergraph_WBP_FatalErrorPrompt_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


