#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_SpawnerPortal.BPI_SpawnerPortal_C
class IBPI_SpawnerPortal_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_SpawnerPortal_C* GetDefaultObj();

	void GetRallyPointLocations(TArray<struct FVector>* RallyPointLocations);
	void GetSpawnTransforms(TArray<struct FTransform>* SpawnTransforms);
};

}


