#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Harvest.Harvest_C
// (None)

class UClass* UHarvest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Harvest_C");

	return Clss;
}


// Harvest_C Harvest.Default__Harvest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHarvest_C* UHarvest_C::GetDefaultObj()
{
	static class UHarvest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHarvest_C*>(UHarvest_C::StaticClass()->DefaultObject);

	return Default;
}

}


