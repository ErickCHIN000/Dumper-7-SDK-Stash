#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_SniperRifle.LightProjectile_SniperRifle_C
// (None)

class UClass* ULightProjectile_SniperRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_SniperRifle_C");

	return Clss;
}


// LightProjectile_SniperRifle_C LightProjectile_SniperRifle.Default__LightProjectile_SniperRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_SniperRifle_C* ULightProjectile_SniperRifle_C::GetDefaultObj()
{
	static class ULightProjectile_SniperRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_SniperRifle_C*>(ULightProjectile_SniperRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


