#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureProjectile_SunGiant_Fireball_Audio.BP_CreatureProjectile_SunGiant_Fireball_Audio_C
// (Actor)

class UClass* ABP_CreatureProjectile_SunGiant_Fireball_Audio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureProjectile_SunGiant_Fireball_Audio_C");

	return Clss;
}


// BP_CreatureProjectile_SunGiant_Fireball_Audio_C BP_CreatureProjectile_SunGiant_Fireball_Audio.Default__BP_CreatureProjectile_SunGiant_Fireball_Audio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CreatureProjectile_SunGiant_Fireball_Audio_C* ABP_CreatureProjectile_SunGiant_Fireball_Audio_C::GetDefaultObj()
{
	static class ABP_CreatureProjectile_SunGiant_Fireball_Audio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CreatureProjectile_SunGiant_Fireball_Audio_C*>(ABP_CreatureProjectile_SunGiant_Fireball_Audio_C::StaticClass()->DefaultObject);

	return Default;
}

}


