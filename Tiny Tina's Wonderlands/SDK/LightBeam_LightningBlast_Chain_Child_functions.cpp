#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBeam_LightningBlast_Chain_Child.LightBeam_LightningBlast_Chain_Child_C
// (None)

class UClass* ULightBeam_LightningBlast_Chain_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBeam_LightningBlast_Chain_Child_C");

	return Clss;
}


// LightBeam_LightningBlast_Chain_Child_C LightBeam_LightningBlast_Chain_Child.Default__LightBeam_LightningBlast_Chain_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightBeam_LightningBlast_Chain_Child_C* ULightBeam_LightningBlast_Chain_Child_C::GetDefaultObj()
{
	static class ULightBeam_LightningBlast_Chain_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightBeam_LightningBlast_Chain_Child_C*>(ULightBeam_LightningBlast_Chain_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


