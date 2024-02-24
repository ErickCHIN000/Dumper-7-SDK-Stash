#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_TrackedInteraction_GoldenDice_D318EA364903B034610E85A22C93084A.Challenge_TrackedInteraction_GoldenDice_D318EA364903B034610E85A22C93084A_C
// (None)

class UClass* UChallenge_TrackedInteraction_GoldenDice_D318EA364903B034610E85A22C93084A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_TrackedInteraction_GoldenDice_D318EA364903B034610E85A22C93084A_C");

	return Clss;
}


// Challenge_TrackedInteraction_GoldenDice_D318EA364903B034610E85A22C93084A_C Challenge_TrackedInteraction_GoldenDice_D318EA364903B034610E85A22C93084A.Default__Challenge_TrackedInteraction_GoldenDice_D318EA364903B034610E85A22C93084A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_TrackedInteraction_GoldenDice_D318EA364903B034610E85A22C93084A_C* UChallenge_TrackedInteraction_GoldenDice_D318EA364903B034610E85A22C93084A_C::GetDefaultObj()
{
	static class UChallenge_TrackedInteraction_GoldenDice_D318EA364903B034610E85A22C93084A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_TrackedInteraction_GoldenDice_D318EA364903B034610E85A22C93084A_C*>(UChallenge_TrackedInteraction_GoldenDice_D318EA364903B034610E85A22C93084A_C::StaticClass()->DefaultObject);

	return Default;
}

}


