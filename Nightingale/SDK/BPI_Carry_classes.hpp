#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Carry.BPI_Carry_C
class IBPI_Carry_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Carry_C* GetDefaultObj();

	void GetCarriedResource(class AEquippableItem** ResourceItem, bool* IsCarryingResource);
};

}


