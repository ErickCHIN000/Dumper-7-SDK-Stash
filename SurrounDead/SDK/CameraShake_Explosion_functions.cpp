#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Explosion.CameraShake_Explosion_C
// (None)

class UClass* UCameraShake_Explosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Explosion_C");

	return Clss;
}


// CameraShake_Explosion_C CameraShake_Explosion.Default__CameraShake_Explosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Explosion_C* UCameraShake_Explosion_C::GetDefaultObj()
{
	static class UCameraShake_Explosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Explosion_C*>(UCameraShake_Explosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


