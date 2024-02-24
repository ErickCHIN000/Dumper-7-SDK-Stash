#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBeam_ThreadOfFate.LightBeam_ThreadOfFate_C
// (None)

class UClass* ULightBeam_ThreadOfFate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeam_ThreadOfFate_C");

	return Clss;
}


// LightBeam_ThreadOfFate_C LightBeam_ThreadOfFate.Default__LightBeam_ThreadOfFate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightBeam_ThreadOfFate_C* ULightBeam_ThreadOfFate_C::GetDefaultObj()
{
	static class ULightBeam_ThreadOfFate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeam_ThreadOfFate_C*>(ULightBeam_ThreadOfFate_C::StaticClass()->DefaultObject);

	return Default;
}

}


