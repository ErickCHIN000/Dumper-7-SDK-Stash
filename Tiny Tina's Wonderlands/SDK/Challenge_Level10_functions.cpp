#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Level10.Challenge_Level10_C
// (None)

class UClass* UChallenge_Level10_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Level10_C");

	return Clss;
}


// Challenge_Level10_C Challenge_Level10.Default__Challenge_Level10_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Level10_C* UChallenge_Level10_C::GetDefaultObj()
{
	static class UChallenge_Level10_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Level10_C*>(UChallenge_Level10_C::StaticClass()->DefaultObject);

	return Default;
}

}

