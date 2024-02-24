#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_DungeonObeliskEnemies.Challenge_DungeonObeliskEnemies_C
// (None)

class UClass* UChallenge_DungeonObeliskEnemies_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_DungeonObeliskEnemies_C");

	return Clss;
}


// Challenge_DungeonObeliskEnemies_C Challenge_DungeonObeliskEnemies.Default__Challenge_DungeonObeliskEnemies_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_DungeonObeliskEnemies_C* UChallenge_DungeonObeliskEnemies_C::GetDefaultObj()
{
	static class UChallenge_DungeonObeliskEnemies_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_DungeonObeliskEnemies_C*>(UChallenge_DungeonObeliskEnemies_C::StaticClass()->DefaultObject);

	return Default;
}

}


