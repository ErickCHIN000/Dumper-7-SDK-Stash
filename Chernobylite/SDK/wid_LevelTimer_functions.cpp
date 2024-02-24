#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_LevelTimer.wid_LevelTimer_C
// (None)

class UClass* UWid_LevelTimer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_LevelTimer_C");

	return Clss;
}


// wid_LevelTimer_C wid_LevelTimer.Default__wid_LevelTimer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_LevelTimer_C* UWid_LevelTimer_C::GetDefaultObj()
{
	static class UWid_LevelTimer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_LevelTimer_C*>(UWid_LevelTimer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_LevelTimer.wid_LevelTimer_C.OnStart
// (Event, Public, BlueprintEvent)
// Parameters:

void UWid_LevelTimer_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelTimer_C", "OnStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelTimer.wid_LevelTimer_C.OnShowConstant
// (Event, Public, BlueprintEvent)
// Parameters:

void UWid_LevelTimer_C::OnShowConstant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelTimer_C", "OnShowConstant");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelTimer.wid_LevelTimer_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:

void UWid_LevelTimer_C::OnStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelTimer_C", "OnStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelTimer.wid_LevelTimer_C.OnShowForDuration
// (Event, Public, BlueprintEvent)
// Parameters:

void UWid_LevelTimer_C::OnShowForDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelTimer_C", "OnShowForDuration");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelTimer.wid_LevelTimer_C.OnTimerUpdate
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      InNewStringTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              NewFloatTime                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_LevelTimer_C::OnTimerUpdate(const class FString& InNewStringTime, float NewFloatTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelTimer_C", "OnTimerUpdate");

	Params::UWid_LevelTimer_C_OnTimerUpdate_Params Parms{};

	Parms.InNewStringTime = InNewStringTime;
	Parms.NewFloatTime = NewFloatTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LevelTimer.wid_LevelTimer_C.15MinutesLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LevelTimer_C::One5MinutesLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelTimer_C", "15MinutesLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelTimer.wid_LevelTimer_C.10MinutesLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LevelTimer_C::One0MinutesLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelTimer_C", "10MinutesLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelTimer.wid_LevelTimer_C.5MinutesLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LevelTimer_C::FiveMinutesLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelTimer_C", "5MinutesLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelTimer.wid_LevelTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_LevelTimer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelTimer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelTimer.wid_LevelTimer_C.Started
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LevelTimer_C::Started()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelTimer_C", "Started");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelTimer.wid_LevelTimer_C.ExecuteUbergraph_wid_LevelTimer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_InNewStringTime                                     (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_Event_NewFloatTime                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_LevelTimer_C::ExecuteUbergraph_wid_LevelTimer(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const class FString& K2Node_Event_InNewStringTime, float K2Node_Event_NewFloatTime, class FText CallFunc_Conv_StringToText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelTimer_C", "ExecuteUbergraph_wid_LevelTimer");

	Params::UWid_LevelTimer_C_ExecuteUbergraph_wid_LevelTimer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_InNewStringTime = K2Node_Event_InNewStringTime;
	Parms.K2Node_Event_NewFloatTime = K2Node_Event_NewFloatTime;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


