#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBeam_LightningBlast_Chain_Mod_01.LightBeam_LightningBlast_Chain_Mod_01_C
// (None)

class UClass* ULightBeam_LightningBlast_Chain_Mod_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeam_LightningBlast_Chain_Mod_01_C");

	return Clss;
}


// LightBeam_LightningBlast_Chain_Mod_01_C LightBeam_LightningBlast_Chain_Mod_01.Default__LightBeam_LightningBlast_Chain_Mod_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightBeam_LightningBlast_Chain_Mod_01_C* ULightBeam_LightningBlast_Chain_Mod_01_C::GetDefaultObj()
{
	static class ULightBeam_LightningBlast_Chain_Mod_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeam_LightningBlast_Chain_Mod_01_C*>(ULightBeam_LightningBlast_Chain_Mod_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


