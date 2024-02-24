#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Barbarian_LongEnrage.Challenge_Barbarian_LongEnrage_C
// (None)

class UClass* UChallenge_Barbarian_LongEnrage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Barbarian_LongEnrage_C");

	return Clss;
}


// Challenge_Barbarian_LongEnrage_C Challenge_Barbarian_LongEnrage.Default__Challenge_Barbarian_LongEnrage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Barbarian_LongEnrage_C* UChallenge_Barbarian_LongEnrage_C::GetDefaultObj()
{
	static class UChallenge_Barbarian_LongEnrage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Barbarian_LongEnrage_C*>(UChallenge_Barbarian_LongEnrage_C::StaticClass()->DefaultObject);

	return Default;
}

}


