#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RocketLauncher.BP_RocketLauncher_C
// (Actor)

class UClass* ABP_RocketLauncher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RocketLauncher_C");

	return Clss;
}


// BP_RocketLauncher_C BP_RocketLauncher.Default__BP_RocketLauncher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RocketLauncher_C* ABP_RocketLauncher_C::GetDefaultObj()
{
	static class ABP_RocketLauncher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RocketLauncher_C*>(ABP_RocketLauncher_C::StaticClass()->DefaultObject);

	return Default;
}

}


