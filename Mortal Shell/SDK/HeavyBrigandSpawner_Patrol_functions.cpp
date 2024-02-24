#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HeavyBrigandSpawner_Patrol.HeavyBrigandSpawner_Patrol_C
// (Actor)

class UClass* AHeavyBrigandSpawner_Patrol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeavyBrigandSpawner_Patrol_C");

	return Clss;
}


// HeavyBrigandSpawner_Patrol_C HeavyBrigandSpawner_Patrol.Default__HeavyBrigandSpawner_Patrol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHeavyBrigandSpawner_Patrol_C* AHeavyBrigandSpawner_Patrol_C::GetDefaultObj()
{
	static class AHeavyBrigandSpawner_Patrol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHeavyBrigandSpawner_Patrol_C*>(AHeavyBrigandSpawner_Patrol_C::StaticClass()->DefaultObject);

	return Default;
}

}


