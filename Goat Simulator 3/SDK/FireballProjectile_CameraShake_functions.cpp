#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FireballProjectile_CameraShake.FireballProjectile_CameraShake_C
// (None)

class UClass* UFireballProjectile_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireballProjectile_CameraShake_C");

	return Clss;
}


// FireballProjectile_CameraShake_C FireballProjectile_CameraShake.Default__FireballProjectile_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFireballProjectile_CameraShake_C* UFireballProjectile_CameraShake_C::GetDefaultObj()
{
	static class UFireballProjectile_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFireballProjectile_CameraShake_C*>(UFireballProjectile_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


