#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HeavyBrigandSpawner.HeavyBrigandSpawner_C
// (Actor)

class UClass* AHeavyBrigandSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeavyBrigandSpawner_C");

	return Clss;
}


// HeavyBrigandSpawner_C HeavyBrigandSpawner.Default__HeavyBrigandSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHeavyBrigandSpawner_C* AHeavyBrigandSpawner_C::GetDefaultObj()
{
	static class AHeavyBrigandSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHeavyBrigandSpawner_C*>(AHeavyBrigandSpawner_C::StaticClass()->DefaultObject);

	return Default;
}

}


