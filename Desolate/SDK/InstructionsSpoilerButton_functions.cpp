#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InstructionsSpoilerButton.InstructionsSpoilerButton_C
// (None)

class UClass* UInstructionsSpoilerButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InstructionsSpoilerButton_C");

	return Clss;
}


// InstructionsSpoilerButton_C InstructionsSpoilerButton.Default__InstructionsSpoilerButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInstructionsSpoilerButton_C* UInstructionsSpoilerButton_C::GetDefaultObj()
{
	static class UInstructionsSpoilerButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInstructionsSpoilerButton_C*>(UInstructionsSpoilerButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InstructionsSpoilerButton.InstructionsSpoilerButton_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UInstructionsSpoilerButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionsSpoilerButton_C", "OnFocusReceived");

	Params::UInstructionsSpoilerButton_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function InstructionsSpoilerButton.InstructionsSpoilerButton_C.Get_SelectionBorder_BrushColor_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UInstructionsSpoilerButton_C::Get_SelectionBorder_BrushColor_0(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionsSpoilerButton_C", "Get_SelectionBorder_BrushColor_0");

	Params::UInstructionsSpoilerButton_C_Get_SelectionBorder_BrushColor_0_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function InstructionsSpoilerButton.InstructionsSpoilerButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInstructionsSpoilerButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionsSpoilerButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InstructionsSpoilerButton.InstructionsSpoilerButton_C.BndEvt__SHButton_0_K2Node_ComponentBoundEvent_56_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UInstructionsSpoilerButton_C::BndEvt__SHButton_0_K2Node_ComponentBoundEvent_56_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionsSpoilerButton_C", "BndEvt__SHButton_0_K2Node_ComponentBoundEvent_56_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InstructionsSpoilerButton.InstructionsSpoilerButton_C.ExecuteUbergraph_InstructionsSpoilerButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInstructionsSpoilerButton_C::ExecuteUbergraph_InstructionsSpoilerButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionsSpoilerButton_C", "ExecuteUbergraph_InstructionsSpoilerButton");

	Params::UInstructionsSpoilerButton_C_ExecuteUbergraph_InstructionsSpoilerButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


