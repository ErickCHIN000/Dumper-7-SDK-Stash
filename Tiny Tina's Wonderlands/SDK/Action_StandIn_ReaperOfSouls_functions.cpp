#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_StandIn_ReaperOfSouls.Action_StandIn_ReaperOfSouls_C
// (None)

class UClass* UAction_StandIn_ReaperOfSouls_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_StandIn_ReaperOfSouls_C");

	return Clss;
}


// Action_StandIn_ReaperOfSouls_C Action_StandIn_ReaperOfSouls.Default__Action_StandIn_ReaperOfSouls_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_StandIn_ReaperOfSouls_C* UAction_StandIn_ReaperOfSouls_C::GetDefaultObj()
{
	static class UAction_StandIn_ReaperOfSouls_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_StandIn_ReaperOfSouls_C*>(UAction_StandIn_ReaperOfSouls_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_StandIn_ReaperOfSouls.Action_StandIn_ReaperOfSouls_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_StandIn_ReaperOfSouls_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_StandIn_ReaperOfSouls_C", "OnBegin");

	Params::UAction_StandIn_ReaperOfSouls_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_StandIn_ReaperOfSouls.Action_StandIn_ReaperOfSouls_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_StandIn_ReaperOfSouls_C::OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_StandIn_ReaperOfSouls_C", "OnEnd");

	Params::UAction_StandIn_ReaperOfSouls_C_OnEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_StandIn_ReaperOfSouls.Action_StandIn_ReaperOfSouls_C.NotifyReaperStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_StandIn_ReaperOfSouls_C::NotifyReaperStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_StandIn_ReaperOfSouls_C", "NotifyReaperStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_StandIn_ReaperOfSouls.Action_StandIn_ReaperOfSouls_C.TurnOnEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_StandIn_ReaperOfSouls_C::TurnOnEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_StandIn_ReaperOfSouls_C", "TurnOnEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_StandIn_ReaperOfSouls.Action_StandIn_ReaperOfSouls_C.ExecuteUbergraph_Action_StandIn_ReaperOfSouls
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// class AActor*                      K2Node_Event_Actor1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerStandin_C>K2Node_DynamicCast_AsBPI_Player_Standin                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxSkeletalMeshComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_StandIn_ReaperOfSouls_C::ExecuteUbergraph_Action_StandIn_ReaperOfSouls(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class AActor* K2Node_Event_Actor1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, TScriptInterface<class IBPI_PlayerStandin_C> K2Node_DynamicCast_AsBPI_Player_Standin, bool K2Node_DynamicCast_bSuccess, class UGbxAction* CallFunc_K2Play_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_StandIn_ReaperOfSouls_C", "ExecuteUbergraph_Action_StandIn_ReaperOfSouls");

	Params::UAction_StandIn_ReaperOfSouls_C_ExecuteUbergraph_Action_StandIn_ReaperOfSouls_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Event_Actor1 = K2Node_Event_Actor1;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_DynamicCast_AsBPI_Player_Standin = K2Node_DynamicCast_AsBPI_Player_Standin;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


