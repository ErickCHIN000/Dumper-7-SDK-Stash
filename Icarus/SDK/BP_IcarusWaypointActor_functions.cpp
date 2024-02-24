#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusWaypointActor.BP_IcarusWaypointActor_C
// (Actor)

class UClass* ABP_IcarusWaypointActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusWaypointActor_C");

	return Clss;
}


// BP_IcarusWaypointActor_C BP_IcarusWaypointActor.Default__BP_IcarusWaypointActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IcarusWaypointActor_C* ABP_IcarusWaypointActor_C::GetDefaultObj()
{
	static class ABP_IcarusWaypointActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IcarusWaypointActor_C*>(ABP_IcarusWaypointActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.OnRep_OwningPlayerState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusWaypointActor_C::OnRep_OwningPlayerState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusWaypointActor_C", "OnRep_OwningPlayerState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.GetOwningPlayerState
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AIcarusPlayerState*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AIcarusPlayerState* ABP_IcarusWaypointActor_C::GetOwningPlayerState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusWaypointActor_C", "GetOwningPlayerState");

	Params::ABP_IcarusWaypointActor_C_GetOwningPlayerState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.CleanUpWaypointRefs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FoundAddedWaypointsIndex                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FoundWaypointLocationIndex                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusWaypointActor_C::CleanUpWaypointRefs(int32 FoundAddedWaypointsIndex, int32 FoundWaypointLocationIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusWaypointActor_C", "CleanUpWaypointRefs");

	Params::ABP_IcarusWaypointActor_C_CleanUpWaypointRefs_Params Parms{};

	Parms.FoundAddedWaypointsIndex = FoundAddedWaypointsIndex;
	Parms.FoundWaypointLocationIndex = FoundWaypointLocationIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.ServerKillWaypoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusWaypointActor_C::ServerKillWaypoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusWaypointActor_C", "ServerKillWaypoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusWaypointActor_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusWaypointActor_C", "ReceiveEndPlay");

	Params::ABP_IcarusWaypointActor_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.InitForPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerState*          OwningPlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusWaypointActor_C::InitForPlayer(class AIcarusPlayerState* OwningPlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusWaypointActor_C", "InitForPlayer");

	Params::ABP_IcarusWaypointActor_C_InitForPlayer_Params Parms{};

	Parms.OwningPlayerState = OwningPlayerState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.SetupWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusWaypointActor_C::SetupWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusWaypointActor_C", "SetupWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.ExecuteUbergraph_BP_IcarusWaypointActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          K2Node_Event_OwningPlayerState                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusWaypointActor_C::ExecuteUbergraph_BP_IcarusWaypointActor(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AIcarusPlayerState* K2Node_Event_OwningPlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusWaypointActor_C", "ExecuteUbergraph_BP_IcarusWaypointActor");

	Params::ABP_IcarusWaypointActor_C_ExecuteUbergraph_BP_IcarusWaypointActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_Event_OwningPlayerState = K2Node_Event_OwningPlayerState;

	UObject::ProcessEvent(Func, &Parms);

}

}


