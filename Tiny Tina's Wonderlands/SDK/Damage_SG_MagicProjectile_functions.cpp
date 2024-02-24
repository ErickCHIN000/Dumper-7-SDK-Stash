#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_SG_MagicProjectile.Damage_SG_MagicProjectile_C
// (None)

class UClass* UDamage_SG_MagicProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_SG_MagicProjectile_C");

	return Clss;
}


// Damage_SG_MagicProjectile_C Damage_SG_MagicProjectile.Default__Damage_SG_MagicProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_SG_MagicProjectile_C* UDamage_SG_MagicProjectile_C::GetDefaultObj()
{
	static class UDamage_SG_MagicProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_SG_MagicProjectile_C*>(UDamage_SG_MagicProjectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


