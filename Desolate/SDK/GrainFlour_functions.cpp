#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrainFlour.GrainFlour_C
// (Actor)

class UClass* AGrainFlour_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrainFlour_C");

	return Clss;
}


// GrainFlour_C GrainFlour.Default__GrainFlour_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrainFlour_C* AGrainFlour_C::GetDefaultObj()
{
	static class AGrainFlour_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrainFlour_C*>(AGrainFlour_C::StaticClass()->DefaultObject);

	return Default;
}

}


