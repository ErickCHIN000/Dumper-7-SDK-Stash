#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GalaxyMapData.GalaxyMapData_C
// (None)

class UClass* UGalaxyMapData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GalaxyMapData_C");

	return Clss;
}


// GalaxyMapData_C GalaxyMapData.Default__GalaxyMapData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGalaxyMapData_C* UGalaxyMapData_C::GetDefaultObj()
{
	static class UGalaxyMapData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGalaxyMapData_C*>(UGalaxyMapData_C::StaticClass()->DefaultObject);

	return Default;
}

}


