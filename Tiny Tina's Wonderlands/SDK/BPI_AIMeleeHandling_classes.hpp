#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_AIMeleeHandling.BPI_AIMeleeHandling_C
class IBPI_AIMeleeHandling_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_AIMeleeHandling_C* GetDefaultObj();

	void AIMelee_GetElementalTypeFromMeleeWeapon(enum class EOakElementalType* MeleeWeaponElement);
	void AIMelee_SetNewMeleeWeaponClass(class UClass* NewMeleeWeaponClass);
	void AIMelee_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist);
	void AIMelee_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, class FName ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist);
	void AIMelee_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, class FName TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist);
	void AIMelee_Drop(bool RequestNewMeleeWeapon);
	void AIMelee_Spawn();
};

}


