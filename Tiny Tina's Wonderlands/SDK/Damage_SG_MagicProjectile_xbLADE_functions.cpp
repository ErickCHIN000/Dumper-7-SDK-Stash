#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Damage_SG_MagicProjectile_xbLADE.Damage_SG_MagicProjectile_XBlade_C
// (None)

class UClass* UDamage_SG_MagicProjectile_XBlade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Damage_SG_MagicProjectile_XBlade_C");

	return Clss;
}


// Damage_SG_MagicProjectile_XBlade_C Damage_SG_MagicProjectile_xbLADE.Default__Damage_SG_MagicProjectile_XBlade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamage_SG_MagicProjectile_XBlade_C* UDamage_SG_MagicProjectile_XBlade_C::GetDefaultObj()
{
	static class UDamage_SG_MagicProjectile_XBlade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamage_SG_MagicProjectile_XBlade_C*>(UDamage_SG_MagicProjectile_XBlade_C::StaticClass()->DefaultObject);

	return Default;
}

}


