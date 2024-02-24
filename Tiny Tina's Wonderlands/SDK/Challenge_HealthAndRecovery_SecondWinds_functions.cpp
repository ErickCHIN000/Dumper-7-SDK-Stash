#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_HealthAndRecovery_SecondWinds.Challenge_HealthAndRecovery_SecondWinds_C
// (None)

class UClass* UChallenge_HealthAndRecovery_SecondWinds_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_HealthAndRecovery_SecondWinds_C");

	return Clss;
}


// Challenge_HealthAndRecovery_SecondWinds_C Challenge_HealthAndRecovery_SecondWinds.Default__Challenge_HealthAndRecovery_SecondWinds_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_HealthAndRecovery_SecondWinds_C* UChallenge_HealthAndRecovery_SecondWinds_C::GetDefaultObj()
{
	static class UChallenge_HealthAndRecovery_SecondWinds_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_HealthAndRecovery_SecondWinds_C*>(UChallenge_HealthAndRecovery_SecondWinds_C::StaticClass()->DefaultObject);

	return Default;
}

}


