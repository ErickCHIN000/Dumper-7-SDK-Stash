#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass 2HHImpactCameraShake.2HHImpactCameraShake_C
// (None)

class UClass* UTwoHHImpactCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("2HHImpactCameraShake_C");

	return Clss;
}


// 2HHImpactCameraShake_C 2HHImpactCameraShake.Default__2HHImpactCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTwoHHImpactCameraShake_C* UTwoHHImpactCameraShake_C::GetDefaultObj()
{
	static class UTwoHHImpactCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwoHHImpactCameraShake_C*>(UTwoHHImpactCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


