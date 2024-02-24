#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xB0 - 0xA0)
// BlueprintGeneratedClass BP_RangedWeaponSnappingComponent.BP_RangedWeaponSnappingComponent_C
class UBP_RangedWeaponSnappingComponent_C : public UActorComponent
{
public:
	double                                       SnappingRange;                                     // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SnappingAngleInDegrees;                            // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_RangedWeaponSnappingComponent_C* GetDefaultObj();

	void CalculateTrajectory(const struct FVector& ProjectileStart, const struct FVector& ForwardVector, class AActor* IntendedTarget, struct FVector* NewForwardVector, double RotationAngle, const struct FVector& NormalizedForward2d, const struct FVector& ToTargetLocation2d, const struct FVector& NormalizedForward, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_Acos_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_RadiansToDegrees_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_2, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_3, float CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast);
};

}


