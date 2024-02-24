#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBeam_DragonCompanion_ShockBreath.LightBeam_DragonCompanion_ShockBreath_C
// (None)

class UClass* ULightBeam_DragonCompanion_ShockBreath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeam_DragonCompanion_ShockBreath_C");

	return Clss;
}


// LightBeam_DragonCompanion_ShockBreath_C LightBeam_DragonCompanion_ShockBreath.Default__LightBeam_DragonCompanion_ShockBreath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightBeam_DragonCompanion_ShockBreath_C* ULightBeam_DragonCompanion_ShockBreath_C::GetDefaultObj()
{
	static class ULightBeam_DragonCompanion_ShockBreath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeam_DragonCompanion_ShockBreath_C*>(ULightBeam_DragonCompanion_ShockBreath_C::StaticClass()->DefaultObject);

	return Default;
}

}


