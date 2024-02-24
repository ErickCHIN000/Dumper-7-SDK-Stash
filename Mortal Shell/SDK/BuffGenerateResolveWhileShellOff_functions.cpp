#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BuffGenerateResolveWhileShellOff.BuffGenerateResolveWhileShellOff_C
// (None)

class UClass* UBuffGenerateResolveWhileShellOff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuffGenerateResolveWhileShellOff_C");

	return Clss;
}


// BuffGenerateResolveWhileShellOff_C BuffGenerateResolveWhileShellOff.Default__BuffGenerateResolveWhileShellOff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBuffGenerateResolveWhileShellOff_C* UBuffGenerateResolveWhileShellOff_C::GetDefaultObj()
{
	static class UBuffGenerateResolveWhileShellOff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuffGenerateResolveWhileShellOff_C*>(UBuffGenerateResolveWhileShellOff_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BuffGenerateResolveWhileShellOff.BuffGenerateResolveWhileShellOff_C.OnBuffStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffGenerateResolveWhileShellOff_C::OnBuffStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffGenerateResolveWhileShellOff_C", "OnBuffStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffGenerateResolveWhileShellOff.BuffGenerateResolveWhileShellOff_C.OnBuffEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInterrupted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffGenerateResolveWhileShellOff_C::OnBuffEnd(bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffGenerateResolveWhileShellOff_C", "OnBuffEnd");

	Params::UBuffGenerateResolveWhileShellOff_C_OnBuffEnd_Params Parms{};

	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffGenerateResolveWhileShellOff.BuffGenerateResolveWhileShellOff_C.OnShellRestored
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffGenerateResolveWhileShellOff_C::OnShellRestored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffGenerateResolveWhileShellOff_C", "OnShellRestored");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffGenerateResolveWhileShellOff.BuffGenerateResolveWhileShellOff_C.ExecuteUbergraph_BuffGenerateResolveWhileShellOff
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bInterrupted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetActorToBuffAsBarbarous_AsBarbarous                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetActorToBuffAsBarbarous_AsBarbarous_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSeconds_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffGenerateResolveWhileShellOff_C::ExecuteUbergraph_BuffGenerateResolveWhileShellOff(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bInterrupted, float CallFunc_GetTimeSeconds_ReturnValue, class ABarbarous_C* CallFunc_GetActorToBuffAsBarbarous_AsBarbarous, class ABarbarous_C* CallFunc_GetActorToBuffAsBarbarous_AsBarbarous_1, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffGenerateResolveWhileShellOff_C", "ExecuteUbergraph_BuffGenerateResolveWhileShellOff");

	Params::UBuffGenerateResolveWhileShellOff_C_ExecuteUbergraph_BuffGenerateResolveWhileShellOff_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_bInterrupted = K2Node_Event_bInterrupted;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_GetActorToBuffAsBarbarous_AsBarbarous = CallFunc_GetActorToBuffAsBarbarous_AsBarbarous;
	Parms.CallFunc_GetActorToBuffAsBarbarous_AsBarbarous_1 = CallFunc_GetActorToBuffAsBarbarous_AsBarbarous_1;
	Parms.CallFunc_GetTimeSeconds_ReturnValue_1 = CallFunc_GetTimeSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


