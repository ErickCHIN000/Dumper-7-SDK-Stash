#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RocketLauncherLoader.BP_RocketLauncherLoader_C
// (Actor)

class UClass* ABP_RocketLauncherLoader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RocketLauncherLoader_C");

	return Clss;
}


// BP_RocketLauncherLoader_C BP_RocketLauncherLoader.Default__BP_RocketLauncherLoader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RocketLauncherLoader_C* ABP_RocketLauncherLoader_C::GetDefaultObj()
{
	static class ABP_RocketLauncherLoader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RocketLauncherLoader_C*>(ABP_RocketLauncherLoader_C::StaticClass()->DefaultObject);

	return Default;
}

}


