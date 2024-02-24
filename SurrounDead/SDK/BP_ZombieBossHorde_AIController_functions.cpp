#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZombieBossHorde_AIController.BP_ZombieBossHorde_AIController_C
// (Actor)

class UClass* ABP_ZombieBossHorde_AIController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZombieBossHorde_AIController_C");

	return Clss;
}


// BP_ZombieBossHorde_AIController_C BP_ZombieBossHorde_AIController.Default__BP_ZombieBossHorde_AIController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ZombieBossHorde_AIController_C* ABP_ZombieBossHorde_AIController_C::GetDefaultObj()
{
	static class ABP_ZombieBossHorde_AIController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ZombieBossHorde_AIController_C*>(ABP_ZombieBossHorde_AIController_C::StaticClass()->DefaultObject);

	return Default;
}

}


