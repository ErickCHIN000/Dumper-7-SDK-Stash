#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_VaultReward.Challenge_VaultReward_C
// (None)

class UClass* UChallenge_VaultReward_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_VaultReward_C");

	return Clss;
}


// Challenge_VaultReward_C Challenge_VaultReward.Default__Challenge_VaultReward_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_VaultReward_C* UChallenge_VaultReward_C::GetDefaultObj()
{
	static class UChallenge_VaultReward_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_VaultReward_C*>(UChallenge_VaultReward_C::StaticClass()->DefaultObject);

	return Default;
}

}


