#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_AssaultRifle.LightProjectile_AssaultRifle_C
// (None)

class UClass* ULightProjectile_AssaultRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_AssaultRifle_C");

	return Clss;
}


// LightProjectile_AssaultRifle_C LightProjectile_AssaultRifle.Default__LightProjectile_AssaultRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_AssaultRifle_C* ULightProjectile_AssaultRifle_C::GetDefaultObj()
{
	static class ULightProjectile_AssaultRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_AssaultRifle_C*>(ULightProjectile_AssaultRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


