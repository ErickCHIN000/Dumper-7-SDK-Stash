#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass A_MushroomCompanion_Spawn.A_MushroomCompanion_Spawn_C
// (None)

class UClass* UA_MushroomCompanion_Spawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("A_MushroomCompanion_Spawn_C");

	return Clss;
}


// A_MushroomCompanion_Spawn_C A_MushroomCompanion_Spawn.Default__A_MushroomCompanion_Spawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UA_MushroomCompanion_Spawn_C* UA_MushroomCompanion_Spawn_C::GetDefaultObj()
{
	static class UA_MushroomCompanion_Spawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UA_MushroomCompanion_Spawn_C*>(UA_MushroomCompanion_Spawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


