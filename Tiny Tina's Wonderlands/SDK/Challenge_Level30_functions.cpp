#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Level30.Challenge_Level30_C
// (None)

class UClass* UChallenge_Level30_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Level30_C");

	return Clss;
}


// Challenge_Level30_C Challenge_Level30.Default__Challenge_Level30_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Level30_C* UChallenge_Level30_C::GetDefaultObj()
{
	static class UChallenge_Level30_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Level30_C*>(UChallenge_Level30_C::StaticClass()->DefaultObject);

	return Default;
}

}


