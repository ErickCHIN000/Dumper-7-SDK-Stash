#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UnderdogSpawner.UnderdogSpawner_C
// (Actor)

class UClass* AUnderdogSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UnderdogSpawner_C");

	return Clss;
}


// UnderdogSpawner_C UnderdogSpawner.Default__UnderdogSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUnderdogSpawner_C* AUnderdogSpawner_C::GetDefaultObj()
{
	static class AUnderdogSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUnderdogSpawner_C*>(AUnderdogSpawner_C::StaticClass()->DefaultObject);

	return Default;
}

}


