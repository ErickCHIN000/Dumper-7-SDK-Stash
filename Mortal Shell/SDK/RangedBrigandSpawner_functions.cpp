#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RangedBrigandSpawner.RangedBrigandSpawner_C
// (Actor)

class UClass* ARangedBrigandSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedBrigandSpawner_C");

	return Clss;
}


// RangedBrigandSpawner_C RangedBrigandSpawner.Default__RangedBrigandSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARangedBrigandSpawner_C* ARangedBrigandSpawner_C::GetDefaultObj()
{
	static class ARangedBrigandSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARangedBrigandSpawner_C*>(ARangedBrigandSpawner_C::StaticClass()->DefaultObject);

	return Default;
}

}


