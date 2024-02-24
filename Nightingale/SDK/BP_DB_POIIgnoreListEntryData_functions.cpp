#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DB_POIIgnoreListEntryData.BP_DB_POIIgnoreListEntryData_C
// (None)

class UClass* UBP_DB_POIIgnoreListEntryData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DB_POIIgnoreListEntryData_C");

	return Clss;
}


// BP_DB_POIIgnoreListEntryData_C BP_DB_POIIgnoreListEntryData.Default__BP_DB_POIIgnoreListEntryData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DB_POIIgnoreListEntryData_C* UBP_DB_POIIgnoreListEntryData_C::GetDefaultObj()
{
	static class UBP_DB_POIIgnoreListEntryData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DB_POIIgnoreListEntryData_C*>(UBP_DB_POIIgnoreListEntryData_C::StaticClass()->DefaultObject);

	return Default;
}

}


