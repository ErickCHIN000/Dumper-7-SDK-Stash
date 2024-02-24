#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_TinaOffering.BPI_TinaOffering_C
class IBPI_TinaOffering_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_TinaOffering_C* GetDefaultObj();

	void GetLootAmount(int32* LootAmount);
	void GetRemainingCrystal(struct FGbxAttributeFloat* RemainingCrystal, int32* CurrentCrystal);
};

}


