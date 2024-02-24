#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Enemy_Troll.Challenge_Enemy_Troll_C
// (None)

class UClass* UChallenge_Enemy_Troll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Enemy_Troll_C");

	return Clss;
}


// Challenge_Enemy_Troll_C Challenge_Enemy_Troll.Default__Challenge_Enemy_Troll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Enemy_Troll_C* UChallenge_Enemy_Troll_C::GetDefaultObj()
{
	static class UChallenge_Enemy_Troll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Enemy_Troll_C*>(UChallenge_Enemy_Troll_C::StaticClass()->DefaultObject);

	return Default;
}

}


