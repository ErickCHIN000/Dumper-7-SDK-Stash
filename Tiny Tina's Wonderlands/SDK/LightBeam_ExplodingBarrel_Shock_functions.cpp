#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBeam_ExplodingBarrel_Shock.LightBeam_ExplodingBarrel_Shock_C
// (None)

class UClass* ULightBeam_ExplodingBarrel_Shock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeam_ExplodingBarrel_Shock_C");

	return Clss;
}


// LightBeam_ExplodingBarrel_Shock_C LightBeam_ExplodingBarrel_Shock.Default__LightBeam_ExplodingBarrel_Shock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightBeam_ExplodingBarrel_Shock_C* ULightBeam_ExplodingBarrel_Shock_C::GetDefaultObj()
{
	static class ULightBeam_ExplodingBarrel_Shock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeam_ExplodingBarrel_Shock_C*>(ULightBeam_ExplodingBarrel_Shock_C::StaticClass()->DefaultObject);

	return Default;
}

}


