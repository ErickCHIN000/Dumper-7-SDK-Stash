#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Shotgun.CameraShake_Shotgun_C
// (None)

class UClass* UCameraShake_Shotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Shotgun_C");

	return Clss;
}


// CameraShake_Shotgun_C CameraShake_Shotgun.Default__CameraShake_Shotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Shotgun_C* UCameraShake_Shotgun_C::GetDefaultObj()
{
	static class UCameraShake_Shotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Shotgun_C*>(UCameraShake_Shotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


