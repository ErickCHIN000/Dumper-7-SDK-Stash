#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BuffAttackBonusUntilNextHit.BuffAttackBonusUntilNextHit_C
// (None)

class UClass* UBuffAttackBonusUntilNextHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuffAttackBonusUntilNextHit_C");

	return Clss;
}


// BuffAttackBonusUntilNextHit_C BuffAttackBonusUntilNextHit.Default__BuffAttackBonusUntilNextHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBuffAttackBonusUntilNextHit_C* UBuffAttackBonusUntilNextHit_C::GetDefaultObj()
{
	static class UBuffAttackBonusUntilNextHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuffAttackBonusUntilNextHit_C*>(UBuffAttackBonusUntilNextHit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BuffAttackBonusUntilNextHit.BuffAttackBonusUntilNextHit_C.OnBuffStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffAttackBonusUntilNextHit_C::OnBuffStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffAttackBonusUntilNextHit_C", "OnBuffStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffAttackBonusUntilNextHit.BuffAttackBonusUntilNextHit_C.OnBuffEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInterrupted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffAttackBonusUntilNextHit_C::OnBuffEnd(bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffAttackBonusUntilNextHit_C", "OnBuffEnd");

	Params::UBuffAttackBonusUntilNextHit_C_OnBuffEnd_Params Parms{};

	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffAttackBonusUntilNextHit.BuffAttackBonusUntilNextHit_C.OnBuffedActorHitsTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffAttackBonusUntilNextHit_C::OnBuffedActorHitsTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffAttackBonusUntilNextHit_C", "OnBuffedActorHitsTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffAttackBonusUntilNextHit.BuffAttackBonusUntilNextHit_C.ExecuteUbergraph_BuffAttackBonusUntilNextHit
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bInterrupted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffAttackBonusUntilNextHit_C::ExecuteUbergraph_BuffAttackBonusUntilNextHit(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bInterrupted, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffAttackBonusUntilNextHit_C", "ExecuteUbergraph_BuffAttackBonusUntilNextHit");

	Params::UBuffAttackBonusUntilNextHit_C_ExecuteUbergraph_BuffAttackBonusUntilNextHit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_bInterrupted = K2Node_Event_bInterrupted;
	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC_1 = CallFunc_GetGameplayPCFromActor_Gameplay_PC_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


