#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCS_WeaponFire_ATL_Tracker_Grenade.BPCS_WeaponFire_ATL_Tracker_Grenade_C
// (None)

class UClass* UBPCS_WeaponFire_ATL_Tracker_Grenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCS_WeaponFire_ATL_Tracker_Grenade_C");

	return Clss;
}


// BPCS_WeaponFire_ATL_Tracker_Grenade_C BPCS_WeaponFire_ATL_Tracker_Grenade.Default__BPCS_WeaponFire_ATL_Tracker_Grenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPCS_WeaponFire_ATL_Tracker_Grenade_C* UBPCS_WeaponFire_ATL_Tracker_Grenade_C::GetDefaultObj()
{
	static class UBPCS_WeaponFire_ATL_Tracker_Grenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPCS_WeaponFire_ATL_Tracker_Grenade_C*>(UBPCS_WeaponFire_ATL_Tracker_Grenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


