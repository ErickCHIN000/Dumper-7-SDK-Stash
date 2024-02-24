#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZombieBoss_AIController.BP_ZombieBoss_AIController_C
// (Actor)

class UClass* ABP_ZombieBoss_AIController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZombieBoss_AIController_C");

	return Clss;
}


// BP_ZombieBoss_AIController_C BP_ZombieBoss_AIController.Default__BP_ZombieBoss_AIController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ZombieBoss_AIController_C* ABP_ZombieBoss_AIController_C::GetDefaultObj()
{
	static class ABP_ZombieBoss_AIController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ZombieBoss_AIController_C*>(ABP_ZombieBoss_AIController_C::StaticClass()->DefaultObject);

	return Default;
}

}


