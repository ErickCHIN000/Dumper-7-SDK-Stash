#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_Shotgun.LightProjectile_Shotgun_C
// (None)

class UClass* ULightProjectile_Shotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_Shotgun_C");

	return Clss;
}


// LightProjectile_Shotgun_C LightProjectile_Shotgun.Default__LightProjectile_Shotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_Shotgun_C* ULightProjectile_Shotgun_C::GetDefaultObj()
{
	static class ULightProjectile_Shotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_Shotgun_C*>(ULightProjectile_Shotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


