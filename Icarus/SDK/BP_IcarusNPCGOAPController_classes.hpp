#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x580 - 0x540)
// BlueprintGeneratedClass BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C
class ABP_IcarusNPCGOAPController_C : public AIcarusNPCGOAPController
{
public:
	class UCurveFloat*                           ThreatOverDistanceCurve;                           // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaximumThreatRadius;                               // 0x548(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GOAP_Debugging;                                    // 0x54C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIcarusGOAPAIMemory*                   Memory;                                            // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BaseStealthThreatModifier;                         // 0x558(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           FootstepDistanceThreat;                            // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBestiaryDataRowHandle                BestiaryRow;                                       // 0x568(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_IcarusNPCGOAPController_C* GetDefaultObj();

	void ShouldReactToPerceivedDamageNoise(class AActor* PerceivedActor, bool* ShouldReact, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, const struct FAISetup& CallFunc_GetAISetupStruct_AISetup, enum class EValid CallFunc_GetAISetupStruct_Paths, class AIcarusNPCGOAPCharacter* CallFunc_GetNPCCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_FAISetupRowHandleFAISetupRowHandle_ReturnValue, const struct FTagQueriesRowHandle& CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AIcarusNPCGOAPCharacter* CallFunc_GetNPCCharacter_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue);
	void GetAdditionalTargetThreatModifier(class AActor* PerceivedTarget, float* AdditionalThreatPlusPercent, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_EqualEqual_FBestiaryDataRowHandleFBestiaryDataRowHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	bool OnProcessedNoise(class AActor* PerceivedActor, const struct FAIStimulus& EventStimulus, int32 TargetHostileMotivation, class AActor* TargetActor, bool SkipStimulusUpdate, const struct FGOAPMotivationsRowHandle& Aggression, bool OutResult, const struct FGOAPMotivationsRowHandle& Threat, bool CallFunc_OnProcessedNoise_ReturnValue, class AActor* Temp_wildcard_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue_1, float CallFunc_GetMotivationValue_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_ShouldReactToPerceivedDamageNoise_ShouldReact, int32 CallFunc_FTrunc_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue, TArray<class AActor*>& CallFunc_GetKnownPerceivedActors_OutActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_UpdateMotivationValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class UIcarusGOAPMotivation* CallFunc_GetMotivationObject_ObjectReference, bool CallFunc_GetMotivationObject_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, enum class ERelationshipType CallFunc_IsHostileTowards_OutRelationshipSwitch, enum class ERelationshipType CallFunc_IsHostileTowards_OutRelationshipType, bool CallFunc_UpdateMotivationValue_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_UpdateMotivationValue_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UIcarusGOAPMotivation* CallFunc_GetMotivationObject_ObjectReference_1, bool CallFunc_GetMotivationObject_ReturnValue_1);
	bool OnProcessedDamage(class AActor* PerceivedActor, const struct FAIStimulus& EventStimulus, bool OutResult, const struct FGOAPMotivationsRowHandle& Aggression, const struct FGOAPMotivationsRowHandle& Threat, bool CallFunc_OnProcessedDamage_ReturnValue, bool CallFunc_UpdateMotivationValue_ReturnValue, class UIcarusGOAPMotivation* CallFunc_GetMotivationObject_ObjectReference, bool CallFunc_GetMotivationObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_UpdateMotivationValue_ReturnValue_1, bool CallFunc_UpdateMotivationValue_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, class UIcarusGOAPMotivation* CallFunc_GetMotivationObject_ObjectReference_1, bool CallFunc_GetMotivationObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	bool RecalculateGOAPState(const struct FGOAPPropertiesRowHandle& IsFlying, const TArray<struct FGOAPPropertiesRowHandle>& TrueProperties, const struct FGOAPPropertiesRowHandle& FoundEnemy, const struct FGOAPPropertiesRowHandle& FoundFood, const struct FGOAPPropertiesRowHandle& FoundWater, int32 Temp_int_Loop_Counter_Variable, class AIcarusNPCGOAPCharacter* CallFunc_GetNPCCharacter_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FAISetup& CallFunc_GetAISetupStruct_AISetup, enum class EValid CallFunc_GetAISetupStruct_Paths, int32 Temp_int_Loop_Counter_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Loop_Counter_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 Temp_int_Array_Index_Variable_6, int32 Temp_int_Loop_Counter_Variable_7, const struct FBestiaryData& CallFunc_GetBestiaryDataStruct_BestiaryData, enum class EValid CallFunc_GetBestiaryDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_7, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetBestValidEnemyTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_UpdateCurrentState_ReturnValue, bool CallFunc_UpdateCurrentState_ReturnValue_1, int32 Temp_int_Array_Index_Variable_7, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct FIcarusGOAPAIFact& CallFunc_GetClosestKnownInteractable_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, const struct FIcarusGOAPAIFact& CallFunc_GetClosestKnownInteractable_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_UpdateCurrentState_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UIcarusGOAPAIMemory* CallFunc_GetAIMemory_ReturnValue, bool CallFunc_UpdateCurrentState_ReturnValue_3, TArray<class UIcarusGOAPGoal*>& CallFunc_GetGoals_ReturnValue, TArray<class UIcarusGOAPAction*>& CallFunc_GetActions_ReturnValue, class UIcarusGOAPGoal* CallFunc_Array_Get_Item, class UIcarusGOAPAction* CallFunc_Array_Get_Item_1, const struct FGOAPGoal& CallFunc_GetGoalData_ReturnValue, const struct FGOAPAction& CallFunc_GetActionData_ReturnValue, const struct FGOAPProperty& CallFunc_Array_Get_Item_2, const struct FGOAPProperty& CallFunc_Array_Get_Item_3, bool CallFunc_UpdateCurrentState_ReturnValue_4, bool CallFunc_UpdateCurrentState_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FGOAPProperty& CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_UpdateCurrentState_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_RecalculateGOAPState_ReturnValue, TArray<class UIcarusGOAPMotivation*>& CallFunc_GetMotivations_ReturnValue, class UIcarusGOAPMotivation* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_UpdateCost_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_5, const struct FGOAPMotivation& CallFunc_GetMotivationData_ReturnValue, const struct FGOAPMotivationTrigger& CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_6, const struct FGOAPProperty& CallFunc_Array_Get_Item_7, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_7, bool CallFunc_UpdateCurrentState_ReturnValue_7, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_UpdateCurrentState_ReturnValue_8, bool CallFunc_Greater_IntInt_ReturnValue);
	bool MoveToAction(class UIcarusGOAPAction* Action, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetNewBehaviourTree_ReturnValue);
	float GetActorThreat(class AActor* PerceivedActor, bool bIgnoreRelationships, const TArray<class AActor*>& KnownSeenActors, float ThreatScore, float Temp_float_Variable, float CallFunc_GetActorThreat_ReturnValue, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue, float CallFunc_GetAdditionalTargetThreatModifier_AdditionalThreatPlusPercent, TArray<class AActor*>& CallFunc_GetCurrentlyPerceivedActors_OutActors, bool Temp_bool_Variable, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_LineOfSightTo_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool Temp_bool_Variable_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ERelationshipType CallFunc_IsHostileTowards_OutRelationshipSwitch, enum class ERelationshipType CallFunc_IsHostileTowards_OutRelationshipType, bool K2Node_SwitchEnum_CmpSuccess, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 Temp_int_Array_Index_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, float CallFunc_FMax_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue_1, const struct FActorPerceptionBlueprintInfo& CallFunc_GetActorsPerception_Info, bool CallFunc_GetActorsPerception_ReturnValue, const struct FAIStimulus& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsAIStimulusOfType_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IAITargetable> K2Node_DynamicCast_AsAITargetable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsHidden_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_IsTargetAlive_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue_1, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue_1, int32 CallFunc_GetStat_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_GetMaxSpeed_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_FMax_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_GetVelocity_ReturnValue, float K2Node_Select_Default, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Lerp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4);
};

}


