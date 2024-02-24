#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HunterHandImpact.HunterHandImpact_C
// (Actor)

class UClass* AHunterHandImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HunterHandImpact_C");

	return Clss;
}


// HunterHandImpact_C HunterHandImpact.Default__HunterHandImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHunterHandImpact_C* AHunterHandImpact_C::GetDefaultObj()
{
	static class AHunterHandImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHunterHandImpact_C*>(AHunterHandImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


