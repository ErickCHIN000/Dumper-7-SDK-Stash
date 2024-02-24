#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_AIShieldHandling.BPI_AIShieldHandling_C
class IBPI_AIShieldHandling_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_AIShieldHandling_C* GetDefaultObj();

	void AIShield_SetNewShieldClass(class UClass* NewShieldClass);
	void AIShield_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewShield, bool SpawnIfDoesntExist);
	void AIShield_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, class FName ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewShield, bool SpawnIfDoesntExist);
	void AIShield_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, class FName TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewShield, bool SpawnIfDoesntExist);
	void AIShield_Drop(bool RequestNewShield);
	void AIShield_Spawn();
};

}


