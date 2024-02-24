#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_Scientist.NPC_Scientist_C
// (Actor, Pawn)

class UClass* ANPC_Scientist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_Scientist_C");

	return Clss;
}


// NPC_Scientist_C NPC_Scientist.Default__NPC_Scientist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANPC_Scientist_C* ANPC_Scientist_C::GetDefaultObj()
{
	static class ANPC_Scientist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANPC_Scientist_C*>(ANPC_Scientist_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NPC_Scientist.NPC_Scientist_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Scientist_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Scientist_C", "ReceiveEndPlay");

	Params::ANPC_Scientist_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Scientist.NPC_Scientist_C.ExecuteUbergraph_NPC_Scientist
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Scientist_C::ExecuteUbergraph_NPC_Scientist(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_Scientist_C", "ExecuteUbergraph_NPC_Scientist");

	Params::ANPC_Scientist_C_ExecuteUbergraph_NPC_Scientist_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


