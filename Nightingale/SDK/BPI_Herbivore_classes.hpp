#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Herbivore.BPI_Herbivore_C
class IBPI_Herbivore_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Herbivore_C* GetDefaultObj();

	void GrazeResourceNode(class AResourceNodeIIMBase* ResourceNode, bool* bSuccess);
	void GetIsHerbivore(bool* bIsHerbivore);
};

}


