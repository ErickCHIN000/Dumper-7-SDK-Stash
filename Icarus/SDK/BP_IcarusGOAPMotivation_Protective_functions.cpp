#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Protective.BP_IcarusGOAPMotivation_Protective_C
// (None)

class UClass* UBP_IcarusGOAPMotivation_Protective_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPMotivation_Protective_C");

	return Clss;
}


// BP_IcarusGOAPMotivation_Protective_C BP_IcarusGOAPMotivation_Protective.Default__BP_IcarusGOAPMotivation_Protective_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPMotivation_Protective_C* UBP_IcarusGOAPMotivation_Protective_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPMotivation_Protective_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPMotivation_Protective_C*>(UBP_IcarusGOAPMotivation_Protective_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPMotivation_Protective.BP_IcarusGOAPMotivation_Protective_C.SpawnTargetNode
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAITargetNode_C*             TargetNodeRef                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AAITargetNode_C*             CallFunc_SpawnActorOfClass_OutActor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_IcarusGOAPMotivation_Protective_C::SpawnTargetNode(class AController* Controller, class AAITargetNode_C** TargetNodeRef, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AAITargetNode_C* CallFunc_SpawnActorOfClass_OutActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPMotivation_Protective_C", "SpawnTargetNode");

	Params::UBP_IcarusGOAPMotivation_Protective_C_SpawnTargetNode_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_SpawnActorOfClass_OutActor = CallFunc_SpawnActorOfClass_OutActor;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetNodeRef != nullptr)
		*TargetNodeRef = Parms.TargetNodeRef;

}


// Function BP_IcarusGOAPMotivation_Protective.BP_IcarusGOAPMotivation_Protective_C.UpdateCost
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               IgnoreDistanceToSelf                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              UpdateRateMultiplier                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                 TargetStimulus                                                   (Edit, BlueprintVisible, NoDestructor)
// float                              StatModifier                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LastTargetStillVisible                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              VisibleActors                                                    (Edit, BlueprintVisible, DisableEditOnTemplate)
// class FName                        CurrentTargetKey                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ScoreIncreaseRate                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RecoveryRate                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DistanceMaxThreat                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DistanceMinThreat                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              KnownPerceivedActors                                             (Edit, BlueprintVisible, DisableEditOnTemplate)
// bool                               DidIncrease                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor)
// class AActor*                      ProtectedActor                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ProtectedActorKey                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NearbyDistance                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              NearbyNPCs                                                       (Edit, BlueprintVisible, DisableEditOnTemplate)
// class AAITargetNode_C*             CallFunc_SpawnTargetNode_TargetNodeRef                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AProtectedActorProxy_C*      K2Node_DynamicCast_AsProtected_Actor_Proxy                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusNPCGOAPCharacter*     CallFunc_GetNPCCharacter_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAISetup                    CallFunc_GetAISetupStruct_AISetup                                (None)
// enum class EValid                  CallFunc_GetAISetupStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAIGrowth                   CallFunc_GetAIGrowthStruct_AIGrowth                              (None)
// enum class EValid                  CallFunc_GetAIGrowthStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIPerceptionComponent*      CallFunc_GetAIPerceptionComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetCurrentlyPerceivedActors_OutActors                   (ReferenceParm)
// class UIcarusGOAPAIMemory*         CallFunc_GetAIMemory_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetKnownPerceivedActors_OutActors                       (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusGOAPAIFact           CallFunc_GetFactForObject_FoundFact                              (NoDestructor)
// bool                               CallFunc_GetFactForObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetLastPerceivedTargetLocation_LastSensedLocation       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                 CallFunc_GetLastPerceivedTargetLocation_LastSensedStimulus       (NoDestructor)
// bool                               CallFunc_GetLastPerceivedTargetLocation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusNPCGOAPCharacter*     CallFunc_GetNPCCharacter_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                 Temp_wildcard_Variable_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPCharacter*     CallFunc_GetNPCCharacter_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SortActorsByDistanceFromOrigin_ReturnValue              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTargetAlive_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGOAPMotivation             CallFunc_GetMotivationData_ReturnValue                           (None)
// struct FVector                     CallFunc_GetLastPerceivedTargetLocation_LastSensedLocation_1     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                 CallFunc_GetLastPerceivedTargetLocation_LastSensedStimulus_1     (NoDestructor)
// bool                               CallFunc_GetLastPerceivedTargetLocation_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateCurrentState_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGOAPMotivation             CallFunc_GetMotivationData_ReturnValue_1                         (None)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Fraction_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPCharacter*     CallFunc_GetNPCCharacter_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusNPCGOAPCharacter*     CallFunc_GetNPCCharacter_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SortActorsByDistanceFromOrigin_ReturnValue_1            (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusStatContainer*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTargetAlive_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERelationshipType       CallFunc_IsHostileTowards_OutRelationshipSwitch                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERelationshipType       CallFunc_IsHostileTowards_OutRelationshipType                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPMotivation_Protective_C::UpdateCost(float Delta, class AIcarusNPCGOAPController* Controller, bool IgnoreDistanceToSelf, float UpdateRateMultiplier, const struct FAIStimulus& TargetStimulus, float StatModifier, bool LastTargetStillVisible, const TArray<class AActor*>& VisibleActors, class FName CurrentTargetKey, class AActor* Target, float ScoreIncreaseRate, float RecoveryRate, int32 DistanceMaxThreat, int32 DistanceMinThreat, const TArray<class AActor*>& KnownPerceivedActors, bool DidIncrease, class AActor* ProtectedActor, class FName ProtectedActorKey, class APawn* ControlledPawn, float NearbyDistance, const TArray<class AActor*>& NearbyNPCs, class AAITargetNode_C* CallFunc_SpawnTargetNode_TargetNodeRef, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_IsClosed_Variable, class AProtectedActorProxy_C* K2Node_DynamicCast_AsProtected_Actor_Proxy, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class AIcarusNPCGOAPCharacter* CallFunc_GetNPCCharacter_ReturnValue, const struct FAISetup& CallFunc_GetAISetupStruct_AISetup, enum class EValid CallFunc_GetAISetupStruct_Paths, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FAIGrowth& CallFunc_GetAIGrowthStruct_AIGrowth, enum class EValid CallFunc_GetAIGrowthStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue, TArray<class AActor*>& CallFunc_GetCurrentlyPerceivedActors_OutActors, class UIcarusGOAPAIMemory* CallFunc_GetAIMemory_ReturnValue, TArray<class AActor*>& CallFunc_GetKnownPerceivedActors_OutActors, bool CallFunc_IsValid_ReturnValue_2, const struct FIcarusGOAPAIFact& CallFunc_GetFactForObject_FoundFact, bool CallFunc_GetFactForObject_ReturnValue, class AActor* Temp_wildcard_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FVector& CallFunc_GetLastPerceivedTargetLocation_LastSensedLocation, const struct FAIStimulus& CallFunc_GetLastPerceivedTargetLocation_LastSensedStimulus, bool CallFunc_GetLastPerceivedTargetLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class AIcarusNPCGOAPCharacter* CallFunc_GetNPCCharacter_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UCurveFloat* Temp_wildcard_Variable_1, class AIcarusNPCGOAPCharacter* CallFunc_GetNPCCharacter_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsTargetAlive_ReturnValue, const struct FGOAPMotivation& CallFunc_GetMotivationData_ReturnValue, const struct FVector& CallFunc_GetLastPerceivedTargetLocation_LastSensedLocation_1, const struct FAIStimulus& CallFunc_GetLastPerceivedTargetLocation_LastSensedStimulus_1, bool CallFunc_GetLastPerceivedTargetLocation_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, bool CallFunc_UpdateCurrentState_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_Abs_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FGOAPMotivation& CallFunc_GetMotivationData_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Fraction_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Clamp_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, class AIcarusNPCGOAPCharacter* CallFunc_GetNPCCharacter_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, class AIcarusNPCGOAPCharacter* CallFunc_GetNPCCharacter_ReturnValue_4, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_GetStat_ReturnValue, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, int32 CallFunc_GetStat_ReturnValue_1, bool CallFunc_IsTargetAlive_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, enum class ERelationshipType CallFunc_IsHostileTowards_OutRelationshipSwitch, enum class ERelationshipType CallFunc_IsHostileTowards_OutRelationshipType, float CallFunc_FMax_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, float CallFunc_GetDistanceTo_ReturnValue, int32 CallFunc_GetStat_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_FMax_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, int32 CallFunc_GetStat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_GetStat_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, class UObject* CallFunc_GetValueAsObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPMotivation_Protective_C", "UpdateCost");

	Params::UBP_IcarusGOAPMotivation_Protective_C_UpdateCost_Params Parms{};

	Parms.Delta = Delta;
	Parms.Controller = Controller;
	Parms.IgnoreDistanceToSelf = IgnoreDistanceToSelf;
	Parms.UpdateRateMultiplier = UpdateRateMultiplier;
	Parms.TargetStimulus = TargetStimulus;
	Parms.StatModifier = StatModifier;
	Parms.LastTargetStillVisible = LastTargetStillVisible;
	Parms.VisibleActors = VisibleActors;
	Parms.CurrentTargetKey = CurrentTargetKey;
	Parms.Target = Target;
	Parms.ScoreIncreaseRate = ScoreIncreaseRate;
	Parms.RecoveryRate = RecoveryRate;
	Parms.DistanceMaxThreat = DistanceMaxThreat;
	Parms.DistanceMinThreat = DistanceMinThreat;
	Parms.KnownPerceivedActors = KnownPerceivedActors;
	Parms.DidIncrease = DidIncrease;
	Parms.ProtectedActor = ProtectedActor;
	Parms.ProtectedActorKey = ProtectedActorKey;
	Parms.ControlledPawn = ControlledPawn;
	Parms.NearbyDistance = NearbyDistance;
	Parms.NearbyNPCs = NearbyNPCs;
	Parms.CallFunc_SpawnTargetNode_TargetNodeRef = CallFunc_SpawnTargetNode_TargetNodeRef;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_DynamicCast_AsProtected_Actor_Proxy = K2Node_DynamicCast_AsProtected_Actor_Proxy;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetNPCCharacter_ReturnValue = CallFunc_GetNPCCharacter_ReturnValue;
	Parms.CallFunc_GetAISetupStruct_AISetup = CallFunc_GetAISetupStruct_AISetup;
	Parms.CallFunc_GetAISetupStruct_Paths = CallFunc_GetAISetupStruct_Paths;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetAIGrowthStruct_AIGrowth = CallFunc_GetAIGrowthStruct_AIGrowth;
	Parms.CallFunc_GetAIGrowthStruct_Paths = CallFunc_GetAIGrowthStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetAIPerceptionComponent_ReturnValue = CallFunc_GetAIPerceptionComponent_ReturnValue;
	Parms.CallFunc_GetCurrentlyPerceivedActors_OutActors = CallFunc_GetCurrentlyPerceivedActors_OutActors;
	Parms.CallFunc_GetAIMemory_ReturnValue = CallFunc_GetAIMemory_ReturnValue;
	Parms.CallFunc_GetKnownPerceivedActors_OutActors = CallFunc_GetKnownPerceivedActors_OutActors;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetFactForObject_FoundFact = CallFunc_GetFactForObject_FoundFact;
	Parms.CallFunc_GetFactForObject_ReturnValue = CallFunc_GetFactForObject_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetLastPerceivedTargetLocation_LastSensedLocation = CallFunc_GetLastPerceivedTargetLocation_LastSensedLocation;
	Parms.CallFunc_GetLastPerceivedTargetLocation_LastSensedStimulus = CallFunc_GetLastPerceivedTargetLocation_LastSensedStimulus;
	Parms.CallFunc_GetLastPerceivedTargetLocation_ReturnValue = CallFunc_GetLastPerceivedTargetLocation_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_GetNPCCharacter_ReturnValue_1 = CallFunc_GetNPCCharacter_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_wildcard_Variable_1 = Temp_wildcard_Variable_1;
	Parms.CallFunc_GetNPCCharacter_ReturnValue_2 = CallFunc_GetNPCCharacter_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_SortActorsByDistanceFromOrigin_ReturnValue = CallFunc_SortActorsByDistanceFromOrigin_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsTargetAlive_ReturnValue = CallFunc_IsTargetAlive_ReturnValue;
	Parms.CallFunc_GetMotivationData_ReturnValue = CallFunc_GetMotivationData_ReturnValue;
	Parms.CallFunc_GetLastPerceivedTargetLocation_LastSensedLocation_1 = CallFunc_GetLastPerceivedTargetLocation_LastSensedLocation_1;
	Parms.CallFunc_GetLastPerceivedTargetLocation_LastSensedStimulus_1 = CallFunc_GetLastPerceivedTargetLocation_LastSensedStimulus_1;
	Parms.CallFunc_GetLastPerceivedTargetLocation_ReturnValue_1 = CallFunc_GetLastPerceivedTargetLocation_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult_1 = CallFunc_K2_SetActorLocation_SweepHitResult_1;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue_1 = CallFunc_K2_SetActorLocation_ReturnValue_1;
	Parms.CallFunc_UpdateCurrentState_ReturnValue = CallFunc_UpdateCurrentState_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetMotivationData_ReturnValue_1 = CallFunc_GetMotivationData_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_GetNPCCharacter_ReturnValue_3 = CallFunc_GetNPCCharacter_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetNPCCharacter_ReturnValue_4 = CallFunc_GetNPCCharacter_ReturnValue_4;
	Parms.CallFunc_SortActorsByDistanceFromOrigin_ReturnValue_1 = CallFunc_SortActorsByDistanceFromOrigin_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetStat_ReturnValue_1 = CallFunc_GetStat_ReturnValue_1;
	Parms.CallFunc_IsTargetAlive_ReturnValue_1 = CallFunc_IsTargetAlive_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_IsHostileTowards_OutRelationshipSwitch = CallFunc_IsHostileTowards_OutRelationshipSwitch;
	Parms.CallFunc_IsHostileTowards_OutRelationshipType = CallFunc_IsHostileTowards_OutRelationshipType;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue_2 = CallFunc_GetStat_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_GetStat_ReturnValue_3 = CallFunc_GetStat_ReturnValue_3;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue_4 = CallFunc_GetStat_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPMotivation_Protective.BP_IcarusGOAPMotivation_Protective_C.OnMotivationTriggerEvent
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGOAPMotivationTrigger      TriggeredEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bWasTriggered                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusGOAPMotivation_Protective_C::OnMotivationTriggerEvent(class AIcarusNPCGOAPController* Controller, struct FGOAPMotivationTrigger& TriggeredEvent, bool bWasTriggered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPMotivation_Protective_C", "OnMotivationTriggerEvent");

	Params::UBP_IcarusGOAPMotivation_Protective_C_OnMotivationTriggerEvent_Params Parms{};

	Parms.Controller = Controller;
	Parms.TriggeredEvent = TriggeredEvent;
	Parms.bWasTriggered = bWasTriggered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusGOAPMotivation_Protective.BP_IcarusGOAPMotivation_Protective_C.ExecuteUbergraph_BP_IcarusGOAPMotivation_Protective
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPController*    K2Node_Event_Controller                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGOAPMotivationTrigger      K2Node_Event_TriggeredEvent                                      (ConstParm)
// bool                               K2Node_Event_bWasTriggered                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusGOAPMotivation_Protective_C::ExecuteUbergraph_BP_IcarusGOAPMotivation_Protective(int32 EntryPoint, class AIcarusNPCGOAPController* K2Node_Event_Controller, const struct FGOAPMotivationTrigger& K2Node_Event_TriggeredEvent, bool K2Node_Event_bWasTriggered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPMotivation_Protective_C", "ExecuteUbergraph_BP_IcarusGOAPMotivation_Protective");

	Params::UBP_IcarusGOAPMotivation_Protective_C_ExecuteUbergraph_BP_IcarusGOAPMotivation_Protective_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.K2Node_Event_TriggeredEvent = K2Node_Event_TriggeredEvent;
	Parms.K2Node_Event_bWasTriggered = K2Node_Event_bWasTriggered;

	UObject::ProcessEvent(Func, &Parms);

}

}


