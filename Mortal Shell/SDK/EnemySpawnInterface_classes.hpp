#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass EnemySpawnInterface.EnemySpawnInterface_C
class IEnemySpawnInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEnemySpawnInterface_C* GetDefaultObj();

	void SetPatrollingSplineActor(class ABP_PatrollingSpline_C* PatrollingSplineActor);
	void InitAfterSpawn(class AAdvancedEnemySpawner_C* SpawnerRef, class FName UniqueId, enum class ELevelPhases PhaseToSpawn, bool bPermanentlyDeadOnceKilled_, class APatrolPoint_C* PatrolPointA, bool bShouldWander_, class APatrolPoint_C* PatrolPointB, float AggroRadius, class ABP_TriggerOnEnemyAggro_C* TriggerToActivateOnAggro, bool ShouldPatrol_, const struct FTransform& SpawnTransform);
};

}


