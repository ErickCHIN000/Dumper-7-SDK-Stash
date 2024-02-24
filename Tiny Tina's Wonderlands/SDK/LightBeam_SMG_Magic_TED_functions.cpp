#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBeam_SMG_Magic_TED.LightBeam_SMG_Magic_TED_C
// (None)

class UClass* ULightBeam_SMG_Magic_TED_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeam_SMG_Magic_TED_C");

	return Clss;
}


// LightBeam_SMG_Magic_TED_C LightBeam_SMG_Magic_TED.Default__LightBeam_SMG_Magic_TED_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightBeam_SMG_Magic_TED_C* ULightBeam_SMG_Magic_TED_C::GetDefaultObj()
{
	static class ULightBeam_SMG_Magic_TED_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeam_SMG_Magic_TED_C*>(ULightBeam_SMG_Magic_TED_C::StaticClass()->DefaultObject);

	return Default;
}

}


