#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x90 - 0x80)
// BlueprintGeneratedClass BP_IcarusGOAPAction_EmergeFromRetreat.BP_IcarusGOAPAction_EmergeFromRetreat_C
class UBP_IcarusGOAPAction_EmergeFromRetreat_C : public UBP_IcarusGOAPAction_Base_C
{
public:
	class FName                                  RetreatTargetLocationKey;                          // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  RetreatTargetActorKey;                             // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_EmergeFromRetreat_C* GetDefaultObj();

	bool PlanAction(class AIcarusNPCGOAPController* Controller, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, TScriptInterface<class IBP_RetreatTargetInterface_C> K2Node_DynamicCast_AsBP_Retreat_Target_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetRetreatExitLocation_WorldLocation, const struct FRotator& CallFunc_GetRetreatExitLocation_WorldRotation);
	bool CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, bool CallFunc_CheckContextualPreconditions_ReturnValue);
};

}


