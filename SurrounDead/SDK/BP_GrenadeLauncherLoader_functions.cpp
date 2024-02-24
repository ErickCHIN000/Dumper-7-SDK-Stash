#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GrenadeLauncherLoader.BP_GrenadeLauncherLoader_C
// (Actor)

class UClass* ABP_GrenadeLauncherLoader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GrenadeLauncherLoader_C");

	return Clss;
}


// BP_GrenadeLauncherLoader_C BP_GrenadeLauncherLoader.Default__BP_GrenadeLauncherLoader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GrenadeLauncherLoader_C* ABP_GrenadeLauncherLoader_C::GetDefaultObj()
{
	static class ABP_GrenadeLauncherLoader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GrenadeLauncherLoader_C*>(ABP_GrenadeLauncherLoader_C::StaticClass()->DefaultObject);

	return Default;
}

}


