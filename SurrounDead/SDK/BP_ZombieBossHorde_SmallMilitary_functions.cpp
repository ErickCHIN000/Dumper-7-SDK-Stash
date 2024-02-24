#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZombieBossHorde_SmallMilitary.BP_ZombieBossHorde_SmallMilitary_C
// (Actor, Pawn)

class UClass* ABP_ZombieBossHorde_SmallMilitary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZombieBossHorde_SmallMilitary_C");

	return Clss;
}


// BP_ZombieBossHorde_SmallMilitary_C BP_ZombieBossHorde_SmallMilitary.Default__BP_ZombieBossHorde_SmallMilitary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ZombieBossHorde_SmallMilitary_C* ABP_ZombieBossHorde_SmallMilitary_C::GetDefaultObj()
{
	static class ABP_ZombieBossHorde_SmallMilitary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ZombieBossHorde_SmallMilitary_C*>(ABP_ZombieBossHorde_SmallMilitary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ZombieBossHorde_SmallMilitary.BP_ZombieBossHorde_SmallMilitary_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ZombieBossHorde_SmallMilitary_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBossHorde_SmallMilitary_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZombieBossHorde_SmallMilitary.BP_ZombieBossHorde_SmallMilitary_C.Event_PlayerDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZombieBossHorde_SmallMilitary_C::Event_PlayerDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBossHorde_SmallMilitary_C", "Event_PlayerDead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZombieBossHorde_SmallMilitary.BP_ZombieBossHorde_SmallMilitary_C.ExecuteUbergraph_BP_ZombieBossHorde_SmallMilitary
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       CallFunc_CastToCharacter_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ZombieBossHorde_SmallMilitary_C::ExecuteUbergraph_BP_ZombieBossHorde_SmallMilitary(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZombieBossHorde_SmallMilitary_C", "ExecuteUbergraph_BP_ZombieBossHorde_SmallMilitary");

	Params::ABP_ZombieBossHorde_SmallMilitary_C_ExecuteUbergraph_BP_ZombieBossHorde_SmallMilitary_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CastToCharacter_Character = CallFunc_CastToCharacter_Character;

	UObject::ProcessEvent(Func, &Parms);

}

}


