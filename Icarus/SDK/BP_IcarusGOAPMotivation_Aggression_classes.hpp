#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x90 - 0x60)
// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Aggression.BP_IcarusGOAPMotivation_Aggression_C
class UBP_IcarusGOAPMotivation_Aggression_C : public UBP_IcarusGOAPMotivation_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCurveFloat*                           DistanceCurve;                                     // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeLastSafe;                                      // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2418[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAITargetNode_C*                       TargetNodeRef;                                     // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                LastHostileTarget;                                 // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PerSecondAggressionDecrease;                       // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DecreaseDelta;                                     // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPMotivation_Aggression_C* GetDefaultObj();

	void SpawnTargetNode(class AController* Controller, class AAITargetNode_C** TargetNode, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AAITargetNode_C* CallFunc_SpawnActorOfClass_OutActor);
	bool UpdateCost(float Delta, class AIcarusNPCGOAPController* Controller, float TargetThreat, class FName HostileStimuliLocationKey, const TArray<struct FAIStimulus>& CombinedSensedStimuli, int32 ThreatDelta, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue, class AAITargetNode_C* CallFunc_SpawnTargetNode_TargetNode, TArray<class AActor*>& CallFunc_GetKnownPerceivedActors_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, bool CallFunc_GetCurrentPropertyState_ReturnValue, enum class ERelationshipType CallFunc_IsHostileTowards_OutRelationshipSwitch, enum class ERelationshipType CallFunc_IsHostileTowards_OutRelationshipType, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetLastPerceivedTargetLocation_LastSensedLocation, const struct FAIStimulus& CallFunc_GetLastPerceivedTargetLocation_LastSensedStimulus, bool CallFunc_GetLastPerceivedTargetLocation_ReturnValue, bool CallFunc_UpdateCurrentState_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Fraction_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, const struct FGOAPMotivation& CallFunc_GetMotivationData_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, float CallFunc_GetActorThreat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue);
	void OnMotivationTriggerEvent(class AIcarusNPCGOAPController* Controller, struct FGOAPMotivationTrigger& TriggeredEvent, bool bWasTriggered);
	void ExecuteUbergraph_BP_IcarusGOAPMotivation_Aggression(int32 EntryPoint, class AIcarusNPCGOAPController* K2Node_Event_Controller, const struct FGOAPMotivationTrigger& K2Node_Event_TriggeredEvent, bool K2Node_Event_bWasTriggered);
};

}


