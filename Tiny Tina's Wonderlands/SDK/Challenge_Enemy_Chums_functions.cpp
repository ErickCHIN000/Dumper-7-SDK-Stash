#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Enemy_Chums.Challenge_Enemy_Chums_C
// (None)

class UClass* UChallenge_Enemy_Chums_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Enemy_Chums_C");

	return Clss;
}


// Challenge_Enemy_Chums_C Challenge_Enemy_Chums.Default__Challenge_Enemy_Chums_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Enemy_Chums_C* UChallenge_Enemy_Chums_C::GetDefaultObj()
{
	static class UChallenge_Enemy_Chums_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Enemy_Chums_C*>(UChallenge_Enemy_Chums_C::StaticClass()->DefaultObject);

	return Default;
}

}


