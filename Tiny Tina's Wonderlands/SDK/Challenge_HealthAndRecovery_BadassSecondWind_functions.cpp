#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_HealthAndRecovery_BadassSecondWind.Challenge_HealthAndRecovery_BadassSecondWind_C
// (None)

class UClass* UChallenge_HealthAndRecovery_BadassSecondWind_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_HealthAndRecovery_BadassSecondWind_C");

	return Clss;
}


// Challenge_HealthAndRecovery_BadassSecondWind_C Challenge_HealthAndRecovery_BadassSecondWind.Default__Challenge_HealthAndRecovery_BadassSecondWind_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_HealthAndRecovery_BadassSecondWind_C* UChallenge_HealthAndRecovery_BadassSecondWind_C::GetDefaultObj()
{
	static class UChallenge_HealthAndRecovery_BadassSecondWind_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_HealthAndRecovery_BadassSecondWind_C*>(UChallenge_HealthAndRecovery_BadassSecondWind_C::StaticClass()->DefaultObject);

	return Default;
}

}


