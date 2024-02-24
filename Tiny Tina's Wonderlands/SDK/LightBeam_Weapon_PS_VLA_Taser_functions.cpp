#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBeam_Weapon_PS_VLA_Taser.LightBeam_Weapon_PS_VLA_Taser_C
// (None)

class UClass* ULightBeam_Weapon_PS_VLA_Taser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeam_Weapon_PS_VLA_Taser_C");

	return Clss;
}


// LightBeam_Weapon_PS_VLA_Taser_C LightBeam_Weapon_PS_VLA_Taser.Default__LightBeam_Weapon_PS_VLA_Taser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightBeam_Weapon_PS_VLA_Taser_C* ULightBeam_Weapon_PS_VLA_Taser_C::GetDefaultObj()
{
	static class ULightBeam_Weapon_PS_VLA_Taser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeam_Weapon_PS_VLA_Taser_C*>(ULightBeam_Weapon_PS_VLA_Taser_C::StaticClass()->DefaultObject);

	return Default;
}

}


