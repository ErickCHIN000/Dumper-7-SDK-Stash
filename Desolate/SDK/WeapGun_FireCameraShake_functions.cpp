#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapGun_FireCameraShake.WeapGun_FireCameraShake_C
// (None)

class UClass* UWeapGun_FireCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapGun_FireCameraShake_C");

	return Clss;
}


// WeapGun_FireCameraShake_C WeapGun_FireCameraShake.Default__WeapGun_FireCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWeapGun_FireCameraShake_C* UWeapGun_FireCameraShake_C::GetDefaultObj()
{
	static class UWeapGun_FireCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWeapGun_FireCameraShake_C*>(UWeapGun_FireCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


