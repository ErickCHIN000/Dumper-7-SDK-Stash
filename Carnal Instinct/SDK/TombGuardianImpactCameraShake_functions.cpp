#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TombGuardianImpactCameraShake.TombGuardianImpactCameraShake_C
// (None)

class UClass* UTombGuardianImpactCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TombGuardianImpactCameraShake_C");

	return Clss;
}


// TombGuardianImpactCameraShake_C TombGuardianImpactCameraShake.Default__TombGuardianImpactCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTombGuardianImpactCameraShake_C* UTombGuardianImpactCameraShake_C::GetDefaultObj()
{
	static class UTombGuardianImpactCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTombGuardianImpactCameraShake_C*>(UTombGuardianImpactCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


