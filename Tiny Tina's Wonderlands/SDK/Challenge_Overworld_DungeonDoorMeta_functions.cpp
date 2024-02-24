#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Overworld_DungeonDoorMeta.Challenge_Overworld_DungeonDoorMeta_C
// (None)

class UClass* UChallenge_Overworld_DungeonDoorMeta_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Overworld_DungeonDoorMeta_C");

	return Clss;
}


// Challenge_Overworld_DungeonDoorMeta_C Challenge_Overworld_DungeonDoorMeta.Default__Challenge_Overworld_DungeonDoorMeta_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Overworld_DungeonDoorMeta_C* UChallenge_Overworld_DungeonDoorMeta_C::GetDefaultObj()
{
	static class UChallenge_Overworld_DungeonDoorMeta_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Overworld_DungeonDoorMeta_C*>(UChallenge_Overworld_DungeonDoorMeta_C::StaticClass()->DefaultObject);

	return Default;
}

}


