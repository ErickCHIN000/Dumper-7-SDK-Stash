#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_EndlessDungeonClears.Challenge_EndlessDungeonClears_C
// (None)

class UClass* UChallenge_EndlessDungeonClears_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_EndlessDungeonClears_C");

	return Clss;
}


// Challenge_EndlessDungeonClears_C Challenge_EndlessDungeonClears.Default__Challenge_EndlessDungeonClears_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_EndlessDungeonClears_C* UChallenge_EndlessDungeonClears_C::GetDefaultObj()
{
	static class UChallenge_EndlessDungeonClears_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_EndlessDungeonClears_C*>(UChallenge_EndlessDungeonClears_C::StaticClass()->DefaultObject);

	return Default;
}

}


