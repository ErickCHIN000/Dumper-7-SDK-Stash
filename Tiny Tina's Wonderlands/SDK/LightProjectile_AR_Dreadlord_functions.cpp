#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_AR_Dreadlord.LightProjectile_AR_Dreadlord_C
// (None)

class UClass* ULightProjectile_AR_Dreadlord_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_AR_Dreadlord_C");

	return Clss;
}


// LightProjectile_AR_Dreadlord_C LightProjectile_AR_Dreadlord.Default__LightProjectile_AR_Dreadlord_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_AR_Dreadlord_C* ULightProjectile_AR_Dreadlord_C::GetDefaultObj()
{
	static class ULightProjectile_AR_Dreadlord_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_AR_Dreadlord_C*>(ULightProjectile_AR_Dreadlord_C::StaticClass()->DefaultObject);

	return Default;
}

}


