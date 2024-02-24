#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x94 - 0x80)
// BlueprintGeneratedClass BP_IcarusGOAPAction_GotoAnchorPoint.BP_IcarusGOAPAction_GotoAnchorPoint_C
class UBP_IcarusGOAPAction_GotoAnchorPoint_C : public UBP_IcarusGOAPAction_Base_C
{
public:
	int32                                        TimesBlocked;                                      // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TimesBlockedBeforeTeleport;                        // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastBlockLocation;                                 // 0x88(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_GotoAnchorPoint_C* GetDefaultObj();

	bool ExecutionComplete(class AIcarusNPCGOAPController* Controller, bool CallFunc_ExecutionComplete_ReturnValue);
	void ResetGOAPState(bool CallFunc_IsValid_ReturnValue, TArray<class UIcarusGOAPMotivation*>& CallFunc_GetMotivations_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UIcarusGOAPMotivation* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	bool GetActionStats(TMap<struct FBaseStatsEnum, int32>* ActionStats, TMap<struct FBaseStatsEnum, int32> Temp, const struct FBaseStatsEnum& Temp_struct_Variable, int32 Temp_int_Variable, const struct FBaseStatsEnum& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI, bool K2Node_DynamicCast_bSuccess, class UIcarusStatContainer* CallFunc_GetAIStatContainer_ReturnValue, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue_1, int32 Temp_int_Variable_1, TMap<struct FBaseStatsEnum, int32> CallFunc_GetActionStats_ActionStats, bool CallFunc_GetActionStats_ReturnValue);
	void OnGOAPMovementBlocked(const struct FVector& CurrentLocation, const struct FVector& TargetLocation, class FName AnchorTargetKey, int32 Temp_int_Variable, class AIcarusNPCGOAPCharacter* CallFunc_GetNPCCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI, bool K2Node_DynamicCast_bSuccess, class UIcarusStatContainer* CallFunc_GetAIStatContainer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, bool CallFunc_CompleteCurrentAction_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_ProjectPointToNavigation_ProjectedLocation, bool CallFunc_K2_ProjectPointToNavigation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	bool ActionReset(bool Interrupted, bool CallFunc_ActionReset_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess);
	bool PlanAction(class AIcarusNPCGOAPController* Controller, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_PlanAction_ReturnValue, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


