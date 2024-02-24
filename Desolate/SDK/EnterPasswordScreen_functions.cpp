#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EnterPasswordScreen.EnterPasswordScreen_C
// (None)

class UClass* UEnterPasswordScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnterPasswordScreen_C");

	return Clss;
}


// EnterPasswordScreen_C EnterPasswordScreen.Default__EnterPasswordScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnterPasswordScreen_C* UEnterPasswordScreen_C::GetDefaultObj()
{
	static class UEnterPasswordScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnterPasswordScreen_C*>(UEnterPasswordScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnterPasswordScreen.EnterPasswordScreen_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UEnterPasswordScreen_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnterPasswordScreen_C", "OnKeyUp");

	Params::UEnterPasswordScreen_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EnterPasswordScreen.EnterPasswordScreen_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UEnterPasswordScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnterPasswordScreen_C", "OnKeyDown");

	Params::UEnterPasswordScreen_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EnterPasswordScreen.EnterPasswordScreen_C.GetText_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UEnterPasswordScreen_C::GetText_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnterPasswordScreen_C", "GetText_0");

	Params::UEnterPasswordScreen_C_GetText_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EnterPasswordScreen.EnterPasswordScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UEnterPasswordScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnterPasswordScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnterPasswordScreen.EnterPasswordScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnterPasswordScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnterPasswordScreen_C", "Tick");

	Params::UEnterPasswordScreen_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnterPasswordScreen.EnterPasswordScreen_C.CloseWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEnterPasswordScreen_C::CloseWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnterPasswordScreen_C", "CloseWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnterPasswordScreen.EnterPasswordScreen_C.OnBecameInvisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEnterPasswordScreen_C::OnBecameInvisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnterPasswordScreen_C", "OnBecameInvisible");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnterPasswordScreen.EnterPasswordScreen_C.OnShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEnterPasswordScreen_C::OnShow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnterPasswordScreen_C", "OnShow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnterPasswordScreen.EnterPasswordScreen_C.OnSynchronizeProperties
// (Event, Public, BlueprintEvent)
// Parameters:

void UEnterPasswordScreen_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnterPasswordScreen_C", "OnSynchronizeProperties");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnterPasswordScreen.EnterPasswordScreen_C.BndEvt__PassInput_K2Node_ComponentBoundEvent_109_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnterPasswordScreen_C::BndEvt__PassInput_K2Node_ComponentBoundEvent_109_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnterPasswordScreen_C", "BndEvt__PassInput_K2Node_ComponentBoundEvent_109_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UEnterPasswordScreen_C_BndEvt__PassInput_K2Node_ComponentBoundEvent_109_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnterPasswordScreen.EnterPasswordScreen_C.DrawText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEnterPasswordScreen_C::DrawText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnterPasswordScreen_C", "DrawText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnterPasswordScreen.EnterPasswordScreen_C.ExecuteUbergraph_EnterPasswordScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)

void UEnterPasswordScreen_C::ExecuteUbergraph_EnterPasswordScreen(int32 EntryPoint, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnterPasswordScreen_C", "ExecuteUbergraph_EnterPasswordScreen");

	Params::UEnterPasswordScreen_C_ExecuteUbergraph_EnterPasswordScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnterPasswordScreen.EnterPasswordScreen_C.OnExit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEnterPasswordScreen_C::OnExit__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnterPasswordScreen_C", "OnExit__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


