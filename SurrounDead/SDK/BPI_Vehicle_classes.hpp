#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Vehicle.BPI_Vehicle_C
class IBPI_Vehicle_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Vehicle_C* GetDefaultObj();

	void OnEndStorageInteract(class AActor* Actor);
	void OnBeginStorageInteract(class AActor* Actor);
	void OnEndFuelInteract(class AActor* Actor);
	void OnBeginFuelInteract(class AActor* Actor);
	void OnEndRepairInteract(class AActor* Actor);
	void OnBeginRepairInteract(class AActor* Actor);
};

}


