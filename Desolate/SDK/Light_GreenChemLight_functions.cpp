#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Light_GreenChemLight.Light_GreenChemLight_C
// (Actor)

class UClass* ALight_GreenChemLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Light_GreenChemLight_C");

	return Clss;
}


// Light_GreenChemLight_C Light_GreenChemLight.Default__Light_GreenChemLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALight_GreenChemLight_C* ALight_GreenChemLight_C::GetDefaultObj()
{
	static class ALight_GreenChemLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALight_GreenChemLight_C*>(ALight_GreenChemLight_C::StaticClass()->DefaultObject);

	return Default;
}

}


