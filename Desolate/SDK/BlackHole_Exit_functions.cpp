#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlackHole_Exit.BlackHole_Exit_C
// (Actor)

class UClass* ABlackHole_Exit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackHole_Exit_C");

	return Clss;
}


// BlackHole_Exit_C BlackHole_Exit.Default__BlackHole_Exit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlackHole_Exit_C* ABlackHole_Exit_C::GetDefaultObj()
{
	static class ABlackHole_Exit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlackHole_Exit_C*>(ABlackHole_Exit_C::StaticClass()->DefaultObject);

	return Default;
}

}


