#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPQC_AnimalSwarm.BPQC_AnimalSwarm_C
// (None)

class UClass* UBPQC_AnimalSwarm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPQC_AnimalSwarm_C");

	return Clss;
}


// BPQC_AnimalSwarm_C BPQC_AnimalSwarm.Default__BPQC_AnimalSwarm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPQC_AnimalSwarm_C* UBPQC_AnimalSwarm_C::GetDefaultObj()
{
	static class UBPQC_AnimalSwarm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPQC_AnimalSwarm_C*>(UBPQC_AnimalSwarm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.SetLevelBonus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LevelBonus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPQC_AnimalSwarm_C::SetLevelBonus(int32 LevelBonus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "SetLevelBonus");

	Params::UBPQC_AnimalSwarm_C_SetLevelBonus_Params Parms{};

	Parms.LevelBonus = LevelBonus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.SetTimeBetweenSpawnsMultiplier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeBetweenSpawnsMultiplier                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPQC_AnimalSwarm_C::SetTimeBetweenSpawnsMultiplier(float TimeBetweenSpawnsMultiplier, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "SetTimeBetweenSpawnsMultiplier");

	Params::UBPQC_AnimalSwarm_C_SetTimeBetweenSpawnsMultiplier_Params Parms{};

	Parms.TimeBetweenSpawnsMultiplier = TimeBetweenSpawnsMultiplier;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.Configure Distances
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              MinPlayerDistance                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MinDistance                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxDistance                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Spacing                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPQC_AnimalSwarm_C::Configure_Distances(float MinPlayerDistance, float MinDistance, float MaxDistance, float Spacing, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "Configure Distances");

	Params::UBPQC_AnimalSwarm_C_Configure_Distances_Params Parms{};

	Parms.MinPlayerDistance = MinPlayerDistance;
	Parms.MinDistance = MinDistance;
	Parms.MaxDistance = MaxDistance;
	Parms.Spacing = Spacing;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.UpdateSpawnTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              SpawnTargets                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPQC_AnimalSwarm_C::UpdateSpawnTarget(TArray<class AActor*>& SpawnTargets, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "UpdateSpawnTarget");

	Params::UBPQC_AnimalSwarm_C_UpdateSpawnTarget_Params Parms{};

	Parms.SpawnTargets = SpawnTargets;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.Get Creature
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FAISetupRowHandle           Creature                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           CallFunc_Array_Random_OutItem                                    (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPQC_AnimalSwarm_C::Get_Creature(struct FAISetupRowHandle* Creature, const struct FAISetupRowHandle& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "Get Creature");

	Params::UBPQC_AnimalSwarm_C_Get_Creature_Params Parms{};

	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Creature != nullptr)
		*Creature = std::move(Parms.Creature);

}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.SetupMultiCreature
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeBetweenSpawns                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxCreatures                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAISetupRowHandle>   Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPQC_AnimalSwarm_C::SetupMultiCreature(float TimeBetweenSpawns, int32 MaxCreatures, TArray<struct FAISetupRowHandle>& Creature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "SetupMultiCreature");

	Params::UBPQC_AnimalSwarm_C_SetupMultiCreature_Params Parms{};

	Parms.TimeBetweenSpawns = TimeBetweenSpawns;
	Parms.MaxCreatures = MaxCreatures;
	Parms.Creature = Creature;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.SetupMultiplayerScaling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Player_Max_Number_Scaling                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              AdditionalCreaturesPerPlayer                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              HardLimit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPQC_AnimalSwarm_C::SetupMultiplayerScaling(bool Player_Max_Number_Scaling, float AdditionalCreaturesPerPlayer, int32 HardLimit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "SetupMultiplayerScaling");

	Params::UBPQC_AnimalSwarm_C_SetupMultiplayerScaling_Params Parms{};

	Parms.Player_Max_Number_Scaling = Player_Max_Number_Scaling;
	Parms.AdditionalCreaturesPerPlayer = AdditionalCreaturesPerPlayer;
	Parms.HardLimit = HardLimit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.GetMaxCreatures
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ScaledNumber                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConnectedPlayers*           CallFunc_GetConnectedPlayers_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FConnectedPlayer>    CallFunc_GetInitialisedConnectedPlayers_ReturnValue              (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPQC_AnimalSwarm_C::GetMaxCreatures(int32* ScaledNumber, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue, TArray<struct FConnectedPlayer>& CallFunc_GetInitialisedConnectedPlayers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_SelectInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "GetMaxCreatures");

	Params::UBPQC_AnimalSwarm_C_GetMaxCreatures_Params Parms{};

	Parms.CallFunc_GetConnectedPlayers_ReturnValue = CallFunc_GetConnectedPlayers_ReturnValue;
	Parms.CallFunc_GetInitialisedConnectedPlayers_ReturnValue = CallFunc_GetInitialisedConnectedPlayers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ScaledNumber != nullptr)
		*ScaledNumber = Parms.ScaledNumber;

}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.CanSpawn
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FAISetupRowHandle           CallFunc_Get_Creature_Creature                                   (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBPQC_AnimalSwarm_C::CanSpawn(const struct FAISetupRowHandle& CallFunc_Get_Creature_Creature, bool CallFunc_IsActive_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "CanSpawn");

	Params::UBPQC_AnimalSwarm_C_CanSpawn_Params Parms{};

	Parms.CallFunc_Get_Creature_Creature = CallFunc_Get_Creature_Creature;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.UpdateTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPQC_AnimalSwarm_C::UpdateTarget(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "UpdateTarget");

	Params::UBPQC_AnimalSwarm_C_UpdateTarget_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeBetweenSpawns                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxCreatures                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAISetupRowHandle           Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPQC_AnimalSwarm_C::Setup(float TimeBetweenSpawns, int32 MaxCreatures, const struct FAISetupRowHandle& Creature, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "Setup");

	Params::UBPQC_AnimalSwarm_C_Setup_Params Parms{};

	Parms.TimeBetweenSpawns = TimeBetweenSpawns;
	Parms.MaxCreatures = MaxCreatures;
	Parms.Creature = Creature;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.AngerNPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPCharacter*     NPC                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPQC_AnimalSwarm_C::AngerNPC(class AIcarusNPCGOAPCharacter* NPC, bool CallFunc_UpdateMovementState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "AngerNPC");

	Params::UBPQC_AnimalSwarm_C_AngerNPC_Params Parms{};

	Parms.NPC = NPC;
	Parms.CallFunc_UpdateMovementState_ReturnValue = CallFunc_UpdateMovementState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPQC_AnimalSwarm_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "ReceiveTick");

	Params::UBPQC_AnimalSwarm_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.EQSComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         QueryStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPQC_AnimalSwarm_C::EQSComplete(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "EQSComplete");

	Params::UBPQC_AnimalSwarm_C_EQSComplete_Params Parms{};

	Parms.QueryInstance = QueryInstance;
	Parms.QueryStatus = QueryStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.OnActorDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorState*                 ActorState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPQC_AnimalSwarm_C::OnActorDeath(class UActorState* ActorState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "OnActorDeath");

	Params::UBPQC_AnimalSwarm_C_OnActorDeath_Params Parms{};

	Parms.ActorState = ActorState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.SpawnCreature
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPQC_AnimalSwarm_C::SpawnCreature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "SpawnCreature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.OnEndPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPQC_AnimalSwarm_C::OnEndPlay(class AActor* Actor, enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "OnEndPlay");

	Params::UBPQC_AnimalSwarm_C_OnEndPlay_Params Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPQC_AnimalSwarm_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.ExecuteUbergraph_BPQC_AnimalSwarm
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*K2Node_CustomEvent_QueryInstance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEnvQueryStatus         K2Node_CustomEvent_QueryStatus                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             CallFunc_GetQueryResultsAsLocations_ResultLocations              (ReferenceParm)
// bool                               CallFunc_GetQueryResultsAsLocations_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActorState*                 K2Node_CustomEvent_ActorState                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusNPCGOAPCharacter_C*K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEpicCreaturesRowHandle     Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusNPCGOAPCharacter_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanSpawn_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_CustomEvent_EndPlayReason                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusNPCGOAPCharacter_C*K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GenerateLevelFromLocation_Level                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxCreatures_ScaledNumber                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAISetupRowHandle           CallFunc_Get_Creature_Creature                                   (NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_SpawnNewAI_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusNPCGOAPCharacter_C*K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEnvQueryInstanceBlueprintWrapper*CallFunc_RunEQSQuery_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPQC_AnimalSwarm_C::ExecuteUbergraph_BPQC_AnimalSwarm(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_Event_DeltaSeconds, class UEnvQueryInstanceBlueprintWrapper* K2Node_CustomEvent_QueryInstance, enum class EEnvQueryStatus K2Node_CustomEvent_QueryStatus, TArray<struct FVector>& CallFunc_GetQueryResultsAsLocations_ResultLocations, bool CallFunc_GetQueryResultsAsLocations_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UActorState* K2Node_CustomEvent_ActorState, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, const struct FEpicCreaturesRowHandle& Temp_struct_Variable, class ABP_IcarusNPCGOAPCharacter_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsActive_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CanSpawn_ReturnValue, class AActor* K2Node_CustomEvent_Actor, enum class EEndPlayReason K2Node_CustomEvent_EndPlayReason, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GenerateLevelFromLocation_Level, bool CallFunc_Array_RemoveItem_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetMaxCreatures_ScaledNumber, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FAISetupRowHandle& CallFunc_Get_Creature_Creature, class AActor* CallFunc_SpawnNewAI_ReturnValue, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Add_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation, bool CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UEnvQueryInstanceBlueprintWrapper* CallFunc_RunEQSQuery_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "ExecuteUbergraph_BPQC_AnimalSwarm");

	Params::UBPQC_AnimalSwarm_C_ExecuteUbergraph_BPQC_AnimalSwarm_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_QueryInstance = K2Node_CustomEvent_QueryInstance;
	Parms.K2Node_CustomEvent_QueryStatus = K2Node_CustomEvent_QueryStatus;
	Parms.CallFunc_GetQueryResultsAsLocations_ResultLocations = CallFunc_GetQueryResultsAsLocations_ResultLocations;
	Parms.CallFunc_GetQueryResultsAsLocations_ReturnValue = CallFunc_GetQueryResultsAsLocations_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_CustomEvent_ActorState = K2Node_CustomEvent_ActorState;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter = K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CanSpawn_ReturnValue = CallFunc_CanSpawn_ReturnValue;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_CustomEvent_EndPlayReason = K2Node_CustomEvent_EndPlayReason;
	Parms.K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter_1 = K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GenerateLevelFromLocation_Level = CallFunc_GenerateLevelFromLocation_Level;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetMaxCreatures_ScaledNumber = CallFunc_GetMaxCreatures_ScaledNumber;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Get_Creature_Creature = CallFunc_Get_Creature_Creature;
	Parms.CallFunc_SpawnNewAI_ReturnValue = CallFunc_SpawnNewAI_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter_2 = K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation = CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation;
	Parms.CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue = CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_RunEQSQuery_ReturnValue = CallFunc_RunEQSQuery_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPQC_AnimalSwarm.BPQC_AnimalSwarm_C.CreatureKilled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPQC_AnimalSwarm_C::CreatureKilled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQC_AnimalSwarm_C", "CreatureKilled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


