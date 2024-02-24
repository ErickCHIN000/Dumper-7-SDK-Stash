#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Enemy_FinalChums.Challenge_Enemy_FinalChums_C
// (None)

class UClass* UChallenge_Enemy_FinalChums_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Enemy_FinalChums_C");

	return Clss;
}


// Challenge_Enemy_FinalChums_C Challenge_Enemy_FinalChums.Default__Challenge_Enemy_FinalChums_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Enemy_FinalChums_C* UChallenge_Enemy_FinalChums_C::GetDefaultObj()
{
	static class UChallenge_Enemy_FinalChums_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Enemy_FinalChums_C*>(UChallenge_Enemy_FinalChums_C::StaticClass()->DefaultObject);

	return Default;
}

}


