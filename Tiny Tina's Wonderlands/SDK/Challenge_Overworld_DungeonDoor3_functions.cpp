#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Overworld_DungeonDoor3.Challenge_Overworld_DungeonDoor3_C
// (None)

class UClass* UChallenge_Overworld_DungeonDoor3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Overworld_DungeonDoor3_C");

	return Clss;
}


// Challenge_Overworld_DungeonDoor3_C Challenge_Overworld_DungeonDoor3.Default__Challenge_Overworld_DungeonDoor3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Overworld_DungeonDoor3_C* UChallenge_Overworld_DungeonDoor3_C::GetDefaultObj()
{
	static class UChallenge_Overworld_DungeonDoor3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Overworld_DungeonDoor3_C*>(UChallenge_Overworld_DungeonDoor3_C::StaticClass()->DefaultObject);

	return Default;
}

}


