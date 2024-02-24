#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AppleJuice.AppleJuice_C
// (Actor)

class UClass* AAppleJuice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AppleJuice_C");

	return Clss;
}


// AppleJuice_C AppleJuice.Default__AppleJuice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAppleJuice_C* AAppleJuice_C::GetDefaultObj()
{
	static class AAppleJuice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAppleJuice_C*>(AAppleJuice_C::StaticClass()->DefaultObject);

	return Default;
}

}


