#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HardImpact_CameraShake.HardImpact_CameraShake_C
// (None)

class UClass* UHardImpact_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HardImpact_CameraShake_C");

	return Clss;
}


// HardImpact_CameraShake_C HardImpact_CameraShake.Default__HardImpact_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHardImpact_CameraShake_C* UHardImpact_CameraShake_C::GetDefaultObj()
{
	static class UHardImpact_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHardImpact_CameraShake_C*>(UHardImpact_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


