#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NPC_NeutralIntendant.NPC_NeutralIntendant_C
// (Actor, Pawn)

class UClass* ANPC_NeutralIntendant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NPC_NeutralIntendant_C");

	return Clss;
}


// NPC_NeutralIntendant_C NPC_NeutralIntendant.Default__NPC_NeutralIntendant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANPC_NeutralIntendant_C* ANPC_NeutralIntendant_C::GetDefaultObj()
{
	static class ANPC_NeutralIntendant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANPC_NeutralIntendant_C*>(ANPC_NeutralIntendant_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NPC_NeutralIntendant.NPC_NeutralIntendant_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_NeutralIntendant_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_NeutralIntendant_C", "ReceiveEndPlay");

	Params::ANPC_NeutralIntendant_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_NeutralIntendant.NPC_NeutralIntendant_C.ExecuteUbergraph_NPC_NeutralIntendant
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_NeutralIntendant_C::ExecuteUbergraph_NPC_NeutralIntendant(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NPC_NeutralIntendant_C", "ExecuteUbergraph_NPC_NeutralIntendant");

	Params::ANPC_NeutralIntendant_C_ExecuteUbergraph_NPC_NeutralIntendant_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


