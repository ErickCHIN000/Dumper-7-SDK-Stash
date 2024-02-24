#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Light_RedChemLight.Light_RedChemLight_C
// (Actor)

class UClass* ALight_RedChemLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Light_RedChemLight_C");

	return Clss;
}


// Light_RedChemLight_C Light_RedChemLight.Default__Light_RedChemLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALight_RedChemLight_C* ALight_RedChemLight_C::GetDefaultObj()
{
	static class ALight_RedChemLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALight_RedChemLight_C*>(ALight_RedChemLight_C::StaticClass()->DefaultObject);

	return Default;
}

}


