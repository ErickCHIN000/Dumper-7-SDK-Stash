#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARand_MushroomCompanion_KillEnemyResponses.ARand_MushroomCompanion_KillEnemyResponses_C
// (None)

class UClass* UARand_MushroomCompanion_KillEnemyResponses_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARand_MushroomCompanion_KillEnemyResponses_C");

	return Clss;
}


// ARand_MushroomCompanion_KillEnemyResponses_C ARand_MushroomCompanion_KillEnemyResponses.Default__ARand_MushroomCompanion_KillEnemyResponses_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARand_MushroomCompanion_KillEnemyResponses_C* UARand_MushroomCompanion_KillEnemyResponses_C::GetDefaultObj()
{
	static class UARand_MushroomCompanion_KillEnemyResponses_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARand_MushroomCompanion_KillEnemyResponses_C*>(UARand_MushroomCompanion_KillEnemyResponses_C::StaticClass()->DefaultObject);

	return Default;
}

}


