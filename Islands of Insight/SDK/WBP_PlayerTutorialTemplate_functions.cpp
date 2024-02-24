#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerTutorialTemplate.WBP_PlayerTutorialTemplate_C
// (None)

class UClass* UWBP_PlayerTutorialTemplate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerTutorialTemplate_C");

	return Clss;
}


// WBP_PlayerTutorialTemplate_C WBP_PlayerTutorialTemplate.Default__WBP_PlayerTutorialTemplate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerTutorialTemplate_C* UWBP_PlayerTutorialTemplate_C::GetDefaultObj()
{
	static class UWBP_PlayerTutorialTemplate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerTutorialTemplate_C*>(UWBP_PlayerTutorialTemplate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerTutorialTemplate.WBP_PlayerTutorialTemplate_C.TextPaddingAndFormatting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URichTextBlock*              InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PlayerTutorialTemplate_C::TextPaddingAndFormatting(class URichTextBlock* InputPin, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerTutorialTemplate_C", "TextPaddingAndFormatting");

	Params::UWBP_PlayerTutorialTemplate_C_TextPaddingAndFormatting_Params Parms{};

	Parms.InputPin = InputPin;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue = CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerTutorialTemplate.WBP_PlayerTutorialTemplate_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_PlayerTutorialTemplate_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerTutorialTemplate_C", "PreConstruct");

	Params::UWBP_PlayerTutorialTemplate_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerTutorialTemplate.WBP_PlayerTutorialTemplate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerTutorialTemplate_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerTutorialTemplate_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerTutorialTemplate.WBP_PlayerTutorialTemplate_C.ExecuteUbergraph_WBP_PlayerTutorialTemplate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerTutorialTemplate_C::ExecuteUbergraph_WBP_PlayerTutorialTemplate(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerTutorialTemplate_C", "ExecuteUbergraph_WBP_PlayerTutorialTemplate");

	Params::UWBP_PlayerTutorialTemplate_C_ExecuteUbergraph_WBP_PlayerTutorialTemplate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerTutorialTemplate.WBP_PlayerTutorialTemplate_C.OnNext__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerTutorialTemplate_C::OnNext__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerTutorialTemplate_C", "OnNext__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


