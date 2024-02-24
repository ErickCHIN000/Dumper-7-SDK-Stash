#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_PS_MAL_FireBeam.Action_PS_MAL_FireBeam_C
// (None)

class UClass* UAction_PS_MAL_FireBeam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_PS_MAL_FireBeam_C");

	return Clss;
}


// Action_PS_MAL_FireBeam_C Action_PS_MAL_FireBeam.Default__Action_PS_MAL_FireBeam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_PS_MAL_FireBeam_C* UAction_PS_MAL_FireBeam_C::GetDefaultObj()
{
	static class UAction_PS_MAL_FireBeam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_PS_MAL_FireBeam_C*>(UAction_PS_MAL_FireBeam_C::StaticClass()->DefaultObject);

	return Default;
}

}


