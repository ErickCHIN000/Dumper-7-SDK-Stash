#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NotifyDot.NotifyDot_C
// (None)

class UClass* UNotifyDot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NotifyDot_C");

	return Clss;
}


// NotifyDot_C NotifyDot.Default__NotifyDot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNotifyDot_C* UNotifyDot_C::GetDefaultObj()
{
	static class UNotifyDot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNotifyDot_C*>(UNotifyDot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NotifyDot.NotifyDot_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotifyDot_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyDot_C", "Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotifyDot.NotifyDot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyDot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyDot_C", "Tick");

	Params::UNotifyDot_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NotifyDot.NotifyDot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNotifyDot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyDot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotifyDot.NotifyDot_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotifyDot_C::Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyDot_C", "Show");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotifyDot.NotifyDot_C.ShowInstant
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotifyDot_C::ShowInstant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyDot_C", "ShowInstant");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotifyDot.NotifyDot_C.WidgetAnimationEvt_BlinkAnimation_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UNotifyDot_C::WidgetAnimationEvt_BlinkAnimation_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyDot_C", "WidgetAnimationEvt_BlinkAnimation_K2Node_WidgetAnimationEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NotifyDot.NotifyDot_C.ExecuteUbergraph_NotifyDot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotifyDot_C::ExecuteUbergraph_NotifyDot(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_PauseAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NotifyDot_C", "ExecuteUbergraph_NotifyDot");

	Params::UNotifyDot_C_ExecuteUbergraph_NotifyDot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_PauseAnimation_ReturnValue = CallFunc_PauseAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


