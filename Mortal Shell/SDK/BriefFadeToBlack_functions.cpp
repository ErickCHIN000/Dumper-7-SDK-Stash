#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BriefFadeToBlack.BriefFadeToBlack_C
// (None)

class UClass* UBriefFadeToBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BriefFadeToBlack_C");

	return Clss;
}


// BriefFadeToBlack_C BriefFadeToBlack.Default__BriefFadeToBlack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBriefFadeToBlack_C* UBriefFadeToBlack_C::GetDefaultObj()
{
	static class UBriefFadeToBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBriefFadeToBlack_C*>(UBriefFadeToBlack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BriefFadeToBlack.BriefFadeToBlack_C.SequenceEvent__ENTRYPOINTBriefFadeToBlack_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBriefFadeToBlack_C::SequenceEvent__ENTRYPOINTBriefFadeToBlack_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefFadeToBlack_C", "SequenceEvent__ENTRYPOINTBriefFadeToBlack_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BriefFadeToBlack.BriefFadeToBlack_C.SequenceEvent__ENTRYPOINTBriefFadeToBlack_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBriefFadeToBlack_C::SequenceEvent__ENTRYPOINTBriefFadeToBlack_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefFadeToBlack_C", "SequenceEvent__ENTRYPOINTBriefFadeToBlack_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BriefFadeToBlack.BriefFadeToBlack_C.SequenceEvent_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBriefFadeToBlack_C::SequenceEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefFadeToBlack_C", "SequenceEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BriefFadeToBlack.BriefFadeToBlack_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBriefFadeToBlack_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefFadeToBlack_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BriefFadeToBlack.BriefFadeToBlack_C.FadeHalfWayEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBriefFadeToBlack_C::FadeHalfWayEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefFadeToBlack_C", "FadeHalfWayEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BriefFadeToBlack.BriefFadeToBlack_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBriefFadeToBlack_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefFadeToBlack_C", "Tick");

	Params::UBriefFadeToBlack_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BriefFadeToBlack.BriefFadeToBlack_C.ExecuteUbergraph_BriefFadeToBlack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBriefFadeToBlack_C::ExecuteUbergraph_BriefFadeToBlack(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefFadeToBlack_C", "ExecuteUbergraph_BriefFadeToBlack");

	Params::UBriefFadeToBlack_C_ExecuteUbergraph_BriefFadeToBlack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BriefFadeToBlack.BriefFadeToBlack_C.FadeHalfWay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBriefFadeToBlack_C::FadeHalfWay__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefFadeToBlack_C", "FadeHalfWay__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BriefFadeToBlack.BriefFadeToBlack_C.FadeCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBriefFadeToBlack_C::FadeCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BriefFadeToBlack_C", "FadeCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


