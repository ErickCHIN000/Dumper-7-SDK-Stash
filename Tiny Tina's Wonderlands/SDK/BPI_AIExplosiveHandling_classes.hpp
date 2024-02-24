#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_AIExplosiveHandling.BPI_AIExplosiveHandling_C
class IBPI_AIExplosiveHandling_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_AIExplosiveHandling_C* GetDefaultObj();

	void AIExplosive_SetNewExplosiveClass(class UClass* NewExplosiveClass);
	void AIExplosive_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewExplosive, bool SpawnIfDoesntExist);
	void AIExplosive_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, class FName ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesntExist);
	void AIExplosive_Detonate(bool KillSelfOnDetonate, bool RequestNewExplosive, class AActor* InstigatorOverride);
	void AIExplosive_Drop(bool RequestNewExplosive, class AActor* InstigatorOverride);
	void AIExplosive_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, class FName TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesn_tExist);
	void AIExplosive_Prime();
	void AIExplosive_Spawn();
};

}


