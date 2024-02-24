#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBeam_Inflammation.LightBeam_Inflammation_C
// (None)

class UClass* ULightBeam_Inflammation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeam_Inflammation_C");

	return Clss;
}


// LightBeam_Inflammation_C LightBeam_Inflammation.Default__LightBeam_Inflammation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightBeam_Inflammation_C* ULightBeam_Inflammation_C::GetDefaultObj()
{
	static class ULightBeam_Inflammation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeam_Inflammation_C*>(ULightBeam_Inflammation_C::StaticClass()->DefaultObject);

	return Default;
}

}


