#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC0 - 0xB8)
// BlueprintGeneratedClass AIA_Creature_Encounter_CreatureFollowPlayer.AIA_Creature_Encounter_CreatureFollowPlayer_C
class UAIA_Creature_Encounter_CreatureFollowPlayer_C : public UAIA_Creature_Encounter_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAIA_Creature_Encounter_CreatureFollowPlayer_C* GetDefaultObj();

	bool CheckStaticTargetRequirements(class AActor* Target, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue);
	float GetNormalizedScore(class AActor* Target, class APawn* CallFunc_GetOwnerPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, float CallFunc_ClampAndCurveNormalizedScore_ReturnValue, float CallFunc_ClampAndCurveNormalizedScore_Score_ImplicitCast);
	bool CheckTargetRequirements(class AActor* Target, double DistanceCheck, class AActor* LTarget, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	bool CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_CheckOwnerRequirements_ReturnValue);
	void Start(class AActor* Target);
	void ExecuteUbergraph_AIA_Creature_Encounter_CreatureFollowPlayer(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, class AActor* K2Node_Event_Target, bool CallFunc_IsValid_ReturnValue);
};

}


