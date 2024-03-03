#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BASE_WEAPON.BP_BASE_WEAPON_C
// (Actor)

class UClass* ABP_BASE_WEAPON_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BASE_WEAPON_C");

	return Clss;
}


// BP_BASE_WEAPON_C BP_BASE_WEAPON.Default__BP_BASE_WEAPON_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BASE_WEAPON_C* ABP_BASE_WEAPON_C::GetDefaultObj()
{
	static class ABP_BASE_WEAPON_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BASE_WEAPON_C*>(ABP_BASE_WEAPON_C::StaticClass()->DefaultObject);

	return Default;
}

}


