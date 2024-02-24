#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_AnimatableCharacter.BPI_AnimatableCharacter_C
class IBPI_AnimatableCharacter_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_AnimatableCharacter_C* GetDefaultObj();

	void UpdateAnimBPValues(bool& bIsMoving, bool& bIsInAir, bool& bIsMinHealth, bool& bActiveBlendspace, bool& bHasTarget, bool& bHasMovementInput, bool& bIsAiming, double& Direction, double& ForwardSpeed, double& TargetToCharacterRotationDifference, double& MovementInputToVelocityDifference, double& AimYawDelta, double& AimYawRate, struct FVector& TargetLocation, struct FVector& Velocity, struct FRotator& CharacterRotation, struct FRotator& LastVelocityRotation, struct FRotator& LastMovementInputRotation, struct FRotator& LookingRotation, enum class EAlertnessLevelType& AlertnessLevel, bool* Success);
};

}


