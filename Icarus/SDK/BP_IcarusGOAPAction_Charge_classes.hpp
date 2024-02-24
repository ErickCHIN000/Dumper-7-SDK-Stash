#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x84 - 0x80)
// BlueprintGeneratedClass BP_IcarusGOAPAction_Charge.BP_IcarusGOAPAction_Charge_C
class UBP_IcarusGOAPAction_Charge_C : public UBP_IcarusGOAPAction_Base_C
{
public:
	float                                        LastChargeTime;                                    // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_Charge_C* GetDefaultObj();

	void IsTargetWithinValidChargeDistance(class AIcarusNPCGOAPController* Controller, class AActor* Target, bool* WithinValidDistance, class APawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, int32 CallFunc_GetNPCStatWithDefaultValue_ReturnValue, int32 CallFunc_GetNPCStatWithDefaultValue_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool ExecutionComplete(class AIcarusNPCGOAPController* Controller, const struct FGOAPMotivationsRowHandle& Threat, bool CallFunc_ExecutionComplete_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetMotivationValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_UpdateMotivationValue_ReturnValue);
	bool IsInRange(class AIcarusNPCGOAPController* Controller, bool CallFunc_IsInRange_ReturnValue);
	bool PlanAction(class AIcarusNPCGOAPController* Controller, bool CallFunc_PlanAction_ReturnValue, class AActor* CallFunc_GetBestValidEnemyTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTargetWithinValidChargeDistance_WithinValidDistance);
	bool CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, float MinChargeDistance, float MaxChargeDistance, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_CheckContextualPreconditions_ReturnValue, int32 CallFunc_GetNPCStatWithDefaultValue_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class AActor* CallFunc_GetBestValidEnemyTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTargetWithinValidChargeDistance_WithinValidDistance, bool CallFunc_IsValid_ReturnValue_1);
};

}


