#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusPlayerState.BP_IcarusPlayerState_C
// (Actor)

class UClass* ABP_IcarusPlayerState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusPlayerState_C");

	return Clss;
}


// BP_IcarusPlayerState_C BP_IcarusPlayerState.Default__BP_IcarusPlayerState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IcarusPlayerState_C* ABP_IcarusPlayerState_C::GetDefaultObj()
{
	static class ABP_IcarusPlayerState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IcarusPlayerState_C*>(ABP_IcarusPlayerState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.HasValidPlayerColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               HasValidColor                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerState_C::HasValidPlayerColor(bool* HasValidColor, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerState_C", "HasValidPlayerColor");

	Params::ABP_IcarusPlayerState_C_HasValidPlayerColor_Params Parms{};

	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasValidColor != nullptr)
		*HasValidColor = Parms.HasValidColor;

}


// Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.OnRep_PlayerIdentityVisual
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasValidPlayerColor_HasValidColor                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerState_C::OnRep_PlayerIdentityVisual(bool CallFunc_HasValidPlayerColor_HasValidColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerState_C", "OnRep_PlayerIdentityVisual");

	Params::ABP_IcarusPlayerState_C_OnRep_PlayerIdentityVisual_Params Parms{};

	Parms.CallFunc_HasValidPlayerColor_HasValidColor = CallFunc_HasValidPlayerColor_HasValidColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.GetPlayerVisualIdentity
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_IcarusPlayerState_C::GetPlayerVisualIdentity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerState_C", "GetPlayerVisualIdentity");

	Params::ABP_IcarusPlayerState_C_GetPlayerVisualIdentity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.SetDeployableDebugEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerState_C::SetDeployableDebugEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerState_C", "SetDeployableDebugEnabled");

	Params::ABP_IcarusPlayerState_C_SetDeployableDebugEnabled_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.OnLoaded_DEC21D7041DA4135F51EAE8C5F4694B4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_IcarusPlayerState_C::OnLoaded_DEC21D7041DA4135F51EAE8C5F4694B4(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerState_C", "OnLoaded_DEC21D7041DA4135F51EAE8C5F4694B4");

	Params::ABP_IcarusPlayerState_C_OnLoaded_DEC21D7041DA4135F51EAE8C5F4694B4_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.OnLoaded_A3EAECF7499A23B0349644B397036FC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_IcarusPlayerState_C::OnLoaded_A3EAECF7499A23B0349644B397036FC7(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerState_C", "OnLoaded_A3EAECF7499A23B0349644B397036FC7");

	Params::ABP_IcarusPlayerState_C_OnLoaded_A3EAECF7499A23B0349644B397036FC7_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerState_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerState_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.ServerMovePersonalWaypoint
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 OwningController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerState_C::ServerMovePersonalWaypoint(const struct FVector& Location, class AController* OwningController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerState_C", "ServerMovePersonalWaypoint");

	Params::ABP_IcarusPlayerState_C_ServerMovePersonalWaypoint_Params Parms{};

	Parms.Location = Location;
	Parms.OwningController = OwningController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.ServerDestroyWaypoint
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerState_C::ServerDestroyWaypoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerState_C", "ServerDestroyWaypoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.Server_UpdateHealthValue
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerState_C::Server_UpdateHealthValue(float NewHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerState_C", "Server_UpdateHealthValue");

	Params::ABP_IcarusPlayerState_C_Server_UpdateHealthValue_Params Parms{};

	Parms.NewHealth = NewHealth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.InitialisePlayerColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerState_C::InitialisePlayerColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerState_C", "InitialisePlayerColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.OnConnectedPlayerInitialised
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FConnectedPlayer            ConnectedPlayer                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_IcarusPlayerState_C::OnConnectedPlayerInitialised(struct FConnectedPlayer& ConnectedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerState_C", "OnConnectedPlayerInitialised");

	Params::ABP_IcarusPlayerState_C_OnConnectedPlayerInitialised_Params Parms{};

	Parms.ConnectedPlayer = ConnectedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.TryInitialisePlayerColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerState_C::TryInitialisePlayerColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerState_C", "TryInitialisePlayerColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerState_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerState_C", "ReceiveEndPlay");

	Params::ABP_IcarusPlayerState_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.ExecuteUbergraph_BP_IcarusPlayerState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusOrchestrationSubsystem*CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsIcarus_Waypoint_Actor                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_OwningController                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusWaypointActor*        CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_NewHealth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusGameStateSurvival*    K2Node_DynamicCast_AsIcarus_Game_State_Survival                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerCharacterID          CallFunc_GetPlayerCharacterID_ReturnValue                        (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_HasValidPlayerCharacterID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPlayerColorForPlayerID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConnectedPlayers*           CallFunc_GetConnectedPlayers_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConnectedPlayer            K2Node_CustomEvent_ConnectedPlayer                               (ConstParm)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FOrchestrationEventsEnum    CallFunc_MakeOrchestrationEventsEnum_ReturnValue                 (HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckEvent_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerState_C::ExecuteUbergraph_BP_IcarusPlayerState(int32 EntryPoint, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable, class UIcarusOrchestrationSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable_1, bool CallFunc_IsServer_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsIcarus_Waypoint_Actor, bool K2Node_ClassDynamicCast_bSuccess, const struct FVector& K2Node_CustomEvent_Location, class AController* K2Node_CustomEvent_OwningController, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AIcarusWaypointActor* CallFunc_FinishSpawningActor_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, float K2Node_CustomEvent_NewHealth, float CallFunc_NormalizeToRange_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AIcarusGameStateSurvival* K2Node_DynamicCast_AsIcarus_Game_State_Survival, bool K2Node_DynamicCast_bSuccess, const struct FPlayerCharacterID& CallFunc_GetPlayerCharacterID_ReturnValue, bool CallFunc_HasValidPlayerCharacterID_ReturnValue, int32 CallFunc_GetPlayerColorForPlayerID_ReturnValue, class UConnectedPlayers* CallFunc_GetConnectedPlayers_ReturnValue, const struct FConnectedPlayer& K2Node_CustomEvent_ConnectedPlayer, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FOrchestrationEventsEnum& CallFunc_MakeOrchestrationEventsEnum_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_CheckEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerState_C", "ExecuteUbergraph_BP_IcarusPlayerState");

	Params::ABP_IcarusPlayerState_C_ExecuteUbergraph_BP_IcarusPlayerState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsIcarus_Waypoint_Actor = K2Node_ClassDynamicCast_AsIcarus_Waypoint_Actor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.K2Node_CustomEvent_OwningController = K2Node_CustomEvent_OwningController;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.K2Node_CustomEvent_NewHealth = K2Node_CustomEvent_NewHealth;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Game_State_Survival = K2Node_DynamicCast_AsIcarus_Game_State_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerCharacterID_ReturnValue = CallFunc_GetPlayerCharacterID_ReturnValue;
	Parms.CallFunc_HasValidPlayerCharacterID_ReturnValue = CallFunc_HasValidPlayerCharacterID_ReturnValue;
	Parms.CallFunc_GetPlayerColorForPlayerID_ReturnValue = CallFunc_GetPlayerColorForPlayerID_ReturnValue;
	Parms.CallFunc_GetConnectedPlayers_ReturnValue = CallFunc_GetConnectedPlayers_ReturnValue;
	Parms.K2Node_CustomEvent_ConnectedPlayer = K2Node_CustomEvent_ConnectedPlayer;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_MakeOrchestrationEventsEnum_ReturnValue = CallFunc_MakeOrchestrationEventsEnum_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_CheckEvent_ReturnValue = CallFunc_CheckEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerState.BP_IcarusPlayerState_C.PlayerColorSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerState_C::PlayerColorSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerState_C", "PlayerColorSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


