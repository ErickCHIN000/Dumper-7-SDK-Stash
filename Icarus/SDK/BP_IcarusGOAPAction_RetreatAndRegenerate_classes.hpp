#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xA0 - 0x80)
// BlueprintGeneratedClass BP_IcarusGOAPAction_RetreatAndRegenerate.BP_IcarusGOAPAction_RetreatAndRegenerate_C
class UBP_IcarusGOAPAction_RetreatAndRegenerate_C : public UBP_IcarusGOAPAction_Base_C
{
public:
	class FName                                  LastRetreatHealthKey;                              // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LastRetreatTimeKey;                                // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RetreatTargetLocationKey;                          // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RetreatTargetActorKey;                             // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_RetreatAndRegenerate_C* GetDefaultObj();

	bool PlanAction(class AIcarusNPCGOAPController* Controller, int32 Temp_int_Loop_Counter_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVector& Temp_wildcard_Variable, TArray<class ABP_Faction_Mission_Boss_Den_C*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, class AActor* CallFunc_Array_Get_Item, TScriptInterface<class IBP_RetreatTargetInterface_C> K2Node_DynamicCast_AsBP_Retreat_Target_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetRetreatEntryLocation_WorldLocation, const struct FRotator& CallFunc_GetRetreatEntryLocation_WorldRotation, bool CallFunc_DoesImplementInterface_ReturnValue, const struct FVector& CallFunc_K2_ProjectPointToNavigation_ProjectedLocation, bool CallFunc_K2_ProjectPointToNavigation_ReturnValue, const struct FVector& CallFunc_ProjectReachablePointAtLocation_OutProjectedPoint, bool CallFunc_ProjectReachablePointAtLocation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	bool CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, bool CallFunc_CheckContextualPreconditions_ReturnValue);
	bool ExecutionComplete(class AIcarusNPCGOAPController* Controller, bool CallFunc_ExecutionComplete_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_GetMaxHealth_ReturnValue, int32 CallFunc_GetHealth_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue);
};

}


