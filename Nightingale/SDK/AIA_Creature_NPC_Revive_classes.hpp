#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC0 - 0xB8)
// BlueprintGeneratedClass AIA_Creature_NPC_Revive.AIA_Creature_NPC_Revive_C
class UAIA_Creature_NPC_Revive_C : public UAIA_CreatureBase_C
{
public:
	double                                       MaxDistance;                                       // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_Creature_NPC_Revive_C* GetDefaultObj();

	float GetNormalizedRunPriority(class AActor* Target, float CallFunc_GetNormalizedScore_ReturnValue);
	void Is_Target_Player_Leader(class AActor* Target, bool* Result, class UAICompanionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXCharacter* CallFunc_GetLeader_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	float GetNormalizedScore(class AActor* Target, bool LTargetIsPlayer, double LDistanceToTarget, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_Is_Target_Player_Leader_Result, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_ClampAndCurveNormalizedScore_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, float CallFunc_ClampAndCurveNormalizedScore_Score_ImplicitCast, float CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast, double K2Node_VariableSet_LDistanceToTarget_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	bool CheckTargetRequirements(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_CheckTargetRequirements_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	bool CheckStaticTargetRequirements(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, class ABP_Creature_NPC_Human_C* K2Node_DynamicCast_AsBP_Creature_NPC_Human, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CheckStaticTargetRequirements_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue);
};

}


