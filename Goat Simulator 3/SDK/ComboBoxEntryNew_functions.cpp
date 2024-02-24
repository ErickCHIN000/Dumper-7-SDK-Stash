#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ComboBoxEntryNew.ComboBoxEntryNew_C
// (None)

class UClass* UComboBoxEntryNew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComboBoxEntryNew_C");

	return Clss;
}


// ComboBoxEntryNew_C ComboBoxEntryNew.Default__ComboBoxEntryNew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UComboBoxEntryNew_C* UComboBoxEntryNew_C::GetDefaultObj()
{
	static class UComboBoxEntryNew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UComboBoxEntryNew_C*>(UComboBoxEntryNew_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ComboBoxEntryNew.ComboBoxEntryNew_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                (None)

struct FEventReply UComboBoxEntryNew_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxEntryNew_C", "OnFocusReceived");

	Params::UComboBoxEntryNew_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ComboBoxEntryNew.ComboBoxEntryNew_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UComboBoxEntryNew_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxEntryNew_C", "OnAddedToFocusPath");

	Params::UComboBoxEntryNew_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComboBoxEntryNew.ComboBoxEntryNew_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UComboBoxEntryNew_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxEntryNew_C", "OnRemovedFromFocusPath");

	Params::UComboBoxEntryNew_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComboBoxEntryNew.ComboBoxEntryNew_C.BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UComboBoxEntryNew_C::BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxEntryNew_C", "BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ComboBoxEntryNew.ComboBoxEntryNew_C.BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UComboBoxEntryNew_C::BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxEntryNew_C", "BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ComboBoxEntryNew.ComboBoxEntryNew_C.SetEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        StringEntry                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UComboBoxEntryNew_C::SetEntry(class FText StringEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxEntryNew_C", "SetEntry");

	Params::UComboBoxEntryNew_C_SetEntry_Params Parms{};

	Parms.StringEntry = StringEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComboBoxEntryNew.ComboBoxEntryNew_C.BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UComboBoxEntryNew_C::BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxEntryNew_C", "BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ComboBoxEntryNew.ComboBoxEntryNew_C.BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UComboBoxEntryNew_C::BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxEntryNew_C", "BndEvt__ListEmbeddedButton_ButtonWidget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ComboBoxEntryNew.ComboBoxEntryNew_C.SetSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UComboBoxEntryNew_C::SetSelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxEntryNew_C", "SetSelected");

	Params::UComboBoxEntryNew_C_SetSelected_Params Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComboBoxEntryNew.ComboBoxEntryNew_C.ExecuteUbergraph_ComboBoxEntryNew
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_StringEntry                                   (None)
// bool                               K2Node_CustomEvent_IsSelected                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)

void UComboBoxEntryNew_C::ExecuteUbergraph_ComboBoxEntryNew(int32 EntryPoint, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class FText K2Node_CustomEvent_StringEntry, bool K2Node_CustomEvent_IsSelected, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxEntryNew_C", "ExecuteUbergraph_ComboBoxEntryNew");

	Params::UComboBoxEntryNew_C_ExecuteUbergraph_ComboBoxEntryNew_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_CustomEvent_StringEntry = K2Node_CustomEvent_StringEntry;
	Parms.K2Node_CustomEvent_IsSelected = K2Node_CustomEvent_IsSelected;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


