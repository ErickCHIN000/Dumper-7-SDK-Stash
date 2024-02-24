#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Aggression.BP_IcarusGOAPMotivation_Aggression_C
// (None)

class UClass* UBP_IcarusGOAPMotivation_Aggression_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPMotivation_Aggression_C");

	return Clss;
}


// BP_IcarusGOAPMotivation_Aggression_C BP_IcarusGOAPMotivation_Aggression.Default__BP_IcarusGOAPMotivation_Aggression_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPMotivation_Aggression_C* UBP_IcarusGOAPMotivation_Aggression_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPMotivation_Aggression_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPMotivation_Aggression_C*>(UBP_IcarusGOAPMotivation_Aggression_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPMotivation_Aggression.BP_IcarusGOAPMotivation_Aggression_C.SpawnTargetNode
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAITargetNode_C*             TargetNode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AAITargetNode_C*             CallFunc_SpawnActorOfClass_OutActor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_IcarusGOAPMotivation_Aggression_C::SpawnTargetNode(class AController* Controller, class AAITargetNode_C** TargetNode, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AAITargetNode_C* CallFunc_SpawnActorOfClass_OutActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPMotivation_Aggression_C", "SpawnTargetNode");

	Params::UBP_IcarusGOAPMotivation_Aggression_C_SpawnTargetNode_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_SpawnActorOfClass_OutActor = CallFunc_SpawnActorOfClass_OutActor;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetNode != nullptr)
		*TargetNode = Parms.TargetNode;

}


// Function BP_IcarusGOAPMotivation_Aggression.BP_IcarusGOAPMotivation_Aggression_C.UpdateCost
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              TargetThreat                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        HostileStimuliLocationKey                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAIStimulus>         CombinedSensedStimuli                                            (Edit, BlueprintVisible)
// int32                              ThreatDelta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIPerceptionComponent*      CallFunc_GetAIPerceptionComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAITargetNode_C*             CallFunc_SpawnTargetNode_TargetNode                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetKnownPerceivedActors_OutActors                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentPropertyState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ERelationshipType       CallFunc_IsHostileTowards_OutRelationshipSwitch                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERelationshipType       CallFunc_IsHostileTowards_OutRelationshipType                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLastPerceivedTargetLocation_LastSensedLocation       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                 CallFunc_GetLastPerceivedTargetLocation_LastSensedStimulus       (NoDestructor)
// bool                               CallFunc_GetLastPerceivedTargetLocation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateCurrentState_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Fraction_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGOAPMotivation             CallFunc_GetMotivationData_ReturnValue                           (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetActorThreat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_IcarusGOAPMotivation_Aggression_C::UpdateCost(float Delta, class AIcarusNPCGOAPController* Controller, float TargetThreat, class FName HostileStimuliLocationKey, const TArray<struct FAIStimulus>& CombinedSensedStimuli, int32 ThreatDelta, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue, class AAITargetNode_C* CallFunc_SpawnTargetNode_TargetNode, TArray<class AActor*>& CallFunc_GetKnownPerceivedActors_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, bool CallFunc_GetCurrentPropertyState_ReturnValue, enum class ERelationshipType CallFunc_IsHostileTowards_OutRelationshipSwitch, enum class ERelationshipType CallFunc_IsHostileTowards_OutRelationshipType, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetLastPerceivedTargetLocation_LastSensedLocation, const struct FAIStimulus& CallFunc_GetLastPerceivedTargetLocation_LastSensedStimulus, bool CallFunc_GetLastPerceivedTargetLocation_ReturnValue, bool CallFunc_UpdateCurrentState_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Fraction_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, const struct FGOAPMotivation& CallFunc_GetMotivationData_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, float CallFunc_GetActorThreat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPMotivation_Aggression_C", "UpdateCost");

	Params::UBP_IcarusGOAPMotivation_Aggression_C_UpdateCost_Params Parms{};

	Parms.Delta = Delta;
	Parms.Controller = Controller;
	Parms.TargetThreat = TargetThreat;
	Parms.HostileStimuliLocationKey = HostileStimuliLocationKey;
	Parms.CombinedSensedStimuli = CombinedSensedStimuli;
	Parms.ThreatDelta = ThreatDelta;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetAIPerceptionComponent_ReturnValue = CallFunc_GetAIPerceptionComponent_ReturnValue;
	Parms.CallFunc_SpawnTargetNode_TargetNode = CallFunc_SpawnTargetNode_TargetNode;
	Parms.CallFunc_GetKnownPerceivedActors_OutActors = CallFunc_GetKnownPerceivedActors_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetCurrentPropertyState_ReturnValue = CallFunc_GetCurrentPropertyState_ReturnValue;
	Parms.CallFunc_IsHostileTowards_OutRelationshipSwitch = CallFunc_IsHostileTowards_OutRelationshipSwitch;
	Parms.CallFunc_IsHostileTowards_OutRelationshipType = CallFunc_IsHostileTowards_OutRelationshipType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetLastPerceivedTargetLocation_LastSensedLocation = CallFunc_GetLastPerceivedTargetLocation_LastSensedLocation;
	Parms.CallFunc_GetLastPerceivedTargetLocation_LastSensedStimulus = CallFunc_GetLastPerceivedTargetLocation_LastSensedStimulus;
	Parms.CallFunc_GetLastPerceivedTargetLocation_ReturnValue = CallFunc_GetLastPerceivedTargetLocation_ReturnValue;
	Parms.CallFunc_UpdateCurrentState_ReturnValue = CallFunc_UpdateCurrentState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_GetMotivationData_ReturnValue = CallFunc_GetMotivationData_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetActorThreat_ReturnValue = CallFunc_GetActorThreat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPMotivation_Aggression.BP_IcarusGOAPMotivation_Aggression_C.OnMotivationTriggerEvent
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGOAPMotivationTrigger      TriggeredEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bWasTriggered                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusGOAPMotivation_Aggression_C::OnMotivationTriggerEvent(class AIcarusNPCGOAPController* Controller, struct FGOAPMotivationTrigger& TriggeredEvent, bool bWasTriggered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPMotivation_Aggression_C", "OnMotivationTriggerEvent");

	Params::UBP_IcarusGOAPMotivation_Aggression_C_OnMotivationTriggerEvent_Params Parms{};

	Parms.Controller = Controller;
	Parms.TriggeredEvent = TriggeredEvent;
	Parms.bWasTriggered = bWasTriggered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusGOAPMotivation_Aggression.BP_IcarusGOAPMotivation_Aggression_C.ExecuteUbergraph_BP_IcarusGOAPMotivation_Aggression
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPController*    K2Node_Event_Controller                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGOAPMotivationTrigger      K2Node_Event_TriggeredEvent                                      (ConstParm)
// bool                               K2Node_Event_bWasTriggered                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IcarusGOAPMotivation_Aggression_C::ExecuteUbergraph_BP_IcarusGOAPMotivation_Aggression(int32 EntryPoint, class AIcarusNPCGOAPController* K2Node_Event_Controller, const struct FGOAPMotivationTrigger& K2Node_Event_TriggeredEvent, bool K2Node_Event_bWasTriggered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPMotivation_Aggression_C", "ExecuteUbergraph_BP_IcarusGOAPMotivation_Aggression");

	Params::UBP_IcarusGOAPMotivation_Aggression_C_ExecuteUbergraph_BP_IcarusGOAPMotivation_Aggression_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Controller = K2Node_Event_Controller;
	Parms.K2Node_Event_TriggeredEvent = K2Node_Event_TriggeredEvent;
	Parms.K2Node_Event_bWasTriggered = K2Node_Event_bWasTriggered;

	UObject::ProcessEvent(Func, &Parms);

}

}


