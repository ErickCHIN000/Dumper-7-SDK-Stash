#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBeam_SMG_LiveWire.LightBeam_SMG_LiveWire_C
// (None)

class UClass* ULightBeam_SMG_LiveWire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeam_SMG_LiveWire_C");

	return Clss;
}


// LightBeam_SMG_LiveWire_C LightBeam_SMG_LiveWire.Default__LightBeam_SMG_LiveWire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightBeam_SMG_LiveWire_C* ULightBeam_SMG_LiveWire_C::GetDefaultObj()
{
	static class ULightBeam_SMG_LiveWire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeam_SMG_LiveWire_C*>(ULightBeam_SMG_LiveWire_C::StaticClass()->DefaultObject);

	return Default;
}

}


