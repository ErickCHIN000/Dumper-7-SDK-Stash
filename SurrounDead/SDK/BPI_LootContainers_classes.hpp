#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_LootContainers.BPI_LootContainers_C
class IBPI_LootContainers_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_LootContainers_C* GetDefaultObj();

	void IsHeld_(bool* Held_);
	void GetSettings(double* ChanceToProduceNoise, double* Default_ChanceToProduceNoise, double* DurationToHold);
};

}


