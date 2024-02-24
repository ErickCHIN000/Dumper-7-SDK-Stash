#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_NotificationButton.UMG_NotificationButton_C
// (None)

class UClass* UUMG_NotificationButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_NotificationButton_C");

	return Clss;
}


// UMG_NotificationButton_C UMG_NotificationButton.Default__UMG_NotificationButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_NotificationButton_C* UUMG_NotificationButton_C::GetDefaultObj()
{
	static class UUMG_NotificationButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_NotificationButton_C*>(UUMG_NotificationButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_NotificationButton.UMG_NotificationButton_C.SetStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_MailState             State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FButtonStyle                NewLocalVar_0                                                    (Edit, BlueprintVisible)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMailState                 CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_ButtonState           CallFunc_GetButtonState_State                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_NotificationButton_C::SetStyle(enum class E_MailState State, const struct FButtonStyle& NewLocalVar_0, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FFMailState& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, enum class E_ButtonState CallFunc_GetButtonState_State, const struct FSlateColor& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationButton_C", "SetStyle");

	Params::UUMG_NotificationButton_C_SetStyle_Params Parms{};

	Parms.State = State;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetButtonState_State = CallFunc_GetButtonState_State;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_NotificationButton.UMG_NotificationButton_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUMG_NotificationButton_C::Setup(class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationButton_C", "Setup");

	Params::UUMG_NotificationButton_C_Setup_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_NotificationButton.UMG_NotificationButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_NotificationButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NotificationButton.UMG_NotificationButton_C.BndEvt__Button_29_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_NotificationButton_C::BndEvt__Button_29_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationButton_C", "BndEvt__Button_29_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NotificationButton.UMG_NotificationButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_NotificationButton_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationButton_C", "BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NotificationButton.UMG_NotificationButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_NotificationButton_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationButton_C", "BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NotificationButton.UMG_NotificationButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_NotificationButton_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationButton_C", "BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NotificationButton.UMG_NotificationButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_NotificationButton_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationButton_C", "BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_NotificationButton.UMG_NotificationButton_C.ExecuteUbergraph_UMG_NotificationButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_MailState             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_MailState             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_MailState             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_NotificationButton_C::ExecuteUbergraph_UMG_NotificationButton(int32 EntryPoint, bool Temp_bool_Variable, enum class E_MailState Temp_byte_Variable, enum class E_MailState Temp_byte_Variable_1, enum class E_MailState K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationButton_C", "ExecuteUbergraph_UMG_NotificationButton");

	Params::UUMG_NotificationButton_C_ExecuteUbergraph_UMG_NotificationButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_NotificationButton.UMG_NotificationButton_C.ShowMail__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotification               Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_NotificationButton_C::ShowMail__DelegateSignature(const struct FNotification& Notification, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_NotificationButton_C", "ShowMail__DelegateSignature");

	Params::UUMG_NotificationButton_C_ShowMail__DelegateSignature_Params Parms{};

	Parms.Notification = Notification;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}

}


