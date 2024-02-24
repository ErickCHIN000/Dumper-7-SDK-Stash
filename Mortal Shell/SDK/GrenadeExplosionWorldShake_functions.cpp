#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrenadeExplosionWorldShake.GrenadeExplosionWorldShake_C
// (None)

class UClass* UGrenadeExplosionWorldShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrenadeExplosionWorldShake_C");

	return Clss;
}


// GrenadeExplosionWorldShake_C GrenadeExplosionWorldShake.Default__GrenadeExplosionWorldShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGrenadeExplosionWorldShake_C* UGrenadeExplosionWorldShake_C::GetDefaultObj()
{
	static class UGrenadeExplosionWorldShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrenadeExplosionWorldShake_C*>(UGrenadeExplosionWorldShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


