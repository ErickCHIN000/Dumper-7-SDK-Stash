#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hat18.Hat18_C
// (Actor)

class UClass* AHat18_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hat18_C");

	return Clss;
}


// Hat18_C Hat18.Default__Hat18_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHat18_C* AHat18_C::GetDefaultObj()
{
	static class AHat18_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHat18_C*>(AHat18_C::StaticClass()->DefaultObject);

	return Default;
}

}


