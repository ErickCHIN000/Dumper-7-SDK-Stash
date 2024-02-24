#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x8C - 0x88)
// BlueprintGeneratedClass Condition_QuerrierinFrontofTarget.Condition_QuerrierinFrontofTarget_C
class UCondition_QuerrierinFrontofTarget_C : public UGbxCondition_Blueprint
{
public:
	float                                        DotProduct;                                        // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCondition_QuerrierinFrontofTarget_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class FName NewLocalVar_0, class APawn* Pawn, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetAssociatedPawn_ReturnValue, class AController* CallFunc_GetAssociatedController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGbxAIController* K2Node_DynamicCast_AsGbx_AIController, bool K2Node_DynamicCast_bSuccess1, class UTargetingComponent* CallFunc_GetTargetingComponent_ReturnValue, class AActor* CallFunc_GetBestTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


