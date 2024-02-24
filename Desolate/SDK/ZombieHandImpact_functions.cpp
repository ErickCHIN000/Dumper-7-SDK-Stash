#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ZombieHandImpact.ZombieHandImpact_C
// (Actor)

class UClass* AZombieHandImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZombieHandImpact_C");

	return Clss;
}


// ZombieHandImpact_C ZombieHandImpact.Default__ZombieHandImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AZombieHandImpact_C* AZombieHandImpact_C::GetDefaultObj()
{
	static class AZombieHandImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AZombieHandImpact_C*>(AZombieHandImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


