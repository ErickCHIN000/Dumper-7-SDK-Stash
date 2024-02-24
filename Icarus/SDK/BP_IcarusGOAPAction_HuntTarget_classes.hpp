#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x8C - 0x80)
// BlueprintGeneratedClass BP_IcarusGOAPAction_HuntTarget.BP_IcarusGOAPAction_HuntTarget_C
class UBP_IcarusGOAPAction_HuntTarget_C : public UBP_IcarusGOAPAction_Base_C
{
public:
	class AActor*                                TargetActor;                                       // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxTargetDistance;                                 // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_HuntTarget_C* GetDefaultObj();

	void EngageAllHuntingNPCs(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TMap<struct FStatsEnum, int32> K2Node_MakeMap_Map, TArray<class AIcarusNPCGOAPCharacter*>& CallFunc_GetAllActorsOfClass_OutActors, class UClass* CallFunc_GetObjectClass_ReturnValue, class AIcarusNPCGOAPCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IModifiableInterface> K2Node_DynamicCast_AsModifiable_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetNextUID_ReturnValue, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI, bool K2Node_DynamicCast_bSuccess_1, class AAIController* CallFunc_GetAIController_ReturnValue, class UIcarusStatContainer* CallFunc_GetAIStatContainer_ReturnValue, class AIcarusNPCGOAPController* K2Node_DynamicCast_AsIcarus_NPCGOAPController, bool K2Node_DynamicCast_bSuccess_2, class UIcarusGOAPAction* CallFunc_GetCurrentAction_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_AddStats_BP_ReturnValue, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	bool ExecutionComplete(class AIcarusNPCGOAPController* Controller, bool CallFunc_ExecutionComplete_ReturnValue);
	void GetClosestHuntingTarget(class AActor** Target, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetNearestAlivePlayer_Player, TArray<class AActor*>& CallFunc_GetNearestAlivePlayer_NearbyAlivePlayers, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_CheckLineOfSightToTarget_ControllerHasLineOfSightToTarget, bool CallFunc_CheckLineOfSightToTarget_IsTargetWithinControllerView, bool CallFunc_CheckLineOfSightToTarget_IsControllerWithinTargetView, bool CallFunc_BooleanAND_ReturnValue);
	bool ActionReset(bool Interrupted, bool CallFunc_ActionReset_ReturnValue);
	bool CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, class AActor* CallFunc_GetClosestHuntingTarget_Target, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetNPCStatWithDefaultValue_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_CheckContextualPreconditions_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsTargetAlive_ReturnValue);
	bool PlanAction(class AIcarusNPCGOAPController* Controller, class AActor* CallFunc_GetClosestHuntingTarget_Target, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsTargetAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	bool IsInRange(class AIcarusNPCGOAPController* Controller, bool CallFunc_IsInRange_ReturnValue);
};

}


