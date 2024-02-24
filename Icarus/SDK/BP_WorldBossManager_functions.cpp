#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WorldBossManager.BP_WorldBossManager_C
// (Actor)

class UClass* ABP_WorldBossManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WorldBossManager_C");

	return Clss;
}


// BP_WorldBossManager_C BP_WorldBossManager.Default__BP_WorldBossManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WorldBossManager_C* ABP_WorldBossManager_C::GetDefaultObj()
{
	static class ABP_WorldBossManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WorldBossManager_C*>(ABP_WorldBossManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


