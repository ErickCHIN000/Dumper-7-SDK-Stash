#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass blood_watchman_placeholder.blood_watchman_placeholder_C
// (Actor)

class UClass* Ablood_watchman_placeholder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("blood_watchman_placeholder_C");

	return Clss;
}


// blood_watchman_placeholder_C blood_watchman_placeholder.Default__blood_watchman_placeholder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ablood_watchman_placeholder_C* Ablood_watchman_placeholder_C::GetDefaultObj()
{
	static class Ablood_watchman_placeholder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ablood_watchman_placeholder_C*>(Ablood_watchman_placeholder_C::StaticClass()->DefaultObject);

	return Default;
}

}


