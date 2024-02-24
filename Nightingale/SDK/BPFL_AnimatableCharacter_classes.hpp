#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_AnimatableCharacter.BPFL_AnimatableCharacter_C
class UBPFL_AnimatableCharacter_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_AnimatableCharacter_C* GetDefaultObj();

	void DoesBoneHavePhysicsBody(class USkeletalMeshComponent* SkeletalMeshComponent, class FName BoneName, class UObject* __WorldContext, bool* bHasPhysicsBody, float CallFunc_GetBoneMass_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast);
	void IsCharacterRagdolling(class USkeletalMeshComponent* SkeletalMeshComponent, class UObject* __WorldContext, bool* IsRagdolling, class FName DefaultCollisionProfileName, class FName CurrentBoneName, class FName DefaultRagdollRootBoneName, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_DoesBoneHavePhysicsBody_bHasPhysicsBody, bool CallFunc_IsSimulatingPhysics_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_DoesBoneHavePhysicsBody_bHasPhysicsBody_1, int32 CallFunc_GetBoneIndex_ReturnValue, class FName CallFunc_GetCollisionProfileName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName CallFunc_GetBoneName_ReturnValue, int32 CallFunc_GetNumBones_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsSimulatingPhysics_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BoneIsChildOf_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue);
	void IsMinHealth(class APawn* Pawn, class UObject* __WorldContext, bool* bIsMinHealth, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttribute_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast);
	void IsMaxHealth(class APawn* Pawn, class UObject* __WorldContext, bool* bIsMinHealth, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttribute_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast);
	void Direction(class APawn* Pawn, class UAnimInstance* AnimInstance, class UObject* __WorldContext, double* Direction, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_CalculateDirection_ReturnValue, double K2Node_FunctionResult_Direction_ImplicitCast);
	void IsMoving(class APawn* Pawn, class UObject* __WorldContext, bool* IsMoving, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void ForwardSpeed(class APawn* Pawn, class UObject* __WorldContext, double* ForwardSpeed, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_VSize_ReturnValue);
	void IsInAir(class APawn* Pawn, class UObject* __WorldContext, bool* IsInAir, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsFalling_ReturnValue);
};

}


