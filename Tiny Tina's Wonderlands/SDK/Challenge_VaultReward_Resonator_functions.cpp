#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_VaultReward_Resonator.Challenge_VaultReward_Resonator_C
// (None)

class UClass* UChallenge_VaultReward_Resonator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_VaultReward_Resonator_C");

	return Clss;
}


// Challenge_VaultReward_Resonator_C Challenge_VaultReward_Resonator.Default__Challenge_VaultReward_Resonator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_VaultReward_Resonator_C* UChallenge_VaultReward_Resonator_C::GetDefaultObj()
{
	static class UChallenge_VaultReward_Resonator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_VaultReward_Resonator_C*>(UChallenge_VaultReward_Resonator_C::StaticClass()->DefaultObject);

	return Default;
}

}


