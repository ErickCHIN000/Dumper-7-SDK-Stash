#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x94 - 0x80)
// BlueprintGeneratedClass BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C
class UBP_IcarusGOAPAction_Melee_Attack_C : public UBP_IcarusGOAPAction_Base_C
{
public:
	class AActor*                                TargetActor;                                       // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAITargetNode_C*                       TargetNodeRef;                                     // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastTargetSwitchTime;                              // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_Melee_Attack_C* GetDefaultObj();

	void TrySwitchAttackTarget(class AIcarusNPCGOAPController* Controller, bool* DidSwitch, class FName CurrentTargetKeyName, class AActor* CallFunc_GetBestValidEnemyTarget_ReturnValue, bool CallFunc_CompleteCurrentAction_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UIcarusGOAPAction* CallFunc_GetCurrentAction_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	bool ActionReset(bool Interrupted, bool CallFunc_ActionReset_ReturnValue);
	bool UpdateCost(class AIcarusNPCGOAPController* Controller, const struct FVector& NewTargetLocation, float YoungestStimulus, bool CallFunc_UpdateCost_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_TrySwitchAttackTarget_DidSwitch, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	bool IsInRange(class AIcarusNPCGOAPController* Controller, bool CallFunc_IsInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool PlanAction(class AIcarusNPCGOAPController* Controller, bool CallFunc_PlanAction_ReturnValue, class AActor* CallFunc_GetBestValidEnemyTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, bool CallFunc_CheckContextualPreconditions_ReturnValue, class AActor* CallFunc_GetBestValidEnemyTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_UpdateCurrentState_ReturnValue, float CallFunc_GetActorThreat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


