#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StyledInputCollisionPrompt.StyledInputCollisionPrompt_C
// (None)

class UClass* UStyledInputCollisionPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StyledInputCollisionPrompt_C");

	return Clss;
}


// StyledInputCollisionPrompt_C StyledInputCollisionPrompt.Default__StyledInputCollisionPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStyledInputCollisionPrompt_C* UStyledInputCollisionPrompt_C::GetDefaultObj()
{
	static class UStyledInputCollisionPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStyledInputCollisionPrompt_C*>(UStyledInputCollisionPrompt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StyledInputCollisionPrompt.StyledInputCollisionPrompt_C.BndEvt__StyledInputCollisionPrompt_WBP_InputCollisionConfimationModal_K2Node_ComponentBoundEvent_0_ClickedKeep__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UStyledInputCollisionPrompt_C::BndEvt__StyledInputCollisionPrompt_WBP_InputCollisionConfimationModal_K2Node_ComponentBoundEvent_0_ClickedKeep__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledInputCollisionPrompt_C", "BndEvt__StyledInputCollisionPrompt_WBP_InputCollisionConfimationModal_K2Node_ComponentBoundEvent_0_ClickedKeep__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StyledInputCollisionPrompt.StyledInputCollisionPrompt_C.BndEvt__StyledInputCollisionPrompt_WBP_InputCollisionConfimationModal_K2Node_ComponentBoundEvent_1_ClickedErase__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UStyledInputCollisionPrompt_C::BndEvt__StyledInputCollisionPrompt_WBP_InputCollisionConfimationModal_K2Node_ComponentBoundEvent_1_ClickedErase__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledInputCollisionPrompt_C", "BndEvt__StyledInputCollisionPrompt_WBP_InputCollisionConfimationModal_K2Node_ComponentBoundEvent_1_ClickedErase__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StyledInputCollisionPrompt.StyledInputCollisionPrompt_C.BndEvt__StyledInputCollisionPrompt_WBP_InputCollisionConfimationModal_K2Node_ComponentBoundEvent_2_ClickedCancel__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UStyledInputCollisionPrompt_C::BndEvt__StyledInputCollisionPrompt_WBP_InputCollisionConfimationModal_K2Node_ComponentBoundEvent_2_ClickedCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledInputCollisionPrompt_C", "BndEvt__StyledInputCollisionPrompt_WBP_InputCollisionConfimationModal_K2Node_ComponentBoundEvent_2_ClickedCancel__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StyledInputCollisionPrompt.StyledInputCollisionPrompt_C.ExecuteUbergraph_StyledInputCollisionPrompt
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStyledInputCollisionPrompt_C::ExecuteUbergraph_StyledInputCollisionPrompt(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledInputCollisionPrompt_C", "ExecuteUbergraph_StyledInputCollisionPrompt");

	Params::UStyledInputCollisionPrompt_C_ExecuteUbergraph_StyledInputCollisionPrompt_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


