#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_HarvestableObject.BPI_HarvestableObject_C
class IBPI_HarvestableObject_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_HarvestableObject_C* GetDefaultObj();

	void HitHarvestableObject(const struct FVector& HitLocation);
};

}


