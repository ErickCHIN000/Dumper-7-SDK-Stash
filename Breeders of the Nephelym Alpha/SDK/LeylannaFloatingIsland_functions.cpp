#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaFloatingIsland.LeylannaFloatingIsland_C
// (None)

class UClass* ULeylannaFloatingIsland_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaFloatingIsland_C");

	return Clss;
}


// LeylannaFloatingIsland_C LeylannaFloatingIsland.Default__LeylannaFloatingIsland_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaFloatingIsland_C* ULeylannaFloatingIsland_C::GetDefaultObj()
{
	static class ULeylannaFloatingIsland_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaFloatingIsland_C*>(ULeylannaFloatingIsland_C::StaticClass()->DefaultObject);

	return Default;
}

}


