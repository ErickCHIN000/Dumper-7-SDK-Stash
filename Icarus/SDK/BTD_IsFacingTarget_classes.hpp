#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0xCC - 0xA0)
// BlueprintGeneratedClass BTD_IsFacingTarget.BTD_IsFacingTarget_C
class UBTD_IsFacingTarget_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                ActorOrLocationTargetKey;                          // 0xA0(0x28)(Edit, BlueprintVisible)
	float                                        DotThreshold;                                      // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTD_IsFacingTarget_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, const struct FVector& Temp_wildcard_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsValidAIDirection_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1);
};

}


