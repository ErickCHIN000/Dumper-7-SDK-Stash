#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBeam_DragonCompanion_ShockBreath_Chain.LightBeam_DragonCompanion_ShockBreath_Chain_C
// (None)

class UClass* ULightBeam_DragonCompanion_ShockBreath_Chain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeam_DragonCompanion_ShockBreath_Chain_C");

	return Clss;
}


// LightBeam_DragonCompanion_ShockBreath_Chain_C LightBeam_DragonCompanion_ShockBreath_Chain.Default__LightBeam_DragonCompanion_ShockBreath_Chain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightBeam_DragonCompanion_ShockBreath_Chain_C* ULightBeam_DragonCompanion_ShockBreath_Chain_C::GetDefaultObj()
{
	static class ULightBeam_DragonCompanion_ShockBreath_Chain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeam_DragonCompanion_ShockBreath_Chain_C*>(ULightBeam_DragonCompanion_ShockBreath_Chain_C::StaticClass()->DefaultObject);

	return Default;
}

}


