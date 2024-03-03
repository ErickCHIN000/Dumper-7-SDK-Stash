#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ALS_Character_BPI.ALS_Character_BPI_C
class IALS_Character_BPI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IALS_Character_BPI_C* GetDefaultObj();

	void BPI_Set_OverlayState(enum class EALS_OverlayState NewOverlayState);
	void BPI_Set_ViewMode(enum class EALS_ViewMode NewViewMode);
	void BPI_Set_Gait(enum class EALS_Gait NewGait);
	void BPI_Set_RotationMode(enum class EALS_RotationMode NewRotationMode);
	void BPI_Set_MovementAction(enum class EALS_MovementAction NewMovementAction);
	void BPI_Set_MovementState(enum class EALS_MovementState NewMovementState);
	void BPI_Get_EssentialValues(struct FVector* Velocity, struct FVector* Acceleration, struct FVector* MovementInput, bool* IsMoving, bool* HasMovementInput, float* Speed, float* MovementInputAmount, struct FRotator* AimingRotation, float* AimYawRate);
	void BPI_Get_CurrentStates(enum class EMovementMode* PawnMovementMode, enum class EALS_MovementState* MovementState, enum class EALS_MovementState* PrevMovementState, enum class EALS_MovementAction* MovementAction, enum class EALS_RotationMode* RotationMode, enum class EALS_Gait* ActualGait, enum class EALS_Stance* ActualStance, enum class EALS_ViewMode* ViewMode, enum class EALS_OverlayState* OverlayState);
};

}


