#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Rogue_MaxFollowUp.Challenge_Rogue_MaxFollowUp_C
// (None)

class UClass* UChallenge_Rogue_MaxFollowUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Rogue_MaxFollowUp_C");

	return Clss;
}


// Challenge_Rogue_MaxFollowUp_C Challenge_Rogue_MaxFollowUp.Default__Challenge_Rogue_MaxFollowUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Rogue_MaxFollowUp_C* UChallenge_Rogue_MaxFollowUp_C::GetDefaultObj()
{
	static class UChallenge_Rogue_MaxFollowUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Rogue_MaxFollowUp_C*>(UChallenge_Rogue_MaxFollowUp_C::StaticClass()->DefaultObject);

	return Default;
}

}


