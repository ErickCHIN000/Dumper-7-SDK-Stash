#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaitAMinute.WaitAMinute_C
// (None)

class UClass* UWaitAMinute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaitAMinute_C");

	return Clss;
}


// WaitAMinute_C WaitAMinute.Default__WaitAMinute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaitAMinute_C* UWaitAMinute_C::GetDefaultObj()
{
	static class UWaitAMinute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaitAMinute_C*>(UWaitAMinute_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WaitAMinute.WaitAMinute_C.GetProgressMax
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetProgressMax_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWaitAMinute_C::GetProgressMax(int32 CallFunc_GetProgressMax_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaitAMinute_C", "GetProgressMax");

	Params::UWaitAMinute_C_GetProgressMax_Params Parms{};

	Parms.CallFunc_GetProgressMax_ReturnValue = CallFunc_GetProgressMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WaitAMinute.WaitAMinute_C.OnGivePlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWaitAMinute_C::OnGivePlayer(class ASHPlayerCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaitAMinute_C", "OnGivePlayer");

	Params::UWaitAMinute_C_OnGivePlayer_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaitAMinute.WaitAMinute_C.OnTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWaitAMinute_C::OnTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaitAMinute_C", "OnTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaitAMinute.WaitAMinute_C.ExecuteUbergraph_WaitAMinute
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHPlayerCharacter*          K2Node_Event_Player                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWaitAMinute_C::ExecuteUbergraph_WaitAMinute(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_IsClosed_Variable, class ASHPlayerCharacter* K2Node_Event_Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaitAMinute_C", "ExecuteUbergraph_WaitAMinute");

	Params::UWaitAMinute_C_ExecuteUbergraph_WaitAMinute_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_Player = K2Node_Event_Player;

	UObject::ProcessEvent(Func, &Parms);

}

}


