#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Starfallen.Starfallen_C
// (None)

class UClass* UStarfallen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Starfallen_C");

	return Clss;
}


// Starfallen_C Starfallen.Default__Starfallen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStarfallen_C* UStarfallen_C::GetDefaultObj()
{
	static class UStarfallen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStarfallen_C*>(UStarfallen_C::StaticClass()->DefaultObject);

	return Default;
}

}


