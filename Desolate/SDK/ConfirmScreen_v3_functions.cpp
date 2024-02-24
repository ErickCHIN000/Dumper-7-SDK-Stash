#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ConfirmScreen_v3.ConfirmScreen_v3_C
// (None)

class UClass* UConfirmScreen_v3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConfirmScreen_v3_C");

	return Clss;
}


// ConfirmScreen_v3_C ConfirmScreen_v3.Default__ConfirmScreen_v3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UConfirmScreen_v3_C* UConfirmScreen_v3_C::GetDefaultObj()
{
	static class UConfirmScreen_v3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UConfirmScreen_v3_C*>(UConfirmScreen_v3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ConfirmScreen_v3.ConfirmScreen_v3_C.OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UConfirmScreen_v3_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmScreen_v3_C", "OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ConfirmScreen_v3.ConfirmScreen_v3_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UConfirmScreen_v3_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmScreen_v3_C", "OnKeyDown");

	Params::UConfirmScreen_v3_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ConfirmScreen_v3.ConfirmScreen_v3_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UConfirmScreen_v3_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmScreen_v3_C", "OnFocusReceived");

	Params::UConfirmScreen_v3_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ConfirmScreen_v3.ConfirmScreen_v3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UConfirmScreen_v3_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmScreen_v3_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ConfirmScreen_v3.ConfirmScreen_v3_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UConfirmScreen_v3_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmScreen_v3_C", "Tick");

	Params::UConfirmScreen_v3_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConfirmScreen_v3.ConfirmScreen_v3_C.OnSynchronizeProperties
// (Event, Public, BlueprintEvent)
// Parameters:

void UConfirmScreen_v3_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmScreen_v3_C", "OnSynchronizeProperties");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ConfirmScreen_v3.ConfirmScreen_v3_C.OnEnterPress_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UConfirmScreen_v3_C::OnEnterPress_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmScreen_v3_C", "OnEnterPress_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ConfirmScreen_v3.ConfirmScreen_v3_C.OnHidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UConfirmScreen_v3_C::OnHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmScreen_v3_C", "OnHidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ConfirmScreen_v3.ConfirmScreen_v3_C.ShowInstant
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UConfirmScreen_v3_C::ShowInstant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmScreen_v3_C", "ShowInstant");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ConfirmScreen_v3.ConfirmScreen_v3_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UConfirmScreen_v3_C::Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmScreen_v3_C", "Show");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ConfirmScreen_v3.ConfirmScreen_v3_C.DrawText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UConfirmScreen_v3_C::DrawText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmScreen_v3_C", "DrawText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ConfirmScreen_v3.ConfirmScreen_v3_C.ExecuteUbergraph_ConfirmScreen_v3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)

void UConfirmScreen_v3_C::ExecuteUbergraph_ConfirmScreen_v3(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmScreen_v3_C", "ExecuteUbergraph_ConfirmScreen_v3");

	Params::UConfirmScreen_v3_C_ExecuteUbergraph_ConfirmScreen_v3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


