#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bandit_Dodger.Bandit_Dodger_C
// (Actor, Pawn)

class UClass* ABandit_Dodger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bandit_Dodger_C");

	return Clss;
}


// Bandit_Dodger_C Bandit_Dodger.Default__Bandit_Dodger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABandit_Dodger_C* ABandit_Dodger_C::GetDefaultObj()
{
	static class ABandit_Dodger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABandit_Dodger_C*>(ABandit_Dodger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Bandit_Dodger.Bandit_Dodger_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABandit_Dodger_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bandit_Dodger_C", "ReceiveTick");

	Params::ABandit_Dodger_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Bandit_Dodger.Bandit_Dodger_C.ExecuteUbergraph_Bandit_Dodger
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABandit_Dodger_C::ExecuteUbergraph_Bandit_Dodger(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bandit_Dodger_C", "ExecuteUbergraph_Bandit_Dodger");

	Params::ABandit_Dodger_C_ExecuteUbergraph_Bandit_Dodger_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


