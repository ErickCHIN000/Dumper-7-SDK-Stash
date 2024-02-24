#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_WaypointTask.BPI_WaypointTask_C
class IBPI_WaypointTask_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_WaypointTask_C* GetDefaultObj();

	void GetTaskLocationName(class FText* Name);
	void GetTaskLocation(struct FVector* Location);
};

}


