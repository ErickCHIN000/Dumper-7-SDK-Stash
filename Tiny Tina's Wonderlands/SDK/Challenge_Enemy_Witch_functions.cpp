#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Enemy_Witch.Challenge_Enemy_Witch_C
// (None)

class UClass* UChallenge_Enemy_Witch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Enemy_Witch_C");

	return Clss;
}


// Challenge_Enemy_Witch_C Challenge_Enemy_Witch.Default__Challenge_Enemy_Witch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Enemy_Witch_C* UChallenge_Enemy_Witch_C::GetDefaultObj()
{
	static class UChallenge_Enemy_Witch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Enemy_Witch_C*>(UChallenge_Enemy_Witch_C::StaticClass()->DefaultObject);

	return Default;
}

}


