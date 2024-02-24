#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xF0 - 0xA0)
// BlueprintGeneratedClass BTD_IsTargetInRange.BTD_IsTargetInRange_C
class UBTD_IsTargetInRange_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                TargetKey;                                         // 0xA0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                MaxDistanceKey;                                    // 0xC8(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTD_IsTargetInRange_C* GetDefaultObj();

	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, const struct FVector& LLocation, class UCapsuleComponent* LTargetCapsule, class UCapsuleComponent* LPawnCapsule, double LMaxDistance, class AActor* LTarget, class APawn* LPawn, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UCapsuleComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, class ACharacter* K2Node_DynamicCast_AsCharacter_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetCapsuleBottomDistance_OutDistance, enum class EGetResult CallFunc_GetCapsuleBottomDistance_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_1, float CallFunc_GetScaledCapsuleRadius_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UCapsuleComponent* CallFunc_GetComponentByClass_ReturnValue_1, float CallFunc_GetBlackboardValueAsFloat_ReturnValue_1, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class UCapsuleComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_LMaxDistance_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast_2, double K2Node_VariableSet_LMaxDistance_ImplicitCast_1);
};

}


