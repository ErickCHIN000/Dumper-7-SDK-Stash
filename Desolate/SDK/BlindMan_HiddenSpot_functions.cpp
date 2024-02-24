#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlindMan_HiddenSpot.BlindMan_HiddenSpot_C
// (Actor)

class UClass* ABlindMan_HiddenSpot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlindMan_HiddenSpot_C");

	return Clss;
}


// BlindMan_HiddenSpot_C BlindMan_HiddenSpot.Default__BlindMan_HiddenSpot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlindMan_HiddenSpot_C* ABlindMan_HiddenSpot_C::GetDefaultObj()
{
	static class ABlindMan_HiddenSpot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlindMan_HiddenSpot_C*>(ABlindMan_HiddenSpot_C::StaticClass()->DefaultObject);

	return Default;
}

}


