#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlanetMapData.PlanetMapData_C
// (None)

class UClass* UPlanetMapData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlanetMapData_C");

	return Clss;
}


// PlanetMapData_C PlanetMapData.Default__PlanetMapData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlanetMapData_C* UPlanetMapData_C::GetDefaultObj()
{
	static class UPlanetMapData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlanetMapData_C*>(UPlanetMapData_C::StaticClass()->DefaultObject);

	return Default;
}

}


