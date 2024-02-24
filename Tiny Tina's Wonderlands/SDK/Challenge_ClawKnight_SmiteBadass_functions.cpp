#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_ClawKnight_SmiteBadass.Challenge_ClawKnight_SmiteBadass_C
// (None)

class UClass* UChallenge_ClawKnight_SmiteBadass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_ClawKnight_SmiteBadass_C");

	return Clss;
}


// Challenge_ClawKnight_SmiteBadass_C Challenge_ClawKnight_SmiteBadass.Default__Challenge_ClawKnight_SmiteBadass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_ClawKnight_SmiteBadass_C* UChallenge_ClawKnight_SmiteBadass_C::GetDefaultObj()
{
	static class UChallenge_ClawKnight_SmiteBadass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_ClawKnight_SmiteBadass_C*>(UChallenge_ClawKnight_SmiteBadass_C::StaticClass()->DefaultObject);

	return Default;
}

}


