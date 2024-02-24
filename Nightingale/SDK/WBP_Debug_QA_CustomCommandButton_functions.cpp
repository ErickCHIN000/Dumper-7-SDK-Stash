#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Debug_QA_CustomCommandButton.WBP_Debug_QA_CustomCommandButton_C
// (None)

class UClass* UWBP_Debug_QA_CustomCommandButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Debug_QA_CustomCommandButton_C");

	return Clss;
}


// WBP_Debug_QA_CustomCommandButton_C WBP_Debug_QA_CustomCommandButton.Default__WBP_Debug_QA_CustomCommandButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Debug_QA_CustomCommandButton_C* UWBP_Debug_QA_CustomCommandButton_C::GetDefaultObj()
{
	static class UWBP_Debug_QA_CustomCommandButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Debug_QA_CustomCommandButton_C*>(UWBP_Debug_QA_CustomCommandButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Debug_QA_CustomCommandButton.WBP_Debug_QA_CustomCommandButton_C.ExecuteCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_QA_CustomCommandButton_C::ExecuteCommand(class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandButton_C", "ExecuteCommand");

	Params::UWBP_Debug_QA_CustomCommandButton_C_ExecuteCommand_Params Parms{};

	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_QA_CustomCommandButton.WBP_Debug_QA_CustomCommandButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandButton.WBP_Debug_QA_CustomCommandButton_C.BndEvt__WBP_Debug_QA_CommandButtonJosh_button_close_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandButton_C::BndEvt__WBP_Debug_QA_CommandButtonJosh_button_close_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandButton_C", "BndEvt__WBP_Debug_QA_CommandButtonJosh_button_close_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandButton.WBP_Debug_QA_CustomCommandButton_C.BndEvt__WBP_Debug_QA_CommandButtonJosh_button_runCommand_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Debug_QA_CustomCommandButton_C::BndEvt__WBP_Debug_QA_CommandButtonJosh_button_runCommand_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandButton_C", "BndEvt__WBP_Debug_QA_CommandButtonJosh_button_runCommand_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Debug_QA_CustomCommandButton.WBP_Debug_QA_CustomCommandButton_C.ExecuteUbergraph_WBP_Debug_QA_CustomCommandButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_Debug_QA_CustomCommandButton_C::ExecuteUbergraph_WBP_Debug_QA_CustomCommandButton(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandButton_C", "ExecuteUbergraph_WBP_Debug_QA_CustomCommandButton");

	Params::UWBP_Debug_QA_CustomCommandButton_C_ExecuteUbergraph_WBP_Debug_QA_CustomCommandButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Debug_QA_CustomCommandButton.WBP_Debug_QA_CustomCommandButton_C.DebugCommandRemoved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Debug_QA_CustomCommandButton_C::DebugCommandRemoved__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Debug_QA_CustomCommandButton_C", "DebugCommandRemoved__DelegateSignature");

	Params::UWBP_Debug_QA_CustomCommandButton_C_DebugCommandRemoved__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}

}


