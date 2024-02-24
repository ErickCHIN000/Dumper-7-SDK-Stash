#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OakWeaponPickup.BP_OakWeaponPickup_C
// (Actor)

class UClass* ABP_OakWeaponPickup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OakWeaponPickup_C");

	return Clss;
}


// BP_OakWeaponPickup_C BP_OakWeaponPickup.Default__BP_OakWeaponPickup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_OakWeaponPickup_C* ABP_OakWeaponPickup_C::GetDefaultObj()
{
	static class ABP_OakWeaponPickup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_OakWeaponPickup_C*>(ABP_OakWeaponPickup_C::StaticClass()->DefaultObject);

	return Default;
}

}


