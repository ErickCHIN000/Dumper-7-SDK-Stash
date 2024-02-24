#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBeam_MagicSMG_Lightning.LightBeam_MagicSMG_Lightning_C
// (None)

class UClass* ULightBeam_MagicSMG_Lightning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeam_MagicSMG_Lightning_C");

	return Clss;
}


// LightBeam_MagicSMG_Lightning_C LightBeam_MagicSMG_Lightning.Default__LightBeam_MagicSMG_Lightning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightBeam_MagicSMG_Lightning_C* ULightBeam_MagicSMG_Lightning_C::GetDefaultObj()
{
	static class ULightBeam_MagicSMG_Lightning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeam_MagicSMG_Lightning_C*>(ULightBeam_MagicSMG_Lightning_C::StaticClass()->DefaultObject);

	return Default;
}

}


