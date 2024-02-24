#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0xF4 - 0xE9)
// BlueprintGeneratedClass BP_IcarusGOAPAction_EatNearbyCarcasses_BecomeAggressive.BP_IcarusGOAPAction_EatNearbyCarcasses_BecomeAggressive_C
class UBP_IcarusGOAPAction_EatNearbyCarcasses_BecomeAggressive_C : public UBP_IcarusGOAPAction_EatNearbyCarcasses_C
{
public:
	uint8                                        Pad_33E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ProtectedActorKey;                                 // 0xEC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_EatNearbyCarcasses_BecomeAggressive_C* GetDefaultObj();

	bool UpdateCost(class AIcarusNPCGOAPController* Controller, bool CallFunc_UpdateCost_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetCorpseMoveLocation_WorldLocation, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
	bool ExecutionComplete(class AIcarusNPCGOAPController* Controller, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_ExecutionComplete_ReturnValue, bool CallFunc_RemoveModifierState_ReturnValue);
	bool Execute(class AIcarusNPCGOAPController* Controller, float Delta, bool CallFunc_Execute_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue);
	bool PlanAction(class AIcarusNPCGOAPController* Controller, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PlanAction_ReturnValue);
};

}


