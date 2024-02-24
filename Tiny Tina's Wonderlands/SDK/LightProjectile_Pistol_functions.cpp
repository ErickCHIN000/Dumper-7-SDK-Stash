#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_Pistol.LightProjectile_Pistol_C
// (None)

class UClass* ULightProjectile_Pistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_Pistol_C");

	return Clss;
}


// LightProjectile_Pistol_C LightProjectile_Pistol.Default__LightProjectile_Pistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_Pistol_C* ULightProjectile_Pistol_C::GetDefaultObj()
{
	static class ULightProjectile_Pistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_Pistol_C*>(ULightProjectile_Pistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


