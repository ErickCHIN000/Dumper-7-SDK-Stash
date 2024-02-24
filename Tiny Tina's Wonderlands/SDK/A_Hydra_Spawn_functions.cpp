#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass A_Hydra_Spawn.A_Hydra_Spawn_C
// (None)

class UClass* UA_Hydra_Spawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("A_Hydra_Spawn_C");

	return Clss;
}


// A_Hydra_Spawn_C A_Hydra_Spawn.Default__A_Hydra_Spawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UA_Hydra_Spawn_C* UA_Hydra_Spawn_C::GetDefaultObj()
{
	static class UA_Hydra_Spawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UA_Hydra_Spawn_C*>(UA_Hydra_Spawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function A_Hydra_Spawn.A_Hydra_Spawn_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UA_Hydra_Spawn_C::OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_Hydra_Spawn_C", "OnServerEnd");

	Params::UA_Hydra_Spawn_C_OnServerEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function A_Hydra_Spawn.A_Hydra_Spawn_C.AN_SetBlackboardSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UA_Hydra_Spawn_C::AN_SetBlackboardSpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_Hydra_Spawn_C", "AN_SetBlackboardSpawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function A_Hydra_Spawn.A_Hydra_Spawn_C.ExecuteUbergraph_A_Hydra_Spawn
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetAssociatedController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_SpellActor_Hydra_C>K2Node_DynamicCast_AsBPI_Spell_Actor_Hydra                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UA_Hydra_Spawn_C::ExecuteUbergraph_A_Hydra_Spawn(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, class AController* CallFunc_GetAssociatedController_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, TScriptInterface<class IBPI_SpellActor_Hydra_C> K2Node_DynamicCast_AsBPI_Spell_Actor_Hydra, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("A_Hydra_Spawn_C", "ExecuteUbergraph_A_Hydra_Spawn");

	Params::UA_Hydra_Spawn_C_ExecuteUbergraph_A_Hydra_Spawn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.CallFunc_GetAssociatedController_ReturnValue = CallFunc_GetAssociatedController_ReturnValue;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_DynamicCast_AsBPI_Spell_Actor_Hydra = K2Node_DynamicCast_AsBPI_Spell_Actor_Hydra;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


