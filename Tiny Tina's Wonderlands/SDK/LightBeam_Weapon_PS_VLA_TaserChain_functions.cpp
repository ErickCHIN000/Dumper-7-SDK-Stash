#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBeam_Weapon_PS_VLA_TaserChain.LightBeam_Weapon_PS_VLA_TaserChain_C
// (None)

class UClass* ULightBeam_Weapon_PS_VLA_TaserChain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeam_Weapon_PS_VLA_TaserChain_C");

	return Clss;
}


// LightBeam_Weapon_PS_VLA_TaserChain_C LightBeam_Weapon_PS_VLA_TaserChain.Default__LightBeam_Weapon_PS_VLA_TaserChain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightBeam_Weapon_PS_VLA_TaserChain_C* ULightBeam_Weapon_PS_VLA_TaserChain_C::GetDefaultObj()
{
	static class ULightBeam_Weapon_PS_VLA_TaserChain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeam_Weapon_PS_VLA_TaserChain_C*>(ULightBeam_Weapon_PS_VLA_TaserChain_C::StaticClass()->DefaultObject);

	return Default;
}

}


