#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KillMob.KillMob_C
// (None)

class UClass* UKillMob_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KillMob_C");

	return Clss;
}


// KillMob_C KillMob.Default__KillMob_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKillMob_C* UKillMob_C::GetDefaultObj()
{
	static class UKillMob_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKillMob_C*>(UKillMob_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KillMob.KillMob_C.GetProgressMax
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UKillMob_C::GetProgressMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillMob_C", "GetProgressMax");

	Params::UKillMob_C_GetProgressMax_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KillMob.KillMob_C.OnRemoveFromPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKillMob_C::OnRemoveFromPlayer(class ASHPlayerCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillMob_C", "OnRemoveFromPlayer");

	Params::UKillMob_C_OnRemoveFromPlayer_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KillMob.KillMob_C.OnGivePlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKillMob_C::OnGivePlayer(class ASHPlayerCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillMob_C", "OnGivePlayer");

	Params::UKillMob_C_OnGivePlayer_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KillMob.KillMob_C.OnCharacterKilled_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHCharacter*                Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHCharacter*                Victim                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKillMob_C::OnCharacterKilled_Event_0(class ASHCharacter* Killer, class ASHCharacter* Victim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillMob_C", "OnCharacterKilled_Event_0");

	Params::UKillMob_C_OnCharacterKilled_Event_0_Params Parms{};

	Parms.Killer = Killer;
	Parms.Victim = Victim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KillMob.KillMob_C.ExecuteUbergraph_KillMob
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ASHPlayerCharacter*          K2Node_Event_Player_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Player                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHCharacter*                K2Node_CustomEvent_Killer                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHCharacter*                K2Node_CustomEvent_Victim                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UKillMob_C::ExecuteUbergraph_KillMob(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ASHPlayerCharacter* K2Node_Event_Player_1, class ASHPlayerCharacter* K2Node_Event_Player, class ASHCharacter* K2Node_CustomEvent_Killer, class ASHCharacter* K2Node_CustomEvent_Victim, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillMob_C", "ExecuteUbergraph_KillMob");

	Params::UKillMob_C_ExecuteUbergraph_KillMob_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Player_1 = K2Node_Event_Player_1;
	Parms.K2Node_Event_Player = K2Node_Event_Player;
	Parms.K2Node_CustomEvent_Killer = K2Node_CustomEvent_Killer;
	Parms.K2Node_CustomEvent_Victim = K2Node_CustomEvent_Victim;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


