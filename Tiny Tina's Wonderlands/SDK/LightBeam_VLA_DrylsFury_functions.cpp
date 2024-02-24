#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBeam_VLA_DrylsFury.LightBeam_VLA_DrylsFury_C
// (None)

class UClass* ULightBeam_VLA_DrylsFury_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeam_VLA_DrylsFury_C");

	return Clss;
}


// LightBeam_VLA_DrylsFury_C LightBeam_VLA_DrylsFury.Default__LightBeam_VLA_DrylsFury_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightBeam_VLA_DrylsFury_C* ULightBeam_VLA_DrylsFury_C::GetDefaultObj()
{
	static class ULightBeam_VLA_DrylsFury_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeam_VLA_DrylsFury_C*>(ULightBeam_VLA_DrylsFury_C::StaticClass()->DefaultObject);

	return Default;
}

}


