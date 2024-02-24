#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Rogue_SlayWithKnife.Challenge_Rogue_SlayWithKnife_C
// (None)

class UClass* UChallenge_Rogue_SlayWithKnife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Rogue_SlayWithKnife_C");

	return Clss;
}


// Challenge_Rogue_SlayWithKnife_C Challenge_Rogue_SlayWithKnife.Default__Challenge_Rogue_SlayWithKnife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Rogue_SlayWithKnife_C* UChallenge_Rogue_SlayWithKnife_C::GetDefaultObj()
{
	static class UChallenge_Rogue_SlayWithKnife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Rogue_SlayWithKnife_C*>(UChallenge_Rogue_SlayWithKnife_C::StaticClass()->DefaultObject);

	return Default;
}

}


