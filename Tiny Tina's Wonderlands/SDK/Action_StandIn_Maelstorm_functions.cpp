#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_StandIn_Maelstorm.Action_StandIn_Maelstorm_C
// (None)

class UClass* UAction_StandIn_Maelstorm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_StandIn_Maelstorm_C");

	return Clss;
}


// Action_StandIn_Maelstorm_C Action_StandIn_Maelstorm.Default__Action_StandIn_Maelstorm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_StandIn_Maelstorm_C* UAction_StandIn_Maelstorm_C::GetDefaultObj()
{
	static class UAction_StandIn_Maelstorm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_StandIn_Maelstorm_C*>(UAction_StandIn_Maelstorm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_StandIn_Maelstorm.Action_StandIn_Maelstorm_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_StandIn_Maelstorm_C::OnBegin(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_StandIn_Maelstorm_C", "OnBegin");

	Params::UAction_StandIn_Maelstorm_C_OnBegin_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_StandIn_Maelstorm.Action_StandIn_Maelstorm_C.RemoveAuxActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_StandIn_Maelstorm_C::RemoveAuxActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_StandIn_Maelstorm_C", "RemoveAuxActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_StandIn_Maelstorm.Action_StandIn_Maelstorm_C.AssignAuxActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_StandIn_Maelstorm_C::AssignAuxActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_StandIn_Maelstorm_C", "AssignAuxActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_StandIn_Maelstorm.Action_StandIn_Maelstorm_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_StandIn_Maelstorm_C::OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_StandIn_Maelstorm_C", "OnEnd");

	Params::UAction_StandIn_Maelstorm_C_OnEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_StandIn_Maelstorm.Action_StandIn_Maelstorm_C.ShowAuxActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_StandIn_Maelstorm_C::ShowAuxActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_StandIn_Maelstorm_C", "ShowAuxActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_StandIn_Maelstorm.Action_StandIn_Maelstorm_C.TurnOnHandEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_StandIn_Maelstorm_C::TurnOnHandEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_StandIn_Maelstorm_C", "TurnOnHandEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_StandIn_Maelstorm.Action_StandIn_Maelstorm_C.TurnOnRain
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_StandIn_Maelstorm_C::TurnOnRain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_StandIn_Maelstorm_C", "TurnOnRain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_StandIn_Maelstorm.Action_StandIn_Maelstorm_C.ExecuteUbergraph_Action_StandIn_Maelstorm
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue                           (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAttachedActors_OutActors                             (ZeroConstructor, ReferenceParm)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAuxActor_Shaman_Maelstorm_C*K2Node_DynamicCast_AsAux_Actor_Shaman_Maelstorm                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxSkeletalMeshComponent*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxSkeletalMeshComponent*   CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_StandIn_Maelstorm_C::ExecuteUbergraph_Action_StandIn_Maelstorm(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* K2Node_Event_Actor1, bool CallFunc_IsValid_ReturnValue1, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, bool Temp_bool_True_if_break_was_hit_Variable, class AActor* CallFunc_Array_Get_Item, class AAuxActor_Shaman_Maelstorm_C* K2Node_DynamicCast_AsAux_Actor_Shaman_Maelstorm, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_StandIn_Maelstorm_C", "ExecuteUbergraph_Action_StandIn_Maelstorm");

	Params::UAction_StandIn_Maelstorm_C_ExecuteUbergraph_Action_StandIn_Maelstorm_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_PostAttachedEvent_ReturnValue = CallFunc_PostAttachedEvent_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_Actor1 = K2Node_Event_Actor1;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetAttachedActors_OutActors = CallFunc_GetAttachedActors_OutActors;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsAux_Actor_Shaman_Maelstorm = K2Node_DynamicCast_AsAux_Actor_Shaman_Maelstorm;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.CallFunc_K2_GetActor_ReturnValue1 = CallFunc_K2_GetActor_ReturnValue1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue1 = CallFunc_SpawnEmitterAttached_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);

}

}


