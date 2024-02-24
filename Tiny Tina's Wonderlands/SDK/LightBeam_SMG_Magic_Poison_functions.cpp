#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBeam_SMG_Magic_Poison.LightBeam_SMG_Magic_Poison_C
// (None)

class UClass* ULightBeam_SMG_Magic_Poison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeam_SMG_Magic_Poison_C");

	return Clss;
}


// LightBeam_SMG_Magic_Poison_C LightBeam_SMG_Magic_Poison.Default__LightBeam_SMG_Magic_Poison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightBeam_SMG_Magic_Poison_C* ULightBeam_SMG_Magic_Poison_C::GetDefaultObj()
{
	static class ULightBeam_SMG_Magic_Poison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeam_SMG_Magic_Poison_C*>(ULightBeam_SMG_Magic_Poison_C::StaticClass()->DefaultObject);

	return Default;
}

}


