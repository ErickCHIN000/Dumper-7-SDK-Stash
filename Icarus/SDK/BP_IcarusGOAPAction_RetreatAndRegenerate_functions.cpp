#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPAction_RetreatAndRegenerate.BP_IcarusGOAPAction_RetreatAndRegenerate_C
// (None)

class UClass* UBP_IcarusGOAPAction_RetreatAndRegenerate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPAction_RetreatAndRegenerate_C");

	return Clss;
}


// BP_IcarusGOAPAction_RetreatAndRegenerate_C BP_IcarusGOAPAction_RetreatAndRegenerate.Default__BP_IcarusGOAPAction_RetreatAndRegenerate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPAction_RetreatAndRegenerate_C* UBP_IcarusGOAPAction_RetreatAndRegenerate_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPAction_RetreatAndRegenerate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPAction_RetreatAndRegenerate_C*>(UBP_IcarusGOAPAction_RetreatAndRegenerate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPAction_RetreatAndRegenerate.BP_IcarusGOAPAction_RetreatAndRegenerate_C.PlanAction
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Faction_Mission_Boss_Den_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// TArray<class AActor*>              CallFunc_SortActorsByDistanceFromOrigin_ReturnValue              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_RetreatTargetInterface_C>K2Node_DynamicCast_AsBP_Retreat_Target_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetRetreatEntryLocation_WorldLocation                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetRetreatEntryLocation_WorldRotation                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_ProjectPointToNavigation_ProjectedLocation           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_ProjectPointToNavigation_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ProjectReachablePointAtLocation_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_RetreatAndRegenerate_C::PlanAction(class AIcarusNPCGOAPController* Controller, int32 Temp_int_Loop_Counter_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& Temp_wildcard_Variable, TArray<class ABP_Faction_Mission_Boss_Den_C*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, class AActor* CallFunc_Array_Get_Item, TScriptInterface<class IBP_RetreatTargetInterface_C> K2Node_DynamicCast_AsBP_Retreat_Target_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetRetreatEntryLocation_WorldLocation, const struct FRotator& CallFunc_GetRetreatEntryLocation_WorldRotation, bool CallFunc_DoesImplementInterface_ReturnValue, const struct FVector& CallFunc_K2_ProjectPointToNavigation_ProjectedLocation, bool CallFunc_K2_ProjectPointToNavigation_ReturnValue, const struct FVector& CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint, bool CallFunc_ProjectReachablePointAtLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_RetreatAndRegenerate_C", "PlanAction");

	Params::UBP_IcarusGOAPAction_RetreatAndRegenerate_C_PlanAction_Params Parms{};

	Parms.Controller = Controller;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_SortActorsByDistanceFromOrigin_ReturnValue = CallFunc_SortActorsByDistanceFromOrigin_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Retreat_Target_Interface = K2Node_DynamicCast_AsBP_Retreat_Target_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRetreatEntryLocation_WorldLocation = CallFunc_GetRetreatEntryLocation_WorldLocation;
	Parms.CallFunc_GetRetreatEntryLocation_WorldRotation = CallFunc_GetRetreatEntryLocation_WorldRotation;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_K2_ProjectPointToNavigation_ProjectedLocation = CallFunc_K2_ProjectPointToNavigation_ProjectedLocation;
	Parms.CallFunc_K2_ProjectPointToNavigation_ReturnValue = CallFunc_K2_ProjectPointToNavigation_ReturnValue;
	Parms.CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint = CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint;
	Parms.CallFunc_ProjectReachablePointAtLocation_ReturnValue = CallFunc_ProjectReachablePointAtLocation_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_RetreatAndRegenerate.BP_IcarusGOAPAction_RetreatAndRegenerate_C.CheckContextualPreconditions
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckContextualPreconditions_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_RetreatAndRegenerate_C::CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, bool CallFunc_CheckContextualPreconditions_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_RetreatAndRegenerate_C", "CheckContextualPreconditions");

	Params::UBP_IcarusGOAPAction_RetreatAndRegenerate_C_CheckContextualPreconditions_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_CheckContextualPreconditions_ReturnValue = CallFunc_CheckContextualPreconditions_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_RetreatAndRegenerate.BP_IcarusGOAPAction_RetreatAndRegenerate_C.ExecutionComplete
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ExecutionComplete_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPCharacter*     K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_IcarusGOAPAction_RetreatAndRegenerate_C::ExecutionComplete(class AIcarusNPCGOAPController* Controller, bool CallFunc_ExecutionComplete_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_GetMaxHealth_ReturnValue, int32 CallFunc_GetHealth_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_RetreatAndRegenerate_C", "ExecutionComplete");

	Params::UBP_IcarusGOAPAction_RetreatAndRegenerate_C_ExecutionComplete_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_ExecutionComplete_ReturnValue = CallFunc_ExecutionComplete_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter = K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBlackboard_ReturnValue_1 = CallFunc_GetBlackboard_ReturnValue_1;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


