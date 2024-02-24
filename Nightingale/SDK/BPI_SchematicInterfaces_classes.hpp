#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_SchematicInterfaces.BPI_SchematicInterfaces_C
class IBPI_SchematicInterfaces_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_SchematicInterfaces_C* GetDefaultObj();

	void GetFuelComponent(class UBP_StructureFuelComponent_C** FuelComponent);
	void GetInventoryContainerInterface(class AActor* RequestingActor, TScriptInterface<class IItemContainer>* ContainerInterface);
};

}


