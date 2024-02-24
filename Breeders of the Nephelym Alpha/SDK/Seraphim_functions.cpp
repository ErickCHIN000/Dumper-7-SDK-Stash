#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Seraphim.Seraphim_C
// (None)

class UClass* USeraphim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Seraphim_C");

	return Clss;
}


// Seraphim_C Seraphim.Default__Seraphim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USeraphim_C* USeraphim_C::GetDefaultObj()
{
	static class USeraphim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USeraphim_C*>(USeraphim_C::StaticClass()->DefaultObject);

	return Default;
}

}


