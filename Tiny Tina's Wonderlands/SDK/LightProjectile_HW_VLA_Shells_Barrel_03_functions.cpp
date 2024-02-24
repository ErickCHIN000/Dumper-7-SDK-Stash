#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_HW_VLA_Shells_Barrel_03.LightProjectile_HW_VLA_Shells_Barrel_03_C
// (None)

class UClass* ULightProjectile_HW_VLA_Shells_Barrel_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_HW_VLA_Shells_Barrel_03_C");

	return Clss;
}


// LightProjectile_HW_VLA_Shells_Barrel_03_C LightProjectile_HW_VLA_Shells_Barrel_03.Default__LightProjectile_HW_VLA_Shells_Barrel_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_HW_VLA_Shells_Barrel_03_C* ULightProjectile_HW_VLA_Shells_Barrel_03_C::GetDefaultObj()
{
	static class ULightProjectile_HW_VLA_Shells_Barrel_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_HW_VLA_Shells_Barrel_03_C*>(ULightProjectile_HW_VLA_Shells_Barrel_03_C::StaticClass()->DefaultObject);

	return Default;
}

}


