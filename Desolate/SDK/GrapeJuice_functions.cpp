#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrapeJuice.GrapeJuice_C
// (Actor)

class UClass* AGrapeJuice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrapeJuice_C");

	return Clss;
}


// GrapeJuice_C GrapeJuice.Default__GrapeJuice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrapeJuice_C* AGrapeJuice_C::GetDefaultObj()
{
	static class AGrapeJuice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrapeJuice_C*>(AGrapeJuice_C::StaticClass()->DefaultObject);

	return Default;
}

}


