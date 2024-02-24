#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Enemy_DeathKnight.Challenge_Enemy_DeathKnight_C
// (None)

class UClass* UChallenge_Enemy_DeathKnight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Enemy_DeathKnight_C");

	return Clss;
}


// Challenge_Enemy_DeathKnight_C Challenge_Enemy_DeathKnight.Default__Challenge_Enemy_DeathKnight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Enemy_DeathKnight_C* UChallenge_Enemy_DeathKnight_C::GetDefaultObj()
{
	static class UChallenge_Enemy_DeathKnight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Enemy_DeathKnight_C*>(UChallenge_Enemy_DeathKnight_C::StaticClass()->DefaultObject);

	return Default;
}

}


