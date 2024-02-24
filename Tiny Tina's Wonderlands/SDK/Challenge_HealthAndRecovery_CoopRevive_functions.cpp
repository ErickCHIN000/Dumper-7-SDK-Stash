#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_HealthAndRecovery_CoopRevive.Challenge_HealthAndRecovery_CoopRevive_C
// (None)

class UClass* UChallenge_HealthAndRecovery_CoopRevive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_HealthAndRecovery_CoopRevive_C");

	return Clss;
}


// Challenge_HealthAndRecovery_CoopRevive_C Challenge_HealthAndRecovery_CoopRevive.Default__Challenge_HealthAndRecovery_CoopRevive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_HealthAndRecovery_CoopRevive_C* UChallenge_HealthAndRecovery_CoopRevive_C::GetDefaultObj()
{
	static class UChallenge_HealthAndRecovery_CoopRevive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_HealthAndRecovery_CoopRevive_C*>(UChallenge_HealthAndRecovery_CoopRevive_C::StaticClass()->DefaultObject);

	return Default;
}

}


