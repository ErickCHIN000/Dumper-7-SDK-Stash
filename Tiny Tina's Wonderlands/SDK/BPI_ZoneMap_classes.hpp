#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_ZoneMap.BPI_ZoneMap_C
class IBPI_ZoneMap_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_ZoneMap_C* GetDefaultObj();

	void Activate_POI();
	void End_Zone_Map_Cursor_Over();
	void Begin_Zone_Map_Cursor_Over();
};

}


