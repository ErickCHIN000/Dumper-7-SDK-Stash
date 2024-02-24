#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlindMan_HealingLocation.BlindMan_HealingLocation_C
// (Actor)

class UClass* ABlindMan_HealingLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlindMan_HealingLocation_C");

	return Clss;
}


// BlindMan_HealingLocation_C BlindMan_HealingLocation.Default__BlindMan_HealingLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlindMan_HealingLocation_C* ABlindMan_HealingLocation_C::GetDefaultObj()
{
	static class ABlindMan_HealingLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlindMan_HealingLocation_C*>(ABlindMan_HealingLocation_C::StaticClass()->DefaultObject);

	return Default;
}

}


