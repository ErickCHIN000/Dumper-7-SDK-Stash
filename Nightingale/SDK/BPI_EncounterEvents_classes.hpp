#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_EncounterEvents.BPI_EncounterEvents_C
class IBPI_EncounterEvents_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_EncounterEvents_C* GetDefaultObj();

	void GetEncounterEvents(class UBP_EncounterEventsObject_C** EncounterEventsObject);
};

}


