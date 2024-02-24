#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FactionBoss_Base.BP_FactionBoss_Base_C
// (Actor, Pawn)

class UClass* ABP_FactionBoss_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FactionBoss_Base_C");

	return Clss;
}


// BP_FactionBoss_Base_C BP_FactionBoss_Base.Default__BP_FactionBoss_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FactionBoss_Base_C* ABP_FactionBoss_Base_C::GetDefaultObj()
{
	static class ABP_FactionBoss_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FactionBoss_Base_C*>(ABP_FactionBoss_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FactionBoss_Base.BP_FactionBoss_Base_C.NotifyBossDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      Killer                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusActor*                Causer                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_FactionBoss_Base_C::NotifyBossDeath(class AIcarusPlayerCharacter* Killer, class AIcarusActor* Causer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FactionBoss_Base_C", "NotifyBossDeath");

	Params::ABP_FactionBoss_Base_C_NotifyBossDeath_Params Parms{};

	Parms.Killer = Killer;
	Parms.Causer = Causer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FactionBoss_Base.BP_FactionBoss_Base_C.CanHitDamageTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  InHit                                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanHitDamageTarget_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_FactionBoss_Base_C::CanHitDamageTarget(class AActor* TargetActor, const struct FHitResult& InHit, bool CallFunc_CanHitDamageTarget_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FactionBoss_Base_C", "CanHitDamageTarget");

	Params::ABP_FactionBoss_Base_C_CanHitDamageTarget_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.InHit = InHit;
	Parms.CallFunc_CanHitDamageTarget_ReturnValue = CallFunc_CanHitDamageTarget_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FactionBoss_Base.BP_FactionBoss_Base_C.OnMontageComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bInterrupted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FactionBoss_Base_C::OnMontageComplete(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FactionBoss_Base_C", "OnMontageComplete");

	Params::ABP_FactionBoss_Base_C_OnMontageComplete_Params Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FactionBoss_Base.BP_FactionBoss_Base_C.OnMontageStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FactionBoss_Base_C::OnMontageStarted(class UAnimMontage* Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FactionBoss_Base_C", "OnMontageStarted");

	Params::ABP_FactionBoss_Base_C_OnMontageStarted_Params Parms{};

	Parms.Montage = Montage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FactionBoss_Base.BP_FactionBoss_Base_C.PreventAttacksForActiveMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AttacksEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FactionBoss_Base_C::PreventAttacksForActiveMontage(bool AttacksEnabled, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FactionBoss_Base_C", "PreventAttacksForActiveMontage");

	Params::ABP_FactionBoss_Base_C_PreventAttacksForActiveMontage_Params Parms{};

	Parms.AttacksEnabled = AttacksEnabled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FactionBoss_Base.BP_FactionBoss_Base_C.ScaleAndApplyStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FStatsEnum, int32>     StatList                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<struct FStatsEnum, int32>     ScaledStats                                                      (Edit, BlueprintVisible)
// TArray<struct FStatsEnum>          CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsEnum                  CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConnectedPlayers*           CallFunc_GetConnectedPlayers_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FConnectedPlayer>    CallFunc_GetInitialisedConnectedPlayers_ReturnValue              (ConstParm, ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ScaleStatForPlayerCount_ScaledValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddStats_BP_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FactionBoss_Base_C::ScaleAndApplyStats(TMap<struct FStatsEnum, int32> StatList, TMap<struct FStatsEnum, int32> ScaledStats, TArray<struct FStatsEnum>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FStatsEnum& CallFunc_Array_Get_Item, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue, TArray<struct FConnectedPlayer>& CallFunc_GetInitialisedConnectedPlayers_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_ScaleStatForPlayerCount_ScaledValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_AddStats_BP_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FactionBoss_Base_C", "ScaleAndApplyStats");

	Params::ABP_FactionBoss_Base_C_ScaleAndApplyStats_Params Parms{};

	Parms.StatList = StatList;
	Parms.ScaledStats = ScaledStats;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetConnectedPlayers_ReturnValue = CallFunc_GetConnectedPlayers_ReturnValue;
	Parms.CallFunc_GetInitialisedConnectedPlayers_ReturnValue = CallFunc_GetInitialisedConnectedPlayers_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_ScaleStatForPlayerCount_ScaledValue = CallFunc_ScaleStatForPlayerCount_ScaledValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_AddStats_BP_ReturnValue = CallFunc_AddStats_BP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FactionBoss_Base.BP_FactionBoss_Base_C.ScaleStatForPlayerCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStatsEnum                  Stat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              UnscaledValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayerCount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ScaledValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FactionBoss_Base_C::ScaleStatForPlayerCount(const struct FStatsEnum& Stat, int32 UnscaledValue, int32 PlayerCount, int32* ScaledValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FactionBoss_Base_C", "ScaleStatForPlayerCount");

	Params::ABP_FactionBoss_Base_C_ScaleStatForPlayerCount_Params Parms{};

	Parms.Stat = Stat;
	Parms.UnscaledValue = UnscaledValue;
	Parms.PlayerCount = PlayerCount;

	UObject::ProcessEvent(Func, &Parms);

	if (ScaledValue != nullptr)
		*ScaledValue = Parms.ScaledValue;

}


// Function BP_FactionBoss_Base.BP_FactionBoss_Base_C.InitialiseStatsAndTags
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FactionBoss_Base_C::InitialiseStatsAndTags()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FactionBoss_Base_C", "InitialiseStatsAndTags");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FactionBoss_Base.BP_FactionBoss_Base_C.UpdateReplicatedBlackboardValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FactionBoss_Base_C::UpdateReplicatedBlackboardValues(class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FactionBoss_Base_C", "UpdateReplicatedBlackboardValues");

	Params::ABP_FactionBoss_Base_C_UpdateReplicatedBlackboardValues_Params Parms{};

	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FactionBoss_Base.BP_FactionBoss_Base_C.GetAnimatedMeshComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USkeletalMeshComponent* ABP_FactionBoss_Base_C::GetAnimatedMeshComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FactionBoss_Base_C", "GetAnimatedMeshComponent");

	Params::ABP_FactionBoss_Base_C_GetAnimatedMeshComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FactionBoss_Base.BP_FactionBoss_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FactionBoss_Base_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FactionBoss_Base_C", "ReceiveTick");

	Params::ABP_FactionBoss_Base_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FactionBoss_Base.BP_FactionBoss_Base_C.MULTI_SetActorLocation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     NewLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FactionBoss_Base_C::MULTI_SetActorLocation(const struct FVector& NewLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FactionBoss_Base_C", "MULTI_SetActorLocation");

	Params::ABP_FactionBoss_Base_C_MULTI_SetActorLocation_Params Parms{};

	Parms.NewLocation = NewLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FactionBoss_Base.BP_FactionBoss_Base_C.SetDamageEnabled
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FactionBoss_Base_C::SetDamageEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FactionBoss_Base_C", "SetDamageEnabled");

	Params::ABP_FactionBoss_Base_C_SetDamageEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FactionBoss_Base.BP_FactionBoss_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_FactionBoss_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FactionBoss_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FactionBoss_Base.BP_FactionBoss_Base_C.OnBossDamaged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorState*                 ActorState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DamageTaken                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageEvent                DamageEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AController*                 Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FactionBoss_Base_C::OnBossDamaged(class UActorState* ActorState, int32 DamageTaken, struct FDamageEvent& DamageEvent, class AController* Instigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FactionBoss_Base_C", "OnBossDamaged");

	Params::ABP_FactionBoss_Base_C_OnBossDamaged_Params Parms{};

	Parms.ActorState = ActorState;
	Parms.DamageTaken = DamageTaken;
	Parms.DamageEvent = DamageEvent;
	Parms.Instigator = Instigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FactionBoss_Base.BP_FactionBoss_Base_C.ExecuteUbergraph_BP_FactionBoss_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_NewLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEnabled                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<struct FStatsEnum, int32>     K2Node_MakeMap_Map                                               (ConstParm)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveStats_BP_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddStats_BP_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class UActorState*                 K2Node_CustomEvent_ActorState                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_DamageTaken                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageEvent                K2Node_CustomEvent_DamageEvent                                   (ConstParm)
// class AController*                 K2Node_CustomEvent_Instigator                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FactionBoss_Base_C::ExecuteUbergraph_BP_FactionBoss_Base(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& K2Node_CustomEvent_NewLocation, bool K2Node_Event_bEnabled, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, TMap<struct FStatsEnum, int32> K2Node_MakeMap_Map, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_RemoveStats_BP_ReturnValue, bool CallFunc_AddStats_BP_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UActorState* K2Node_CustomEvent_ActorState, int32 K2Node_CustomEvent_DamageTaken, const struct FDamageEvent& K2Node_CustomEvent_DamageEvent, class AController* K2Node_CustomEvent_Instigator, class AActor* K2Node_CustomEvent_DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FactionBoss_Base_C", "ExecuteUbergraph_BP_FactionBoss_Base");

	Params::ABP_FactionBoss_Base_C_ExecuteUbergraph_BP_FactionBoss_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_NewLocation = K2Node_CustomEvent_NewLocation;
	Parms.K2Node_Event_bEnabled = K2Node_Event_bEnabled;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_RemoveStats_BP_ReturnValue = CallFunc_RemoveStats_BP_ReturnValue;
	Parms.CallFunc_AddStats_BP_ReturnValue = CallFunc_AddStats_BP_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_CustomEvent_ActorState = K2Node_CustomEvent_ActorState;
	Parms.K2Node_CustomEvent_DamageTaken = K2Node_CustomEvent_DamageTaken;
	Parms.K2Node_CustomEvent_DamageEvent = K2Node_CustomEvent_DamageEvent;
	Parms.K2Node_CustomEvent_Instigator = K2Node_CustomEvent_Instigator;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FactionBoss_Base.BP_FactionBoss_Base_C.OnTransformUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  NewTransform                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void ABP_FactionBoss_Base_C::OnTransformUpdated__DelegateSignature(const struct FTransform& NewTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FactionBoss_Base_C", "OnTransformUpdated__DelegateSignature");

	Params::ABP_FactionBoss_Base_C_OnTransformUpdated__DelegateSignature_Params Parms{};

	Parms.NewTransform = NewTransform;

	UObject::ProcessEvent(Func, &Parms);

}

}


