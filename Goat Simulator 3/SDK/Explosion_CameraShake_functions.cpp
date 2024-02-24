#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Explosion_CameraShake.Explosion_CameraShake_C
// (None)

class UClass* UExplosion_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Explosion_CameraShake_C");

	return Clss;
}


// Explosion_CameraShake_C Explosion_CameraShake.Default__Explosion_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExplosion_CameraShake_C* UExplosion_CameraShake_C::GetDefaultObj()
{
	static class UExplosion_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExplosion_CameraShake_C*>(UExplosion_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


