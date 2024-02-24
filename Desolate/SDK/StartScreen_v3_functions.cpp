#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StartScreen_v3.StartScreen_v3_C
// (None)

class UClass* UStartScreen_v3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StartScreen_v3_C");

	return Clss;
}


// StartScreen_v3_C StartScreen_v3.Default__StartScreen_v3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStartScreen_v3_C* UStartScreen_v3_C::GetDefaultObj()
{
	static class UStartScreen_v3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStartScreen_v3_C*>(UStartScreen_v3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StartScreen_v3.StartScreen_v3_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UStartScreen_v3_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartScreen_v3_C", "OnKeyDown");

	Params::UStartScreen_v3_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StartScreen_v3.StartScreen_v3_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UStartScreen_v3_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartScreen_v3_C", "OnMouseButtonDown");

	Params::UStartScreen_v3_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StartScreen_v3.StartScreen_v3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UStartScreen_v3_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartScreen_v3_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartScreen_v3.StartScreen_v3_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStartScreen_v3_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartScreen_v3_C", "Tick");

	Params::UStartScreen_v3_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StartScreen_v3.StartScreen_v3_C.StartLogos
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStartScreen_v3_C::StartLogos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartScreen_v3_C", "StartLogos");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartScreen_v3.StartScreen_v3_C.DrawText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStartScreen_v3_C::DrawText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartScreen_v3_C", "DrawText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartScreen_v3.StartScreen_v3_C.OnSynchronizeProperties
// (Event, Public, BlueprintEvent)
// Parameters:

void UStartScreen_v3_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartScreen_v3_C", "OnSynchronizeProperties");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartScreen_v3.StartScreen_v3_C.StartShowDisclamer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStartScreen_v3_C::StartShowDisclamer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartScreen_v3_C", "StartShowDisclamer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartScreen_v3.StartScreen_v3_C.WidgetAnimationEvt_UnrealLogo_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UStartScreen_v3_C::WidgetAnimationEvt_UnrealLogo_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartScreen_v3_C", "WidgetAnimationEvt_UnrealLogo_K2Node_WidgetAnimationEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartScreen_v3.StartScreen_v3_C.WidgetAnimationEvt_HTLogo_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)
// Parameters:

void UStartScreen_v3_C::WidgetAnimationEvt_HTLogo_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartScreen_v3_C", "WidgetAnimationEvt_HTLogo_K2Node_WidgetAnimationEvent_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartScreen_v3.StartScreen_v3_C.WidgetAnimationEvt_DisclamerAppear_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)
// Parameters:

void UStartScreen_v3_C::WidgetAnimationEvt_DisclamerAppear_K2Node_WidgetAnimationEvent_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartScreen_v3_C", "WidgetAnimationEvt_DisclamerAppear_K2Node_WidgetAnimationEvent_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartScreen_v3.StartScreen_v3_C.WidgetAnimationEvt_DisclamerHide_K2Node_WidgetAnimationEvent_3
// (BlueprintEvent)
// Parameters:

void UStartScreen_v3_C::WidgetAnimationEvt_DisclamerHide_K2Node_WidgetAnimationEvent_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartScreen_v3_C", "WidgetAnimationEvt_DisclamerHide_K2Node_WidgetAnimationEvent_3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartScreen_v3.StartScreen_v3_C.WidgetAnimationEvt_NLogo_K2Node_WidgetAnimationEvent_4
// (BlueprintEvent)
// Parameters:

void UStartScreen_v3_C::WidgetAnimationEvt_NLogo_K2Node_WidgetAnimationEvent_4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartScreen_v3_C", "WidgetAnimationEvt_NLogo_K2Node_WidgetAnimationEvent_4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartScreen_v3.StartScreen_v3_C.ExecuteUbergraph_StartScreen_v3
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_2                               (None)

void UStartScreen_v3_C::ExecuteUbergraph_StartScreen_v3(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool Temp_bool_IsClosed_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_TextToUpper_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartScreen_v3_C", "ExecuteUbergraph_StartScreen_v3");

	Params::UStartScreen_v3_C_ExecuteUbergraph_StartScreen_v3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_TextToUpper_ReturnValue_2 = CallFunc_TextToUpper_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StartScreen_v3.StartScreen_v3_C.OnStartScreenShown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStartScreen_v3_C::OnStartScreenShown__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartScreen_v3_C", "OnStartScreenShown__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartScreen_v3.StartScreen_v3_C.OnStartScreenPlayComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStartScreen_v3_C::OnStartScreenPlayComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartScreen_v3_C", "OnStartScreenPlayComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


