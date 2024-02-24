#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HardenedSteel.HardenedSteel_C
// (Actor)

class UClass* AHardenedSteel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HardenedSteel_C");

	return Clss;
}


// HardenedSteel_C HardenedSteel.Default__HardenedSteel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHardenedSteel_C* AHardenedSteel_C::GetDefaultObj()
{
	static class AHardenedSteel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHardenedSteel_C*>(AHardenedSteel_C::StaticClass()->DefaultObject);

	return Default;
}

}


