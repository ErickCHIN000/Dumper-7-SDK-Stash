#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBeam_SMG_WhiteRider_2.LightBeam_SMG_WhiteRider_2_C
// (None)

class UClass* ULightBeam_SMG_WhiteRider_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeam_SMG_WhiteRider_2_C");

	return Clss;
}


// LightBeam_SMG_WhiteRider_2_C LightBeam_SMG_WhiteRider_2.Default__LightBeam_SMG_WhiteRider_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightBeam_SMG_WhiteRider_2_C* ULightBeam_SMG_WhiteRider_2_C::GetDefaultObj()
{
	static class ULightBeam_SMG_WhiteRider_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeam_SMG_WhiteRider_2_C*>(ULightBeam_SMG_WhiteRider_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


