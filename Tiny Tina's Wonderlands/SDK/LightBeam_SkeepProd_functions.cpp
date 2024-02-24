#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBeam_SkeepProd.LightBeam_SkeepProd_C
// (None)

class UClass* ULightBeam_SkeepProd_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeam_SkeepProd_C");

	return Clss;
}


// LightBeam_SkeepProd_C LightBeam_SkeepProd.Default__LightBeam_SkeepProd_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightBeam_SkeepProd_C* ULightBeam_SkeepProd_C::GetDefaultObj()
{
	static class ULightBeam_SkeepProd_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeam_SkeepProd_C*>(ULightBeam_SkeepProd_C::StaticClass()->DefaultObject);

	return Default;
}

}


