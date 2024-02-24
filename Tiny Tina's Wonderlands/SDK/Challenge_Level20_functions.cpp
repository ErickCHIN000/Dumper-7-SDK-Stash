#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Level20.Challenge_Level20_C
// (None)

class UClass* UChallenge_Level20_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Level20_C");

	return Clss;
}


// Challenge_Level20_C Challenge_Level20.Default__Challenge_Level20_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Level20_C* UChallenge_Level20_C::GetDefaultObj()
{
	static class UChallenge_Level20_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Level20_C*>(UChallenge_Level20_C::StaticClass()->DefaultObject);

	return Default;
}

}


