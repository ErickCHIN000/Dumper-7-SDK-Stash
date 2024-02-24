#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureProjectile_GiantRock.BP_CreatureProjectile_GiantRock_C
// (Actor)

class UClass* ABP_CreatureProjectile_GiantRock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureProjectile_GiantRock_C");

	return Clss;
}


// BP_CreatureProjectile_GiantRock_C BP_CreatureProjectile_GiantRock.Default__BP_CreatureProjectile_GiantRock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CreatureProjectile_GiantRock_C* ABP_CreatureProjectile_GiantRock_C::GetDefaultObj()
{
	static class ABP_CreatureProjectile_GiantRock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CreatureProjectile_GiantRock_C*>(ABP_CreatureProjectile_GiantRock_C::StaticClass()->DefaultObject);

	return Default;
}

}


