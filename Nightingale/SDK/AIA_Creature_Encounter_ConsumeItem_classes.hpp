#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xC8 - 0xB8)
// BlueprintGeneratedClass AIA_Creature_Encounter_ConsumeItem.AIA_Creature_Encounter_ConsumeItem_C
class UAIA_Creature_Encounter_ConsumeItem_C : public UAIA_Creature_Encounter_C
{
public:
	double                                       MaxDistance;                                       // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Target;                                            // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_Creature_Encounter_ConsumeItem_C* GetDefaultObj();

	float GetNormalizedScore(class AActor* Target, class APawn* CallFunc_GetOwnerPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, float CallFunc_ClampAndCurveNormalizedScore_ReturnValue, float CallFunc_ClampAndCurveNormalizedScore_Score_ImplicitCast);
	bool CheckStaticTargetRequirements(class AActor* Target, class AActor* NewLocalVar_0, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue);
	bool CheckTargetRequirements(class AActor* Target, class AActor* LTarget, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	bool CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue);
};

}


