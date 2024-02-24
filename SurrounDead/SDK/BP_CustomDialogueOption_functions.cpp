#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_CustomDialogueOption.BP_CustomDialogueOption_C
// (None)

class UClass* UBP_CustomDialogueOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CustomDialogueOption_C");

	return Clss;
}


// BP_CustomDialogueOption_C BP_CustomDialogueOption.Default__BP_CustomDialogueOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CustomDialogueOption_C* UBP_CustomDialogueOption_C::GetDefaultObj()
{
	static class UBP_CustomDialogueOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CustomDialogueOption_C*>(UBP_CustomDialogueOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CustomDialogueOption.BP_CustomDialogueOption_C.SetSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CustomDialogueOption_C::SetSelection(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomDialogueOption_C", "SetSelection");

	Params::UBP_CustomDialogueOption_C_SetSelection_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CustomDialogueOption.BP_CustomDialogueOption_C.BndEvt__BP_DialogueOption_ReplyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CustomDialogueOption_C::BndEvt__BP_DialogueOption_ReplyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomDialogueOption_C", "BndEvt__BP_DialogueOption_ReplyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomDialogueOption.BP_CustomDialogueOption_C.Select Reply
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CustomDialogueOption_C::Select_Reply()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomDialogueOption_C", "Select Reply");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomDialogueOption.BP_CustomDialogueOption_C.Simulate Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CustomDialogueOption_C::Simulate_Clicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomDialogueOption_C", "Simulate Clicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomDialogueOption.BP_CustomDialogueOption_C.BndEvt__BP_DialogueOption_ReplyButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CustomDialogueOption_C::BndEvt__BP_DialogueOption_ReplyButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomDialogueOption_C", "BndEvt__BP_DialogueOption_ReplyButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomDialogueOption.BP_CustomDialogueOption_C.BndEvt__BP_DialogueOption_ReplyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_CustomDialogueOption_C::BndEvt__BP_DialogueOption_ReplyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomDialogueOption_C", "BndEvt__BP_DialogueOption_ReplyButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomDialogueOption.BP_CustomDialogueOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_CustomDialogueOption_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomDialogueOption_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CustomDialogueOption.BP_CustomDialogueOption_C.ExecuteUbergraph_BP_CustomDialogueOption
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetOptionText_ReturnValue                               (None)

void UBP_CustomDialogueOption_C::ExecuteUbergraph_BP_CustomDialogueOption(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetOptionText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CustomDialogueOption_C", "ExecuteUbergraph_BP_CustomDialogueOption");

	Params::UBP_CustomDialogueOption_C_ExecuteUbergraph_BP_CustomDialogueOption_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOptionText_ReturnValue = CallFunc_GetOptionText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


