#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Overworld_DungeonDoor1.Challenge_Overworld_DungeonDoor1_C
// (None)

class UClass* UChallenge_Overworld_DungeonDoor1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Overworld_DungeonDoor1_C");

	return Clss;
}


// Challenge_Overworld_DungeonDoor1_C Challenge_Overworld_DungeonDoor1.Default__Challenge_Overworld_DungeonDoor1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Overworld_DungeonDoor1_C* UChallenge_Overworld_DungeonDoor1_C::GetDefaultObj()
{
	static class UChallenge_Overworld_DungeonDoor1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Overworld_DungeonDoor1_C*>(UChallenge_Overworld_DungeonDoor1_C::StaticClass()->DefaultObject);

	return Default;
}

}


