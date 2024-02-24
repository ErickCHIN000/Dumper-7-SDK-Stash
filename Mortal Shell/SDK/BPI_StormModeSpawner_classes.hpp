#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_StormModeSpawner.BPI_StormModeSpawner_C
class IBPI_StormModeSpawner_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_StormModeSpawner_C* GetDefaultObj();

	void AddSpawnerToTrigger(class AAdvancedEnemySpawner_StormMode_C* Spawner);
};

}


