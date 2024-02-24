#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_AimingSway_4.CameraShake_AimingSway_4_C
// (None)

class UClass* UCameraShake_AimingSway_4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_AimingSway_4_C");

	return Clss;
}


// CameraShake_AimingSway_4_C CameraShake_AimingSway_4.Default__CameraShake_AimingSway_4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_AimingSway_4_C* UCameraShake_AimingSway_4_C::GetDefaultObj()
{
	static class UCameraShake_AimingSway_4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_AimingSway_4_C*>(UCameraShake_AimingSway_4_C::StaticClass()->DefaultObject);

	return Default;
}

}


