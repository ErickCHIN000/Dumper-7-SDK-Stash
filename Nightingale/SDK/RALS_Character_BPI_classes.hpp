#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass RALS_Character_BPI.RALS_Character_BPI_C
class IRALS_Character_BPI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IRALS_Character_BPI_C* GetDefaultObj();

	void BPI_Set_OverlayState(enum class ERALS_OverlayState NewOverlayState);
	void BPI_Set_ViewMode(enum class ERALS_ViewMode NewViewMode);
	void BPI_Set_Gait(enum class ERALS_Gait NewGait);
	void BPI_Set_RotationMode(enum class ERALS_RotationMode NewRotationMode);
	void BPI_Set_MovementAction(enum class ERALS_MovementAction NewMovementAction);
	void BPI_Set_MovementState(enum class ERALSMovementState NewMovementState);
	void BPI_Get_EssentialValues(struct FVector* Velocity, struct FVector* Acceleration, struct FVector* MovementInput, bool* IsMoving, bool* HasMovementInput, double* Speed, double* MovementInputAmount, struct FRotator* AimingRotation, double* AimYawRate);
	void BPI_Get_CurrentStates(enum class EMovementMode* PawnMovementMode, enum class ERALSMovementState* MovementState, enum class ERALSMovementState* PrevMovementState, enum class ERALS_MovementAction* MovementAction, enum class ERALS_RotationMode* RotationMode, enum class ERALS_Gait* ActualGait, enum class ERALS_Stance* ActualStance, enum class ERALS_ViewMode* ViewMode, enum class ERALS_OverlayState* OverlayState);
};

}


