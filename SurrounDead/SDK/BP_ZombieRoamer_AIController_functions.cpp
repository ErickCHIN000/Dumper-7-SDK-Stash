#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZombieRoamer_AIController.BP_ZombieRoamer_AIController_C
// (Actor)

class UClass* ABP_ZombieRoamer_AIController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZombieRoamer_AIController_C");

	return Clss;
}


// BP_ZombieRoamer_AIController_C BP_ZombieRoamer_AIController.Default__BP_ZombieRoamer_AIController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ZombieRoamer_AIController_C* ABP_ZombieRoamer_AIController_C::GetDefaultObj()
{
	static class ABP_ZombieRoamer_AIController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ZombieRoamer_AIController_C*>(ABP_ZombieRoamer_AIController_C::StaticClass()->DefaultObject);

	return Default;
}

}


