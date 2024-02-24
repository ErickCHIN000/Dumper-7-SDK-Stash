#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Projectile.DamageSource_Projectile_C
// (None)

class UClass* UDamageSource_Projectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Projectile_C");

	return Clss;
}


// DamageSource_Projectile_C DamageSource_Projectile.Default__DamageSource_Projectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Projectile_C* UDamageSource_Projectile_C::GetDefaultObj()
{
	static class UDamageSource_Projectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Projectile_C*>(UDamageSource_Projectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


