#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_LinkedActorInventoryRedirector.BPI_LinkedActorInventoryRedirector_C
class IBPI_LinkedActorInventoryRedirector_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_LinkedActorInventoryRedirector_C* GetDefaultObj();

	void GetRedirectedInventoryComponent(class UInventoryComponent** InventoryComponent);
};

}


