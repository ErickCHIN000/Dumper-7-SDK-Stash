#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x112C - 0x112C)
// BlueprintGeneratedClass BasePeacefulAiCharacter.BasePeacefulAICharacter_C
class ABasePeacefulAICharacter_C : public ABaseAiCharacter_C
{
public:

	static class UClass* StaticClass();
	static class ABasePeacefulAICharacter_C* GetDefaultObj();

	bool OnStunComplete();
	bool UpdateAlertState(float DeltaTime, bool CallFunc_UpdateNoiseAggro_Updated, bool CallFunc_UpdateAlertState_ReturnValue);
	void CalculateEscapePoint(const struct FVector& FromPoint, float MinRadius, float MaxRadius, const struct FVector& TempResult, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue, bool CallFunc_SetPatrolPoint_Result, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_ProjectPointToNavigation_ProjectedLocation, bool CallFunc_K2_ProjectPointToNavigation_ReturnValue);
	bool UpdatePatrolState(float DeltaTime, bool CallFunc_UpdatePatrolState_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	bool SensingTakeDamage(class ASHCharacter* Character, bool FromSensor, float Damage, bool CallFunc_SensingTakeDamage_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_AddNoiseAggro_ResultAggro);
	bool SensingHearNoise(float Volume, class AActor* Actor, const struct FVector& Location, float Distance, bool FromSensor, bool CallFunc_SensingHearNoise_ReturnValue, float CallFunc_AddNoiseAggro_ResultAggro);
	bool SensingSeePawn(class APawn* Pawn, bool FromSensor, bool CallFunc_SensingSeePawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_AddNoiseAggro_ResultAggro);
};

}


