#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBeam_Fissure_Chain_Mod_02.LightBeam_Fissure_Chain_Mod_02_C
// (None)

class UClass* ULightBeam_Fissure_Chain_Mod_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeam_Fissure_Chain_Mod_02_C");

	return Clss;
}


// LightBeam_Fissure_Chain_Mod_02_C LightBeam_Fissure_Chain_Mod_02.Default__LightBeam_Fissure_Chain_Mod_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightBeam_Fissure_Chain_Mod_02_C* ULightBeam_Fissure_Chain_Mod_02_C::GetDefaultObj()
{
	static class ULightBeam_Fissure_Chain_Mod_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeam_Fissure_Chain_Mod_02_C*>(ULightBeam_Fissure_Chain_Mod_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


