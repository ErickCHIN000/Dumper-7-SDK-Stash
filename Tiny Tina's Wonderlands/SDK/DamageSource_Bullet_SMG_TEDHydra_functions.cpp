#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Bullet_SMG_TEDHydra.DamageSource_Bullet_SMG_TEDHydra_C
// (None)

class UClass* UDamageSource_Bullet_SMG_TEDHydra_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Bullet_SMG_TEDHydra_C");

	return Clss;
}


// DamageSource_Bullet_SMG_TEDHydra_C DamageSource_Bullet_SMG_TEDHydra.Default__DamageSource_Bullet_SMG_TEDHydra_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Bullet_SMG_TEDHydra_C* UDamageSource_Bullet_SMG_TEDHydra_C::GetDefaultObj()
{
	static class UDamageSource_Bullet_SMG_TEDHydra_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Bullet_SMG_TEDHydra_C*>(UDamageSource_Bullet_SMG_TEDHydra_C::StaticClass()->DefaultObject);

	return Default;
}

}


