#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_TrainingPrompt.wid_TrainingPrompt_C
// (None)

class UClass* UWid_TrainingPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_TrainingPrompt_C");

	return Clss;
}


// wid_TrainingPrompt_C wid_TrainingPrompt.Default__wid_TrainingPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_TrainingPrompt_C* UWid_TrainingPrompt_C::GetDefaultObj()
{
	static class UWid_TrainingPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_TrainingPrompt_C*>(UWid_TrainingPrompt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_TrainingPrompt.wid_TrainingPrompt_C.PlaySelectionSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_TrainingPrompt_C::PlaySelectionSound(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TrainingPrompt_C", "PlaySelectionSound");

	Params::UWid_TrainingPrompt_C_PlaySelectionSound_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_TrainingPrompt.wid_TrainingPrompt_C.UpdateEnabledColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)

void UWid_TrainingPrompt_C::UpdateEnabledColor(const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TrainingPrompt_C", "UpdateEnabledColor");

	Params::UWid_TrainingPrompt_C_UpdateEnabledColor_Params Parms{};

	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_TrainingPrompt.wid_TrainingPrompt_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_TrainingPrompt_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TrainingPrompt_C", "PreConstruct");

	Params::UWid_TrainingPrompt_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_TrainingPrompt.wid_TrainingPrompt_C.BndEvt__SelectionButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_TrainingPrompt_C::BndEvt__SelectionButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TrainingPrompt_C", "BndEvt__SelectionButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_TrainingPrompt.wid_TrainingPrompt_C.ShowHighlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AllowSoundEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_TrainingPrompt_C::ShowHighlight(bool Show, bool AllowSoundEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TrainingPrompt_C", "ShowHighlight");

	Params::UWid_TrainingPrompt_C_ShowHighlight_Params Parms{};

	Parms.Show = Show;
	Parms.AllowSoundEvent = AllowSoundEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_TrainingPrompt.wid_TrainingPrompt_C.BndEvt__SelectionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_TrainingPrompt_C::BndEvt__SelectionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TrainingPrompt_C", "BndEvt__SelectionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_TrainingPrompt.wid_TrainingPrompt_C.BndEvt__SelectionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_TrainingPrompt_C::BndEvt__SelectionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TrainingPrompt_C", "BndEvt__SelectionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_TrainingPrompt.wid_TrainingPrompt_C.ExecuteUbergraph_wid_TrainingPrompt
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Show                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_AllowSoundEvent                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_TrainingPrompt_C::ExecuteUbergraph_wid_TrainingPrompt(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_CustomEvent_Show, bool K2Node_CustomEvent_AllowSoundEvent, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TrainingPrompt_C", "ExecuteUbergraph_wid_TrainingPrompt");

	Params::UWid_TrainingPrompt_C_ExecuteUbergraph_wid_TrainingPrompt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_Show = K2Node_CustomEvent_Show;
	Parms.K2Node_CustomEvent_AllowSoundEvent = K2Node_CustomEvent_AllowSoundEvent;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_TrainingPrompt.wid_TrainingPrompt_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_TrainingPrompt_C::Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TrainingPrompt_C", "Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_TrainingPrompt.wid_TrainingPrompt_C.FinishedAnimationReverse__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_TrainingPrompt_C::FinishedAnimationReverse__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TrainingPrompt_C", "FinishedAnimationReverse__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_TrainingPrompt.wid_TrainingPrompt_C.FinishedAnimationForward__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_TrainingPrompt_C::FinishedAnimationForward__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_TrainingPrompt_C", "FinishedAnimationForward__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


